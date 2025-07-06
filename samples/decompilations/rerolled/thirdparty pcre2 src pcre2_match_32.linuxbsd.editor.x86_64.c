undefined8 do_callout(undefined8 *param_1, long param_2, ulong *param_3) {
   undefined8 uVar1;
   uint uVar2;
   int iVar3;
   int *piVar4;
   code *pcVar5;
   long lVar6;
   long lVar7;
   undefined8 uVar8;
   long lVar9;
   undefined8 uVar10;
   piVar4 = (int*)*param_1;
   if (*piVar4 == 0x76) {
      pcVar5 = *(code**)( param_2 + 0x110 );
      *param_3 = (ulong)DAT_0010d076;
   } else {
      pcVar5 = *(code**)( param_2 + 0x110 );
      *param_3 = (ulong)(uint)piVar4[3];
   }
   if (pcVar5 != (code*)0x0) {
      lVar6 = *(long*)( param_2 + 0x100 );
      *(ulong*)( lVar6 + 8 ) = CONCAT44(*(undefined4*)( (long)param_1 + 0x74 ), ( *(uint*)( param_1 + 0x10 ) >> 1 ) + 1);
      uVar1 = *(undefined8*)( param_2 + 0xb8 );
      *(undefined8**)( lVar6 + 0x10 ) = param_1 + 0xf;
      *(undefined8*)( lVar6 + 0x18 ) = uVar1;
      lVar9 = param_1[10];
      lVar7 = *(long*)( param_2 + 0x78 );
      *(ulong*)( lVar6 + 0x40 ) = (ulong)(uint)piVar4[1];
      uVar2 = piVar4[2];
      iVar3 = *piVar4;
      *(long*)( lVar6 + 0x38 ) = lVar9 - lVar7 >> 2;
      *(ulong*)( lVar6 + 0x48 ) = (ulong)uVar2;
      if (iVar3 == 0x76) {
         iVar3 = piVar4[3];
         *(undefined8*)( lVar6 + 0x50 ) = 0;
         *(undefined8*)( lVar6 + 0x60 ) = 0;
         *(int*)( lVar6 + 4 ) = iVar3;
         lVar9 = 0;
      } else {
         *(undefined4*)( lVar6 + 4 ) = 0;
         uVar2 = piVar4[4];
         *(int**)( lVar6 + 0x60 ) = piVar4 + 6;
         *(ulong*)( lVar6 + 0x50 ) = (ulong)uVar2;
         lVar9 = *param_3 - 7;
      }
      *(long*)( lVar6 + 0x58 ) = lVar9;
      uVar1 = param_1[0xf];
      uVar8 = param_1[0x10];
      *(undefined4*)( param_1 + 0xf ) = 0xffffffff;
      *(undefined4*)( (long)param_1 + 0x7c ) = 0xffffffff;
      *(undefined4*)( param_1 + 0x10 ) = 0xffffffff;
      *(undefined4*)( (long)param_1 + 0x84 ) = 0xffffffff;
      uVar10 = ( *pcVar5 )(lVar6, *(undefined8*)( param_2 + 0x108 ));
      param_1[0xf] = uVar1;
      param_1[0x10] = uVar8;
      *(undefined4*)( lVar6 + 0x68 ) = 0;
      return uVar10;
   }
   return 0;
}undefined8 match_ref(ulong param_1, int param_2, long param_3, long param_4, ulong *param_5) {
   long lVar1;
   uint *__s2;
   int iVar2;
   ulong uVar3;
   uint *puVar4;
   uint *puVar5;
   undefined *puVar6;
   uint *puVar7;
   uint *__s1;
   ulong uVar8;
   uint uVar9;
   uint uVar10;
   if (( param_1 < *(ulong*)( param_3 + 0x80 ) ) && ( lVar1 = lVar1 != -1 )) {
      __s2 = *(uint**)( param_3 + 0x50 );
      __s1 = (uint*)( *(long*)( param_4 + 0x78 ) + lVar1 * 4 );
      uVar3 = *(long*)( param_3 + 0x90 + param_1 * 8 ) - lVar1;
      if (param_2 == 0) {
         if (*(short*)( param_4 + 0x60 ) == 0) {
            if (( ulong )(*(long*)( param_4 + 0x88 ) - (long)__s2 >> 2) < uVar3) {
               return 1;
            }
            iVar2 = memcmp(__s1, __s2, uVar3 * 4);
            if (iVar2 != 0) {
               return 0xffffffff;
            }
            uVar3 = (long)( uVar3 * 4 ) >> 2;
            goto LAB_0010024b;
         }
         if (uVar3 == 0) goto LAB_0010024b;
         uVar8 = 0;
         puVar7 = __s2;
         do {
            if (*(uint**)( param_4 + 0x88 ) <= puVar7) {
               return 1;
            }
            puVar4 = puVar7 + 1;
            if (__s1[uVar8] != *puVar7) {
               return 0xffffffff;
            }
            uVar8 = uVar8 + 1;
            puVar7 = puVar4;
         } while ( uVar8 != uVar3 );
      } else {
         if (( *(uint*)( param_4 + 0xd8 ) & 0xa0000 ) != 0) {
            puVar7 = __s1 + uVar3;
            if (__s1 < puVar7) {
               puVar4 = __s2;
               do {
                  if (*(uint**)( param_4 + 0x88 ) <= puVar4) {
                     return 1;
                  }
                  uVar9 = *__s1;
                  puVar5 = puVar4 + 1;
                  __s1 = __s1 + 1;
                  puVar6 = &_pcre2_dummy_ucd_record_32;
                  uVar10 = *puVar4;
                  if (uVar9 < 0x110000) {
                     puVar6 = &_pcre2_ucd_records_32 + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_32 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_32 + (long)( (int)uVar9 >> 7 ) * 2 ) * 0x80 + ( uVar9 & 0x7f ) ) * 2 ) * 0xc;
                  }
                  if (( uVar10 != uVar9 ) && ( uVar9 + *(int*)( puVar6 + 4 ) != uVar10 )) {
                     puVar4 = (uint*)( &_pcre2_ucd_caseless_sets_32 + (ulong)(byte)puVar6[3] * 4 );
                     do {
                        uVar9 = *puVar4;
                        if (uVar10 < uVar9) {
                           return 0xffffffff;
                        }
                        puVar4 = puVar4 + 1;
                     } while ( uVar9 != uVar10 );
                  }
                  puVar4 = puVar5;
               } while ( __s1 < puVar7 );
               uVar3 = (long)puVar5 - (long)__s2 >> 2;
               goto LAB_0010024b;
            }
            goto LAB_00100249;
         }
         if (uVar3 == 0) goto LAB_0010024b;
         uVar8 = 0;
         puVar4 = __s2;
         do {
            if (*(uint**)( param_4 + 0x88 ) <= puVar4) {
               return 1;
            }
            uVar9 = __s1[uVar8];
            uVar10 = *puVar4;
            if (uVar9 < 0x100) {
               if (0xff < uVar10) {
                  return 0xffffffff;
               }
               uVar9 = ( uint ) * (byte*)( *(long*)( param_4 + 0x38 ) + (ulong)uVar9 );
               uVar10 = ( uint ) * (byte*)( *(long*)( param_4 + 0x38 ) + (ulong)uVar10 );
            } else if (uVar10 < 0x100) {
               return 0xffffffff;
            }
            if (uVar10 != uVar9) {
               return 0xffffffff;
            }
            uVar8 = uVar8 + 1;
            puVar4 = puVar4 + 1;
         } while ( uVar3 != uVar8 );
      }
      uVar3 = (long)puVar4 - (long)__s2 >> 2;
   } else {
      if (( *(byte*)( param_4 + 0xd9 ) & 2 ) == 0) {
         return 0xffffffff;
      }
      LAB_00100249:uVar3 = 0;
   }
   LAB_0010024b:*param_5 = uVar3;
   return 0;
}/* WARNING: Type propagation algorithm not settling *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint match_constprop_0(ulong param_1, uint *param_2, ushort param_3, ulong param_4, undefined8 *param_5, long param_6) {
   uint *puVar1;
   ushort uVar2;
   uint uVar3;
   undefined4 uVar4;
   void *__s1;
   undefined8 uVar5;
   undefined4 *puVar6;
   short sVar7;
   int iVar8;
   uint uVar9;
   int *piVar10;
   uint *puVar11;
   void *pvVar12;
   uint *puVar13;
   uint *puVar14;
   ulong uVar15;
   byte bVar16;
   uint uVar17;
   ulong *puVar18;
   int *piVar19;
   long lVar20;
   long lVar21;
   uint uVar22;
   uint uVar23;
   uint uVar24;
   byte *pbVar25;
   ulong uVar26;
   undefined4 *puVar27;
   undefined *puVar28;
   long *plVar29;
   ulong uVar30;
   uint uVar31;
   ulong *puVar32;
   size_t __n;
   long in_FS_OFFSET;
   bool bVar33;
   bool bVar34;
   bool bVar35;
   undefined1 uVar36;
   uint local_b4;
   ulong local_b0;
   ulong *local_a8;
   uint *local_98;
   ulong *local_88;
   size_t local_78;
   long local_50;
   ulong local_48;
   long local_40;
   puVar32 = (ulong*)param_5[6];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar22 = *(uint*)( param_6 + 0xd8 );
   uVar17 = uVar22 & 0x80000;
   bVar34 = uVar17 != 0;
   uVar24 = 0;
   lVar21 = param_5[7];
   puVar32[10] = param_1;
   puVar32[0xb] = param_1;
   uVar15 = _UNK_0010c7b8;
   uVar30 = __LC1;
   local_b0 = lVar21 + (long)puVar32;
   *(undefined4*)( puVar32 + 6 ) = 0;
   uVar26 = _LC0;
   puVar32[0xc] = 0;
   puVar32[0xe] = uVar26;
   puVar32[0xf] = uVar30;
   puVar32[0x10] = uVar15;
   local_b4 = 0;
   local_98 = (uint*)0x0;
   local_88 = (ulong*)0x0;
   local_a8 = (ulong*)0x0;
   LAB_001004a0:*(uint*)( (long)puVar32 + 0x34 ) = uVar24;
   *puVar32 = (ulong)param_2;
   puVar32[4] = param_4;
   if (( uVar24 != 0 ) && ( puVar32[0xf] = (long)puVar32 - param_5[6](uVar24 & 0xffff0000) == 0x40000 )) {
      *(uint*)( puVar32 + 0xe ) = uVar24 & 0xffff;
   }
   uVar24 = *(uint*)( param_6 + 0x24 );
   *(uint*)( param_6 + 0x24 ) = uVar24 + 1;
   if (uVar24 < *(uint*)( param_6 + 0x1c )) {
      if ((uint)puVar32[6] < *(uint*)( param_6 + 0x20 )) {
         LAB_00100507:puVar13 = (uint*)*puVar32;
         uVar31 = *puVar13;
         uVar26 = (ulong)uVar31;
         bVar16 = (byte)uVar31;
         *(byte*)( (long)puVar32 + 0x49 ) = bVar16;
         switch (bVar16) {
            case 0:
switchD_00100529_caseD_0:
        uVar26 = puVar32[10];
        uVar30 = puVar32[0xb];
        if ((uVar26 == uVar30) &&
           (((*(uint *)(param_6 + 0xd4) & 4) != 0 ||
            (((*(uint *)(param_6 + 0xd4) & 8) != 0 &&
             (uVar26 == *(long *)(param_6 + 0x78) + *(long *)(param_6 + 0x50) * 4)))))) break;
        if ((*(ulong *)(param_6 + 0x88) <= uVar26) ||
           (((*(uint *)(param_6 + 0xd4) | *(uint *)(param_6 + 0xd8)) & 0x20000000) == 0)) {
          *(ulong *)(param_6 + 0x98) = uVar26;
          *(ulong *)(param_6 + 0x58) = puVar32[0x10];
          *(ulong *)(param_6 + 0xb0) = puVar32[0xc];
          if (*(ulong *)(param_6 + 0xa8) < uVar26) {
            *(ulong *)(param_6 + 0xa8) = uVar26;
          }
          lVar21 = *(long *)(param_6 + 0x78);
          param_5[0xe] = (long)(uVar26 - lVar21) >> 2;
          uVar2 = *(ushort *)((long)param_5 + 0x62);
          param_5[0xd] = (long)(uVar30 - lVar21) >> 2;
          if (param_3 < uVar2) {
            uVar22 = (uint)param_3 * 2 + 2;
          }
          else {
            uVar22 = (uint)uVar2 + (uint)uVar2;
          }
          memcpy(param_5 + 0xf,puVar32 + 0x11,(ulong)(uVar22 - 2) << 3);
          uVar26 = puVar32[0x10];
          while( true ) {
            uVar22 = uVar22 - 1;
            if ((ulong)uVar22 < uVar26 + 2) break;
            param_5[(ulong)uVar22 + 0xd] = 0xffffffffffffffff;
          }
          uVar24 = 1;
          goto LAB_00101ae4;
        }
        if (bVar16 != 0) {
          uVar24 = 0;
          goto LAB_00101ae4;
        }
        break;
            case 1:
        if (puVar32[10] == *(ulong *)(param_6 + 0x78)) goto LAB_00101c81;
        break;
            case 2:
        if (puVar32[10] == *(long *)(param_6 + 0x78) + *(long *)(param_6 + 0x50) * 4)
        goto LAB_00101c81;
        break;
            case 3:
        puVar32[0xb] = puVar32[10];
LAB_00101c81:
        *puVar32 = (ulong)(puVar13 + 1);
        goto LAB_00100507;
            case 4:
            case 5:
            case 0xa9:
            case 0xaa:
        puVar11 = (uint *)puVar32[10];
        if (puVar11 == *(uint **)(param_6 + 0x80)) {
LAB_00107e60:
          uVar24 = 0;
        }
        else {
          uVar24 = puVar11[-1];
          if (puVar11 + -1 < *(uint **)(param_6 + 0xa0)) {
            *(uint **)(param_6 + 0xa0) = puVar11 + -1;
          }
          if ((byte)(bVar16 + 0x57) < 2) {
            puVar28 = &_pcre2_dummy_ucd_record_32;
            if (uVar24 < 0x110000) {
              puVar28 = &_pcre2_ucd_records_32 +
                        (ulong)*(ushort *)
                                (&_pcre2_ucd_stage2_32 +
                                (long)(int)((uVar24 & 0x7f) +
                                           (uint)*(ushort *)
                                                  (&_pcre2_ucd_stage1_32 +
                                                  (long)((int)uVar24 >> 7) * 2) * 0x80) * 2) * 0xc;
            }
            uVar24 = 1;
            if ((*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)(byte)puVar28[1] * 4) & 0xfffffffd) != 1)
            {
              uVar24 = (uint)((puVar28[1] - 0xc & 0xfb) == 0);
            }
          }
          else {
            if (0xff < uVar24) goto LAB_00107e60;
            uVar24 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar24) >> 4 & 1;
          }
        }
        if (puVar11 < *(uint **)(param_6 + 0x88)) {
          uVar9 = *puVar11;
          if (*(uint **)(param_6 + 0xa8) < puVar11 + 1) {
            *(uint **)(param_6 + 0xa8) = puVar11 + 1;
          }
          if ((byte)(bVar16 + 0x57) < 2) {
            puVar28 = &_pcre2_dummy_ucd_record_32;
            if (uVar9 < 0x110000) {
              puVar28 = &_pcre2_ucd_records_32 +
                        (ulong)*(ushort *)
                                (&_pcre2_ucd_stage2_32 +
                                (long)(int)((uVar9 & 0x7f) +
                                           (uint)*(ushort *)
                                                  (&_pcre2_ucd_stage1_32 +
                                                  (long)((int)uVar9 >> 7) * 2) * 0x80) * 2) * 0xc;
            }
            uVar9 = 1;
            if ((*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)(byte)puVar28[1] * 4) & 0xfffffffd) != 1)
            {
              uVar9 = (uint)((puVar28[1] - 0xc & 0xfb) == 0);
            }
            goto LAB_00102c09;
          }
          if (0xff < uVar9) {
            *puVar32 = (ulong)(puVar13 + 1);
            if (uVar31 != 5) goto LAB_00107eb5;
LAB_00107779:
            uVar9 = 0;
            goto LAB_0010777b;
          }
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar9);
          *puVar32 = (ulong)(puVar13 + 1);
          if ((bVar16 & 0x10) == 0) {
            if (uVar31 == 5) goto LAB_00107779;
LAB_00107eb5:
            uVar9 = 0;
          }
          else {
            uVar9 = 1;
            if (uVar31 == 5) goto LAB_0010777b;
          }
        }
        else {
          if ((*(short *)(param_6 + 0x60) != 0) &&
             (((*(uint **)(param_6 + 0xa0) < puVar11 || (*(int *)(param_6 + 0x30) != 0)) &&
              (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
          goto LAB_00102a51;
          uVar9 = 0;
LAB_00102c09:
          uVar31 = *puVar13;
          *puVar32 = (ulong)(puVar13 + 1);
          if ((uVar31 == 5) || (bVar16 == 0xaa)) {
LAB_0010777b:
            if (uVar24 == uVar9) break;
            goto LAB_00100507;
          }
        }
        if (uVar24 == uVar9) goto LAB_00100507;
        break;
            case 6:
        puVar11 = (uint *)puVar32[10];
        if (puVar11 < *(uint **)(param_6 + 0x88)) {
          uVar24 = *puVar11;
          puVar32[10] = (ulong)(puVar11 + 1);
          if (uVar24 < 0x100) {
            bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar24) & 8;
joined_r0x00103e57:
            if (bVar16 == 0) break;
          }
          goto LAB_00103976;
        }
LAB_00104990:
        sVar7 = *(short *)(param_6 + 0x60);
        if (sVar7 != 0) {
          if (puVar11 <= *(uint **)(param_6 + 0xa0)) {
LAB_0010054f:
            if (*(int *)(param_6 + 0x30) == 0) break;
          }
LAB_00100558:
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00103704;
        }
        break;
            case 7:
        puVar11 = (uint *)puVar32[10];
        if (*(uint **)(param_6 + 0x88) <= puVar11) goto LAB_00104990;
        uVar24 = *puVar11;
        puVar32[10] = (ulong)(puVar11 + 1);
        if ((uVar24 < 0x100) && ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar24) & 8) != 0))
        goto LAB_00101c81;
        break;
            case 8:
        puVar11 = (uint *)puVar32[10];
        if (*(uint **)(param_6 + 0x88) <= puVar11) goto LAB_00104990;
        uVar24 = *puVar11;
        puVar32[10] = (ulong)(puVar11 + 1);
        if (uVar24 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar24) & 1;
          goto joined_r0x00103e57;
        }
        goto LAB_00103976;
            case 9:
        puVar11 = (uint *)puVar32[10];
        if (*(uint **)(param_6 + 0x88) <= puVar11) goto LAB_00104990;
        uVar24 = *puVar11;
        puVar32[10] = (ulong)(puVar11 + 1);
        if (uVar24 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar24) & 1;
          goto joined_r0x00103e57;
        }
        break;
            case 10:
        puVar11 = (uint *)puVar32[10];
        if (*(uint **)(param_6 + 0x88) <= puVar11) goto LAB_00104990;
        uVar24 = *puVar11;
        puVar32[10] = (ulong)(puVar11 + 1);
        if (uVar24 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar24) & 0x10;
          goto joined_r0x00103e57;
        }
        goto LAB_00103976;
            case 0xb:
        puVar11 = (uint *)puVar32[10];
        if (*(uint **)(param_6 + 0x88) <= puVar11) goto LAB_00104990;
        uVar24 = *puVar11;
        puVar32[10] = (ulong)(puVar11 + 1);
        if (uVar24 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar24) & 0x10;
          goto joined_r0x00103e57;
        }
        break;
            case 0xc:
        piVar10 = (int *)puVar32[10];
        if (*(int *)(param_6 + 0xe4) == 0) {
          if ((((int *)(*(long *)(param_6 + 0x88) + (ulong)*(uint *)(param_6 + 0xe8) * -4) < piVar10
               ) || (*piVar10 != *(int *)(param_6 + 0xec))) ||
             ((*(uint *)(param_6 + 0xe8) != 1 && (piVar10[1] != *(int *)(param_6 + 0xf0))))) {
LAB_0010825a:
            sVar7 = *(short *)(param_6 + 0x60);
            if (sVar7 != 0) {
              piVar19 = *(int **)(param_6 + 0x88);
              goto LAB_00103ddf;
            }
            if (piVar10 < *(int **)(param_6 + 0x88)) goto LAB_00106998;
          }
        }
        else {
          piVar19 = *(int **)(param_6 + 0x88);
          if (piVar10 < piVar19) {
            iVar8 = _pcre2_is_newline_32();
            if (iVar8 == 0) {
              piVar10 = (int *)puVar32[10];
              goto LAB_0010825a;
            }
          }
          else {
            sVar7 = *(short *)(param_6 + 0x60);
            if (sVar7 != 0) {
LAB_00103ddf:
              if ((((piVar10 == piVar19 + -1) && (*(int *)(param_6 + 0xe4) == 0)) &&
                  (*(int *)(param_6 + 0xe8) == 2)) && (*piVar10 == *(int *)(param_6 + 0xec))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                if (sVar7 != 1) goto LAB_00102a51;
                if (piVar19 <= piVar10) break;
              }
              else if (piVar19 <= piVar10) goto LAB_00103df8;
LAB_00106998:
              *puVar32 = *puVar32 + 4;
              puVar32[10] = (ulong)(piVar10 + 1);
              goto LAB_00100507;
            }
          }
        }
        break;
            case 0xd:
        piVar10 = (int *)puVar32[10];
        if (piVar10 < *(int **)(param_6 + 0x88)) goto LAB_00106998;
        sVar7 = *(short *)(param_6 + 0x60);
        if (sVar7 != 0) {
LAB_00103df8:
          if ((*(int **)(param_6 + 0xa0) < piVar10) || (*(int *)(param_6 + 0x30) != 0)) {
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x00103704;
          }
        }
        break;
            case 0xe:
        uVar26 = puVar32[10];
        if (*(ulong *)(param_6 + 0x88) <= uVar26) {
          sVar7 = *(short *)(param_6 + 0x60);
          if ((sVar7 == 0) ||
             ((uVar26 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0)))) break;
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00103704;
        }
        puVar32[10] = uVar26 + 4;
        *puVar32 = (ulong)(puVar13 + 1);
        goto LAB_00100507;
            case 0xf:
            case 0x10:
        puVar11 = (uint *)puVar32[10];
        if (*(uint **)(param_6 + 0x88) <= puVar11) {
          sVar7 = *(short *)(param_6 + 0x60);
          if (sVar7 == 0) break;
          if (puVar11 <= *(uint **)(param_6 + 0xa0)) goto LAB_0010054f;
          goto LAB_00100558;
        }
        uVar24 = *puVar11;
        puVar32[10] = (ulong)(puVar11 + 1);
        pbVar25 = &_pcre2_dummy_ucd_record_32;
        if (uVar24 < 0x110000) {
          pbVar25 = &_pcre2_ucd_records_32 +
                    (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_32 +
                            (long)(int)((uint)*(ushort *)
                                               (&_pcre2_ucd_stage1_32 + (long)((int)uVar24 >> 7) * 2
                                               ) * 0x80 + (uVar24 & 0x7f)) * 2) * 0xc;
        }
        switch(puVar13[1]) {
        case 0:
          goto switchD_00107fce_caseD_0;
        case 1:
          uVar36 = (byte)(pbVar25[1] - 8) < 2 || pbVar25[1] == 5;
          break;
        case 2:
          uVar36 = *(uint *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar25[1] * 4) == puVar13[2];
          break;
        case 3:
          uVar36 = puVar13[2] == (uint)pbVar25[1];
          break;
        case 4:
          uVar36 = puVar13[2] == (uint)*pbVar25;
          break;
        case 5:
          uVar24 = puVar13[2];
          uVar36 = true;
          if (uVar24 != *pbVar25) {
            uVar36 = (1 << ((byte)uVar24 & 0x1f) &
                     *(uint *)(&_pcre2_ucd_script_sets_32 +
                              ((ulong)(*(ushort *)(pbVar25 + 8) & 0x3ff) + (ulong)(uVar24 >> 5)) * 4
                              )) != 0;
          }
          break;
        case 6:
          uVar36 = (*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar25[1] * 4) & 0xfffffffd) == 1;
          break;
        case 7:
        case 8:
          if (uVar24 != 0x180e) {
            if (uVar24 < 0x180f) {
              if (uVar24 != 0x85) {
                if (uVar24 < 0x86) {
                  if (uVar24 < 0xe) {
                    if (uVar24 < 9) goto LAB_001080b6;
                  }
                  else if (uVar24 != 0x20) goto LAB_001080b6;
                }
                else if ((uVar24 != 0xa0) && (uVar24 != 0x1680)) goto LAB_001080b6;
              }
            }
            else if (uVar24 < 0x2060) {
              if (uVar24 < 0x2028) {
                if (10 < uVar24 - 0x2000) {
LAB_001080b6:
                  uVar36 = *(int *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar25[1] * 4) == 6;
                  break;
                }
              }
              else if ((0x80000000000083U >> ((ulong)(uVar24 - 0x2028) & 0x3f) & 1) == 0)
              goto LAB_001080b6;
            }
            else if (uVar24 != 0x3000) goto LAB_001080b6;
          }
          goto switchD_00107fce_caseD_0;
        case 9:
          uVar36 = (*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)pbVar25[1] * 4) & 0xfffffffd) == 1 ||
                   (pbVar25[1] - 0xc & 0xfb) == 0;
          break;
        case 10:
          if (uVar24 < 0x110000) {
            puVar11 = (uint *)(&_pcre2_ucd_caseless_sets_32 + (ulong)puVar13[2] * 4);
            do {
              uVar31 = *puVar11;
              if (uVar24 < uVar31) goto joined_r0x00108041;
              puVar11 = puVar11 + 1;
            } while (uVar24 != uVar31);
            goto switchD_00107fce_caseD_0;
          }
          goto joined_r0x00108041;
        case 0xb:
          if (((uVar24 & 0xffffffdf) == 0x40) || (uVar24 == 0x24)) {
            uVar36 = true;
          }
          else {
            uVar36 = uVar24 - 0xa0 < 0xd760 || 0xdfff < uVar24;
          }
          break;
        case 0xc:
          uVar36 = (uint)(*(ushort *)(pbVar25 + 8) >> 0xb) == puVar13[2];
          break;
        case 0xd:
          uVar36 = (1 << ((byte)puVar13[2] & 0x1f) &
                   *(uint *)(&_pcre2_ucd_boolprop_sets_32 +
                            ((ulong)(*(ushort *)(pbVar25 + 10) & 0xfff) + (ulong)(puVar13[2] >> 5))
                            * 4)) != 0;
          break;
        default:
          goto switchD_00100529_caseD_62;
        }
        if ((bVar16 == 0xf) == (bool)uVar36) break;
LAB_00107fec:
        puVar13 = puVar13 + 3;
        goto LAB_00103620;
            case 0x11:
        puVar11 = (uint *)puVar32[10];
        puVar14 = *(uint **)(param_6 + 0x88);
        if (puVar14 <= puVar11) goto LAB_00104990;
        uVar24 = *puVar11;
        puVar1 = puVar11 + 1;
        puVar32[10] = (ulong)puVar1;
        if (uVar24 == 0xd) {
          if (puVar1 < puVar14) {
            if (puVar11[1] == 10) {
              puVar32[10] = (ulong)(puVar11 + 2);
            }
            goto LAB_00103976;
          }
          if ((*(short *)(param_6 + 0x60) != 0) &&
             (((*(uint **)(param_6 + 0xa0) < puVar1 || (*(int *)(param_6 + 0x30) != 0)) &&
              (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
          goto LAB_00102a51;
        }
        else {
          if (uVar24 < 0xe) {
            if (uVar24 == 10) goto LAB_00103976;
            uVar24 = uVar24 - 0xb;
joined_r0x00108e59:
            if (1 < uVar24) break;
          }
          else if (uVar24 != 0x85) {
            uVar24 = uVar24 - 0x2028;
            goto joined_r0x00108e59;
          }
          if (*(short *)(param_6 + 0x62) == 2) break;
        }
        goto LAB_00103976;
            case 0x12:
        puVar11 = (uint *)puVar32[10];
        if (*(uint **)(param_6 + 0x88) <= puVar11) goto LAB_00104990;
        uVar24 = *puVar11;
        puVar32[10] = (ulong)(puVar11 + 1);
        if (uVar24 != 0x180e) {
          if (uVar24 < 0x180f) {
            if (uVar24 != 0xa0) {
              if (uVar24 < 0xa1) {
                if ((uVar24 != 9) && (uVar24 != 0x20)) goto LAB_00103976;
              }
              else if (uVar24 != 0x1680) goto LAB_00103976;
            }
          }
          else if (uVar24 != 0x205f) {
            if (uVar24 < 0x2060) {
              if (uVar24 < 0x200b) {
                if (uVar24 < 0x2000) goto LAB_00103976;
              }
              else if (uVar24 != 0x202f) goto LAB_00103976;
            }
            else {
joined_r0x00109e36:
              if (uVar24 == 0x3000) goto LAB_00103976;
            }
          }
        }
        break;
            case 0x13:
        puVar11 = (uint *)puVar32[10];
        if (*(uint **)(param_6 + 0x88) <= puVar11) goto LAB_00104990;
        uVar24 = *puVar11;
        puVar32[10] = (ulong)(puVar11 + 1);
        if (uVar24 != 0x180e) {
          if (uVar24 < 0x180f) {
            if (uVar24 != 0xa0) {
              if (uVar24 < 0xa1) {
                if ((uVar24 == 9) || (uVar24 == 0x20)) goto LAB_00103976;
              }
              else if (uVar24 == 0x1680) goto LAB_00103976;
              break;
            }
          }
          else if (uVar24 != 0x205f) {
            if (0x205f < uVar24) goto joined_r0x00109e36;
            if (uVar24 < 0x200b) {
              if (0x1fff < uVar24) goto LAB_00103976;
            }
            else if (uVar24 == 0x202f) goto LAB_00103976;
            break;
          }
        }
LAB_00103976:
        puVar13 = puVar13 + 1;
LAB_00103620:
        *puVar32 = (ulong)puVar13;
        goto LAB_00100507;
            case 0x14:
        puVar11 = (uint *)puVar32[10];
        if (*(uint **)(param_6 + 0x88) <= puVar11) goto LAB_00104990;
        uVar24 = *puVar11;
        puVar32[10] = (ulong)(puVar11 + 1);
        if (uVar24 != 0x85) {
          if (uVar24 < 0x86) {
            if (3 < uVar24 - 10) goto LAB_00103976;
          }
          else if (1 < uVar24 - 0x2028) goto LAB_00103976;
        }
        break;
            case 0x15:
        puVar11 = (uint *)puVar32[10];
        if (*(uint **)(param_6 + 0x88) <= puVar11) goto LAB_00104990;
        uVar24 = *puVar11;
        puVar32[10] = (ulong)(puVar11 + 1);
        if (uVar24 == 0x85) goto LAB_00103976;
        if (uVar24 < 0x86) {
          if (uVar24 - 10 < 4) goto LAB_00103976;
        }
        else if (uVar24 - 0x2028 < 2) goto LAB_00103976;
        break;
            case 0x16:
        puVar27 = (undefined4 *)puVar32[10];
        puVar6 = *(undefined4 **)(param_6 + 0x88);
        if (puVar27 < puVar6) {
          uVar5 = *(undefined8 *)(param_6 + 0x78);
          uVar4 = *puVar27;
          puVar32[10] = (ulong)(puVar27 + 1);
          uVar26 = _pcre2_extuni_32(uVar4,puVar27 + 1,uVar5,puVar6,bVar34,0);
          puVar32[10] = uVar26;
          if ((((uVar26 < *(ulong *)(param_6 + 0x88)) || (*(short *)(param_6 + 0x60) == 0)) ||
              ((uVar26 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0)))) ||
             (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) == 1)) {
            puVar13 = (uint *)*puVar32;
            goto LAB_00103976;
          }
          goto LAB_00102a51;
        }
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(undefined4 **)(param_6 + 0xa0) < puVar27 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00103704;
        }
        break;
            case 0x17:
switchD_00100529_caseD_17:
        piVar10 = (int *)puVar32[10];
        piVar19 = *(int **)(param_6 + 0x88);
        if (piVar19 <= piVar10) {
LAB_001033e9:
          if ((*(short *)(param_6 + 0x60) != 0) &&
             (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
          goto LAB_00102a51;
LAB_00100d9a:
          *puVar32 = *puVar32 + 4;
          goto LAB_00100507;
        }
        if (*(int *)(param_6 + 0xe4) == 0) {
          if (((piVar10 <= piVar19 + -(ulong)*(uint *)(param_6 + 0xe8)) &&
              (*piVar10 == *(int *)(param_6 + 0xec))) &&
             ((*(uint *)(param_6 + 0xe8) == 1 || (piVar10[1] == *(int *)(param_6 + 0xf0))))) {
LAB_001033d2:
            if ((int *)puVar32[10] == piVar19 + -(ulong)*(uint *)(param_6 + 0xe8))
            goto LAB_001033e9;
          }
        }
        else {
          iVar8 = _pcre2_is_newline_32();
          if (iVar8 != 0) {
            piVar19 = *(int **)(param_6 + 0x88);
            goto LAB_001033d2;
          }
        }
        sVar7 = *(short *)(param_6 + 0x60);
        if (((sVar7 != 0) &&
            (((*(int **)(param_6 + 0x88) <= (int *)puVar32[10] + 1 &&
              (*(int *)(param_6 + 0xe4) == 0)) && (*(int *)(param_6 + 0xe8) == 2)))) &&
           (*(int *)puVar32[10] == *(int *)(param_6 + 0xec))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00103704;
        }
        break;
            case 0x18:
switchD_00100529_caseD_18:
        if (*(ulong *)(param_6 + 0x90) <= puVar32[10]) {
          if ((*(short *)(param_6 + 0x60) == 0) ||
             (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) == 1))
          goto LAB_00101c81;
          goto LAB_00102a51;
        }
        break;
            case 0x19:
        if ((*(byte *)(param_6 + 0xd4) & 2) == 0) {
          if ((*(byte *)(param_6 + 0xd8) & 0x10) != 0) goto switchD_00100529_caseD_18;
          goto switchD_00100529_caseD_17;
        }
        break;
            case 0x1a:
        piVar10 = (int *)puVar32[10];
        if (piVar10 < *(int **)(param_6 + 0x88)) {
          if (*(int *)(param_6 + 0xe4) != 0) {
            iVar8 = _pcre2_is_newline_32();
            if (iVar8 == 0) goto LAB_00103a45;
            goto LAB_00100d9a;
          }
          if (((piVar10 <= *(int **)(param_6 + 0x88) + -(ulong)*(uint *)(param_6 + 0xe8)) &&
              (*piVar10 == *(int *)(param_6 + 0xec))) &&
             ((*(uint *)(param_6 + 0xe8) == 1 || (piVar10[1] == *(int *)(param_6 + 0xf0)))))
          goto LAB_00100d9a;
LAB_00103a45:
          sVar7 = *(short *)(param_6 + 0x60);
          if ((((sVar7 == 0) || ((int *)puVar32[10] + 1 < *(int **)(param_6 + 0x88))) ||
              (*(int *)(param_6 + 0xe4) != 0)) ||
             ((*(int *)(param_6 + 0xe8) != 2 || (*(int *)puVar32[10] != *(int *)(param_6 + 0xec)))))
          break;
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00106fcd;
        }
        if ((*(byte *)(param_6 + 0xd4) & 2) != 0) break;
        if (((*(short *)(param_6 + 0x60) == 0) ||
            ((piVar10 <= *(int **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0)))) ||
           (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) == 1))
        goto LAB_00100d9a;
        goto LAB_00102a51;
            case 0x1b:
        if ((puVar32[10] == *(ulong *)(param_6 + 0x78)) && ((*(byte *)(param_6 + 0xd4) & 1) == 0))
        goto LAB_00101c81;
        break;
            case 0x1c:
        uVar26 = puVar32[10];
        uVar30 = *(ulong *)(param_6 + 0x78);
        if ((*(byte *)(param_6 + 0xd4) & 1) == 0) {
          if (uVar26 == uVar30) goto LAB_00100d9a;
        }
        else if (uVar26 == uVar30) break;
        if ((*(ulong *)(param_6 + 0x88) != uVar26) || ((*(byte *)(param_6 + 0xda) & 0x20) != 0)) {
          if (*(int *)(param_6 + 0xe4) == 0) {
            uVar15 = (ulong)*(uint *)(param_6 + 0xe8);
            if (((uVar26 < uVar30 + uVar15 * 4) ||
                (*(int *)(uVar26 + uVar15 * -4) != *(int *)(param_6 + 0xec))) ||
               ((*(uint *)(param_6 + 0xe8) != 1 &&
                (*(int *)(uVar26 + (1 - uVar15) * 4) != *(int *)(param_6 + 0xf0))))) break;
          }
          else if ((uVar26 <= uVar30) || (iVar8 = _pcre2_was_newline_32(), iVar8 == 0)) break;
          goto LAB_00100d9a;
        }
        break;
            case 0x1d:
        if (uVar17 == 0) {
          puVar11 = (uint *)puVar32[10];
          if (*(uint **)(param_6 + 0x88) == puVar11 ||
              (long)*(uint **)(param_6 + 0x88) - (long)puVar11 < 0) {
            sVar7 = *(short *)(param_6 + 0x60);
            if ((sVar7 != 0) &&
               ((*(uint **)(param_6 + 0xa0) < puVar11 || (*(int *)(param_6 + 0x30) != 0)))) {
              *(undefined4 *)(param_6 + 0x28) = 1;
              goto joined_r0x00103704;
            }
          }
          else {
            uVar24 = puVar13[1];
            puVar32[10] = (ulong)(puVar11 + 1);
            if (uVar24 == *puVar11) goto LAB_001038d8;
          }
        }
        else {
          puVar32[3] = 1;
          *puVar32 = (ulong)(puVar13 + 1);
          puVar11 = (uint *)puVar32[10];
          if (*(uint **)(param_6 + 0x88) == puVar11) {
            sVar7 = *(short *)(param_6 + 0x60);
            if ((sVar7 != 0) &&
               ((*(uint **)(param_6 + 0xa0) < puVar11 || (*(int *)(param_6 + 0x30) != 0)))) {
              *(undefined4 *)(param_6 + 0x28) = 1;
              goto joined_r0x00103704;
            }
          }
          else {
            uVar24 = puVar13[1];
            *puVar32 = (ulong)(puVar13 + 2);
            puVar32[10] = (ulong)(puVar11 + 1);
            if (uVar24 == *puVar11) {
              puVar32[3] = 0;
              goto LAB_00100507;
            }
          }
        }
        break;
            case 0x1e:
        puVar11 = (uint *)puVar32[10];
        if (puVar11 < *(uint **)(param_6 + 0x88)) {
          if (uVar17 == 0) {
            if ((uVar22 & 0x20000) != 0) {
              uVar24 = puVar13[1];
              uVar31 = *puVar11;
              if (uVar24 < 0x80) {
                if ((0xff < uVar31) ||
                   (*(char *)(*(long *)(param_6 + 0x38) + (ulong)uVar24) !=
                    *(char *)(*(long *)(param_6 + 0x38) + (ulong)uVar31))) break;
              }
              else if (uVar31 != uVar24) {
                puVar28 = &_pcre2_dummy_ucd_record_32;
                if (uVar24 < 0x110000) {
                  puVar28 = &_pcre2_ucd_records_32 +
                            (ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_32 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_32 +
                                                       (long)((int)uVar24 >> 7) * 2) * 0x80 +
                                               (uVar24 & 0x7f)) * 2) * 0xc;
                }
                if (uVar31 != uVar24 + *(int *)(puVar28 + 4)) break;
              }
LAB_00108921:
              puVar32[10] = (ulong)(puVar11 + 1);
              goto LAB_001038d8;
            }
            uVar24 = puVar13[1];
            if (uVar24 < 0x100) {
              uVar24 = (uint)*(byte *)(*(long *)(param_6 + 0x38) + (ulong)uVar24);
              if (*puVar11 < 0x100) {
                uVar31 = (uint)*(byte *)(*(long *)(param_6 + 0x38) + (ulong)*puVar11);
                goto LAB_00109375;
              }
            }
            else {
              uVar31 = *puVar11;
              if (0xff < uVar31) {
LAB_00109375:
                if (uVar31 == uVar24) goto LAB_00108921;
              }
            }
          }
          else {
            puVar32[3] = 1;
            *puVar32 = (ulong)(puVar13 + 1);
            uVar24 = puVar13[1];
            if (uVar24 < 0x80) {
              if ((*puVar11 < 0x100) &&
                 (*(char *)(*(long *)(param_6 + 0x38) + (ulong)uVar24) ==
                  *(char *)(*(long *)(param_6 + 0x38) + (ulong)*puVar11))) {
                *puVar32 = (ulong)(puVar13 + 2);
                puVar32[10] = (ulong)(puVar11 + 1);
                goto LAB_00100507;
              }
            }
            else {
              uVar31 = *puVar11;
              puVar32[10] = (ulong)(puVar11 + 1);
              *puVar32 = (ulong)(puVar13 + 2);
              if (uVar24 == uVar31) goto LAB_00100507;
              puVar28 = &_pcre2_dummy_ucd_record_32;
              if (uVar24 < 0x110000) {
                puVar28 = &_pcre2_ucd_records_32 +
                          (ulong)*(ushort *)
                                  (&_pcre2_ucd_stage2_32 +
                                  (long)(int)((uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_32 +
                                                     (long)((int)uVar24 >> 7) * 2) * 0x80 +
                                             (uVar24 & 0x7f)) * 2) * 0xc;
              }
              if (uVar31 == uVar24 + *(int *)(puVar28 + 4)) goto LAB_00100507;
            }
          }
        }
        else {
          sVar7 = *(short *)(param_6 + 0x60);
          if ((sVar7 != 0) &&
             ((*(uint **)(param_6 + 0xa0) < puVar11 || (*(int *)(param_6 + 0x30) != 0)))) {
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x00103704;
          }
        }
        break;
            case 0x1f:
            case 0x20:
        puVar11 = (uint *)puVar32[10];
        if (puVar11 < *(uint **)(param_6 + 0x88)) {
          if (uVar17 == 0) {
            if ((uVar22 & 0x20000) == 0) {
              uVar24 = puVar13[1];
              uVar31 = *puVar11;
              puVar32[10] = (ulong)(puVar11 + 1);
              if ((uVar24 != uVar31) &&
                 (((bVar16 != 0x20 || (0xff < uVar24)) ||
                  (uVar31 != *(byte *)(*(long *)(param_6 + 0x40) + (ulong)uVar24)))))
              goto LAB_001038d8;
            }
            else {
              puVar32[10] = (ulong)(puVar11 + 1);
              uVar24 = *puVar11;
              uVar9 = puVar13[1];
              *puVar32 = (ulong)(puVar13 + 2);
              if (uVar24 != uVar9) {
                if (bVar16 == 0x20) {
                  if (uVar9 < 0x80) {
                    uVar9 = (uint)*(byte *)(*(long *)(param_6 + 0x40) + (ulong)uVar9);
                  }
                  else {
                    puVar28 = &_pcre2_dummy_ucd_record_32;
                    if (uVar9 < 0x110000) {
                      puVar28 = &_pcre2_ucd_records_32 +
                                (ulong)*(ushort *)
                                        (&_pcre2_ucd_stage2_32 +
                                        (long)(int)((uint)*(ushort *)
                                                           (&_pcre2_ucd_stage1_32 +
                                                           (long)((int)uVar9 >> 7) * 2) * 0x80 +
                                                   (uVar9 & 0x7f)) * 2) * 0xc;
                    }
                    uVar9 = uVar9 + *(int *)(puVar28 + 4);
                  }
                  goto LAB_0010777b;
                }
                goto LAB_00100507;
              }
            }
          }
          else {
            uVar24 = puVar13[1];
            *puVar32 = (ulong)(puVar13 + 2);
            uVar31 = *puVar11;
            puVar32[10] = (ulong)(puVar11 + 1);
            if (uVar24 != uVar31) {
              if (bVar16 != 0x20) goto LAB_00100507;
              if (uVar24 < 0x80) {
                uVar24 = (uint)*(byte *)(*(long *)(param_6 + 0x40) + (ulong)uVar24);
              }
              else {
                puVar28 = &_pcre2_dummy_ucd_record_32;
                if (uVar24 < 0x110000) {
                  puVar28 = &_pcre2_ucd_records_32 +
                            (ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_32 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_32 +
                                                       (long)((int)uVar24 >> 7) * 2) * 0x80 +
                                               (uVar24 & 0x7f)) * 2) * 0xc;
                }
                uVar24 = uVar24 + *(int *)(puVar28 + 4);
              }
              if (uVar31 != uVar24) goto LAB_00100507;
            }
          }
        }
        else {
          sVar7 = *(short *)(param_6 + 0x60);
          if ((sVar7 != 0) &&
             ((*(uint **)(param_6 + 0xa0) < puVar11 || (*(int *)(param_6 + 0x30) != 0)))) {
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x00103704;
          }
        }
        break;
            case 0x21:
            case 0x22:
            case 0x23:
            case 0x24:
            case 0x25:
            case 0x26:
            case 0x2e:
            case 0x2f:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
        *puVar32 = (ulong)(puVar13 + 1);
        uVar26 = (ulong)(uVar31 - ((-(uint)(bVar16 < 0x2e) & 0xfffffff3) + 0x2e));
        local_b4 = *(uint *)(rep_typ + uVar26 * 4);
        puVar32[7] = CONCAT44(*(undefined4 *)(rep_max + uVar26 * 4),
                              *(undefined4 *)(rep_min + uVar26 * 4));
        goto LAB_001029a7;
            case 0x27:
            case 0x34:
        *(undefined4 *)(puVar32 + 7) = 0;
        uVar24 = puVar13[1];
        *puVar32 = (ulong)(puVar13 + 2);
        *(uint *)((long)puVar32 + 0x3c) = uVar24;
        local_b4 = 1;
        goto LAB_001029a7;
            case 0x28:
            case 0x35:
        *(undefined4 *)(puVar32 + 7) = 0;
        uVar24 = puVar13[1];
        *puVar32 = (ulong)(puVar13 + 2);
        *(uint *)((long)puVar32 + 0x3c) = uVar24;
        local_b4 = 0;
        goto LAB_001029a7;
            case 0x29:
            case 0x36:
        uVar24 = puVar13[1];
        *puVar32 = (ulong)(puVar13 + 2);
        puVar32[7] = CONCAT44(uVar24,uVar24);
        goto LAB_001029a7;
            case 0x2a:
            case 0x37:
        puVar11 = puVar13 + 1;
        puVar32[7] = _LC2;
        goto LAB_0010302b;
            case 0x2b:
            case 0x38:
        puVar11 = puVar13 + 1;
        puVar32[7] = _LC3;
        goto LAB_0010302b;
            case 0x2c:
            case 0x39:
        puVar11 = puVar13 + 1;
        puVar32[7] = _LC4;
        goto LAB_0010302b;
            case 0x2d:
            case 0x3a:
        *(undefined4 *)(puVar32 + 7) = 0;
        puVar11 = puVar13 + 2;
        *(uint *)((long)puVar32 + 0x3c) = puVar13[1];
LAB_0010302b:
        *puVar32 = (ulong)puVar11;
        local_b4 = 2;
LAB_001029a7:
        if (uVar17 == 0) {
          puVar13 = (uint *)*puVar32;
          uVar24 = *puVar13;
        }
        else {
          puVar13 = (uint *)*puVar32;
          puVar32[3] = 1;
          puVar32[2] = (ulong)puVar13;
          uVar24 = *puVar13;
        }
        *(uint *)(puVar32 + 8) = uVar24;
        *puVar32 = (ulong)(puVar13 + 1);
        if (0x2d < bVar16) {
          if ((uVar22 & 0xa0000) == 0) {
            uVar31 = uVar24;
            if (uVar24 < 0x100) goto LAB_001066c0;
          }
          else if (uVar24 < 0x80) {
LAB_001066c0:
            uVar31 = (uint)*(byte *)(*(long *)(param_6 + 0x40) + (ulong)uVar24);
          }
          else {
            puVar28 = &_pcre2_dummy_ucd_record_32;
            if (uVar24 < 0x110000) {
              puVar28 = &_pcre2_ucd_records_32 +
                        (ulong)*(ushort *)
                                (&_pcre2_ucd_stage2_32 +
                                (long)(int)((uint)*(ushort *)
                                                   (&_pcre2_ucd_stage1_32 +
                                                   (long)((int)uVar24 >> 7) * 2) * 0x80 +
                                           (uVar24 & 0x7f)) * 2) * 0xc;
            }
            uVar31 = *(int *)(puVar28 + 4) + uVar24;
          }
          uVar9 = (uint)puVar32[7];
          *(uint *)((long)puVar32 + 0x44) = uVar31;
          if (uVar9 == 0) {
            uVar23 = *(uint *)((long)puVar32 + 0x3c);
            if (uVar23 == 0) goto LAB_00100507;
            if (local_b4 == 0) goto LAB_00109fb6;
            puVar11 = (uint *)puVar32[10];
            puVar13 = *(uint **)(param_6 + 0x88);
            puVar32[1] = (ulong)puVar11;
          }
          else {
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar23 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              if ((*puVar11 != uVar24) && (*puVar11 != uVar31)) goto switchD_00100529_caseD_a3;
              puVar11 = puVar11 + 1;
              uVar23 = uVar23 + 1;
              puVar32[10] = (ulong)puVar11;
            } while (uVar23 <= uVar9);
            uVar23 = *(uint *)((long)puVar32 + 0x3c);
            if (uVar23 == uVar9) goto LAB_00100507;
            if (local_b4 == 0) {
LAB_00109fb6:
              local_b4 = 0;
LAB_00101fa5:
              *(undefined1 *)(puVar32 + 9) = 0x19;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              goto LAB_00101aa0;
            }
            puVar32[1] = (ulong)puVar11;
            if (uVar23 <= uVar9) goto LAB_00108d57;
          }
          do {
            if (puVar13 <= puVar11) {
              if ((*(short *)(param_6 + 0x60) != 0) &&
                 (((*(uint **)(param_6 + 0xa0) < puVar11 || (*(int *)(param_6 + 0x30) != 0)) &&
                  (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
              goto LAB_00102a51;
              break;
            }
            if ((*puVar11 != uVar24) && (*puVar11 != uVar31)) break;
            puVar11 = puVar11 + 1;
            uVar9 = uVar9 + 1;
            puVar32[10] = (ulong)puVar11;
          } while (uVar9 < uVar23);
          if (local_b4 != 2) {
LAB_00100abe:
            if (puVar32[10] != puVar32[1]) {
              *(undefined1 *)(puVar32 + 9) = 0x1a;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              goto LAB_00101aa0;
            }
            goto LAB_00100507;
          }
          goto LAB_0010569d;
        }
        uVar31 = (uint)puVar32[7];
        if (uVar31 == 0) {
          uVar9 = *(uint *)((long)puVar32 + 0x3c);
          if (uVar9 == 0) goto LAB_00100507;
          if (local_b4 == 0) goto LAB_0010a124;
          puVar13 = (uint *)puVar32[10];
          puVar11 = *(uint **)(param_6 + 0x88);
          puVar32[1] = (ulong)puVar13;
LAB_0010682d:
          do {
            if (puVar11 <= puVar13) {
              if ((*(short *)(param_6 + 0x60) != 0) &&
                 (((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)) &&
                  (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
              goto LAB_00102a51;
              break;
            }
            if (*puVar13 != uVar24) break;
            puVar13 = puVar13 + 1;
            uVar31 = uVar31 + 1;
            puVar32[10] = (ulong)puVar13;
          } while (uVar31 < uVar9);
          if (local_b4 != 2) {
LAB_00100a1e:
            if (puVar32[1] < puVar32[10]) {
              *(undefined1 *)(puVar32 + 9) = 0x1c;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              goto LAB_00101aa0;
            }
            goto LAB_00100507;
          }
          goto LAB_0010569d;
        }
        puVar11 = *(uint **)(param_6 + 0x88);
        uVar9 = 1;
        do {
          puVar14 = (uint *)puVar32[10];
          if (puVar11 <= puVar14) {
            sVar7 = *(short *)(param_6 + 0x60);
            if ((sVar7 == 0) ||
               ((puVar14 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
            goto switchD_00100529_caseD_a3;
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x00106fcd;
          }
          puVar13 = puVar14 + 1;
          puVar32[10] = (ulong)puVar13;
          if (*puVar14 != uVar24) goto switchD_00100529_caseD_a3;
          uVar9 = uVar9 + 1;
        } while (uVar9 <= uVar31);
        uVar9 = *(uint *)((long)puVar32 + 0x3c);
        if (uVar9 == uVar31) goto LAB_00100507;
        if (local_b4 == 0) {
LAB_0010a124:
          local_b4 = 0;
LAB_00102009:
          *(undefined1 *)(puVar32 + 9) = 0x1b;
          param_2 = (uint *)*puVar32;
          uVar24 = 0;
          goto LAB_00101aa0;
        }
        puVar32[1] = (ulong)puVar13;
        if (uVar31 < uVar9) goto LAB_0010682d;
        goto LAB_00108d57;
            case 0x3b:
            case 0x3c:
            case 0x3d:
            case 0x3e:
            case 0x3f:
            case 0x40:
            case 0x48:
            case 0x49:
            case 0x4a:
            case 0x4b:
            case 0x4c:
            case 0x4d:
        *puVar32 = (ulong)(puVar13 + 1);
        uVar26 = (ulong)(uVar31 - ((-(uint)(bVar16 < 0x48) & 0xfffffff3) + 0x48));
        local_b4 = *(uint *)(rep_typ + uVar26 * 4);
        puVar32[7] = CONCAT44(*(undefined4 *)(rep_max + uVar26 * 4),
                              *(undefined4 *)(rep_min + uVar26 * 4));
        goto LAB_0010283f;
            case 0x41:
            case 0x4e:
        *(undefined4 *)(puVar32 + 7) = 0;
        uVar24 = puVar13[1];
        *puVar32 = (ulong)(puVar13 + 2);
        *(uint *)((long)puVar32 + 0x3c) = uVar24;
        local_b4 = 1;
        goto LAB_0010283f;
            case 0x42:
            case 0x4f:
        *(undefined4 *)(puVar32 + 7) = 0;
        uVar24 = puVar13[1];
        *puVar32 = (ulong)(puVar13 + 2);
        *(uint *)((long)puVar32 + 0x3c) = uVar24;
        local_b4 = 0;
        goto LAB_0010283f;
            case 0x43:
            case 0x50:
        uVar24 = puVar13[1];
        *puVar32 = (ulong)(puVar13 + 2);
        puVar32[7] = CONCAT44(uVar24,uVar24);
        goto LAB_0010283f;
            case 0x44:
            case 0x51:
        puVar11 = puVar13 + 1;
        puVar32[7] = _LC2;
        goto LAB_00102df5;
            case 0x45:
            case 0x52:
        puVar11 = puVar13 + 1;
        puVar32[7] = _LC3;
        goto LAB_00102df5;
            case 0x46:
            case 0x53:
        puVar11 = puVar13 + 1;
        puVar32[7] = _LC4;
        goto LAB_00102df5;
            case 0x47:
            case 0x54:
        *(undefined4 *)(puVar32 + 7) = 0;
        puVar11 = puVar13 + 2;
        *(uint *)((long)puVar32 + 0x3c) = puVar13[1];
LAB_00102df5:
        *puVar32 = (ulong)puVar11;
        local_b4 = 2;
LAB_0010283f:
        puVar13 = (uint *)*puVar32;
        *puVar32 = (ulong)(puVar13 + 1);
        uVar24 = *puVar13;
        *(uint *)(puVar32 + 8) = uVar24;
        if (bVar16 < 0x48) {
          uVar31 = (uint)puVar32[7];
          if (uVar17 == 0) {
            if (uVar31 != 0) {
              puVar13 = *(uint **)(param_6 + 0x88);
              uVar9 = 1;
              do {
                puVar11 = (uint *)puVar32[10];
                if (puVar13 <= puVar11) goto LAB_0010291f;
                puVar32[10] = (ulong)(puVar11 + 1);
                if (uVar24 == *puVar11) goto switchD_00100529_caseD_a3;
                uVar9 = uVar9 + 1;
              } while (uVar9 <= uVar31);
            }
          }
          else if (uVar31 != 0) {
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar9 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) goto LAB_0010291f;
              puVar32[10] = (ulong)(puVar11 + 1);
              if (uVar24 == *puVar11) goto switchD_00100529_caseD_a3;
              uVar9 = uVar9 + 1;
            } while (uVar9 <= uVar31);
          }
          uVar9 = *(uint *)((long)puVar32 + 0x3c);
          if (uVar31 != uVar9) {
            if (local_b4 == 0) {
              if (uVar17 == 0) {
LAB_0010238a:
                *(undefined1 *)(puVar32 + 9) = 0x1f;
                param_2 = (uint *)*puVar32;
                uVar24 = 0;
              }
              else {
LAB_00102674:
                *(undefined1 *)(puVar32 + 9) = 0xce;
                param_2 = (uint *)*puVar32;
                uVar24 = 0;
              }
              goto LAB_00101aa0;
            }
            puVar13 = (uint *)puVar32[10];
            puVar32[1] = (ulong)puVar13;
            if (uVar17 == 0) {
              if (uVar9 <= uVar31) goto LAB_00108d57;
              puVar11 = *(uint **)(param_6 + 0x88);
              do {
                if (puVar11 <= puVar13) {
                  if (((*(short *)(param_6 + 0x60) != 0) &&
                      ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0))))
                     && (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
                  goto LAB_00102a51;
                  break;
                }
                if (uVar24 == *puVar13) break;
                puVar13 = puVar13 + 1;
                uVar31 = uVar31 + 1;
                puVar32[10] = (ulong)puVar13;
              } while (uVar31 < uVar9);
              if (local_b4 == 2) goto LAB_0010569d;
LAB_0010075e:
              if (puVar32[10] != puVar32[1]) {
                *(undefined1 *)(puVar32 + 9) = 0x20;
                param_2 = (uint *)*puVar32;
                uVar24 = 0;
                goto LAB_00101aa0;
              }
            }
            else {
              if (uVar9 <= uVar31) goto LAB_00108d57;
              puVar11 = *(uint **)(param_6 + 0x88);
              do {
                if (puVar11 <= puVar13) {
                  if ((*(short *)(param_6 + 0x60) != 0) &&
                     (((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)) &&
                      (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
                  goto LAB_00102a51;
                  break;
                }
                if (uVar24 == *puVar13) break;
                puVar13 = puVar13 + 1;
                uVar31 = uVar31 + 1;
                puVar32[10] = (ulong)puVar13;
              } while (uVar31 < uVar9);
              if (local_b4 == 2) goto LAB_0010569d;
LAB_001016ae:
              if (puVar32[1] < puVar32[10]) {
                *(undefined1 *)(puVar32 + 9) = 0xcf;
                param_2 = (uint *)*puVar32;
                uVar24 = 0;
                goto LAB_00101aa0;
              }
            }
          }
        }
        else {
          if ((uVar22 & 0xa0000) == 0) {
            if (uVar24 < 0x100) {
              bVar16 = *(byte *)(*(long *)(param_6 + 0x40) + (ulong)uVar24);
              uVar31 = (uint)bVar16;
              *(uint *)((long)puVar32 + 0x44) = (uint)bVar16;
            }
            else {
              *(uint *)((long)puVar32 + 0x44) = uVar24;
              uVar31 = uVar24;
            }
LAB_0010602c:
            uVar9 = (uint)puVar32[7];
            if (uVar9 != 0) {
              puVar13 = *(uint **)(param_6 + 0x88);
              uVar23 = 1;
              do {
                puVar11 = (uint *)puVar32[10];
                if (puVar13 <= puVar11) goto LAB_0010291f;
                if ((uVar24 == *puVar11) || (*puVar11 == uVar31)) goto switchD_00100529_caseD_a3;
                uVar23 = uVar23 + 1;
                puVar32[10] = (ulong)(puVar11 + 1);
              } while (uVar23 <= uVar9);
            }
          }
          else {
            if (uVar24 < 0x80) {
              uVar31 = (uint)*(byte *)(*(long *)(param_6 + 0x40) + (ulong)uVar24);
            }
            else {
              puVar28 = &_pcre2_dummy_ucd_record_32;
              if (uVar24 < 0x110000) {
                puVar28 = &_pcre2_ucd_records_32 +
                          (ulong)*(ushort *)
                                  (&_pcre2_ucd_stage2_32 +
                                  (long)(int)((uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_32 +
                                                     (long)((int)uVar24 >> 7) * 2) * 0x80 +
                                             (uVar24 & 0x7f)) * 2) * 0xc;
              }
              uVar31 = *(int *)(puVar28 + 4) + uVar24;
            }
            *(uint *)((long)puVar32 + 0x44) = uVar31;
            if (uVar17 == 0) goto LAB_0010602c;
            uVar9 = (uint)puVar32[7];
            if (uVar9 != 0) {
              puVar13 = *(uint **)(param_6 + 0x88);
              uVar23 = 1;
              do {
                puVar11 = (uint *)puVar32[10];
                if (puVar13 <= puVar11) goto LAB_0010291f;
                uVar3 = *puVar11;
                puVar32[10] = (ulong)(puVar11 + 1);
                if ((uVar24 == uVar3) || (uVar3 == uVar31)) goto switchD_00100529_caseD_a3;
                uVar23 = uVar23 + 1;
              } while (uVar23 <= uVar9);
            }
          }
          uVar23 = *(uint *)((long)puVar32 + 0x3c);
          if (uVar9 != uVar23) {
            if (local_b4 == 0) {
              if (uVar17 == 0) {
LAB_001024c6:
                *(undefined1 *)(puVar32 + 9) = 0x1d;
                param_2 = (uint *)*puVar32;
                uVar24 = 0;
              }
              else {
LAB_001020ce:
                *(undefined1 *)(puVar32 + 9) = 0xcc;
                param_2 = (uint *)*puVar32;
                uVar24 = 0;
              }
              goto LAB_00101aa0;
            }
            puVar13 = (uint *)puVar32[10];
            puVar32[1] = (ulong)puVar13;
            if (uVar17 == 0) {
              if (uVar23 <= uVar9) goto LAB_00108d57;
              puVar11 = *(uint **)(param_6 + 0x88);
              while (puVar13 < puVar11) {
                if ((uVar24 == *puVar13) || (*puVar13 == uVar31)) goto LAB_001068fa;
                puVar13 = puVar13 + 1;
                uVar9 = uVar9 + 1;
                puVar32[10] = (ulong)puVar13;
                if (uVar23 <= uVar9) goto LAB_001068fa;
              }
              if (((*(short *)(param_6 + 0x60) != 0) &&
                  ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) &&
                 (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
              goto LAB_00102a51;
LAB_001068fa:
              if (local_b4 == 2) goto LAB_0010569d;
LAB_001007fe:
              if (puVar32[10] != puVar32[1]) {
                *(undefined1 *)(puVar32 + 9) = 0x1e;
                param_2 = (uint *)*puVar32;
                uVar24 = 0;
                goto LAB_00101aa0;
              }
            }
            else {
              if (uVar23 <= uVar9) goto LAB_00108d57;
              puVar11 = *(uint **)(param_6 + 0x88);
              while (puVar13 < puVar11) {
                if ((uVar24 == *puVar13) || (*puVar13 == uVar31)) goto LAB_00108467;
                puVar13 = puVar13 + 1;
                uVar9 = uVar9 + 1;
                puVar32[10] = (ulong)puVar13;
                if (uVar23 <= uVar9) goto LAB_00108467;
              }
              if ((*(short *)(param_6 + 0x60) != 0) &&
                 (((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)) &&
                  (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
              goto LAB_00102a51;
LAB_00108467:
              if (local_b4 == 2) goto LAB_0010569d;
LAB_0010174e:
              if (puVar32[1] < puVar32[10]) {
                *(undefined1 *)(puVar32 + 9) = 0xcd;
                param_2 = (uint *)*puVar32;
                uVar24 = 0;
                goto LAB_00101aa0;
              }
            }
          }
        }
        goto LAB_00100507;
            for (int i = 0; i < 5; i++) {
               case 0x55:
            }
            case 0x5a:
        *puVar32 = (ulong)(puVar13 + 1);
        uVar26 = (ulong)(uVar31 - 0x55);
        local_b4 = *(uint *)(rep_typ + uVar26 * 4);
        puVar32[7] = CONCAT44(*(undefined4 *)(rep_max + uVar26 * 4),
                              *(undefined4 *)(rep_min + uVar26 * 4));
        goto LAB_00102a9b;
            case 0x5b:
            case 0x5c:
        *(undefined4 *)(puVar32 + 7) = 0;
        *(uint *)((long)puVar32 + 0x3c) = puVar13[1];
        local_b4 = (uint)(*puVar13 != 0x5c);
        *puVar32 = (ulong)(puVar13 + 2);
        goto LAB_00102a9b;
            case 0x5d:
        uVar24 = puVar13[1];
        *puVar32 = (ulong)(puVar13 + 2);
        puVar32[7] = CONCAT44(uVar24,uVar24);
        goto LAB_00102a9b;
            case 0x5e:
        puVar11 = puVar13 + 1;
        puVar32[7] = _LC2;
        goto LAB_00103f14;
            case 0x5f:
        puVar11 = puVar13 + 1;
        puVar32[7] = _LC3;
        goto LAB_00103f14;
            case 0x60:
        puVar11 = puVar13 + 1;
        puVar32[7] = _LC4;
        goto LAB_00103f14;
            case 0x61:
        *(undefined4 *)(puVar32 + 7) = 0;
        puVar11 = puVar13 + 2;
        *(uint *)((long)puVar32 + 0x3c) = puVar13[1];
LAB_00103f14:
        *puVar32 = (ulong)puVar11;
        local_b4 = 2;
LAB_00102a9b:
        piVar10 = (int *)*puVar32;
        iVar8 = *piVar10;
        *puVar32 = (ulong)(piVar10 + 1);
        *(int *)(puVar32 + 8) = iVar8;
        if (iVar8 - 0xfU < 2) {
          uVar31 = piVar10[1];
          uVar9 = piVar10[2];
          uVar24 = (uint)puVar32[7];
          *puVar32 = (ulong)(piVar10 + 3);
          *(uint *)((long)puVar32 + 0x44) = uVar9;
          if (uVar24 == 0) goto LAB_001053ff;
          if (-1 < (int)uVar31) {
            bVar35 = iVar8 == 0xf;
            switch(uVar31) {
            case 0:
              if (iVar8 == 0xf) goto switchD_00100529_caseD_a3;
              uVar26 = *(ulong *)(param_6 + 0x88);
              uVar31 = 1;
              do {
                uVar30 = puVar32[10];
                if (uVar26 <= uVar30) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 == 0) ||
                     ((uVar30 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_00100529_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00106fcd;
                }
                uVar31 = uVar31 + 1;
                puVar32[10] = uVar30 + 4;
              } while (uVar31 <= uVar24);
              uVar31 = 0;
              break;
            case 1:
              puVar13 = *(uint **)(param_6 + 0x88);
              do {
                puVar11 = (uint *)puVar32[10];
                if (puVar13 <= puVar11) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 == 0) ||
                     ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_00100529_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00106fcd;
                }
                puVar32[10] = (ulong)(puVar11 + 1);
                uVar9 = *puVar11;
                puVar28 = &_pcre2_dummy_ucd_record_32;
                if (uVar9 < 0x110000) {
                  puVar28 = &_pcre2_ucd_records_32 +
                            (ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_32 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_32 +
                                                       (long)((int)uVar9 >> 7) * 2) * 0x80 +
                                               (uVar9 & 0x7f)) * 2) * 0xc;
                }
                if (bVar35 == ((byte)(puVar28[1] - 8) < 2 || puVar28[1] == '\x05'))
                goto switchD_00100529_caseD_a3;
                uVar31 = uVar31 + 1;
              } while (uVar31 <= uVar24);
              uVar31 = 1;
              break;
            case 2:
              puVar13 = *(uint **)(param_6 + 0x88);
              uVar31 = 1;
              do {
                puVar11 = (uint *)puVar32[10];
                if (puVar13 <= puVar11) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 == 0) ||
                     ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_00100529_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00106fcd;
                }
                puVar32[10] = (ulong)(puVar11 + 1);
                uVar23 = *puVar11;
                puVar28 = &_pcre2_dummy_ucd_record_32;
                if (uVar23 < 0x110000) {
                  puVar28 = &_pcre2_ucd_records_32 +
                            (ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_32 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_32 +
                                                       (long)((int)uVar23 >> 7) * 2) * 0x80 +
                                               (uVar23 & 0x7f)) * 2) * 0xc;
                }
                if (bVar35 == (*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)(byte)puVar28[1] * 4) ==
                              uVar9)) goto switchD_00100529_caseD_a3;
                uVar31 = uVar31 + 1;
              } while (uVar31 <= uVar24);
              uVar31 = 2;
              break;
            case 3:
              puVar13 = *(uint **)(param_6 + 0x88);
              uVar31 = 1;
              do {
                puVar11 = (uint *)puVar32[10];
                if (puVar13 <= puVar11) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 == 0) ||
                     ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_00100529_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00106fcd;
                }
                puVar32[10] = (ulong)(puVar11 + 1);
                uVar23 = *puVar11;
                puVar28 = &_pcre2_dummy_ucd_record_32;
                if (uVar23 < 0x110000) {
                  puVar28 = &_pcre2_ucd_records_32 +
                            (ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_32 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_32 +
                                                       (long)((int)uVar23 >> 7) * 2) * 0x80 +
                                               (uVar23 & 0x7f)) * 2) * 0xc;
                }
                if (bVar35 == ((byte)puVar28[1] == uVar9)) goto switchD_00100529_caseD_a3;
                uVar31 = uVar31 + 1;
              } while (uVar31 <= uVar24);
              uVar31 = 3;
              break;
            case 4:
              puVar13 = *(uint **)(param_6 + 0x88);
              uVar31 = 1;
              do {
                puVar11 = (uint *)puVar32[10];
                if (puVar13 <= puVar11) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 == 0) ||
                     ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_00100529_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00106fcd;
                }
                puVar32[10] = (ulong)(puVar11 + 1);
                uVar23 = *puVar11;
                pbVar25 = &_pcre2_dummy_ucd_record_32;
                if (uVar23 < 0x110000) {
                  pbVar25 = &_pcre2_ucd_records_32 +
                            (ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_32 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_32 +
                                                       (long)((int)uVar23 >> 7) * 2) * 0x80 +
                                               (uVar23 & 0x7f)) * 2) * 0xc;
                }
                if (bVar35 == (*pbVar25 == uVar9)) goto switchD_00100529_caseD_a3;
                uVar31 = uVar31 + 1;
              } while (uVar31 <= uVar24);
              uVar31 = 4;
              break;
            case 5:
              puVar13 = *(uint **)(param_6 + 0x88);
              uVar31 = 1;
              do {
                puVar11 = (uint *)puVar32[10];
                if (puVar13 <= puVar11) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 == 0) ||
                     ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_00100529_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00106fcd;
                }
                puVar32[10] = (ulong)(puVar11 + 1);
                uVar23 = *puVar11;
                pbVar25 = &_pcre2_dummy_ucd_record_32;
                if (uVar23 < 0x110000) {
                  pbVar25 = &_pcre2_ucd_records_32 +
                            (ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_32 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_32 +
                                                       (long)((int)uVar23 >> 7) * 2) * 0x80 +
                                               (uVar23 & 0x7f)) * 2) * 0xc;
                }
                bVar33 = true;
                if (uVar9 != *pbVar25) {
                  bVar33 = (1 << ((byte)uVar9 & 0x1f) &
                           *(uint *)(&_pcre2_ucd_script_sets_32 +
                                    ((ulong)(*(ushort *)(pbVar25 + 8) & 0x3ff) + (ulong)(uVar9 >> 5)
                                    ) * 4)) != 0;
                }
                if (bVar35 == bVar33) goto switchD_00100529_caseD_a3;
                uVar31 = uVar31 + 1;
              } while (uVar31 <= uVar24);
              uVar31 = 5;
              break;
            case 6:
              puVar13 = *(uint **)(param_6 + 0x88);
              uVar31 = 1;
              do {
                puVar11 = (uint *)puVar32[10];
                if (puVar13 <= puVar11) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 == 0) ||
                     ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_00100529_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00106fcd;
                }
                puVar32[10] = (ulong)(puVar11 + 1);
                uVar9 = *puVar11;
                puVar28 = &_pcre2_dummy_ucd_record_32;
                if (uVar9 < 0x110000) {
                  puVar28 = &_pcre2_ucd_records_32 +
                            (ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_32 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_32 +
                                                       (long)((int)uVar9 >> 7) * 2) * 0x80 +
                                               (uVar9 & 0x7f)) * 2) * 0xc;
                }
                if (bVar35 == ((*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)(byte)puVar28[1] * 4) &
                               0xfffffffd) == 1)) goto switchD_00100529_caseD_a3;
                uVar31 = uVar31 + 1;
              } while (uVar31 <= uVar24);
              uVar31 = 6;
              break;
            case 7:
            case 8:
              puVar13 = *(uint **)(param_6 + 0x88);
              uVar9 = 1;
              do {
                puVar11 = (uint *)puVar32[10];
                if (puVar13 <= puVar11) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 == 0) ||
                     ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_00100529_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00106fcd;
                }
                uVar23 = *puVar11;
                puVar32[10] = (ulong)(puVar11 + 1);
                if (uVar23 == 0x180e) {
LAB_00104c45:
                  if (iVar8 == 0xf) goto switchD_00100529_caseD_a3;
                }
                else {
                  if (uVar23 < 0x180f) {
                    if (uVar23 != 0x85) {
                      if (uVar23 < 0x86) {
                        if (uVar23 < 0xe) {
                          if (8 < uVar23) goto LAB_00104c45;
                        }
                        else if (uVar23 == 0x20) goto LAB_00104c45;
                        goto LAB_00104ba1;
                      }
                      if ((uVar23 != 0xa0) && (uVar23 != 0x1680)) goto LAB_00104ba1;
                    }
                    goto LAB_00104c45;
                  }
                  if (uVar23 < 0x2060) {
                    if (uVar23 < 0x2028) {
                      if (uVar23 - 0x2000 < 0xb) goto LAB_00104c45;
                    }
                    else if ((0x80000000000083U >> ((ulong)(uVar23 - 0x2028) & 0x3f) & 1) != 0)
                    goto LAB_00104c45;
LAB_00104ba1:
                    puVar28 = &_pcre2_ucd_records_32 +
                              (ulong)*(ushort *)
                                      (&_pcre2_ucd_stage2_32 +
                                      (long)(int)((uVar23 & 0x7f) +
                                                 (uint)*(ushort *)
                                                        (&_pcre2_ucd_stage1_32 +
                                                        (long)((int)uVar23 >> 7) * 2) * 0x80) * 2) *
                              0xc;
                  }
                  else {
                    if (uVar23 == 0x3000) goto LAB_00104c45;
                    if (uVar23 < 0x110000) goto LAB_00104ba1;
                    puVar28 = &_pcre2_dummy_ucd_record_32;
                  }
                  if (bVar35 == (*(int *)(&_pcre2_ucp_gentype_32 + (ulong)(byte)puVar28[1] * 4) == 6
                                )) goto switchD_00100529_caseD_a3;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 <= uVar24);
              break;
            case 9:
              puVar13 = *(uint **)(param_6 + 0x88);
              uVar31 = 1;
              do {
                puVar11 = (uint *)puVar32[10];
                if (puVar13 <= puVar11) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 == 0) ||
                     ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_00100529_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00106fcd;
                }
                puVar32[10] = (ulong)(puVar11 + 1);
                uVar9 = *puVar11;
                puVar28 = &_pcre2_dummy_ucd_record_32;
                if (uVar9 < 0x110000) {
                  puVar28 = &_pcre2_ucd_records_32 +
                            (ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_32 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_32 +
                                                       (long)((int)uVar9 >> 7) * 2) * 0x80 +
                                               (uVar9 & 0x7f)) * 2) * 0xc;
                }
                if (bVar35 == ((*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)(byte)puVar28[1] * 4) &
                               0xfffffffd) == 1 || (puVar28[1] - 0xc & 0xfb) == 0))
                goto switchD_00100529_caseD_a3;
                uVar31 = uVar31 + 1;
              } while (uVar31 <= uVar24);
              uVar31 = 9;
              break;
            case 10:
              puVar13 = *(uint **)(param_6 + 0x88);
              uVar31 = 1;
              do {
                puVar11 = (uint *)puVar32[10];
                if (puVar13 <= puVar11) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 == 0) ||
                     ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_00100529_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00106fcd;
                }
                puVar32[10] = (ulong)(puVar11 + 1);
                uVar23 = *puVar11;
                if (uVar23 < 0x110000) {
                  puVar11 = (uint *)(&_pcre2_ucd_caseless_sets_32 + (ulong)uVar9 * 4);
                  do {
                    uVar3 = *puVar11;
                    if (uVar23 < uVar3) goto LAB_001053e8;
                    puVar11 = puVar11 + 1;
                  } while (uVar23 != uVar3);
                  if (iVar8 == 0xf) goto switchD_00100529_caseD_a3;
                }
                else {
LAB_001053e8:
                  if (iVar8 != 0xf) goto switchD_00100529_caseD_a3;
                }
                uVar31 = uVar31 + 1;
              } while (uVar31 <= uVar24);
              uVar31 = 10;
              break;
            case 0xb:
              puVar13 = *(uint **)(param_6 + 0x88);
              uVar31 = 1;
              do {
                puVar11 = (uint *)puVar32[10];
                if (puVar13 <= puVar11) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 == 0) ||
                     ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_00100529_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00106fcd;
                }
                puVar32[10] = (ulong)(puVar11 + 1);
                uVar9 = *puVar11;
                if (((uVar9 & 0xffffffdf) == 0x40) || (uVar9 == 0x24)) {
                  bVar33 = true;
                }
                else {
                  bVar33 = uVar9 - 0xa0 < 0xd760 || 0xdfff < uVar9;
                }
                if (bVar35 == bVar33) goto switchD_00100529_caseD_a3;
                uVar31 = uVar31 + 1;
              } while (uVar31 <= uVar24);
              uVar31 = 0xb;
              break;
            case 0xc:
              puVar13 = *(uint **)(param_6 + 0x88);
              uVar31 = 1;
              do {
                puVar11 = (uint *)puVar32[10];
                if (puVar13 <= puVar11) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 == 0) ||
                     ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_00100529_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00106fcd;
                }
                puVar32[10] = (ulong)(puVar11 + 1);
                uVar23 = *puVar11;
                puVar28 = &_pcre2_dummy_ucd_record_32;
                if (uVar23 < 0x110000) {
                  puVar28 = &_pcre2_ucd_records_32 +
                            (ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_32 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_32 +
                                                       (long)((int)uVar23 >> 7) * 2) * 0x80 +
                                               (uVar23 & 0x7f)) * 2) * 0xc;
                }
                if (bVar35 == (*(ushort *)(puVar28 + 8) >> 0xb == uVar9))
                goto switchD_00100529_caseD_a3;
                uVar31 = uVar31 + 1;
              } while (uVar31 <= uVar24);
              uVar31 = 0xc;
              break;
            case 0xd:
              puVar13 = *(uint **)(param_6 + 0x88);
              uVar31 = 1;
              do {
                puVar11 = (uint *)puVar32[10];
                if (puVar13 <= puVar11) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 == 0) ||
                     ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_00100529_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00106fcd;
                }
                puVar32[10] = (ulong)(puVar11 + 1);
                uVar23 = *puVar11;
                puVar28 = &_pcre2_dummy_ucd_record_32;
                if (uVar23 < 0x110000) {
                  puVar28 = &_pcre2_ucd_records_32 +
                            (ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_32 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_32 +
                                                       (long)((int)uVar23 >> 7) * 2) * 0x80 +
                                               (uVar23 & 0x7f)) * 2) * 0xc;
                }
                if (bVar35 == ((1 << ((byte)uVar9 & 0x1f) &
                               *(uint *)(&_pcre2_ucd_boolprop_sets_32 +
                                        ((ulong)(*(ushort *)(puVar28 + 10) & 0xfff) +
                                        (ulong)(uVar9 >> 5)) * 4)) != 0))
                goto switchD_00100529_caseD_a3;
                uVar31 = uVar31 + 1;
              } while (uVar31 <= uVar24);
              uVar31 = 0xd;
              break;
            default:
              goto switchD_00100529_caseD_62;
            }
            goto LAB_001053ff;
          }
switchD_00100529_caseD_62:
          uVar24 = 0xffffffd4;
          goto LAB_00101ae4;
        }
        uVar24 = (uint)puVar32[7];
        if (uVar24 == 0) goto LAB_00105fcc;
        if (iVar8 == 0x16) {
          uVar24 = 1;
          do {
            puVar27 = (undefined4 *)puVar32[10];
            puVar6 = *(undefined4 **)(param_6 + 0x88);
            if (puVar6 <= puVar27) {
              sVar7 = *(short *)(param_6 + 0x60);
              if ((sVar7 == 0) ||
                 ((puVar27 <= *(undefined4 **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
              goto switchD_00100529_caseD_a3;
              *(undefined4 *)(param_6 + 0x28) = 1;
              goto joined_r0x00106fcd;
            }
            uVar5 = *(undefined8 *)(param_6 + 0x78);
            uVar4 = *puVar27;
            puVar32[10] = (ulong)(puVar27 + 1);
            uVar26 = _pcre2_extuni_32(uVar4,puVar27 + 1,uVar5,puVar6,bVar34,0);
            puVar32[10] = uVar26;
            if ((((*(ulong *)(param_6 + 0x88) <= uVar26) && (*(short *)(param_6 + 0x60) != 0)) &&
                ((*(ulong *)(param_6 + 0xa0) < uVar26 || (*(int *)(param_6 + 0x30) != 0)))) &&
               (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
            goto LAB_00102a51;
            uVar24 = uVar24 + 1;
          } while (uVar24 <= (uint)puVar32[7]);
LAB_00105fc8:
          uVar24 = (uint)puVar32[7];
        }
        else if (uVar17 == 0) {
          switch(iVar8 + -6) {
          case 0:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              if ((*puVar11 < 0x100) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar11) & 8) != 0))
              goto switchD_00100529_caseD_a3;
              uVar31 = uVar31 + 1;
              puVar32[10] = (ulong)(puVar11 + 1);
            } while (uVar31 <= uVar24);
            break;
          case 1:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              if ((0xff < *puVar11) ||
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar11) & 8) == 0))
              goto switchD_00100529_caseD_a3;
              uVar31 = uVar31 + 1;
              puVar32[10] = (ulong)(puVar11 + 1);
            } while (uVar31 <= uVar24);
            break;
          case 2:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              if ((*puVar11 < 0x100) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar11) & 1) != 0))
              goto switchD_00100529_caseD_a3;
              uVar31 = uVar31 + 1;
              puVar32[10] = (ulong)(puVar11 + 1);
            } while (uVar31 <= uVar24);
            break;
          case 3:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              if ((0xff < *puVar11) ||
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar11) & 1) == 0))
              goto switchD_00100529_caseD_a3;
              uVar31 = uVar31 + 1;
              puVar32[10] = (ulong)(puVar11 + 1);
            } while (uVar31 <= uVar24);
            break;
          case 4:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              if ((*puVar11 < 0x100) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar11) & 0x10) != 0))
              goto switchD_00100529_caseD_a3;
              uVar31 = uVar31 + 1;
              puVar32[10] = (ulong)(puVar11 + 1);
            } while (uVar31 <= uVar24);
            break;
          case 5:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              if ((0xff < *puVar11) ||
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar11) & 0x10) == 0))
              goto switchD_00100529_caseD_a3;
              uVar31 = uVar31 + 1;
              puVar32[10] = (ulong)(puVar11 + 1);
            } while (uVar31 <= uVar24);
            break;
          case 6:
            uVar24 = 1;
            do {
              piVar10 = (int *)puVar32[10];
              if (*(int **)(param_6 + 0x88) <= piVar10) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((piVar10 <= *(int **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              if (*(int *)(param_6 + 0xe4) == 0) {
                if (((piVar10 <= *(int **)(param_6 + 0x88) + -(ulong)*(uint *)(param_6 + 0xe8)) &&
                    (*piVar10 == *(int *)(param_6 + 0xec))) &&
                   ((*(uint *)(param_6 + 0xe8) == 1 || (piVar10[1] == *(int *)(param_6 + 0xf0)))))
                goto switchD_00100529_caseD_a3;
              }
              else {
                iVar8 = _pcre2_is_newline_32();
                if (iVar8 != 0) goto switchD_00100529_caseD_a3;
              }
              if (((((*(short *)(param_6 + 0x60) != 0) &&
                    (*(int **)(param_6 + 0x88) <= (int *)puVar32[10] + 1)) &&
                   (*(int *)(param_6 + 0xe4) == 0)) &&
                  ((*(int *)(param_6 + 0xe8) == 2 &&
                   (*(int *)puVar32[10] == *(int *)(param_6 + 0xec))))) &&
                 (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
              goto LAB_00102a51;
              puVar32[10] = puVar32[10] + 4;
              uVar24 = uVar24 + 1;
            } while (uVar24 <= (uint)puVar32[7]);
            goto LAB_00105fc8;
          case 7:
            uVar26 = puVar32[10];
            if (*(long *)(param_6 + 0x88) + (ulong)uVar24 * -4 < uVar26) {
              sVar7 = *(short *)(param_6 + 0x60);
              if ((sVar7 != 0) &&
                 ((*(ulong *)(param_6 + 0xa0) < uVar26 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x00106fcd:
                if (sVar7 == 1) goto switchD_00100529_caseD_a3;
                goto LAB_00102a51;
              }
              goto switchD_00100529_caseD_a3;
            }
LAB_00106eed:
            puVar32[10] = uVar26 + (ulong)uVar24 * 4;
            break;
          default:
            goto switchD_00100529_caseD_62;
          case 0xb:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              uVar9 = *puVar11;
              puVar32[10] = (ulong)(puVar11 + 1);
              if (uVar9 == 0xd) {
                if ((puVar11 + 1 < puVar13) && (puVar11[1] == 10)) {
                  puVar32[10] = (ulong)(puVar11 + 2);
                }
              }
              else {
                if (uVar9 < 0xe) {
                  if (uVar9 == 10) goto LAB_00107a3b;
                  uVar9 = uVar9 - 0xb;
joined_r0x001095d1:
                  if (1 < uVar9) goto switchD_00100529_caseD_a3;
                }
                else if (uVar9 != 0x85) {
                  uVar9 = uVar9 - 0x2028;
                  goto joined_r0x001095d1;
                }
                if (*(short *)(param_6 + 0x62) == 2) goto switchD_00100529_caseD_a3;
              }
LAB_00107a3b:
              uVar31 = uVar31 + 1;
            } while (uVar31 <= uVar24);
            break;
          case 0xc:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              uVar9 = *puVar11;
              puVar32[10] = (ulong)(puVar11 + 1);
              if (uVar9 == 0x180e) goto switchD_00100529_caseD_a3;
              if (uVar9 < 0x180f) {
                if (uVar9 == 0xa0) goto switchD_00100529_caseD_a3;
                if (uVar9 < 0xa1) {
                  if ((uVar9 == 9) || (uVar9 == 0x20)) goto switchD_00100529_caseD_a3;
                }
                else if (uVar9 == 0x1680) goto switchD_00100529_caseD_a3;
              }
              else {
                if (uVar9 == 0x205f) goto switchD_00100529_caseD_a3;
                if (uVar9 < 0x2060) {
                  if (uVar9 < 0x200b) {
                    if (0x1fff < uVar9) goto switchD_00100529_caseD_a3;
                  }
                  else if (uVar9 == 0x202f) goto switchD_00100529_caseD_a3;
                }
                else if (uVar9 == 0x3000) goto switchD_00100529_caseD_a3;
              }
              uVar31 = uVar31 + 1;
            } while (uVar31 <= uVar24);
            break;
          case 0xd:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              uVar9 = *puVar11;
              puVar32[10] = (ulong)(puVar11 + 1);
              if (uVar9 != 0x180e) {
                if (uVar9 < 0x180f) {
                  if (uVar9 != 0xa0) {
                    if (uVar9 < 0xa1) {
                      if ((uVar9 != 9) && (uVar9 != 0x20)) goto switchD_00100529_caseD_a3;
                    }
                    else if (uVar9 != 0x1680) goto switchD_00100529_caseD_a3;
                  }
                }
                else if (uVar9 != 0x205f) {
                  if (uVar9 < 0x2060) {
                    if (uVar9 < 0x200b) {
                      if (uVar9 < 0x2000) goto switchD_00100529_caseD_a3;
                    }
                    else if (uVar9 != 0x202f) goto switchD_00100529_caseD_a3;
                  }
                  else if (uVar9 != 0x3000) goto switchD_00100529_caseD_a3;
                }
              }
              uVar31 = uVar31 + 1;
            } while (uVar31 <= uVar24);
            break;
          case 0xe:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              uVar9 = *puVar11;
              puVar32[10] = (ulong)(puVar11 + 1);
              if (uVar9 == 0x85) goto switchD_00100529_caseD_a3;
              if (uVar9 < 0x86) {
                if (uVar9 - 10 < 4) goto switchD_00100529_caseD_a3;
              }
              else if (uVar9 - 0x2028 < 2) goto switchD_00100529_caseD_a3;
              uVar31 = uVar31 + 1;
            } while (uVar31 <= uVar24);
            break;
          case 0xf:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              uVar9 = *puVar11;
              puVar32[10] = (ulong)(puVar11 + 1);
              if (uVar9 != 0x85) {
                if (uVar9 < 0x86) {
                  if (3 < uVar9 - 10) goto switchD_00100529_caseD_a3;
                }
                else if (1 < uVar9 - 0x2028) goto switchD_00100529_caseD_a3;
              }
              uVar31 = uVar31 + 1;
            } while (uVar31 <= uVar24);
          }
        }
        else {
          switch(iVar8 + -6) {
          case 0:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              uVar9 = *puVar11;
              puVar32[10] = (ulong)(puVar11 + 1);
              if ((uVar9 < 0x80) && ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar9) & 8) != 0)
                 ) goto switchD_00100529_caseD_a3;
              uVar31 = uVar31 + 1;
            } while (uVar31 <= uVar24);
            break;
          case 1:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              if ((0x7f < *puVar11) ||
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar11) & 8) == 0))
              goto switchD_00100529_caseD_a3;
              uVar31 = uVar31 + 1;
              puVar32[10] = (ulong)(puVar11 + 1);
            } while (uVar31 <= uVar24);
            break;
          case 2:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              if ((*puVar11 < 0x80) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar11) & 1) != 0))
              goto switchD_00100529_caseD_a3;
              uVar31 = uVar31 + 1;
              puVar32[10] = (ulong)(puVar11 + 1);
            } while (uVar31 <= uVar24);
            break;
          case 3:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              if ((0x7f < *puVar11) ||
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar11) & 1) == 0))
              goto switchD_00100529_caseD_a3;
              uVar31 = uVar31 + 1;
              puVar32[10] = (ulong)(puVar11 + 1);
            } while (uVar31 <= uVar24);
            break;
          case 4:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              if ((*puVar11 < 0x80) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar11) & 0x10) != 0))
              goto switchD_00100529_caseD_a3;
              uVar31 = uVar31 + 1;
              puVar32[10] = (ulong)(puVar11 + 1);
            } while (uVar31 <= uVar24);
            break;
          case 5:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              if ((0x7f < *puVar11) ||
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar11) & 0x10) == 0))
              goto switchD_00100529_caseD_a3;
              uVar31 = uVar31 + 1;
              puVar32[10] = (ulong)(puVar11 + 1);
            } while (uVar31 <= uVar24);
            break;
          case 6:
            uVar24 = 1;
            do {
              piVar10 = (int *)puVar32[10];
              if (*(int **)(param_6 + 0x88) <= piVar10) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((piVar10 <= *(int **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              if (*(int *)(param_6 + 0xe4) == 0) {
                if (((piVar10 <= *(int **)(param_6 + 0x88) + -(ulong)*(uint *)(param_6 + 0xe8)) &&
                    (*piVar10 == *(int *)(param_6 + 0xec))) &&
                   ((*(uint *)(param_6 + 0xe8) == 1 || (piVar10[1] == *(int *)(param_6 + 0xf0)))))
                goto switchD_00100529_caseD_a3;
              }
              else {
                iVar8 = _pcre2_is_newline_32();
                if (iVar8 != 0) goto switchD_00100529_caseD_a3;
              }
              if (((((*(short *)(param_6 + 0x60) != 0) &&
                    (*(int **)(param_6 + 0x88) <= (int *)puVar32[10] + 1)) &&
                   (*(int *)(param_6 + 0xe4) == 0)) &&
                  ((*(int *)(param_6 + 0xe8) == 2 &&
                   (*(int *)puVar32[10] == *(int *)(param_6 + 0xec))))) &&
                 (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
              goto LAB_00102a51;
              puVar32[10] = puVar32[10] + 4;
              uVar24 = uVar24 + 1;
            } while (uVar24 <= (uint)puVar32[7]);
            goto LAB_00105fc8;
          case 7:
            uVar26 = *(ulong *)(param_6 + 0x88);
            uVar31 = 1;
            do {
              uVar30 = puVar32[10];
              if (uVar26 <= uVar30) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((uVar30 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              uVar31 = uVar31 + 1;
              puVar32[10] = uVar30 + 4;
            } while (uVar31 <= uVar24);
            break;
          case 8:
            uVar26 = puVar32[10];
            if (uVar26 <= *(long *)(param_6 + 0x88) + (ulong)uVar24 * -4) goto LAB_00106eed;
            goto switchD_00100529_caseD_a3;
          default:
            goto switchD_00100529_caseD_62;
          case 0xb:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              uVar9 = *puVar11;
              puVar32[10] = (ulong)(puVar11 + 1);
              if (uVar9 == 0xd) {
                if ((puVar11 + 1 < puVar13) && (puVar11[1] == 10)) {
                  puVar32[10] = (ulong)(puVar11 + 2);
                }
              }
              else {
                if (uVar9 < 0xe) {
                  if (uVar9 == 10) goto LAB_00106c8b;
                  uVar9 = uVar9 - 0xb;
joined_r0x00109759:
                  if (1 < uVar9) goto switchD_00100529_caseD_a3;
                }
                else if (uVar9 != 0x85) {
                  uVar9 = uVar9 - 0x2028;
                  goto joined_r0x00109759;
                }
                if (*(short *)(param_6 + 0x62) == 2) goto switchD_00100529_caseD_a3;
              }
LAB_00106c8b:
              uVar31 = uVar31 + 1;
            } while (uVar31 <= uVar24);
            break;
          case 0xc:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              uVar9 = *puVar11;
              puVar32[10] = (ulong)(puVar11 + 1);
              if (uVar9 == 0x180e) goto switchD_00100529_caseD_a3;
              if (uVar9 < 0x180f) {
                if (uVar9 == 0xa0) goto switchD_00100529_caseD_a3;
                if (uVar9 < 0xa1) {
                  if ((uVar9 == 9) || (uVar9 == 0x20)) goto switchD_00100529_caseD_a3;
                }
                else if (uVar9 == 0x1680) goto switchD_00100529_caseD_a3;
              }
              else {
                if (uVar9 == 0x205f) goto switchD_00100529_caseD_a3;
                if (uVar9 < 0x2060) {
                  if (uVar9 < 0x200b) {
                    if (0x1fff < uVar9) goto switchD_00100529_caseD_a3;
                  }
                  else if (uVar9 == 0x202f) goto switchD_00100529_caseD_a3;
                }
                else if (uVar9 == 0x3000) goto switchD_00100529_caseD_a3;
              }
              uVar31 = uVar31 + 1;
            } while (uVar31 <= uVar24);
            break;
          case 0xd:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              uVar9 = *puVar11;
              puVar32[10] = (ulong)(puVar11 + 1);
              if (uVar9 != 0x180e) {
                if (uVar9 < 0x180f) {
                  if (uVar9 != 0xa0) {
                    if (uVar9 < 0xa1) {
                      if ((uVar9 != 9) && (uVar9 != 0x20)) goto switchD_00100529_caseD_a3;
                    }
                    else if (uVar9 != 0x1680) goto switchD_00100529_caseD_a3;
                  }
                }
                else if (uVar9 != 0x205f) {
                  if (uVar9 < 0x2060) {
                    if (uVar9 < 0x200b) {
                      if (uVar9 < 0x2000) goto switchD_00100529_caseD_a3;
                    }
                    else if (uVar9 != 0x202f) goto switchD_00100529_caseD_a3;
                  }
                  else if (uVar9 != 0x3000) goto switchD_00100529_caseD_a3;
                }
              }
              uVar31 = uVar31 + 1;
            } while (uVar31 <= uVar24);
            break;
          case 0xe:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              uVar9 = *puVar11;
              puVar32[10] = (ulong)(puVar11 + 1);
              if (uVar9 == 0x85) goto switchD_00100529_caseD_a3;
              if (uVar9 < 0x86) {
                if (uVar9 - 10 < 4) goto switchD_00100529_caseD_a3;
              }
              else if (uVar9 - 0x2028 < 2) goto switchD_00100529_caseD_a3;
              uVar31 = uVar31 + 1;
            } while (uVar31 <= uVar24);
            break;
          case 0xf:
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar11 = (uint *)puVar32[10];
              if (puVar13 <= puVar11) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar11 <= *(uint **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              uVar9 = *puVar11;
              puVar32[10] = (ulong)(puVar11 + 1);
              if (uVar9 != 0x85) {
                if (uVar9 < 0x86) {
                  if (3 < uVar9 - 10) goto switchD_00100529_caseD_a3;
                }
                else if (1 < uVar9 - 0x2028) goto switchD_00100529_caseD_a3;
              }
              uVar31 = uVar31 + 1;
            } while (uVar31 <= uVar24);
          }
        }
LAB_00105fcc:
        uVar31 = 0xffffffff;
LAB_001053ff:
        uVar9 = *(uint *)((long)puVar32 + 0x3c);
        if (uVar24 == uVar9) goto LAB_00100507;
        if (local_b4 == 0) {
          if ((int)uVar31 < 0) {
            if ((int)puVar32[8] == 0x16) {
LAB_001096d9:
              *(undefined1 *)(puVar32 + 9) = 0xda;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
            }
            else if (uVar17 == 0) {
LAB_00104223:
              *(undefined1 *)(puVar32 + 9) = 0x21;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
            }
            else {
LAB_00104279:
              *(undefined1 *)(puVar32 + 9) = 0xdb;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
            }
          }
          else {
            switch(uVar31) {
            case 0:
switchD_00109d6d_caseD_0:
              *(undefined1 *)(puVar32 + 9) = 0xd0;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              break;
            case 1:
switchD_00109d6d_caseD_1:
              *(undefined1 *)(puVar32 + 9) = 0xd1;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              break;
            case 2:
switchD_00109d6d_caseD_2:
              *(undefined1 *)(puVar32 + 9) = 0xd2;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              break;
            case 3:
switchD_00109d6d_caseD_3:
              *(undefined1 *)(puVar32 + 9) = 0xd3;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              break;
            case 4:
switchD_00109d6d_caseD_4:
              *(undefined1 *)(puVar32 + 9) = 0xd4;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              break;
            case 5:
switchD_00109d6d_caseD_5:
              *(undefined1 *)(puVar32 + 9) = 0xe1;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              break;
            case 6:
switchD_00109d6d_caseD_6:
              *(undefined1 *)(puVar32 + 9) = 0xd5;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              break;
            case 7:
            case 8:
switchD_00109d6d_caseD_7:
              *(undefined1 *)(puVar32 + 9) = 0xd6;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              break;
            case 9:
switchD_00109d6d_caseD_9:
              *(undefined1 *)(puVar32 + 9) = 0xd7;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              break;
            case 10:
switchD_00109d6d_caseD_a:
              *(undefined1 *)(puVar32 + 9) = 0xd8;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              break;
            case 0xb:
switchD_00109d6d_caseD_b:
              *(undefined1 *)(puVar32 + 9) = 0xd9;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              break;
            case 0xc:
switchD_00109d6d_caseD_c:
              *(undefined1 *)(puVar32 + 9) = 0xe0;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              break;
            case 0xd:
switchD_00109d6d_caseD_d:
              *(undefined1 *)(puVar32 + 9) = 0xdf;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              break;
            default:
              goto switchD_00100529_caseD_62;
            }
          }
          goto LAB_00101aa0;
        }
        puVar13 = (uint *)puVar32[10];
        puVar32[1] = (ulong)puVar13;
        if ((int)uVar31 < 0) {
          iVar8 = (int)puVar32[8];
          if (iVar8 == 0x16) {
            if (uVar24 < uVar9) {
              while (puVar11 = *(uint **)(param_6 + 0x88), puVar13 < puVar11) {
                uVar5 = *(undefined8 *)(param_6 + 0x78);
                uVar31 = *puVar13;
                puVar32[10] = (ulong)(puVar13 + 1);
                uVar26 = _pcre2_extuni_32(uVar31,puVar13 + 1,uVar5,puVar11,bVar34,0);
                puVar32[10] = uVar26;
                if ((((*(ulong *)(param_6 + 0x88) <= uVar26) && (*(short *)(param_6 + 0x60) != 0))
                    && ((*(ulong *)(param_6 + 0xa0) < uVar26 || (*(int *)(param_6 + 0x30) != 0))))
                   && (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
                goto LAB_00102a51;
                uVar24 = uVar24 + 1;
                if (*(uint *)((long)puVar32 + 0x3c) <= uVar24) goto LAB_00108aee;
                puVar13 = (uint *)puVar32[10];
              }
              if ((*(short *)(param_6 + 0x60) != 0) &&
                 (((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)) &&
                  (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
              goto LAB_00102a51;
            }
LAB_00108aee:
            if (local_b4 != 2) {
LAB_0010114c:
              if (puVar32[1] < puVar32[10]) {
                *(undefined1 *)(puVar32 + 9) = 0xdc;
                param_2 = (uint *)*puVar32;
                uVar24 = 0;
                goto LAB_00101aa0;
              }
            }
            goto LAB_00100507;
          }
          if (uVar17 == 0) {
            switch(iVar8) {
            case 6:
              if (uVar24 < uVar9) {
                puVar11 = *(uint **)(param_6 + 0x88);
                do {
                  if (puVar11 <= puVar13) {
                    sVar7 = *(short *)(param_6 + 0x60);
                    if ((sVar7 != 0) &&
                       ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0))))
                    {
                      *(undefined4 *)(param_6 + 0x28) = 1;
                      goto joined_r0x0010a550;
                    }
                    break;
                  }
                  if ((*puVar13 < 0x100) &&
                     ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 8) != 0)) break;
                  puVar13 = puVar13 + 1;
                  uVar24 = uVar24 + 1;
                  puVar32[10] = (ulong)puVar13;
                } while (uVar24 < uVar9);
              }
              break;
            case 7:
              if (uVar24 < uVar9) {
                puVar11 = *(uint **)(param_6 + 0x88);
LAB_001075d1:
                if (puVar13 < puVar11) {
                  if ((*puVar13 < 0x100) &&
                     ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 8) != 0))
                  goto code_r0x001075bc;
                }
                else {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 != 0) &&
                     ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                    *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x0010a0c3:
                    if (sVar7 == 1) break;
                    goto LAB_00102a51;
                  }
                }
                break;
              }
              break;
            case 8:
              if (uVar24 < uVar9) {
                puVar11 = *(uint **)(param_6 + 0x88);
                do {
                  if (puVar11 <= puVar13) {
                    sVar7 = *(short *)(param_6 + 0x60);
                    if ((sVar7 != 0) &&
                       ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0))))
                    {
                      *(undefined4 *)(param_6 + 0x28) = 1;
                      goto joined_r0x0010a0c3;
                    }
                    break;
                  }
                  if ((*puVar13 < 0x100) &&
                     ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 1) != 0)) break;
                  puVar13 = puVar13 + 1;
                  uVar24 = uVar24 + 1;
                  puVar32[10] = (ulong)puVar13;
                } while (uVar24 < uVar9);
              }
              break;
            case 9:
              if (uVar24 < uVar9) {
                puVar11 = *(uint **)(param_6 + 0x88);
                while (puVar13 < puVar11) {
                  if ((0xff < *puVar13) ||
                     ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 1) == 0))
                  goto LAB_00107145;
                  puVar13 = puVar13 + 1;
                  uVar24 = uVar24 + 1;
                  puVar32[10] = (ulong)puVar13;
                  if (uVar9 <= uVar24) goto LAB_00107145;
                }
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 != 0) &&
                   ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x0010a0c3;
                }
              }
              break;
            case 10:
              if (uVar24 < uVar9) {
                puVar11 = *(uint **)(param_6 + 0x88);
                do {
                  if (puVar11 <= puVar13) {
                    sVar7 = *(short *)(param_6 + 0x60);
                    if ((sVar7 != 0) &&
                       ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0))))
                    {
                      *(undefined4 *)(param_6 + 0x28) = 1;
                      goto joined_r0x0010a0c3;
                    }
                    break;
                  }
                  if ((*puVar13 < 0x100) &&
                     ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 0x10) != 0)) break;
                  puVar13 = puVar13 + 1;
                  uVar24 = uVar24 + 1;
                  puVar32[10] = (ulong)puVar13;
                } while (uVar24 < uVar9);
              }
              break;
            case 0xb:
              if (uVar24 < uVar9) {
                puVar11 = *(uint **)(param_6 + 0x88);
                while (puVar13 < puVar11) {
                  if ((0xff < *puVar13) ||
                     ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 0x10) == 0))
                  goto LAB_00107145;
                  puVar13 = puVar13 + 1;
                  uVar24 = uVar24 + 1;
                  puVar32[10] = (ulong)puVar13;
                  if (uVar9 <= uVar24) goto LAB_00107145;
                }
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 != 0) &&
                   ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x0010a550;
                }
              }
              break;
            case 0xc:
              if (uVar24 < uVar9) {
                while (puVar13 < *(uint **)(param_6 + 0x88)) {
                  if (*(int *)(param_6 + 0xe4) == 0) {
                    if (((puVar13 <= *(uint **)(param_6 + 0x88) + -(ulong)*(uint *)(param_6 + 0xe8))
                        && (*puVar13 == *(uint *)(param_6 + 0xec))) &&
                       ((*(uint *)(param_6 + 0xe8) == 1 || (puVar13[1] == *(uint *)(param_6 + 0xf0))
                        ))) goto LAB_00107145;
                  }
                  else {
                    iVar8 = _pcre2_is_newline_32();
                    if (iVar8 != 0) goto LAB_00107145;
                  }
                  if ((((*(short *)(param_6 + 0x60) != 0) &&
                       (*(int **)(param_6 + 0x88) <= (int *)puVar32[10] + 1)) &&
                      (*(int *)(param_6 + 0xe4) == 0)) &&
                     (((*(int *)(param_6 + 0xe8) == 2 &&
                       (*(int *)puVar32[10] == *(int *)(param_6 + 0xec))) &&
                      (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
                  goto LAB_00102a51;
                  puVar32[10] = puVar32[10] + 4;
                  uVar24 = uVar24 + 1;
                  if (*(uint *)((long)puVar32 + 0x3c) <= uVar24) goto LAB_00107145;
                  puVar13 = (uint *)puVar32[10];
                }
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 != 0) &&
                   ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x0010a550:
                  if (sVar7 != 1) goto LAB_00102a51;
                }
              }
              break;
            case 0xd:
            case 0xe:
              uVar26 = *(ulong *)(param_6 + 0x88);
              if ((uint)((long)(uVar26 - (long)puVar13) >> 2) < uVar9 - uVar24) {
                sVar7 = *(short *)(param_6 + 0x60);
                puVar32[10] = uVar26;
                if ((sVar7 != 0) &&
                   ((*(ulong *)(param_6 + 0xa0) < uVar26 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x0010a550;
                }
              }
              else {
                puVar32[10] = (ulong)(puVar13 + (uVar9 - uVar24));
              }
              break;
            default:
              goto switchD_00100529_caseD_62;
            case 0x11:
              if (uVar24 < uVar9) {
                puVar11 = *(uint **)(param_6 + 0x88);
                while (puVar13 < puVar11) {
                  uVar31 = *puVar13;
                  if (uVar31 == 0xd) {
                    puVar32[10] = (ulong)(puVar13 + 1);
                    if (puVar11 <= puVar13 + 1) goto LAB_00107145;
                    if (puVar13[1] == 10) {
                      puVar32[10] = (ulong)(puVar13 + 2);
                    }
                  }
                  else {
                    if ((uVar31 != 10) &&
                       ((*(short *)(param_6 + 0x62) == 2 ||
                        (((1 < uVar31 - 0xb && (uVar31 != 0x85)) && (1 < uVar31 - 0x2028))))))
                    goto LAB_00107145;
                    puVar32[10] = (ulong)(puVar13 + 1);
                  }
                  uVar24 = uVar24 + 1;
                  if (uVar9 <= uVar24) goto LAB_00107145;
                  puVar13 = (uint *)puVar32[10];
                }
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 != 0) &&
                   ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x0010a550;
                }
              }
              break;
            case 0x12:
              if (uVar24 < uVar9) {
                puVar11 = *(uint **)(param_6 + 0x88);
                do {
                  if (puVar11 <= puVar13) {
                    sVar7 = *(short *)(param_6 + 0x60);
                    if ((sVar7 != 0) &&
                       ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0))))
                    {
                      *(undefined4 *)(param_6 + 0x28) = 1;
                      goto joined_r0x0010a0c3;
                    }
                    break;
                  }
                  uVar31 = *puVar13;
                  if (uVar31 == 0x180e) break;
                  if (uVar31 < 0x180f) {
                    if (uVar31 == 0xa0) break;
                    if (uVar31 < 0xa1) {
                      if ((uVar31 == 9) || (uVar31 == 0x20)) break;
                    }
                    else if (uVar31 == 0x1680) break;
                  }
                  else {
                    if (uVar31 == 0x205f) break;
                    if (uVar31 < 0x2060) {
                      if (uVar31 < 0x200b) {
                        if (0x1fff < uVar31) break;
                      }
                      else if (uVar31 == 0x202f) break;
                    }
                    else if (uVar31 == 0x3000) break;
                  }
                  puVar13 = puVar13 + 1;
                  uVar24 = uVar24 + 1;
                  puVar32[10] = (ulong)puVar13;
                } while (uVar24 < uVar9);
              }
              break;
            case 0x13:
              if (uVar24 < uVar9) {
                puVar11 = *(uint **)(param_6 + 0x88);
                do {
                  if (puVar11 <= puVar13) {
                    sVar7 = *(short *)(param_6 + 0x60);
                    if ((sVar7 != 0) &&
                       ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0))))
                    {
                      *(undefined4 *)(param_6 + 0x28) = 1;
                      goto joined_r0x0010a0c3;
                    }
                    break;
                  }
                  uVar31 = *puVar13;
                  if (uVar31 != 0x180e) {
                    if (uVar31 < 0x180f) {
                      if (uVar31 != 0xa0) {
                        if (uVar31 < 0xa1) {
                          if ((uVar31 != 9) && (uVar31 != 0x20)) break;
                        }
                        else if (uVar31 != 0x1680) break;
                      }
                    }
                    else if (uVar31 != 0x205f) {
                      if (uVar31 < 0x2060) {
                        if (uVar31 < 0x200b) {
                          if (uVar31 < 0x2000) break;
                        }
                        else if (uVar31 != 0x202f) break;
                      }
                      else if (uVar31 != 0x3000) break;
                    }
                  }
                  puVar13 = puVar13 + 1;
                  uVar24 = uVar24 + 1;
                  puVar32[10] = (ulong)puVar13;
                } while (uVar24 < uVar9);
              }
              break;
            case 0x14:
              if (uVar24 < uVar9) {
                puVar11 = *(uint **)(param_6 + 0x88);
                do {
                  if (puVar11 <= puVar13) {
                    sVar7 = *(short *)(param_6 + 0x60);
                    if ((sVar7 != 0) &&
                       ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0))))
                    {
                      *(undefined4 *)(param_6 + 0x28) = 1;
                      goto joined_r0x0010a0c3;
                    }
                    break;
                  }
                  uVar31 = *puVar13;
                  if (uVar31 == 0x85) break;
                  if (uVar31 < 0x86) {
                    if (uVar31 - 10 < 4) break;
                  }
                  else if (uVar31 - 0x2028 < 2) break;
                  puVar13 = puVar13 + 1;
                  uVar24 = uVar24 + 1;
                  puVar32[10] = (ulong)puVar13;
                } while (uVar24 < uVar9);
              }
              break;
            case 0x15:
              if (uVar24 < uVar9) {
                puVar11 = *(uint **)(param_6 + 0x88);
                do {
                  if (puVar11 <= puVar13) {
                    sVar7 = *(short *)(param_6 + 0x60);
                    if ((sVar7 != 0) &&
                       ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0))))
                    {
                      *(undefined4 *)(param_6 + 0x28) = 1;
                      goto joined_r0x0010a0c3;
                    }
                    break;
                  }
                  uVar31 = *puVar13;
                  if (uVar31 != 0x85) {
                    if (uVar31 < 0x86) {
                      if (3 < uVar31 - 10) break;
                    }
                    else if (1 < uVar31 - 0x2028) break;
                  }
                  puVar13 = puVar13 + 1;
                  uVar24 = uVar24 + 1;
                  puVar32[10] = (ulong)puVar13;
                } while (uVar24 < uVar9);
              }
            }
LAB_00107145:
            if (local_b4 == 2) goto LAB_0010569d;
LAB_00100840:
            if (puVar32[10] != puVar32[1]) {
LAB_0010084e:
              *(undefined1 *)(puVar32 + 9) = 0x22;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              goto LAB_00101aa0;
            }
            goto LAB_00100507;
          }
          switch(iVar8) {
          case 6:
            if (uVar24 < uVar9) {
              puVar11 = *(uint **)(param_6 + 0x88);
              do {
                if (puVar11 <= puVar13) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 != 0) &&
                     ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x00109e79;
                  }
                  break;
                }
                if ((*puVar13 < 0x100) &&
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 8) != 0)) break;
                puVar13 = puVar13 + 1;
                uVar24 = uVar24 + 1;
                puVar32[10] = (ulong)puVar13;
              } while (uVar24 < uVar9);
            }
            break;
          case 7:
            if (uVar24 < uVar9) {
              puVar11 = *(uint **)(param_6 + 0x88);
LAB_00106601:
              if (puVar13 < puVar11) {
                if ((*puVar13 < 0x100) &&
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 8) != 0))
                goto code_r0x001065ec;
              }
              else {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 != 0) &&
                   ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x0010a003:
                  if (sVar7 == 1) break;
                  goto LAB_00102a51;
                }
              }
              break;
            }
            break;
          case 8:
            if (uVar24 < uVar9) {
              puVar11 = *(uint **)(param_6 + 0x88);
              do {
                if (puVar11 <= puVar13) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 != 0) &&
                     ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010a003;
                  }
                  break;
                }
                if ((*puVar13 < 0x100) &&
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 1) != 0)) break;
                puVar13 = puVar13 + 1;
                uVar24 = uVar24 + 1;
                puVar32[10] = (ulong)puVar13;
              } while (uVar24 < uVar9);
            }
            break;
          case 9:
            if (uVar24 < uVar9) {
              puVar11 = *(uint **)(param_6 + 0x88);
              while (puVar13 < puVar11) {
                if ((0xff < *puVar13) ||
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 1) == 0))
                goto LAB_001062b7;
                puVar13 = puVar13 + 1;
                uVar24 = uVar24 + 1;
                puVar32[10] = (ulong)puVar13;
                if (uVar9 <= uVar24) goto LAB_001062b7;
              }
              sVar7 = *(short *)(param_6 + 0x60);
              if ((sVar7 != 0) &&
                 ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x0010a003;
              }
            }
            break;
          case 10:
            if (uVar24 < uVar9) {
              puVar11 = *(uint **)(param_6 + 0x88);
              do {
                if (puVar11 <= puVar13) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 != 0) &&
                     ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010a003;
                  }
                  break;
                }
                if ((*puVar13 < 0x100) &&
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 0x10) != 0)) break;
                puVar13 = puVar13 + 1;
                uVar24 = uVar24 + 1;
                puVar32[10] = (ulong)puVar13;
              } while (uVar24 < uVar9);
            }
            break;
          case 0xb:
            if (uVar24 < uVar9) {
              puVar11 = *(uint **)(param_6 + 0x88);
              while (puVar13 < puVar11) {
                if ((0xff < *puVar13) ||
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 0x10) == 0))
                goto LAB_001062b7;
                puVar13 = puVar13 + 1;
                uVar24 = uVar24 + 1;
                puVar32[10] = (ulong)puVar13;
                if (uVar9 <= uVar24) goto LAB_001062b7;
              }
              sVar7 = *(short *)(param_6 + 0x60);
              if ((sVar7 != 0) &&
                 ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00109e79;
              }
            }
            break;
          case 0xc:
            if (uVar24 < uVar9) {
              while (puVar13 < *(uint **)(param_6 + 0x88)) {
                if (*(int *)(param_6 + 0xe4) == 0) {
                  if (((puVar13 <= *(uint **)(param_6 + 0x88) + -(ulong)*(uint *)(param_6 + 0xe8))
                      && (*puVar13 == *(uint *)(param_6 + 0xec))) &&
                     ((*(uint *)(param_6 + 0xe8) == 1 || (puVar13[1] == *(uint *)(param_6 + 0xf0))))
                     ) goto LAB_001062b7;
                }
                else {
                  iVar8 = _pcre2_is_newline_32();
                  if (iVar8 != 0) goto LAB_001062b7;
                }
                if (((((*(short *)(param_6 + 0x60) != 0) &&
                      (*(int **)(param_6 + 0x88) <= (int *)puVar32[10] + 1)) &&
                     (*(int *)(param_6 + 0xe4) == 0)) &&
                    ((*(int *)(param_6 + 0xe8) == 2 &&
                     (*(int *)puVar32[10] == *(int *)(param_6 + 0xec))))) &&
                   (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
                goto LAB_00102a51;
                puVar32[10] = puVar32[10] + 4;
                uVar24 = uVar24 + 1;
                if (*(uint *)((long)puVar32 + 0x3c) <= uVar24) goto LAB_001062b7;
                puVar13 = (uint *)puVar32[10];
              }
              sVar7 = *(short *)(param_6 + 0x60);
              if ((sVar7 != 0) &&
                 ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x00109e79:
                if (sVar7 != 1) goto LAB_00102a51;
              }
            }
            break;
          case 0xd:
            if (uVar9 == 0xffffffff) {
              uVar26 = *(ulong *)(param_6 + 0x88);
              sVar7 = *(short *)(param_6 + 0x60);
              puVar32[10] = uVar26;
              if ((sVar7 != 0) &&
                 ((*(ulong *)(param_6 + 0xa0) < uVar26 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00109e79;
              }
            }
            else if (uVar24 < uVar9) {
              puVar11 = *(uint **)(param_6 + 0x88);
              do {
                if (puVar11 <= puVar13) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 != 0) &&
                     ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x00109e79;
                  }
                  break;
                }
                puVar13 = puVar13 + 1;
                uVar24 = uVar24 + 1;
                puVar32[10] = (ulong)puVar13;
              } while (uVar9 != uVar24);
            }
            break;
          case 0xe:
            uVar26 = *(ulong *)(param_6 + 0x88);
            if ((uint)((long)(uVar26 - (long)puVar13) >> 2) < uVar9 - uVar24) {
              sVar7 = *(short *)(param_6 + 0x60);
              puVar32[10] = uVar26;
              if ((sVar7 != 0) &&
                 ((*(ulong *)(param_6 + 0xa0) < uVar26 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00109e79;
              }
            }
            else {
              puVar32[10] = (ulong)(puVar13 + (uVar9 - uVar24));
            }
            break;
          default:
            goto switchD_00100529_caseD_62;
          case 0x11:
            if (uVar24 < uVar9) {
              puVar11 = *(uint **)(param_6 + 0x88);
              while (puVar13 < puVar11) {
                uVar31 = *puVar13;
                if (uVar31 == 0xd) {
                  puVar32[10] = (ulong)(puVar13 + 1);
                  if (puVar11 <= puVar13 + 1) goto LAB_001062b7;
                  if (puVar13[1] == 10) {
                    puVar32[10] = (ulong)(puVar13 + 2);
                  }
                }
                else {
                  if ((uVar31 != 10) &&
                     ((*(short *)(param_6 + 0x62) == 2 ||
                      (((1 < uVar31 - 0xb && (uVar31 != 0x85)) && (1 < uVar31 - 0x2028))))))
                  goto LAB_001062b7;
                  puVar32[10] = (ulong)(puVar13 + 1);
                }
                uVar24 = uVar24 + 1;
                if (uVar9 <= uVar24) goto LAB_001062b7;
                puVar13 = (uint *)puVar32[10];
              }
              sVar7 = *(short *)(param_6 + 0x60);
              if ((sVar7 != 0) &&
                 ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00109e79;
              }
            }
            break;
          case 0x12:
          case 0x13:
            if (uVar24 < uVar9) {
              puVar11 = *(uint **)(param_6 + 0x88);
              do {
                if (puVar11 <= puVar13) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 != 0) &&
                     ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010a003;
                  }
                  break;
                }
                uVar31 = *puVar13;
                if (uVar31 == 0x180e) {
LAB_00109c80:
                  bVar35 = true;
                }
                else if (uVar31 < 0x180f) {
                  if (uVar31 == 0xa0) goto LAB_00109c80;
                  if (uVar31 < 0xa1) {
                    bVar35 = true;
                    if (uVar31 != 9) {
                      bVar35 = uVar31 == 0x20;
                    }
                  }
                  else {
                    bVar35 = uVar31 == 0x1680;
                  }
                }
                else {
                  if (uVar31 == 0x205f) goto LAB_00109c80;
                  if (uVar31 < 0x2060) {
                    if (uVar31 < 0x200b) {
                      bVar35 = 0x1fff < uVar31;
                    }
                    else {
                      bVar35 = uVar31 == 0x202f;
                    }
                  }
                  else {
                    bVar35 = uVar31 == 0x3000;
                  }
                }
                if ((iVar8 == 0x12) == bVar35) break;
                puVar13 = puVar13 + 1;
                uVar24 = uVar24 + 1;
                puVar32[10] = (ulong)puVar13;
              } while (uVar24 < uVar9);
            }
            break;
          case 0x14:
          case 0x15:
            if (uVar24 < uVar9) {
              puVar11 = *(uint **)(param_6 + 0x88);
              do {
                if (puVar11 <= puVar13) {
                  sVar7 = *(short *)(param_6 + 0x60);
                  if ((sVar7 != 0) &&
                     ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010a003;
                  }
                  break;
                }
                uVar31 = *puVar13;
                if (uVar31 == 0x85) {
                  bVar35 = true;
                }
                else if (uVar31 < 0x86) {
                  bVar35 = uVar31 - 10 < 4;
                }
                else {
                  bVar35 = uVar31 - 0x2028 < 2;
                }
                if ((iVar8 == 0x14) == bVar35) break;
                puVar13 = puVar13 + 1;
                uVar24 = uVar24 + 1;
                puVar32[10] = (ulong)puVar13;
              } while (uVar24 < uVar9);
            }
          }
LAB_001062b7:
          if (local_b4 != 2) {
LAB_00101030:
            if (puVar32[1] < puVar32[10]) {
LAB_0010103e:
              *(undefined1 *)(puVar32 + 9) = 0xdd;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              goto LAB_00101aa0;
            }
            goto LAB_00100507;
          }
          goto LAB_0010569d;
        }
        iVar8 = (int)puVar32[8];
        bVar35 = iVar8 == 0xf;
        if (0xd < uVar31) goto switchD_00100529_caseD_62;
        bVar33 = uVar24 < uVar9;
        switch(uVar31) {
        case 0:
          if (!bVar33) break;
          puVar11 = *(uint **)(param_6 + 0x88);
          if (puVar13 < puVar11) {
            if (iVar8 == 0xf) goto LAB_00105692;
            do {
              puVar13 = puVar13 + 1;
              uVar24 = uVar24 + 1;
              puVar32[10] = (ulong)puVar13;
              if (uVar9 <= uVar24) goto LAB_00105692;
            } while (puVar13 < puVar11);
          }
          sVar7 = *(short *)(param_6 + 0x60);
          if ((sVar7 != 0) &&
             ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
            *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x00105cf1:
            if (sVar7 != 1) goto LAB_00102a51;
          }
LAB_00105692:
          if (local_b4 == 2) goto LAB_0010569d;
          goto LAB_00100fee;
        case 1:
          if (bVar33) {
            puVar11 = *(uint **)(param_6 + 0x88);
            do {
              if (puVar11 <= puVar13) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 != 0) &&
                   ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00105cf1;
                }
                break;
              }
              uVar31 = *puVar13;
              puVar28 = &_pcre2_dummy_ucd_record_32;
              if (uVar31 < 0x110000) {
                puVar28 = &_pcre2_ucd_records_32 +
                          (ulong)*(ushort *)
                                  (&_pcre2_ucd_stage2_32 +
                                  (long)(int)((uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_32 +
                                                     (long)((int)uVar31 >> 7) * 2) * 0x80 +
                                             (uVar31 & 0x7f)) * 2) * 0xc;
              }
              if (bVar35 == ((byte)(puVar28[1] - 8) < 2 || puVar28[1] == '\x05')) break;
              puVar13 = puVar13 + 1;
              uVar24 = uVar24 + 1;
              puVar32[10] = (ulong)puVar13;
            } while (uVar24 < uVar9);
            goto LAB_00105692;
          }
          break;
        case 2:
          if (bVar33) {
            puVar11 = *(uint **)(param_6 + 0x88);
            do {
              if (puVar11 <= puVar13) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 != 0) &&
                   ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00105cf1;
                }
                break;
              }
              uVar31 = *puVar13;
              puVar28 = &_pcre2_dummy_ucd_record_32;
              if (uVar31 < 0x110000) {
                puVar28 = &_pcre2_ucd_records_32 +
                          (ulong)*(ushort *)
                                  (&_pcre2_ucd_stage2_32 +
                                  (long)(int)((uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_32 +
                                                     (long)((int)uVar31 >> 7) * 2) * 0x80 +
                                             (uVar31 & 0x7f)) * 2) * 0xc;
              }
              if (bVar35 == (*(int *)(&_pcre2_ucp_gentype_32 + (ulong)(byte)puVar28[1] * 4) ==
                            *(int *)((long)puVar32 + 0x44))) break;
              puVar13 = puVar13 + 1;
              uVar24 = uVar24 + 1;
              puVar32[10] = (ulong)puVar13;
            } while (uVar24 < uVar9);
            goto LAB_00105692;
          }
          break;
        case 3:
          if (bVar33) {
            puVar11 = *(uint **)(param_6 + 0x88);
            do {
              if (puVar11 <= puVar13) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 != 0) &&
                   ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00105cf1;
                }
                break;
              }
              uVar31 = *puVar13;
              puVar28 = &_pcre2_dummy_ucd_record_32;
              if (uVar31 < 0x110000) {
                puVar28 = &_pcre2_ucd_records_32 +
                          (ulong)*(ushort *)
                                  (&_pcre2_ucd_stage2_32 +
                                  (long)(int)((uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_32 +
                                                     (long)((int)uVar31 >> 7) * 2) * 0x80 +
                                             (uVar31 & 0x7f)) * 2) * 0xc;
              }
              if (bVar35 == ((uint)(byte)puVar28[1] == *(uint *)((long)puVar32 + 0x44))) break;
              puVar13 = puVar13 + 1;
              uVar24 = uVar24 + 1;
              puVar32[10] = (ulong)puVar13;
            } while (uVar24 < uVar9);
            goto LAB_00105692;
          }
          break;
        case 4:
          if (bVar33) {
            puVar11 = *(uint **)(param_6 + 0x88);
            do {
              if (puVar11 <= puVar13) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 != 0) &&
                   ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00105cf1;
                }
                break;
              }
              uVar31 = *puVar13;
              pbVar25 = &_pcre2_dummy_ucd_record_32;
              if (uVar31 < 0x110000) {
                pbVar25 = &_pcre2_ucd_records_32 +
                          (ulong)*(ushort *)
                                  (&_pcre2_ucd_stage2_32 +
                                  (long)(int)((uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_32 +
                                                     (long)((int)uVar31 >> 7) * 2) * 0x80 +
                                             (uVar31 & 0x7f)) * 2) * 0xc;
              }
              if (bVar35 == ((uint)*pbVar25 == *(uint *)((long)puVar32 + 0x44))) break;
              puVar13 = puVar13 + 1;
              uVar24 = uVar24 + 1;
              puVar32[10] = (ulong)puVar13;
            } while (uVar24 < uVar9);
            goto LAB_00105692;
          }
          break;
        case 5:
          if (bVar33) {
            puVar11 = *(uint **)(param_6 + 0x88);
            do {
              if (puVar11 <= puVar13) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 != 0) &&
                   ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00105cf1;
                }
                break;
              }
              uVar31 = *puVar13;
              pbVar25 = &_pcre2_dummy_ucd_record_32;
              if (uVar31 < 0x110000) {
                pbVar25 = &_pcre2_ucd_records_32 +
                          (ulong)*(ushort *)
                                  (&_pcre2_ucd_stage2_32 +
                                  (long)(int)((uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_32 +
                                                     (long)((int)uVar31 >> 7) * 2) * 0x80 +
                                             (uVar31 & 0x7f)) * 2) * 0xc;
              }
              uVar31 = *(uint *)((long)puVar32 + 0x44);
              bVar33 = true;
              if (*pbVar25 != uVar31) {
                bVar33 = (1 << ((byte)uVar31 & 0x1f) &
                         *(uint *)(&_pcre2_ucd_script_sets_32 +
                                  ((ulong)(*(ushort *)(pbVar25 + 8) & 0x3ff) + (ulong)(uVar31 >> 5))
                                  * 4)) != 0;
              }
              if (bVar35 == bVar33) break;
              puVar13 = puVar13 + 1;
              uVar24 = uVar24 + 1;
              puVar32[10] = (ulong)puVar13;
            } while (uVar24 < uVar9);
            goto LAB_00105692;
          }
          break;
        case 6:
          if (bVar33) {
            puVar11 = *(uint **)(param_6 + 0x88);
            do {
              if (puVar11 <= puVar13) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 != 0) &&
                   ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00105cf1;
                }
                break;
              }
              uVar31 = *puVar13;
              puVar28 = &_pcre2_dummy_ucd_record_32;
              if (uVar31 < 0x110000) {
                puVar28 = &_pcre2_ucd_records_32 +
                          (ulong)*(ushort *)
                                  (&_pcre2_ucd_stage2_32 +
                                  (long)(int)((uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_32 +
                                                     (long)((int)uVar31 >> 7) * 2) * 0x80 +
                                             (uVar31 & 0x7f)) * 2) * 0xc;
              }
              if (bVar35 == ((*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)(byte)puVar28[1] * 4) &
                             0xfffffffd) == 1)) break;
              puVar13 = puVar13 + 1;
              uVar24 = uVar24 + 1;
              puVar32[10] = (ulong)puVar13;
            } while (uVar24 < uVar9);
            goto LAB_00105692;
          }
          break;
        default:
          if (bVar33) {
            puVar11 = *(uint **)(param_6 + 0x88);
            do {
              if (puVar11 <= puVar13) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 != 0) &&
                   ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00105cf1;
                }
                break;
              }
              uVar31 = *puVar13;
              if (uVar31 == 0x180e) {
LAB_0010568c:
                if (iVar8 == 0xf) break;
              }
              else {
                if (uVar31 < 0x180f) {
                  if (uVar31 != 0x85) {
                    if (uVar31 < 0x86) {
                      if (uVar31 < 0xe) {
                        if (8 < uVar31) goto LAB_0010568c;
                      }
                      else if (uVar31 == 0x20) goto LAB_0010568c;
                      goto LAB_001055fc;
                    }
                    if ((uVar31 != 0xa0) && (uVar31 != 0x1680)) goto LAB_001055fc;
                  }
                  goto LAB_0010568c;
                }
                if (uVar31 < 0x2060) {
                  if (uVar31 < 0x2028) {
                    if (uVar31 - 0x2000 < 0xb) goto LAB_0010568c;
                  }
                  else if ((0x80000000000083U >> ((ulong)(uVar31 - 0x2028) & 0x3f) & 1) != 0)
                  goto LAB_0010568c;
LAB_001055fc:
                  puVar28 = &_pcre2_ucd_records_32 +
                            (ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_32 +
                                    (long)(int)((uVar31 & 0x7f) +
                                               (uint)*(ushort *)
                                                      (&_pcre2_ucd_stage1_32 +
                                                      (long)((int)uVar31 >> 7) * 2) * 0x80) * 2) *
                            0xc;
                }
                else {
                  if (uVar31 == 0x3000) goto LAB_0010568c;
                  if (uVar31 < 0x110000) goto LAB_001055fc;
                  puVar28 = &_pcre2_dummy_ucd_record_32;
                }
                if (bVar35 == (*(int *)(&_pcre2_ucp_gentype_32 + (ulong)(byte)puVar28[1] * 4) == 6))
                break;
              }
              puVar13 = puVar13 + 1;
              uVar24 = uVar24 + 1;
              puVar32[10] = (ulong)puVar13;
            } while (uVar24 < uVar9);
            goto LAB_00105692;
          }
          break;
        case 9:
          if (bVar33) {
            puVar11 = *(uint **)(param_6 + 0x88);
            do {
              if (puVar11 <= puVar13) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 != 0) &&
                   ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00105cf1;
                }
                break;
              }
              uVar31 = *puVar13;
              puVar28 = &_pcre2_dummy_ucd_record_32;
              if (uVar31 < 0x110000) {
                puVar28 = &_pcre2_ucd_records_32 +
                          (ulong)*(ushort *)
                                  (&_pcre2_ucd_stage2_32 +
                                  (long)(int)((uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_32 +
                                                     (long)((int)uVar31 >> 7) * 2) * 0x80 +
                                             (uVar31 & 0x7f)) * 2) * 0xc;
              }
              if (bVar35 == ((*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)(byte)puVar28[1] * 4) &
                             0xfffffffd) == 1 || (puVar28[1] - 0xc & 0xfb) == 0)) break;
              puVar13 = puVar13 + 1;
              uVar24 = uVar24 + 1;
              puVar32[10] = (ulong)puVar13;
            } while (uVar24 < uVar9);
            goto LAB_00105692;
          }
          break;
        case 10:
          if (bVar33) {
            puVar11 = *(uint **)(param_6 + 0x88);
            do {
              if (puVar11 <= puVar13) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 != 0) &&
                   ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00105cf1;
                }
                break;
              }
              uVar31 = *puVar13;
              if (uVar31 < 0x110000) {
                puVar14 = (uint *)(&_pcre2_ucd_caseless_sets_32 +
                                  (ulong)*(uint *)((long)puVar32 + 0x44) * 4);
                do {
                  uVar23 = *puVar14;
                  if (uVar31 < uVar23) break;
                  puVar14 = puVar14 + 1;
                } while (uVar31 != uVar23);
              }
              if (iVar8 == 0xf) break;
              puVar13 = puVar13 + 1;
              uVar24 = uVar24 + 1;
              puVar32[10] = (ulong)puVar13;
            } while (uVar24 < uVar9);
            goto LAB_00105692;
          }
          break;
        case 0xb:
          if (bVar33) {
            puVar11 = *(uint **)(param_6 + 0x88);
            do {
              if (puVar11 <= puVar13) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 != 0) &&
                   ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00105cf1;
                }
                break;
              }
              uVar31 = *puVar13;
              if (((uVar31 & 0xffffffdf) == 0x40) || (uVar31 == 0x24)) {
                bVar33 = true;
              }
              else {
                bVar33 = uVar31 - 0xa0 < 0xd760 || 0xdfff < uVar31;
              }
              if (bVar35 == bVar33) break;
              puVar13 = puVar13 + 1;
              uVar24 = uVar24 + 1;
              puVar32[10] = (ulong)puVar13;
            } while (uVar24 < uVar9);
            goto LAB_00105692;
          }
          break;
        case 0xc:
          if (bVar33) {
            puVar11 = *(uint **)(param_6 + 0x88);
            do {
              if (puVar11 <= puVar13) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 != 0) &&
                   ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00105cf1;
                }
                break;
              }
              uVar31 = *puVar13;
              puVar28 = &_pcre2_dummy_ucd_record_32;
              if (uVar31 < 0x110000) {
                puVar28 = &_pcre2_ucd_records_32 +
                          (ulong)*(ushort *)
                                  (&_pcre2_ucd_stage2_32 +
                                  (long)(int)((uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_32 +
                                                     (long)((int)uVar31 >> 7) * 2) * 0x80 +
                                             (uVar31 & 0x7f)) * 2) * 0xc;
              }
              if (bVar35 == ((uint)(*(ushort *)(puVar28 + 8) >> 0xb) ==
                            *(uint *)((long)puVar32 + 0x44))) break;
              puVar13 = puVar13 + 1;
              uVar24 = uVar24 + 1;
              puVar32[10] = (ulong)puVar13;
            } while (uVar24 < uVar9);
            goto LAB_00105692;
          }
          break;
        case 0xd:
          if (bVar33) {
            puVar11 = *(uint **)(param_6 + 0x88);
            do {
              if (puVar11 <= puVar13) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 != 0) &&
                   ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00105cf1;
                }
                break;
              }
              uVar31 = *puVar13;
              puVar28 = &_pcre2_dummy_ucd_record_32;
              if (uVar31 < 0x110000) {
                puVar28 = &_pcre2_ucd_records_32 +
                          (ulong)*(ushort *)
                                  (&_pcre2_ucd_stage2_32 +
                                  (long)(int)((uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_32 +
                                                     (long)((int)uVar31 >> 7) * 2) * 0x80 +
                                             (uVar31 & 0x7f)) * 2) * 0xc;
              }
              if (bVar35 == ((1 << ((byte)*(uint *)((long)puVar32 + 0x44) & 0x1f) &
                             *(uint *)(&_pcre2_ucd_boolprop_sets_32 +
                                      ((ulong)(*(ushort *)(puVar28 + 10) & 0xfff) +
                                      (ulong)(*(uint *)((long)puVar32 + 0x44) >> 5)) * 4)) != 0))
              break;
              puVar13 = puVar13 + 1;
              uVar24 = uVar24 + 1;
              puVar32[10] = (ulong)puVar13;
            } while (uVar24 < uVar9);
            goto LAB_00105692;
          }
        }
LAB_00108d57:
        if (local_b4 != 2) goto LAB_00100507;
LAB_0010569d:
        local_b4 = 2;
        goto LAB_00100507;
            default:
        goto switchD_00100529_caseD_62;
            case 0x6e:
            case 0x6f:
        puVar11 = puVar13 + 1;
        *puVar32 = (ulong)(puVar13 + 9);
        uVar24 = puVar13[9];
        puVar32[2] = (ulong)puVar11;
        if (uVar24 < 0x6d) {
          if (uVar24 < 0x6a) {
            if (0x67 < uVar24) goto LAB_001084a7;
            if (uVar24 < 0x62) goto LAB_00108497;
          }
          *puVar32 = (ulong)(puVar13 + 10);
          uVar26 = (ulong)(uVar24 - 0x62);
          local_b4 = *(uint *)(rep_typ + uVar26 * 4);
          puVar32[7] = CONCAT44(*(undefined4 *)(rep_max + uVar26 * 4),
                                *(undefined4 *)(rep_min + uVar26 * 4));
        }
        else if (uVar24 == 0x6d) {
LAB_001084a7:
          *(uint *)(puVar32 + 7) = puVar13[10];
          uVar24 = puVar13[0xb];
          if (uVar24 == 0) {
            uVar24 = 0xffffffff;
          }
          *(uint *)((long)puVar32 + 0x3c) = uVar24;
          uVar24 = puVar13[9];
          *puVar32 = (ulong)(puVar13 + 0xc);
          local_b4 = *(uint *)(rep_typ + (ulong)(uVar24 - 0x62) * 4);
        }
        else {
LAB_00108497:
          puVar32[7] = _LC5;
        }
        uVar24 = (uint)puVar32[7];
        if (uVar17 == 0) {
          if (uVar24 != 0) {
            puVar13 = *(uint **)(param_6 + 0x88);
            uVar31 = 1;
            do {
              puVar14 = (uint *)puVar32[10];
              if (puVar13 <= puVar14) goto LAB_001085bb;
              uVar9 = *puVar14;
              puVar32[10] = (ulong)(puVar14 + 1);
              if (uVar9 < 0x100) {
                if ((*(byte *)((long)puVar11 + (ulong)(uVar9 >> 3)) >> (uVar9 & 7) & 1) == 0)
                goto switchD_00100529_caseD_a3;
              }
              else if (bVar16 == 0x6e) goto switchD_00100529_caseD_a3;
              uVar31 = uVar31 + 1;
            } while (uVar31 <= uVar24);
          }
        }
        else if (uVar24 != 0) {
          puVar13 = *(uint **)(param_6 + 0x88);
          uVar31 = 1;
          do {
            puVar14 = (uint *)puVar32[10];
            if (puVar13 <= puVar14) goto LAB_001085bb;
            uVar9 = *puVar14;
            puVar32[10] = (ulong)(puVar14 + 1);
            if (uVar9 < 0x100) {
              if ((*(byte *)((long)puVar11 + (ulong)(uVar9 >> 3)) >> (uVar9 & 7) & 1) == 0)
              goto switchD_00100529_caseD_a3;
            }
            else if (bVar16 == 0x6e) goto switchD_00100529_caseD_a3;
            uVar31 = uVar31 + 1;
          } while (uVar31 <= uVar24);
        }
        uVar31 = *(uint *)((long)puVar32 + 0x3c);
        if (uVar24 != uVar31) {
          if (local_b4 == 0) {
            if (uVar17 == 0) {
LAB_0010224e:
              *(undefined1 *)(puVar32 + 9) = 0x17;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
            }
            else {
LAB_0010248e:
              *(undefined1 *)(puVar32 + 9) = 200;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
            }
            goto LAB_00101aa0;
          }
          puVar13 = (uint *)puVar32[10];
          puVar32[1] = (ulong)puVar13;
          if (uVar17 == 0) {
            if (uVar31 <= uVar24) {
              if (local_b4 == 2) goto LAB_0010569d;
LAB_00100b6f:
              *(undefined1 *)(puVar32 + 9) = 0x18;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              goto LAB_00101aa0;
            }
            puVar14 = *(uint **)(param_6 + 0x88);
            do {
              if (puVar14 <= puVar13) {
                if (((*(short *)(param_6 + 0x60) != 0) &&
                    ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) &&
                   (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
                goto LAB_00102a51;
                break;
              }
              uVar9 = *puVar13;
              if (uVar9 < 0x100) {
                if ((*(byte *)((long)puVar11 + (ulong)(uVar9 >> 3)) >> (uVar9 & 7) & 1) == 0) break;
              }
              else if (bVar16 == 0x6e) break;
              puVar13 = puVar13 + 1;
              uVar24 = uVar24 + 1;
              puVar32[10] = (ulong)puVar13;
            } while (uVar24 < uVar31);
            if (local_b4 != 2) goto LAB_00100b5e;
          }
          else {
            if (uVar24 < uVar31) {
              puVar14 = *(uint **)(param_6 + 0x88);
              do {
                if (puVar14 <= puVar13) {
                  if ((*(short *)(param_6 + 0x60) != 0) &&
                     (((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)) &&
                      (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
                  goto LAB_00102a51;
                  break;
                }
                uVar9 = *puVar13;
                if (uVar9 < 0x100) {
                  if ((*(byte *)((long)puVar11 + (ulong)(uVar9 >> 3)) >> (uVar9 & 7) & 1) == 0)
                  break;
                }
                else if (bVar16 == 0x6e) break;
                puVar13 = puVar13 + 1;
                uVar24 = uVar24 + 1;
                puVar32[10] = (ulong)puVar13;
              } while (uVar24 < uVar31);
            }
            if (local_b4 != 2) {
LAB_001018ff:
              *(undefined1 *)(puVar32 + 9) = 0xc9;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              goto LAB_00101aa0;
            }
          }
        }
        goto LAB_00100507;
            case 0x70:
        puVar32[2] = (ulong)(puVar13 + 2);
        puVar13 = puVar13 + puVar13[1];
        uVar24 = *puVar13;
        *puVar32 = (ulong)puVar13;
        if (uVar24 < 0x6d) {
          if (uVar24 < 0x6a) {
            if (0x67 < uVar24) goto LAB_00108668;
            if (uVar24 < 0x62) goto LAB_00108658;
          }
          *puVar32 = (ulong)(puVar13 + 1);
          uVar26 = (ulong)(uVar24 - 0x62);
          local_b4 = *(uint *)(rep_typ + uVar26 * 4);
          puVar32[7] = CONCAT44(*(undefined4 *)(rep_max + uVar26 * 4),
                                *(undefined4 *)(rep_min + uVar26 * 4));
LAB_00103b20:
          uVar24 = (uint)puVar32[7];
          if (uVar24 != 0) {
LAB_00103b2d:
            uVar31 = 1;
            do {
              puVar27 = (undefined4 *)puVar32[10];
              if (*(undefined4 **)(param_6 + 0x88) <= puVar27) {
                sVar7 = *(short *)(param_6 + 0x60);
                if ((sVar7 == 0) ||
                   ((puVar27 <= *(undefined4 **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))
                   )) goto switchD_00100529_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00106fcd;
              }
              uVar4 = *puVar27;
              puVar32[10] = (ulong)(puVar27 + 1);
              iVar8 = _pcre2_xclass_32(uVar4,puVar32[2],bVar34);
              if (iVar8 == 0) {
                uVar24 = 0;
                goto switchD_001005c7_caseD_23;
              }
              uVar24 = (uint)puVar32[7];
              uVar31 = uVar31 + 1;
            } while (uVar31 <= uVar24);
          }
          if (*(uint *)((long)puVar32 + 0x3c) == uVar24) goto LAB_00100507;
          if (local_b4 != 0) {
            puVar27 = (undefined4 *)puVar32[10];
            puVar32[1] = (ulong)puVar27;
            if (uVar24 < *(uint *)((long)puVar32 + 0x3c)) {
LAB_00108554:
              while (puVar27 < *(undefined4 **)(param_6 + 0x88)) {
                iVar8 = _pcre2_xclass_32(*puVar27,puVar32[2],bVar34);
                if (iVar8 == 0) goto LAB_00108586;
                puVar32[10] = puVar32[10] + 4;
                uVar24 = uVar24 + 1;
                if (*(uint *)((long)puVar32 + 0x3c) <= uVar24) goto LAB_00108586;
                puVar27 = (undefined4 *)puVar32[10];
              }
              if (((*(short *)(param_6 + 0x60) != 0) &&
                  ((*(undefined4 **)(param_6 + 0xa0) < puVar27 || (*(int *)(param_6 + 0x30) != 0))))
                 && (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
              goto LAB_00102a51;
            }
LAB_00108586:
            if (local_b4 != 2) {
LAB_0010199f:
              *(undefined1 *)(puVar32 + 9) = 0x65;
              param_2 = (uint *)*puVar32;
              uVar24 = 0;
              goto LAB_00101aa0;
            }
            goto LAB_00100507;
          }
        }
        else {
          if (uVar24 != 0x6d) {
LAB_00108658:
            puVar32[7] = _LC5;
            goto LAB_00103b20;
          }
LAB_00108668:
          uVar24 = puVar13[1];
          *(uint *)(puVar32 + 7) = uVar24;
          uVar31 = puVar13[2];
          if (puVar13[2] == 0) {
            uVar31 = 0xffffffff;
          }
          *(uint *)((long)puVar32 + 0x3c) = uVar31;
          uVar31 = *puVar13;
          *puVar32 = (ulong)(puVar13 + 3);
          local_b4 = *(uint *)(rep_typ + (ulong)(uVar31 - 0x62) * 4);
          if (uVar24 != 0) goto LAB_00103b2d;
          if (local_b4 != 0) {
            puVar27 = (undefined4 *)puVar32[10];
            puVar32[1] = (ulong)puVar27;
            uVar24 = 0;
            goto LAB_00108554;
          }
        }
        local_b4 = 0;
LAB_00106929:
        *(undefined1 *)(puVar32 + 9) = 100;
        param_2 = (uint *)*puVar32;
        uVar24 = 0;
        goto LAB_00101aa0;
            case 0x71:
            case 0x72:
        *(uint *)(puVar32 + 8) = (uint)(bVar16 == 0x72);
        uVar24 = puVar13[1];
        *puVar32 = (ulong)(puVar13 + 2);
        puVar32[5] = (ulong)(uVar24 * 2 - 2);
        goto LAB_00102ed4;
            case 0x73:
            case 0x74:
        lVar21 = *(long *)(param_6 + 0x68);
        *(uint *)(puVar32 + 8) = (uint)(bVar16 == 0x74);
        uVar2 = *(ushort *)(param_6 + 0x66);
        uVar24 = puVar13[2];
        uVar31 = puVar13[1];
        *puVar32 = (ulong)(puVar13 + 3);
        piVar10 = (int *)(lVar21 + (ulong)(uVar2 * uVar31) * 4);
        if (0 < (int)uVar24) {
          do {
            uVar24 = uVar24 - 1;
            uVar26 = (ulong)(*piVar10 * 2 - 2);
            if ((uVar26 < puVar32[0x10]) && (puVar32[uVar26 + 0x11] != 0xffffffffffffffff)) break;
            piVar10 = piVar10 + uVar2;
          } while (uVar24 != 0);
          puVar32[5] = uVar26;
        }
LAB_00102ed4:
        puVar13 = (uint *)*puVar32;
        uVar24 = *puVar13;
        if (uVar24 < 0x68) {
          if (0x61 < uVar24) {
            *puVar32 = (ulong)(puVar13 + 1);
            uVar26 = (ulong)(uVar24 - 0x62);
            local_b4 = *(uint *)(rep_typ + uVar26 * 4);
            puVar32[7] = CONCAT44(*(undefined4 *)(rep_max + uVar26 * 4),
                                  *(undefined4 *)(rep_min + uVar26 * 4));
            goto LAB_00102f27;
          }
LAB_001069f8:
          iVar8 = match_ref(puVar32[5],(int)puVar32[8],puVar32,param_6,&local_50);
          if (iVar8 != 0) {
            if (iVar8 < 1) {
              uVar26 = puVar32[10];
              if (uVar26 < *(ulong *)(param_6 + 0x88)) break;
            }
            else {
              uVar26 = *(ulong *)(param_6 + 0x88);
              puVar32[10] = uVar26;
            }
            sVar7 = *(short *)(param_6 + 0x60);
            if ((sVar7 == 0) ||
               ((uVar26 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0)))) break;
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x00106fcd;
          }
          puVar32[10] = puVar32[10] + local_50 * 4;
          goto LAB_00100507;
        }
        if (1 < uVar24 - 0x68) goto LAB_001069f8;
        *(uint *)(puVar32 + 7) = puVar13[1];
        uVar24 = puVar13[2];
        *(uint *)((long)puVar32 + 0x3c) = uVar24;
        local_b4 = *(uint *)(rep_typ + (ulong)(*puVar13 - 0x62) * 4);
        if (uVar24 == 0) {
          uVar24 = 0xffffffff;
        }
        *puVar32 = (ulong)(puVar13 + 3);
        *(uint *)((long)puVar32 + 0x3c) = uVar24;
LAB_00102f27:
        uVar26 = puVar32[5];
        if ((uVar26 < puVar32[0x10]) && (puVar32[uVar26 + 0x11] != 0xffffffffffffffff)) {
          if (puVar32[uVar26 + 0x11] != puVar32[uVar26 + 0x12]) {
            uVar24 = (uint)puVar32[7];
            if (uVar24 != 0) goto LAB_00102f64;
            goto LAB_00108b6c;
          }
          goto LAB_00100507;
        }
        if (((int)puVar32[7] == 0) || ((*(byte *)(param_6 + 0xd9) & 2) != 0)) goto LAB_00100507;
        uVar24 = (uint)puVar32[7];
LAB_00102f64:
        uVar31 = 1;
        do {
          iVar8 = match_ref(uVar26,(int)puVar32[8],puVar32,param_6,&local_48);
          if (iVar8 != 0) {
            if (iVar8 < 1) {
              uVar26 = puVar32[10];
              if (uVar26 < *(ulong *)(param_6 + 0x88)) goto switchD_00100529_caseD_a3;
            }
            else {
              uVar26 = *(ulong *)(param_6 + 0x88);
              puVar32[10] = uVar26;
            }
            sVar7 = *(short *)(param_6 + 0x60);
            if ((sVar7 == 0) ||
               ((uVar26 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
            goto switchD_00100529_caseD_a3;
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x00106fcd;
          }
          uVar31 = uVar31 + 1;
          puVar32[10] = puVar32[10] + local_48 * 4;
        } while (uVar31 <= uVar24);
LAB_00108b6c:
        uVar31 = *(uint *)((long)puVar32 + 0x3c);
        if (uVar24 == uVar31) goto LAB_00100507;
        if (local_b4 == 0) {
LAB_00109a71:
          *(undefined1 *)(puVar32 + 9) = 0x14;
          param_2 = (uint *)*puVar32;
          uVar24 = 0;
        }
        else {
          uVar30 = puVar32[uVar26 + 0x12] - puVar32[uVar26 + 0x11];
          puVar32[1] = puVar32[10];
          puVar32[3] = uVar30;
          if (uVar24 < uVar31) {
            bVar35 = true;
            do {
              while( true ) {
                iVar8 = match_ref(uVar26,(int)puVar32[8],puVar32,param_6,&local_48);
                if (iVar8 != 0) {
                  if ((((0 < iVar8) && (*(short *)(param_6 + 0x60) != 0)) &&
                      (*(ulong *)(param_6 + 0xa0) < *(ulong *)(param_6 + 0x88))) &&
                     (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
                  goto LAB_00102a51;
                  goto LAB_00108c3c;
                }
                if (uVar30 == local_48) break;
                uVar24 = uVar24 + 1;
                puVar32[10] = puVar32[10] + local_48 * 4;
                if (uVar31 <= uVar24) goto LAB_00108c4b;
                bVar35 = false;
              }
              uVar24 = uVar24 + 1;
              puVar32[10] = puVar32[10] + uVar30 * 4;
            } while (uVar24 < uVar31);
LAB_00108c3c:
            if (bVar35) goto LAB_001008e5;
LAB_00108c4b:
            *(uint *)((long)puVar32 + 0x3c) = uVar24;
LAB_00108c4f:
            *(undefined1 *)(puVar32 + 9) = 0x16;
            param_2 = (uint *)*puVar32;
            uVar24 = 0;
          }
          else {
LAB_001008f6:
            *(undefined1 *)(puVar32 + 9) = 0x15;
            param_2 = (uint *)*puVar32;
            uVar24 = 0;
          }
        }
        goto LAB_00101aa0;
            case 0x75:
        uVar24 = 0;
        uVar26 = *(ulong *)(param_6 + 0x70) + (ulong)puVar13[1] * 4;
        if (*(ulong *)(param_6 + 0x70) != uVar26) {
          uVar24 = *(uint *)(uVar26 + 8);
        }
        if (((int)puVar32[0xe] == -1) || (uVar30 = puVar32[0xf], uVar30 == 0xffffffffffffffff))
        goto LAB_00103f9a;
        goto LAB_00103f7e;
            case 0x76:
            case 0x77:
        uVar24 = do_callout(puVar32,param_6,&local_50);
        if (0 < (int)uVar24) break;
        if (uVar24 != 0) goto switchD_001005c7_caseD_23;
        *puVar32 = *puVar32 + local_50 * 4;
        goto LAB_00100507;
            case 0x78:
        puVar11 = puVar13;
        do {
          puVar11 = puVar11 + puVar11[1];
        } while (*puVar11 == 0x78);
        *puVar32 = (ulong)puVar11;
        local_98 = puVar13;
        goto LAB_00100507;
            for (int i = 0; i < 3; i++) {
               case 0x79:
            }
            case 0x7c:
        param_2 = puVar13 + -(ulong)puVar13[1];
        puVar11 = param_2;
        if (local_98 == (uint *)0x0) {
          local_98 = puVar13;
        }
        do {
          puVar14 = puVar11;
          puVar11 = puVar14 + puVar14[1];
        } while (puVar14 + puVar14[1] != local_98);
        uVar24 = *param_2;
        if ((uVar24 - 0x87 & 0xfffffffb) != 0) {
          local_a8 = (ulong *)(puVar32[0xf] + param_5[6]);
          uVar9 = *(uint *)((long)local_a8 + 0x34);
          plVar29 = (long *)((long)local_a8 - param_4);
          puVar32[0xf] = plVar29[0xf];
          if (uVar9 >> 0x10 != 3) goto LAB_00102ce1;
          memcpy(plVar29 + 0x11,puVar32 + 0x11,puVar32[0x10] * 8);
          plVar29[0x10] = puVar32[0x10];
          plVar29[0xc] = puVar32[0xc];
          puVar32[4] = (long)puVar32 - (long)plVar29;
          goto switchD_00102cfb_caseD_80;
        }
        plVar29 = (long *)0x0;
LAB_00102ce1:
        switch(uVar24) {
        case 0x7f:
          uVar30 = puVar32[10];
          break;
        case 0x80:
          goto switchD_00102cfb_caseD_80;
        case 0x81:
          uVar30 = puVar32[10];
          if (puVar14[2] == 0x7e) {
            local_98 = (uint *)0x0;
            uVar24 = 0;
            if (uVar30 != plVar29[10]) goto switchD_001005c7_caseD_23;
          }
          break;
        case 0x82:
          if (puVar14[2] == 0x7e) {
            local_98 = (uint *)0x0;
            uVar24 = (uint)(puVar32[10] == plVar29[10]);
            goto switchD_001005c7_caseD_23;
          }
          goto switchD_00102cfb_caseD_80;
        case 0x83:
          uVar30 = puVar32[10];
          goto LAB_00104861;
        case 0x84:
          uVar30 = puVar32[10];
          if ((puVar14[2] == 0x7e) && (uVar30 != plVar29[10])) {
            uVar24 = 0;
            local_98 = (uint *)0x0;
            goto switchD_001005c7_caseD_23;
          }
LAB_00104861:
          if (*(ulong *)(param_6 + 0xa8) < uVar30) {
            *(ulong *)(param_6 + 0xa8) = uVar30;
          }
          uVar30 = plVar29[10];
          puVar32[10] = uVar30;
joined_r0x001099c3:
          if (uVar31 == 0x7c) goto LAB_00104882;
          if (bVar16 != 0x79) goto LAB_001041c4;
          goto LAB_001041ce;
        case 0x85:
          goto switchD_00102cfb_caseD_85;
        case 0x86:
          uVar24 = _pcre2_script_run_32(plVar29[10],puVar32[10],bVar34);
          if (uVar24 == 0) goto LAB_00104725;
          puVar13 = (uint *)*puVar32;
          if (*puVar13 == 0x7c) goto LAB_00104882;
          bVar16 = *(byte *)((long)puVar32 + 0x49);
          uVar26 = (ulong)bVar16;
          goto joined_r0x0010496d;
        case 0x87:
          if (((int)puVar32[0xe] != 0) || (puVar13[2] != 0)) goto switchD_00102cfb_caseD_88;
          if (puVar32[0xf] == 0xffffffffffffffff) goto switchD_00100529_caseD_62;
          local_a8 = (ulong *)(puVar32[0xf] + param_5[6]);
          plVar29 = (long *)((long)local_a8 - param_4);
          puVar32[0xf] = plVar29[0xf];
LAB_001048e0:
          memcpy(puVar32 + 0x11,plVar29 + 0x11,puVar32[0x10] * 8);
          puVar32[0x10] = plVar29[0x10];
          puVar32[0xe] = plVar29[0xe];
          local_98 = (uint *)0x0;
          *puVar32 = *plVar29 + 8;
          goto LAB_00100507;
        default:
switchD_00102cfb_caseD_88:
          if (uVar31 == 0x7c) goto LAB_00104882;
          if (bVar16 != 0x79) {
            if (plVar29 != (long *)0x0) goto LAB_001042a5;
            goto LAB_0010a16e;
          }
          goto LAB_001041ce;
        case 0x89:
        case 0x8a:
        case 0x8e:
        case 0x8f:
          uVar24 = param_2[2];
          if (uVar24 == (uint)puVar32[0xe]) {
            plVar29 = (long *)((long)local_a8 - param_4);
            goto LAB_001048e0;
          }
          lVar21 = *(long *)(param_6 + 0x78);
          *(uint *)((long)puVar32 + 0x74) = uVar24;
          uVar15 = (ulong)(uVar24 * 2 - 2);
          puVar32[uVar15 + 0x11] = plVar29[10] - lVar21 >> 2;
          uVar30 = puVar32[10];
          puVar32[uVar15 + 0x12] = (long)(uVar30 - lVar21) >> 2;
          if (uVar15 < puVar32[0x10]) {
            uVar31 = *puVar13;
          }
          else {
            uVar31 = *puVar13;
            puVar32[0x10] = uVar15 + 2;
          }
          goto joined_r0x001099c3;
        }
        if (*(ulong *)(param_6 + 0xa8) < uVar30) {
          *(ulong *)(param_6 + 0xa8) = uVar30;
        }
        puVar32[10] = plVar29[10];
switchD_00102cfb_caseD_85:
        puVar32[4] = (long)puVar32 - (long)plVar29;
        piVar10 = (int *)(*plVar29 + (ulong)*(uint *)(*plVar29 + 4) * 4);
        if (*piVar10 == 0x78) {
          do {
            piVar19 = piVar10;
            piVar10 = piVar19 + (uint)piVar19[1];
          } while (piVar19[(uint)piVar19[1]] == 0x78);
          *plVar29 = (long)piVar19;
          puVar13 = (uint *)*puVar32;
          uVar31 = *puVar13;
        }
        if (uVar31 == 0x7c) {
LAB_00104882:
          uVar24 = 0xfffffc1a;
          memcpy(plVar29 + 10,puVar32 + 10,param_4 - 0x50);
LAB_00104725:
          local_98 = (uint *)0x0;
          goto switchD_001005c7_caseD_23;
        }
joined_r0x0010496d:
        if (bVar16 != 0x79) {
LAB_001042a5:
          uVar30 = puVar32[10];
LAB_001041c4:
          if (uVar30 != plVar29[10]) {
LAB_0010a16e:
            if ((char)uVar26 == '{') {
              *(undefined1 *)(puVar32 + 9) = 6;
              param_2 = puVar13 + 2;
              local_98 = (uint *)0x0;
              uVar24 = 0;
            }
            else {
              *(undefined1 *)(puVar32 + 9) = 7;
              uVar24 = 0;
              local_98 = (uint *)0x0;
            }
            goto LAB_00101aa0;
          }
        }
LAB_001041ce:
        local_98 = (uint *)0x0;
LAB_00100f48:
        *puVar32 = *puVar32 + 8;
        goto LAB_00100507;
            case 0x7d:
        uVar24 = puVar13[1];
        if (uVar17 == 0) {
          if ((long)(puVar32[10] - *(long *)(param_6 + 0x78)) >> 2 < (long)(ulong)uVar24) break;
          puVar32[10] = puVar32[10] + (ulong)uVar24 * -4;
        }
        else if (uVar24 != 0) {
          uVar26 = *(ulong *)(param_6 + 0x80);
          do {
            uVar24 = uVar24 - 1;
            if (puVar32[10] <= uVar26) goto switchD_00100529_caseD_a3;
            puVar32[10] = puVar32[10] - 4;
          } while (uVar24 != 0);
        }
        if (puVar32[10] < *(ulong *)(param_6 + 0xa0)) {
          *(ulong *)(param_6 + 0xa0) = puVar32[10];
        }
        goto LAB_001038d8;
            case 0x7e:
        uVar24 = puVar13[1];
        uVar26 = puVar32[10];
        *(uint *)(puVar32 + 7) = uVar24;
        uVar31 = puVar13[2];
        puVar32[1] = uVar26;
        *(uint *)((long)puVar32 + 0x3c) = uVar31;
        if (uVar17 == 0) {
          lVar20 = uVar26 - *(long *)(param_6 + 0x78);
          lVar21 = lVar20 >> 2;
          if (lVar21 < 0) {
            lVar21 = 0;
          }
          uVar9 = (uint)lVar21;
          if (0x3fffc < lVar20) {
            uVar9 = 0xffff;
          }
          if (uVar9 < uVar24) break;
          if (uVar9 < uVar31) {
            *(uint *)((long)puVar32 + 0x3c) = uVar9;
          }
          puVar32[10] = uVar26 + (ulong)*(uint *)((long)puVar32 + 0x3c) * -4;
        }
        else if (uVar31 != 0) {
          uVar30 = *(ulong *)(param_6 + 0x78);
          uVar9 = 0;
          while (uVar26 != uVar30) {
            uVar26 = uVar26 - 4;
            uVar9 = uVar9 + 1;
            puVar32[10] = uVar26;
            if (uVar31 == uVar9) goto LAB_00103878;
          }
          if (uVar9 < uVar24) break;
          *(uint *)((long)puVar32 + 0x3c) = uVar9;
        }
LAB_00103878:
        *(undefined1 *)(puVar32 + 9) = 0x25;
        uVar24 = 0;
        param_2 = (uint *)(*puVar32 + 0xc);
        goto LAB_00101aa0;
            for (int i = 0; i < 3; i++) {
               case 0x7f:
            }
            case 0x84:
        *(uint *)(puVar32 + 7) = uVar31 & 0xff | 0x20000;
LAB_00102c3d:
        uVar24 = (uint)puVar32[7];
        uVar31 = *(uint *)*puVar32;
        *(undefined1 *)(puVar32 + 9) = 3;
        param_2 = (uint *)*puVar32 + (byte)(&_pcre2_OP_lengths_32)[uVar31];
        goto LAB_00101aa0;
            case 0x80:
            case 0x82:
        *(uint *)(puVar32 + 7) = uVar31 & 0xff | 0x20000;
LAB_0010321d:
        uVar24 = (uint)puVar32[7];
        uVar31 = *(uint *)*puVar32;
        *(undefined1 *)(puVar32 + 9) = 4;
        param_2 = (uint *)*puVar32 + (byte)(&_pcre2_OP_lengths_32)[uVar31];
        goto LAB_00101aa0;
            case 0x85:
            case 0x86:
            case 0x8c:
        *(uint *)(puVar32 + 7) = uVar31 & 0xff | 0x20000;
        goto LAB_00102d0b;
            case 0x87:
        if ((*(int *)(param_6 + 0x2c) != 0) || ((int)puVar32[6] == 0)) {
          *(undefined4 *)(puVar32 + 7) = 0;
          goto LAB_00102d0b;
        }
LAB_001038fe:
        puVar13 = (uint *)*puVar32;
        uVar24 = puVar13[puVar13[1]];
        puVar32[1] = (ulong)(puVar13 + puVar13[1]);
        if (uVar24 != 0x78) goto LAB_0010353b;
        uVar31 = *puVar13;
        uVar24 = 0;
        *(undefined1 *)(puVar32 + 9) = 1;
        param_2 = puVar13 + (byte)(&_pcre2_OP_lengths_32)[uVar31];
        goto LAB_00101aa0;
            case 0x88:
            case 0x8d:
        *(undefined4 *)(puVar32 + 8) = 0;
        goto LAB_00102db8;
            case 0x89:
            case 0x8e:
        *(uint *)(puVar32 + 7) = puVar13[2] | 0x10000;
LAB_00102d0b:
        uVar24 = (uint)puVar32[7];
        uVar31 = *(uint *)*puVar32;
        *(undefined1 *)(puVar32 + 9) = 2;
        param_2 = (uint *)*puVar32 + (byte)(&_pcre2_OP_lengths_32)[uVar31];
        goto LAB_00101aa0;
            case 0x8a:
            case 0x8f:
        *(undefined4 *)(puVar32 + 8) = 0;
        puVar11 = puVar13;
LAB_00101a58:
        uVar24 = puVar11[2] | 0x10000;
        puVar13 = puVar11;
        goto LAB_00101a61;
            case 0x8b:
            case 0x90:
        uVar26 = (ulong)puVar13[1];
        uVar24 = puVar13[uVar26];
        puVar32[3] = uVar26;
        if (uVar24 != 0x78) {
          puVar32[3] = uVar26 - 2;
        }
        uVar24 = puVar13[2];
        *puVar32 = (ulong)(puVar13 + 2);
        if (uVar24 - 0x76 < 2) {
          uVar24 = do_callout(puVar32,param_6,&local_50);
          if (0 < (int)uVar24) break;
          if (uVar24 != 0) goto switchD_001005c7_caseD_23;
          puVar32[3] = puVar32[3] - local_50;
          *puVar32 = *puVar32 + local_50 * 4;
        }
        param_2 = (uint *)*puVar32;
        uVar24 = *param_2;
        switch(uVar24) {
        case 0x91:
          uVar26 = (ulong)(param_2[1] * 2 - 2);
          if ((uVar26 < puVar32[0x10]) && (puVar32[uVar26 + 0x11] != 0xffffffffffffffff))
          goto switchD_00102d9c_caseD_96;
          break;
        case 0x92:
          uVar24 = param_2[2];
          piVar10 = (int *)(*(long *)(param_6 + 0x68) +
                           (ulong)((uint)*(ushort *)(param_6 + 0x66) * param_2[1]) * 4);
          if (0 < (int)uVar24) {
            do {
              uVar24 = uVar24 - 1;
              uVar26 = (ulong)(*piVar10 * 2 - 2);
              if ((uVar26 < puVar32[0x10]) && (puVar32[uVar26 + 0x11] != 0xffffffffffffffff))
              goto switchD_00102d9c_caseD_96;
              piVar10 = piVar10 + *(ushort *)(param_6 + 0x66);
            } while (uVar24 != 0);
          }
          break;
        case 0x93:
          if (((uint)puVar32[0xe] != 0xffffffff) &&
             (((uint)puVar32[0xe] == param_2[1] || (param_2[1] == 0xffff))))
          goto switchD_00102d9c_caseD_96;
          break;
        case 0x94:
          if ((int)puVar32[0xe] != -1) {
            uVar24 = param_2[2];
            piVar10 = (int *)(*(long *)(param_6 + 0x68) +
                             (ulong)((uint)*(ushort *)(param_6 + 0x66) * param_2[1]) * 4);
            if (0 < (int)uVar24) {
              do {
                uVar24 = uVar24 - 1;
                if ((int)puVar32[0xe] == *piVar10) goto LAB_00101b68;
                piVar10 = piVar10 + *(ushort *)(param_6 + 0x66);
              } while (uVar24 != 0);
            }
          }
          break;
        case 0x95:
        case 0xa3:
          break;
        case 0x96:
switchD_00102d9c_caseD_96:
          uVar26 = (ulong)(byte)(&_pcre2_OP_lengths_32)[*param_2];
          goto LAB_00100ebe;
        default:
          puVar32[1] = (ulong)param_2;
          *(uint *)(puVar32 + 7) = (uint)((uVar24 - 0x7f & 0xfffffffd) == 0);
LAB_0010412b:
          uVar31 = *(uint *)puVar32[1];
          uVar24 = *(uint *)*puVar32 | 0x30000;
          *(undefined1 *)(puVar32 + 9) = 5;
          param_2 = (uint *)puVar32[1] + (byte)(&_pcre2_OP_lengths_32)[uVar31];
          goto LAB_00101aa0;
        }
switchD_00102d9c_caseD_95:
        uVar26 = puVar32[3];
LAB_00100ebe:
        param_2 = param_2 + uVar26;
        *puVar32 = (ulong)param_2;
        if (*(char *)((long)puVar32 + 0x49) == -0x70) {
          *(undefined1 *)(puVar32 + 9) = 0x23;
          uVar24 = 0x20090;
          goto LAB_00101aa0;
        }
        goto LAB_00100507;
            case 0x97:
        param_2 = puVar13 + 1;
        *(undefined1 *)(puVar32 + 9) = 9;
        uVar24 = 0;
        puVar32[1] = (ulong)param_2;
        goto LAB_00101aa0;
            case 0x98:
        puVar13 = puVar13 + 1;
        do {
          puVar13 = puVar13 + puVar13[1];
        } while (*puVar13 == 0x78);
        puVar32[1] = (ulong)puVar13;
        param_2 = puVar13 + 2;
        uVar24 = 0;
        *(undefined1 *)(puVar32 + 9) = 10;
        goto LAB_00101aa0;
            case 0x99:
        puVar11 = puVar13 + 1;
        *(undefined4 *)(puVar32 + 8) = 1;
        uVar24 = puVar13[1];
        *puVar32 = (ulong)puVar11;
        if ((uVar24 == 0x8a) || (puVar13 = puVar11, uVar24 == 0x8f)) goto LAB_00101a58;
LAB_00102db8:
        uVar24 = 0x20000;
LAB_00101a61:
        *(uint *)(puVar32 + 7) = uVar24;
        *(undefined4 *)((long)puVar32 + 0x3c) = 0;
        puVar32[2] = (ulong)puVar13;
LAB_00101a71:
        uVar24 = (uint)puVar32[7];
        puVar32[1] = puVar32[10];
        uVar31 = *(uint *)*puVar32;
        *(undefined1 *)(puVar32 + 9) = 8;
        param_2 = (uint *)*puVar32 + (byte)(&_pcre2_OP_lengths_32)[uVar31];
        goto LAB_00101aa0;
            case 0x9a:
        uVar24 = 0;
        *(uint **)(param_6 + 0xb8) = puVar13 + 2;
        puVar32[0xc] = (ulong)(puVar13 + 2);
        bVar16 = (&_pcre2_OP_lengths_32)[uVar26];
        uVar31 = puVar13[1];
        *(undefined1 *)(puVar32 + 9) = 0xc;
        param_2 = puVar13 + (ulong)bVar16 + (ulong)uVar31;
        goto LAB_00101aa0;
            case 0x9b:
        *(undefined1 *)(puVar32 + 9) = 0xe;
        uVar24 = 0;
        param_2 = puVar13 + (byte)(&_pcre2_OP_lengths_32)[uVar26];
        goto LAB_00101aa0;
            case 0x9c:
        uVar24 = 0;
        *(uint **)(param_6 + 0xb8) = puVar13 + 2;
        puVar32[0xc] = (ulong)(puVar13 + 2);
        bVar16 = (&_pcre2_OP_lengths_32)[uVar26];
        uVar31 = puVar13[1];
        *(undefined1 *)(puVar32 + 9) = 0xf;
        param_2 = puVar13 + (ulong)bVar16 + (ulong)uVar31;
        goto LAB_00101aa0;
            case 0x9d:
        *(undefined1 *)(puVar32 + 9) = 0x10;
        uVar24 = 0;
        param_2 = puVar13 + (byte)(&_pcre2_OP_lengths_32)[uVar26];
        goto LAB_00101aa0;
            case 0x9e:
        uVar24 = *(int *)(param_6 + 0xdc) + 1;
        *(uint *)(param_6 + 0xdc) = uVar24;
        if (uVar24 <= *(uint *)(param_6 + 0xe0)) {
          puVar13 = puVar13 + ((uint)(byte)(&_pcre2_OP_lengths_32)[*puVar13] + puVar13[1]);
          goto LAB_00103620;
        }
        bVar16 = (&_pcre2_OP_lengths_32)[*puVar13];
        uVar31 = puVar13[1];
        *(undefined1 *)(puVar32 + 9) = 0x11;
        uVar24 = 0;
        param_2 = puVar13 + (ulong)bVar16 + (ulong)uVar31;
        goto LAB_00101aa0;
            case 0x9f:
        *(undefined1 *)(puVar32 + 9) = 0x12;
        uVar24 = 0;
        param_2 = puVar13 + (byte)(&_pcre2_OP_lengths_32)[uVar26];
        goto LAB_00101aa0;
            case 0xa0:
        uVar24 = 0;
        *(uint **)(param_6 + 0xb8) = puVar13 + 2;
        puVar32[0xc] = (ulong)(puVar13 + 2);
        bVar16 = (&_pcre2_OP_lengths_32)[uVar26];
        uVar31 = puVar13[1];
        *(undefined1 *)(puVar32 + 9) = 0x13;
        param_2 = puVar13 + (ulong)bVar16 + (ulong)uVar31;
        goto LAB_00101aa0;
            case 0xa1:
        *(undefined1 *)(puVar32 + 9) = 0xd;
        uVar24 = 0;
        param_2 = puVar13 + (byte)(&_pcre2_OP_lengths_32)[uVar26];
        goto LAB_00101aa0;
            case 0xa2:
        uVar24 = 0;
        *(uint **)(param_6 + 0xb8) = puVar13 + 2;
        puVar32[0xc] = (ulong)(puVar13 + 2);
        bVar16 = (&_pcre2_OP_lengths_32)[uVar26];
        uVar31 = puVar13[1];
        *(undefined1 *)(puVar32 + 9) = 0x24;
        param_2 = puVar13 + (ulong)bVar16 + (ulong)uVar31;
        goto LAB_00101aa0;
            case 0xa3:
        break;
            case 0xa4:
        if ((int)puVar32[0xe] == -1) goto switchD_00100529_caseD_0;
        uVar26 = puVar32[0xf];
        if (uVar26 == 0xffffffffffffffff) goto switchD_00100529_caseD_62;
        while( true ) {
          local_a8 = (ulong *)(uVar26 + param_5[6]);
          puVar18 = (ulong *)((long)local_a8 - param_4);
          if (*(uint *)((long)local_a8 + 0x34) >> 0x10 == 4) break;
          uVar26 = puVar18[0xf];
          if (uVar26 == 0xffffffffffffffff) goto switchD_00100529_caseD_62;
        }
        uVar30 = puVar32[10];
        uVar15 = puVar32[0xb];
        uVar26 = puVar32[0xc];
        *puVar18 = *puVar18 + 8;
        puVar18[10] = uVar30;
        puVar18[0xb] = uVar15;
        puVar18[0xc] = uVar26;
        puVar32 = puVar18;
        goto LAB_00100507;
            case 0xa5:
        if (*(ulong *)(param_6 + 0xa8) < puVar32[10]) {
          *(ulong *)(param_6 + 0xa8) = puVar32[10];
        }
        uVar24 = 0xfffffc19;
        local_88 = puVar32;
        goto switchD_001005c7_caseD_23;
            case 0xa6:
        if ((int)puVar32[0xe] == -1) {
          uVar26 = puVar32[0xf];
          uVar24 = puVar13[1];
          if (uVar26 == 0xffffffffffffffff) goto switchD_00100529_caseD_62;
          while (local_a8 = (ulong *)(uVar26 + param_5[6]),
                *(uint *)((long)local_a8 + 0x34) != (uVar24 | 0x10000)) {
            uVar26 = *(ulong *)((long)local_a8 + (0x78 - param_4));
            if (uVar26 == 0xffffffffffffffff) goto switchD_00100529_caseD_62;
          }
          *(uint *)((long)puVar32 + 0x74) = uVar24;
          uVar26 = (ulong)(uVar24 * 2 - 2);
          lVar21 = *(long *)(param_6 + 0x78);
          puVar32[uVar26 + 0x11] = *(long *)((long)local_a8 + (0x50 - param_4)) - lVar21 >> 2;
          puVar32[uVar26 + 0x12] = (long)(puVar32[10] - lVar21) >> 2;
          if (puVar32[0x10] <= uVar26) {
            puVar32[0x10] = uVar26 + 2;
          }
        }
LAB_0010353b:
        *puVar32 = (ulong)(puVar13 + (byte)(&_pcre2_OP_lengths_32)[*puVar13]);
        goto LAB_00100507;
            case 0xa7:
        puVar13 = puVar13 + 1;
        do {
          puVar13 = puVar13 + puVar13[1];
        } while (*puVar13 == 0x78);
LAB_001038d8:
        *puVar32 = (ulong)(puVar13 + 2);
        goto LAB_00100507;
         }
         goto switchD_00100529_caseD_a3;
      }
      uVar24 = 0xffffffcb;
   } else {
      uVar24 = 0xffffffd1;
   }
   goto LAB_00101ae4;
   switchD_00102cfb_caseD_80:uVar24 = 1;
   goto LAB_00104725;
   while (uVar30 = *(ulong*)( lVar21 + 0x78 ),uVar30 != 0xffffffffffffffff) {
      LAB_00103f7e:lVar21 = ( uVar30 + param_5[6] ) - param_4;
      if (*(uint*)( uVar30 + param_5[6] + 0x34 ) == ( uVar24 | 0x40000 )) {
         if (puVar32[10] == *(ulong*)( lVar21 + 0x50 )) {
            uVar30 = *(ulong*)( param_6 + 0xa8 );
            if (( uVar30 != *(ulong*)( lVar21 + 0x68 ) ) || ( ( *(byte*)( param_6 + 0xd6 ) & 4 ) != 0 )) goto LAB_00103fa5;
            uVar24 = 0xffffffcc;
            goto LAB_00101ae4;
         }
         break;
      }
   };
   LAB_00103f9a:uVar30 = *(ulong*)( param_6 + 0xa8 );
   LAB_00103fa5:puVar32[0xd] = uVar30;
   puVar32[1] = uVar26;
   *(uint*)( puVar32 + 7 ) = uVar24 | 0x40000;
   LAB_00100d6b:uVar24 = (uint)puVar32[7];
   uVar31 = *(uint*)puVar32[1];
   *(undefined1*)( puVar32 + 9 ) = 0xb;
   param_2 = (uint*)puVar32[1] + ( byte )(&_pcre2_OP_lengths_32)[uVar31];
   LAB_00101aa0:local_a8 = (ulong*)( (long)puVar32 + param_4 );
   if (param_4 + (long)local_a8 < local_b0) {
      LAB_00101dce:memcpy(local_a8 + 10, puVar32 + 10, param_4 - 0x50);
      *(int*)( local_a8 + 6 ) = (int)puVar32[6] + 1;
      puVar32 = local_a8;
      goto LAB_001004a0;
   }
   uVar26 = param_5[7];
   __n = (long)local_a8 - param_5[6];
   if (uVar26 < 0x7fffffffffffffff) {
      uVar30 = uVar26 * 2;
      uVar15 = ( ulong ) * (uint*)( param_6 + 0x18 );
      if (uVar15 <= uVar30 >> 10) {
         if (uVar15 <= uVar26 >> 10) goto LAB_00101ade;
         lVar21 = ( uVar15 - ( uVar26 >> 10 ) ) * 0x400;
         if (( uVar26 & 0x3ff ) != 0) {
            lVar21 = lVar21 - (int)( 0x400 - ( (uint)uVar26 & 0x3ff ) );
         }
         uVar30 = uVar26 + lVar21;
      }
      if (param_4 <= uVar30 - __n) {
         pvVar12 = (void*)( *(code*)*param_5 )(uVar30, param_5[2]);
         if (pvVar12 == (void*)0x0) goto LAB_00108400;
         pvVar12 = memcpy(pvVar12, (void*)param_5[6], __n);
         local_a8 = (ulong*)( __n + (long)pvVar12 );
         puVar32 = (ulong*)( (long)local_a8 - param_4 );
         ( *(code*)param_5[1] )(param_5[6], param_5[2]);
         local_b0 = (long)pvVar12 + uVar30;
         param_5[6] = pvVar12;
         param_5[7] = uVar30;
         goto LAB_00101dce;
      }
   } else if (uVar26 == 0xfffffffffffffffe) {
      LAB_00108400:uVar24 = 0xffffffd0;
      LAB_00101ae4:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return uVar24;
   }
   LAB_00101ade:uVar24 = 0xffffffc1;
   goto LAB_00101ae4;
   LAB_001085bb:sVar7 = *(short*)( param_6 + 0x60 );
   if (( sVar7 != 0 ) && ( ( *(uint**)( param_6 + 0xa0 ) < puVar14 || ( *(int*)( param_6 + 0x30 ) != 0 ) ) )) {
      *(undefined4*)( param_6 + 0x28 ) = 1;
      goto joined_r0x00103704;
   }
   goto switchD_00100529_caseD_a3;
   code_r0x001065ec:puVar13 = puVar13 + 1;
   uVar24 = uVar24 + 1;
   puVar32[10] = (ulong)puVar13;
   if (uVar9 <= uVar24) goto LAB_001062b7;
   goto LAB_00106601;
   code_r0x001075bc:puVar13 = puVar13 + 1;
   uVar24 = uVar24 + 1;
   puVar32[10] = (ulong)puVar13;
   if (uVar9 <= uVar24) goto LAB_00107145;
   goto LAB_001075d1;
   LAB_0010291f:sVar7 = *(short*)( param_6 + 0x60 );
   if (( sVar7 != 0 ) && ( ( *(uint**)( param_6 + 0xa0 ) < puVar11 || ( *(int*)( param_6 + 0x30 ) != 0 ) ) )) {
      *(undefined4*)( param_6 + 0x28 ) = 1;
      joined_r0x00103704:if (sVar7 != 1) goto LAB_00102a51;
   }
   switchD_00100529_caseD_a3:uVar24 = 0;
   switchD_001005c7_caseD_23:if (*(ulong*)( param_6 + 0xa8 ) < puVar32[10]) {
      *(ulong*)( param_6 + 0xa8 ) = puVar32[10];
   }
   if ((int)puVar32[6] == 0) goto LAB_00101ae4;
   puVar32 = (ulong*)( (long)puVar32 - puVar32[4] );
   puVar13 = (uint*)( *(long*)( param_6 + 0x100 ) + 0x68 );
   *puVar13 = *puVar13 | 2;
   switch ((char)puVar32[9]) {
      default:
    goto switchD_00100529_caseD_62;
      case '\x01':
    if (uVar24 == 0) {
      *puVar32 = puVar32[1];
      goto LAB_001038fe;
    }
    goto switchD_001005c7_caseD_23;
      case '\x02':
    if (uVar24 != 0xfffffc1f) {
      if (uVar24 == 0) {
        piVar10 = (int *)*puVar32;
LAB_00100fab:
        iVar8 = piVar10[(uint)piVar10[1]];
        *puVar32 = (ulong)(piVar10 + (uint)piVar10[1]);
        if (iVar8 == 0x78) goto LAB_00102d0b;
        uVar24 = 0;
      }
      goto switchD_001005c7_caseD_23;
    }
    piVar10 = (int *)*puVar32;
    piVar19 = piVar10 + (uint)piVar10[1];
    if (piVar19 <= *(int **)(param_6 + 0xc0)) goto LAB_001005fb;
    if (*piVar10 == 0x78) goto LAB_00100fab;
    if (*piVar19 == 0x78) {
      *puVar32 = (ulong)piVar19;
      goto LAB_00102d0b;
    }
    goto LAB_001005fb;
      case '\x03':
    if (uVar24 == 0xfffffc19) {
      memcpy(puVar32 + 0x11,local_88 + 0x11,local_88[0x10] * 8);
      puVar32[0x10] = local_88[0x10];
      puVar32[0xc] = local_88[0xc];
      puVar13 = (uint *)*puVar32;
      do {
        puVar13 = puVar13 + puVar13[1];
      } while (*puVar13 == 0x78);
      goto LAB_001038d8;
    }
    if ((uVar24 == 0) || (uVar24 == 0xfffffc1f)) {
      piVar10 = (int *)(*puVar32 + (ulong)*(uint *)(*puVar32 + 4) * 4);
      iVar8 = *piVar10;
      *puVar32 = (ulong)piVar10;
      if (iVar8 == 0x78) goto LAB_00102c3d;
      uVar24 = 0;
    }
    goto switchD_001005c7_caseD_23;
      case '\x04':
    if (uVar24 == 0xfffffc1f) {
LAB_00101e30:
      piVar10 = (int *)(*puVar32 + (ulong)*(uint *)(*puVar32 + 4) * 4);
      iVar8 = *piVar10;
      *puVar32 = (ulong)piVar10;
      if (iVar8 != 0x78) goto LAB_00100f48;
      goto LAB_0010321d;
    }
    if ((int)uVar24 < -0x3e0) {
      if (uVar24 != 0xfffffc19) {
        if ((-1000 < (int)uVar24) && (uVar24 + 0x3e5 < 3)) {
          piVar10 = (int *)*puVar32;
          do {
            piVar10 = piVar10 + (uint)piVar10[1];
          } while (*piVar10 == 0x78);
          goto LAB_00100f44;
        }
        goto switchD_001005c7_caseD_23;
      }
    }
    else {
      if (uVar24 == 0) goto LAB_00101e30;
      if (uVar24 != 1) goto switchD_001005c7_caseD_23;
    }
    break;
      case '\x05':
    if (uVar24 == 0xfffffc1f) {
LAB_0010274f:
      piVar10 = (int *)(puVar32[1] + (ulong)*(uint *)(puVar32[1] + 4) * 4);
      iVar8 = *piVar10;
      puVar32[1] = (ulong)piVar10;
      if (iVar8 == 0x78) goto LAB_0010412b;
LAB_00100e9e:
      iVar8 = (int)puVar32[7];
    }
    else {
      if ((int)uVar24 < -0x3e0) {
        if (uVar24 != 0xfffffc19) {
          if ((-1000 < (int)uVar24) && (uVar24 + 0x3e5 < 3)) goto LAB_00100e9e;
          goto switchD_001005c7_caseD_23;
        }
        memcpy(puVar32 + 0x11,local_88 + 0x11,local_88[0x10] * 8);
        puVar32[0x10] = local_88[0x10];
      }
      else {
        if (uVar24 == 0) goto LAB_0010274f;
        if (uVar24 != 1) goto switchD_001005c7_caseD_23;
      }
      iVar8 = (int)puVar32[7];
    }
    if (iVar8 == 0) {
      piVar10 = (int *)*puVar32;
      do {
        piVar10 = piVar10 + (uint)piVar10[1];
      } while (*piVar10 == 0x78);
      *puVar32 = (ulong)piVar10;
LAB_00101b68:
      param_2 = (uint *)*puVar32;
      goto switchD_00102d9c_caseD_96;
    }
    param_2 = (uint *)*puVar32;
    goto switchD_00102d9c_caseD_95;
      case '\x06':
    if (uVar24 == 0) {
      *puVar32 = *puVar32 + (ulong)*(uint *)(*puVar32 + 4) * -4;
      goto LAB_00100507;
    }
    goto switchD_001005c7_caseD_23;
      case '\a':
    if (uVar24 == 0) goto LAB_00100f48;
    goto switchD_001005c7_caseD_23;
      case '\b':
    if (uVar24 == 0xfffffc1a) {
      *(undefined4 *)((long)puVar32 + 0x3c) = 1;
      if (puVar32[10] == puVar32[1]) {
        piVar10 = (int *)*puVar32;
        do {
          piVar10 = piVar10 + (uint)piVar10[1];
        } while (*piVar10 == 0x78);
LAB_00100f44:
        *puVar32 = (ulong)piVar10;
        goto LAB_00100f48;
      }
      *puVar32 = puVar32[2];
      goto LAB_00101a71;
    }
    if (uVar24 != 0xfffffc1f) {
      if (uVar24 == 0) {
        piVar10 = (int *)*puVar32;
LAB_00100df7:
        iVar8 = piVar10[(uint)piVar10[1]];
        *puVar32 = (ulong)(piVar10 + (uint)piVar10[1]);
        if (iVar8 == 0x78) goto LAB_00101a71;
        if ((*(int *)((long)puVar32 + 0x3c) != 0) || ((int)puVar32[8] != 0)) goto LAB_00100f48;
        uVar24 = 0;
      }
      goto switchD_001005c7_caseD_23;
    }
    piVar10 = (int *)*puVar32;
    piVar19 = piVar10 + (uint)piVar10[1];
    if (piVar19 <= *(int **)(param_6 + 0xc0)) goto LAB_001005fb;
    if (*piVar10 == 0x78) goto LAB_00100df7;
    if (*piVar19 == 0x78) {
      *puVar32 = (ulong)piVar19;
      goto LAB_00101a71;
    }
    goto LAB_001005fb;
      case '\t':
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    piVar10 = (int *)puVar32[1];
    do {
      piVar10 = piVar10 + (uint)piVar10[1];
    } while (*piVar10 == 0x78);
    puVar32[1] = (ulong)piVar10;
    *puVar32 = (ulong)(piVar10 + 2);
    goto LAB_00100507;
      case '\n':
    if (uVar24 == 0) goto LAB_00100d9a;
    goto switchD_001005c7_caseD_23;
      case '\v':
    piVar19 = (int *)puVar32[1];
    piVar10 = piVar19 + (uint)piVar19[1];
    if (4 < uVar24 + 0x3e5) {
      if (uVar24 == 0) {
LAB_00101b19:
        iVar8 = *piVar10;
        puVar32[1] = (ulong)piVar10;
        if (iVar8 == 0x78) goto LAB_00100d6b;
        uVar24 = 0;
      }
      goto switchD_001005c7_caseD_23;
    }
    if (*(uint *)(param_6 + 0xd0) != ((uint)puVar32[7] ^ 0x40000)) goto switchD_001005c7_caseD_23;
    if ((uVar24 == 0xfffffc1f) && (*(int **)(param_6 + 0xc0) < piVar10)) {
      if (*piVar19 == 0x78) goto LAB_00101b19;
      if (*piVar10 == 0x78) {
        puVar32[1] = (ulong)piVar10;
        goto LAB_00100d6b;
      }
    }
    break;
      case '\f':
    if (uVar24 == 0xfffffc1e) {
      iVar8 = _pcre2_strcmp_32(*puVar32 + 8,*(undefined8 *)(param_6 + 200));
      if (iVar8 != 0) goto LAB_001006b2;
      *(ulong *)(param_6 + 200) = puVar32[10];
      goto LAB_001006db;
    }
    goto switchD_001005c7_caseD_23;
      case '\r':
      case '$':
    if (uVar24 == 0) {
      uVar24 = 0xfffffc1b;
      *(int *)(param_6 + 0xd0) = (int)puVar32[0xe];
    }
    goto switchD_001005c7_caseD_23;
      case '\x0e':
      case '\x0f':
    if (uVar24 == 0) {
      uVar24 = 0xfffffc1c;
      *(int *)(param_6 + 0xd0) = (int)puVar32[0xe];
    }
    goto switchD_001005c7_caseD_23;
      case '\x10':
    if (uVar24 == 0) {
      *(ulong *)(param_6 + 200) = puVar32[10];
      *(int *)(param_6 + 0xd0) = (int)puVar32[0xe];
LAB_001006db:
      uVar24 = 0xfffffc1d;
    }
    goto switchD_001005c7_caseD_23;
      case '\x11':
    if (uVar24 == 0) {
      *(ulong *)(param_6 + 200) = *puVar32 + 8;
      *(int *)(param_6 + 0xd0) = (int)puVar32[0xe];
LAB_001006b2:
      uVar24 = 0xfffffc1e;
    }
    goto switchD_001005c7_caseD_23;
      case '\x12':
      case '\x13':
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    *(ulong *)(param_6 + 0xc0) = *puVar32;
    *(int *)(param_6 + 0xd0) = (int)puVar32[0xe];
LAB_001005fb:
    uVar24 = 0xfffffc1f;
    goto switchD_001005c7_caseD_23;
      case '\x14':
    if ((uVar24 == 0) &&
       (uVar26 = puVar32[7], *(uint *)(puVar32 + 7) = (uint)uVar26 + 1,
       (uint)uVar26 < *(uint *)((long)puVar32 + 0x3c))) {
      iVar8 = match_ref(puVar32[5],(int)puVar32[8],puVar32,param_6);
      if (iVar8 == 0) {
        puVar32[10] = puVar32[10] + local_48 * 4;
        goto LAB_00109a71;
      }
      if (iVar8 < 1) {
        uVar26 = puVar32[10];
        if (uVar26 < *(ulong *)(param_6 + 0x88)) goto switchD_001005c7_caseD_23;
      }
      else {
        uVar26 = *(ulong *)(param_6 + 0x88);
        puVar32[10] = uVar26;
      }
      if ((*(short *)(param_6 + 0x60) != 0) &&
         (((*(ulong *)(param_6 + 0xa0) < uVar26 || (*(int *)(param_6 + 0x30) != 0)) &&
          (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
      goto LAB_00102a51;
    }
    goto switchD_001005c7_caseD_23;
      case '\x15':
    if (uVar24 == 0) {
      puVar32[10] = puVar32[10] + puVar32[3] * -4;
LAB_001008e5:
      uVar24 = 0;
      if (puVar32[1] <= puVar32[10]) goto LAB_001008f6;
    }
    goto switchD_001005c7_caseD_23;
      case '\x16':
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    if (puVar32[10] != puVar32[1]) {
      puVar32[10] = puVar32[1];
      uVar31 = (uint)puVar32[7];
      uVar24 = *(int *)((long)puVar32 + 0x3c) - 1;
      *(uint *)((long)puVar32 + 0x3c) = uVar24;
      if (uVar31 < uVar24) {
        do {
          uVar31 = uVar31 + 1;
          match_ref(puVar32[5],(int)puVar32[8],puVar32,param_6);
          puVar32[10] = puVar32[10] + local_48 * 4;
        } while (uVar24 != uVar31);
      }
      goto LAB_00108c4f;
    }
    break;
      case '\x17':
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      puVar13 = (uint *)puVar32[10];
      if (puVar13 < *(uint **)(param_6 + 0x88)) {
        uVar24 = *puVar13;
        puVar32[10] = (ulong)(puVar13 + 1);
        if (uVar24 < 0x100) {
          if ((*(byte *)(puVar32[2] + (ulong)(uVar24 >> 3)) >> (uVar24 & 7) & 1) != 0)
          goto LAB_0010224e;
        }
        else if (*(char *)((long)puVar32 + 0x49) != 'n') goto LAB_0010224e;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x00100cbb:
          if (sVar7 != 1) goto LAB_00102a51;
        }
      }
    }
    break;
      case '\x18':
    if (uVar24 == 0) {
      puVar32[10] = puVar32[10] - 4;
LAB_00100b5e:
      uVar24 = 0;
      if (puVar32[1] <= puVar32[10]) goto LAB_00100b6f;
    }
    goto switchD_001005c7_caseD_23;
      case '\x19':
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      piVar10 = (int *)puVar32[10];
      if (piVar10 < *(int **)(param_6 + 0x88)) {
        if ((*piVar10 == (int)puVar32[8]) || (*piVar10 == *(int *)((long)puVar32 + 0x44))) {
          puVar32[10] = (ulong)(piVar10 + 1);
          goto LAB_00101fa5;
        }
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(int **)(param_6 + 0xa0) < piVar10 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
      case '\x1a':
    puVar32[10] = puVar32[10] - 4;
    if (uVar24 == 0) goto LAB_00100abe;
    goto switchD_001005c7_caseD_23;
      case '\x1b':
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      piVar10 = (int *)puVar32[10];
      if (piVar10 < *(int **)(param_6 + 0x88)) {
        iVar8 = *piVar10;
        puVar32[10] = (ulong)(piVar10 + 1);
        if ((int)puVar32[8] == iVar8) goto LAB_00102009;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(int **)(param_6 + 0xa0) < piVar10 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
      case '\x1c':
    puVar32[10] = puVar32[10] - 4;
    if (uVar24 == 0) goto LAB_00100a1e;
    goto switchD_001005c7_caseD_23;
      case '\x1d':
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      piVar10 = (int *)puVar32[10];
      if (piVar10 < *(int **)(param_6 + 0x88)) {
        if (((int)puVar32[8] != *piVar10) && (*piVar10 != *(int *)((long)puVar32 + 0x44))) {
          puVar32[10] = (ulong)(piVar10 + 1);
          goto LAB_001024c6;
        }
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(int **)(param_6 + 0xa0) < piVar10 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
      case '\x1e':
    if (uVar24 == 0) {
      puVar32[10] = puVar32[10] - 4;
      goto LAB_001007fe;
    }
    goto switchD_001005c7_caseD_23;
      case '\x1f':
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      piVar10 = (int *)puVar32[10];
      if (piVar10 < *(int **)(param_6 + 0x88)) {
        iVar8 = *piVar10;
        puVar32[10] = (ulong)(piVar10 + 1);
        if ((int)puVar32[8] != iVar8) goto LAB_0010238a;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(int **)(param_6 + 0xa0) < piVar10 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
      case ' ':
    if (uVar24 == 0) {
      puVar32[10] = puVar32[10] - 4;
      goto LAB_0010075e;
    }
    goto switchD_001005c7_caseD_23;
      case '!':
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if (*(uint *)((long)puVar32 + 0x3c) <= (uint)uVar26) break;
    puVar13 = (uint *)puVar32[10];
    if (puVar13 < *(uint **)(param_6 + 0x88)) {
      if ((int)puVar32[8] == 0xc) {
        if (*(int *)(param_6 + 0xe4) == 0) {
          if (((*(uint **)(param_6 + 0x88) + -(ulong)*(uint *)(param_6 + 0xe8) < puVar13) ||
              (*puVar13 != *(uint *)(param_6 + 0xec))) ||
             ((*(uint *)(param_6 + 0xe8) != 1 && (puVar13[1] != *(uint *)(param_6 + 0xf0)))))
          goto LAB_00102273;
        }
        else {
          iVar8 = _pcre2_is_newline_32();
          if (iVar8 == 0) {
            puVar13 = (uint *)puVar32[10];
            goto LAB_00102273;
          }
        }
        break;
      }
LAB_00102273:
      puVar11 = puVar13 + 1;
      uVar24 = *puVar13;
      uVar26 = (ulong)uVar24;
      puVar32[10] = (ulong)puVar11;
      switch((int)puVar32[8]) {
      case 6:
        if (uVar24 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar26) & 8;
joined_r0x00104323:
          if (bVar16 != 0) goto LAB_00100688;
        }
        break;
      case 7:
        if (uVar24 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar26) & 8;
          goto joined_r0x00104323;
        }
        goto LAB_00100688;
      case 8:
        if (uVar24 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar26) & 1;
          goto joined_r0x00104323;
        }
        break;
      case 9:
        if (uVar24 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar26) & 1;
          goto joined_r0x00104323;
        }
        goto LAB_00100688;
      case 10:
        if (uVar24 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar26) & 0x10;
          goto joined_r0x00104323;
        }
        break;
      case 0xb:
        if (uVar24 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar26) & 0x10;
          goto joined_r0x00104323;
        }
        goto LAB_00100688;
      case 0xc:
        if (((((*(short *)(param_6 + 0x60) != 0) && (*(uint **)(param_6 + 0x88) <= puVar11)) &&
             (*(int *)(param_6 + 0xe4) == 0)) &&
            ((*(int *)(param_6 + 0xe8) == 2 && (uVar24 == *(uint *)(param_6 + 0xec))))) &&
           (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
        goto LAB_00102a51;
        break;
      case 0xd:
      case 0xe:
        break;
      default:
        goto switchD_00100529_caseD_62;
      case 0x11:
        if (uVar24 == 0xd) {
          if ((puVar11 < *(uint **)(param_6 + 0x88)) && (puVar13[1] == 10)) {
            puVar32[10] = (ulong)(puVar13 + 2);
          }
        }
        else {
          if (uVar24 < 0xe) {
            if (uVar24 == 10) break;
            uVar24 = uVar24 - 0xb;
joined_r0x00109aeb:
            if (1 < uVar24) goto LAB_00100688;
          }
          else if (uVar24 != 0x85) {
            uVar24 = uVar24 - 0x2028;
            goto joined_r0x00109aeb;
          }
          if (*(short *)(param_6 + 0x62) == 2) goto LAB_00100688;
        }
        break;
      case 0x12:
        if (uVar24 != 0x180e) {
          if (uVar24 < 0x180f) {
            if (uVar24 != 0xa0) {
              if (uVar24 < 0xa1) {
                if ((uVar24 != 9) && (uVar24 != 0x20)) break;
              }
              else if (uVar24 != 0x1680) break;
            }
          }
          else if (uVar24 != 0x205f) {
            if (uVar24 < 0x2060) {
              if (uVar24 < 0x200b) {
                if (uVar24 < 0x2000) break;
              }
              else if (uVar24 != 0x202f) break;
            }
            else {
joined_r0x00109cc7:
              if (uVar24 == 0x3000) break;
            }
          }
        }
        goto LAB_00100688;
      case 0x13:
        if (uVar24 != 0x180e) {
          if (uVar24 < 0x180f) {
            if (uVar24 != 0xa0) {
              if (uVar24 < 0xa1) {
                if ((uVar24 == 9) || (uVar24 == 0x20)) break;
              }
              else if (uVar24 == 0x1680) break;
              goto LAB_00100688;
            }
          }
          else if (uVar24 != 0x205f) {
            if (0x205f < uVar24) goto joined_r0x00109cc7;
            if (uVar24 < 0x200b) {
              if (0x1fff < uVar24) break;
            }
            else if (uVar24 == 0x202f) break;
            goto LAB_00100688;
          }
        }
        break;
      case 0x14:
        if (uVar24 != 0x85) {
          if (uVar24 < 0x86) {
            if (3 < uVar24 - 10) break;
          }
          else if (1 < uVar24 - 0x2028) break;
        }
        goto LAB_00100688;
      case 0x15:
        if (uVar24 == 0x85) break;
        if (uVar24 < 0x86) {
          if (uVar24 - 10 < 4) break;
        }
        else if (uVar24 - 0x2028 < 2) break;
        goto LAB_00100688;
      }
      goto LAB_00104223;
    }
    sVar7 = *(short *)(param_6 + 0x60);
    if ((sVar7 != 0) && ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0))))
    {
      *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x001011ce:
      if (sVar7 == 1) break;
      goto LAB_00102a51;
    }
    break;
      case '\"':
    if (uVar24 == 0) {
      uVar26 = puVar32[10];
      puVar32[10] = uVar26 - 4;
      if (((int)puVar32[8] != 0x11) || (uVar26 - 4 <= puVar32[1])) goto LAB_00100840;
      if ((*(int *)(uVar26 - 4) != 10) || (*(int *)(uVar26 - 8) != 0xd)) goto LAB_0010084e;
      puVar32[10] = uVar26 - 8;
      goto LAB_00100840;
    }
      case '#':
    goto switchD_001005c7_caseD_23;
      case '%':
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar24 = *(uint *)((long)puVar32 + 0x3c);
    *(uint *)((long)puVar32 + 0x3c) = uVar24 - 1;
    if ((uint)puVar32[7] < uVar24) {
      puVar32[10] = puVar32[10] + 4;
      goto LAB_00103878;
    }
    break;
      case 'd':
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      puVar27 = (undefined4 *)puVar32[10];
      if (puVar27 < *(undefined4 **)(param_6 + 0x88)) {
        uVar4 = *puVar27;
        puVar32[10] = (ulong)(puVar27 + 1);
        iVar8 = _pcre2_xclass_32(uVar4,puVar32[2],bVar34);
        if (iVar8 != 0) goto LAB_00106929;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(undefined4 **)(param_6 + 0xa0) < puVar27 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
      case 'e':
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[10];
    puVar32[10] = uVar26 - 4;
    if (puVar32[1] < uVar26) goto LAB_0010199f;
    break;
      case -0x38:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      puVar13 = (uint *)puVar32[10];
      if (puVar13 < *(uint **)(param_6 + 0x88)) {
        uVar24 = *puVar13;
        puVar32[10] = (ulong)(puVar13 + 1);
        if (uVar24 < 0x100) {
          if ((*(byte *)(puVar32[2] + (ulong)(uVar24 >> 3)) >> (uVar24 & 7) & 1) != 0)
          goto LAB_0010248e;
        }
        else if (*(char *)((long)puVar32 + 0x49) != 'n') goto LAB_0010248e;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
      case -0x37:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[10];
    puVar32[10] = uVar26 - 4;
    if (puVar32[1] < uVar26) goto LAB_001018ff;
    break;
      case -0x36:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      pvVar12 = *(void **)(param_6 + 0x88);
      __s1 = (void *)puVar32[10];
      local_78 = puVar32[3] * 4;
      if (((__s1 <= (void *)((long)pvVar12 + puVar32[3] * -4)) &&
          (iVar8 = memcmp(__s1,(void *)puVar32[2],local_78), iVar8 == 0)) ||
         ((uVar26 = puVar32[5], uVar26 != 0 &&
          ((local_78 = uVar26 * 4, __s1 <= (void *)((long)pvVar12 + uVar26 * -4) &&
           (iVar8 = memcmp(__s1,(void *)((long)puVar32 + 0x4c),local_78), iVar8 == 0)))))) {
        *(undefined1 *)(puVar32 + 9) = 0xca;
        param_2 = (uint *)*puVar32;
        uVar24 = 0;
        puVar32[10] = (long)__s1 + local_78;
        goto LAB_00101aa0;
      }
      if (((pvVar12 <= __s1) && (sVar7 = *(short *)(param_6 + 0x60), sVar7 != 0)) &&
         ((*(void **)(param_6 + 0xa0) < __s1 || (*(int *)(param_6 + 0x30) != 0)))) {
        *(undefined4 *)(param_6 + 0x28) = 1;
        goto joined_r0x00100cbb;
      }
   }
   break;
   case -0x35:
    if (uVar24 == 0) {
      uVar26 = puVar32[10];
      puVar32[10] = uVar26 - 4;
      if (uVar26 - 4 <= puVar32[1]) goto LAB_00100507;
      *(undefined1 *)(puVar32 + 9) = 0xcb;
      param_2 = (uint *)*puVar32;
      uVar24 = 0;
      goto LAB_00101aa0;
    }
    goto switchD_001005c7_caseD_23;
   case -0x34:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      piVar10 = (int *)puVar32[10];
      if (piVar10 < *(int **)(param_6 + 0x88)) {
        iVar8 = *piVar10;
        puVar32[10] = (ulong)(piVar10 + 1);
        if ((iVar8 != (int)puVar32[8]) && (iVar8 != *(int *)((long)puVar32 + 0x44)))
        goto LAB_001020ce;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(int **)(param_6 + 0xa0) < piVar10 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
   case -0x33:
    if (uVar24 == 0) {
      puVar32[10] = puVar32[10] - 4;
      goto LAB_0010174e;
    }
    goto switchD_001005c7_caseD_23;
   case -0x32:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      piVar10 = (int *)puVar32[10];
      if (piVar10 < *(int **)(param_6 + 0x88)) {
        puVar32[10] = (ulong)(piVar10 + 1);
        if (*piVar10 != (int)puVar32[8]) goto LAB_00102674;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(int **)(param_6 + 0xa0) < piVar10 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
   case -0x31:
    if (uVar24 == 0) {
      puVar32[10] = puVar32[10] - 4;
      goto LAB_001016ae;
    }
    goto switchD_001005c7_caseD_23;
   case -0x30:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      uVar26 = puVar32[10];
      if (uVar26 < *(ulong *)(param_6 + 0x88)) {
        puVar32[10] = uVar26 + 4;
        if ((int)puVar32[8] != 0xf) goto switchD_00109d6d_caseD_0;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(ulong *)(param_6 + 0xa0) < uVar26 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
   case -0x2f:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      puVar13 = (uint *)puVar32[10];
      if (puVar13 < *(uint **)(param_6 + 0x88)) {
        uVar24 = *puVar13;
        puVar32[10] = (ulong)(puVar13 + 1);
        puVar28 = &_pcre2_dummy_ucd_record_32;
        if (uVar24 < 0x110000) {
          puVar28 = &_pcre2_ucd_records_32 +
                    (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_32 +
                            (long)(int)((uVar24 & 0x7f) +
                                       (uint)*(ushort *)
                                              (&_pcre2_ucd_stage1_32 + (long)((int)uVar24 >> 7) * 2)
                                       * 0x80) * 2) * 0xc;
        }
        if (((int)puVar32[8] == 0xf) != ((byte)(puVar28[1] - 8) < 2 || puVar28[1] == '\x05'))
        goto switchD_00109d6d_caseD_1;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
   case -0x2e:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      puVar13 = (uint *)puVar32[10];
      if (puVar13 < *(uint **)(param_6 + 0x88)) {
        uVar24 = *puVar13;
        puVar32[10] = (ulong)(puVar13 + 1);
        puVar28 = &_pcre2_dummy_ucd_record_32;
        if (uVar24 < 0x110000) {
          puVar28 = &_pcre2_ucd_records_32 +
                    (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_32 +
                            (long)(int)((uVar24 & 0x7f) +
                                       (uint)*(ushort *)
                                              (&_pcre2_ucd_stage1_32 + (long)((int)uVar24 >> 7) * 2)
                                       * 0x80) * 2) * 0xc;
        }
        if ((*(int *)(&_pcre2_ucp_gentype_32 + (ulong)(byte)puVar28[1] * 4) !=
            *(int *)((long)puVar32 + 0x44)) == ((int)puVar32[8] == 0xf))
        goto switchD_00109d6d_caseD_2;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
   case -0x2d:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      puVar13 = (uint *)puVar32[10];
      if (puVar13 < *(uint **)(param_6 + 0x88)) {
        uVar24 = *puVar13;
        puVar32[10] = (ulong)(puVar13 + 1);
        puVar28 = &_pcre2_dummy_ucd_record_32;
        if (uVar24 < 0x110000) {
          puVar28 = &_pcre2_ucd_records_32 +
                    (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_32 +
                            (long)(int)((uVar24 & 0x7f) +
                                       (uint)*(ushort *)
                                              (&_pcre2_ucd_stage1_32 + (long)((int)uVar24 >> 7) * 2)
                                       * 0x80) * 2) * 0xc;
        }
        if (((uint)(byte)puVar28[1] != *(uint *)((long)puVar32 + 0x44)) == ((int)puVar32[8] == 0xf))
        goto switchD_00109d6d_caseD_3;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
   case -0x2c:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      puVar13 = (uint *)puVar32[10];
      if (puVar13 < *(uint **)(param_6 + 0x88)) {
        uVar24 = *puVar13;
        puVar32[10] = (ulong)(puVar13 + 1);
        pbVar25 = &_pcre2_dummy_ucd_record_32;
        if (uVar24 < 0x110000) {
          pbVar25 = &_pcre2_ucd_records_32 +
                    (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_32 +
                            (long)(int)((uVar24 & 0x7f) +
                                       (uint)*(ushort *)
                                              (&_pcre2_ucd_stage1_32 + (long)((int)uVar24 >> 7) * 2)
                                       * 0x80) * 2) * 0xc;
        }
        if (((uint)*pbVar25 != *(uint *)((long)puVar32 + 0x44)) == ((int)puVar32[8] == 0xf))
        goto switchD_00109d6d_caseD_4;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
   case -0x2b:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      puVar13 = (uint *)puVar32[10];
      if (puVar13 < *(uint **)(param_6 + 0x88)) {
        uVar24 = *puVar13;
        puVar32[10] = (ulong)(puVar13 + 1);
        puVar28 = &_pcre2_dummy_ucd_record_32;
        if (uVar24 < 0x110000) {
          puVar28 = &_pcre2_ucd_records_32 +
                    (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_32 +
                            (long)(int)((uVar24 & 0x7f) +
                                       (uint)*(ushort *)
                                              (&_pcre2_ucd_stage1_32 + (long)((int)uVar24 >> 7) * 2)
                                       * 0x80) * 2) * 0xc;
        }
        if (((*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)(byte)puVar28[1] * 4) & 0xfffffffd) == 1) !=
            ((int)puVar32[8] == 0xf)) goto switchD_00109d6d_caseD_6;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
   case -0x2a:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      puVar13 = (uint *)puVar32[10];
      if (puVar13 < *(uint **)(param_6 + 0x88)) {
        uVar24 = *puVar13;
        puVar32[10] = (ulong)(puVar13 + 1);
        if (uVar24 != 0x180e) {
          if (uVar24 < 0x180f) {
            if (uVar24 != 0x85) {
              if (uVar24 < 0x86) {
                if (uVar24 < 0xe) {
                  if (uVar24 < 9) goto LAB_00101e90;
                }
                else if (uVar24 != 0x20) goto LAB_00101e90;
              }
              else if ((uVar24 != 0xa0) && (uVar24 != 0x1680)) goto LAB_00101e90;
            }
          }
          else {
            if (0x205f < uVar24) {
              if (uVar24 == 0x3000) goto LAB_0010337f;
              if (uVar24 < 0x110000) goto LAB_00101e90;
              puVar28 = &_pcre2_dummy_ucd_record_32;
LAB_00101ec7:
              if ((*(int *)(&_pcre2_ucp_gentype_32 + (ulong)(byte)puVar28[1] * 4) != 6) !=
                  ((int)puVar32[8] == 0xf)) break;
              goto switchD_00109d6d_caseD_7;
            }
            if (uVar24 < 0x2028) {
              if (10 < uVar24 - 0x2000) {
LAB_00101e90:
                puVar28 = &_pcre2_ucd_records_32 +
                          (ulong)*(ushort *)
                                  (&_pcre2_ucd_stage2_32 +
                                  (long)(int)((uVar24 & 0x7f) +
                                             (uint)*(ushort *)
                                                    (&_pcre2_ucd_stage1_32 +
                                                    (long)((int)uVar24 >> 7) * 2) * 0x80) * 2) * 0xc
                ;
                goto LAB_00101ec7;
              }
            }
            else if ((0x80000000000083U >> ((ulong)(uVar24 - 0x2028) & 0x3f) & 1) == 0)
            goto LAB_00101e90;
          }
        }
LAB_0010337f:
        if ((int)puVar32[8] != 0xf) goto switchD_00109d6d_caseD_7;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
   case -0x29:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      puVar13 = (uint *)puVar32[10];
      if (puVar13 < *(uint **)(param_6 + 0x88)) {
        uVar24 = *puVar13;
        puVar32[10] = (ulong)(puVar13 + 1);
        puVar28 = &_pcre2_dummy_ucd_record_32;
        if (uVar24 < 0x110000) {
          puVar28 = &_pcre2_ucd_records_32 +
                    (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_32 +
                            (long)(int)((uVar24 & 0x7f) +
                                       (uint)*(ushort *)
                                              (&_pcre2_ucd_stage1_32 + (long)((int)uVar24 >> 7) * 2)
                                       * 0x80) * 2) * 0xc;
        }
        if (((int)puVar32[8] == 0xf) !=
            ((*(uint *)(&_pcre2_ucp_gentype_32 + (ulong)(byte)puVar28[1] * 4) & 0xfffffffd) == 1 ||
            (puVar28[1] - 0xc & 0xfb) == 0)) goto switchD_00109d6d_caseD_9;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
   case -0x28:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      puVar13 = (uint *)puVar32[10];
      if (puVar13 < *(uint **)(param_6 + 0x88)) {
        uVar24 = *puVar13;
        puVar32[10] = (ulong)(puVar13 + 1);
        if (uVar24 < 0x110000) {
          puVar13 = (uint *)(&_pcre2_ucd_caseless_sets_32 +
                            (ulong)*(uint *)((long)puVar32 + 0x44) * 4);
          do {
            uVar31 = *puVar13;
            if (uVar24 < uVar31) goto LAB_00101fd6;
            puVar13 = puVar13 + 1;
          } while (uVar24 != uVar31);
          if ((int)puVar32[8] != 0xf) goto switchD_00109d6d_caseD_a;
        }
        else {
LAB_00101fd6:
          if ((int)puVar32[8] == 0xf) goto switchD_00109d6d_caseD_a;
        }
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
   case -0x27:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      puVar13 = (uint *)puVar32[10];
      if (puVar13 < *(uint **)(param_6 + 0x88)) {
        puVar32[10] = (ulong)(puVar13 + 1);
        uVar24 = *puVar13;
        if (((uVar24 & 0xffffffdf) == 0x40) || (uVar24 == 0x24)) {
          bVar35 = true;
        }
        else {
          bVar35 = uVar24 - 0xa0 < 0xd760 || 0xdfff < uVar24;
        }
        if (((int)puVar32[8] == 0xf) != bVar35) goto switchD_00109d6d_caseD_b;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
   case -0x26:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      puVar27 = (undefined4 *)puVar32[10];
      puVar6 = *(undefined4 **)(param_6 + 0x88);
      if (puVar27 < puVar6) {
        uVar4 = *puVar27;
        puVar32[10] = (ulong)(puVar27 + 1);
        uVar26 = _pcre2_extuni_32(uVar4,puVar27 + 1,*(undefined8 *)(param_6 + 0x78),puVar6,bVar34,0)
        ;
        puVar32[10] = uVar26;
        if (((uVar26 < *(ulong *)(param_6 + 0x88)) || (*(short *)(param_6 + 0x60) == 0)) ||
           (((uVar26 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0)) ||
            (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) == 1))))
        goto LAB_001096d9;
        goto LAB_00102a51;
      }
      sVar7 = *(short *)(param_6 + 0x60);
      if ((sVar7 != 0) &&
         ((*(undefined4 **)(param_6 + 0xa0) < puVar27 || (*(int *)(param_6 + 0x30) != 0)))) {
        *(undefined4 *)(param_6 + 0x28) = 1;
        goto joined_r0x00100cbb;
      }
    }
    break;
   case -0x25:
    if (uVar24 == 0) {
      uVar26 = puVar32[7];
      *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
      if (*(uint *)((long)puVar32 + 0x3c) <= (uint)uVar26) break;
      puVar13 = (uint *)puVar32[10];
      if (*(uint **)(param_6 + 0x88) <= puVar13) {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x001011ce;
        }
        break;
      }
      if ((int)puVar32[8] == 0xc) {
        if (*(int *)(param_6 + 0xe4) == 0) {
          if (((*(uint **)(param_6 + 0x88) + -(ulong)*(uint *)(param_6 + 0xe8) < puVar13) ||
              (*puVar13 != *(uint *)(param_6 + 0xec))) ||
             ((*(uint *)(param_6 + 0xe8) != 1 && (puVar13[1] != *(uint *)(param_6 + 0xf0)))))
          goto LAB_0010234b;
        }
        else {
          iVar8 = _pcre2_is_newline_32();
          if (iVar8 == 0) {
            puVar13 = (uint *)puVar32[10];
            goto LAB_0010234b;
          }
        }
        break;
      }
LAB_0010234b:
      puVar11 = puVar13 + 1;
      uVar24 = *puVar13;
      uVar26 = (ulong)uVar24;
      puVar32[10] = (ulong)puVar11;
      switch((int)puVar32[8]) {
      case 6:
        if (uVar24 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar26) & 8;
joined_r0x001044f3:
          if (bVar16 != 0) goto LAB_00100688;
        }
        break;
      case 7:
        if (uVar24 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar26) & 8;
          goto joined_r0x001044f3;
        }
        goto LAB_00100688;
      case 8:
        if (uVar24 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar26) & 1;
          goto joined_r0x001044f3;
        }
        break;
      case 9:
        if (uVar24 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar26) & 1;
          goto joined_r0x001044f3;
        }
        goto LAB_00100688;
      case 10:
        if (uVar24 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar26) & 0x10;
          goto joined_r0x001044f3;
        }
        break;
      case 0xb:
        if (uVar24 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar26) & 0x10;
          goto joined_r0x001044f3;
        }
        goto LAB_00100688;
      case 0xc:
        if ((((*(short *)(param_6 + 0x60) != 0) && (*(uint **)(param_6 + 0x88) <= puVar11)) &&
            (*(int *)(param_6 + 0xe4) == 0)) &&
           (((*(int *)(param_6 + 0xe8) == 2 && (uVar24 == *(uint *)(param_6 + 0xec))) &&
            (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
        goto LAB_00102a51;
        break;
      case 0xd:
      case 0xe:
        break;
      default:
        goto switchD_00100529_caseD_62;
      case 0x11:
        if (uVar24 == 0xd) {
          if ((puVar11 < *(uint **)(param_6 + 0x88)) && (puVar13[1] == 10)) {
            puVar32[10] = (ulong)(puVar13 + 2);
          }
        }
        else {
          if (uVar24 < 0xe) {
            if (uVar24 == 10) break;
            uVar24 = uVar24 - 0xb;
joined_r0x00109b73:
            if (1 < uVar24) goto LAB_00100688;
          }
          else if (uVar24 != 0x85) {
            uVar24 = uVar24 - 0x2028;
            goto joined_r0x00109b73;
          }
          if (*(short *)(param_6 + 0x62) == 2) goto LAB_00100688;
        }
        break;
      case 0x12:
        if (uVar24 != 0x180e) {
          if (uVar24 < 0x180f) {
            if (uVar24 != 0xa0) {
              if (uVar24 < 0xa1) {
                if ((uVar24 != 9) && (uVar24 != 0x20)) break;
              }
              else if (uVar24 != 0x1680) break;
            }
          }
          else if (uVar24 != 0x205f) {
            if (uVar24 < 0x2060) {
              if (uVar24 < 0x200b) {
                if (uVar24 < 0x2000) break;
              }
              else if (uVar24 != 0x202f) break;
            }
            else {
joined_r0x00109be5:
              if (uVar24 == 0x3000) break;
            }
          }
        }
        goto LAB_00100688;
      case 0x13:
        if (uVar24 != 0x180e) {
          if (uVar24 < 0x180f) {
            if (uVar24 != 0xa0) {
              if (uVar24 < 0xa1) {
                if ((uVar24 == 9) || (uVar24 == 0x20)) break;
              }
              else if (uVar24 == 0x1680) break;
              goto LAB_00100688;
            }
          }
          else if (uVar24 != 0x205f) {
            if (0x205f < uVar24) goto joined_r0x00109be5;
            if (uVar24 < 0x200b) {
              if (0x1fff < uVar24) break;
            }
            else if (uVar24 == 0x202f) break;
            goto LAB_00100688;
          }
        }
        break;
      case 0x14:
        if (uVar24 != 0x85) {
          if (uVar24 < 0x86) {
            if (3 < uVar24 - 10) break;
          }
          else if (1 < uVar24 - 0x2028) break;
        }
        goto LAB_00100688;
      case 0x15:
        if (uVar24 == 0x85) break;
        if (uVar24 < 0x86) {
          if (uVar24 - 10 < 4) break;
        }
        else if (uVar24 - 0x2028 < 2) break;
        goto LAB_00100688;
      }
      goto LAB_00104279;
    }
    goto switchD_001005c7_caseD_23;
   case -0x24:
    if (uVar24 == 0) {
      uVar24 = *(uint *)(puVar32[10] - 4);
      uVar26 = puVar32[10] - 4;
      puVar28 = &_pcre2_dummy_ucd_record_32;
      puVar32[10] = uVar26;
      if (uVar24 < 0x110000) {
        puVar28 = &_pcre2_ucd_records_32 +
                  (ulong)*(ushort *)
                          (&_pcre2_ucd_stage2_32 +
                          (long)(int)((uint)*(ushort *)
                                             (&_pcre2_ucd_stage1_32 + (long)((int)uVar24 >> 7) * 2)
                                      * 0x80 + (uVar24 & 0x7f)) * 2) * 0xc;
      }
      uVar30 = (ulong)(byte)puVar28[2];
      goto joined_r0x001010c2;
    }
    goto switchD_001005c7_caseD_23;
   case -0x23:
    if (uVar24 == 0) {
      uVar26 = puVar32[10];
      puVar32[10] = uVar26 - 4;
      if ((int)puVar32[8] != 0x11) goto LAB_00101030;
      if (uVar26 - 4 <= puVar32[1]) goto LAB_00100507;
      if ((*(int *)(uVar26 - 4) != 10) || (*(int *)(uVar26 - 8) != 0xd)) goto LAB_0010103e;
      puVar32[10] = uVar26 - 8;
      goto LAB_00101030;
    }
    goto switchD_001005c7_caseD_23;
   case -0x22:
    goto switchD_001005c7_caseD_de;
   case -0x21:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      puVar13 = (uint *)puVar32[10];
      if (puVar13 < *(uint **)(param_6 + 0x88)) {
        uVar24 = *puVar13;
        puVar32[10] = (ulong)(puVar13 + 1);
        puVar28 = &_pcre2_dummy_ucd_record_32;
        if (uVar24 < 0x110000) {
          puVar28 = &_pcre2_ucd_records_32 +
                    (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_32 +
                            (long)(int)((uVar24 & 0x7f) +
                                       (uint)*(ushort *)
                                              (&_pcre2_ucd_stage1_32 + (long)((int)uVar24 >> 7) * 2)
                                       * 0x80) * 2) * 0xc;
        }
        if (((1 << ((byte)*(uint *)((long)puVar32 + 0x44) & 0x1f) &
             *(uint *)(&_pcre2_ucd_boolprop_sets_32 +
                      ((ulong)(*(ushort *)(puVar28 + 10) & 0xfff) +
                      (ulong)(*(uint *)((long)puVar32 + 0x44) >> 5)) * 4)) != 0) !=
            ((int)puVar32[8] == 0xf)) goto switchD_00109d6d_caseD_d;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
   case -0x20:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      puVar13 = (uint *)puVar32[10];
      if (puVar13 < *(uint **)(param_6 + 0x88)) {
        uVar24 = *puVar13;
        puVar32[10] = (ulong)(puVar13 + 1);
        puVar28 = &_pcre2_dummy_ucd_record_32;
        if (uVar24 < 0x110000) {
          puVar28 = &_pcre2_ucd_records_32 +
                    (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_32 +
                            (long)(int)((uVar24 & 0x7f) +
                                       (uint)*(ushort *)
                                              (&_pcre2_ucd_stage1_32 + (long)((int)uVar24 >> 7) * 2)
                                       * 0x80) * 2) * 0xc;
        }
        if (((uint)(*(ushort *)(puVar28 + 8) >> 0xb) != *(uint *)((long)puVar32 + 0x44)) ==
            ((int)puVar32[8] == 0xf)) goto switchD_00109d6d_caseD_c;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
    break;
   case -0x1f:
    if (uVar24 != 0) goto switchD_001005c7_caseD_23;
    uVar26 = puVar32[7];
    *(uint *)(puVar32 + 7) = (uint)uVar26 + 1;
    if ((uint)uVar26 < *(uint *)((long)puVar32 + 0x3c)) {
      puVar13 = (uint *)puVar32[10];
      if (puVar13 < *(uint **)(param_6 + 0x88)) {
        uVar24 = *puVar13;
        puVar32[10] = (ulong)(puVar13 + 1);
        pbVar25 = &_pcre2_dummy_ucd_record_32;
        if (uVar24 < 0x110000) {
          pbVar25 = &_pcre2_ucd_records_32 +
                    (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_32 +
                            (long)(int)((uVar24 & 0x7f) +
                                       (uint)*(ushort *)
                                              (&_pcre2_ucd_stage1_32 + (long)((int)uVar24 >> 7) * 2)
                                       * 0x80) * 2) * 0xc;
        }
        uVar24 = *(uint *)((long)puVar32 + 0x44);
        bVar35 = true;
        if (*pbVar25 != uVar24) {
          bVar35 = (1 << ((byte)uVar24 & 0x1f) &
                   *(uint *)(&_pcre2_ucd_script_sets_32 +
                            ((ulong)(*(ushort *)(pbVar25 + 8) & 0x3ff) + (ulong)(uVar24 >> 5)) * 4))
                   != 0;
        }
        if (((int)puVar32[8] == 0xf) != bVar35) goto switchD_00109d6d_caseD_5;
      }
      else {
        sVar7 = *(short *)(param_6 + 0x60);
        if ((sVar7 != 0) &&
           ((*(uint **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100cbb;
        }
      }
    }
}LAB_00100688:uVar24 = 0;goto switchD_001005c7_caseD_23;switchD_00107fce_caseD_0:joined_r0x00108041:if (bVar16 != 0xf) goto switchD_00100529_caseD_a3;goto LAB_00107fec;switchD_001005c7_caseD_de:if (uVar24 == 0) goto code_r0x00100fe9;goto switchD_001005c7_caseD_23;code_r0x00100fe9:puVar32[10] = puVar32[10] - 4;LAB_00100fee:if (puVar32[1] < puVar32[10]) {
   *(undefined1*)( puVar32 + 9 ) = 0xde;
   param_2 = (uint*)*puVar32;
   uVar24 = 0;
   goto LAB_00101aa0;
}goto LAB_00100507;joined_r0x001010c2:if (uVar26 <= puVar32[1]) goto LAB_00100507;uVar24 = *(uint*)( uVar26 - 4 );uVar26 = uVar26 - 4;puVar28 = &_pcre2_dummy_ucd_record_32;if (uVar24 < 0x110000) {
   puVar28 = &_pcre2_ucd_records_32 + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_32 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_32 + (long)( (int)uVar24 >> 7 ) * 2 ) * 0x80 + ( uVar24 & 0x7f ) ) * 2 ) * 0xc;
}bVar16 = puVar28[2];if (( 1 << ( (byte)uVar30 & 0x1f ) & *(uint*)( &_pcre2_ucp_gbtable_32 + (ulong)bVar16 * 4 ) ) == 0) goto LAB_0010114c;puVar32[10] = uVar26;uVar30 = (ulong)bVar16;goto joined_r0x001010c2;LAB_00102a51:uVar24 = 0xfffffffe;goto LAB_00101ae4;}int pcre2_match_32(undefined8 *param_1, uint *param_2, ulong param_3, ulong param_4, uint param_5, undefined8 *param_6, undefined8 *param_7) {
   uint *puVar1;
   uint uVar2;
   uint uVar3;
   undefined1 auVar4[16];
   uint uVar5;
   uint uVar6;
   int iVar7;
   uint uVar8;
   uint *puVar9;
   void *pvVar10;
   long lVar11;
   uint uVar12;
   ulong uVar13;
   int iVar14;
   undefined8 extraout_RDX;
   undefined *puVar15;
   uint uVar16;
   size_t sVar17;
   uint *puVar18;
   uint *puVar19;
   uint *puVar20;
   long lVar21;
   ulong uVar22;
   uint uVar23;
   uint *puVar24;
   uint *puVar25;
   uint *puVar26;
   ulong uVar27;
   long in_FS_OFFSET;
   bool bVar28;
   bool bVar29;
   undefined8 uStack_280;
   uint local_250;
   uint *local_228;
   int local_218;
   uint local_210;
   uint local_1f8;
   undefined8 *local_1f0;
   uint *local_1e8;
   uint local_1dc;
   uint local_1d0;
   undefined4 local_1c8[8];
   uint *local_1a8;
   long local_1a0;
   long local_198;
   uint local_160;
   undefined8 local_158;
   undefined8 uStack_150;
   undefined8 local_148;
   uint local_140;
   uint local_13c;
   uint local_138;
   undefined4 local_134;
   int local_130;
   uint local_12c;
   uint local_128;
   long local_120;
   long lStack_118;
   long local_110;
   ulong local_108;
   ulong local_100;
   ushort local_f8;
   undefined2 local_f6;
   ushort local_f4;
   ushort local_f2;
   undefined8 *local_f0;
   long local_e8;
   uint *local_e0;
   uint *local_d8;
   uint *local_d0;
   uint *local_c8;
   uint *local_c0;
   uint *local_b8;
   uint *puStack_b0;
   undefined1 local_a8[16];
   uint *local_90;
   uint local_84;
   uint local_80;
   undefined4 local_7c;
   undefined8 local_78;
   undefined8 local_70;
   uint local_68;
   undefined4 *local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == (uint*)0x0 && param_3 == 0) {
      param_2 = (uint*)&_LC6;
   }
   local_250 = param_5 & 0x1ffb9fc0;
   if (( param_5 & 0x1ffb9fc0 ) != 0) {
      LAB_0010bcb5:iVar7 = -0x22;
      goto LAB_0010a7d8;
   }
   if (( param_1 == (undefined8*)0x0 || param_6 == (undefined8*)0x0 ) || ( param_2 == (uint*)0x0 )) {
      iVar7 = -0x33;
      goto LAB_0010a7d8;
   }
   puVar9 = param_2 + param_4;
   bVar28 = param_3 == 0xffffffffffffffff;
   if (bVar28) {
      uStack_280 = 0x10b67a;
      param_3 = _pcre2_strlen_32(param_2);
   }
   local_1f8 = (uint)bVar28;
   puVar1 = param_2 + param_3;
   if (param_3 < param_4) {
      iVar7 = -0x21;
      goto LAB_0010a7d8;
   }
   if (*(int*)( param_1 + 10 ) != 0x50435245) {
      iVar7 = -0x1f;
      goto LAB_0010a7d8;
   }
   if (( *(uint*)( param_1 + 0xc ) & 7 ) != 4) {
      iVar7 = -0x20;
      goto LAB_0010a7d8;
   }
   uVar5 = *(uint*)( param_1 + 0xc ) >> 0xe & 0xc | param_5;
   lVar11 = param_1[4];
   uVar8 = *(uint*)( param_1 + 0xb );
   uVar6 = uVar8 & 0x4000000;
   uVar16 = uVar8 & 0x80000;
   if (( param_5 & 0x20 ) == 0) {
      local_f8 = ( ushort )(param_5 >> 4) & 1;
      if (( param_5 & 0x10 ) != 0) goto LAB_0010a6e4;
   } else {
      local_f8 = 2;
      LAB_0010a6e4:if (( ( uVar8 | uVar5 ) & 0x20000000 ) != 0) goto LAB_0010bcb5;
   }
   if (( ( param_7 != (undefined8*)0x0 ) && ( param_7[9] != -1 ) ) && ( ( uVar8 & 0x800000 ) == 0 )) {
      iVar7 = -0x38;
      goto LAB_0010a7d8;
   }
   if (( *(byte*)( (long)param_6 + 0x61 ) & 1 ) != 0) {
      uStack_280 = 0x10a735;
      ( *(code*)param_6[1] )(param_6[4]);
      *(byte*)( (long)param_6 + 0x61 ) = *(byte*)( (long)param_6 + 0x61 ) & 0xfe;
   }
   param_6[4] = 0;
   param_6[0xb] = 0;
   puVar19 = puVar9;
   puVar20 = puVar1;
   if (lVar11 != 0 && ( param_5 & 0xbfffbfc0 ) == 0) {
      if (uVar16 == 0) {
         LAB_0010b855:iVar7 = pcre2_jit_match_32(param_1, param_2, param_3, param_4, uVar5, param_6, param_7);
         puVar24 = param_2;
         if (iVar7 == -0x2d) goto LAB_0010a91c;
      } else {
         if (uVar6 == 0 && ( param_5 & 0x40000000 ) == 0) {
            if (param_4 < *(ushort*)( (long)param_1 + 0x7c )) {
               lVar11 = 0;
               puVar19 = param_2;
               uVar22 = param_3;
            } else {
               puVar19 = puVar9 + -(ulong) * (ushort*)( (long)param_1 + 0x7c );
               lVar11 = (long)puVar19 - (long)param_2 >> 2;
               uVar22 = param_3 - lVar11;
            }
            uStack_280 = 0x10a7b2;
            iVar7 = _pcre2_valid_utf_32(puVar19, uVar22, param_6 + 0xb);
            *(int*)( (long)param_6 + 100 ) = iVar7;
            if (iVar7 != 0) {
               param_6[0xb] = param_6[0xb] + lVar11;
               goto LAB_0010a7d8;
            }
            goto LAB_0010b855;
         }
         iVar7 = pcre2_jit_match_32(param_1, param_2, param_3, param_4, uVar5, param_6, param_7);
         uStack_280 = extraout_RDX;
         if (iVar7 == -0x2d) goto LAB_0010aad2;
      }
      param_6[8] = param_3;
      if (( iVar7 < 0 ) || ( ( param_5 & 0x4000 ) == 0 )) goto LAB_0010a7d8;
      sVar17 = ( (long)(int)local_1f8 + param_3 ) * 4;
      pvVar10 = (void*)( *(code*)*param_6 )(sVar17, param_6[2], uStack_280);
      param_6[4] = pvVar10;
      if (pvVar10 != (void*)0x0) {
         memcpy(pvVar10, param_2, sVar17);
         *(byte*)( (long)param_6 + 0x61 ) = *(byte*)( (long)param_6 + 0x61 ) | 1;
         goto LAB_0010a7d8;
      }
      LAB_0010bd0e:iVar7 = -0x30;
      LAB_0010a7d8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return iVar7;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   puVar24 = param_2;
   if (uVar16 != 0) {
      LAB_0010aad2:if (( ( param_5 & 0x40000000 ) == 0 ) || ( puVar24 = uVar6 != 0 )) {
         local_d8 = param_2;
         if (*(ushort*)( (long)param_1 + 0x7c ) <= param_4) {
            local_d8 = puVar9 + -(ulong) * (ushort*)( (long)param_1 + 0x7c );
         }
         while (true) {
            iVar7 = _pcre2_valid_utf_32(local_d8, param_3 - ( (long)local_d8 - (long)param_2 >> 2 ), param_6 + 0xb);
            *(int*)( (long)param_6 + 100 ) = iVar7;
            puVar20 = puVar1;
            puVar24 = local_d8;
            if (iVar7 == 0) break;
            lVar11 = ( (long)local_d8 - (long)param_2 >> 2 ) + param_6[0xb];
            param_6[0xb] = lVar11;
            if (( 0 < iVar7 ) || ( uVar6 == 0 )) goto LAB_0010a7d8;
            puVar20 = param_2 + lVar11;
            if (puVar9 <= puVar20) {
               local_250 = 2;
               break;
            }
            local_d8 = puVar20 + 1;
         };
      }
   }
   LAB_0010a91c:local_d8 = puVar24;
   if (param_7 == (undefined8*)0x0) {
      local_158 = *param_1;
      uStack_150 = param_1[1];
      local_148 = param_1[2];
      param_7 = (undefined8*)&_pcre2_default_match_context_32;
   } else {
      local_148 = param_7[2];
      local_158 = *param_7;
      uStack_150 = param_7[1];
   }
   local_80 = *(uint*)( param_1 + 0xb );
   local_1c8[0] = 2;
   uVar23 = uVar5 | local_80;
   local_160 = 0;
   uVar6 = 0;
   if (-1 < (int)uVar23) {
      uVar6 = local_80 >> 8 & 1;
   }
   uVar2 = *(uint*)( param_1 + 0xc );
   local_58 = local_1c8;
   puVar24 = param_2 + param_7[9];
   if (param_7[9] == -1) {
      puVar24 = puVar1;
   }
   local_12c = uVar2 >> 0xc & 1;
   local_1a0 = (long)puVar20 - (long)param_2 >> 2;
   local_48 = param_7[5];
   local_128 = 1;
   local_50 = param_7[6];
   if (*(short*)( (long)param_1 + 0x7c ) == 0) {
      local_128 = uVar2 >> 0xd & 1;
   }
   local_f4 = *(ushort*)( (long)param_1 + 0x86 );
   local_f2 = *(ushort*)( (long)param_1 + 0x84 );
   local_f0 = param_1 + 0x11;
   local_78 = 0;
   local_a8 = (undefined1[16])0x0;
   local_e8 = (long)local_f0 + (long)(int)( (uint)local_f4 * (uint)local_f2 ) * 4;
   local_f6 = *(undefined2*)( param_1 + 0xf );
   local_1a8 = param_2;
   local_108 = param_4;
   local_e0 = param_2;
   local_d0 = puVar20;
   local_c8 = puVar1;
   switch (*(undefined2*)( (long)param_1 + 0x7a )) {
      default:
    iVar7 = -0x2c;
    goto LAB_0010a7d8;
      case 1:
    local_70 = _LC7;
    break;
      case 2:
    local_70 = _LC8;
    break;
      case 3:
    local_70 = _LC10;
    local_68 = 10;
    break;
      case 4:
    local_78 = 0x100000000;
    break;
      case 5:
    local_78 = 0x200000000;
    break;
      case 6:
    local_70 = 1;
   }
   sVar17 = (long)(int)( ( uint ) * (ushort*)( param_1 + 0x10 ) * 2 ) * 8;
   uVar22 = sVar17 + 0x88;
   local_140 = *(uint*)( (long)param_1 + 100 );
   if (*(uint*)( param_7 + 10 ) < *(uint*)( (long)param_1 + 100 )) {
      local_140 = *(uint*)( param_7 + 10 );
   }
   local_13c = *(uint*)( param_1 + 0xd );
   if (*(uint*)( (long)param_7 + 0x54 ) < *(uint*)( param_1 + 0xd )) {
      local_13c = *(uint*)( (long)param_7 + 0x54 );
   }
   local_138 = *(uint*)( (long)param_1 + 0x6c );
   if (*(uint*)( param_7 + 0xb ) < *(uint*)( (long)param_1 + 0x6c )) {
      local_138 = *(uint*)( param_7 + 0xb );
   }
   uVar27 = uVar22 * 10;
   if (uVar27 < 0x5000) {
      uVar27 = 0x5000;
   }
   if (( (ulong)local_140<uVar27> > 10 ) && ( uVar27 = uVar27 < uVar22 )) {
      iVar7 = -0x3f;
      goto LAB_0010a7d8;
   }
   lVar11 = param_6[6];
   if ((ulong)param_6[7] < uVar27) {
      ( *(code*)param_6[1] )(lVar11, param_6[2]);
      lVar11 = ( *(code*)*param_6 )(uVar27, param_6[2]);
      param_6[6] = lVar11;
      if (lVar11 == 0) {
         param_6[7] = 0;
         goto LAB_0010bd0e;
      }
      param_6[7] = uVar27;
   }
   memset((void*)( lVar11 + 0x88 ), 0xff, sVar17);
   local_120 = param_1[3];
   uVar3 = *(uint*)( param_1 + 0xc );
   lStack_118 = local_120 + 0x100;
   local_110 = local_120 + 0x340;
   if (( uVar3 & 0x10 ) == 0) {
      local_210 = 0;
      if (( ( uVar2 & 0x200 ) == 0 ) && ( local_210 = local_210 != 0 )) {
         local_1f0 = param_1 + 5;
         local_210 = 0;
         local_1dc = 0;
         local_218 = 0;
      } else {
         local_1dc = 0;
         local_218 = 0;
         local_1f0 = (undefined8*)0x0;
      }
   } else {
      local_210 = *(uint*)( param_1 + 0xe );
      if (( uVar3 & 0x20 ) == 0) {
         LAB_0010b968:local_218 = 1;
         local_1f0 = (undefined8*)0x0;
         local_1dc = local_210;
      } else {
         if (local_210 < 0x100) {
            local_1dc = ( uint ) * (byte*)( local_120 + 0x100 + (ulong)local_210 );
            if (( 0x7f < local_210 ) && ( ( uVar8 & 0xa0000 ) != 0 )) {
               LAB_0010bb8a:puVar15 = &_pcre2_ucd_records_32 + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_32 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_32 + (long)( (int)local_210 >> 7 ) * 2 ) * 0x80 + ( local_210 & 0x7f ) ) * 2 ) * 0xc;
               goto LAB_0010bbc6;
            }
         } else {
            if (( uVar8 & 0xa0000 ) == 0) goto LAB_0010b968;
            if (local_210 < 0x110000) goto LAB_0010bb8a;
            puVar15 = &_pcre2_dummy_ucd_record_32;
            LAB_0010bbc6:local_1dc = local_210 + *(int*)( puVar15 + 4 );
         }
         local_218 = 1;
         local_1f0 = (undefined8*)0x0;
      }
   }
   if (( uVar3 & 0x80 ) == 0) {
      local_1d0 = 0;
      bVar28 = false;
      uVar12 = 0;
      goto LAB_0010adb0;
   }
   uVar12 = *(uint*)( (long)param_1 + 0x74 );
   if (( uVar3 & 0x100 ) == 0) {
      LAB_0010b940:bVar28 = true;
      local_1d0 = uVar12;
   } else {
      if (uVar12 < 0x100) {
         bVar28 = true;
         local_1d0 = ( uint ) * (byte*)( local_120 + 0x100 + (ulong)uVar12 );
         if (( uVar12 < 0x80 ) || ( ( uVar8 & 0xa0000 ) == 0 )) goto LAB_0010adb0;
         LAB_0010bb26:puVar15 = &_pcre2_ucd_records_32 + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_32 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_32 + (long)( (int)uVar12 >> 7 ) * 2 ) * 0x80 + ( uVar12 & 0x7f ) ) * 2 ) * 0xc;
      } else {
         if (( uVar8 & 0xa0000 ) == 0) goto LAB_0010b940;
         if (uVar12 < 0x110000) goto LAB_0010bb26;
         puVar15 = &_pcre2_dummy_ucd_record_32;
      }
      bVar28 = true;
      local_1d0 = *(int*)( puVar15 + 4 ) + uVar12;
   }
   LAB_0010adb0:local_1e8 = puVar9 + -1;
   LAB_0010ae04:local_130 = 0;
   puVar18 = (uint*)0x0;
   local_228 = (uint*)0x0;
   LAB_0010ae26:puVar25 = local_1e8;
   if (( *(byte*)( (long)param_1 + 0x5a ) & 1 ) != 0) goto LAB_0010b1d0;
   puVar26 = puVar20;
   if (uVar6 != 0) {
      puVar26 = puVar19;
      if (uVar16 != 0) {
         if (puVar20 <= puVar19) goto LAB_0010b410;
         do {
            if (local_78._4_4_ == 0) {
               if (( ( puVar26 <= local_d0 + -(local_70 & 0xffffffff) ) && ( *puVar26 == local_70._4_4_ ) ) && ( ( (int)local_70 == 1 || ( puVar26[1] == local_68 ) ) )) break;
            } else if (( puVar26 < local_d0 ) && ( iVar7 = _pcre2_is_newline_32(puVar26, local_78._4_4_, local_d0, &local_70) ),iVar7 != 0) break;
            puVar26 = puVar26 + 1;
         } while ( puVar26 < puVar20 );
         goto LAB_0010aed3;
      }
      if (puVar19 < puVar20) {
         do {
            if (local_78._4_4_ == 0) {
               if (( ( puVar26 <= local_d0 + -(local_70 & 0xffffffff) ) && ( *puVar26 == local_70._4_4_ ) ) && ( ( (int)local_70 == 1 || ( puVar26[1] == local_68 ) ) )) break;
            } else if (( puVar26 < local_d0 ) && ( iVar7 = _pcre2_is_newline_32(puVar26, local_78._4_4_, local_d0, &local_70) ),iVar7 != 0) break;
            puVar26 = puVar26 + 1;
         } while ( puVar26 < puVar20 );
         goto LAB_0010aed3;
      }
      LAB_0010b410:if (-1 < (int)uVar23) {
         if (local_218 == 0) goto LAB_0010b430;
         goto LAB_0010af28;
      }
      puVar20 = puVar19;
      if (( local_1f0 == (undefined8*)0x0 ) && ( local_218 == 0 )) goto LAB_0010b1b3;
      goto switchD_0010b2b0_default;
   }
   LAB_0010aed3:if (-1 < (int)uVar23) {
      if (local_218 == 0) {
         LAB_0010b430:if (( uVar2 & 0x200 ) == 0) {
            if (local_1f0 != (undefined8*)0x0) {
               for (; puVar19 < puVar26; puVar19 = puVar19 + 1) {
                  uVar8 = *puVar19;
                  if (0xff < uVar8) {
                     uVar8 = 0xff;
                  }
                  if (( *(byte*)( (long)local_1f0 + ( ulong )(uVar8 >> 3) ) >> ( uVar8 & 7 ) & 1 ) != 0) break;
               }
               goto LAB_0010af28;
            }
         } else if (local_e0 + param_4 < puVar19) {
            uVar27 = local_70;
            if (uVar16 == 0) {
               for (; local_70 = uVar27,puVar19 < puVar26; puVar19 = puVar19 + 1) {
                  local_78._4_4_ = ( uint )((ulong)local_78 >> 0x20);
                  iVar7 = local_78._4_4_;
                  if (local_78._4_4_ == 0) {
                     local_70._0_4_ = (int)uVar27;
                     uVar13 = uVar27 & 0xffffffff;
                     if (( ( local_e0 + uVar13 <= puVar19 ) && ( local_70._4_4_ = ( uint )(uVar27 >> 0x20) ),puVar19[-uVar13] == local_70._4_4_ )) &&( ( bVar29 = (int)local_70 == 1 ),bVar29 || ( puVar19[1 - uVar13] == local_68 ) );
                  } else if (( local_e0 < puVar19 ) && ( iVar7 = _pcre2_was_newline_32(puVar19, iVar7, local_e0, &local_70) ),uVar27 = local_70,iVar7 != 0) goto LAB_0010bc26;
                  local_70 = uVar27;
                  uVar27 = local_70;
               }
            } else {
               for (; local_70 = uVar27,puVar19 < puVar26; puVar19 = puVar19 + 1) {
                  local_78._4_4_ = ( uint )((ulong)local_78 >> 0x20);
                  iVar7 = local_78._4_4_;
                  if (local_78._4_4_ == 0) {
                     local_70._0_4_ = (int)uVar27;
                     uVar13 = uVar27 & 0xffffffff;
                     if (( ( local_e0 + uVar13 <= puVar19 ) && ( local_70._4_4_ = ( uint )(uVar27 >> 0x20) ),puVar19[-uVar13] == local_70._4_4_ )) &&( ( bVar29 = (int)local_70 == 1 ),bVar29 || ( puVar19[1 - uVar13] == local_68 ) );
                  } else if (( local_e0 < puVar19 ) && ( iVar7 = _pcre2_was_newline_32(puVar19, iVar7, local_e0, &local_70) ),uVar27 = local_70,iVar7 != 0) goto LAB_0010bc26;
                  local_70 = uVar27;
                  uVar27 = local_70;
               }
            }
         }
         goto LAB_0010b1b3;
      }
      if (local_210 == local_1dc) {
         for (; ( puVar19 < puVar26 && ( *puVar19 != local_210 ) ); puVar19 = puVar19 + 1) {}
      } else {
         for (; ( ( puVar19 < puVar26 && ( local_1dc != *puVar19 ) ) && ( local_210 != *puVar19 ) ); puVar19 = puVar19 + 1) {}
      }
      LAB_0010af28:puVar20 = local_d0;
      if (local_f8 != 0) goto LAB_0010b1d0;
      puVar20 = puVar26;
      if (puVar19 < local_d0) goto LAB_0010af4b;
      goto switchD_0010b2b0_default;
   }
   if (( local_1f0 == (undefined8*)0x0 ) && ( local_218 == 0 )) goto LAB_0010b1b3;
   puVar20 = puVar26;
   if (puVar26 <= puVar19) goto switchD_0010b2b0_default;
   uVar8 = *puVar19;
   if (( local_218 == 0 ) || ( ( local_210 != uVar8 && ( local_1dc != uVar8 ) ) )) {
      if (local_1f0 == (undefined8*)0x0) goto switchD_0010b2b0_default;
      if (0xff < uVar8) {
         uVar8 = 0xff;
      }
      if (( *(byte*)( (long)local_1f0 + ( ulong )(uVar8 >> 3) ) >> ( uVar8 & 7 ) & 1 ) == 0) goto switchD_0010b2b0_default;
   }
   goto LAB_0010b1b3;
   LAB_0010bc26:if (( puVar19[-1] == 0xd ) && ( ( ( uVar8 = local_78._4_4_ - 1 ),uVar8 < 2 && ( puVar19 < puVar26 ) ) && ( *puVar19 == 10 ) )) {
      puVar19 = puVar19 + 1;
   }
   LAB_0010b1b3:puVar20 = local_d0;
   if (local_f8 == 0) {
      LAB_0010af4b:uVar27 = (long)local_d0 - (long)puVar19;
      puVar20 = local_d0;
      if ((long)uVar27 >> 2 < (long)( ulong ) * (ushort*)( (long)param_1 + 0x7e )) goto switchD_0010b2b0_default;
      puVar26 = puVar19 + local_218;
      if (( ( local_1e8 < puVar26 ) && ( bVar28 ) ) && ( ( uVar27 < 0x1f3d || ( ( -1 < (int)uVar23 && ( uVar27 < 0x7a11fd ) ) ) ) )) {
         if (uVar12 == local_1d0) {
            do {
               puVar25 = puVar26;
               if (local_d0 <= puVar25) goto switchD_0010b2b0_default;
               puVar26 = puVar25 + 1;
            } while ( *puVar25 != uVar12 );
         } else {
            do {
               puVar25 = puVar26;
               if (local_d0 <= puVar25) goto switchD_0010b2b0_default;
            } while ( ( *puVar25 != uVar12 ) && ( puVar26 = puVar25 + 1 * puVar25 != local_1d0 ) );
         }
      }
   }
   LAB_0010b1d0:local_1e8 = puVar25;
   if (puVar24 < puVar19) goto switchD_0010b2b0_default;
   local_134 = 0;
   local_100 = 0;
   local_7c = 0;
   local_198 = (long)puVar19 - (long)param_2 >> 2;
   local_160 = local_160 | 1;
   local_84 = local_250 | uVar5;
   local_b8 = puVar19;
   puStack_b0 = puVar19;
   iVar7 = match_constprop_0(puVar19, local_e8, *(undefined2*)( param_1 + 0x10 ), uVar22, param_6, &local_158);
   if (( local_130 != 0 ) && ( local_228 == (uint*)0x0 )) {
      local_228 = local_b8;
      puVar18 = puVar19;
   }
   if (iVar7 < -0x3e0) {
      if (iVar7 < -0x3e5) goto LAB_0010b726;
      switch (iVar7) {
         case -0x3e4:
         case -0x3e1:
      break;
         case -0x3e3:
      puVar25 = local_90;
      if (puVar19 < local_90) goto LAB_0010b2d4;
      break;
         case -0x3e2:
      local_78 = CONCAT44(local_78._4_4_,local_7c);
      puVar25 = puVar19;
      goto LAB_0010b2d4;
         default:
      goto switchD_0010b2b0_default;
      }
   } else if (iVar7 != 0) {
      if (( ( puVar20 == puVar1 ) || ( uVar16 == 0 ) ) || ( ( iVar7 + 2U & 0xfffffffd ) != 0 )) goto LAB_0010b726;
      goto LAB_0010b023;
   }
   local_78 = (ulong)local_78._4_4_ << 0x20;
   puVar25 = puVar19 + 1;
   LAB_0010b2d4:if (uVar6 != 0) {
      if (local_78._4_4_ == 0) {
         if (( ( puVar19 <= local_d0 + -(local_70 & 0xffffffff) ) && ( *puVar19 == local_70._4_4_ ) ) && ( ( (int)local_70 == 1 || ( puVar19[1] == local_68 ) ) )) goto switchD_0010b2b0_default;
      } else if (( puVar19 < local_d0 ) && ( iVar7 = _pcre2_is_newline_32(puVar19, local_78._4_4_, local_d0, &local_70) ),iVar7 != 0) goto switchD_0010b2b0_default;
   }
   puVar19 = puVar25;
   if (( puVar20 < puVar25 ) || ( (int)uVar23 < 0 )) goto switchD_0010b2b0_default;
   if (( ( ( ( puVar9 < puVar25 ) && ( puVar25[-1] == 0xd ) ) && ( puVar25 < puVar20 ) ) && ( ( *puVar25 == 10 && ( ( *(byte*)( (long)param_1 + 0x61 ) & 8 ) == 0 ) ) ) ) && ( ( local_78._4_4_ - 1 < 2 || ( (int)local_70 == 2 ) ) )) {
      puVar25 = puVar25 + 1;
   }
   auVar4._8_8_ = 0;
   auVar4._0_8_ = local_a8._8_8_;
   local_a8 = auVar4 << 0x40;
   puVar19 = puVar25;
   goto LAB_0010ae26;
   switchD_0010b2b0_default:if (( puVar1 == puVar20 ) || ( uVar16 == 0 )) {
      iVar7 = 0;
      LAB_0010b726:param_6[3] = param_1;
      *(undefined1*)( param_6 + 0xc ) = 0;
      param_6[5] = local_a8._0_8_;
      if (iVar7 != 1) goto LAB_0010b097;
      iVar7 = 0;
      iVar14 = (int)local_100;
      if (SBORROW4(iVar14, ( uint ) * (ushort*)( (long)param_6 + 0x62 ) * 2) != (int)( iVar14 + ( uint ) * (ushort*)( (long)param_6 + 0x62 ) * -2 ) < 0) {
         iVar7 = ( (int)( ( ( uint )(local_100 >> 0x1f) & 1 ) + iVar14 ) >> 1 ) + 1;
      }
      *(int*)( (long)param_6 + 100 ) = iVar7;
      param_6[8] = param_3;
      param_6[0xb] = (long)puVar19 - (long)param_2 >> 2;
      param_6[9] = (long)local_b8 - (long)param_2 >> 2;
      if (local_c0 < puStack_b0) {
         local_c0 = puStack_b0;
      }
      param_6[10] = (long)local_c0 - (long)param_2 >> 2;
      if (( param_5 & 0x4000 ) == 0) {
         param_6[4] = param_2;
      } else {
         sVar17 = ( (long)(int)local_1f8 + param_3 ) * 4;
         pvVar10 = (void*)( *(code*)*param_6 )(sVar17, param_6[2]);
         param_6[4] = pvVar10;
         if (pvVar10 == (void*)0x0) goto LAB_0010bd0e;
         memcpy(pvVar10, param_2, sVar17);
         *(byte*)( (long)param_6 + 0x61 ) = *(byte*)( (long)param_6 + 0x61 ) | 1;
         iVar7 = *(int*)( (long)param_6 + 100 );
      }
      goto LAB_0010a7d8;
   }
   LAB_0010b023:do {
      puVar19 = puVar20 + 1;
      do {
         if (puVar1 <= puVar19) {
            puVar18 = (uint*)0x0;
            iVar7 = 0;
            param_6[3] = param_1;
            *(undefined1*)( param_6 + 0xc ) = 0;
            goto LAB_0010b097;
         }
         local_d8 = puVar19;
         iVar7 = _pcre2_valid_utf_32(puVar19, param_3 - ( (long)puVar19 - (long)param_2 >> 2 ), param_6 + 0xb);
         if (iVar7 == 0) {
            local_250 = 1;
            puVar20 = puVar1;
            local_d0 = puVar1;
            goto LAB_0010ae04;
         }
      } while ( -1 < iVar7 );
      puVar20 = puVar19 + param_6[0xb];
      local_d0 = puVar20;
   } while ( puVar20 <= puVar19 );
   local_250 = 3;
   goto LAB_0010ae04;
   LAB_0010b097:param_6[5] = local_a8._8_8_;
   if (( ( iVar7 + 2U & 0xfffffffd ) == 0 ) && ( iVar7 = -1 ),puVar18 != (uint*)0x0) {
      param_6[4] = param_2;
      iVar7 = -2;
      lVar21 = (long)puVar20 - (long)param_2 >> 2;
      param_6[8] = param_3;
      lVar11 = (long)puVar18 - (long)param_2 >> 2;
      param_6[0xe] = lVar21;
      param_6[0xd] = lVar11;
      param_6[0xb] = lVar11;
      param_6[10] = lVar21;
      param_6[9] = (long)local_228 - (long)param_2 >> 2;
   }
   *(int*)( (long)param_6 + 100 ) = iVar7;
   goto LAB_0010a7d8;
}
