undefined8 do_callout(undefined8 *param_1, long param_2, ulong *param_3) {
   undefined8 uVar1;
   short sVar2;
   ushort uVar3;
   short *psVar4;
   code *pcVar5;
   long lVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   long lVar9;
   psVar4 = (short*)*param_1;
   sVar2 = *psVar4;
   if (sVar2 == 0x76) {
      pcVar5 = *(code**)( param_2 + 0x108 );
      *param_3 = (ulong)DAT_0010f076;
   }
 else {
      pcVar5 = *(code**)( param_2 + 0x108 );
      *param_3 = (ulong)(ushort)psVar4[3];
   }

   if (pcVar5 != (code*)0x0) {
      lVar6 = *(long*)( param_2 + 0xf8 );
      *(ulong*)( lVar6 + 8 ) = CONCAT44(*(undefined4*)( (long)param_1 + 0x74 ), ( *(uint*)( param_1 + 0x10 ) >> 1 ) + 1);
      uVar1 = *(undefined8*)( param_2 + 0xb8 );
      *(undefined8**)( lVar6 + 0x10 ) = param_1 + 0xf;
      *(undefined8*)( lVar6 + 0x18 ) = uVar1;
      *(long*)( lVar6 + 0x38 ) = param_1[10] - *(long*)( param_2 + 0x78 ) >> 1;
      *(ulong*)( lVar6 + 0x40 ) = (ulong)(ushort)psVar4[1];
      *(ulong*)( lVar6 + 0x48 ) = (ulong)(ushort)psVar4[2];
      if (sVar2 == 0x76) {
         uVar3 = psVar4[3];
         *(undefined8*)( lVar6 + 0x50 ) = 0;
         *(undefined8*)( lVar6 + 0x60 ) = 0;
         *(uint*)( lVar6 + 4 ) = (uint)uVar3;
         lVar9 = 0;
      }
 else {
         uVar3 = psVar4[4];
         *(undefined4*)( lVar6 + 4 ) = 0;
         *(short**)( lVar6 + 0x60 ) = psVar4 + 6;
         *(ulong*)( lVar6 + 0x50 ) = (ulong)uVar3;
         lVar9 = *param_3 - 7;
      }

      *(long*)( lVar6 + 0x58 ) = lVar9;
      uVar1 = param_1[0xf];
      uVar7 = param_1[0x10];
      *(undefined4*)( param_1 + 0xf ) = 0xffffffff;
      *(undefined4*)( (long)param_1 + 0x7c ) = 0xffffffff;
      *(undefined4*)( param_1 + 0x10 ) = 0xffffffff;
      *(undefined4*)( (long)param_1 + 0x84 ) = 0xffffffff;
      uVar8 = ( *pcVar5 )(lVar6, *(undefined8*)( param_2 + 0x100 ));
      param_1[0xf] = uVar1;
      param_1[0x10] = uVar7;
      *(undefined4*)( lVar6 + 0x68 ) = 0;
      return uVar8;
   }

   return 0;
}
undefined8 match_ref(ulong param_1, int param_2, long param_3, long param_4, ulong *param_5) {
   long lVar1;
   ushort *__s2;
   uint uVar2;
   int iVar3;
   ushort *puVar4;
   ushort *puVar5;
   uint uVar6;
   uint *puVar7;
   ulong uVar8;
   ushort *puVar9;
   ulong uVar10;
   ushort *__s1;
   ushort *puVar11;
   ushort uVar12;
   ushort uVar13;
   if (( param_1 < *(ulong*)( param_3 + 0x80 ) ) && ( lVar1 = lVar1 != -1 )) {
      __s2 = *(ushort**)( param_3 + 0x50 );
      __s1 = (ushort*)( *(long*)( param_4 + 0x78 ) + lVar1 * 2 );
      uVar8 = *(long*)( param_3 + 0x90 + param_1 * 8 ) - lVar1;
      if (param_2 == 0) {
         if (*(short*)( param_4 + 0x60 ) == 0) {
            if (( ulong )(*(long*)( param_4 + 0x88 ) - (long)__s2 >> 1) < uVar8) {
               return 1;
            }

            iVar3 = memcmp(__s1, __s2, uVar8 * 2);
            if (iVar3 != 0) {
               return 0xffffffff;
            }

            uVar8 = (long)( uVar8 * 2 ) >> 1;
            goto LAB_0010027b;
         }

         if (uVar8 == 0) goto LAB_0010027b;
         uVar10 = 0;
         puVar4 = __s2;
         do {
            if (*(ushort**)( param_4 + 0x88 ) <= puVar4) {
               return 1;
            }

            puVar5 = puVar4 + 1;
            if (__s1[uVar10] != *puVar4) {
               return 0xffffffff;
            }

            uVar10 = uVar10 + 1;
            puVar4 = puVar5;
         }
 while ( uVar10 != uVar8 );
      }
 else {
         if (( *(uint*)( param_4 + 0xd8 ) & 0xa0000 ) != 0) {
            puVar4 = __s1 + uVar8;
            if (__s1 < puVar4) {
               puVar5 = __s2;
               do {
                  if (*(ushort**)( param_4 + 0x88 ) <= puVar5) {
                     return 1;
                  }

                  uVar12 = *puVar5;
                  uVar2 = (uint)uVar12;
                  uVar13 = *__s1;
                  uVar6 = (uint)uVar13;
                  puVar9 = puVar5 + 1;
                  puVar11 = __s1 + 1;
                  if (( *(uint*)( param_4 + 0xd8 ) & 0x80000 ) == 0) {
                     LAB_00100218:__s1 = puVar11;
                     if (uVar2 != uVar6) goto LAB_00100220;
                  }
 else {
                     if (( uVar12 & 0xfc00 ) != 0xd800) {
                        if (( uVar13 & 0xfc00 ) == 0xd800) goto LAB_0010036f;
                        goto LAB_00100218;
                     }

                     puVar9 = puVar5 + 2;
                     uVar2 = ( ( uVar12 & 0x3ff ) << 10 | puVar5[1] & 0x3ff ) + 0x10000;
                     if (( uVar13 & 0xfc00 ) == 0xd800) {
                        LAB_0010036f:puVar11 = __s1 + 2;
                        uVar6 = ( ( uVar13 & 0x3ff ) << 10 | __s1[1] & 0x3ff ) + 0x10000;
                        goto LAB_00100218;
                     }

                     LAB_00100220:__s1 = puVar11;
                     if (uVar6 + *(int*)( &DAT_0010f01c + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_16 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_16 + (long)( (int)uVar6 >> 7 ) * 2 ) * 0x80 + ( uVar6 & 0x7f ) ) * 2 ) * 0xc ) != uVar2) {
                        puVar7 = (uint*)( &_pcre2_ucd_caseless_sets_16 + ( ulong )(byte)(&DAT_0010f01b)[( ulong ) * (ushort*)( &_pcre2_ucd_stage2_16 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_16 + (long)( (int)uVar6 >> 7 ) * 2 ) * 0x80 + ( uVar6 & 0x7f ) ) * 2 ) * 0xc] * 4 );
                        do {
                           uVar6 = *puVar7;
                           if (uVar2 < uVar6) {
                              return 0xffffffff;
                           }

                           puVar7 = puVar7 + 1;
                        }
 while ( uVar6 != uVar2 );
                     }

                  }

                  puVar5 = puVar9;
               }
 while ( __s1 < puVar4 );
               uVar8 = (long)puVar9 - (long)__s2 >> 1;
               goto LAB_0010027b;
            }

            goto LAB_00100279;
         }

         if (uVar8 == 0) goto LAB_0010027b;
         uVar10 = 0;
         puVar5 = __s2;
         do {
            if (*(ushort**)( param_4 + 0x88 ) <= puVar5) {
               return 1;
            }

            uVar12 = *puVar5;
            uVar13 = __s1[uVar10];
            if (uVar13 < 0x100) {
               if (0xff < uVar12) {
                  return 0xffffffff;
               }

               uVar13 = ( ushort ) * (byte*)( *(long*)( param_4 + 0x38 ) + (ulong)uVar13 );
               uVar12 = ( ushort ) * (byte*)( *(long*)( param_4 + 0x38 ) + (ulong)uVar12 );
            }
 else if (uVar12 < 0x100) {
               return 0xffffffff;
            }

            if (uVar12 != uVar13) {
               return 0xffffffff;
            }

            uVar10 = uVar10 + 1;
            puVar5 = puVar5 + 1;
         }
 while ( uVar10 != uVar8 );
      }

      uVar8 = (long)puVar5 - (long)__s2 >> 1;
   }
 else {
      if (( *(byte*)( param_4 + 0xd9 ) & 2 ) == 0) {
         return 0xffffffff;
      }

      LAB_00100279:uVar8 = 0;
   }

   LAB_0010027b:*param_5 = uVar8;
   return 0;
}
/* WARNING: Type propagation algorithm not settling *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint match_constprop_0(ulong param_1, ushort *param_2, ushort param_3, ulong param_4, undefined8 *param_5, long param_6) {
   ushort uVar1;
   short sVar2;
   int iVar3;
   uint uVar4;
   int iVar5;
   short *psVar6;
   short *psVar7;
   ushort *puVar8;
   ulong uVar9;
   ulong uVar10;
   void *pvVar11;
   uint *puVar12;
   ushort *puVar13;
   uint *puVar14;
   ushort *puVar15;
   byte bVar16;
   ushort uVar17;
   void *pvVar18;
   ushort *puVar19;
   uint uVar20;
   ulong *puVar21;
   ulong uVar22;
   long lVar23;
   uint uVar24;
   uint uVar25;
   ushort uVar26;
   uint uVar27;
   uint uVar28;
   long *plVar29;
   ulong uVar30;
   ulong *puVar31;
   size_t sVar32;
   long in_FS_OFFSET;
   bool bVar33;
   bool bVar34;
   bool bVar35;
   ulong local_e0;
   ulong *local_d8;
   uint local_c8;
   ushort *local_c0;
   ulong *local_b8;
   size_t local_a0;
   long local_50;
   ulong local_48;
   long local_40;
   puVar31 = (ulong*)param_5[6];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar25 = *(uint*)( param_6 + 0xd8 );
   uVar24 = uVar25 & 0x80000;
   bVar34 = uVar24 != 0;
   uVar20 = 0;
   local_e0 = param_5[7] + (long)puVar31;
   *(undefined4*)( puVar31 + 6 ) = 0;
   uVar9 = _LC0;
   puVar31[0xc] = 0;
   puVar31[0xe] = uVar9;
   puVar31[10] = param_1;
   puVar31[0xb] = param_1;
   uVar9 = _UNK_0010e618;
   local_c8 = 0;
   local_c0 = (ushort*)0x0;
   local_b8 = (ulong*)0x0;
   local_d8 = (ulong*)0x0;
   puVar31[0xf] = __LC1;
   puVar31[0x10] = uVar9;
   LAB_00100550:*(uint*)( (long)puVar31 + 0x34 ) = uVar20;
   *puVar31 = (ulong)param_2;
   puVar31[4] = param_4;
   if (( uVar20 != 0 ) && ( puVar31[0xf] = (long)puVar31 - param_5[6](uVar20 & 0xffff0000) == 0x40000 )) {
      *(uint*)( puVar31 + 0xe ) = uVar20 & 0xffff;
   }

   uVar20 = *(uint*)( param_6 + 0x24 );
   *(uint*)( param_6 + 0x24 ) = uVar20 + 1;
   if (uVar20 < *(uint*)( param_6 + 0x1c )) {
      if ((uint)puVar31[6] < *(uint*)( param_6 + 0x20 )) {
         LAB_001005ba:puVar15 = (ushort*)*puVar31;
         uVar17 = *puVar15;
         uVar9 = (ulong)uVar17;
         bVar16 = (byte)uVar17;
         *(byte*)( (long)puVar31 + 0x49 ) = bVar16;
         puVar21 = puVar31;
         switch (bVar16) {
            case 0:
switchD_001005dc_caseD_0:
        uVar9 = puVar31[10];
        uVar30 = puVar31[0xb];
        if ((uVar9 == uVar30) &&
           (((*(uint *)(param_6 + 0xd4) & 4) != 0 ||
            (((*(uint *)(param_6 + 0xd4) & 8) != 0 &&
             (uVar9 == *(long *)(param_6 + 0x78) + *(long *)(param_6 + 0x50) * 2)))))) break;
        if ((*(ulong *)(param_6 + 0x88) <= uVar9) ||
           (((*(uint *)(param_6 + 0xd4) | *(uint *)(param_6 + 0xd8)) & 0x20000000) == 0)) {
          uVar10 = puVar31[0x10];
          *(ulong *)(param_6 + 0x98) = uVar9;
          *(ulong *)(param_6 + 0x58) = uVar10;
          *(ulong *)(param_6 + 0xb0) = puVar31[0xc];
          if (*(ulong *)(param_6 + 0xa8) < uVar9) {
            *(ulong *)(param_6 + 0xa8) = uVar9;
          }
          lVar23 = *(long *)(param_6 + 0x78);
          param_5[0xe] = (long)(uVar9 - lVar23) >> 1;
          uVar17 = *(ushort *)((long)param_5 + 0x62);
          param_5[0xd] = (long)(uVar30 - lVar23) >> 1;
          if (param_3 < uVar17) {
            uVar25 = (uint)param_3 * 2 + 2;
          }
          else {
            uVar25 = (uint)uVar17 + (uint)uVar17;
          }
          memcpy(param_5 + 0xf,puVar31 + 0x11,(ulong)(uVar25 - 2) << 3);
          uVar9 = puVar31[0x10];
          while( true ) {
            uVar25 = uVar25 - 1;
            if ((ulong)uVar25 < uVar9 + 2) break;
            param_5[(ulong)uVar25 + 0xd] = 0xffffffffffffffff;
          }
          uVar20 = 1;
          goto LAB_00101d0c;
        }
        if (bVar16 != 0) {
          uVar20 = 0;
          goto LAB_00101d0c;
        }
        break;
            case 1:
        if (puVar31[10] == *(ulong *)(param_6 + 0x78)) goto LAB_00101f21;
        break;
            case 2:
        if (puVar31[10] == *(long *)(param_6 + 0x78) + *(long *)(param_6 + 0x50) * 2)
        goto LAB_00101f21;
        break;
            case 3:
        puVar31[0xb] = puVar31[10];
LAB_00101f21:
        *puVar31 = (ulong)(puVar15 + 1);
        goto LAB_001005ba;
            case 4:
            case 5:
            case 0xa9:
            case 0xaa:
        puVar13 = (ushort *)puVar31[10];
        if (puVar13 == *(ushort **)(param_6 + 0x80)) {
LAB_001097bb:
          uVar28 = 0;
LAB_001031cc:
          puVar8 = *(ushort **)(param_6 + 0x88);
          if (puVar8 <= puVar13) goto LAB_001031dc;
          puVar19 = puVar13 + 1;
          if (uVar24 != 0) {
LAB_001083b3:
            puVar19 = puVar13 + 1;
            if ((puVar19 < puVar8) && ((puVar13[1] & 0xfc00) == 0xdc00)) {
              puVar19 = puVar13 + 2;
            }
            uVar26 = *puVar13;
            if ((uVar26 & 0xfc00) != 0xd800) goto LAB_00109756;
            uVar1 = puVar13[1];
            if (*(ushort **)(param_6 + 0xa8) < puVar19) {
              *(ushort **)(param_6 + 0xa8) = puVar19;
              if (1 < (byte)(bVar16 + 0x57)) goto LAB_0010840d;
LAB_0010a1d0:
              uVar20 = ((uVar26 & 0x3ff) << 10 | uVar1 & 0x3ff) + 0x10000;
              goto LAB_0010a1ec;
            }
            uVar27 = 0;
            if ((byte)(bVar16 + 0x57) < 2) goto LAB_0010a1d0;
            goto LAB_00103208;
          }
          uVar26 = *puVar13;
LAB_00109756:
          uVar20 = (uint)uVar26;
          if (*(ushort **)(param_6 + 0xa8) < puVar19) {
            *(ushort **)(param_6 + 0xa8) = puVar19;
          }
          if ((byte)(bVar16 + 0x57) < 2) {
LAB_0010a1ec:
            uVar27 = 1;
            if ((*(uint *)(&_pcre2_ucp_gentype_16 +
                          (ulong)(byte)(&DAT_0010f019)
                                       [(ulong)*(ushort *)
                                                (&_pcre2_ucd_stage2_16 +
                                                (long)(int)((uint)*(ushort *)
                                                                   (&_pcre2_ucd_stage1_16 +
                                                                   (long)((int)uVar20 >> 7) * 2) *
                                                            0x80 + (uVar20 & 0x7f)) * 2) * 0xc] * 4)
                & 0xfffffffd) != 1) {
              uVar27 = (uint)(((&DAT_0010f019)
                               [(ulong)*(ushort *)
                                        (&_pcre2_ucd_stage2_16 +
                                        (long)(int)((uint)*(ushort *)
                                                           (&_pcre2_ucd_stage1_16 +
                                                           (long)((int)uVar20 >> 7) * 2) * 0x80 +
                                                   (uVar20 & 0x7f)) * 2) * 0xc] - 0xc & 0xfb) == 0);
            }
            goto LAB_00103208;
          }
          if (0xff < uVar20) {
LAB_0010840d:
            *puVar31 = (ulong)(puVar15 + 1);
LAB_00108414:
            uVar27 = 0;
            uVar20 = 0;
            if (uVar17 != 5) goto LAB_00103222;
            goto LAB_00108420;
          }
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar20);
          *puVar31 = (ulong)(puVar15 + 1);
          if ((bVar16 & 0x10) == 0) goto LAB_00108414;
          uVar27 = 1;
          uVar20 = uVar27;
          if (uVar17 == 5) goto LAB_00108420;
        }
        else {
          puVar8 = puVar13 + -1;
          if (uVar24 == 0) {
            uVar26 = puVar13[-1];
LAB_00103193:
            uVar20 = (uint)uVar26;
            if (puVar8 < *(ushort **)(param_6 + 0xa0)) {
              *(ushort **)(param_6 + 0xa0) = puVar8;
            }
            if ((byte)(bVar16 + 0x57) < 2) {
LAB_00109d86:
              uVar28 = 1;
              if ((*(uint *)(&_pcre2_ucp_gentype_16 +
                            (ulong)(byte)(&DAT_0010f019)
                                         [(ulong)*(ushort *)
                                                  (&_pcre2_ucd_stage2_16 +
                                                  (long)(int)((uint)*(ushort *)
                                                                     (&_pcre2_ucd_stage1_16 +
                                                                     (long)((int)uVar20 >> 7) * 2) *
                                                              0x80 + (uVar20 & 0x7f)) * 2) * 0xc] *
                            4) & 0xfffffffd) != 1) {
                uVar28 = (uint)(((&DAT_0010f019)
                                 [(ulong)*(ushort *)
                                          (&_pcre2_ucd_stage2_16 +
                                          (long)(int)((uint)*(ushort *)
                                                             (&_pcre2_ucd_stage1_16 +
                                                             (long)((int)uVar20 >> 7) * 2) * 0x80 +
                                                     (uVar20 & 0x7f)) * 2) * 0xc] - 0xc & 0xfb) == 0
                               );
              }
            }
            else {
              if (0xff < uVar20) goto LAB_001097bb;
              uVar28 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar20) >> 4 & 1;
            }
            goto LAB_001031cc;
          }
          if ((puVar13[-1] & 0xfc00) == 0xdc00) {
            puVar8 = puVar13 + -2;
          }
          uVar26 = *puVar8;
          if ((uVar26 & 0xfc00) != 0xd800) goto LAB_00103193;
          uVar1 = puVar8[1];
          if (puVar8 < *(ushort **)(param_6 + 0xa0)) {
            *(ushort **)(param_6 + 0xa0) = puVar8;
            if (1 < (byte)(bVar16 + 0x57)) goto LAB_0010a9a2;
LAB_00109d6a:
            uVar20 = ((uVar26 & 0x3ff) << 10 | uVar1 & 0x3ff) + 0x10000;
            goto LAB_00109d86;
          }
          if ((byte)(bVar16 + 0x57) < 2) goto LAB_00109d6a;
LAB_0010a9a2:
          puVar8 = *(ushort **)(param_6 + 0x88);
          if (puVar13 < puVar8) {
            uVar28 = 0;
            goto LAB_001083b3;
          }
          uVar28 = 0;
LAB_001031dc:
          if (*(short *)(param_6 + 0x60) == 0) {
LAB_00103206:
            uVar27 = 0;
          }
          else if ((*(ushort **)(param_6 + 0xa0) < puVar13) ||
                  (uVar27 = *(uint *)(param_6 + 0x30), uVar27 != 0)) {
            *(undefined4 *)(param_6 + 0x28) = 1;
            if (*(short *)(param_6 + 0x60) == 1) goto LAB_00103206;
            goto LAB_00102f0a;
          }
LAB_00103208:
          *puVar31 = (ulong)(puVar15 + 1);
          uVar20 = uVar27;
          if ((uVar17 == 5) || (bVar16 == 0xaa)) {
LAB_00108420:
            if (uVar28 == uVar20) break;
            goto LAB_001005ba;
          }
        }
LAB_00103222:
        if (uVar28 == uVar27) goto LAB_001005ba;
        break;
            case 6:
        puVar13 = (ushort *)puVar31[10];
        if (puVar13 < *(ushort **)(param_6 + 0x88)) {
          puVar31[10] = (ulong)(puVar13 + 1);
          uVar17 = *puVar13;
          if ((uVar24 == 0) || ((uVar17 & 0xfc00) != 0xd800)) {
            if (uVar17 < 0x100) {
              bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar17) & 8;
joined_r0x00103f3b:
              if (bVar16 == 0) break;
            }
          }
          else {
LAB_00109bec:
            puVar31[10] = (ulong)(puVar13 + 2);
          }
          goto LAB_00103db9;
        }
LAB_0010524e:
        sVar2 = *(short *)(param_6 + 0x60);
        if (sVar2 != 0) {
          if (*(ushort **)(param_6 + 0xa0) < puVar13) goto LAB_00100609;
          goto LAB_00100602;
        }
        break;
            case 7:
        puVar13 = (ushort *)puVar31[10];
        if (*(ushort **)(param_6 + 0x88) <= puVar13) goto LAB_0010524e;
        puVar31[10] = (ulong)(puVar13 + 1);
        uVar17 = *puVar13;
        if ((uVar24 == 0) || ((uVar17 & 0xfc00) != 0xd800)) {
          if ((uVar17 < 0x100) && ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar17) & 8) != 0))
          goto LAB_00101f21;
        }
        else {
LAB_0010aa30:
          puVar31[10] = (ulong)(puVar13 + 2);
        }
        break;
            case 8:
        puVar13 = (ushort *)puVar31[10];
        if (*(ushort **)(param_6 + 0x88) <= puVar13) goto LAB_0010524e;
        puVar31[10] = (ulong)(puVar13 + 1);
        uVar17 = *puVar13;
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) goto LAB_00109bec;
        if (uVar17 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar17) & 1;
          goto joined_r0x00103f3b;
        }
        goto LAB_00103db9;
            case 9:
        puVar13 = (ushort *)puVar31[10];
        if (*(ushort **)(param_6 + 0x88) <= puVar13) goto LAB_0010524e;
        puVar31[10] = (ulong)(puVar13 + 1);
        uVar17 = *puVar13;
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) goto LAB_0010aa30;
        if (uVar17 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar17) & 1;
          goto joined_r0x00103f3b;
        }
        break;
            case 10:
        puVar13 = (ushort *)puVar31[10];
        if (*(ushort **)(param_6 + 0x88) <= puVar13) goto LAB_0010524e;
        puVar31[10] = (ulong)(puVar13 + 1);
        uVar17 = *puVar13;
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) goto LAB_00109bec;
        if (uVar17 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar17) & 0x10;
          goto joined_r0x00103f3b;
        }
        goto LAB_00103db9;
            case 0xb:
        puVar13 = (ushort *)puVar31[10];
        if (*(ushort **)(param_6 + 0x88) <= puVar13) goto LAB_0010524e;
        puVar31[10] = (ulong)(puVar13 + 1);
        uVar17 = *puVar13;
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) goto LAB_0010aa30;
        if (uVar17 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar17) & 0x10;
          goto joined_r0x00103f3b;
        }
        break;
            case 0xc:
        psVar6 = (short *)puVar31[10];
        if (*(int *)(param_6 + 0xe4) == 0) {
          psVar7 = *(short **)(param_6 + 0x88);
          if (((psVar7 + -(ulong)*(uint *)(param_6 + 0xe8) < psVar6) ||
              (*psVar6 != *(short *)(param_6 + 0xec))) ||
             ((*(uint *)(param_6 + 0xe8) != 1 && (psVar6[1] != *(short *)(param_6 + 0xee))))) {
LAB_0010814f:
            sVar2 = *(short *)(param_6 + 0x60);
            if (sVar2 != 0) goto LAB_00103e9f;
            if (psVar6 < psVar7) goto LAB_0010816b;
          }
        }
        else {
          psVar7 = *(short **)(param_6 + 0x88);
          if (psVar6 < psVar7) {
            iVar3 = _pcre2_is_newline_16
                              (psVar6,*(int *)(param_6 + 0xe4),psVar7,param_6 + 0xe8,bVar34);
            if (iVar3 == 0) {
              psVar6 = (short *)puVar31[10];
              psVar7 = *(short **)(param_6 + 0x88);
              goto LAB_0010814f;
            }
          }
          else {
            sVar2 = *(short *)(param_6 + 0x60);
            if (sVar2 != 0) {
LAB_00103e9f:
              if ((((psVar6 == psVar7 + -1) && (*(int *)(param_6 + 0xe4) == 0)) &&
                  (*(int *)(param_6 + 0xe8) == 2)) && (*psVar6 == *(short *)(param_6 + 0xec))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                if (sVar2 != 1) goto LAB_00102f0a;
                if (psVar7 <= psVar6) break;
              }
              else if (psVar7 <= psVar6) goto LAB_00103ebb;
LAB_0010816b:
              puVar31[10] = (ulong)(psVar6 + 1);
              if (((psVar6 + 1 < psVar7) && (bVar34)) && ((psVar6[1] & 0xfc00U) == 0xdc00)) {
                puVar31[10] = (ulong)(psVar6 + 2);
              }
              goto LAB_001038fa;
            }
          }
        }
        break;
            case 0xd:
        psVar6 = (short *)puVar31[10];
        psVar7 = *(short **)(param_6 + 0x88);
        if (psVar6 < psVar7) goto LAB_0010816b;
        sVar2 = *(short *)(param_6 + 0x60);
        if (sVar2 != 0) {
LAB_00103ebb:
          if ((*(short **)(param_6 + 0xa0) < psVar6) || (*(int *)(param_6 + 0x30) != 0)) {
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x001099c4;
          }
        }
        break;
            case 0xe:
        uVar9 = puVar31[10];
        if (*(ulong *)(param_6 + 0x88) <= uVar9) {
          sVar2 = *(short *)(param_6 + 0x60);
          if ((sVar2 == 0) ||
             ((uVar9 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0)))) break;
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x001099c4;
        }
        puVar31[10] = uVar9 + 2;
        *puVar31 = (ulong)(puVar15 + 1);
        goto LAB_001005ba;
            case 0xf:
            case 0x10:
        puVar13 = (ushort *)puVar31[10];
        if (*(ushort **)(param_6 + 0x88) <= puVar13) {
          sVar2 = *(short *)(param_6 + 0x60);
          if (sVar2 == 0) break;
          if (*(ushort **)(param_6 + 0xa0) < puVar13) goto LAB_00100609;
LAB_00100602:
          if (*(int *)(param_6 + 0x30) != 0) {
LAB_00100609:
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x001099c4;
          }
          break;
        }
        puVar31[10] = (ulong)(puVar13 + 1);
        uVar17 = *puVar13;
        uVar20 = (uint)uVar17;
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
          uVar26 = puVar13[1];
          puVar31[10] = (ulong)(puVar13 + 2);
          uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
        }
        lVar23 = (ulong)*(ushort *)
                         (&_pcre2_ucd_stage2_16 +
                         (long)(int)((uint)*(ushort *)
                                            (&_pcre2_ucd_stage1_16 + (long)((int)uVar20 >> 7) * 2) *
                                     0x80 + (uVar20 & 0x7f)) * 2) * 0xc;
        switch(puVar15[1]) {
        case 0:
          goto switchD_001094b9_caseD_0;
        case 1:
          bVar35 = (byte)((&DAT_0010f019)[lVar23] - 8) < 2 || (&DAT_0010f019)[lVar23] == '\x05';
          break;
        case 2:
          bVar35 = *(uint *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_0010f019)[lVar23] * 4) ==
                   (uint)puVar15[2];
          break;
        case 3:
          bVar35 = puVar15[2] == (ushort)(byte)(&DAT_0010f019)[lVar23];
          break;
        case 4:
          bVar35 = puVar15[2] == (ushort)(byte)(&_pcre2_ucd_records_16)[lVar23];
          break;
        case 5:
          uVar17 = puVar15[2];
          bVar35 = true;
          if (uVar17 != (byte)(&_pcre2_ucd_records_16)[lVar23]) {
            bVar35 = (1 << ((byte)uVar17 & 0x1f) &
                     *(uint *)(&_pcre2_ucd_script_sets_16 +
                              ((ulong)(*(ushort *)(&_pcre2_ucd_caseless_sets_16 + lVar23) & 0x3ff) +
                              (ulong)(uVar17 >> 5)) * 4)) != 0;
          }
          break;
        case 6:
          bVar35 = (*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_0010f019)[lVar23] * 4) &
                   0xfffffffd) == 1;
          break;
        case 7:
        case 8:
          if (uVar20 != 0x180e) {
            if (uVar20 < 0x180f) {
              if (uVar20 != 0x85) {
                if (uVar20 < 0x86) {
                  if (uVar20 < 0xe) {
                    if (uVar20 < 9) goto LAB_001095b6;
                  }
                  else if (uVar20 != 0x20) goto LAB_001095b6;
                }
                else if ((uVar20 != 0xa0) && (uVar20 != 0x1680)) goto LAB_001095b6;
              }
            }
            else if (uVar20 < 0x2060) {
              if (uVar20 < 0x2028) {
                if (10 < uVar20 - 0x2000) {
LAB_001095b6:
                  bVar35 = *(int *)(&_pcre2_ucp_gentype_16 +
                                   (ulong)(byte)(&DAT_0010f019)[lVar23] * 4) == 6;
                  break;
                }
              }
              else if ((0x80000000000083U >> ((ulong)(uVar20 - 0x2028) & 0x3f) & 1) == 0)
              goto LAB_001095b6;
            }
            else if (uVar20 != 0x3000) goto LAB_001095b6;
          }
          goto switchD_001094b9_caseD_0;
        case 9:
          bVar35 = (*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_0010f019)[lVar23] * 4) &
                   0xfffffffd) == 1 || ((&DAT_0010f019)[lVar23] - 0xc & 0xfb) == 0;
          break;
        case 10:
          puVar14 = (uint *)(&_pcre2_ucd_caseless_sets_16 + (ulong)puVar15[2] * 4);
          do {
            uVar28 = *puVar14;
            if (uVar20 < uVar28) goto joined_r0x00109541;
            puVar14 = puVar14 + 1;
          } while (uVar20 != uVar28);
switchD_001094b9_caseD_0:
joined_r0x00109541:
          if (bVar16 != 0xf) goto switchD_001005dc_caseD_a3;
          goto LAB_001094d5;
        case 0xb:
          if (((uVar20 & 0xffffffdf) == 0x40) || (uVar20 == 0x24)) {
            bVar35 = true;
          }
          else {
            bVar35 = uVar20 - 0xa0 < 0xd760 || 0xdfff < uVar20;
          }
          break;
        case 0xc:
          bVar35 = *(ushort *)(&_pcre2_ucd_caseless_sets_16 + lVar23) >> 0xb == puVar15[2];
          break;
        case 0xd:
          bVar35 = (1 << ((byte)puVar15[2] & 0x1f) &
                   *(uint *)(&_pcre2_ucd_boolprop_sets_16 +
                            ((ulong)(*(ushort *)(&DAT_0010f022 + lVar23) & 0xfff) +
                            (ulong)(puVar15[2] >> 5)) * 4)) != 0;
          break;
        default:
          goto switchD_001005dc_caseD_62;
        }
        if ((bVar16 == 0xf) == bVar35) break;
LAB_001094d5:
        puVar15 = puVar15 + 3;
        goto LAB_00103dbd;
            case 0x11:
        puVar13 = (ushort *)puVar31[10];
        puVar8 = *(ushort **)(param_6 + 0x88);
        if (puVar8 <= puVar13) goto LAB_0010524e;
        puVar19 = puVar13 + 1;
        uVar17 = *puVar13;
        puVar31[10] = (ulong)puVar19;
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) goto LAB_0010aa30;
        if (uVar17 == 0xd) {
          if (puVar19 < puVar8) {
            if (puVar13[1] == 10) goto LAB_00109bec;
          }
          else if ((*(short *)(param_6 + 0x60) != 0) &&
                  (((*(ushort **)(param_6 + 0xa0) < puVar19 || (*(int *)(param_6 + 0x30) != 0)) &&
                   (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
          goto LAB_00102f0a;
        }
        else {
          if (uVar17 < 0xe) {
            if (uVar17 == 10) goto LAB_00103db9;
            uVar17 = uVar17 - 0xb;
joined_r0x0010a817:
            if (1 < uVar17) break;
          }
          else if (uVar17 != 0x85) {
            uVar17 = uVar17 + 0xdfd8;
            goto joined_r0x0010a817;
          }
          if (*(short *)(param_6 + 0x62) == 2) break;
        }
LAB_00103db9:
        puVar15 = puVar15 + 1;
LAB_00103dbd:
        *puVar31 = (ulong)puVar15;
        goto LAB_001005ba;
            case 0x12:
        puVar13 = (ushort *)puVar31[10];
        if (puVar13 < *(ushort **)(param_6 + 0x88)) {
          puVar31[10] = (ulong)(puVar13 + 1);
          uVar17 = *puVar13;
          if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
            puVar31[10] = (ulong)(puVar13 + 2);
            goto LAB_00103db9;
          }
          if (uVar17 != 0x180e) {
            if (uVar17 < 0x180f) {
              if (uVar17 != 0xa0) {
                if (uVar17 < 0xa1) {
                  if ((uVar17 != 9) && (uVar17 != 0x20)) goto LAB_00103db9;
                }
                else if (uVar17 != 0x1680) goto LAB_00103db9;
              }
            }
            else if (uVar17 != 0x205f) {
              if (uVar17 < 0x2060) {
                if (uVar17 < 0x200b) {
                  if (uVar17 < 0x2000) goto LAB_00103db9;
                }
                else if (uVar17 != 0x202f) goto LAB_00103db9;
              }
              else {
joined_r0x0010b8a8:
                if (uVar17 == 0x3000) goto LAB_00103db9;
              }
            }
          }
        }
        else {
LAB_00108096:
          sVar2 = *(short *)(param_6 + 0x60);
          if (sVar2 != 0) {
            if (puVar13 <= *(ushort **)(param_6 + 0xa0)) goto LAB_00100602;
            goto LAB_00100609;
          }
        }
        break;
            case 0x13:
        puVar13 = (ushort *)puVar31[10];
        if (*(ushort **)(param_6 + 0x88) <= puVar13) goto LAB_00108096;
        puVar31[10] = (ulong)(puVar13 + 1);
        uVar17 = *puVar13;
        if ((uVar24 == 0) || ((uVar17 & 0xfc00) != 0xd800)) {
          if (uVar17 != 0x180e) {
            if (uVar17 < 0x180f) {
              if (uVar17 != 0xa0) {
                if (uVar17 < 0xa1) {
                  if ((uVar17 == 9) || (uVar17 == 0x20)) goto LAB_00103db9;
                }
                else if (uVar17 == 0x1680) goto LAB_00103db9;
                break;
              }
            }
            else if (uVar17 != 0x205f) {
              if (0x205f < uVar17) goto joined_r0x0010b8a8;
              if (uVar17 < 0x200b) {
                if (0x1fff < uVar17) goto LAB_00103db9;
              }
              else if (uVar17 == 0x202f) goto LAB_00103db9;
              break;
            }
          }
          goto LAB_00103db9;
        }
        puVar31[10] = (ulong)(puVar13 + 2);
        break;
            case 0x14:
        puVar13 = (ushort *)puVar31[10];
        if (*(ushort **)(param_6 + 0x88) <= puVar13) goto LAB_0010524e;
        puVar31[10] = (ulong)(puVar13 + 1);
        uVar17 = *puVar13;
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) goto LAB_00109bec;
        if (uVar17 != 0x85) {
          if (uVar17 < 0x86) {
            if (3 < (ushort)(uVar17 - 10)) goto LAB_00103db9;
          }
          else if (1 < (ushort)(uVar17 + 0xdfd8)) goto LAB_00103db9;
        }
        break;
            case 0x15:
        puVar13 = (ushort *)puVar31[10];
        if (*(ushort **)(param_6 + 0x88) <= puVar13) goto LAB_0010524e;
        puVar31[10] = (ulong)(puVar13 + 1);
        uVar17 = *puVar13;
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) goto LAB_0010aa30;
        if (uVar17 == 0x85) goto LAB_00103db9;
        if (uVar17 < 0x86) {
          if ((ushort)(uVar17 - 10) < 4) goto LAB_00103db9;
        }
        else if ((ushort)(uVar17 + 0xdfd8) < 2) goto LAB_00103db9;
        break;
            case 0x16:
        puVar15 = (ushort *)puVar31[10];
        if (puVar15 < *(ushort **)(param_6 + 0x88)) {
          uVar17 = *puVar15;
          uVar20 = (uint)uVar17;
          puVar31[10] = (ulong)(puVar15 + 1);
          if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
            uVar26 = puVar15[1];
            puVar31[10] = (ulong)(puVar15 + 2);
            uVar20 = (uVar26 & 0x3ff | (uVar17 & 0x3ff) << 10) + 0x10000;
          }
          uVar30 = _pcre2_extuni_16(uVar20,puVar31[10],*(undefined8 *)(param_6 + 0x78));
          uVar9 = *(ulong *)(param_6 + 0x88);
          puVar31[10] = uVar30;
          if ((((uVar30 < uVar9) || (*(short *)(param_6 + 0x60) == 0)) ||
              ((uVar30 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0)))) ||
             (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) == 1)) {
            puVar15 = (ushort *)*puVar31;
            goto LAB_00103db9;
          }
          goto LAB_00102f0a;
        }
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x001099c4;
        }
        break;
            case 0x17:
switchD_001005dc_caseD_17:
        psVar6 = (short *)puVar31[10];
        psVar7 = *(short **)(param_6 + 0x88);
        if (psVar7 <= psVar6) {
LAB_001038e0:
          if ((*(short *)(param_6 + 0x60) != 0) &&
             (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
          goto LAB_00102f0a;
LAB_001038fa:
          *puVar31 = *puVar31 + 2;
          goto LAB_001005ba;
        }
        if (*(int *)(param_6 + 0xe4) == 0) {
          if (((psVar6 <= psVar7 + -(ulong)*(uint *)(param_6 + 0xe8)) &&
              (*psVar6 == *(short *)(param_6 + 0xec))) &&
             ((*(uint *)(param_6 + 0xe8) == 1 || (psVar6[1] == *(short *)(param_6 + 0xee))))) {
LAB_001038ca:
            if ((short *)puVar31[10] == psVar7 + -(ulong)*(uint *)(param_6 + 0xe8))
            goto LAB_001038e0;
          }
        }
        else {
          iVar3 = _pcre2_is_newline_16(psVar6,*(int *)(param_6 + 0xe4),psVar7,param_6 + 0xe8,bVar34)
          ;
          if (iVar3 != 0) {
            psVar7 = *(short **)(param_6 + 0x88);
            goto LAB_001038ca;
          }
        }
        sVar2 = *(short *)(param_6 + 0x60);
        if (((sVar2 != 0) &&
            (((*(short **)(param_6 + 0x88) <= (short *)puVar31[10] + 1 &&
              (*(int *)(param_6 + 0xe4) == 0)) && (*(int *)(param_6 + 0xe8) == 2)))) &&
           (*(short *)puVar31[10] == *(short *)(param_6 + 0xec))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x001099c4;
        }
        break;
            case 0x18:
switchD_001005dc_caseD_18:
        if (*(ulong *)(param_6 + 0x90) <= puVar31[10]) {
          if ((*(short *)(param_6 + 0x60) == 0) ||
             (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) == 1))
          goto LAB_00101f21;
          goto LAB_00102f0a;
        }
        break;
            case 0x19:
        if ((*(byte *)(param_6 + 0xd4) & 2) == 0) {
          if ((*(byte *)(param_6 + 0xd8) & 0x10) != 0) goto switchD_001005dc_caseD_18;
          goto switchD_001005dc_caseD_17;
        }
        break;
            case 0x1a:
        psVar6 = (short *)puVar31[10];
        psVar7 = *(short **)(param_6 + 0x88);
        if (psVar6 < psVar7) {
          if (*(int *)(param_6 + 0xe4) == 0) {
            if (((psVar7 + -(ulong)*(uint *)(param_6 + 0xe8) < psVar6) ||
                (*psVar6 != *(short *)(param_6 + 0xec))) ||
               ((*(uint *)(param_6 + 0xe8) != 1 && (psVar6[1] != *(short *)(param_6 + 0xee)))))
            goto LAB_0010429c;
            goto LAB_001038fa;
          }
          iVar3 = _pcre2_is_newline_16(psVar6,*(int *)(param_6 + 0xe4),psVar7,param_6 + 0xe8,bVar34)
          ;
          if (iVar3 != 0) goto LAB_001038fa;
LAB_0010429c:
          sVar2 = *(short *)(param_6 + 0x60);
          if ((((sVar2 == 0) || ((short *)puVar31[10] + 1 < *(short **)(param_6 + 0x88))) ||
              (*(int *)(param_6 + 0xe4) != 0)) ||
             ((*(int *)(param_6 + 0xe8) != 2 ||
              (*(short *)puVar31[10] != *(short *)(param_6 + 0xec))))) break;
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00107f3c;
        }
        if ((*(byte *)(param_6 + 0xd4) & 2) != 0) break;
        if (((*(short *)(param_6 + 0x60) == 0) ||
            ((psVar6 <= *(short **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0)))) ||
           (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) == 1))
        goto LAB_001038fa;
        goto LAB_00102f0a;
            case 0x1b:
        if ((puVar31[10] == *(ulong *)(param_6 + 0x78)) && ((*(byte *)(param_6 + 0xd4) & 1) == 0))
        goto LAB_00101f21;
        break;
            case 0x1c:
        uVar9 = puVar31[10];
        uVar30 = *(ulong *)(param_6 + 0x78);
        if ((*(byte *)(param_6 + 0xd4) & 1) == 0) {
          if (uVar9 == uVar30) goto LAB_001038fa;
        }
        else if (uVar9 == uVar30) break;
        if ((uVar9 != *(ulong *)(param_6 + 0x88)) || ((*(byte *)(param_6 + 0xda) & 0x20) != 0)) {
          if (*(int *)(param_6 + 0xe4) == 0) {
            uVar10 = (ulong)*(uint *)(param_6 + 0xe8);
            if (((uVar9 < uVar30 + uVar10 * 2) ||
                (*(short *)(uVar9 + uVar10 * -2) != *(short *)(param_6 + 0xec))) ||
               ((*(uint *)(param_6 + 0xe8) != 1 &&
                (*(short *)(uVar9 + (1 - uVar10) * 2) != *(short *)(param_6 + 0xee))))) break;
          }
          else if ((uVar9 <= uVar30) ||
                  (iVar3 = _pcre2_was_newline_16
                                     (uVar9,*(int *)(param_6 + 0xe4),uVar30,param_6 + 0xe8),
                  iVar3 == 0)) break;
          goto LAB_001038fa;
        }
        break;
            case 0x1d:
        if (uVar24 == 0) {
          puVar13 = (ushort *)puVar31[10];
          if (*(ushort **)(param_6 + 0x88) == puVar13 ||
              (long)*(ushort **)(param_6 + 0x88) - (long)puVar13 < 0) {
            sVar2 = *(short *)(param_6 + 0x60);
            if ((sVar2 != 0) &&
               ((*(ushort **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
              *(undefined4 *)(param_6 + 0x28) = 1;
              goto joined_r0x001099c4;
            }
          }
          else {
            uVar17 = puVar15[1];
            puVar31[10] = (ulong)(puVar13 + 1);
            if (uVar17 == *puVar13) goto LAB_00103a9f;
          }
        }
        else {
          *puVar31 = (ulong)(puVar15 + 1);
          puVar13 = (ushort *)puVar31[10];
          uVar9 = (ulong)((puVar15[1] & 0xfc00) == 0xd800) + 1;
          puVar31[3] = uVar9;
          if (uVar9 <= (ulong)((long)*(ushort **)(param_6 + 0x88) - (long)puVar13 >> 1)) {
            puVar15 = puVar15 + 2;
            do {
              puVar8 = puVar15;
              puVar19 = puVar13 + 1;
              if (puVar8[-1] != *puVar13) {
                *puVar31 = (ulong)puVar8;
                puVar31[10] = (ulong)puVar19;
                goto switchD_001005dc_caseD_a3;
              }
              uVar9 = uVar9 - 1;
              puVar31[3] = uVar9;
              puVar15 = puVar8 + 1;
              puVar13 = puVar19;
            } while (uVar9 != 0);
            *puVar31 = (ulong)puVar8;
            puVar31[10] = (ulong)puVar19;
            goto LAB_001005ba;
          }
          if (((*(ushort **)(param_6 + 0x88) <= puVar13) &&
              (sVar2 = *(short *)(param_6 + 0x60), sVar2 != 0)) &&
             ((*(ushort **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x001099c4;
          }
         }

         break;
         case 0x1e:
        puVar13 = (ushort *)puVar31[10];
        if (puVar13 < *(ushort **)(param_6 + 0x88)) {
          if (uVar24 == 0) {
            if ((uVar25 & 0x20000) == 0) {
              uVar17 = puVar15[1];
              if (uVar17 < 0x100) {
                uVar17 = (ushort)*(byte *)(*(long *)(param_6 + 0x38) + (ulong)uVar17);
                if (*puVar13 < 0x100) {
                  uVar26 = (ushort)*(byte *)(*(long *)(param_6 + 0x38) + (ulong)*puVar13);
LAB_0010a9ed:
                  if (uVar26 == uVar17) goto LAB_00109f9b;
                }
              }
              else {
                uVar26 = *puVar13;
                if (0xff < uVar26) goto LAB_0010a9ed;
              }
            }
            else {
              uVar17 = puVar15[1];
              uVar26 = *puVar13;
              if (uVar17 < 0x80) {
                if ((uVar26 < 0x100) &&
                   (*(char *)(*(long *)(param_6 + 0x38) + (ulong)uVar17) ==
                    *(char *)(*(long *)(param_6 + 0x38) + (ulong)uVar26))) {
LAB_00109f9b:
                  puVar31[10] = (ulong)(puVar13 + 1);
                  goto LAB_00103a9f;
                }
              }
              else {
                uVar20 = (uint)uVar17;
                if ((uVar26 == uVar20) ||
                   (uVar20 + *(int *)(&DAT_0010f01c +
                                     (ulong)*(ushort *)
                                             (&_pcre2_ucd_stage2_16 +
                                             (long)(int)((uint)*(ushort *)
                                                                (&_pcre2_ucd_stage1_16 +
                                                                (long)((int)uVar20 >> 7) * 2) * 0x80
                                                        + (uVar17 & 0x7f)) * 2) * 0xc) ==
                    (uint)uVar26)) goto LAB_00109f9b;
              }
            }
          }
          else {
            uVar17 = puVar15[1];
            uVar20 = (uint)uVar17;
            puVar31[3] = 1;
            *puVar31 = (ulong)(puVar15 + 1);
            if ((uVar17 & 0xfc00) == 0xd800) {
              uVar26 = puVar15[2];
              puVar31[3] = 2;
              uVar20 = (uVar26 & 0x3ff | (uVar17 & 0x3ff) << 10) + 0x10000;
            }
            else if (uVar17 < 0x80) {
              if ((0xff < *puVar13) ||
                 (*(char *)(*(long *)(param_6 + 0x38) + (ulong)uVar17) !=
                  *(char *)(*(long *)(param_6 + 0x38) + (ulong)*puVar13))) break;
              *puVar31 = (ulong)(puVar15 + 2);
              puVar31[10] = (ulong)(puVar13 + 1);
              goto LAB_001005ba;
            }
            uVar17 = *puVar13;
            uVar28 = (uint)uVar17;
            puVar31[10] = (ulong)(puVar13 + 1);
            if ((uVar17 & 0xfc00) == 0xd800) {
              uVar26 = puVar13[1];
              puVar31[10] = (ulong)(puVar13 + 2);
              uVar28 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
            }
            *puVar31 = (ulong)(puVar15 + 1 + puVar31[3]);
            if ((uVar28 == uVar20) ||
               (uVar28 == uVar20 + *(int *)(&DAT_0010f01c +
                                           (ulong)*(ushort *)
                                                   (&_pcre2_ucd_stage2_16 +
                                                   (long)(int)((uint)*(ushort *)
                                                                      (&_pcre2_ucd_stage1_16 +
                                                                      (long)((int)uVar20 >> 7) * 2)
                                                               * 0x80 + (uVar20 & 0x7f)) * 2) * 0xc)
               )) goto LAB_001005ba;
          }
        }
        else {
          sVar2 = *(short *)(param_6 + 0x60);
          if ((sVar2 != 0) &&
             ((*(ushort **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x001099c4;
          }
        }
        break;
         case 0x1f:
         case 0x20:
        puVar13 = (ushort *)puVar31[10];
        if (puVar13 < *(ushort **)(param_6 + 0x88)) {
          if (uVar24 == 0) {
            if ((uVar25 & 0x20000) == 0) {
              uVar17 = puVar15[1];
              puVar31[10] = (ulong)(puVar13 + 1);
              if ((uVar17 != *puVar13) &&
                 (((0xff < uVar17 || (bVar16 != 0x20)) ||
                  (*puVar13 != (ushort)*(byte *)(*(long *)(param_6 + 0x40) + (ulong)uVar17)))))
              goto LAB_00103a9f;
            }
            else {
              uVar17 = *puVar13;
              puVar31[10] = (ulong)(puVar13 + 1);
              uVar26 = puVar15[1];
              *puVar31 = (ulong)(puVar15 + 2);
              if ((uint)uVar17 != (uint)uVar26) {
                if (bVar16 != 0x20) goto LAB_001005ba;
                if (uVar26 < 0x80) {
                  uVar20 = (uint)*(byte *)(*(long *)(param_6 + 0x40) + (ulong)(uint)uVar26);
                }
                else {
                  uVar20 = (uint)uVar26 +
                           *(int *)(&DAT_0010f01c +
                                   (ulong)*(ushort *)
                                           (&_pcre2_ucd_stage2_16 +
                                           (long)(int)((uint)*(ushort *)
                                                              (&_pcre2_ucd_stage1_16 +
                                                              (long)((int)(uint)uVar26 >> 7) * 2) *
                                                       0x80 + (uVar26 & 0x7f)) * 2) * 0xc);
                }
                if (uVar17 != uVar20) goto LAB_001005ba;
              }
            }
          }
          else {
            uVar17 = puVar15[1];
            uVar20 = (uint)uVar17;
            *puVar31 = (ulong)(puVar15 + 2);
            if ((uVar17 & 0xfc00) == 0xd800) {
              uVar26 = puVar15[2];
              *puVar31 = (ulong)(puVar15 + 3);
              uVar1 = *puVar13;
              uVar28 = (uint)uVar1;
              uVar20 = (uVar26 & 0x3ff | (uVar17 & 0x3ff) << 10) + 0x10000;
              puVar31[10] = (ulong)(puVar13 + 1);
              if ((uVar1 & 0xfc00) == 0xd800) goto LAB_0010abf0;
              if (bVar16 != 0x20) goto LAB_001005ba;
LAB_0010ac5a:
              uVar20 = uVar20 + *(int *)(&DAT_0010f01c +
                                        (ulong)*(ushort *)
                                                (&_pcre2_ucd_stage2_16 +
                                                (long)(int)((uint)*(ushort *)
                                                                   (&_pcre2_ucd_stage1_16 +
                                                                   (long)((int)uVar20 >> 7) * 2) *
                                                            0x80 + (uVar20 & 0x7f)) * 2) * 0xc);
            }
            else {
              uVar17 = *puVar13;
              uVar28 = (uint)uVar17;
              puVar31[10] = (ulong)(puVar13 + 1);
              if ((uVar17 & 0xfc00) == 0xd800) {
LAB_0010abf0:
                puVar31[10] = (ulong)(puVar13 + 2);
                uVar28 = ((uVar28 & 0x3ff) << 10 | puVar13[1] & 0x3ff) + 0x10000;
              }
              if (uVar28 == uVar20) break;
              if (bVar16 != 0x20) goto LAB_001005ba;
              if (0x7f < uVar20) goto LAB_0010ac5a;
              uVar20 = (uint)*(byte *)(*(long *)(param_6 + 0x40) + (ulong)uVar20);
            }
            if (uVar20 != uVar28) goto LAB_001005ba;
          }
        }
        else {
          sVar2 = *(short *)(param_6 + 0x60);
          if ((sVar2 != 0) &&
             ((*(ushort **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)))) {
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x001099c4;
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
        *puVar31 = (ulong)(puVar15 + 1);
        uVar9 = (ulong)((uint)uVar17 - ((-(uint)(bVar16 < 0x2e) & 0xfffffff3) + 0x2e));
        local_c8 = *(uint *)(rep_typ + uVar9 * 4);
        puVar31[7] = CONCAT44(*(undefined4 *)(rep_max + uVar9 * 4),
                              *(undefined4 *)(rep_min + uVar9 * 4));
        goto LAB_00102e47;
         case 0x27:
         case 0x34:
        uVar17 = puVar15[1];
        *(undefined4 *)(puVar31 + 7) = 0;
        *puVar31 = (ulong)(puVar15 + 2);
        *(uint *)((long)puVar31 + 0x3c) = (uint)uVar17;
        local_c8 = 1;
        goto LAB_00102e47;
         case 0x28:
         case 0x35:
        uVar17 = puVar15[1];
        *(undefined4 *)(puVar31 + 7) = 0;
        *puVar31 = (ulong)(puVar15 + 2);
        *(uint *)((long)puVar31 + 0x3c) = (uint)uVar17;
        local_c8 = 0;
        goto LAB_00102e47;
         case 0x29:
         case 0x36:
        uVar17 = puVar15[1];
        *puVar31 = (ulong)(puVar15 + 2);
        puVar31[7] = (ulong)CONCAT24(uVar17,(uint)uVar17);
        goto LAB_00102e47;
         case 0x2a:
         case 0x37:
        puVar15 = puVar15 + 1;
        puVar31[7] = _LC2;
        goto LAB_0010351c;
         case 0x2b:
         case 0x38:
        puVar15 = puVar15 + 1;
        puVar31[7] = _LC3;
        goto LAB_0010351c;
         case 0x2c:
         case 0x39:
        puVar15 = puVar15 + 1;
        puVar31[7] = _LC4;
        goto LAB_0010351c;
         case 0x2d:
         case 0x3a:
        uVar17 = puVar15[1];
        *(undefined4 *)(puVar31 + 7) = 0;
        puVar15 = puVar15 + 2;
        *(uint *)((long)puVar31 + 0x3c) = (uint)uVar17;
LAB_0010351c:
        *puVar31 = (ulong)puVar15;
        local_c8 = 2;
LAB_00102e47:
        if (uVar24 == 0) {
          puVar15 = (ushort *)*puVar31;
          *puVar31 = (ulong)(puVar15 + 1);
          uVar17 = *puVar15;
          *(uint *)(puVar31 + 8) = (uint)uVar17;
joined_r0x00102e87:
          if (bVar16 < 0x2e) {
            uVar20 = (uint)puVar31[7];
            if (uVar20 == 0) {
              uVar28 = *(uint *)((long)puVar31 + 0x3c);
              if (uVar28 == 0) goto LAB_001005ba;
              if (local_c8 != 0) {
                puVar15 = (ushort *)puVar31[10];
                puVar13 = *(ushort **)(param_6 + 0x88);
                puVar31[1] = (ulong)puVar15;
                goto LAB_001078f9;
              }
            }
            else {
              puVar13 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar8 = (ushort *)puVar31[10];
                if (puVar13 <= puVar8) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar8 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar15 = puVar8 + 1;
                uVar26 = *puVar8;
                puVar31[10] = (ulong)puVar15;
                if (uVar26 != uVar17) goto switchD_001005dc_caseD_a3;
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              uVar28 = *(uint *)((long)puVar31 + 0x3c);
              if (uVar28 == uVar20) goto LAB_001005ba;
              if (local_c8 != 0) {
                puVar31[1] = (ulong)puVar15;
                if (uVar28 <= uVar20) goto LAB_0010a44d;
LAB_001078f9:
                do {
                  if (puVar13 <= puVar15) {
                    if ((*(short *)(param_6 + 0x60) != 0) &&
                       (((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))
                        && (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
                    goto LAB_00102f0a;
                    break;
                  }
                  if (*puVar15 != uVar17) break;
                  puVar15 = puVar15 + 1;
                  uVar20 = uVar20 + 1;
                  puVar31[10] = (ulong)puVar15;
                } while (uVar20 < uVar28);
                if (local_c8 == 2) goto LAB_00106c34;
LAB_00100ae1:
                if (puVar31[1] < puVar31[10]) {
                  *(undefined1 *)(puVar31 + 9) = 0x1c;
                  param_2 = (ushort *)*puVar31;
                  uVar20 = 0;
                  puVar21 = puVar31;
                  goto LAB_00101cc8;
                }
                goto LAB_001005ba;
              }
            }
            local_c8 = 0;
LAB_00102b08:
            *(undefined1 *)(puVar31 + 9) = 0x1b;
            param_2 = (ushort *)*puVar31;
            uVar20 = 0;
            puVar21 = puVar31;
            goto LAB_00101cc8;
          }
          uVar20 = (uint)uVar17;
          if ((uVar25 & 0xa0000) == 0) {
            uVar28 = uVar20;
            if (uVar20 < 0x100) goto LAB_00106ebf;
          }
          else if (uVar20 < 0x80) {
LAB_00106ebf:
            uVar28 = (uint)*(byte *)(*(long *)(param_6 + 0x40) + (ulong)uVar20);
          }
          else {
            uVar28 = *(int *)(&DAT_0010f01c +
                             (ulong)*(ushort *)
                                     (&_pcre2_ucd_stage2_16 +
                                     (long)(int)((uint)*(ushort *)
                                                        (&_pcre2_ucd_stage1_16 +
                                                        (long)((int)uVar20 >> 7) * 2) * 0x80 +
                                                (uVar20 & 0x7f)) * 2) * 0xc) + uVar20;
          }
          uVar27 = (uint)puVar31[7];
          *(uint *)((long)puVar31 + 0x44) = uVar28;
          if (uVar27 == 0) {
            uVar4 = *(uint *)((long)puVar31 + 0x3c);
            if (uVar4 == 0) goto LAB_001005ba;
            if (local_c8 == 0) {
LAB_0010bb57:
              local_c8 = 0;
LAB_00102a89:
              *(undefined1 *)(puVar31 + 9) = 0x19;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            }
            puVar13 = (ushort *)puVar31[10];
            puVar15 = *(ushort **)(param_6 + 0x88);
            puVar31[1] = (ulong)puVar13;
          }
          else {
            puVar15 = *(ushort **)(param_6 + 0x88);
            uVar4 = 1;
            do {
              puVar13 = (ushort *)puVar31[10];
              if (puVar15 <= puVar13) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 == 0) ||
                   ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_001005dc_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              if ((*puVar13 != uVar20) && (*puVar13 != uVar28)) goto switchD_001005dc_caseD_a3;
              puVar13 = puVar13 + 1;
              uVar4 = uVar4 + 1;
              puVar31[10] = (ulong)puVar13;
            } while (uVar4 <= uVar27);
            uVar4 = *(uint *)((long)puVar31 + 0x3c);
            if (uVar4 == uVar27) goto LAB_001005ba;
            if (local_c8 == 0) goto LAB_0010bb57;
            puVar31[1] = (ulong)puVar13;
            if (uVar4 <= uVar27) goto LAB_0010a44d;
          }
          do {
            if (puVar15 <= puVar13) {
              if ((*(short *)(param_6 + 0x60) != 0) &&
                 (((*(ushort **)(param_6 + 0xa0) < puVar13 || (*(int *)(param_6 + 0x30) != 0)) &&
                  (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
              goto LAB_00102f0a;
              break;
            }
            if ((*puVar13 != uVar20) && (*puVar13 != uVar28)) break;
            puVar13 = puVar13 + 1;
            uVar27 = uVar27 + 1;
            puVar31[10] = (ulong)puVar13;
          } while (uVar27 < uVar4);
          if (local_c8 != 2) {
LAB_00100b81:
            if (puVar31[10] != puVar31[1]) {
              *(undefined1 *)(puVar31 + 9) = 0x1a;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            }
            goto LAB_001005ba;
          }
        }
        else {
          puVar15 = (ushort *)*puVar31;
          puVar31[3] = 1;
          uVar17 = *puVar15;
          puVar31[2] = (ulong)puVar15;
          if ((uVar17 & 0xfc00) != 0xd800) {
            *(uint *)(puVar31 + 8) = (uint)uVar17;
            *puVar31 = (ulong)(puVar15 + 1);
            goto joined_r0x00102e87;
          }
          uVar26 = puVar15[1];
          uVar9 = 0;
          puVar31[3] = 2;
          *puVar31 = (ulong)(puVar15 + 2);
          if (0x2d < bVar16) {
            uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
            if (uVar20 != *(int *)(&DAT_0010f01c +
                                  (ulong)*(ushort *)
                                          (&_pcre2_ucd_stage2_16 +
                                          (long)(int)((uint)*(ushort *)
                                                             (&_pcre2_ucd_stage1_16 +
                                                             (long)((int)uVar20 >> 7) * 2) * 0x80 +
                                                     (uVar20 & 0x7f)) * 2) * 0xc) + uVar20) {
              uVar20 = _pcre2_ord2utf_16(*(int *)(&DAT_0010f01c +
                                                 (ulong)*(ushort *)
                                                         (&_pcre2_ucd_stage2_16 +
                                                         (long)(int)((uint)*(ushort *)
                                                                            (&_pcre2_ucd_stage1_16 +
                                                                            (long)((int)uVar20 >> 7)
                                                                            * 2) * 0x80 +
                                                                    (uVar20 & 0x7f)) * 2) * 0xc) +
                                         uVar20,(long)puVar31 + 0x4a);
              uVar9 = (ulong)uVar20;
            }
          }
          uVar20 = (uint)puVar31[7];
          puVar31[5] = uVar9;
          if (uVar20 == 0) {
            uVar28 = *(uint *)((long)puVar31 + 0x3c);
            if (uVar28 == 0) goto LAB_001005ba;
            if (local_c8 == 0) {
LAB_0010bb7b:
              local_c8 = 0;
LAB_00101a7b:
              *(undefined1 *)(puVar31 + 9) = 0xca;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            }
            pvVar18 = (void *)puVar31[10];
            pvVar11 = *(void **)(param_6 + 0x88);
            uVar30 = puVar31[3];
            puVar31[1] = (ulong)pvVar18;
LAB_001098d1:
            do {
              if ((((void *)((long)pvVar11 + uVar30 * -2) < pvVar18) ||
                  (iVar3 = memcmp(pvVar18,(void *)puVar31[2],uVar30 * 2), sVar32 = uVar30 * 2,
                  iVar3 != 0)) &&
                 ((uVar9 == 0 ||
                  (((void *)((long)pvVar11 + uVar9 * -2) < pvVar18 ||
                   (iVar3 = memcmp(pvVar18,(void *)((long)puVar31 + 0x4a),uVar9 * 2),
                   sVar32 = uVar9 * 2, iVar3 != 0)))))) {
                if ((pvVar11 <= pvVar18) &&
                   ((*(short *)(param_6 + 0x60) != 0 &&
                    (((*(void **)(param_6 + 0xa0) < pvVar18 || (*(int *)(param_6 + 0x30) != 0)) &&
                     (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))))
                goto LAB_00102f0a;
                break;
              }
              pvVar18 = (void *)((long)pvVar18 + sVar32);
              uVar20 = uVar20 + 1;
              puVar31[10] = (ulong)pvVar18;
            } while (uVar20 < uVar28);
            if (local_c8 != 2) {
LAB_0010199e:
              if (puVar31[1] < puVar31[10]) {
                *(undefined1 *)(puVar31 + 9) = 0xcb;
                param_2 = (ushort *)*puVar31;
                uVar20 = 0;
                puVar21 = puVar31;
                goto LAB_00101cc8;
              }
              goto LAB_001005ba;
            }
          }
          else {
            pvVar11 = *(void **)(param_6 + 0x88);
            uVar30 = puVar31[3];
            uVar28 = 1;
            do {
              pvVar18 = (void *)puVar31[10];
              if ((((void *)((long)pvVar11 + uVar30 * -2) < pvVar18) ||
                  (iVar3 = memcmp(pvVar18,(void *)puVar31[2],uVar30 * 2), sVar32 = uVar30 * 2,
                  iVar3 != 0)) &&
                 ((uVar9 == 0 ||
                  (((void *)((long)pvVar11 + uVar9 * -2) < pvVar18 ||
                   (iVar3 = memcmp(pvVar18,(void *)((long)puVar31 + 0x4a),uVar9 * 2),
                   sVar32 = uVar9 * 2, iVar3 != 0)))))) {
                if ((pvVar18 < pvVar11) ||
                   ((sVar2 = *(short *)(param_6 + 0x60), sVar2 == 0 ||
                    ((pvVar18 <= *(void **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))))
                goto switchD_001005dc_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              pvVar18 = (void *)((long)pvVar18 + sVar32);
              uVar28 = uVar28 + 1;
              puVar31[10] = (ulong)pvVar18;
            } while (uVar28 <= uVar20);
            uVar28 = *(uint *)((long)puVar31 + 0x3c);
            if (uVar28 == uVar20) goto LAB_001005ba;
            if (local_c8 == 0) goto LAB_0010bb7b;
            puVar31[1] = (ulong)pvVar18;
            if (uVar20 < uVar28) goto LAB_001098d1;
LAB_0010a44d:
            if (local_c8 != 2) goto LAB_001005ba;
          }
        }
        goto LAB_00106c34;
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
        *puVar31 = (ulong)(puVar15 + 1);
        uVar9 = (ulong)((uint)uVar17 - ((-(uint)(bVar16 < 0x48) & 0xfffffff3) + 0x48));
        local_c8 = *(uint *)(rep_typ + uVar9 * 4);
        puVar31[7] = CONCAT44(*(undefined4 *)(rep_max + uVar9 * 4),
                              *(undefined4 *)(rep_min + uVar9 * 4));
        goto LAB_00102d17;
         case 0x41:
         case 0x4e:
        uVar17 = puVar15[1];
        *(undefined4 *)(puVar31 + 7) = 0;
        *puVar31 = (ulong)(puVar15 + 2);
        *(uint *)((long)puVar31 + 0x3c) = (uint)uVar17;
        local_c8 = 1;
        goto LAB_00102d17;
         case 0x42:
         case 0x4f:
        uVar17 = puVar15[1];
        *(undefined4 *)(puVar31 + 7) = 0;
        *puVar31 = (ulong)(puVar15 + 2);
        *(uint *)((long)puVar31 + 0x3c) = (uint)uVar17;
        local_c8 = 0;
        goto LAB_00102d17;
         case 0x43:
         case 0x50:
        uVar17 = puVar15[1];
        *puVar31 = (ulong)(puVar15 + 2);
        puVar31[7] = (ulong)CONCAT24(uVar17,(uint)uVar17);
        goto LAB_00102d17;
         case 0x44:
         case 0x51:
        puVar15 = puVar15 + 1;
        puVar31[7] = _LC2;
        goto LAB_001032e2;
         case 0x45:
         case 0x52:
        puVar15 = puVar15 + 1;
        puVar31[7] = _LC3;
        goto LAB_001032e2;
         case 0x46:
         case 0x53:
        puVar15 = puVar15 + 1;
        puVar31[7] = _LC4;
        goto LAB_001032e2;
         case 0x47:
         case 0x54:
        uVar17 = puVar15[1];
        *(undefined4 *)(puVar31 + 7) = 0;
        puVar15 = puVar15 + 2;
        *(uint *)((long)puVar31 + 0x3c) = (uint)uVar17;
LAB_001032e2:
        *puVar31 = (ulong)puVar15;
        local_c8 = 2;
LAB_00102d17:
        puVar15 = (ushort *)*puVar31;
        *puVar31 = (ulong)(puVar15 + 1);
        uVar17 = *puVar15;
        uVar20 = (uint)uVar17;
        *(uint *)(puVar31 + 8) = (uint)uVar17;
        if (uVar24 == 0) {
          if (bVar16 < 0x48) {
            uVar20 = (uint)puVar31[7];
            if (uVar20 != 0) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                uVar26 = *puVar13;
                puVar31[10] = (ulong)(puVar13 + 1);
                if ((uint)uVar17 == (uint)uVar26) goto switchD_001005dc_caseD_a3;
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
            }
            goto LAB_001070c1;
          }
LAB_001053f0:
          if ((uVar25 & 0xa0000) == 0) {
            uVar20 = (uint)puVar31[8];
            if (uVar20 < 0x100) {
              uVar20 = (uint)*(byte *)(*(long *)(param_6 + 0x40) + (ulong)uVar20);
            }
            *(uint *)((long)puVar31 + 0x44) = uVar20;
LAB_00106e1c:
            uVar28 = (uint)puVar31[7];
            if (uVar28 != 0) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar27 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                if (((uint)puVar31[8] == (uint)*puVar13) || (*puVar13 == uVar20))
                goto switchD_001005dc_caseD_a3;
                uVar27 = uVar27 + 1;
                puVar31[10] = (ulong)(puVar13 + 1);
              } while (uVar27 <= uVar28);
            }
          }
          else {
            if (uVar17 < 0x80) {
              uVar20 = (uint)*(byte *)(*(long *)(param_6 + 0x40) + (ulong)uVar17);
            }
            else {
LAB_00107084:
              uVar20 = uVar20 + *(int *)(&DAT_0010f01c +
                                        (ulong)*(ushort *)
                                                (&_pcre2_ucd_stage2_16 +
                                                (long)(int)((uint)*(ushort *)
                                                                   (&_pcre2_ucd_stage1_16 +
                                                                   (long)((int)uVar20 >> 7) * 2) *
                                                            0x80 + (uVar20 & 0x7f)) * 2) * 0xc);
            }
LAB_0010540f:
            *(uint *)((long)puVar31 + 0x44) = uVar20;
            if (uVar24 == 0) goto LAB_00106e1c;
            uVar28 = (uint)puVar31[7];
            if (uVar28 != 0) {
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar27 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if (sVar2 == 0) goto switchD_001005dc_caseD_a3;
                  if (puVar13 <= *(ushort **)(param_6 + 0xa0)) goto LAB_00102ddd;
                  goto LAB_00102dea;
                }
                puVar31[10] = (ulong)(puVar13 + 1);
                uVar17 = *puVar13;
                uVar4 = (uint)uVar17;
                if ((uVar17 & 0xfc00) == 0xd800) {
                  puVar31[10] = (ulong)(puVar13 + 2);
                  uVar4 = ((uVar17 & 0x3ff) << 10 | puVar13[1] & 0x3ff) + 0x10000;
                }
                if (((uint)puVar31[8] == uVar4) || (uVar4 == uVar20))
                goto switchD_001005dc_caseD_a3;
                uVar27 = uVar27 + 1;
              } while (uVar27 <= uVar28);
            }
          }
          uVar27 = *(uint *)((long)puVar31 + 0x3c);
          if (uVar28 != uVar27) {
            if (local_c8 == 0) {
              if (uVar24 == 0) {
LAB_0010294b:
                *(undefined1 *)(puVar31 + 9) = 0x1d;
                param_2 = (ushort *)*puVar31;
                uVar20 = 0;
                puVar21 = puVar31;
              }
              else {
LAB_00102ad4:
                *(undefined1 *)(puVar31 + 9) = 0xcc;
                param_2 = (ushort *)*puVar31;
                uVar20 = 0;
                puVar21 = puVar31;
              }
              goto LAB_00101cc8;
            }
            puVar15 = (ushort *)puVar31[10];
            puVar31[1] = (ulong)puVar15;
            if (uVar24 == 0) {
              if (uVar27 <= uVar28) goto LAB_0010a44d;
              puVar13 = *(ushort **)(param_6 + 0x88);
              while (puVar15 < puVar13) {
                if (((uint)puVar31[8] == (uint)*puVar15) || (*puVar15 == uVar20)) goto LAB_0010788f;
                puVar15 = puVar15 + 1;
                uVar28 = uVar28 + 1;
                puVar31[10] = (ulong)puVar15;
                if (uVar27 <= uVar28) goto LAB_0010788f;
              }
              if (((*(short *)(param_6 + 0x60) != 0) &&
                  ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) &&
                 (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
              goto LAB_00102f0a;
LAB_0010788f:
              if (local_c8 == 2) goto LAB_00106c34;
LAB_001008b1:
              if (puVar31[10] != puVar31[1]) {
                *(undefined1 *)(puVar31 + 9) = 0x1e;
                param_2 = (ushort *)*puVar31;
                uVar20 = 0;
                puVar21 = puVar31;
                goto LAB_00101cc8;
              }
            }
            else {
              if (uVar27 <= uVar28) goto LAB_0010a44d;
              puVar13 = *(ushort **)(param_6 + 0x88);
              while (puVar15 < puVar13) {
                uVar17 = *puVar15;
                uVar4 = (uint)uVar17;
                lVar23 = 1;
                if ((uVar17 & 0xfc00) == 0xd800) {
                  lVar23 = 2;
                  uVar4 = ((uVar17 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
                }
                if (((uint)puVar31[8] == uVar4) || (uVar4 == uVar20)) goto LAB_00109857;
                puVar15 = puVar15 + lVar23;
                uVar28 = uVar28 + 1;
                puVar31[10] = (ulong)puVar15;
                if (uVar27 <= uVar28) goto LAB_00109857;
              }
              if ((*(short *)(param_6 + 0x60) != 0) &&
                 (((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)) &&
                  (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
              goto LAB_00102f0a;
LAB_00109857:
              if (local_c8 == 2) goto LAB_00106c34;
LAB_001018de:
              if (puVar31[1] < puVar31[10]) {
                *(undefined1 *)(puVar31 + 9) = 0xcd;
                param_2 = (ushort *)*puVar31;
                uVar20 = 0;
                puVar21 = puVar31;
                goto LAB_00101cc8;
              }
            }
          }
        }
        else {
          if ((uVar17 & 0xfc00) == 0xd800) {
            uVar26 = puVar15[1];
            *puVar31 = (ulong)(puVar15 + 2);
            uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
            *(uint *)(puVar31 + 8) = uVar20;
            if (0x47 < bVar16) {
              if ((uVar25 & 0xa0000) != 0) goto LAB_00107084;
              goto LAB_0010540f;
            }
          }
          else if (0x47 < bVar16) goto LAB_001053f0;
          uVar20 = (uint)puVar31[7];
          if (uVar20 != 0) {
            puVar15 = *(ushort **)(param_6 + 0x88);
            uVar28 = 1;
            do {
              puVar13 = (ushort *)puVar31[10];
              if (puVar15 <= puVar13) {
                sVar2 = *(short *)(param_6 + 0x60);
                if (sVar2 == 0) goto switchD_001005dc_caseD_a3;
                if (puVar13 <= *(ushort **)(param_6 + 0xa0)) goto LAB_00102ddd;
                goto LAB_00102dea;
              }
              uVar17 = *puVar13;
              uVar27 = (uint)uVar17;
              puVar31[10] = (ulong)(puVar13 + 1);
              if ((uVar17 & 0xfc00) == 0xd800) {
                puVar31[10] = (ulong)(puVar13 + 2);
                uVar27 = ((uVar17 & 0x3ff) << 10 | puVar13[1] & 0x3ff) + 0x10000;
              }
              if ((uint)puVar31[8] == uVar27) goto switchD_001005dc_caseD_a3;
              uVar28 = uVar28 + 1;
            } while (uVar28 <= uVar20);
          }
LAB_001070c1:
          uVar28 = *(uint *)((long)puVar31 + 0x3c);
          if (uVar20 != uVar28) {
            if (local_c8 == 0) {
              if (uVar24 == 0) {
LAB_001027a8:
                *(undefined1 *)(puVar31 + 9) = 0x1f;
                param_2 = (ushort *)*puVar31;
                uVar20 = 0;
                puVar21 = puVar31;
              }
              else {
LAB_0010229a:
                *(undefined1 *)(puVar31 + 9) = 0xce;
                param_2 = (ushort *)*puVar31;
                uVar20 = 0;
                puVar21 = puVar31;
              }
              goto LAB_00101cc8;
            }
            puVar15 = (ushort *)puVar31[10];
            puVar31[1] = (ulong)puVar15;
            if (uVar24 == 0) {
              if (uVar28 <= uVar20) goto LAB_0010a44d;
              puVar13 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar13 <= puVar15) {
                  if (((*(short *)(param_6 + 0x60) != 0) &&
                      ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))))
                     && (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
                  goto LAB_00102f0a;
                  break;
                }
                if ((uint)puVar31[8] == (uint)*puVar15) break;
                puVar15 = puVar15 + 1;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar28);
              if (local_c8 == 2) goto LAB_00106c34;
LAB_00100809:
              if (puVar31[10] != puVar31[1]) {
                *(undefined1 *)(puVar31 + 9) = 0x20;
                param_2 = (ushort *)*puVar31;
                uVar20 = 0;
                puVar21 = puVar31;
                goto LAB_00101cc8;
              }
            }
            else {
              if (uVar28 <= uVar20) goto LAB_0010a44d;
              puVar13 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar13 <= puVar15) {
                  if ((*(short *)(param_6 + 0x60) != 0) &&
                     (((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))
                      && (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
                  goto LAB_00102f0a;
                  break;
                }
                uVar17 = *puVar15;
                uVar27 = (uint)uVar17;
                lVar23 = 1;
                if ((uVar17 & 0xfc00) == 0xd800) {
                  lVar23 = 2;
                  uVar27 = ((uVar17 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
                }
                if ((uint)puVar31[8] == uVar27) break;
                puVar15 = puVar15 + lVar23;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar28);
              if (local_c8 == 2) goto LAB_00106c34;
LAB_0010181e:
              if (puVar31[1] < puVar31[10]) {
                *(undefined1 *)(puVar31 + 9) = 0xcf;
                param_2 = (ushort *)*puVar31;
                uVar20 = 0;
                puVar21 = puVar31;
                goto LAB_00101cc8;
              }
            }
          }
        }
        goto LAB_001005ba;
         for (int i = 0; i < 5; i++) {
            case 0x55:
         }

         case 0x5a:
        *puVar31 = (ulong)(puVar15 + 1);
        uVar9 = (ulong)(uVar17 - 0x55);
        local_c8 = *(uint *)(rep_typ + uVar9 * 4);
        puVar31[7] = CONCAT44(*(undefined4 *)(rep_max + uVar9 * 4),
                              *(undefined4 *)(rep_min + uVar9 * 4));
        goto LAB_00102f52;
         case 0x5b:
         case 0x5c:
        uVar26 = puVar15[1];
        *(undefined4 *)(puVar31 + 7) = 0;
        *(uint *)((long)puVar31 + 0x3c) = (uint)uVar26;
        local_c8 = (uint)(uVar17 != 0x5c);
        *puVar31 = (ulong)(puVar15 + 2);
        goto LAB_00102f52;
         case 0x5d:
        uVar17 = puVar15[1];
        *puVar31 = (ulong)(puVar15 + 2);
        puVar31[7] = (ulong)CONCAT24(uVar17,(uint)uVar17);
        goto LAB_00102f52;
         case 0x5e:
        puVar15 = puVar15 + 1;
        puVar31[7] = _LC2;
        goto LAB_001041af;
         case 0x5f:
        puVar15 = puVar15 + 1;
        puVar31[7] = _LC3;
        goto LAB_001041af;
         case 0x60:
        puVar15 = puVar15 + 1;
        puVar31[7] = _LC4;
        goto LAB_001041af;
         case 0x61:
        uVar17 = puVar15[1];
        *(undefined4 *)(puVar31 + 7) = 0;
        puVar15 = puVar15 + 2;
        *(uint *)((long)puVar31 + 0x3c) = (uint)uVar17;
LAB_001041af:
        *puVar31 = (ulong)puVar15;
        local_c8 = 2;
LAB_00102f52:
        puVar15 = (ushort *)*puVar31;
        uVar17 = *puVar15;
        *puVar31 = (ulong)(puVar15 + 1);
        *(uint *)(puVar31 + 8) = (uint)uVar17;
        if (uVar17 - 0xf < 2) {
          uVar26 = puVar15[1];
          uVar28 = (uint)uVar26;
          uVar1 = puVar15[2];
          *puVar31 = (ulong)(puVar15 + 3);
          uVar20 = (uint)puVar31[7];
          *(uint *)((long)puVar31 + 0x44) = (uint)uVar1;
          if (uVar20 != 0) {
            bVar35 = uVar17 == 0xf;
            if (0xd < uVar26) goto switchD_001005dc_caseD_62;
            switch(uVar28) {
            case 0:
              if (uVar17 == 0xf) goto switchD_001005dc_caseD_a3;
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar31[10] = (ulong)(puVar13 + 1);
                if ((uVar24 != 0) && ((*puVar13 & 0xfc00) == 0xd800)) {
                  puVar31[10] = (ulong)(puVar13 + 2);
                }
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              uVar28 = 0;
              break;
            case 1:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar31[10] = (ulong)(puVar13 + 1);
                uVar17 = *puVar13;
                uVar27 = (uint)uVar17;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  uVar26 = puVar13[1];
                  puVar31[10] = (ulong)(puVar13 + 2);
                  uVar27 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
                }
                if (bVar35 == ((byte)((&DAT_0010f019)
                                      [(ulong)*(ushort *)
                                               (&_pcre2_ucd_stage2_16 +
                                               (long)(int)((uint)*(ushort *)
                                                                  (&_pcre2_ucd_stage1_16 +
                                                                  (long)((int)uVar27 >> 7) * 2) *
                                                           0x80 + (uVar27 & 0x7f)) * 2) * 0xc] - 8)
                               < 2 || (&DAT_0010f019)
                                      [(ulong)*(ushort *)
                                               (&_pcre2_ucd_stage2_16 +
                                               (long)(int)((uint)*(ushort *)
                                                                  (&_pcre2_ucd_stage1_16 +
                                                                  (long)((int)uVar27 >> 7) * 2) *
                                                           0x80 + (uVar27 & 0x7f)) * 2) * 0xc] ==
                                      '\x05')) goto switchD_001005dc_caseD_a3;
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              uVar28 = 1;
              break;
            case 2:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar31[10] = (ulong)(puVar13 + 1);
                uVar17 = *puVar13;
                uVar27 = (uint)uVar17;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  uVar26 = puVar13[1];
                  puVar31[10] = (ulong)(puVar13 + 2);
                  uVar27 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
                }
                if (bVar35 == (*(uint *)(&_pcre2_ucp_gentype_16 +
                                        (ulong)(byte)(&DAT_0010f019)
                                                     [(ulong)*(ushort *)
                                                              (&_pcre2_ucd_stage2_16 +
                                                              (long)(int)((uVar27 & 0x7f) +
                                                                         (uint)*(ushort *)
                                                                                (&
                                                  _pcre2_ucd_stage1_16 +
                                                  (long)((int)uVar27 >> 7) * 2) * 0x80) * 2) * 0xc]
                                        * 4) == (uint)uVar1)) goto switchD_001005dc_caseD_a3;
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              uVar28 = 2;
              break;
            case 3:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar31[10] = (ulong)(puVar13 + 1);
                uVar17 = *puVar13;
                uVar27 = (uint)uVar17;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  uVar26 = puVar13[1];
                  puVar31[10] = (ulong)(puVar13 + 2);
                  uVar27 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
                }
                if (bVar35 == ((byte)(&DAT_0010f019)
                                     [(ulong)*(ushort *)
                                              (&_pcre2_ucd_stage2_16 +
                                              (long)(int)((uVar27 & 0x7f) +
                                                         (uint)*(ushort *)
                                                                (&_pcre2_ucd_stage1_16 +
                                                                (long)((int)uVar27 >> 7) * 2) * 0x80
                                                         ) * 2) * 0xc] == uVar1))
                goto switchD_001005dc_caseD_a3;
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              uVar28 = 3;
              break;
            case 4:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar31[10] = (ulong)(puVar13 + 1);
                uVar17 = *puVar13;
                uVar27 = (uint)uVar17;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  uVar26 = puVar13[1];
                  puVar31[10] = (ulong)(puVar13 + 2);
                  uVar27 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
                }
                if (bVar35 == ((byte)(&_pcre2_ucd_records_16)
                                     [(ulong)*(ushort *)
                                              (&_pcre2_ucd_stage2_16 +
                                              (long)(int)((uVar27 & 0x7f) +
                                                         (uint)*(ushort *)
                                                                (&_pcre2_ucd_stage1_16 +
                                                                (long)((int)uVar27 >> 7) * 2) * 0x80
                                                         ) * 2) * 0xc] == uVar1))
                goto switchD_001005dc_caseD_a3;
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              uVar28 = 4;
              break;
            case 5:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar31[10] = (ulong)(puVar13 + 1);
                uVar17 = *puVar13;
                uVar27 = (uint)uVar17;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  uVar26 = puVar13[1];
                  puVar31[10] = (ulong)(puVar13 + 2);
                  uVar27 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
                }
                bVar33 = true;
                if ((uint)uVar1 !=
                    (uint)(byte)(&_pcre2_ucd_records_16)
                                [(ulong)*(ushort *)
                                         (&_pcre2_ucd_stage2_16 +
                                         (long)(int)((uVar27 & 0x7f) +
                                                    (uint)*(ushort *)
                                                           (&_pcre2_ucd_stage1_16 +
                                                           (long)((int)uVar27 >> 7) * 2) * 0x80) * 2
                                         ) * 0xc]) {
                  bVar33 = (1 << ((byte)uVar1 & 0x1f) &
                           *(uint *)(&_pcre2_ucd_script_sets_16 +
                                    ((ulong)(*(ushort *)
                                              (&_pcre2_ucd_caseless_sets_16 +
                                              (ulong)*(ushort *)
                                                      (&_pcre2_ucd_stage2_16 +
                                                      (long)(int)((uVar27 & 0x7f) +
                                                                 (uint)*(ushort *)
                                                                        (&_pcre2_ucd_stage1_16 +
                                                                        (long)((int)uVar27 >> 7) * 2
                                                                        ) * 0x80) * 2) * 0xc) &
                                            0x3ff) + (ulong)(uVar1 >> 5)) * 4)) != 0;
                }
                if (bVar35 == bVar33) goto switchD_001005dc_caseD_a3;
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              uVar28 = 5;
              break;
            case 6:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar31[10] = (ulong)(puVar13 + 1);
                uVar17 = *puVar13;
                uVar27 = (uint)uVar17;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  uVar26 = puVar13[1];
                  puVar31[10] = (ulong)(puVar13 + 2);
                  uVar27 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
                }
                if (bVar35 == ((*(uint *)(&_pcre2_ucp_gentype_16 +
                                         (ulong)(byte)(&DAT_0010f019)
                                                      [(ulong)*(ushort *)
                                                               (&_pcre2_ucd_stage2_16 +
                                                               (long)(int)((uVar27 & 0x7f) +
                                                                          (uint)*(ushort *)
                                                                                 (&
                                                  _pcre2_ucd_stage1_16 +
                                                  (long)((int)uVar27 >> 7) * 2) * 0x80) * 2) * 0xc]
                                         * 4) & 0xfffffffd) == 1)) goto switchD_001005dc_caseD_a3;
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              uVar28 = 6;
              break;
            default:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar27 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                uVar26 = *puVar13;
                uVar4 = (uint)uVar26;
                puVar31[10] = (ulong)(puVar13 + 1);
                if ((uVar24 != 0) && ((uVar26 & 0xfc00) == 0xd800)) {
                  puVar31[10] = (ulong)(puVar13 + 2);
                  uVar4 = ((uVar4 & 0x3ff) << 10 | puVar13[1] & 0x3ff) + 0x10000;
                  goto LAB_0010555b;
                }
                if (uVar26 == 0x180e) {
LAB_0010560e:
                  if (uVar17 == 0xf) goto switchD_001005dc_caseD_a3;
                }
                else {
                  if (uVar26 < 0x180f) {
                    if (uVar26 != 0x85) {
                      if (uVar26 < 0x86) {
                        if (uVar26 < 0xe) {
                          if (8 < uVar26) goto LAB_0010560e;
                        }
                        else if (uVar26 == 0x20) goto LAB_0010560e;
                        goto LAB_0010555b;
                      }
                      if ((uVar26 != 0xa0) && (uVar26 != 0x1680)) goto LAB_0010555b;
                    }
                    goto LAB_0010560e;
                  }
                  if (uVar26 < 0x2060) {
                    if (uVar26 < 0x2028) {
                      if ((ushort)(uVar26 + 0xe000) < 0xb) goto LAB_0010560e;
                    }
                    else if ((0x80000000000083U >> ((ulong)(ushort)(uVar26 + 0xdfd8) & 0x3f) & 1) !=
                             0) goto LAB_0010560e;
                  }
                  else if (uVar26 == 0x3000) goto LAB_0010560e;
LAB_0010555b:
                  if (bVar35 == (*(int *)(&_pcre2_ucp_gentype_16 +
                                         (ulong)(byte)(&DAT_0010f019)
                                                      [(ulong)*(ushort *)
                                                               (&_pcre2_ucd_stage2_16 +
                                                               (long)(int)((uint)*(ushort *)
                                                                                  (&
                                                  _pcre2_ucd_stage1_16 + (long)((int)uVar4 >> 7) * 2
                                                  ) * 0x80 + (uVar4 & 0x7f)) * 2) * 0xc] * 4) == 6))
                  goto switchD_001005dc_caseD_a3;
                }
                uVar27 = uVar27 + 1;
              } while (uVar27 <= uVar20);
              break;
            case 9:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar31[10] = (ulong)(puVar13 + 1);
                uVar17 = *puVar13;
                uVar27 = (uint)uVar17;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  uVar26 = puVar13[1];
                  puVar31[10] = (ulong)(puVar13 + 2);
                  uVar27 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
                }
                if (bVar35 == ((*(uint *)(&_pcre2_ucp_gentype_16 +
                                         (ulong)(byte)(&DAT_0010f019)
                                                      [(ulong)*(ushort *)
                                                               (&_pcre2_ucd_stage2_16 +
                                                               (long)(int)((uVar27 & 0x7f) +
                                                                          (uint)*(ushort *)
                                                                                 (&
                                                  _pcre2_ucd_stage1_16 +
                                                  (long)((int)uVar27 >> 7) * 2) * 0x80) * 2) * 0xc]
                                         * 4) & 0xfffffffd) == 1 ||
                              ((&DAT_0010f019)
                               [(ulong)*(ushort *)
                                        (&_pcre2_ucd_stage2_16 +
                                        (long)(int)((uVar27 & 0x7f) +
                                                   (uint)*(ushort *)
                                                          (&_pcre2_ucd_stage1_16 +
                                                          (long)((int)uVar27 >> 7) * 2) * 0x80) * 2)
                                * 0xc] - 0xc & 0xfb) == 0)) goto switchD_001005dc_caseD_a3;
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              uVar28 = 9;
              break;
            case 10:
              puVar15 = *(ushort **)(param_6 + 0x88);
              puVar14 = (uint *)(&_pcre2_ucd_caseless_sets_16 + (ulong)uVar1 * 4);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                uVar26 = *puVar13;
                uVar27 = (uint)uVar26;
                puVar31[10] = (ulong)(puVar13 + 1);
                puVar12 = puVar14;
                if ((uVar24 != 0) && ((uVar26 & 0xfc00) == 0xd800)) {
                  puVar31[10] = (ulong)(puVar13 + 2);
                  uVar27 = ((uVar26 & 0x3ff) << 10 | puVar13[1] & 0x3ff) + 0x10000;
                }
                do {
                  uVar4 = *puVar12;
                  if (uVar27 < uVar4) break;
                  puVar12 = puVar12 + 1;
                } while (uVar4 != uVar27);
                if (uVar17 != 0xf) goto switchD_001005dc_caseD_a3;
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              uVar28 = 10;
              break;
            case 0xb:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar31[10] = (ulong)(puVar13 + 1);
                uVar17 = *puVar13;
                uVar27 = (uint)uVar17;
                if ((uVar24 == 0) || ((uVar17 & 0xfc00) != 0xd800)) {
                  if (((uVar17 & 0xffdf) != 0x40) && (uVar17 != 0x24)) goto LAB_00105ac9;
                  bVar33 = true;
                }
                else {
                  uVar26 = puVar13[1];
                  puVar31[10] = (ulong)(puVar13 + 2);
                  uVar27 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
LAB_00105ac9:
                  bVar33 = 0xdfff < uVar27 || uVar27 - 0xa0 < 0xd760;
                }
                if (bVar35 == bVar33) goto switchD_001005dc_caseD_a3;
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              uVar28 = 0xb;
              break;
            case 0xc:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar31[10] = (ulong)(puVar13 + 1);
                uVar17 = *puVar13;
                uVar27 = (uint)uVar17;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  uVar26 = puVar13[1];
                  puVar31[10] = (ulong)(puVar13 + 2);
                  uVar27 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
                }
                if (bVar35 == (*(ushort *)
                                (&_pcre2_ucd_caseless_sets_16 +
                                (ulong)*(ushort *)
                                        (&_pcre2_ucd_stage2_16 +
                                        (long)(int)((uVar27 & 0x7f) +
                                                   (uint)*(ushort *)
                                                          (&_pcre2_ucd_stage1_16 +
                                                          (long)((int)uVar27 >> 7) * 2) * 0x80) * 2)
                                * 0xc) >> 0xb == uVar1)) goto switchD_001005dc_caseD_a3;
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              uVar28 = 0xc;
              break;
            case 0xd:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar31[10] = (ulong)(puVar13 + 1);
                uVar17 = *puVar13;
                uVar27 = (uint)uVar17;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  uVar26 = puVar13[1];
                  puVar31[10] = (ulong)(puVar13 + 2);
                  uVar27 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
                }
                if (bVar35 == ((1 << ((byte)uVar1 & 0x1f) &
                               *(uint *)(&_pcre2_ucd_boolprop_sets_16 +
                                        ((ulong)(*(ushort *)
                                                  (&DAT_0010f022 +
                                                  (ulong)*(ushort *)
                                                          (&_pcre2_ucd_stage2_16 +
                                                          (long)(int)((uVar27 & 0x7f) +
                                                                     (uint)*(ushort *)
                                                                            (&_pcre2_ucd_stage1_16 +
                                                                            (long)((int)uVar27 >> 7)
                                                                            * 2) * 0x80) * 2) * 0xc)
                                                & 0xfff) + (ulong)(uVar1 >> 5)) * 4)) != 0))
                goto switchD_001005dc_caseD_a3;
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              uVar28 = 0xd;
            }
          }
        }
        else {
          uVar20 = (uint)puVar31[7];
          if (uVar20 == 0) goto LAB_00106dfd;
          if (uVar17 == 0x16) {
            uVar20 = 1;
            do {
              puVar15 = (ushort *)puVar31[10];
              if (*(ushort **)(param_6 + 0x88) <= puVar15) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 == 0) ||
                   ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_001005dc_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              uVar17 = *puVar15;
              uVar28 = (uint)uVar17;
              puVar31[10] = (ulong)(puVar15 + 1);
              if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                puVar31[10] = (ulong)(puVar15 + 2);
                uVar28 = ((uVar17 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
              }
              uVar9 = _pcre2_extuni_16(uVar28,puVar31[10],*(undefined8 *)(param_6 + 0x78));
              puVar31[10] = uVar9;
              if ((((*(ulong *)(param_6 + 0x88) <= uVar9) && (*(short *)(param_6 + 0x60) != 0)) &&
                  ((*(ulong *)(param_6 + 0xa0) < uVar9 || (*(int *)(param_6 + 0x30) != 0)))) &&
                 (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
              goto LAB_00102f0a;
              uVar20 = uVar20 + 1;
            } while (uVar20 <= (uint)puVar31[7]);
            uVar20 = (uint)puVar31[7];
            goto LAB_00106dfd;
          }
          uVar28 = uVar17 - 6;
          if (uVar24 != 0) {
            switch(uVar28 & 0xffff) {
            case 0:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar31[10] = (ulong)(puVar13 + 1);
                uVar17 = *puVar13;
                if ((uVar17 & 0xfc00) == 0xd800) {
                  puVar31[10] = (ulong)(puVar13 + 2);
                }
                else if ((uVar17 < 0x80) &&
                        ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar17) & 8) != 0))
                goto switchD_001005dc_caseD_a3;
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              break;
            case 1:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                if ((0x7f < *puVar13) ||
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 8) == 0))
                goto switchD_001005dc_caseD_a3;
                uVar28 = uVar28 + 1;
                puVar31[10] = (ulong)(puVar13 + 1);
              } while (uVar28 <= uVar20);
              break;
            case 2:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                if ((*puVar13 < 0x80) &&
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 1) != 0))
                goto switchD_001005dc_caseD_a3;
                puVar31[10] = (ulong)(puVar13 + 1);
                if ((puVar13 + 1 < puVar15) && ((puVar13[1] & 0xfc00) == 0xdc00)) {
                  puVar31[10] = (ulong)(puVar13 + 2);
                }
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              break;
            case 3:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                if ((0x7f < *puVar13) ||
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 1) == 0))
                goto switchD_001005dc_caseD_a3;
                uVar28 = uVar28 + 1;
                puVar31[10] = (ulong)(puVar13 + 1);
              } while (uVar28 <= uVar20);
              break;
            case 4:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                if ((*puVar13 < 0x80) &&
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 0x10) != 0))
                goto switchD_001005dc_caseD_a3;
                puVar31[10] = (ulong)(puVar13 + 1);
                if ((puVar13 + 1 < puVar15) && ((puVar13[1] & 0xfc00) == 0xdc00)) {
                  puVar31[10] = (ulong)(puVar13 + 2);
                }
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              break;
            case 5:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                if ((0x7f < *puVar13) ||
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 0x10) == 0))
                goto switchD_001005dc_caseD_a3;
                uVar28 = uVar28 + 1;
                puVar31[10] = (ulong)(puVar13 + 1);
              } while (uVar28 <= uVar20);
              break;
            case 6:
              uVar20 = 1;
              do {
                psVar6 = (short *)puVar31[10];
                if (*(short **)(param_6 + 0x88) <= psVar6) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((psVar6 <= *(short **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                if (*(int *)(param_6 + 0xe4) == 0) {
                  if (((psVar6 <= *(short **)(param_6 + 0x88) + -(ulong)*(uint *)(param_6 + 0xe8))
                      && (*psVar6 == *(short *)(param_6 + 0xec))) &&
                     ((*(uint *)(param_6 + 0xe8) == 1 || (psVar6[1] == *(short *)(param_6 + 0xee))))
                     ) goto switchD_001005dc_caseD_a3;
                }
                else {
                  iVar3 = _pcre2_is_newline_16();
                  if (iVar3 != 0) goto switchD_001005dc_caseD_a3;
                  psVar6 = (short *)puVar31[10];
                }
                if (*(short *)(param_6 + 0x60) == 0) {
                  puVar31[10] = (ulong)(psVar6 + 1);
                  if (psVar6 + 1 < *(short **)(param_6 + 0x88)) {
LAB_00107cad:
                    if ((psVar6[1] & 0xfc00U) == 0xdc00) {
                      puVar31[10] = (ulong)(psVar6 + 2);
                    }
                  }
                }
                else {
                  psVar7 = psVar6 + 1;
                  if (psVar7 < *(short **)(param_6 + 0x88)) {
                    puVar31[10] = (ulong)psVar7;
                    goto LAB_00107cad;
                  }
                  if ((((*(int *)(param_6 + 0xe4) == 0) && (*(int *)(param_6 + 0xe8) == 2)) &&
                      (*psVar6 == *(short *)(param_6 + 0xec))) &&
                     (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
                  goto LAB_00102f0a;
                  puVar31[10] = (ulong)psVar7;
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 <= (uint)puVar31[7]);
              uVar20 = (uint)puVar31[7];
              break;
            case 7:
              uVar9 = *(ulong *)(param_6 + 0x88);
              uVar28 = 1;
              do {
                uVar30 = puVar31[10];
                if (uVar9 <= uVar30) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((uVar30 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar31[10] = uVar30 + 2;
                if ((uVar30 + 2 < uVar9) && ((*(ushort *)(uVar30 + 2) & 0xfc00) == 0xdc00)) {
                  puVar31[10] = uVar30 + 4;
                }
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              break;
            case 8:
              uVar9 = puVar31[10];
              if (uVar9 <= *(long *)(param_6 + 0x88) + (ulong)uVar20 * -2) goto LAB_00107b6c;
              goto switchD_001005dc_caseD_a3;
            default:
              goto switchD_001005dc_caseD_62;
            case 0xb:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                uVar17 = *puVar13;
                puVar31[10] = (ulong)(puVar13 + 1);
                if ((uVar17 & 0xfc00) == 0xd800) {
                  puVar31[10] = (ulong)(puVar13 + 2);
                  goto switchD_001005dc_caseD_a3;
                }
                if (uVar17 == 0xd) {
                  if ((puVar13 + 1 < puVar15) && (puVar13[1] == 10)) {
                    puVar31[10] = (ulong)(puVar13 + 2);
                  }
                }
                else {
                  if (uVar17 < 0xe) {
                    if (uVar17 == 10) goto LAB_00107d1b;
                    uVar17 = uVar17 - 0xb;
joined_r0x0010b1c8:
                    if (1 < uVar17) goto switchD_001005dc_caseD_a3;
                  }
                  else if (uVar17 != 0x85) {
                    uVar17 = uVar17 + 0xdfd8;
                    goto joined_r0x0010b1c8;
                  }
                  if (*(short *)(param_6 + 0x62) == 2) goto switchD_001005dc_caseD_a3;
                }
LAB_00107d1b:
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              break;
            case 0xc:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar31[10] = (ulong)(puVar13 + 1);
                uVar17 = *puVar13;
                if ((uVar17 & 0xfc00) == 0xd800) {
                  puVar31[10] = (ulong)(puVar13 + 2);
                }
                else {
                  if (uVar17 == 0x180e) goto switchD_001005dc_caseD_a3;
                  if (uVar17 < 0x180f) {
                    if (uVar17 == 0xa0) goto switchD_001005dc_caseD_a3;
                    if (uVar17 < 0xa1) {
                      if ((uVar17 == 9) || (uVar17 == 0x20)) goto switchD_001005dc_caseD_a3;
                    }
                    else if (uVar17 == 0x1680) goto switchD_001005dc_caseD_a3;
                  }
                  else {
                    if (uVar17 == 0x205f) goto switchD_001005dc_caseD_a3;
                    if (uVar17 < 0x2060) {
                      if (uVar17 < 0x200b) {
                        if (0x1fff < uVar17) goto switchD_001005dc_caseD_a3;
                      }
                      else if (uVar17 == 0x202f) goto switchD_001005dc_caseD_a3;
                    }
                    else if (uVar17 == 0x3000) goto switchD_001005dc_caseD_a3;
                  }
                }
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              break;
            case 0xd:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar31[10] = (ulong)(puVar13 + 1);
                uVar17 = *puVar13;
                if ((uVar17 & 0xfc00) == 0xd800) {
                  puVar31[10] = (ulong)(puVar13 + 2);
                  goto switchD_001005dc_caseD_a3;
                }
                if (uVar17 != 0x180e) {
                  if (uVar17 < 0x180f) {
                    if (uVar17 != 0xa0) {
                      if (uVar17 < 0xa1) {
                        if ((uVar17 != 9) && (uVar17 != 0x20)) goto switchD_001005dc_caseD_a3;
                      }
                      else if (uVar17 != 0x1680) goto switchD_001005dc_caseD_a3;
                    }
                  }
                  else if (uVar17 != 0x205f) {
                    if (uVar17 < 0x2060) {
                      if (uVar17 < 0x200b) {
                        if (uVar17 < 0x2000) goto switchD_001005dc_caseD_a3;
                      }
                      else if (uVar17 != 0x202f) goto switchD_001005dc_caseD_a3;
                    }
                    else if (uVar17 != 0x3000) goto switchD_001005dc_caseD_a3;
                  }
                }
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              break;
            case 0xe:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar31[10] = (ulong)(puVar13 + 1);
                uVar17 = *puVar13;
                if ((uVar17 & 0xfc00) == 0xd800) {
                  puVar31[10] = (ulong)(puVar13 + 2);
                }
                else {
                  if (uVar17 == 0x85) goto switchD_001005dc_caseD_a3;
                  if (uVar17 < 0x86) {
                    if ((ushort)(uVar17 - 10) < 4) goto switchD_001005dc_caseD_a3;
                  }
                  else if ((ushort)(uVar17 + 0xdfd8) < 2) goto switchD_001005dc_caseD_a3;
                }
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
              break;
            case 0xf:
              puVar15 = *(ushort **)(param_6 + 0x88);
              uVar28 = 1;
              do {
                puVar13 = (ushort *)puVar31[10];
                if (puVar15 <= puVar13) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 == 0) ||
                     ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                  goto switchD_001005dc_caseD_a3;
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x00107f3c;
                }
                puVar31[10] = (ulong)(puVar13 + 1);
                uVar17 = *puVar13;
                if ((uVar17 & 0xfc00) == 0xd800) {
                  puVar31[10] = (ulong)(puVar13 + 2);
                  goto switchD_001005dc_caseD_a3;
                }
                if (uVar17 != 0x85) {
                  if (uVar17 < 0x86) {
                    if (3 < (ushort)(uVar17 - 10)) goto switchD_001005dc_caseD_a3;
                  }
                  else if (1 < (ushort)(uVar17 + 0xdfd8)) goto switchD_001005dc_caseD_a3;
                }
                uVar28 = uVar28 + 1;
              } while (uVar28 <= uVar20);
            }
            goto LAB_00106dfd;
          }
          switch(uVar28 & 0xffff) {
          case 0:
            puVar15 = *(ushort **)(param_6 + 0x88);
            uVar28 = 1;
            do {
              puVar13 = (ushort *)puVar31[10];
              if (puVar15 <= puVar13) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 == 0) ||
                   ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_001005dc_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              if ((*puVar13 < 0x100) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 8) != 0))
              goto switchD_001005dc_caseD_a3;
              uVar28 = uVar28 + 1;
              puVar31[10] = (ulong)(puVar13 + 1);
            } while (uVar28 <= uVar20);
            break;
          case 1:
            puVar15 = *(ushort **)(param_6 + 0x88);
            uVar28 = 1;
            do {
              puVar13 = (ushort *)puVar31[10];
              if (puVar15 <= puVar13) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 == 0) ||
                   ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_001005dc_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              if ((0xff < *puVar13) ||
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 8) == 0))
              goto switchD_001005dc_caseD_a3;
              uVar28 = uVar28 + 1;
              puVar31[10] = (ulong)(puVar13 + 1);
            } while (uVar28 <= uVar20);
            break;
          case 2:
            puVar15 = *(ushort **)(param_6 + 0x88);
            uVar28 = 1;
            do {
              puVar13 = (ushort *)puVar31[10];
              if (puVar15 <= puVar13) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 == 0) ||
                   ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_001005dc_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              if ((*puVar13 < 0x100) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 1) != 0))
              goto switchD_001005dc_caseD_a3;
              uVar28 = uVar28 + 1;
              puVar31[10] = (ulong)(puVar13 + 1);
            } while (uVar28 <= uVar20);
            break;
          case 3:
            puVar15 = *(ushort **)(param_6 + 0x88);
            uVar28 = 1;
            do {
              puVar13 = (ushort *)puVar31[10];
              if (puVar15 <= puVar13) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 == 0) ||
                   ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_001005dc_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              if ((0xff < *puVar13) ||
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 1) == 0))
              goto switchD_001005dc_caseD_a3;
              uVar28 = uVar28 + 1;
              puVar31[10] = (ulong)(puVar13 + 1);
            } while (uVar28 <= uVar20);
            break;
          case 4:
            puVar15 = *(ushort **)(param_6 + 0x88);
            uVar28 = 1;
            do {
              puVar13 = (ushort *)puVar31[10];
              if (puVar15 <= puVar13) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 == 0) ||
                   ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_001005dc_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              if ((*puVar13 < 0x100) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 0x10) != 0))
              goto switchD_001005dc_caseD_a3;
              uVar28 = uVar28 + 1;
              puVar31[10] = (ulong)(puVar13 + 1);
            } while (uVar28 <= uVar20);
            break;
          case 5:
            puVar15 = *(ushort **)(param_6 + 0x88);
            uVar28 = 1;
            do {
              puVar13 = (ushort *)puVar31[10];
              if (puVar15 <= puVar13) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 == 0) ||
                   ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_001005dc_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              if ((0xff < *puVar13) ||
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar13) & 0x10) == 0))
              goto switchD_001005dc_caseD_a3;
              uVar28 = uVar28 + 1;
              puVar31[10] = (ulong)(puVar13 + 1);
            } while (uVar28 <= uVar20);
            break;
          case 6:
            uVar20 = 1;
            do {
              psVar6 = (short *)puVar31[10];
              if (*(short **)(param_6 + 0x88) <= psVar6) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 == 0) ||
                   ((psVar6 <= *(short **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_001005dc_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              if (*(int *)(param_6 + 0xe4) == 0) {
                if (((psVar6 <= *(short **)(param_6 + 0x88) + -(ulong)*(uint *)(param_6 + 0xe8)) &&
                    (*psVar6 == *(short *)(param_6 + 0xec))) &&
                   ((*(uint *)(param_6 + 0xe8) == 1 || (psVar6[1] == *(short *)(param_6 + 0xee)))))
                goto switchD_001005dc_caseD_a3;
              }
              else {
                iVar3 = _pcre2_is_newline_16();
                if (iVar3 != 0) {
                  uVar20 = 0;
                  goto switchD_00100677_caseD_23;
                }
              }
              if (((((*(short *)(param_6 + 0x60) != 0) &&
                    (*(short **)(param_6 + 0x88) <= (short *)puVar31[10] + 1)) &&
                   (*(int *)(param_6 + 0xe4) == 0)) &&
                  ((*(int *)(param_6 + 0xe8) == 2 &&
                   (*(short *)puVar31[10] == *(short *)(param_6 + 0xec))))) &&
                 (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
              goto LAB_00102f0a;
              puVar31[10] = puVar31[10] + 2;
              uVar20 = uVar20 + 1;
            } while (uVar20 <= (uint)puVar31[7]);
            uVar20 = (uint)puVar31[7];
            break;
          case 7:
            uVar9 = puVar31[10];
            if (*(long *)(param_6 + 0x88) + (ulong)uVar20 * -2 < uVar9) {
              sVar2 = *(short *)(param_6 + 0x60);
              if ((sVar2 != 0) &&
                 ((*(ulong *)(param_6 + 0xa0) < uVar9 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x00107f3c:
                if (sVar2 == 1) goto switchD_001005dc_caseD_a3;
                goto LAB_00102f0a;
              }
              goto switchD_001005dc_caseD_a3;
            }
LAB_00107b6c:
            puVar31[10] = uVar9 + (ulong)uVar20 * 2;
            break;
          default:
            goto switchD_001005dc_caseD_62;
          case 0xb:
            puVar15 = *(ushort **)(param_6 + 0x88);
            uVar28 = 1;
            do {
              puVar13 = (ushort *)puVar31[10];
              if (puVar15 <= puVar13) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 == 0) ||
                   ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_001005dc_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              uVar17 = *puVar13;
              puVar31[10] = (ulong)(puVar13 + 1);
              if (uVar17 == 0xd) {
                if ((puVar13 + 1 < puVar15) && (puVar13[1] == 10)) {
                  puVar31[10] = (ulong)(puVar13 + 2);
                }
              }
              else {
                if (uVar17 < 0xe) {
                  if (uVar17 == 10) goto LAB_00108cde;
                  uVar17 = uVar17 - 0xb;
joined_r0x0010afae:
                  if (1 < uVar17) goto switchD_001005dc_caseD_a3;
                }
                else if (uVar17 != 0x85) {
                  uVar17 = uVar17 + 0xdfd8;
                  goto joined_r0x0010afae;
                }
                if (*(short *)(param_6 + 0x62) == 2) goto switchD_001005dc_caseD_a3;
              }
LAB_00108cde:
              uVar28 = uVar28 + 1;
            } while (uVar28 <= uVar20);
            break;
          case 0xc:
            puVar15 = *(ushort **)(param_6 + 0x88);
            uVar28 = 1;
            do {
              puVar13 = (ushort *)puVar31[10];
              if (puVar15 <= puVar13) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 == 0) ||
                   ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_001005dc_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              uVar17 = *puVar13;
              puVar31[10] = (ulong)(puVar13 + 1);
              if (uVar17 == 0x180e) goto switchD_001005dc_caseD_a3;
              if (uVar17 < 0x180f) {
                if (uVar17 == 0xa0) goto switchD_001005dc_caseD_a3;
                if (uVar17 < 0xa1) {
                  if ((uVar17 == 9) || (uVar17 == 0x20)) goto switchD_001005dc_caseD_a3;
                }
                else if (uVar17 == 0x1680) goto switchD_001005dc_caseD_a3;
              }
              else {
                if (uVar17 == 0x205f) goto switchD_001005dc_caseD_a3;
                if (uVar17 < 0x2060) {
                  if (uVar17 < 0x200b) {
                    if (0x1fff < uVar17) goto switchD_001005dc_caseD_a3;
                  }
                  else if (uVar17 == 0x202f) goto switchD_001005dc_caseD_a3;
                }
                else if (uVar17 == 0x3000) goto switchD_001005dc_caseD_a3;
              }
              uVar28 = uVar28 + 1;
            } while (uVar28 <= uVar20);
            break;
          case 0xd:
            puVar15 = *(ushort **)(param_6 + 0x88);
            uVar28 = 1;
            do {
              puVar13 = (ushort *)puVar31[10];
              if (puVar15 <= puVar13) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 == 0) ||
                   ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_001005dc_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              uVar17 = *puVar13;
              puVar31[10] = (ulong)(puVar13 + 1);
              if (uVar17 != 0x180e) {
                if (uVar17 < 0x180f) {
                  if (uVar17 != 0xa0) {
                    if (uVar17 < 0xa1) {
                      if ((uVar17 != 9) && (uVar17 != 0x20)) goto switchD_001005dc_caseD_a3;
                    }
                    else if (uVar17 != 0x1680) goto switchD_001005dc_caseD_a3;
                  }
                }
                else if (uVar17 != 0x205f) {
                  if (uVar17 < 0x2060) {
                    if (uVar17 < 0x200b) {
                      if (uVar17 < 0x2000) goto switchD_001005dc_caseD_a3;
                    }
                    else if (uVar17 != 0x202f) goto switchD_001005dc_caseD_a3;
                  }
                  else if (uVar17 != 0x3000) goto switchD_001005dc_caseD_a3;
                }
              }
              uVar28 = uVar28 + 1;
            } while (uVar28 <= uVar20);
            break;
          case 0xe:
            puVar15 = *(ushort **)(param_6 + 0x88);
            uVar28 = 1;
            do {
              puVar13 = (ushort *)puVar31[10];
              if (puVar15 <= puVar13) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 == 0) ||
                   ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_001005dc_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              uVar17 = *puVar13;
              puVar31[10] = (ulong)(puVar13 + 1);
              if (uVar17 == 0x85) goto switchD_001005dc_caseD_a3;
              if (uVar17 < 0x86) {
                if ((ushort)(uVar17 - 10) < 4) goto switchD_001005dc_caseD_a3;
              }
              else if ((ushort)(uVar17 + 0xdfd8) < 2) goto switchD_001005dc_caseD_a3;
              uVar28 = uVar28 + 1;
            } while (uVar28 <= uVar20);
            break;
          case 0xf:
            puVar15 = *(ushort **)(param_6 + 0x88);
            uVar28 = 1;
            do {
              puVar13 = (ushort *)puVar31[10];
              if (puVar15 <= puVar13) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 == 0) ||
                   ((puVar13 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_001005dc_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              uVar17 = *puVar13;
              puVar31[10] = (ulong)(puVar13 + 1);
              if (uVar17 != 0x85) {
                if (uVar17 < 0x86) {
                  if (3 < (ushort)(uVar17 - 10)) goto switchD_001005dc_caseD_a3;
                }
                else if (1 < (ushort)(uVar17 + 0xdfd8)) goto switchD_001005dc_caseD_a3;
              }
              uVar28 = uVar28 + 1;
            } while (uVar28 <= uVar20);
          }
LAB_00106dfd:
          uVar28 = 0xffffffff;
        }
        uVar27 = *(uint *)((long)puVar31 + 0x3c);
        if (uVar20 == uVar27) goto LAB_001005ba;
        if (local_c8 == 0) {
          if (uVar28 != 0xffffffff) {
            switch(uVar28) {
            case 0:
switchD_0010b828_caseD_0:
              *(undefined1 *)(puVar31 + 9) = 0xd0;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            case 1:
switchD_0010b828_caseD_1:
              *(undefined1 *)(puVar31 + 9) = 0xd1;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            case 2:
switchD_0010b828_caseD_2:
              *(undefined1 *)(puVar31 + 9) = 0xd2;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            case 3:
switchD_0010b828_caseD_3:
              *(undefined1 *)(puVar31 + 9) = 0xd3;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            case 4:
switchD_0010b828_caseD_4:
              *(undefined1 *)(puVar31 + 9) = 0xd4;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            case 5:
switchD_0010b828_caseD_5:
              *(undefined1 *)(puVar31 + 9) = 0xe1;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            case 6:
switchD_0010b828_caseD_6:
              *(undefined1 *)(puVar31 + 9) = 0xd5;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            case 7:
            case 8:
switchD_0010b828_caseD_7:
              *(undefined1 *)(puVar31 + 9) = 0xd6;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            case 9:
switchD_0010b828_caseD_9:
              *(undefined1 *)(puVar31 + 9) = 0xd7;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            case 10:
switchD_0010b828_caseD_a:
              *(undefined1 *)(puVar31 + 9) = 0xd8;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            case 0xb:
switchD_0010b828_caseD_b:
              *(undefined1 *)(puVar31 + 9) = 0xd9;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            case 0xc:
switchD_0010b828_caseD_c:
              *(undefined1 *)(puVar31 + 9) = 0xe0;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            case 0xd:
switchD_0010b828_caseD_d:
              *(undefined1 *)(puVar31 + 9) = 0xdf;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            default:
switchD_001005dc_caseD_62:
              uVar20 = 0xffffffd4;
            }
            goto LAB_00101d0c;
          }
          if ((int)puVar31[8] == 0x16) {
LAB_0010b5b2:
            *(undefined1 *)(puVar31 + 9) = 0xda;
            param_2 = (ushort *)*puVar31;
            uVar20 = 0;
            puVar21 = puVar31;
          }
          else if (uVar24 == 0) {
LAB_001049d2:
            *(undefined1 *)(puVar31 + 9) = 0x21;
            param_2 = (ushort *)*puVar31;
            uVar20 = 0;
            puVar21 = puVar31;
          }
          else {
LAB_00104925:
            *(undefined1 *)(puVar31 + 9) = 0xdb;
            param_2 = (ushort *)*puVar31;
            uVar20 = 0;
            puVar21 = puVar31;
          }
          goto LAB_00101cc8;
        }
        puVar15 = (ushort *)puVar31[10];
        puVar31[1] = (ulong)puVar15;
        if (uVar28 != 0xffffffff) {
          iVar3 = (int)puVar31[8];
          bVar35 = iVar3 == 0xf;
          if (0xd < uVar28) goto switchD_001005dc_caseD_62;
          bVar33 = uVar20 < uVar27;
          switch(uVar28) {
          case 0:
            if (!bVar33) break;
            puVar13 = *(ushort **)(param_6 + 0x88);
            do {
              if (puVar13 <= puVar15) {
                if ((*(short *)(param_6 + 0x60) != 0) &&
                   (((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)) &&
                    (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
                goto LAB_00102f0a;
                break;
              }
              iVar5 = 1;
              if (uVar24 != 0) {
                iVar5 = ((*puVar15 & 0xfc00) == 0xd800) + 1;
              }
              if (iVar3 == 0xf) break;
              uVar20 = uVar20 + 1;
              puVar15 = puVar15 + iVar5;
              puVar31[10] = (ulong)puVar15;
            } while (uVar20 < uVar27);
LAB_00106c29:
            if (local_c8 == 2) goto LAB_00106c34;
            goto LAB_00101108;
          case 1:
            if (bVar33) {
              puVar13 = *(ushort **)(param_6 + 0x88);
LAB_0010658b:
              if (puVar15 < puVar13) {
                uVar17 = *puVar15;
                uVar4 = (uint)uVar17;
                lVar23 = (long)(int)uVar28;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  lVar23 = 2;
                  uVar4 = ((uVar17 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
                }
                if (bVar35 != ((byte)((&DAT_0010f019)
                                      [(ulong)*(ushort *)
                                               (&_pcre2_ucd_stage2_16 +
                                               (long)(int)((uint)*(ushort *)
                                                                  (&_pcre2_ucd_stage1_16 +
                                                                  (long)((int)uVar4 >> 7) * 2) *
                                                           0x80 + (uVar4 & 0x7f)) * 2) * 0xc] - 8) <
                               2 || (&DAT_0010f019)
                                    [(ulong)*(ushort *)
                                             (&_pcre2_ucd_stage2_16 +
                                             (long)(int)((uint)*(ushort *)
                                                                (&_pcre2_ucd_stage1_16 +
                                                                (long)((int)uVar4 >> 7) * 2) * 0x80
                                                        + (uVar4 & 0x7f)) * 2) * 0xc] == '\x05'))
                goto code_r0x00106576;
              }
              else {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 != 0) &&
                   ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x0010676b:
                  if (sVar2 == 1) goto LAB_00106c29;
                  goto LAB_00102f0a;
                }
              }
              goto LAB_00106c29;
            }
            break;
          case 2:
            if (bVar33) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar13 <= puVar15) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar17 = *puVar15;
                uVar4 = (uint)uVar17;
                lVar23 = 1;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  lVar23 = (long)(int)uVar28;
                  uVar4 = ((uVar17 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
                }
                if (bVar35 == (*(int *)(&_pcre2_ucp_gentype_16 +
                                       (ulong)(byte)(&DAT_0010f019)
                                                    [(ulong)*(ushort *)
                                                             (&_pcre2_ucd_stage2_16 +
                                                             (long)(int)((uint)*(ushort *)
                                                                                (&
                                                  _pcre2_ucd_stage1_16 + (long)((int)uVar4 >> 7) * 2
                                                  ) * 0x80 + (uVar4 & 0x7f)) * 2) * 0xc] * 4) ==
                              *(int *)((long)puVar31 + 0x44))) break;
                puVar15 = puVar15 + lVar23;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar27);
              goto LAB_00106c29;
            }
            break;
          case 3:
            if (bVar33) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar13 <= puVar15) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar17 = *puVar15;
                uVar28 = (uint)uVar17;
                lVar23 = 1;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  lVar23 = 2;
                  uVar28 = ((uVar17 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
                }
                if (bVar35 == ((uint)(byte)(&DAT_0010f019)
                                           [(ulong)*(ushort *)
                                                    (&_pcre2_ucd_stage2_16 +
                                                    (long)(int)((uint)*(ushort *)
                                                                       (&_pcre2_ucd_stage1_16 +
                                                                       (long)((int)uVar28 >> 7) * 2)
                                                                * 0x80 + (uVar28 & 0x7f)) * 2) * 0xc
                                           ] == *(uint *)((long)puVar31 + 0x44))) break;
                puVar15 = puVar15 + lVar23;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar27);
              goto LAB_00106c29;
            }
            break;
          case 4:
            if (bVar33) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar13 <= puVar15) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar17 = *puVar15;
                uVar28 = (uint)uVar17;
                lVar23 = 1;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  lVar23 = 2;
                  uVar28 = ((uVar17 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
                }
                if (bVar35 == ((uint)(byte)(&_pcre2_ucd_records_16)
                                           [(ulong)*(ushort *)
                                                    (&_pcre2_ucd_stage2_16 +
                                                    (long)(int)((uint)*(ushort *)
                                                                       (&_pcre2_ucd_stage1_16 +
                                                                       (long)((int)uVar28 >> 7) * 2)
                                                                * 0x80 + (uVar28 & 0x7f)) * 2) * 0xc
                                           ] == *(uint *)((long)puVar31 + 0x44))) break;
                puVar15 = puVar15 + lVar23;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar27);
              goto LAB_00106c29;
            }
            break;
          case 5:
            if (bVar33) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar13 <= puVar15) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar17 = *puVar15;
                uVar28 = (uint)uVar17;
                lVar23 = 1;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  lVar23 = 2;
                  uVar28 = ((uVar17 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
                }
                uVar4 = *(uint *)((long)puVar31 + 0x44);
                bVar33 = true;
                if ((byte)(&_pcre2_ucd_records_16)
                          [(ulong)*(ushort *)
                                   (&_pcre2_ucd_stage2_16 +
                                   (long)(int)((uint)*(ushort *)
                                                      (&_pcre2_ucd_stage1_16 +
                                                      (long)((int)uVar28 >> 7) * 2) * 0x80 +
                                              (uVar28 & 0x7f)) * 2) * 0xc] != uVar4) {
                  bVar33 = (1 << ((byte)uVar4 & 0x1f) &
                           *(uint *)(&_pcre2_ucd_script_sets_16 +
                                    ((ulong)(*(ushort *)
                                              (&_pcre2_ucd_caseless_sets_16 +
                                              (ulong)*(ushort *)
                                                      (&_pcre2_ucd_stage2_16 +
                                                      (long)(int)((uint)*(ushort *)
                                                                         (&_pcre2_ucd_stage1_16 +
                                                                         (long)((int)uVar28 >> 7) *
                                                                         2) * 0x80 + (uVar28 & 0x7f)
                                                                 ) * 2) * 0xc) & 0x3ff) +
                                    (ulong)(uVar4 >> 5)) * 4)) != 0;
                }
                if (bVar35 == bVar33) break;
                puVar15 = puVar15 + lVar23;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar27);
              goto LAB_00106c29;
            }
            break;
          case 6:
            if (bVar33) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar13 <= puVar15) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar17 = *puVar15;
                uVar28 = (uint)uVar17;
                lVar23 = 1;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  lVar23 = 2;
                  uVar28 = ((uVar17 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
                }
                if (bVar35 == ((*(uint *)(&_pcre2_ucp_gentype_16 +
                                         (ulong)(byte)(&DAT_0010f019)
                                                      [(ulong)*(ushort *)
                                                               (&_pcre2_ucd_stage2_16 +
                                                               (long)(int)((uint)*(ushort *)
                                                                                  (&
                                                  _pcre2_ucd_stage1_16 +
                                                  (long)((int)uVar28 >> 7) * 2) * 0x80 +
                                                  (uVar28 & 0x7f)) * 2) * 0xc] * 4) & 0xfffffffd) ==
                              1)) break;
                puVar15 = puVar15 + lVar23;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar27);
              goto LAB_00106c29;
            }
            break;
          default:
            if (bVar33) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar13 <= puVar15) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar17 = *puVar15;
                uVar28 = (uint)uVar17;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  lVar23 = 2;
                  uVar28 = ((uVar17 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
                  goto LAB_00105ede;
                }
                if (uVar17 == 0x180e) {
LAB_00105f9d:
                  if (iVar3 == 0xf) break;
                  lVar23 = 1;
                }
                else {
                  if (uVar17 < 0x180f) {
                    if (uVar17 != 0x85) {
                      if (uVar17 < 0x86) {
                        if (uVar17 < 0xe) {
                          if (uVar17 < 9) {
LAB_00105ed9:
                            lVar23 = 1;
                            goto LAB_00105ede;
                          }
                        }
                        else if (uVar17 != 0x20) goto LAB_00105ed9;
                      }
                      else if ((uVar17 != 0xa0) && (uVar17 != 0x1680)) goto LAB_00105ed9;
                    }
                    goto LAB_00105f9d;
                  }
                  if (uVar17 < 0x2060) {
                    if (uVar17 < 0x2028) {
                      lVar23 = 1;
                      if (10 < (ushort)(uVar17 + 0xe000)) goto LAB_00105ede;
                    }
                    else if ((0x80000000000083U >> ((ulong)(ushort)(uVar17 + 0xdfd8) & 0x3f) & 1) ==
                             0) goto LAB_00105ed9;
                    goto LAB_00105f9d;
                  }
                  lVar23 = 1;
                  if (uVar17 == 0x3000) goto LAB_00105f9d;
LAB_00105ede:
                  if (bVar35 == (*(int *)(&_pcre2_ucp_gentype_16 +
                                         (ulong)(byte)(&DAT_0010f019)
                                                      [(ulong)*(ushort *)
                                                               (&_pcre2_ucd_stage2_16 +
                                                               (long)(int)((uint)*(ushort *)
                                                                                  (&
                                                  _pcre2_ucd_stage1_16 +
                                                  (long)((int)uVar28 >> 7) * 2) * 0x80 +
                                                  (uVar28 & 0x7f)) * 2) * 0xc] * 4) == 6)) break;
                }
                puVar15 = puVar15 + lVar23;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar27);
              goto LAB_00106c29;
            }
            break;
          case 9:
            if (bVar33) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar13 <= puVar15) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar17 = *puVar15;
                uVar28 = (uint)uVar17;
                lVar23 = 1;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  lVar23 = 2;
                  uVar28 = ((uVar17 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
                }
                if (bVar35 == ((*(uint *)(&_pcre2_ucp_gentype_16 +
                                         (ulong)(byte)(&DAT_0010f019)
                                                      [(ulong)*(ushort *)
                                                               (&_pcre2_ucd_stage2_16 +
                                                               (long)(int)((uVar28 & 0x7f) +
                                                                          (uint)*(ushort *)
                                                                                 (&
                                                  _pcre2_ucd_stage1_16 +
                                                  (long)((int)uVar28 >> 7) * 2) * 0x80) * 2) * 0xc]
                                         * 4) & 0xfffffffd) == 1 ||
                              ((&DAT_0010f019)
                               [(ulong)*(ushort *)
                                        (&_pcre2_ucd_stage2_16 +
                                        (long)(int)((uVar28 & 0x7f) +
                                                   (uint)*(ushort *)
                                                          (&_pcre2_ucd_stage1_16 +
                                                          (long)((int)uVar28 >> 7) * 2) * 0x80) * 2)
                                * 0xc] - 0xc & 0xfb) == 0)) break;
                puVar15 = puVar15 + lVar23;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar27);
              goto LAB_00106c29;
            }
            break;
          case 10:
            if (bVar33) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar13 <= puVar15) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar17 = *puVar15;
                uVar28 = (uint)uVar17;
                lVar23 = 1;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  lVar23 = 2;
                  uVar28 = ((uVar17 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
                }
                puVar14 = (uint *)(&_pcre2_ucd_caseless_sets_16 +
                                  (ulong)*(uint *)((long)puVar31 + 0x44) * 4);
                do {
                  uVar4 = *puVar14;
                  if (uVar28 < uVar4) break;
                  puVar14 = puVar14 + 1;
                } while (uVar4 != uVar28);
                if (iVar3 != 0xf) break;
                puVar15 = puVar15 + lVar23;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar27);
              goto LAB_00106c29;
            }
            break;
          case 0xb:
            if (bVar33) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar13 <= puVar15) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar17 = *puVar15;
                uVar28 = (uint)uVar17;
                if ((uVar24 == 0) || ((uVar17 & 0xfc00) != 0xd800)) {
                  iVar3 = 1;
                  if (((uVar17 & 0xffdf) != 0x40) && (iVar5 = 1, uVar17 != 0x24)) goto LAB_00106dd4;
                  bVar33 = true;
                }
                else {
                  uVar28 = ((uVar17 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
                  iVar5 = 2;
LAB_00106dd4:
                  iVar3 = iVar5;
                  bVar33 = uVar28 - 0xa0 < 0xd760 || 0xdfff < uVar28;
                }
                if (bVar35 == bVar33) break;
                uVar20 = uVar20 + 1;
                puVar15 = puVar15 + iVar3;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar27);
              goto LAB_00106c29;
            }
            break;
          case 0xc:
            if (bVar33) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar13 <= puVar15) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar17 = *puVar15;
                uVar28 = (uint)uVar17;
                lVar23 = 1;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  lVar23 = 2;
                  uVar28 = ((uVar17 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
                }
                if (bVar35 == ((uint)(*(ushort *)
                                       (&_pcre2_ucd_caseless_sets_16 +
                                       (ulong)*(ushort *)
                                               (&_pcre2_ucd_stage2_16 +
                                               (long)(int)((uint)*(ushort *)
                                                                  (&_pcre2_ucd_stage1_16 +
                                                                  (long)((int)uVar28 >> 7) * 2) *
                                                           0x80 + (uVar28 & 0x7f)) * 2) * 0xc) >>
                                     0xb) == *(uint *)((long)puVar31 + 0x44))) break;
                puVar15 = puVar15 + lVar23;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar27);
              goto LAB_00106c29;
            }
            break;
          case 0xd:
            if (bVar33) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar13 <= puVar15) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010676b;
                  }
                  break;
                }
                uVar17 = *puVar15;
                uVar28 = (uint)uVar17;
                lVar23 = 1;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  lVar23 = 2;
                  uVar28 = ((uVar17 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
                }
                if (bVar35 == ((1 << ((byte)*(uint *)((long)puVar31 + 0x44) & 0x1f) &
                               *(uint *)(&_pcre2_ucd_boolprop_sets_16 +
                                        ((ulong)(*(uint *)((long)puVar31 + 0x44) >> 5) +
                                        (ulong)(*(ushort *)
                                                 (&DAT_0010f022 +
                                                 (ulong)*(ushort *)
                                                         (&_pcre2_ucd_stage2_16 +
                                                         (long)(int)((uint)*(ushort *)
                                                                            (&_pcre2_ucd_stage1_16 +
                                                                            (long)((int)uVar28 >> 7)
                                                                            * 2) * 0x80 +
                                                                    (uVar28 & 0x7f)) * 2) * 0xc) &
                                               0xfff)) * 4)) != 0)) break;
                puVar15 = puVar15 + lVar23;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar27);
              goto LAB_00106c29;
            }
          }
          goto LAB_0010a44d;
        }
        iVar3 = (int)puVar31[8];
        if (iVar3 == 0x16) {
          if (uVar20 < uVar27) {
            while (puVar15 < *(ushort **)(param_6 + 0x88)) {
              uVar17 = *puVar15;
              uVar28 = (uint)uVar17;
              puVar31[10] = (ulong)(puVar15 + 1);
              if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                uVar26 = puVar15[1];
                puVar31[10] = (ulong)(puVar15 + 2);
                uVar28 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
              }
              uVar9 = _pcre2_extuni_16(uVar28,puVar31[10],*(undefined8 *)(param_6 + 0x78));
              puVar31[10] = uVar9;
              if ((((*(ulong *)(param_6 + 0x88) <= uVar9) && (*(short *)(param_6 + 0x60) != 0)) &&
                  ((*(ulong *)(param_6 + 0xa0) < uVar9 || (*(int *)(param_6 + 0x30) != 0)))) &&
                 (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
              goto LAB_00102f0a;
              uVar20 = uVar20 + 1;
              if (*(uint *)((long)puVar31 + 0x3c) <= uVar20) goto LAB_0010a402;
              puVar15 = (ushort *)puVar31[10];
            }
            if ((*(short *)(param_6 + 0x60) != 0) &&
               (((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)) &&
                (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
            goto LAB_00102f0a;
          }
LAB_0010a402:
          if (local_c8 != 2) {
LAB_0010a40d:
            if (puVar31[1] < puVar31[10]) {
              *(undefined1 *)(puVar31 + 9) = 0xdc;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            }
          }
          goto LAB_001005ba;
        }
        if (uVar24 != 0) {
          switch(iVar3) {
          case 6:
            if (uVar20 < uVar27) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar13 <= puVar15) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010bfb1;
                  }
                  break;
                }
                uVar17 = *puVar15;
                if ((uVar17 & 0xfc00) == 0xd800) {
                  lVar23 = 2;
                }
                else {
                  if ((uVar17 < 0x100) &&
                     ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar17) & 8) != 0)) break;
                  lVar23 = 1;
                }
                puVar15 = puVar15 + lVar23;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar27);
            }
            break;
          case 7:
            if (uVar20 < uVar27) {
              puVar13 = *(ushort **)(param_6 + 0x88);
LAB_0010772d:
              if (puVar15 < puVar13) {
                uVar17 = *puVar15;
                if ((((uVar17 & 0xfc00) != 0xd800) && (uVar17 < 0x100)) &&
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar17) & 8) != 0))
                goto code_r0x00107718;
              }
              else {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 != 0) &&
                   ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x0010bf33:
                  if (sVar2 == 1) break;
                  goto LAB_00102f0a;
                }
              }
              break;
            }
            break;
          case 8:
            if (uVar20 < uVar27) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar13 <= puVar15) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010bf33;
                  }
                  break;
                }
                uVar17 = *puVar15;
                if ((uVar17 & 0xfc00) == 0xd800) {
                  lVar23 = 2;
                }
                else {
                  if ((uVar17 < 0x100) &&
                     ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar17) & 1) != 0)) break;
                  lVar23 = 1;
                }
                puVar15 = puVar15 + lVar23;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar27);
            }
            break;
          case 9:
            if (uVar20 < uVar27) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              while (puVar15 < puVar13) {
                uVar17 = *puVar15;
                if ((((uVar17 & 0xfc00) == 0xd800) || (0xff < uVar17)) ||
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar17) & 1) == 0))
                goto LAB_001073b1;
                puVar15 = puVar15 + 1;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
                if (uVar27 <= uVar20) goto LAB_001073b1;
              }
              sVar2 = *(short *)(param_6 + 0x60);
              if ((sVar2 != 0) &&
                 ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x0010bf33;
              }
            }
            break;
          case 10:
            if (uVar20 < uVar27) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar13 <= puVar15) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010bf33;
                  }
                  break;
                }
                uVar17 = *puVar15;
                if ((uVar17 & 0xfc00) == 0xd800) {
                  lVar23 = 2;
                }
                else {
                  if ((uVar17 < 0x100) &&
                     ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar17) & 0x10) != 0)) break;
                  lVar23 = 1;
                }
                puVar15 = puVar15 + lVar23;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar27);
            }
            break;
          case 0xb:
            if (uVar20 < uVar27) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              while (puVar15 < puVar13) {
                uVar17 = *puVar15;
                if ((((uVar17 & 0xfc00) == 0xd800) || (0xff < uVar17)) ||
                   ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)uVar17) & 0x10) == 0))
                goto LAB_001073b1;
                puVar15 = puVar15 + 1;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
                if (uVar27 <= uVar20) goto LAB_001073b1;
              }
              sVar2 = *(short *)(param_6 + 0x60);
              if ((sVar2 != 0) &&
                 ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x0010bfb1;
              }
            }
            break;
          case 0xc:
            if (uVar20 < uVar27) {
              while (puVar15 < *(ushort **)(param_6 + 0x88)) {
                if (*(int *)(param_6 + 0xe4) == 0) {
                  if (((puVar15 <= *(ushort **)(param_6 + 0x88) + -(ulong)*(uint *)(param_6 + 0xe8))
                      && (*puVar15 == *(ushort *)(param_6 + 0xec))) &&
                     ((*(uint *)(param_6 + 0xe8) == 1 || (puVar15[1] == *(ushort *)(param_6 + 0xee))
                      ))) goto LAB_001073b1;
                }
                else {
                  iVar3 = _pcre2_is_newline_16();
                  if (iVar3 != 0) goto LAB_001073b1;
                  puVar15 = (ushort *)puVar31[10];
                }
                if (*(short *)(param_6 + 0x60) == 0) {
                  puVar31[10] = (ulong)(puVar15 + 1);
                  if (puVar15 + 1 < *(ushort **)(param_6 + 0x88)) {
LAB_001074b6:
                    if ((puVar15[1] & 0xfc00) == 0xdc00) {
                      puVar13 = puVar15 + 2;
                      goto LAB_00107440;
                    }
                  }
                }
                else {
                  puVar13 = puVar15 + 1;
                  if (puVar13 < *(ushort **)(param_6 + 0x88)) {
                    puVar31[10] = (ulong)puVar13;
                    goto LAB_001074b6;
                  }
                  if ((((*(int *)(param_6 + 0xe4) == 0) && (*(int *)(param_6 + 0xe8) == 2)) &&
                      (*puVar15 == *(ushort *)(param_6 + 0xec))) &&
                     (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
                  goto LAB_00102f0a;
LAB_00107440:
                  puVar31[10] = (ulong)puVar13;
                }
                uVar20 = uVar20 + 1;
                if (*(uint *)((long)puVar31 + 0x3c) <= uVar20) goto LAB_001073b1;
                puVar15 = (ushort *)puVar31[10];
              }
              sVar2 = *(short *)(param_6 + 0x60);
              if ((sVar2 != 0) &&
                 ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x0010bfb1;
              }
            }
            break;
          case 0xd:
            if (uVar27 == 0xffffffff) {
              uVar9 = *(ulong *)(param_6 + 0x88);
              sVar2 = *(short *)(param_6 + 0x60);
              puVar31[10] = uVar9;
              if ((sVar2 != 0) &&
                 ((*(ulong *)(param_6 + 0xa0) < uVar9 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x0010bfb1:
                if (sVar2 != 1) goto LAB_00102f0a;
              }
            }
            else if (uVar20 < uVar27) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              while (puVar15 < puVar13) {
                puVar31[10] = (ulong)(puVar15 + 1);
                if ((puVar15 + 1 < puVar13) && ((puVar15[1] & 0xfc00) == 0xdc00)) {
                  puVar31[10] = (ulong)(puVar15 + 2);
                }
                uVar20 = uVar20 + 1;
                if (uVar27 == uVar20) goto LAB_001073b1;
                puVar15 = (ushort *)puVar31[10];
              }
              sVar2 = *(short *)(param_6 + 0x60);
              if ((sVar2 != 0) &&
                 ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x0010bfb1;
              }
            }
            break;
          case 0xe:
            uVar9 = *(ulong *)(param_6 + 0x88);
            if ((uint)((long)(uVar9 - (long)puVar15) >> 1) < uVar27 - uVar20) {
              sVar2 = *(short *)(param_6 + 0x60);
              puVar31[10] = uVar9;
              if ((sVar2 != 0) &&
                 ((*(ulong *)(param_6 + 0xa0) < uVar9 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x0010bfb1;
              }
            }
            else {
              puVar31[10] = (ulong)(puVar15 + (uVar27 - uVar20));
            }
            break;
          default:
            goto switchD_001005dc_caseD_62;
          case 0x11:
            if (uVar20 < uVar27) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              while (puVar15 < puVar13) {
                uVar17 = *puVar15;
                if ((uVar17 & 0xfc00) == 0xd800) goto LAB_001073b1;
                uVar28 = (uint)uVar17;
                if (uVar17 == 0xd) {
                  puVar31[10] = (ulong)(puVar15 + 1);
                  if (puVar13 <= puVar15 + 1) goto LAB_001073b1;
                  if (puVar15[1] == 10) {
                    puVar31[10] = (ulong)(puVar15 + 2);
                  }
                }
                else {
                  if ((uVar28 != 10) &&
                     ((*(short *)(param_6 + 0x62) == 2 ||
                      (((1 < uVar28 - 0xb && (uVar28 != 0x85)) && (1 < uVar28 - 0x2028))))))
                  goto LAB_001073b1;
                  puVar31[10] = (ulong)(puVar15 + 1);
                }
                uVar20 = uVar20 + 1;
                if (uVar27 <= uVar20) goto LAB_001073b1;
                puVar15 = (ushort *)puVar31[10];
              }
              sVar2 = *(short *)(param_6 + 0x60);
              if ((sVar2 != 0) &&
                 ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x0010bfb1;
              }
            }
            break;
          case 0x12:
          case 0x13:
            if (uVar20 < uVar27) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar13 <= puVar15) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010bf33;
                  }
                  break;
                }
                uVar17 = *puVar15;
                if ((uVar17 & 0xfc00) == 0xd800) {
                  lVar23 = 2;
                  bVar35 = false;
                  goto LAB_001075ac;
                }
                if (uVar17 == 0x180e) {
LAB_0010ae34:
                  lVar23 = 1;
                  bVar35 = true;
                }
                else {
                  if (0x180e < uVar17) {
                    if (uVar17 != 0x205f) {
                      if (uVar17 < 0x2060) {
                        if (uVar17 < 0x200b) {
                          lVar23 = 1;
                          bVar35 = 0x1fff < uVar17;
                        }
                        else {
                          bVar35 = uVar17 == 0x202f;
                          lVar23 = 1;
                        }
                      }
                      else {
                        bVar35 = uVar17 == 0x3000;
                        lVar23 = 1;
                      }
                      goto LAB_001075ac;
                    }
                    goto LAB_0010ae34;
                  }
                  if (uVar17 == 0xa0) goto LAB_0010ae34;
                  if (uVar17 < 0xa1) {
                    if (uVar17 == 9) goto LAB_0010ae34;
                    bVar35 = uVar17 == 0x20;
                    lVar23 = 1;
                  }
                  else {
                    bVar35 = uVar17 == 0x1680;
                    lVar23 = 1;
                  }
                }
LAB_001075ac:
                if ((iVar3 == 0x12) == bVar35) break;
                puVar15 = puVar15 + lVar23;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar27);
            }
            break;
          case 0x14:
          case 0x15:
            if (uVar20 < uVar27) {
              puVar13 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar13 <= puVar15) {
                  sVar2 = *(short *)(param_6 + 0x60);
                  if ((sVar2 != 0) &&
                     ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))))
                  {
                    *(undefined4 *)(param_6 + 0x28) = 1;
                    goto joined_r0x0010bf33;
                  }
                  break;
                }
                uVar17 = *puVar15;
                if ((uVar17 & 0xfc00) == 0xd800) {
                  lVar23 = 2;
                  bVar35 = false;
                }
                else if (uVar17 == 0x85) {
                  lVar23 = 1;
                  bVar35 = true;
                }
                else if (uVar17 < 0x86) {
                  lVar23 = 1;
                  bVar35 = (ushort)(uVar17 - 10) < 4;
                }
                else {
                  lVar23 = 1;
                  bVar35 = (ushort)(uVar17 + 0xdfd8) < 2;
                }
                if ((iVar3 == 0x14) == bVar35) break;
                puVar15 = puVar15 + lVar23;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar27);
            }
          }
LAB_001073b1:
          if (local_c8 == 2) goto LAB_00106c34;
LAB_00101169:
          if (puVar31[1] < puVar31[10]) {
LAB_00101177:
            *(undefined1 *)(puVar31 + 9) = 0xdd;
            param_2 = (ushort *)*puVar31;
            uVar20 = 0;
            puVar21 = puVar31;
            goto LAB_00101cc8;
          }
          goto LAB_001005ba;
        }
        switch(iVar3) {
        case 6:
          if (uVar20 < uVar27) {
            puVar13 = *(ushort **)(param_6 + 0x88);
            do {
              if (puVar13 <= puVar15) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 != 0) &&
                   ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x0010c206;
                }
                break;
              }
              if ((*puVar15 < 0x100) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar15) & 8) != 0)) break;
              puVar15 = puVar15 + 1;
              uVar20 = uVar20 + 1;
              puVar31[10] = (ulong)puVar15;
            } while (uVar20 < uVar27);
          }
          break;
        case 7:
          if (uVar20 < uVar27) {
            puVar13 = *(ushort **)(param_6 + 0x88);
LAB_00108883:
            if (puVar15 < puVar13) {
              if ((*puVar15 < 0x100) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar15) & 8) != 0))
              goto code_r0x0010886e;
            }
            else {
              sVar2 = *(short *)(param_6 + 0x60);
              if ((sVar2 != 0) &&
                 ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
                *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x0010c1c1:
                if (sVar2 == 1) break;
                goto LAB_00102f0a;
              }
            }
            break;
          }
          break;
        case 8:
          if (uVar20 < uVar27) {
            puVar13 = *(ushort **)(param_6 + 0x88);
            do {
              if (puVar13 <= puVar15) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 != 0) &&
                   ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x0010c1c1;
                }
                break;
              }
              if ((*puVar15 < 0x100) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar15) & 1) != 0)) break;
              puVar15 = puVar15 + 1;
              uVar20 = uVar20 + 1;
              puVar31[10] = (ulong)puVar15;
            } while (uVar20 < uVar27);
          }
          break;
        case 9:
          if (uVar20 < uVar27) {
            puVar13 = *(ushort **)(param_6 + 0x88);
            while (puVar15 < puVar13) {
              if ((0xff < *puVar15) ||
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar15) & 1) == 0))
              goto LAB_001084a6;
              puVar15 = puVar15 + 1;
              uVar20 = uVar20 + 1;
              puVar31[10] = (ulong)puVar15;
              if (uVar27 <= uVar20) goto LAB_001084a6;
            }
            sVar2 = *(short *)(param_6 + 0x60);
            if ((sVar2 != 0) &&
               ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
              *(undefined4 *)(param_6 + 0x28) = 1;
              goto joined_r0x0010c1c1;
            }
          }
          break;
        case 10:
          if (uVar20 < uVar27) {
            puVar13 = *(ushort **)(param_6 + 0x88);
            do {
              if (puVar13 <= puVar15) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 != 0) &&
                   ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x0010c1c1;
                }
                break;
              }
              if ((*puVar15 < 0x100) &&
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar15) & 0x10) != 0)) break;
              puVar15 = puVar15 + 1;
              uVar20 = uVar20 + 1;
              puVar31[10] = (ulong)puVar15;
            } while (uVar20 < uVar27);
          }
          break;
        case 0xb:
          if (uVar20 < uVar27) {
            puVar13 = *(ushort **)(param_6 + 0x88);
            while (puVar15 < puVar13) {
              if ((0xff < *puVar15) ||
                 ((*(byte *)(*(long *)(param_6 + 0x48) + (ulong)*puVar15) & 0x10) == 0))
              goto LAB_001084a6;
              puVar15 = puVar15 + 1;
              uVar20 = uVar20 + 1;
              puVar31[10] = (ulong)puVar15;
              if (uVar27 <= uVar20) goto LAB_001084a6;
            }
            sVar2 = *(short *)(param_6 + 0x60);
            if ((sVar2 != 0) &&
               ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
              *(undefined4 *)(param_6 + 0x28) = 1;
              goto joined_r0x0010c206;
            }
          }
          break;
        case 0xc:
          if (uVar20 < uVar27) {
            while (puVar15 < *(ushort **)(param_6 + 0x88)) {
              if (*(int *)(param_6 + 0xe4) == 0) {
                if (((puVar15 <= *(ushort **)(param_6 + 0x88) + -(ulong)*(uint *)(param_6 + 0xe8))
                    && (*puVar15 == *(ushort *)(param_6 + 0xec))) &&
                   ((*(uint *)(param_6 + 0xe8) == 1 || (puVar15[1] == *(ushort *)(param_6 + 0xee))))
                   ) goto LAB_001084a6;
              }
              else {
                iVar3 = _pcre2_is_newline_16();
                if (iVar3 != 0) goto LAB_001084a6;
              }
              if (((((*(short *)(param_6 + 0x60) != 0) &&
                    (*(short **)(param_6 + 0x88) <= (short *)puVar31[10] + 1)) &&
                   (*(int *)(param_6 + 0xe4) == 0)) &&
                  ((*(int *)(param_6 + 0xe8) == 2 &&
                   (*(short *)puVar31[10] == *(short *)(param_6 + 0xec))))) &&
                 (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
              goto LAB_00102f0a;
              puVar31[10] = puVar31[10] + 2;
              uVar20 = uVar20 + 1;
              if (*(uint *)((long)puVar31 + 0x3c) <= uVar20) goto LAB_001084a6;
              puVar15 = (ushort *)puVar31[10];
            }
            sVar2 = *(short *)(param_6 + 0x60);
            if ((sVar2 != 0) &&
               ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
              *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x0010c206:
              if (sVar2 != 1) goto LAB_00102f0a;
            }
          }
          break;
        case 0xd:
        case 0xe:
          uVar9 = *(ulong *)(param_6 + 0x88);
          if ((uint)((long)(uVar9 - (long)puVar15) >> 1) < uVar27 - uVar20) {
            sVar2 = *(short *)(param_6 + 0x60);
            puVar31[10] = uVar9;
            if ((sVar2 != 0) &&
               ((*(ulong *)(param_6 + 0xa0) < uVar9 || (*(int *)(param_6 + 0x30) != 0)))) {
              *(undefined4 *)(param_6 + 0x28) = 1;
              goto joined_r0x0010c206;
            }
          }
          else {
            puVar31[10] = (ulong)(puVar15 + (uVar27 - uVar20));
          }
          break;
        default:
          goto switchD_001005dc_caseD_62;
        case 0x11:
          if (uVar20 < uVar27) {
            puVar13 = *(ushort **)(param_6 + 0x88);
            while (puVar15 < puVar13) {
              uVar28 = (uint)*puVar15;
              if (uVar28 == 0xd) {
                puVar31[10] = (ulong)(puVar15 + 1);
                if (puVar13 <= puVar15 + 1) goto LAB_001084a6;
                if (puVar15[1] == 10) {
                  puVar31[10] = (ulong)(puVar15 + 2);
                }
              }
              else {
                if ((uVar28 != 10) &&
                   ((*(short *)(param_6 + 0x62) == 2 ||
                    (((1 < uVar28 - 0xb && (uVar28 != 0x85)) && (1 < uVar28 - 0x2028))))))
                goto LAB_001084a6;
                puVar31[10] = (ulong)(puVar15 + 1);
              }
              uVar20 = uVar20 + 1;
              if (uVar27 <= uVar20) goto LAB_001084a6;
              puVar15 = (ushort *)puVar31[10];
            }
            sVar2 = *(short *)(param_6 + 0x60);
            if ((sVar2 != 0) &&
               ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
              *(undefined4 *)(param_6 + 0x28) = 1;
              goto joined_r0x0010c206;
            }
          }
          break;
        case 0x12:
          if (uVar20 < uVar27) {
            puVar13 = *(ushort **)(param_6 + 0x88);
            do {
              if (puVar13 <= puVar15) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 != 0) &&
                   ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x0010c1c1;
                }
                break;
              }
              uVar17 = *puVar15;
              if (uVar17 == 0x180e) break;
              if (uVar17 < 0x180f) {
                if (uVar17 == 0xa0) break;
                if (uVar17 < 0xa1) {
                  if ((uVar17 == 9) || (uVar17 == 0x20)) break;
                }
                else if (uVar17 == 0x1680) break;
              }
              else {
                if (uVar17 == 0x205f) break;
                if (uVar17 < 0x2060) {
                  if (uVar17 < 0x200b) {
                    if (0x1fff < uVar17) break;
                  }
                  else if (uVar17 == 0x202f) break;
                }
                else if (uVar17 == 0x3000) break;
              }
              puVar15 = puVar15 + 1;
              uVar20 = uVar20 + 1;
              puVar31[10] = (ulong)puVar15;
            } while (uVar20 < uVar27);
          }
          break;
        case 0x13:
          if (uVar20 < uVar27) {
            puVar13 = *(ushort **)(param_6 + 0x88);
            do {
              if (puVar13 <= puVar15) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 != 0) &&
                   ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x0010c1c1;
                }
                break;
              }
              uVar17 = *puVar15;
              if (uVar17 != 0x180e) {
                if (uVar17 < 0x180f) {
                  if (uVar17 != 0xa0) {
                    if (uVar17 < 0xa1) {
                      if ((uVar17 != 9) && (uVar17 != 0x20)) break;
                    }
                    else if (uVar17 != 0x1680) break;
                  }
                }
                else if (uVar17 != 0x205f) {
                  if (uVar17 < 0x2060) {
                    if (uVar17 < 0x200b) {
                      if (uVar17 < 0x2000) break;
                    }
                    else if (uVar17 != 0x202f) break;
                  }
                  else if (uVar17 != 0x3000) break;
                }
              }
              puVar15 = puVar15 + 1;
              uVar20 = uVar20 + 1;
              puVar31[10] = (ulong)puVar15;
            } while (uVar20 < uVar27);
          }
          break;
        case 0x14:
          if (uVar20 < uVar27) {
            puVar13 = *(ushort **)(param_6 + 0x88);
            do {
              if (puVar13 <= puVar15) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 != 0) &&
                   ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x0010c1c1;
                }
                break;
              }
              uVar17 = *puVar15;
              if (uVar17 == 0x85) break;
              if (uVar17 < 0x86) {
                if ((ushort)(uVar17 - 10) < 4) break;
              }
              else if ((ushort)(uVar17 + 0xdfd8) < 2) break;
              puVar15 = puVar15 + 1;
              uVar20 = uVar20 + 1;
              puVar31[10] = (ulong)puVar15;
            } while (uVar20 < uVar27);
          }
          break;
        case 0x15:
          if (uVar20 < uVar27) {
            puVar13 = *(ushort **)(param_6 + 0x88);
            do {
              if (puVar13 <= puVar15) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 != 0) &&
                   ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
                  *(undefined4 *)(param_6 + 0x28) = 1;
                  goto joined_r0x0010c1c1;
                }
                break;
              }
              uVar17 = *puVar15;
              if (uVar17 != 0x85) {
                if (uVar17 < 0x86) {
                  if (3 < (ushort)(uVar17 - 10)) break;
                }
                else if (1 < (ushort)(uVar17 + 0xdfd8)) break;
              }
              puVar15 = puVar15 + 1;
              uVar20 = uVar20 + 1;
              puVar31[10] = (ulong)puVar15;
            } while (uVar20 < uVar27);
          }
        }
LAB_001084a6:
        if (local_c8 != 2) {
LAB_001008fb:
          if (puVar31[10] != puVar31[1]) {
LAB_00100909:
            *(undefined1 *)(puVar31 + 9) = 0x22;
            param_2 = (ushort *)*puVar31;
            uVar20 = 0;
            puVar21 = puVar31;
            goto LAB_00101cc8;
          }
          goto LAB_001005ba;
        }
LAB_00106c34:
        local_c8 = 2;
        goto LAB_001005ba;
         default:
        goto switchD_001005dc_caseD_62;
         case 0x6e:
         case 0x6f:
        puVar13 = puVar15 + 1;
        *puVar31 = (ulong)(puVar15 + 0x11);
        uVar17 = puVar15[0x11];
        puVar31[2] = (ulong)puVar13;
        if (uVar17 < 0x6d) {
          if (uVar17 < 0x6a) {
            if (0x67 < uVar17) goto LAB_00109c19;
            if (uVar17 < 0x62) goto LAB_00109c09;
          }
          *puVar31 = (ulong)(puVar15 + 0x12);
          uVar9 = (ulong)(uVar17 - 0x62);
          local_c8 = *(uint *)(rep_typ + uVar9 * 4);
          puVar31[7] = CONCAT44(*(undefined4 *)(rep_max + uVar9 * 4),
                                *(undefined4 *)(rep_min + uVar9 * 4));
        }
        else if (uVar17 == 0x6d) {
LAB_00109c19:
          *(uint *)(puVar31 + 7) = (uint)puVar15[0x12];
          uVar20 = (uint)puVar15[0x13];
          if (puVar15[0x13] == 0) {
            uVar20 = 0xffffffff;
          }
          *puVar31 = (ulong)(puVar15 + 0x14);
          *(uint *)((long)puVar31 + 0x3c) = uVar20;
          local_c8 = *(uint *)(rep_typ + (long)(int)(uVar17 - 0x62) * 4);
        }
        else {
LAB_00109c09:
          puVar31[7] = _LC5;
        }
        uVar20 = (uint)puVar31[7];
        if (uVar24 == 0) {
          if (uVar20 != 0) {
            puVar15 = *(ushort **)(param_6 + 0x88);
            uVar28 = 1;
            do {
              puVar8 = (ushort *)puVar31[10];
              if (puVar15 <= puVar8) goto LAB_00109996;
              puVar31[10] = (ulong)(puVar8 + 1);
              uVar17 = *puVar8;
              if (uVar17 < 0x100) {
                if ((*(byte *)((long)puVar13 + (ulong)(uVar17 >> 3)) >> (uVar17 & 7) & 1) == 0)
                goto switchD_001005dc_caseD_a3;
              }
              else if (bVar16 == 0x6e) goto switchD_001005dc_caseD_a3;
              uVar28 = uVar28 + 1;
            } while (uVar28 <= uVar20);
          }
        }
        else if (uVar20 != 0) {
          puVar15 = *(ushort **)(param_6 + 0x88);
          uVar28 = 1;
          do {
            puVar8 = (ushort *)puVar31[10];
            if (puVar15 <= puVar8) goto LAB_00109996;
            puVar31[10] = (ulong)(puVar8 + 1);
            uVar17 = *puVar8;
            if ((uVar17 & 0xfc00) == 0xd800) {
              puVar31[10] = (ulong)(puVar8 + 2);
LAB_00109402:
              if (bVar16 == 0x6e) goto switchD_001005dc_caseD_a3;
            }
            else {
              if (0xff < uVar17) goto LAB_00109402;
              if ((*(byte *)((long)puVar13 + (ulong)(uVar17 >> 3)) >> (uVar17 & 7) & 1) == 0)
              goto switchD_001005dc_caseD_a3;
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 <= uVar20);
        }
        uVar28 = *(uint *)((long)puVar31 + 0x3c);
        if (uVar20 != uVar28) {
          if (local_c8 == 0) {
            if (uVar24 == 0) {
LAB_0010244a:
              *(undefined1 *)(puVar31 + 9) = 0x17;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
            }
            else {
LAB_001028c5:
              *(undefined1 *)(puVar31 + 9) = 200;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
            }
            goto LAB_00101cc8;
          }
          puVar15 = (ushort *)puVar31[10];
          puVar31[1] = (ulong)puVar15;
          if (uVar24 == 0) {
            if (uVar28 <= uVar20) {
              if (local_c8 == 2) goto LAB_00106c34;
LAB_00100c32:
              *(undefined1 *)(puVar31 + 9) = 0x18;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            }
            puVar8 = *(ushort **)(param_6 + 0x88);
            do {
              if (puVar8 <= puVar15) {
                if ((*(short *)(param_6 + 0x60) != 0) &&
                   (((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)) &&
                    (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
                goto LAB_00102f0a;
                break;
              }
              uVar17 = *puVar15;
              if (uVar17 < 0x100) {
                if ((*(byte *)((long)puVar13 + (ulong)(uVar17 >> 3)) >> (uVar17 & 7) & 1) == 0)
                break;
              }
              else if (bVar16 == 0x6e) break;
              puVar15 = puVar15 + 1;
              uVar20 = uVar20 + 1;
              puVar31[10] = (ulong)puVar15;
            } while (uVar20 < uVar28);
            if (local_c8 != 2) goto LAB_00100c21;
          }
          else {
            if (uVar20 < uVar28) {
              puVar8 = *(ushort **)(param_6 + 0x88);
              do {
                if (puVar8 <= puVar15) {
                  if (((*(short *)(param_6 + 0x60) != 0) &&
                      ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0))))
                     && (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
                  goto LAB_00102f0a;
                  break;
                }
                uVar17 = *puVar15;
                if ((uVar17 & 0xfc00) == 0xd800) {
                  lVar23 = 2;
LAB_0010a722:
                  if (bVar16 == 0x6e) break;
                }
                else {
                  if (0xff < uVar17) {
                    lVar23 = 1;
                    goto LAB_0010a722;
                  }
                  if ((*(byte *)((long)puVar13 + (ulong)(uVar17 >> 3)) >> (uVar17 & 7) & 1) == 0)
                  break;
                  lVar23 = 1;
                }
                puVar15 = puVar15 + lVar23;
                uVar20 = uVar20 + 1;
                puVar31[10] = (ulong)puVar15;
              } while (uVar20 < uVar28);
            }
            if (local_c8 != 2) {
LAB_00101aca:
              *(undefined1 *)(puVar31 + 9) = 0xc9;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            }
          }
        }
        goto LAB_001005ba;
         case 0x70:
        puVar31[2] = (ulong)(puVar15 + 2);
        puVar15 = puVar15 + puVar15[1];
        uVar17 = *puVar15;
        *puVar31 = (ulong)puVar15;
        if (uVar17 < 0x6d) {
          if (uVar17 < 0x6a) {
            if (0x67 < uVar17) goto LAB_00109ab4;
            if (uVar17 < 0x62) goto LAB_00109aa4;
          }
          uVar9 = (ulong)(uVar17 - 0x62);
          *puVar31 = (ulong)(puVar15 + 1);
          local_c8 = *(uint *)(rep_typ + uVar9 * 4);
          puVar31[7] = CONCAT44(*(undefined4 *)(rep_max + uVar9 * 4),
                                *(undefined4 *)(rep_min + uVar9 * 4));
LAB_001043fe:
          uVar20 = (uint)puVar31[7];
          if (uVar20 != 0) {
LAB_0010440b:
            uVar28 = 1;
            do {
              puVar15 = (ushort *)puVar31[10];
              if (*(ushort **)(param_6 + 0x88) <= puVar15) {
                sVar2 = *(short *)(param_6 + 0x60);
                if ((sVar2 == 0) ||
                   ((puVar15 <= *(ushort **)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
                goto switchD_001005dc_caseD_a3;
                *(undefined4 *)(param_6 + 0x28) = 1;
                goto joined_r0x00107f3c;
              }
              uVar17 = *puVar15;
              uVar20 = (uint)uVar17;
              puVar31[10] = (ulong)(puVar15 + 1);
              if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                uVar26 = puVar15[1];
                puVar31[10] = (ulong)(puVar15 + 2);
                uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
              }
              iVar3 = _pcre2_xclass_16(uVar20,puVar31[2],bVar34);
              if (iVar3 == 0) {
                uVar20 = 0;
                goto switchD_00100677_caseD_23;
              }
              uVar20 = (uint)puVar31[7];
              uVar28 = uVar28 + 1;
            } while (uVar28 <= uVar20);
          }
          if (*(uint *)((long)puVar31 + 0x3c) == uVar20) goto LAB_001005ba;
          if (local_c8 != 0) {
            puVar15 = (ushort *)puVar31[10];
            puVar31[1] = (ulong)puVar15;
            if (uVar20 < *(uint *)((long)puVar31 + 0x3c)) {
LAB_00109b8a:
              while (puVar15 < *(ushort **)(param_6 + 0x88)) {
                uVar17 = *puVar15;
                uVar28 = (uint)uVar17;
                iVar3 = 1;
                if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
                  iVar3 = 2;
                  uVar28 = ((uVar17 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
                }
                iVar5 = _pcre2_xclass_16(uVar28,puVar31[2],bVar34);
                if (iVar5 == 0) goto LAB_00109bce;
                uVar20 = uVar20 + 1;
                puVar31[10] = puVar31[10] + (long)iVar3 * 2;
                if (*(uint *)((long)puVar31 + 0x3c) <= uVar20) goto LAB_00109bce;
                puVar15 = (ushort *)puVar31[10];
              }
              if ((*(short *)(param_6 + 0x60) != 0) &&
                 (((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)) &&
                  (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
              goto LAB_00102f0a;
            }
LAB_00109bce:
            if (local_c8 != 2) {
LAB_00101b94:
              *(undefined1 *)(puVar31 + 9) = 0x65;
              param_2 = (ushort *)*puVar31;
              uVar20 = 0;
              puVar21 = puVar31;
              goto LAB_00101cc8;
            }
            goto LAB_001005ba;
          }
        }
        else {
          if (uVar17 != 0x6d) {
LAB_00109aa4:
            puVar31[7] = _LC5;
            goto LAB_001043fe;
          }
LAB_00109ab4:
          uVar26 = puVar15[2];
          uVar28 = (uint)uVar26;
          uVar1 = puVar15[1];
          uVar20 = (uint)uVar1;
          *(uint *)(puVar31 + 7) = (uint)uVar1;
          if (uVar26 == 0) {
            uVar28 = 0xffffffff;
          }
          *puVar31 = (ulong)(puVar15 + 3);
          *(uint *)((long)puVar31 + 0x3c) = uVar28;
          local_c8 = *(uint *)(rep_typ + (long)(int)(uVar17 - 0x62) * 4);
          if (uVar1 != 0) goto LAB_0010440b;
          if (local_c8 != 0) {
            puVar15 = (ushort *)puVar31[10];
            puVar31[1] = (ulong)puVar15;
            goto LAB_00109b8a;
          }
        }
        local_c8 = 0;
LAB_0010286d:
        *(undefined1 *)(puVar31 + 9) = 100;
        param_2 = (ushort *)*puVar31;
        uVar20 = 0;
        puVar21 = puVar31;
        goto LAB_00101cc8;
         case 0x71:
         case 0x72:
        *(uint *)(puVar31 + 8) = (uint)(bVar16 == 0x72);
        uVar17 = puVar15[1];
        *puVar31 = (ulong)(puVar15 + 2);
        puVar31[5] = (long)(int)((uVar17 - 2) + (uint)uVar17);
        goto LAB_001033d2;
         case 0x73:
         case 0x74:
        uVar17 = *(ushort *)(param_6 + 0x66);
        uVar26 = puVar15[1];
        lVar23 = *(long *)(param_6 + 0x68);
        *(uint *)(puVar31 + 8) = (uint)(bVar16 == 0x74);
        uVar1 = puVar15[2];
        uVar20 = (uint)uVar1;
        *puVar31 = (ulong)(puVar15 + 3);
        puVar15 = (ushort *)(lVar23 + (long)(int)((uint)uVar26 * (uint)uVar17) * 2);
        if (uVar1 != 0) {
          do {
            uVar9 = (ulong)(int)((*puVar15 - 2) + (uint)*puVar15);
            if ((uVar9 < puVar31[0x10]) && (puVar31[uVar9 + 0x11] != 0xffffffffffffffff)) break;
            puVar15 = puVar15 + uVar17;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
          puVar31[5] = uVar9;
        }
LAB_001033d2:
        puVar15 = (ushort *)*puVar31;
        uVar17 = *puVar15;
        if (uVar17 < 0x68) {
          if (0x61 < uVar17) {
            uVar9 = (ulong)(uVar17 - 0x62);
            *puVar31 = (ulong)(puVar15 + 1);
            local_c8 = *(uint *)(rep_typ + uVar9 * 4);
            puVar31[7] = CONCAT44(*(undefined4 *)(rep_max + uVar9 * 4),
                                  *(undefined4 *)(rep_min + uVar9 * 4));
            goto LAB_00103426;
          }
LAB_00108290:
          iVar3 = match_ref(puVar31[5],(int)puVar31[8],puVar31,param_6,&local_50);
          if (iVar3 != 0) {
            if (iVar3 < 1) {
              uVar9 = puVar31[10];
              if (uVar9 < *(ulong *)(param_6 + 0x88)) break;
            }
            else {
              uVar9 = *(ulong *)(param_6 + 0x88);
              puVar31[10] = uVar9;
            }
            sVar2 = *(short *)(param_6 + 0x60);
            if ((sVar2 == 0) ||
               ((uVar9 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0)))) break;
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x00107f3c;
          }
          puVar31[10] = puVar31[10] + local_50 * 2;
          goto LAB_001005ba;
        }
        if (1 < (ushort)(uVar17 - 0x68)) goto LAB_00108290;
        local_c8 = *(uint *)(rep_typ + (long)(int)(uVar17 - 0x62) * 4);
        *(uint *)(puVar31 + 7) = (uint)puVar15[1];
        uVar20 = (uint)puVar15[2];
        if (puVar15[2] == 0) {
          uVar20 = 0xffffffff;
        }
        *puVar31 = (ulong)(puVar15 + 3);
        *(uint *)((long)puVar31 + 0x3c) = uVar20;
LAB_00103426:
        uVar9 = puVar31[5];
        if ((uVar9 < puVar31[0x10]) && (puVar31[uVar9 + 0x11] != 0xffffffffffffffff)) {
          if (puVar31[uVar9 + 0x11] != puVar31[uVar9 + 0x12]) {
            uVar20 = (uint)puVar31[7];
            if (uVar20 != 0) goto LAB_00103464;
            goto LAB_00109e54;
          }
          goto LAB_001005ba;
        }
        if (((int)puVar31[7] == 0) || ((*(byte *)(param_6 + 0xd9) & 2) != 0)) goto LAB_001005ba;
        uVar20 = (uint)puVar31[7];
LAB_00103464:
        uVar28 = 1;
        do {
          iVar3 = match_ref(uVar9,(int)puVar31[8],puVar31,param_6,&local_48);
          if (iVar3 != 0) {
            if (iVar3 < 1) {
              uVar9 = puVar31[10];
              if (uVar9 < *(ulong *)(param_6 + 0x88)) goto switchD_001005dc_caseD_a3;
            }
            else {
              uVar9 = *(ulong *)(param_6 + 0x88);
              puVar31[10] = uVar9;
            }
            sVar2 = *(short *)(param_6 + 0x60);
            if ((sVar2 == 0) ||
               ((uVar9 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0))))
            goto switchD_001005dc_caseD_a3;
            *(undefined4 *)(param_6 + 0x28) = 1;
            goto joined_r0x00107f3c;
          }
          uVar28 = uVar28 + 1;
          puVar31[10] = puVar31[10] + local_48 * 2;
        } while (uVar28 <= uVar20);
LAB_00109e54:
        uVar28 = *(uint *)((long)puVar31 + 0x3c);
        if (uVar28 == uVar20) goto LAB_001005ba;
        if (local_c8 == 0) {
LAB_0010b27a:
          *(undefined1 *)(puVar31 + 9) = 0x14;
          param_2 = (ushort *)*puVar31;
          uVar20 = 0;
          puVar21 = puVar31;
        }
        else {
          uVar30 = puVar31[uVar9 + 0x12] - puVar31[uVar9 + 0x11];
          puVar31[1] = puVar31[10];
          puVar31[3] = uVar30;
          if (uVar20 < uVar28) {
            bVar35 = true;
            do {
              while( true ) {
                iVar3 = match_ref(uVar9,(int)puVar31[8],puVar31,param_6,&local_48);
                if (iVar3 != 0) {
                  if ((((0 < iVar3) && (*(short *)(param_6 + 0x60) != 0)) &&
                      (*(ulong *)(param_6 + 0xa0) < *(ulong *)(param_6 + 0x88))) &&
                     (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))
                  goto LAB_00102f0a;
                  goto LAB_00109f25;
                }
                if (uVar30 == local_48) break;
                uVar20 = uVar20 + 1;
                puVar31[10] = puVar31[10] + local_48 * 2;
                if (uVar28 <= uVar20) goto LAB_00109f34;
                bVar35 = false;
              }
              uVar20 = uVar20 + 1;
              puVar31[10] = puVar31[10] + uVar30 * 2;
            } while (uVar20 < uVar28);
LAB_00109f25:
            if (bVar35) goto LAB_001009a7;
LAB_00109f34:
            *(uint *)((long)puVar31 + 0x3c) = uVar20;
LAB_00109f38:
            *(undefined1 *)(puVar31 + 9) = 0x16;
            param_2 = (ushort *)*puVar31;
            uVar20 = 0;
            puVar21 = puVar31;
          }
          else {
LAB_001009b8:
            *(undefined1 *)(puVar31 + 9) = 0x15;
            param_2 = (ushort *)*puVar31;
            uVar20 = 0;
            puVar21 = puVar31;
          }
        }
        goto LAB_00101cc8;
         case 0x75:
        uVar20 = 0;
        uVar9 = *(ulong *)(param_6 + 0x70) + (ulong)puVar15[1] * 2;
        if (*(ulong *)(param_6 + 0x70) != uVar9) {
          uVar20 = (uint)*(ushort *)(uVar9 + 4);
        }
        if (((int)puVar31[0xe] == -1) || (uVar30 = puVar31[0xf], uVar30 == 0xffffffffffffffff))
        goto LAB_001045a0;
        goto LAB_00104584;
         case 0x76:
         case 0x77:
        uVar20 = do_callout(puVar31,param_6,&local_50);
        if (0 < (int)uVar20) break;
        if (uVar20 != 0) goto switchD_00100677_caseD_23;
        *puVar31 = *puVar31 + local_50 * 2;
        goto LAB_001005ba;
         case 0x78:
        puVar13 = puVar15;
        do {
          puVar13 = puVar13 + puVar13[1];
        } while (*puVar13 == 0x78);
        *puVar31 = (ulong)puVar13;
        local_c0 = puVar15;
        goto LAB_001005ba;
         for (int i = 0; i < 3; i++) {
            case 0x79:
         }

         case 0x7c:
        param_2 = puVar15 + -(ulong)puVar15[1];
        puVar13 = param_2;
        if (local_c0 == (ushort *)0x0) {
          local_c0 = puVar15;
        }
        do {
          puVar8 = puVar13;
          puVar13 = puVar8 + puVar8[1];
        } while (puVar8 + puVar8[1] != local_c0);
        uVar26 = *param_2;
        if ((uVar26 - 0x87 & 0xfffb) == 0) {
          plVar29 = (long *)0x0;
        }
        else {
          local_d8 = (ulong *)(puVar31[0xf] + param_5[6]);
          plVar29 = (long *)((long)local_d8 - param_4);
          puVar31[0xf] = plVar29[0xf];
          if (*(uint *)((long)local_d8 + 0x34) >> 0x10 == 3) {
            uVar20 = 1;
            memcpy(plVar29 + 0x11,puVar31 + 0x11,puVar31[0x10] * 8);
            local_c0 = (ushort *)0x0;
            plVar29[0x10] = puVar31[0x10];
            plVar29[0xc] = puVar31[0xc];
            puVar31[4] = (long)puVar31 - (long)plVar29;
            goto switchD_00100677_caseD_23;
          }
        }
        switch(uVar26) {
        case 0x7f:
          uVar30 = puVar31[10];
          break;
        case 0x80:
          goto switchD_00103141_caseD_80;
        case 0x81:
          uVar30 = puVar31[10];
          if (puVar8[2] == 0x7e) {
            local_c0 = (ushort *)0x0;
            uVar20 = 0;
            if (uVar30 != plVar29[10]) goto switchD_00100677_caseD_23;
          }
          break;
        case 0x82:
          if (puVar8[2] == 0x7e) {
            uVar20 = (uint)(puVar31[10] == plVar29[10]);
LAB_00104f0a:
            local_c0 = (ushort *)0x0;
            goto switchD_00100677_caseD_23;
          }
          goto switchD_00103141_caseD_80;
        case 0x83:
          uVar30 = puVar31[10];
          goto LAB_00104db6;
        case 0x84:
          uVar30 = puVar31[10];
          if ((puVar8[2] == 0x7e) && (uVar30 != plVar29[10])) {
            uVar20 = 0;
            local_c0 = (ushort *)0x0;
            goto switchD_00100677_caseD_23;
          }
LAB_00104db6:
          if (*(ulong *)(param_6 + 0xa8) < uVar30) {
            *(ulong *)(param_6 + 0xa8) = uVar30;
          }
          uVar30 = plVar29[10];
          puVar31[10] = uVar30;
joined_r0x00104993:
          if (uVar17 == 0x7c) goto LAB_00104dd8;
          if (bVar16 != 0x79) goto LAB_0010499e;
          goto LAB_001049a8;
        case 0x85:
          goto switchD_00103141_caseD_85;
        case 0x86:
          uVar20 = _pcre2_script_run_16(plVar29[10],puVar31[10],bVar34);
          if (uVar20 == 0) goto LAB_00104f0a;
          puVar15 = (ushort *)*puVar31;
          if (*puVar15 == 0x7c) goto LAB_00104dd8;
          bVar16 = *(byte *)((long)puVar31 + 0x49);
          uVar9 = (ulong)bVar16;
          goto joined_r0x00104ee8;
        case 0x87:
          if (((int)puVar31[0xe] == 0) && (puVar15[2] == 0)) {
            if (puVar31[0xf] != 0xffffffffffffffff) {
              local_d8 = (ulong *)(puVar31[0xf] + param_5[6]);
              plVar29 = (long *)((long)local_d8 - param_4);
              puVar31[0xf] = plVar29[0xf];
              goto LAB_00104e4e;
            }
            goto switchD_001005dc_caseD_62;
          }
        default:
          if (uVar17 == 0x7c) goto LAB_00104dd8;
          if (bVar16 != 0x79) {
            if (plVar29 != (long *)0x0) goto LAB_001049fa;
            goto LAB_0010bab8;
          }
          goto LAB_001049a8;
        case 0x89:
        case 0x8a:
        case 0x8e:
        case 0x8f:
          uVar26 = param_2[2];
          if ((uint)uVar26 != (uint)puVar31[0xe]) {
            lVar23 = *(long *)(param_6 + 0x78);
            uVar10 = (ulong)((uVar26 - 2) + (uint)uVar26);
            uVar30 = puVar31[10];
            *(uint *)((long)puVar31 + 0x74) = (uint)uVar26;
            puVar31[uVar10 + 0x11] = plVar29[10] - lVar23 >> 1;
            puVar31[uVar10 + 0x12] = (long)(uVar30 - lVar23) >> 1;
            if (puVar31[0x10] <= uVar10) {
              puVar31[0x10] = uVar10 + 2;
            }
            goto joined_r0x00104993;
          }
          plVar29 = (long *)((long)local_d8 - param_4);
LAB_00104e4e:
          memcpy(puVar31 + 0x11,plVar29 + 0x11,puVar31[0x10] * 8);
          puVar31[0x10] = plVar29[0x10];
          puVar31[0xe] = plVar29[0xe];
          local_c0 = (ushort *)0x0;
          *puVar31 = *plVar29 + 4;
          goto LAB_001005ba;
        }
        if (*(ulong *)(param_6 + 0xa8) < uVar30) {
          *(ulong *)(param_6 + 0xa8) = uVar30;
        }
        puVar31[10] = plVar29[10];
switchD_00103141_caseD_85:
        puVar31[4] = (long)puVar31 - (long)plVar29;
        psVar6 = (short *)(*plVar29 + (ulong)*(ushort *)(*plVar29 + 2) * 2);
        if (*psVar6 == 0x78) {
          do {
            psVar7 = psVar6;
            psVar6 = psVar7 + (ushort)psVar7[1];
          } while (psVar7[(ushort)psVar7[1]] == 0x78);
          *plVar29 = (long)psVar7;
          puVar15 = (ushort *)*puVar31;
          uVar17 = *puVar15;
        }
        if (uVar17 == 0x7c) {
LAB_00104dd8:
          uVar20 = 0xfffffc1a;
          memcpy(plVar29 + 10,puVar31 + 10,param_4 - 0x50);
          local_c0 = (ushort *)0x0;
          goto switchD_00100677_caseD_23;
        }
joined_r0x00104ee8:
        if (bVar16 != 0x79) {
LAB_001049fa:
          uVar30 = puVar31[10];
LAB_0010499e:
          if (uVar30 != plVar29[10]) {
LAB_0010bab8:
            if ((char)uVar9 == '{') {
              *(undefined1 *)(puVar31 + 9) = 6;
              param_2 = puVar15 + 2;
              local_c0 = (ushort *)0x0;
              uVar20 = 0;
            }
            else {
              *(undefined1 *)(puVar31 + 9) = 7;
              uVar20 = 0;
              local_c0 = (ushort *)0x0;
            }
            goto LAB_00101cc8;
          }
        }
LAB_001049a8:
        local_c0 = (ushort *)0x0;
LAB_00101029:
        *puVar31 = *puVar31 + 4;
        goto LAB_001005ba;
         case 0x7d:
        uVar9 = (ulong)puVar15[1];
        if (uVar24 == 0) {
          if ((long)(puVar31[10] - *(long *)(param_6 + 0x78)) >> 1 < (long)uVar9) break;
          puVar31[10] = puVar31[10] + uVar9 * -2;
        }
        else if (puVar15[1] != 0) {
          uVar30 = *(ulong *)(param_6 + 0x80);
          do {
            uVar10 = puVar31[10];
            if (uVar10 <= uVar30) goto switchD_001005dc_caseD_a3;
            uVar22 = uVar10 - 4;
            if ((*(ushort *)(uVar10 - 2) & 0xfc00) != 0xdc00) {
              uVar22 = uVar10 - 2;
            }
            puVar31[10] = uVar22;
            uVar20 = (int)uVar9 - 1;
            uVar9 = (ulong)uVar20;
          } while (uVar20 != 0);
        }
        if (puVar31[10] < *(ulong *)(param_6 + 0xa0)) {
          *(ulong *)(param_6 + 0xa0) = puVar31[10];
        }
        goto LAB_00103a9f;
         case 0x7e:
        uVar17 = puVar15[1];
        uVar26 = puVar15[2];
        uVar9 = puVar31[10];
        *(uint *)(puVar31 + 7) = (uint)uVar17;
        *(uint *)((long)puVar31 + 0x3c) = (uint)uVar26;
        puVar31[1] = uVar9;
        if (uVar24 == 0) {
          lVar23 = uVar9 - *(long *)(param_6 + 0x78);
          if (lVar23 < 0x1ffff) {
            lVar23 = lVar23 >> 1;
            if (lVar23 < 0) {
              lVar23 = 0;
            }
            uVar20 = (uint)lVar23;
            if (uVar20 < uVar17) break;
            if (uVar20 < uVar26) {
              *(uint *)((long)puVar31 + 0x3c) = uVar20;
            }
          }
          puVar31[10] = uVar9 + (ulong)*(uint *)((long)puVar31 + 0x3c) * -2;
        }
        else if (uVar26 != 0) {
          uVar30 = *(ulong *)(param_6 + 0x78);
          uVar20 = 0;
          while (uVar9 != uVar30) {
            puVar15 = (ushort *)(uVar9 - 2);
            uVar10 = uVar9 - 2;
            uVar9 = uVar9 - 4;
            if ((*puVar15 & 0xfc00) != 0xdc00) {
              uVar9 = uVar10;
            }
            uVar20 = uVar20 + 1;
            puVar31[10] = uVar9;
            if (uVar26 == uVar20) goto LAB_001047ba;
          }
          if (uVar20 < uVar17) break;
          *(uint *)((long)puVar31 + 0x3c) = uVar20;
        }
LAB_001047ba:
        *(undefined1 *)(puVar31 + 9) = 0x25;
        uVar20 = 0;
        param_2 = (ushort *)(*puVar31 + 6);
        puVar21 = puVar31;
        goto LAB_00101cc8;
         for (int i = 0; i < 3; i++) {
            case 0x7f:
         }

         case 0x84:
        *(uint *)(puVar31 + 7) = bVar16 | 0x20000;
LAB_00101ca3:
        uVar20 = (uint)puVar31[7];
        uVar17 = *(ushort *)*puVar31;
        *(undefined1 *)(puVar31 + 9) = 3;
        param_2 = (ushort *)*puVar31 + (byte)(&_pcre2_OP_lengths_16)[uVar17];
        puVar21 = puVar31;
        goto LAB_00101cc8;
         case 0x80:
         case 0x82:
        *(uint *)(puVar31 + 7) = bVar16 | 0x20000;
LAB_0010353f:
        uVar20 = (uint)puVar31[7];
        uVar17 = *(ushort *)*puVar31;
        *(undefined1 *)(puVar31 + 9) = 4;
        param_2 = (ushort *)*puVar31 + (byte)(&_pcre2_OP_lengths_16)[uVar17];
        puVar21 = puVar31;
        goto LAB_00101cc8;
         case 0x85:
         case 0x86:
         case 0x8c:
        *(uint *)(puVar31 + 7) = bVar16 | 0x20000;
        goto LAB_00103240;
         case 0x87:
        if ((*(int *)(param_6 + 0x2c) != 0) || ((int)puVar31[6] == 0)) {
          *(undefined4 *)(puVar31 + 7) = 0;
          goto LAB_00103240;
        }
LAB_00104065:
        puVar15 = (ushort *)*puVar31;
        uVar17 = puVar15[puVar15[1]];
        puVar31[1] = (ulong)(puVar15 + puVar15[1]);
        if (uVar17 != 0x78) {
          uVar9 = (ulong)*puVar15;
          goto LAB_0010401b;
        }
        uVar17 = *puVar15;
        *(undefined1 *)(puVar31 + 9) = 1;
        uVar20 = 0;
        param_2 = puVar15 + (byte)(&_pcre2_OP_lengths_16)[uVar17];
        puVar21 = puVar31;
        goto LAB_00101cc8;
         case 0x88:
         case 0x8d:
        *(undefined4 *)(puVar31 + 8) = 0;
        goto LAB_001032b7;
         case 0x89:
         case 0x8e:
        *(uint *)(puVar31 + 7) = puVar15[2] | 0x10000;
LAB_00103240:
        uVar20 = (uint)puVar31[7];
        uVar17 = *(ushort *)*puVar31;
        *(undefined1 *)(puVar31 + 9) = 2;
        param_2 = (ushort *)*puVar31 + (byte)(&_pcre2_OP_lengths_16)[uVar17];
        puVar21 = puVar31;
        goto LAB_00101cc8;
         case 0x8a:
         case 0x8f:
        *(undefined4 *)(puVar31 + 8) = 0;
        puVar13 = puVar15;
LAB_0010328d:
        uVar20 = puVar13[2] | 0x10000;
        puVar15 = puVar13;
        goto LAB_00103297;
         case 0x8b:
         case 0x90:
        uVar9 = (ulong)puVar15[1];
        uVar17 = puVar15[uVar9];
        puVar31[3] = uVar9;
        if (uVar17 != 0x78) {
          puVar31[3] = uVar9 - 2;
        }
        uVar17 = puVar15[2];
        *puVar31 = (ulong)(puVar15 + 2);
        if ((ushort)(uVar17 - 0x76) < 2) {
          uVar20 = do_callout(puVar31,param_6,&local_50);
          if (0 < (int)uVar20) break;
          if (uVar20 != 0) goto switchD_00100677_caseD_23;
          puVar31[3] = puVar31[3] - local_50;
          *puVar31 = *puVar31 + local_50 * 2;
        }
        param_2 = (ushort *)*puVar31;
        uVar17 = *param_2;
        switch(uVar17) {
        case 0x91:
          uVar9 = (ulong)(int)((param_2[1] - 2) + (uint)param_2[1]);
          if ((uVar9 < puVar31[0x10]) && (puVar31[uVar9 + 0x11] != 0xffffffffffffffff))
          goto switchD_0010364f_caseD_96;
          break;
        case 0x92:
          uVar20 = (uint)param_2[2];
          puVar15 = (ushort *)
                    (*(long *)(param_6 + 0x68) +
                    (long)(int)((uint)param_2[1] * (uint)*(ushort *)(param_6 + 0x66)) * 2);
          if (param_2[2] != 0) {
            do {
              uVar9 = (ulong)(int)((*puVar15 - 2) + (uint)*puVar15);
              if ((uVar9 < puVar31[0x10]) && (puVar31[uVar9 + 0x11] != 0xffffffffffffffff))
              goto switchD_0010364f_caseD_96;
              puVar15 = puVar15 + *(ushort *)(param_6 + 0x66);
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          break;
        case 0x93:
          if (((uint)puVar31[0xe] != 0xffffffff) &&
             (((uint)puVar31[0xe] == (uint)param_2[1] || (param_2[1] == 0xffff))))
          goto switchD_0010364f_caseD_96;
          break;
        case 0x94:
          if ((uint)puVar31[0xe] != 0xffffffff) {
            uVar20 = (uint)param_2[2];
            puVar15 = (ushort *)
                      (*(long *)(param_6 + 0x68) +
                      (long)(int)((uint)param_2[1] * (uint)*(ushort *)(param_6 + 0x66)) * 2);
            if (param_2[2] != 0) {
              do {
                if ((uint)puVar31[0xe] == (uint)*puVar15) goto LAB_00101da1;
                puVar15 = puVar15 + (uint)*(ushort *)(param_6 + 0x66);
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
          }
          break;
        case 0x95:
        case 0xa3:
          break;
        case 0x96:
switchD_0010364f_caseD_96:
          uVar9 = (ulong)(byte)(&_pcre2_OP_lengths_16)[*param_2];
          goto LAB_00100fa0;
        default:
          puVar31[1] = (ulong)param_2;
          *(uint *)(puVar31 + 7) = (uint)((uVar17 - 0x7f & 0xfffd) == 0);
LAB_001048d8:
          uVar17 = *(ushort *)puVar31[1];
          uVar20 = *(ushort *)*puVar31 | 0x30000;
          *(undefined1 *)(puVar31 + 9) = 5;
          param_2 = (ushort *)puVar31[1] + (byte)(&_pcre2_OP_lengths_16)[uVar17];
          puVar21 = puVar31;
          goto LAB_00101cc8;
        }
switchD_0010364f_caseD_95:
        uVar9 = puVar31[3];
LAB_00100fa0:
        param_2 = param_2 + uVar9;
        *puVar31 = (ulong)param_2;
        if (*(char *)((long)puVar31 + 0x49) == -0x70) {
          *(undefined1 *)(puVar31 + 9) = 0x23;
          uVar20 = 0x20090;
          puVar21 = puVar31;
          goto LAB_00101cc8;
        }
        goto LAB_001005ba;
         case 0x97:
        param_2 = puVar15 + 1;
        *(undefined1 *)(puVar31 + 9) = 9;
        puVar31[1] = (ulong)param_2;
        uVar20 = 0;
        goto LAB_00101cc8;
         case 0x98:
        puVar15 = puVar15 + 1;
        do {
          puVar15 = puVar15 + puVar15[1];
        } while (*puVar15 == 0x78);
        puVar31[1] = (ulong)puVar15;
        param_2 = puVar15 + 2;
        uVar20 = 0;
        *(undefined1 *)(puVar31 + 9) = 10;
        goto LAB_00101cc8;
         case 0x99:
        puVar13 = puVar15 + 1;
        uVar17 = puVar15[1];
        *(undefined4 *)(puVar31 + 8) = 1;
        *puVar31 = (ulong)puVar13;
        if ((uVar17 == 0x8a) || (puVar15 = puVar13, uVar17 == 0x8f)) goto LAB_0010328d;
LAB_001032b7:
        uVar20 = 0x20000;
LAB_00103297:
        *(uint *)(puVar31 + 7) = uVar20;
        *(undefined4 *)((long)puVar31 + 0x3c) = 0;
        puVar31[2] = (ulong)puVar15;
LAB_00101e04:
        uVar20 = (uint)puVar31[7];
        puVar31[1] = puVar31[10];
        uVar17 = *(ushort *)*puVar31;
        *(undefined1 *)(puVar31 + 9) = 8;
        param_2 = (ushort *)*puVar31 + (byte)(&_pcre2_OP_lengths_16)[uVar17];
        puVar21 = puVar31;
        goto LAB_00101cc8;
         case 0x9a:
        uVar20 = 0;
        *(ushort **)(param_6 + 0xb8) = puVar15 + 2;
        puVar31[0xc] = (ulong)(puVar15 + 2);
        bVar16 = (&_pcre2_OP_lengths_16)[uVar9];
        uVar17 = puVar15[1];
        *(undefined1 *)(puVar31 + 9) = 0xc;
        param_2 = puVar15 + (ulong)bVar16 + (ulong)uVar17;
        goto LAB_00101cc8;
         case 0x9b:
        uVar20 = 0;
        bVar16 = (&_pcre2_OP_lengths_16)[uVar9];
        *(undefined1 *)(puVar31 + 9) = 0xe;
        param_2 = puVar15 + bVar16;
        goto LAB_00101cc8;
         case 0x9c:
        uVar20 = 0;
        *(ushort **)(param_6 + 0xb8) = puVar15 + 2;
        puVar31[0xc] = (ulong)(puVar15 + 2);
        bVar16 = (&_pcre2_OP_lengths_16)[uVar9];
        uVar17 = puVar15[1];
        *(undefined1 *)(puVar31 + 9) = 0xf;
        param_2 = puVar15 + (ulong)bVar16 + (ulong)uVar17;
        goto LAB_00101cc8;
         case 0x9d:
        uVar20 = 0;
        bVar16 = (&_pcre2_OP_lengths_16)[uVar9];
        *(undefined1 *)(puVar31 + 9) = 0x10;
        param_2 = puVar15 + bVar16;
        goto LAB_00101cc8;
         case 0x9e:
        uVar20 = *(int *)(param_6 + 0xdc) + 1;
        *(uint *)(param_6 + 0xdc) = uVar20;
        if (uVar20 <= *(uint *)(param_6 + 0xe0)) {
          puVar15 = puVar15 + (int)((uint)(byte)(&_pcre2_OP_lengths_16)[uVar9] + (uint)puVar15[1]);
          goto LAB_00103dbd;
        }
        uVar20 = 0;
        bVar16 = (&_pcre2_OP_lengths_16)[uVar9];
        uVar17 = puVar15[1];
        *(undefined1 *)(puVar31 + 9) = 0x11;
        param_2 = puVar15 + (ulong)bVar16 + (ulong)uVar17;
        goto LAB_00101cc8;
         case 0x9f:
        uVar20 = 0;
        bVar16 = (&_pcre2_OP_lengths_16)[uVar9];
        *(undefined1 *)(puVar31 + 9) = 0x12;
        param_2 = puVar15 + bVar16;
        goto LAB_00101cc8;
         case 0xa0:
        uVar20 = 0;
        *(ushort **)(param_6 + 0xb8) = puVar15 + 2;
        puVar31[0xc] = (ulong)(puVar15 + 2);
        bVar16 = (&_pcre2_OP_lengths_16)[uVar9];
        uVar17 = puVar15[1];
        *(undefined1 *)(puVar31 + 9) = 0x13;
        param_2 = puVar15 + (ulong)bVar16 + (ulong)uVar17;
        goto LAB_00101cc8;
         case 0xa1:
        uVar20 = 0;
        bVar16 = (&_pcre2_OP_lengths_16)[uVar9];
        *(undefined1 *)(puVar31 + 9) = 0xd;
        param_2 = puVar15 + bVar16;
        goto LAB_00101cc8;
         case 0xa2:
        uVar20 = 0;
        *(ushort **)(param_6 + 0xb8) = puVar15 + 2;
        puVar31[0xc] = (ulong)(puVar15 + 2);
        bVar16 = (&_pcre2_OP_lengths_16)[uVar9];
        uVar17 = puVar15[1];
        *(undefined1 *)(puVar31 + 9) = 0x24;
        param_2 = puVar15 + (ulong)bVar16 + (ulong)uVar17;
        goto LAB_00101cc8;
         case 0xa3:
        break;
         case 0xa4:
        if ((int)puVar31[0xe] == -1) goto switchD_001005dc_caseD_0;
        uVar9 = puVar31[0xf];
        if (uVar9 == 0xffffffffffffffff) goto switchD_001005dc_caseD_62;
        while( true ) {
          local_d8 = (ulong *)(uVar9 + param_5[6]);
          puVar21 = (ulong *)((long)local_d8 - param_4);
          if (*(uint *)((long)local_d8 + 0x34) >> 0x10 == 4) break;
          uVar9 = puVar21[0xf];
          if (uVar9 == 0xffffffffffffffff) goto switchD_001005dc_caseD_62;
        }
        uVar30 = puVar31[10];
        uVar10 = puVar31[0xb];
        uVar9 = puVar31[0xc];
        *puVar21 = *puVar21 + 4;
        puVar21[10] = uVar30;
        puVar21[0xb] = uVar10;
        puVar21[0xc] = uVar9;
        puVar31 = puVar21;
        goto LAB_001005ba;
         case 0xa5:
        if (*(ulong *)(param_6 + 0xa8) < puVar31[10]) {
          *(ulong *)(param_6 + 0xa8) = puVar31[10];
        }
        uVar20 = 0xfffffc19;
        local_b8 = puVar31;
        goto switchD_00100677_caseD_23;
         case 0xa6:
        if ((int)puVar31[0xe] == -1) {
          uVar30 = puVar31[0xf];
          uVar17 = puVar15[1];
          if (uVar30 == 0xffffffffffffffff) goto switchD_001005dc_caseD_62;
          while (local_d8 = (ulong *)(uVar30 + param_5[6]),
                *(uint *)((long)local_d8 + 0x34) != (uVar17 | 0x10000)) {
            uVar30 = *(ulong *)((long)local_d8 + (0x78 - param_4));
            if (uVar30 == 0xffffffffffffffff) goto switchD_001005dc_caseD_62;
          }
          *(uint *)((long)puVar31 + 0x74) = (uint)uVar17;
          uVar30 = (ulong)((uVar17 - 2) + (uint)uVar17);
          lVar23 = *(long *)(param_6 + 0x78);
          puVar31[uVar30 + 0x11] = *(long *)((long)local_d8 + (0x50 - param_4)) - lVar23 >> 1;
          puVar31[uVar30 + 0x12] = (long)(puVar31[10] - lVar23) >> 1;
          if (puVar31[0x10] <= uVar30) {
            puVar31[0x10] = uVar30 + 2;
          }
        }
LAB_0010401b:
        *puVar31 = (ulong)(puVar15 + (byte)(&_pcre2_OP_lengths_16)[uVar9]);
        goto LAB_001005ba;
         case 0xa7:
        puVar15 = puVar15 + 1;
        do {
          puVar15 = puVar15 + puVar15[1];
        } while (*puVar15 == 0x78);
LAB_00103a9f:
        *puVar31 = (ulong)(puVar15 + 2);
        goto LAB_001005ba;
      }

      goto switchD_001005dc_caseD_a3;
   }

   uVar20 = 0xffffffcb;
}
else{uVar20 = 0xffffffd1;};goto LAB_00101d0c;switchD_00103141_caseD_80:local_c0 = (ushort*)0x0;uVar20 = 1;goto switchD_00100677_caseD_23;while (uVar30 = *(ulong*)( lVar23 + 0x78 ),uVar30 != 0xffffffffffffffff) {
   LAB_00104584:lVar23 = ( uVar30 + param_5[6] ) - param_4;
   if (*(uint*)( uVar30 + param_5[6] + 0x34 ) == ( uVar20 | 0x40000 )) {
      if (puVar31[10] == *(ulong*)( lVar23 + 0x50 )) {
         uVar30 = *(ulong*)( param_6 + 0xa8 );
         if (( uVar30 != *(ulong*)( lVar23 + 0x68 ) ) || ( ( *(byte*)( param_6 + 0xd6 ) & 4 ) != 0 )) goto LAB_001045ab;
         uVar20 = 0xffffffcc;
         goto LAB_00101d0c;
      }

      break;
   }

}
;LAB_001045a0:uVar30 = *(ulong*)( param_6 + 0xa8 );LAB_001045ab:puVar31[0xd] = uVar30;puVar31[1] = uVar9;*(uint*)( puVar31 + 7 ) = uVar20 | 0x40000;LAB_00100e40:uVar20 = (uint)puVar31[7];uVar17 = *(ushort*)puVar31[1];*(undefined1*)( puVar31 + 9 ) = 0xb;param_2 = (ushort*)puVar31[1] + ( byte )(&_pcre2_OP_lengths_16)[uVar17];puVar21 = puVar31;LAB_00101cc8:puVar31 = (ulong*)( (long)puVar21 + param_4 );if (param_4 + (long)puVar31 < local_e0) {
   LAB_00105227:memcpy(puVar31 + 10, puVar21 + 10, param_4 - 0x50);
   *(int*)( puVar31 + 6 ) = (int)puVar21[6] + 1;
   local_d8 = puVar31;
   goto LAB_00100550;
}
uVar9 = param_5[7];sVar32 = (long)puVar31 - param_5[6];if (uVar9 < 0x7fffffffffffffff) {
   uVar30 = uVar9 * 2;
   uVar10 = ( ulong ) * (uint*)( param_6 + 0x18 );
   if (uVar10 <= uVar30 >> 10) {
      if (uVar10 <= uVar9 >> 10) goto LAB_00101d06;
      lVar23 = ( uVar10 - ( uVar9 >> 10 ) ) * 0x400;
      if (( uVar9 & 0x3ff ) != 0) {
         lVar23 = lVar23 - (int)( 0x400 - ( (uint)uVar9 & 0x3ff ) );
      }

      uVar30 = uVar9 + lVar23;
   }

   if (param_4 <= uVar30 - sVar32) {
      pvVar11 = (void*)( *(code*)*param_5 )(uVar30, param_5[2]);
      if (pvVar11 == (void*)0x0) goto LAB_001097b0;
      pvVar11 = memcpy(pvVar11, (void*)param_5[6], sVar32);
      puVar31 = (ulong*)( sVar32 + (long)pvVar11 );
      puVar21 = (ulong*)( (long)puVar31 - param_4 );
      ( *(code*)param_5[1] )(param_5[6], param_5[2]);
      local_e0 = (long)pvVar11 + uVar30;
      param_5[6] = pvVar11;
      param_5[7] = uVar30;
      goto LAB_00105227;
   }

}
 else if (uVar9 == 0xfffffffffffffffe) {
   LAB_001097b0:uVar20 = 0xffffffd0;
   LAB_00101d0c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar20;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
LAB_00101d06:uVar20 = 0xffffffc1;goto LAB_00101d0c;LAB_00109996:sVar2 = *(short*)( param_6 + 0x60 );if (( sVar2 != 0 ) && ( ( *(ushort**)( param_6 + 0xa0 ) < puVar8 || ( *(int*)( param_6 + 0x30 ) != 0 ) ) )) {
   *(undefined4*)( param_6 + 0x28 ) = 1;
   goto joined_r0x001099c4;
}
switchD_001005dc_caseD_a3:uVar20 = 0;switchD_00100677_caseD_23:if (*(ulong*)( param_6 + 0xa8 ) < puVar31[10]) {
   *(ulong*)( param_6 + 0xa8 ) = puVar31[10];
}
if ((int)puVar31[6] == 0) goto LAB_00101d0c;puVar31 = (ulong*)( (long)puVar31 - puVar31[4] );puVar14 = (uint*)( *(long*)( param_6 + 0xf8 ) + 0x68 );*puVar14 = *puVar14 | 2;switch ((char)puVar31[9]) {
   default:
    goto switchD_001005dc_caseD_62;
   case '\x01':
    if (uVar20 == 0) {
      *puVar31 = puVar31[1];
      goto LAB_00104065;
    }
    goto switchD_00100677_caseD_23;
   case '\x02':
    if (uVar20 == 0xfffffc1f) {
      psVar7 = (short *)*puVar31;
      psVar6 = psVar7 + (ushort)psVar7[1];
      if (*(short **)(param_6 + 0xc0) < psVar6) {
        if (*psVar7 == 0x78) goto LAB_00101091;
        if (*psVar6 != 0x78) goto LAB_001006aa;
        *puVar31 = (ulong)psVar6;
        goto LAB_00103240;
      }
      goto LAB_001006aa;
    }
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    psVar7 = (short *)*puVar31;
LAB_00101091:
    sVar2 = psVar7[(ushort)psVar7[1]];
    *puVar31 = (ulong)(psVar7 + (ushort)psVar7[1]);
    if (sVar2 == 0x78) goto LAB_00103240;
    break;
   case '\x03':
    if (uVar20 == 0xfffffc19) {
      memcpy(puVar31 + 0x11,local_b8 + 0x11,local_b8[0x10] * 8);
      puVar31[0x10] = local_b8[0x10];
      puVar31[0xc] = local_b8[0xc];
      puVar15 = (ushort *)*puVar31;
      do {
        puVar15 = puVar15 + puVar15[1];
      } while (*puVar15 == 0x78);
      goto LAB_00103a9f;
    }
    if ((uVar20 == 0) || (uVar20 == 0xfffffc1f)) {
      psVar6 = (short *)(*puVar31 + (ulong)*(ushort *)(*puVar31 + 2) * 2);
      sVar2 = *psVar6;
      *puVar31 = (ulong)psVar6;
      if (sVar2 != 0x78) break;
      goto LAB_00101ca3;
    }
    goto switchD_00100677_caseD_23;
   case '\x04':
    if (uVar20 == 0xfffffc1f) {
LAB_00102017:
      psVar6 = (short *)(*puVar31 + (ulong)*(ushort *)(*puVar31 + 2) * 2);
      sVar2 = *psVar6;
      *puVar31 = (ulong)psVar6;
      if (sVar2 != 0x78) goto LAB_00101029;
      goto LAB_0010353f;
    }
    if ((int)uVar20 < -0x3e0) {
      if (uVar20 != 0xfffffc19) {
        if ((-1000 < (int)uVar20) && (uVar20 + 0x3e5 < 3)) {
          psVar6 = (short *)*puVar31;
          do {
            psVar6 = psVar6 + (ushort)psVar6[1];
          } while (*psVar6 == 0x78);
          goto LAB_00101026;
        }
        goto switchD_00100677_caseD_23;
      }
    }
    else {
      if (uVar20 == 0) goto LAB_00102017;
      if (uVar20 != 1) goto switchD_00100677_caseD_23;
    }
    break;
   case '\x05':
    if (uVar20 == 0xfffffc1f) {
LAB_00102bd0:
      psVar6 = (short *)(puVar31[1] + (ulong)*(ushort *)(puVar31[1] + 2) * 2);
      sVar2 = *psVar6;
      puVar31[1] = (ulong)psVar6;
      if (sVar2 == 0x78) goto LAB_001048d8;
LAB_00100f89:
      iVar3 = (int)puVar31[7];
    }
    else {
      if ((int)uVar20 < -0x3e0) {
        if (uVar20 != 0xfffffc19) {
          if ((-1000 < (int)uVar20) && (uVar20 + 0x3e5 < 3)) goto LAB_00100f89;
          goto switchD_00100677_caseD_23;
        }
        memcpy(puVar31 + 0x11,local_b8 + 0x11,local_b8[0x10] * 8);
        puVar31[0x10] = local_b8[0x10];
      }
      else {
        if (uVar20 == 0) goto LAB_00102bd0;
        if (uVar20 != 1) goto switchD_00100677_caseD_23;
      }
      iVar3 = (int)puVar31[7];
    }
    if (iVar3 == 0) {
      psVar6 = (short *)*puVar31;
      do {
        psVar6 = psVar6 + (ushort)psVar6[1];
      } while (*psVar6 == 0x78);
      *puVar31 = (ulong)psVar6;
LAB_00101da1:
      param_2 = (ushort *)*puVar31;
      goto switchD_0010364f_caseD_96;
    }
    param_2 = (ushort *)*puVar31;
    goto switchD_0010364f_caseD_95;
   case '\x06':
    if (uVar20 == 0) {
      *puVar31 = *puVar31 + (ulong)*(ushort *)(*puVar31 + 2) * -2;
      goto LAB_001005ba;
    }
    goto switchD_00100677_caseD_23;
   case '\a':
    if (uVar20 == 0) goto LAB_00101029;
    goto switchD_00100677_caseD_23;
   case '\b':
    if (uVar20 == 0xfffffc1a) {
      *(undefined4 *)((long)puVar31 + 0x3c) = 1;
      if (puVar31[10] == puVar31[1]) {
        psVar6 = (short *)*puVar31;
        do {
          psVar6 = psVar6 + (ushort)psVar6[1];
        } while (*psVar6 == 0x78);
LAB_00101026:
        *puVar31 = (ulong)psVar6;
        goto LAB_00101029;
      }
      *puVar31 = puVar31[2];
      goto LAB_00101e04;
    }
    if (uVar20 != 0xfffffc1f) {
      if (uVar20 == 0) {
        psVar6 = (short *)*puVar31;
LAB_00100ed6:
        sVar2 = psVar6[(ushort)psVar6[1]];
        *puVar31 = (ulong)(psVar6 + (ushort)psVar6[1]);
        if (sVar2 != 0x78) {
          if ((*(int *)((long)puVar31 + 0x3c) == 0) && ((int)puVar31[8] == 0)) break;
          goto LAB_00101029;
        }
        goto LAB_00101e04;
      }
      goto switchD_00100677_caseD_23;
    }
    psVar6 = (short *)*puVar31;
    psVar7 = psVar6 + (ushort)psVar6[1];
    if (*(short **)(param_6 + 0xc0) < psVar7) {
      if (*psVar6 == 0x78) goto LAB_00100ed6;
      if (*psVar7 != 0x78) goto LAB_001006aa;
      *puVar31 = (ulong)psVar7;
      goto LAB_00101e04;
    }
    goto LAB_001006aa;
   case '\t':
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    psVar6 = (short *)puVar31[1];
    do {
      psVar6 = psVar6 + (ushort)psVar6[1];
    } while (*psVar6 == 0x78);
    puVar31[1] = (ulong)psVar6;
    *puVar31 = (ulong)(psVar6 + 2);
    goto LAB_001005ba;
   case '\n':
    if (uVar20 == 0) goto LAB_001038fa;
    goto switchD_00100677_caseD_23;
   case '\v':
    psVar7 = (short *)puVar31[1];
    psVar6 = psVar7 + (ushort)psVar7[1];
    if (uVar20 + 0x3e5 < 5) {
      if (*(uint *)(param_6 + 0xd0) != ((uint)puVar31[7] ^ 0x40000)) goto switchD_00100677_caseD_23;
      if ((uVar20 == 0xfffffc1f) && (*(short **)(param_6 + 0xc0) < psVar6)) {
        if (*psVar7 == 0x78) goto LAB_00101d41;
        if (*psVar6 == 0x78) {
          puVar31[1] = (ulong)psVar6;
          goto LAB_00100e40;
        }
      }
    }
    else {
      if (uVar20 != 0) goto switchD_00100677_caseD_23;
LAB_00101d41:
      sVar2 = *psVar6;
      puVar31[1] = (ulong)psVar6;
      if (sVar2 == 0x78) goto LAB_00100e40;
    }
    break;
   case '\f':
    if (uVar20 == 0xfffffc1e) {
      iVar3 = _pcre2_strcmp_16(*puVar31 + 4,*(undefined8 *)(param_6 + 200));
      if (iVar3 != 0) goto LAB_00100759;
      *(ulong *)(param_6 + 200) = puVar31[10];
      goto LAB_00100782;
    }
    goto switchD_00100677_caseD_23;
   case '\r':
   case '$':
    if (uVar20 == 0) {
      uVar20 = 0xfffffc1b;
      *(int *)(param_6 + 0xd0) = (int)puVar31[0xe];
    }
    goto switchD_00100677_caseD_23;
   case '\x0e':
   case '\x0f':
    if (uVar20 == 0) {
      uVar20 = 0xfffffc1c;
      *(int *)(param_6 + 0xd0) = (int)puVar31[0xe];
    }
    goto switchD_00100677_caseD_23;
   case '\x10':
    if (uVar20 == 0) {
      *(ulong *)(param_6 + 200) = puVar31[10];
      *(int *)(param_6 + 0xd0) = (int)puVar31[0xe];
LAB_00100782:
      uVar20 = 0xfffffc1d;
    }
    goto switchD_00100677_caseD_23;
   case '\x11':
    if (uVar20 == 0) {
      *(ulong *)(param_6 + 200) = *puVar31 + 4;
      *(int *)(param_6 + 0xd0) = (int)puVar31[0xe];
LAB_00100759:
      uVar20 = 0xfffffc1e;
    }
    goto switchD_00100677_caseD_23;
   case '\x12':
   case '\x13':
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    *(ulong *)(param_6 + 0xc0) = *puVar31;
    *(int *)(param_6 + 0xd0) = (int)puVar31[0xe];
LAB_001006aa:
    uVar20 = 0xfffffc1f;
    goto switchD_00100677_caseD_23;
   case '\x14':
    if ((uVar20 == 0) &&
       (uVar9 = puVar31[7], *(uint *)(puVar31 + 7) = (uint)uVar9 + 1,
       (uint)uVar9 < *(uint *)((long)puVar31 + 0x3c))) {
      iVar3 = match_ref(puVar31[5],(int)puVar31[8],puVar31,param_6);
      if (iVar3 == 0) {
        puVar31[10] = puVar31[10] + local_48 * 2;
        goto LAB_0010b27a;
      }
      if (iVar3 < 1) {
        uVar9 = puVar31[10];
        if (uVar9 < *(ulong *)(param_6 + 0x88)) goto switchD_00100677_caseD_23;
      }
      else {
        uVar9 = *(ulong *)(param_6 + 0x88);
        puVar31[10] = uVar9;
      }
      if ((*(short *)(param_6 + 0x60) != 0) &&
         (((*(ulong *)(param_6 + 0xa0) < uVar9 || (*(int *)(param_6 + 0x30) != 0)) &&
          (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) != 1))))
      goto LAB_00102f0a;
    }
    goto switchD_00100677_caseD_23;
   case '\x15':
    if (uVar20 == 0) {
      puVar31[10] = puVar31[10] + puVar31[3] * -2;
LAB_001009a7:
      uVar20 = 0;
      if (puVar31[1] <= puVar31[10]) goto LAB_001009b8;
    }
    goto switchD_00100677_caseD_23;
   case '\x16':
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    if (puVar31[10] != puVar31[1]) {
      puVar31[10] = puVar31[1];
      uVar28 = (uint)puVar31[7];
      uVar20 = *(int *)((long)puVar31 + 0x3c) - 1;
      *(uint *)((long)puVar31 + 0x3c) = uVar20;
      if (uVar28 < uVar20) {
        do {
          uVar28 = uVar28 + 1;
          match_ref(puVar31[5],(int)puVar31[8],puVar31,param_6);
          puVar31[10] = puVar31[10] + local_48 * 2;
        } while (uVar20 != uVar28);
      }
      goto LAB_00109f38;
    }
    break;
   case '\x17':
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        puVar31[10] = (ulong)(puVar15 + 1);
        uVar17 = *puVar15;
        if (uVar17 < 0x100) {
          if ((*(byte *)(puVar31[2] + (ulong)(uVar17 >> 3)) >> (uVar17 & 7) & 1) != 0)
          goto LAB_0010244a;
        }
        else if (*(char *)((long)puVar31 + 0x49) != 'n') goto LAB_0010244a;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x00100d95:
          if (sVar2 != 1) goto LAB_00102f0a;
        }
      }
    }
    break;
   case '\x18':
    if (uVar20 == 0) {
      puVar31[10] = puVar31[10] - 2;
LAB_00100c21:
      uVar20 = 0;
      if (puVar31[1] <= puVar31[10]) goto LAB_00100c32;
    }
    goto switchD_00100677_caseD_23;
   case '\x19':
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        if (((uint)*puVar15 == (uint)puVar31[8]) ||
           ((uint)*puVar15 == *(uint *)((long)puVar31 + 0x44))) {
          puVar31[10] = (ulong)(puVar15 + 1);
          goto LAB_00102a89;
        }
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
   case '\x1a':
    puVar31[10] = puVar31[10] - 2;
    if (uVar20 == 0) goto LAB_00100b81;
    goto switchD_00100677_caseD_23;
   case '\x1b':
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        uVar17 = *puVar15;
        puVar31[10] = (ulong)(puVar15 + 1);
        if ((uint)puVar31[8] == (uint)uVar17) goto LAB_00102b08;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
   case '\x1c':
    puVar31[10] = puVar31[10] - 2;
    if (uVar20 == 0) goto LAB_00100ae1;
    goto switchD_00100677_caseD_23;
   case '\x1d':
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        if (((uint)puVar31[8] != (uint)*puVar15) &&
           ((uint)*puVar15 != *(uint *)((long)puVar31 + 0x44))) {
          puVar31[10] = (ulong)(puVar15 + 1);
          goto LAB_0010294b;
        }
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
   case '\x1e':
    if (uVar20 == 0) {
      puVar31[10] = puVar31[10] - 2;
      goto LAB_001008b1;
    }
    goto switchD_00100677_caseD_23;
   case '\x1f':
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        uVar17 = *puVar15;
        puVar31[10] = (ulong)(puVar15 + 1);
        if ((uint)puVar31[8] != (uint)uVar17) goto LAB_001027a8;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
   case ' ':
    if (uVar20 == 0) {
      puVar31[10] = puVar31[10] - 2;
      goto LAB_00100809;
    }
    goto switchD_00100677_caseD_23;
   case '!':
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if (*(uint *)((long)puVar31 + 0x3c) <= (uint)uVar9) break;
    puVar15 = (ushort *)puVar31[10];
    puVar13 = *(ushort **)(param_6 + 0x88);
    if (puVar15 < puVar13) {
      if ((int)puVar31[8] == 0xc) {
        if (*(int *)(param_6 + 0xe4) == 0) {
          if (((puVar13 + -(ulong)*(uint *)(param_6 + 0xe8) < puVar15) ||
              (*puVar15 != *(ushort *)(param_6 + 0xec))) ||
             ((*(uint *)(param_6 + 0xe8) != 1 && (puVar15[1] != *(ushort *)(param_6 + 0xee)))))
          goto LAB_0010296b;
        }
        else {
          iVar3 = _pcre2_is_newline_16
                            (puVar15,*(int *)(param_6 + 0xe4),puVar13,param_6 + 0xe8,bVar34);
          if (iVar3 == 0) {
            puVar15 = (ushort *)puVar31[10];
            goto LAB_0010296b;
          }
        }
        break;
      }
LAB_0010296b:
      uVar17 = *puVar15;
      uVar9 = (ulong)uVar17;
      puVar13 = puVar15 + 1;
      puVar31[10] = (ulong)puVar13;
      switch((int)puVar31[8]) {
      case 6:
        if (uVar17 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar9) & 8;
joined_r0x001049c6:
          if (bVar16 != 0) break;
        }
        goto switchD_00102997_caseD_d;
      case 7:
        if (uVar17 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar9) & 8;
          goto joined_r0x001049c6;
        }
        break;
      case 8:
        if (uVar17 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar9) & 1;
          goto joined_r0x001049c6;
        }
        goto switchD_00102997_caseD_d;
      case 9:
        if (uVar17 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar9) & 1;
          goto joined_r0x001049c6;
        }
        break;
      case 10:
        if (uVar17 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar9) & 0x10;
          goto joined_r0x001049c6;
        }
        goto switchD_00102997_caseD_d;
      case 0xb:
        if (uVar17 < 0x100) {
          bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar9) & 0x10;
          goto joined_r0x001049c6;
        }
        break;
      case 0xc:
        if (((((*(short *)(param_6 + 0x60) == 0) || (puVar13 < *(ushort **)(param_6 + 0x88))) ||
             (*(int *)(param_6 + 0xe4) != 0)) ||
            ((*(int *)(param_6 + 0xe8) != 2 || (uVar17 != *(ushort *)(param_6 + 0xec))))) ||
           (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) == 1))
        goto LAB_001049d2;
        goto LAB_00102f0a;
      case 0xd:
      case 0xe:
        goto switchD_00102997_caseD_d;
      default:
        goto switchD_001005dc_caseD_62;
      case 0x11:
        if (uVar17 == 0xd) {
          if ((puVar13 < *(ushort **)(param_6 + 0x88)) && (puVar15[1] == 10)) {
            puVar31[10] = (ulong)(puVar15 + 2);
          }
          goto LAB_001049d2;
        }
        if (uVar17 < 0xe) {
          if (uVar17 == 10) goto switchD_00102997_caseD_d;
          uVar17 = uVar17 - 0xb;
joined_r0x0010b01e:
          if (1 < uVar17) break;
        }
        else if (uVar17 != 0x85) {
          uVar17 = uVar17 + 0xdfd8;
          goto joined_r0x0010b01e;
        }
        if (*(short *)(param_6 + 0x62) != 2) goto switchD_00102997_caseD_d;
        break;
      case 0x12:
        if (uVar17 != 0x180e) {
          if (uVar17 < 0x180f) {
            if (uVar17 != 0xa0) {
              if (uVar17 < 0xa1) {
                if ((uVar17 != 9) && (uVar17 != 0x20)) goto switchD_00102997_caseD_d;
              }
              else if (uVar17 != 0x1680) goto switchD_00102997_caseD_d;
            }
          }
          else if (uVar17 != 0x205f) {
            if (uVar17 < 0x2060) {
              if (uVar17 < 0x200b) {
                if (uVar17 < 0x2000) goto switchD_00102997_caseD_d;
              }
              else if (uVar17 != 0x202f) goto switchD_00102997_caseD_d;
            }
            else {
joined_r0x0010b4a1:
              if (uVar17 == 0x3000) goto switchD_00102997_caseD_d;
            }
          }
        }
        break;
      case 0x13:
        if (uVar17 != 0x180e) {
          if (uVar17 < 0x180f) {
            if (uVar17 != 0xa0) {
              if (uVar17 < 0xa1) {
                if ((uVar17 == 9) || (uVar17 == 0x20)) goto switchD_00102997_caseD_d;
              }
              else if (uVar17 == 0x1680) goto switchD_00102997_caseD_d;
              break;
            }
          }
          else if (uVar17 != 0x205f) {
            if (0x205f < uVar17) goto joined_r0x0010b4a1;
            if (uVar17 < 0x200b) {
              if (0x1fff < uVar17) goto switchD_00102997_caseD_d;
            }
            else if (uVar17 == 0x202f) goto switchD_00102997_caseD_d;
            break;
          }
        }
switchD_00102997_caseD_d:
        goto LAB_001049d2;
      case 0x14:
        if (uVar17 != 0x85) {
          if (uVar17 < 0x86) {
            if (3 < (ushort)(uVar17 - 10)) goto switchD_00102997_caseD_d;
          }
          else if (1 < (ushort)(uVar17 + 0xdfd8)) goto switchD_00102997_caseD_d;
        }
        break;
      case 0x15:
        if (uVar17 == 0x85) goto switchD_00102997_caseD_d;
        if (uVar17 < 0x86) {
          if ((ushort)(uVar17 - 10) < 4) goto switchD_00102997_caseD_d;
        }
        else if ((ushort)(uVar17 + 0xdfd8) < 2) goto switchD_00102997_caseD_d;
      }
    }
    else {
      sVar2 = *(short *)(param_6 + 0x60);
      if ((sVar2 != 0) &&
         ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
        *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x00101330:
        if (sVar2 == 1) break;
        goto LAB_00102f0a;
      }
    }
    break;
   case '\"':
    if (uVar20 == 0) {
      uVar9 = puVar31[10];
      puVar31[10] = uVar9 - 2;
      if (((int)puVar31[8] != 0x11) || (uVar9 - 2 <= puVar31[1])) goto LAB_001008fb;
      if ((*(short *)(uVar9 - 2) != 10) || (*(short *)(uVar9 - 4) != 0xd)) goto LAB_00100909;
      puVar31[10] = uVar9 - 4;
      goto LAB_001008fb;
    }
   case '#':
    goto switchD_00100677_caseD_23;
   case '%':
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar20 = *(uint *)((long)puVar31 + 0x3c);
    *(uint *)((long)puVar31 + 0x3c) = uVar20 - 1;
    if ((uint)puVar31[7] < uVar20) {
      uVar9 = puVar31[10];
      puVar31[10] = uVar9 + 2;
      if (((uVar24 != 0) && (uVar9 + 2 < *(ulong *)(param_6 + 0x88))) &&
         ((*(ushort *)(uVar9 + 2) & 0xfc00) == 0xdc00)) {
        puVar31[10] = uVar9 + 4;
      }
      goto LAB_001047ba;
    }
    break;
   case 'd':
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        uVar17 = *puVar15;
        uVar20 = (uint)uVar17;
        puVar31[10] = (ulong)(puVar15 + 1);
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
          uVar26 = puVar15[1];
          puVar31[10] = (ulong)(puVar15 + 2);
          uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
        }
        iVar3 = _pcre2_xclass_16(uVar20,puVar31[2],bVar34);
        if (iVar3 != 0) goto LAB_0010286d;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
   case 'e':
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[10];
    puVar31[10] = uVar9 - 2;
    if (puVar31[1] < uVar9) {
      if ((uVar24 != 0) && ((*(ushort *)(uVar9 - 2) & 0xfc00) == 0xdc00)) {
        puVar31[10] = uVar9 - 4;
      }
      goto LAB_00101b94;
    }
    break;
   case -0x38:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        puVar31[10] = (ulong)(puVar15 + 1);
        uVar17 = *puVar15;
        if ((uVar17 & 0xfc00) == 0xd800) {
          puVar31[10] = (ulong)(puVar15 + 2);
        }
        else if (uVar17 < 0x100) {
          if ((*(byte *)(puVar31[2] + (ulong)(uVar17 >> 3)) >> (uVar17 & 7) & 1) == 0) break;
          goto LAB_001028c5;
        }
        if (*(char *)((long)puVar31 + 0x49) != 'n') goto LAB_001028c5;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;
   case -0x37:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[10];
    puVar31[10] = uVar9 - 2;
    if (puVar31[1] < uVar9) {
      if ((*(ushort *)(uVar9 - 2) & 0xfc00) == 0xdc00) {
        puVar31[10] = uVar9 - 4;
      }
      goto LAB_00101aca;
    }
    break;
   case -0x36:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      pvVar11 = *(void **)(param_6 + 0x88);
      pvVar18 = (void *)puVar31[10];
      local_a0 = puVar31[3] * 2;
      if (((pvVar18 <= (void *)((long)pvVar11 + puVar31[3] * -2)) &&
          (iVar3 = memcmp(pvVar18,(void *)puVar31[2],local_a0), iVar3 == 0)) ||
         ((uVar9 = puVar31[5], uVar9 != 0 &&
          ((local_a0 = uVar9 * 2, pvVar18 <= (void *)((long)pvVar11 + uVar9 * -2) &&
           (iVar3 = memcmp(pvVar18,(void *)((long)puVar31 + 0x4a),local_a0), iVar3 == 0)))))) {
        puVar31[10] = (long)pvVar18 + local_a0;
        goto LAB_00101a7b;
      }
      if (((pvVar11 <= pvVar18) && (sVar2 = *(short *)(param_6 + 0x60), sVar2 != 0)) &&
         ((*(void **)(param_6 + 0xa0) < pvVar18 || (*(int *)(param_6 + 0x30) != 0)))) {
        *(undefined4 *)(param_6 + 0x28) = 1;
        goto joined_r0x00100d95;
      }
}
break;case -0x35:
    if (uVar20 == 0) {
      uVar9 = puVar31[10];
      uVar30 = uVar9 - 4;
      if ((*(ushort *)(uVar9 - 2) & 0xfc00) != 0xdc00) {
        uVar30 = uVar9 - 2;
      }
      puVar31[10] = uVar30;
      goto LAB_0010199e;
    }
    goto switchD_00100677_caseD_23;case -0x34:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        puVar31[10] = (ulong)(puVar15 + 1);
        uVar17 = *puVar15;
        uVar20 = (uint)uVar17;
        if ((uVar17 & 0xfc00) == 0xd800) {
          uVar26 = puVar15[1];
          puVar31[10] = (ulong)(puVar15 + 2);
          uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
        }
        if (((uint)puVar31[8] != uVar20) && (uVar20 != *(uint *)((long)puVar31 + 0x44)))
        goto LAB_00102ad4;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;case -0x33:
    if (uVar20 == 0) {
      uVar9 = puVar31[10];
      uVar30 = uVar9 - 4;
      if ((*(ushort *)(uVar9 - 2) & 0xfc00) != 0xdc00) {
        uVar30 = uVar9 - 2;
      }
      puVar31[10] = uVar30;
      goto LAB_001018de;
    }
    goto switchD_00100677_caseD_23;case -0x32:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        uVar17 = *puVar15;
        uVar20 = (uint)uVar17;
        puVar31[10] = (ulong)(puVar15 + 1);
        if ((uVar17 & 0xfc00) == 0xd800) {
          uVar26 = puVar15[1];
          puVar31[10] = (ulong)(puVar15 + 2);
          uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
        }
        if ((uint)puVar31[8] != uVar20) goto LAB_0010229a;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;case -0x31:
    if (uVar20 == 0) {
      uVar9 = puVar31[10];
      uVar30 = uVar9 - 4;
      if ((*(ushort *)(uVar9 - 2) & 0xfc00) != 0xdc00) {
        uVar30 = uVar9 - 2;
      }
      puVar31[10] = uVar30;
      goto LAB_0010181e;
    }
    goto switchD_00100677_caseD_23;case -0x30:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        puVar31[10] = (ulong)(puVar15 + 1);
        if ((uVar24 != 0) && ((*puVar15 & 0xfc00) == 0xd800)) {
          puVar31[10] = (ulong)(puVar15 + 2);
        }
        if ((int)puVar31[8] != 0xf) goto switchD_0010b828_caseD_0;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;case -0x2f:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        puVar31[10] = (ulong)(puVar15 + 1);
        uVar17 = *puVar15;
        uVar20 = (uint)uVar17;
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
          uVar26 = puVar15[1];
          puVar31[10] = (ulong)(puVar15 + 2);
          uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
        }
        if (((byte)((&DAT_0010f019)
                    [(ulong)*(ushort *)
                             (&_pcre2_ucd_stage2_16 +
                             (long)(int)((uint)*(ushort *)
                                                (&_pcre2_ucd_stage1_16 +
                                                (long)((int)uVar20 >> 7) * 2) * 0x80 +
                                        (uVar20 & 0x7f)) * 2) * 0xc] - 8) < 2 ||
            (&DAT_0010f019)
            [(ulong)*(ushort *)
                     (&_pcre2_ucd_stage2_16 +
                     (long)(int)((uint)*(ushort *)
                                        (&_pcre2_ucd_stage1_16 + (long)((int)uVar20 >> 7) * 2) *
                                 0x80 + (uVar20 & 0x7f)) * 2) * 0xc] == '\x05') !=
            ((int)puVar31[8] == 0xf)) goto switchD_0010b828_caseD_1;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;case -0x2e:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        puVar31[10] = (ulong)(puVar15 + 1);
        uVar17 = *puVar15;
        uVar20 = (uint)uVar17;
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
          uVar26 = puVar15[1];
          puVar31[10] = (ulong)(puVar15 + 2);
          uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
        }
        if ((*(int *)(&_pcre2_ucp_gentype_16 +
                     (ulong)(byte)(&DAT_0010f019)
                                  [(ulong)*(ushort *)
                                           (&_pcre2_ucd_stage2_16 +
                                           (long)(int)((uint)*(ushort *)
                                                              (&_pcre2_ucd_stage1_16 +
                                                              (long)((int)uVar20 >> 7) * 2) * 0x80 +
                                                      (uVar20 & 0x7f)) * 2) * 0xc] * 4) !=
            *(int *)((long)puVar31 + 0x44)) == ((int)puVar31[8] == 0xf))
        goto switchD_0010b828_caseD_2;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;case -0x2d:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        puVar31[10] = (ulong)(puVar15 + 1);
        uVar17 = *puVar15;
        uVar20 = (uint)uVar17;
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
          uVar26 = puVar15[1];
          puVar31[10] = (ulong)(puVar15 + 2);
          uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
        }
        if (((uint)(byte)(&DAT_0010f019)
                         [(ulong)*(ushort *)
                                  (&_pcre2_ucd_stage2_16 +
                                  (long)(int)((uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_16 +
                                                     (long)((int)uVar20 >> 7) * 2) * 0x80 +
                                             (uVar20 & 0x7f)) * 2) * 0xc] !=
            *(uint *)((long)puVar31 + 0x44)) == ((int)puVar31[8] == 0xf))
        goto switchD_0010b828_caseD_3;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;case -0x2c:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        puVar31[10] = (ulong)(puVar15 + 1);
        uVar17 = *puVar15;
        uVar20 = (uint)uVar17;
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
          uVar26 = puVar15[1];
          puVar31[10] = (ulong)(puVar15 + 2);
          uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
        }
        if (((uint)(byte)(&_pcre2_ucd_records_16)
                         [(ulong)*(ushort *)
                                  (&_pcre2_ucd_stage2_16 +
                                  (long)(int)((uint)*(ushort *)
                                                     (&_pcre2_ucd_stage1_16 +
                                                     (long)((int)uVar20 >> 7) * 2) * 0x80 +
                                             (uVar20 & 0x7f)) * 2) * 0xc] !=
            *(uint *)((long)puVar31 + 0x44)) == ((int)puVar31[8] == 0xf))
        goto switchD_0010b828_caseD_4;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;case -0x2b:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        puVar31[10] = (ulong)(puVar15 + 1);
        uVar17 = *puVar15;
        uVar20 = (uint)uVar17;
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
          uVar26 = puVar15[1];
          puVar31[10] = (ulong)(puVar15 + 2);
          uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
        }
        if (((int)puVar31[8] == 0xf) !=
            ((*(uint *)(&_pcre2_ucp_gentype_16 +
                       (ulong)(byte)(&DAT_0010f019)
                                    [(ulong)*(ushort *)
                                             (&_pcre2_ucd_stage2_16 +
                                             (long)(int)((uint)*(ushort *)
                                                                (&_pcre2_ucd_stage1_16 +
                                                                (long)((int)uVar20 >> 7) * 2) * 0x80
                                                        + (uVar20 & 0x7f)) * 2) * 0xc] * 4) &
             0xfffffffd) == 1)) goto switchD_0010b828_caseD_6;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;case -0x2a:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        uVar17 = *puVar15;
        uVar20 = (uint)uVar17;
        puVar31[10] = (ulong)(puVar15 + 1);
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
          uVar17 = puVar15[1];
          puVar31[10] = (ulong)(puVar15 + 2);
          uVar20 = ((uVar20 & 0x3ff) << 10 | uVar17 & 0x3ff) + 0x10000;
          goto LAB_001026df;
        }
        if (uVar17 != 0x180e) {
          if (uVar17 < 0x180f) {
            if (uVar17 != 0x85) {
              if (uVar17 < 0x86) {
                if (uVar17 < 0xe) {
                  if (uVar17 < 9) goto LAB_001026df;
                }
                else if (uVar17 != 0x20) goto LAB_001026df;
              }
              else if ((uVar17 != 0xa0) && (uVar17 != 0x1680)) goto LAB_001026df;
            }
          }
          else if (uVar17 < 0x2060) {
            if (uVar17 < 0x2028) {
              if (10 < (ushort)(uVar17 + 0xe000)) {
LAB_001026df:
                if ((*(int *)(&_pcre2_ucp_gentype_16 +
                             (ulong)(byte)(&DAT_0010f019)
                                          [(ulong)*(ushort *)
                                                   (&_pcre2_ucd_stage2_16 +
                                                   (long)(int)((uVar20 & 0x7f) +
                                                              (uint)*(ushort *)
                                                                     (&_pcre2_ucd_stage1_16 +
                                                                     (long)((int)uVar20 >> 7) * 2) *
                                                              0x80) * 2) * 0xc] * 4) != 6) !=
                    ((int)puVar31[8] == 0xf)) break;
                goto switchD_0010b828_caseD_7;
              }
            }
            else if ((0x80000000000083U >> ((ulong)(ushort)(uVar17 + 0xdfd8) & 0x3f) & 1) == 0)
            goto LAB_001026df;
          }
          else if (uVar17 != 0x3000) goto LAB_001026df;
        }
        if ((int)puVar31[8] != 0xf) goto switchD_0010b828_caseD_7;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;case -0x29:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        puVar31[10] = (ulong)(puVar15 + 1);
        uVar17 = *puVar15;
        uVar20 = (uint)uVar17;
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
          uVar26 = puVar15[1];
          puVar31[10] = (ulong)(puVar15 + 2);
          uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
        }
        if (((int)puVar31[8] == 0xf) !=
            ((*(uint *)(&_pcre2_ucp_gentype_16 +
                       (ulong)(byte)(&DAT_0010f019)
                                    [(ulong)*(ushort *)
                                             (&_pcre2_ucd_stage2_16 +
                                             (long)(int)((uint)*(ushort *)
                                                                (&_pcre2_ucd_stage1_16 +
                                                                (long)((int)uVar20 >> 7) * 2) * 0x80
                                                        + (uVar20 & 0x7f)) * 2) * 0xc] * 4) &
             0xfffffffd) == 1 ||
            ((&DAT_0010f019)
             [(ulong)*(ushort *)
                      (&_pcre2_ucd_stage2_16 +
                      (long)(int)((uint)*(ushort *)
                                         (&_pcre2_ucd_stage1_16 + (long)((int)uVar20 >> 7) * 2) *
                                  0x80 + (uVar20 & 0x7f)) * 2) * 0xc] - 0xc & 0xfb) == 0))
        goto switchD_0010b828_caseD_9;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;case -0x28:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        uVar17 = *puVar15;
        uVar20 = (uint)uVar17;
        puVar31[10] = (ulong)(puVar15 + 1);
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
          uVar26 = puVar15[1];
          puVar31[10] = (ulong)(puVar15 + 2);
          uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
        }
        puVar14 = (uint *)(&_pcre2_ucd_caseless_sets_16 + (ulong)*(uint *)((long)puVar31 + 0x44) * 4
                          );
        do {
          uVar28 = *puVar14;
          if (uVar20 < uVar28) {
            iVar3 = (int)puVar31[8];
            goto joined_r0x0010826f;
          }
          puVar14 = puVar14 + 1;
        } while (uVar28 != uVar20);
        iVar3 = (int)puVar31[8];
joined_r0x0010826f:
        if (iVar3 == 0xf) goto switchD_0010b828_caseD_a;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;case -0x27:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        puVar31[10] = (ulong)(puVar15 + 1);
        uVar17 = *puVar15;
        uVar20 = (uint)uVar17;
        if ((uVar24 == 0) || ((uVar17 & 0xfc00) != 0xd800)) {
          if (((uVar17 & 0xffdf) != 0x40) && (uVar17 != 0x24)) goto LAB_001024a7;
          bVar35 = true;
        }
        else {
          uVar26 = puVar15[1];
          puVar31[10] = (ulong)(puVar15 + 2);
          uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
LAB_001024a7:
          bVar35 = uVar20 - 0xa0 < 0xd760 || 0xdfff < uVar20;
        }
        if (((int)puVar31[8] == 0xf) != bVar35) goto switchD_0010b828_caseD_b;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;case -0x26:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        puVar31[10] = (ulong)(puVar15 + 1);
        uVar17 = *puVar15;
        uVar20 = (uint)uVar17;
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
          uVar26 = puVar15[1];
          puVar31[10] = (ulong)(puVar15 + 2);
          uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
        }
        uVar9 = _pcre2_extuni_16(uVar20,puVar31[10],*(undefined8 *)(param_6 + 0x78));
        puVar31[10] = uVar9;
        if (((uVar9 < *(ulong *)(param_6 + 0x88)) || (*(short *)(param_6 + 0x60) == 0)) ||
           (((uVar9 <= *(ulong *)(param_6 + 0xa0) && (*(int *)(param_6 + 0x30) == 0)) ||
            (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) == 1))))
        goto LAB_0010b5b2;
        goto LAB_00102f0a;
      }
      sVar2 = *(short *)(param_6 + 0x60);
      if ((sVar2 != 0) &&
         ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
        *(undefined4 *)(param_6 + 0x28) = 1;
        goto joined_r0x00100d95;
      }
    }
    break;case -0x25:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if (*(uint *)((long)puVar31 + 0x3c) <= (uint)uVar9) break;
    puVar15 = (ushort *)puVar31[10];
    puVar13 = *(ushort **)(param_6 + 0x88);
    if (puVar13 <= puVar15) {
      sVar2 = *(short *)(param_6 + 0x60);
      if ((sVar2 != 0) &&
         ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
        *(undefined4 *)(param_6 + 0x28) = 1;
        goto joined_r0x00101330;
      }
      break;
    }
    if ((int)puVar31[8] == 0xc) {
      if (*(int *)(param_6 + 0xe4) == 0) {
        if (((puVar13 + -(ulong)*(uint *)(param_6 + 0xe8) < puVar15) ||
            (*puVar15 != *(ushort *)(param_6 + 0xec))) ||
           ((*(uint *)(param_6 + 0xe8) != 1 && (puVar15[1] != *(ushort *)(param_6 + 0xee)))))
        goto LAB_001028eb;
      }
      else {
        iVar3 = _pcre2_is_newline_16(puVar15,*(int *)(param_6 + 0xe4),puVar13,param_6 + 0xe8,bVar34)
        ;
        if (iVar3 == 0) {
          puVar15 = (ushort *)puVar31[10];
          goto LAB_001028eb;
        }
      }
      break;
    }
LAB_001028eb:
    uVar17 = *puVar15;
    uVar9 = (ulong)uVar17;
    uVar20 = (uint)uVar17;
    puVar31[10] = (ulong)(puVar15 + 1);
    if ((uVar17 & 0xfc00) == 0xd800) {
      puVar31[10] = (ulong)(puVar15 + 2);
      switch((int)puVar31[8]) {
      case 6:
      case 8:
      case 10:
      case 0xd:
      case 0xe:
      case 0x12:
      case 0x14:
        goto switchD_00102926_caseD_d;
      case 7:
      case 9:
      case 0xb:
      case 0x11:
      case 0x13:
      case 0x15:
        goto switchD_001048ad_caseD_7;
      case 0xc:
        uVar20 = ((uVar17 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
        goto LAB_00105125;
      }
      goto switchD_001005dc_caseD_62;
    }
    if (0xf < (int)puVar31[8] - 6U) goto switchD_001005dc_caseD_62;
    uVar28 = (uint)uVar17;
    uVar4 = (uint)uVar17;
    uVar27 = (uint)uVar17;
    switch((int)puVar31[8]) {
    case 6:
      if (uVar28 < 0x100) {
        bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar9) & 8;
joined_r0x00104919:
        if (bVar16 != 0) break;
      }
      goto switchD_00102926_caseD_d;
    case 7:
      if (uVar4 < 0x100) {
        bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar9) & 8;
        goto joined_r0x00104919;
      }
      break;
    case 8:
      if (uVar4 < 0x100) {
        bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar9) & 1;
        goto joined_r0x00104919;
      }
      goto switchD_00102926_caseD_d;
    case 9:
      if (uVar4 < 0x100) {
        bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar9) & 1;
        goto joined_r0x00104919;
      }
      break;
    case 10:
      if (uVar4 < 0x100) {
        bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar9) & 0x10;
        goto joined_r0x00104919;
      }
      goto switchD_00102926_caseD_d;
    case 0xb:
      if (uVar4 < 0x100) {
        bVar16 = *(byte *)(*(long *)(param_6 + 0x48) + uVar9) & 0x10;
        goto joined_r0x00104919;
      }
      break;
    case 0xc:
LAB_00105125:
      if ((((*(short *)(param_6 + 0x60) == 0) || (puVar31[10] < *(ulong *)(param_6 + 0x88))) ||
          (*(int *)(param_6 + 0xe4) != 0)) ||
         (((*(int *)(param_6 + 0xe8) != 2 || (*(ushort *)(param_6 + 0xec) != uVar20)) ||
          (*(undefined4 *)(param_6 + 0x28) = 1, *(short *)(param_6 + 0x60) == 1))))
      goto LAB_00104925;
      goto LAB_00102f0a;
    default:
      goto switchD_00102926_caseD_d;
    case 0xf:
    case 0x10:
      goto switchD_001005dc_caseD_62;
    case 0x11:
      if (uVar27 == 0xd) {
        if ((puVar15 + 1 < *(ushort **)(param_6 + 0x88)) && (puVar15[1] == 10)) {
          puVar31[10] = (ulong)(puVar15 + 2);
        }
        goto LAB_00104925;
      }
      if (uVar27 < 0xe) {
        if (uVar27 == 10) goto switchD_00102926_caseD_d;
        uVar4 = uVar4 - 0xb;
joined_r0x0010bd31:
        if (1 < uVar4) break;
      }
      else if (uVar27 != 0x85) {
        uVar4 = uVar27 - 0x2028;
        goto joined_r0x0010bd31;
      }
      if (*(short *)(param_6 + 0x62) != 2) goto switchD_00102926_caseD_d;
      break;
    case 0x12:
      if (uVar27 != 0x180e) {
        if (uVar27 < 0x180f) {
          if (uVar27 != 0xa0) {
            if (uVar27 < 0xa1) {
              if ((uVar27 != 9) && (uVar17 != 0x20)) goto switchD_00102926_caseD_d;
            }
            else if (uVar27 != 0x1680) goto switchD_00102926_caseD_d;
          }
        }
        else if (uVar17 != 0x205f) {
          if (uVar17 < 0x2060) {
            if (uVar17 < 0x200b) {
              if (uVar27 < 0x2000) goto switchD_00102926_caseD_d;
            }
            else if (uVar27 != 0x202f) goto switchD_00102926_caseD_d;
          }
          else {
joined_r0x0010bdf5:
            if (uVar17 == 0x3000) goto switchD_00102926_caseD_d;
          }
        }
      }
      break;
    case 0x13:
      if (uVar27 != 0x180e) {
        if (uVar27 < 0x180f) {
          if (uVar27 != 0xa0) {
            if (uVar27 < 0xa1) {
              if ((uVar17 == 9) || (uVar17 == 0x20)) goto switchD_00102926_caseD_d;
            }
            else if (uVar17 == 0x1680) goto switchD_00102926_caseD_d;
            break;
          }
        }
        else if (uVar17 != 0x205f) {
          if (0x205f < uVar17) goto joined_r0x0010bdf5;
          if (uVar17 < 0x200b) {
            if (0x1fff < uVar27) goto switchD_00102926_caseD_d;
          }
          else if (uVar27 == 0x202f) goto switchD_00102926_caseD_d;
          break;
        }
      }
switchD_00102926_caseD_d:
      goto LAB_00104925;
    case 0x14:
      if (uVar28 != 0x85) {
        if (uVar28 < 0x86) {
          if (3 < uVar28 - 10) goto switchD_00102926_caseD_d;
        }
        else if (1 < uVar28 - 0x2028) goto switchD_00102926_caseD_d;
      }
      break;
    case 0x15:
      if (uVar27 == 0x85) goto switchD_00102926_caseD_d;
      if (uVar27 < 0x86) {
        if (uVar27 - 10 < 4) goto switchD_00102926_caseD_d;
      }
      else if (uVar28 - 0x2028 < 2) goto switchD_00102926_caseD_d;
    }
    break;case -0x24:
    if (uVar20 == 0) {
      uVar9 = puVar31[10];
      puVar15 = (ushort *)(uVar9 - 2);
      puVar31[10] = (ulong)puVar15;
      if (uVar24 == 0) {
        uVar20 = (uint)*(ushort *)(uVar9 - 2);
      }
      else {
        if ((*(ushort *)(uVar9 - 2) & 0xfc00) == 0xdc00) {
          puVar31[10] = uVar9 - 4;
        }
        puVar15 = (ushort *)puVar31[10];
        uVar17 = *puVar15;
        uVar20 = (uint)uVar17;
        if ((uVar17 & 0xfc00) == 0xd800) {
          uVar20 = ((uVar17 & 0x3ff) << 10 | puVar15[1] & 0x3ff) + 0x10000;
        }
      }
      uVar9 = (ulong)(byte)(&DAT_0010f01a)
                           [(ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_16 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_16 +
                                                       (long)((int)uVar20 >> 7) * 2) * 0x80 +
                                               (uVar20 & 0x7f)) * 2) * 0xc];
      goto joined_r0x001011fc;
    }
    goto switchD_00100677_caseD_23;case -0x23:
    if (uVar20 == 0) {
      uVar9 = puVar31[10];
      psVar6 = (short *)(uVar9 - 4);
      if ((*(ushort *)(uVar9 - 2) & 0xfc00) != 0xdc00) {
        psVar6 = (short *)(uVar9 - 2);
      }
      puVar31[10] = (ulong)psVar6;
      if ((int)puVar31[8] != 0x11) goto LAB_00101169;
      if (psVar6 <= (short *)puVar31[1]) goto LAB_001005ba;
      if ((*psVar6 != 10) || (psVar6[-1] != 0xd)) goto LAB_00101177;
      puVar31[10] = (ulong)(psVar6 + -1);
      goto LAB_00101169;
    }
    goto switchD_00100677_caseD_23;case -0x22:
    goto switchD_00100677_caseD_de;case -0x21:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        puVar31[10] = (ulong)(puVar15 + 1);
        uVar17 = *puVar15;
        uVar20 = (uint)uVar17;
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
          uVar26 = puVar15[1];
          puVar31[10] = (ulong)(puVar15 + 2);
          uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
        }
        if (((1 << ((byte)*(uint *)((long)puVar31 + 0x44) & 0x1f) &
             *(uint *)(&_pcre2_ucd_boolprop_sets_16 +
                      ((ulong)(*(ushort *)
                                (&DAT_0010f022 +
                                (ulong)*(ushort *)
                                        (&_pcre2_ucd_stage2_16 +
                                        (long)(int)((uint)*(ushort *)
                                                           (&_pcre2_ucd_stage1_16 +
                                                           (long)((int)uVar20 >> 7) * 2) * 0x80 +
                                                   (uVar20 & 0x7f)) * 2) * 0xc) & 0xfff) +
                      (ulong)(*(uint *)((long)puVar31 + 0x44) >> 5)) * 4)) != 0) !=
            ((int)puVar31[8] == 0xf)) goto switchD_0010b828_caseD_d;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;case -0x20:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        puVar31[10] = (ulong)(puVar15 + 1);
        uVar17 = *puVar15;
        uVar20 = (uint)uVar17;
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
          uVar26 = puVar15[1];
          puVar31[10] = (ulong)(puVar15 + 2);
          uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
        }
        if (((uint)(*(ushort *)
                     (&_pcre2_ucd_caseless_sets_16 +
                     (ulong)*(ushort *)
                             (&_pcre2_ucd_stage2_16 +
                             (long)(int)((uint)*(ushort *)
                                                (&_pcre2_ucd_stage1_16 +
                                                (long)((int)uVar20 >> 7) * 2) * 0x80 +
                                        (uVar20 & 0x7f)) * 2) * 0xc) >> 0xb) !=
            *(uint *)((long)puVar31 + 0x44)) == ((int)puVar31[8] == 0xf))
        goto switchD_0010b828_caseD_c;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
    break;case -0x1f:
    if (uVar20 != 0) goto switchD_00100677_caseD_23;
    uVar9 = puVar31[7];
    *(uint *)(puVar31 + 7) = (uint)uVar9 + 1;
    if ((uint)uVar9 < *(uint *)((long)puVar31 + 0x3c)) {
      puVar15 = (ushort *)puVar31[10];
      if (puVar15 < *(ushort **)(param_6 + 0x88)) {
        puVar31[10] = (ulong)(puVar15 + 1);
        uVar17 = *puVar15;
        uVar20 = (uint)uVar17;
        if ((uVar24 != 0) && ((uVar17 & 0xfc00) == 0xd800)) {
          uVar26 = puVar15[1];
          puVar31[10] = (ulong)(puVar15 + 2);
          uVar20 = ((uVar17 & 0x3ff) << 10 | uVar26 & 0x3ff) + 0x10000;
        }
        uVar28 = *(uint *)((long)puVar31 + 0x44);
        bVar35 = true;
        if ((byte)(&_pcre2_ucd_records_16)
                  [(ulong)*(ushort *)
                           (&_pcre2_ucd_stage2_16 +
                           (long)(int)((uint)*(ushort *)
                                              (&_pcre2_ucd_stage1_16 + (long)((int)uVar20 >> 7) * 2)
                                       * 0x80 + (uVar20 & 0x7f)) * 2) * 0xc] != uVar28) {
          bVar35 = (1 << ((byte)uVar28 & 0x1f) &
                   *(uint *)(&_pcre2_ucd_script_sets_16 +
                            ((ulong)(*(ushort *)
                                      (&_pcre2_ucd_caseless_sets_16 +
                                      (ulong)*(ushort *)
                                              (&_pcre2_ucd_stage2_16 +
                                              (long)(int)((uint)*(ushort *)
                                                                 (&_pcre2_ucd_stage1_16 +
                                                                 (long)((int)uVar20 >> 7) * 2) *
                                                          0x80 + (uVar20 & 0x7f)) * 2) * 0xc) &
                                    0x3ff) + (ulong)(uVar28 >> 5)) * 4)) != 0;
        }
        if (((int)puVar31[8] == 0xf) != bVar35) goto switchD_0010b828_caseD_5;
      }
      else {
        sVar2 = *(short *)(param_6 + 0x60);
        if ((sVar2 != 0) &&
           ((*(ushort **)(param_6 + 0xa0) < puVar15 || (*(int *)(param_6 + 0x30) != 0)))) {
          *(undefined4 *)(param_6 + 0x28) = 1;
          goto joined_r0x00100d95;
        }
      }
    }
  }
switchD_001048ad_caseD_7:
  uVar20 = 0;
  goto switchD_00100677_caseD_23;
code_r0x0010886e:
  puVar15 = puVar15 + 1;
  uVar20 = uVar20 + 1;
  puVar31[10] = (ulong)puVar15;
  if (uVar27 <= uVar20) goto LAB_001084a6;
  goto LAB_00108883;
code_r0x00107718:
  puVar15 = puVar15 + 1;
  uVar20 = uVar20 + 1;
  puVar31[10] = (ulong)puVar15;
  if (uVar27 <= uVar20) goto LAB_001073b1;
  goto LAB_0010772d;
code_r0x00106576:
  puVar15 = puVar15 + lVar23;
  uVar20 = uVar20 + 1;
  puVar31[10] = (ulong)puVar15;
  if (uVar27 <= uVar20) goto LAB_00106c29;
  goto LAB_0010658b;
LAB_00102ddd:
  if (*(int *)(param_6 + 0x30) != 0) {
LAB_00102dea:
    *(undefined4 *)(param_6 + 0x28) = 1;
joined_r0x001099c4:
    if (sVar2 != 1) goto LAB_00102f0a;
  }
  goto switchD_001005dc_caseD_a3;
switchD_00100677_caseD_de:
  if (uVar20 == 0) goto code_r0x001010d9;
  goto switchD_00100677_caseD_23;
code_r0x001010d9:
  uVar9 = puVar31[10];
  puVar31[10] = uVar9 - 2;
  if ((uVar24 != 0) && ((*(ushort *)(uVar9 - 2) & 0xfc00) == 0xdc00)) {
    puVar31[10] = uVar9 - 4;
  }
LAB_00101108:
  if (puVar31[1] < puVar31[10]) {
    *(undefined1 *)(puVar31 + 9) = 0xde;
    param_2 = (ushort *)*puVar31;
    uVar20 = 0;
    puVar21 = puVar31;
    goto LAB_00101cc8;
  }
  goto LAB_001005ba;
joined_r0x001011fc:
  if (puVar15 <= (ushort *)puVar31[1]) goto LAB_001005ba;
  puVar13 = (ushort *)((long)puVar15 + 0xfffffffffffffffe);
  if (uVar24 == 0) {
    uVar20 = (uint)*(ushort *)((long)puVar15 + 0xfffffffffffffffe);
  }
  else {
    puVar8 = (ushort *)((long)puVar15 + 0xfffffffffffffffc);
    if ((*(ushort *)((long)puVar15 + 0xfffffffffffffffe) & 0xfc00) != 0xdc00) {
      puVar8 = puVar13;
    }
    uVar17 = *puVar8;
    uVar20 = (uint)uVar17;
    puVar13 = puVar8;
    if ((uVar17 & 0xfc00) == 0xd800) {
      uVar20 = ((uVar17 & 0x3ff) << 10 | puVar8[1] & 0x3ff) + 0x10000;
    }
  }
  bVar16 = (byte)uVar9;
  uVar9 = (ulong)(byte)(&DAT_0010f01a)
                       [(ulong)*(ushort *)
                                (&_pcre2_ucd_stage2_16 +
                                (long)(int)((uVar20 & 0x7f) +
                                           (uint)*(ushort *)
                                                  (&_pcre2_ucd_stage1_16 +
                                                  (long)((int)uVar20 >> 7) * 2) * 0x80) * 2) * 0xc];
  if ((1 << (bVar16 & 0x1f) & *(uint *)(&_pcre2_ucp_gbtable_16 + uVar9 * 4)) == 0)
  goto LAB_0010a40d;
  puVar31[10] = (ulong)puVar13;
  puVar15 = puVar13;
  goto joined_r0x001011fc;
LAB_00102f0a:
  uVar20 = 0xfffffffe;
  goto LAB_00101d0c;
}



/* WARNING: Type propagation algorithm not settling */

int pcre2_match_16(undefined8 *param_1,ushort *param_2,ulong param_3,ulong param_4,uint param_5,
                  undefined8 *param_6,undefined8 *param_7)

{
  ushort *puVar1;
  size_t sVar2;
  ulong uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ushort *puVar14;
  void *pvVar15;
  ulong uVar16;
  uint uVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  ushort *puVar24;
  ushort *puVar25;
  ulong uVar26;
  ushort *puVar27;
  long in_FS_OFFSET;
  bool bVar28;
  bool bVar29;
  ulong local_278;
  uint local_268;
  uint local_254;
  ushort *local_220;
  int local_218;
  undefined8 *local_208;
  ushort *local_200;
  uint local_1e8;
  ushort local_1e4;
  ushort local_1e2;
  ushort *local_1e0;
  ushort local_1d0;
  ushort local_1ce;
  undefined4 local_1c8 [8];
  ushort *local_1a8;
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
  ushort *local_e0;
  ushort *local_d8;
  ushort *local_d0;
  ushort *local_c8;
  ushort *local_c0;
  ushort *local_b8;
  ushort *puStack_b0;
  undefined1 local_a8 [16];
  ushort *local_90;
  uint local_84;
  uint local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0 && param_2 == (ushort *)0x0) {
    param_2 = (ushort *)&_LC6;
  }
  local_254 = param_5 & 0x1ffb9fc0;
  if ((param_5 & 0x1ffb9fc0) != 0) {
LAB_0010da81:
    iVar11 = -0x22;
    goto LAB_0010c740;
  }
  bVar8 = (param_1 == (undefined8 *)0x0 || param_6 == (undefined8 *)0x0) || param_2 == (ushort *)0x0
  ;
  if (bVar8) {
    iVar11 = -0x33;
    goto LAB_0010c740;
  }
  puVar14 = param_2 + param_4;
  local_278 = param_3;
  if (param_3 == 0xffffffffffffffff) {
    local_278 = _pcre2_strlen_16(param_2);
  }
  local_1e8 = (uint)(param_3 == 0xffffffffffffffff);
  puVar1 = param_2 + local_278;
  if (local_278 < param_4) {
    iVar11 = -0x21;
    goto LAB_0010c740;
  }
  if (*(int *)(param_1 + 10) != 0x50435245) {
    iVar11 = -0x1f;
    goto LAB_0010c740;
  }
  if ((*(uint *)(param_1 + 0xc) & 7) != 2) {
    iVar11 = -0x20;
    goto LAB_0010c740;
  }
  uVar10 = *(uint *)(param_1 + 0xc) >> 0xe & 0xc | param_5;
  lVar23 = param_1[4];
  uVar13 = *(uint *)(param_1 + 0xb);
  uVar21 = uVar13 & 0x80000;
  local_268 = uVar13 & 0x4000000;
  if ((param_5 & 0x20) == 0) {
    local_f8 = (ushort)(param_5 >> 4) & 1;
    if ((param_5 & 0x10) != 0) goto LAB_0010c35b;
  }
  else {
    local_f8 = 2;
LAB_0010c35b:
    if (((uVar13 | uVar10) & 0x20000000) != 0) goto LAB_0010da81;
  }
  if (((param_7 != (undefined8 *)0x0) && (param_7[9] != -1)) && ((uVar13 & 0x800000) == 0)) {
    iVar11 = -0x38;
    goto LAB_0010c740;
  }
  if ((*(byte *)((long)param_6 + 0x61) & 1) != 0) {
    (*(code *)param_6[1])(param_6[4],param_6[2]);
    *(byte *)((long)param_6 + 0x61) = *(byte *)((long)param_6 + 0x61) & 0xfe;
  }
  param_6[4] = 0;
  param_6[0xb] = 0;
  puVar19 = puVar14;
  puVar18 = puVar1;
  if (lVar23 != 0 && (param_5 & 0xbfffbfc0) == 0) {
    if (uVar21 == 0) {
LAB_0010c478:
      iVar11 = pcre2_jit_match_16(param_1,param_2,local_278,param_4,uVar10,param_6,param_7);
      puVar20 = param_2;
      if (iVar11 == -0x2d) goto LAB_0010c4c4;
    }
    else {
      if (local_268 == 0 && (param_5 & 0x40000000) == 0) {
        if ((puVar14 < puVar1) && ((*puVar14 & 0xfc00) == 0xdc00)) {
LAB_0010d98e:
          iVar11 = (-(uint)(param_4 == 0) & 10) - 0x24;
          goto LAB_0010c740;
        }
        uVar17 = (uint)*(ushort *)((long)param_1 + 0x7c);
        if ((*(ushort *)((long)param_1 + 0x7c) != 0) && (param_2 < puVar14)) {
          while (puVar19 = puVar19 + -1, param_2 < puVar19) {
            if (((*puVar19 & 0xfc00) != 0xdc00) &&
               ((uVar17 = uVar17 - 1, uVar17 == 0 || (puVar19 <= param_2)))) break;
          }
        }
        lVar23 = (long)puVar19 - (long)param_2 >> 1;
        iVar11 = _pcre2_valid_utf_16(puVar19,local_278 - lVar23,param_6 + 0xb);
        *(int *)((long)param_6 + 100) = iVar11;
        if (iVar11 != 0) {
          param_6[0xb] = param_6[0xb] + lVar23;
          goto LAB_0010c740;
        }
        goto LAB_0010c478;
      }
      iVar11 = pcre2_jit_match_16(param_1,param_2,local_278,param_4,uVar10,param_6,param_7);
      if (iVar11 == -0x2d) goto LAB_0010c794;
    }
    param_6[8] = local_278;
    if ((iVar11 < 0) || ((param_5 & 0x4000) == 0)) goto LAB_0010c740;
    sVar2 = ((long)(int)local_1e8 + local_278) * 2;
    pvVar15 = (void *)(*(code *)*param_6)(sVar2,param_6[2]);
    param_6[4] = pvVar15;
    if (pvVar15 != (void *)0x0) {
      memcpy(pvVar15,param_2,sVar2);
      *(byte *)((long)param_6 + 0x61) = *(byte *)((long)param_6 + 0x61) | 1;
      goto LAB_0010c740;
    }
LAB_0010db02:
    iVar11 = -0x30;
LAB_0010c740:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return iVar11;
  }
  puVar20 = param_2;
  if (uVar21 != 0) {
LAB_0010c794:
    if ((param_5 & 0x40000000) == 0) {
      if (local_268 != 0) goto LAB_0010c7a4;
      if ((puVar14 < puVar1) && (local_d8 = param_2, (*puVar14 & 0xfc00) == 0xdc00))
      goto LAB_0010d98e;
LAB_0010c908:
      uVar17 = (uint)*(ushort *)((long)param_1 + 0x7c);
      puVar18 = puVar19;
      local_d8 = puVar19;
      if (*(ushort *)((long)param_1 + 0x7c) != 0) {
        do {
          if (puVar18 <= param_2) {
            if (!bVar8) goto LAB_0010c7f3;
            break;
          }
          do {
            puVar18 = puVar18 + -1;
            if (puVar18 <= param_2) break;
          } while ((*puVar18 & 0xfc00) == 0xdc00);
          bVar8 = true;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
        local_d8 = puVar18;
      }
    }
    else {
      puVar20 = param_2;
      if (local_268 == 0) goto LAB_0010c4c4;
LAB_0010c7a4:
      if (puVar1 <= puVar14) goto LAB_0010c908;
      bVar28 = false;
      do {
        if ((*puVar19 & 0xfc00) != 0xdc00) {
          local_d8 = puVar19;
          if (!bVar28) goto LAB_0010c908;
          break;
        }
        puVar19 = puVar19 + 1;
        bVar28 = true;
        local_d8 = puVar19;
      } while (puVar19 < puVar1);
    }
LAB_0010c7f3:
LAB_0010c810:
    puVar24 = local_d8;
    iVar11 = _pcre2_valid_utf_16(local_d8,local_278 - ((long)local_d8 - (long)param_2 >> 1),
                                 param_6 + 0xb);
    *(int *)((long)param_6 + 100) = iVar11;
    puVar18 = puVar1;
    puVar20 = local_d8;
    if (iVar11 != 0) {
      lVar23 = ((long)local_d8 - (long)param_2 >> 1) + param_6[0xb];
      param_6[0xb] = lVar23;
      bVar8 = local_268 == 0 || 0 < iVar11;
      if (bVar8) goto LAB_0010c740;
      puVar18 = param_2 + lVar23;
      if (puVar19 <= puVar18) {
        local_254 = 2;
        goto LAB_0010c4c4;
      }
      puVar18 = puVar18 + 1;
      local_d8 = puVar18;
      if (puVar18 < puVar19) {
        do {
          if ((*local_d8 & 0xfc00) != 0xdc00) {
            local_d8 = puVar24;
            if (!bVar8) goto LAB_0010d268;
            break;
          }
          local_d8 = local_d8 + 1;
          bVar8 = true;
          puVar24 = local_d8;
        } while (local_d8 < puVar19);
      }
      else {
LAB_0010d268:
        local_d8 = puVar18;
      }
      goto LAB_0010c810;
    }
  }
LAB_0010c4c4:
  local_d8 = puVar20;
  if (param_7 == (undefined8 *)0x0) {
    local_158 = *param_1;
    uStack_150 = param_1[1];
    local_148 = param_1[2];
    param_7 = (undefined8 *)&_pcre2_default_match_context_16;
  }
  else {
    local_148 = param_7[2];
    local_158 = *param_7;
    uStack_150 = param_7[1];
  }
  local_80 = *(uint *)(param_1 + 0xb);
  local_1c8[0] = 2;
  uVar22 = uVar10 | local_80;
  local_160 = 0;
  uVar17 = 0;
  if (-1 < (int)uVar22) {
    uVar17 = local_80 >> 8 & 1;
  }
  uVar5 = *(uint *)(param_1 + 0xc);
  local_60 = local_1c8;
  puVar20 = param_2 + param_7[9];
  if (param_7[9] == -1) {
    puVar20 = puVar1;
  }
  local_1a0 = (long)puVar18 - (long)param_2 >> 1;
  local_50 = param_7[5];
  local_58 = param_7[6];
  local_12c = uVar5 >> 0xc & 1;
  local_128 = 1;
  if (*(short *)((long)param_1 + 0x7c) == 0) {
    local_128 = uVar5 >> 0xd & 1;
  }
  local_f4 = *(ushort *)((long)param_1 + 0x86);
  local_f2 = *(ushort *)((long)param_1 + 0x84);
  local_f0 = param_1 + 0x11;
  local_78 = 0;
  local_a8 = (undefined1  [16])0x0;
  local_e8 = (long)local_f0 + (long)(int)((uint)local_f4 * (uint)local_f2) * 2;
  local_f6 = *(undefined2 *)(param_1 + 0xf);
  local_1a8 = param_2;
  local_108 = param_4;
  local_e0 = param_2;
  local_d0 = puVar18;
  local_c8 = puVar1;
  switch(*(undefined2 *)((long)param_1 + 0x7a)) {
  default:
    iVar11 = -0x2c;
    goto LAB_0010c740;
  case 1:
    local_70 = CONCAT26(local_70._6_2_,0xd00000001);
    break;
  case 2:
    local_70 = CONCAT26(local_70._6_2_,0xa00000001);
    break;
  case 3:
    local_70 = 0xa000d00000002;
    break;
  case 4:
    local_78 = 0x100000000;
    break;
  case 5:
    local_78 = 0x200000000;
    break;
  case 6:
    local_70 = CONCAT26(local_70._6_2_,1);
  }
  sVar2 = (long)(int)((uint)*(ushort *)(param_1 + 0x10) * 2) * 8;
  uVar3 = sVar2 + 0x88;
  local_140 = *(uint *)((long)param_1 + 100);
  if (*(uint *)(param_7 + 10) < *(uint *)((long)param_1 + 100)) {
    local_140 = *(uint *)(param_7 + 10);
  }
  local_13c = *(uint *)(param_1 + 0xd);
  if (*(uint *)((long)param_7 + 0x54) < *(uint *)(param_1 + 0xd)) {
    local_13c = *(uint *)((long)param_7 + 0x54);
  }
  local_138 = *(uint *)((long)param_1 + 0x6c);
  if (*(uint *)(param_7 + 0xb) < *(uint *)((long)param_1 + 0x6c)) {
    local_138 = *(uint *)(param_7 + 0xb);
  }
  uVar26 = uVar3 * 10;
  if (uVar26 < 0x5000) {
    uVar26 = 0x5000;
  }
  if (((ulong)local_140 < uVar26 >> 10) && (uVar26 = (ulong)(local_140 << 10), uVar26 < uVar3)) {
    iVar11 = -0x3f;
    goto LAB_0010c740;
  }
  lVar23 = param_6[6];
  if ((ulong)param_6[7] < uVar26) {
    (*(code *)param_6[1])(lVar23,param_6[2]);
    lVar23 = (*(code *)*param_6)(uVar26,param_6[2]);
    param_6[6] = lVar23;
    if (lVar23 == 0) {
      param_6[7] = 0;
      goto LAB_0010db02;
    }
    param_6[7] = uVar26;
  }
  memset((void *)(lVar23 + 0x88),0xff,sVar2);
  local_120 = param_1[3];
  lStack_118 = local_120 + 0x100;
  local_110 = local_120 + 0x340;
  uVar6 = *(uint *)(param_1 + 0xc);
  if ((uVar6 & 0x10) == 0) {
    if (((uVar5 & 0x200) == 0) && ((uVar6 & 0x40) != 0)) {
      local_208 = param_1 + 5;
      local_218 = 0;
      local_1e4 = 0;
      local_1e2 = 0;
    }
    else {
      local_218 = 0;
      local_1e4 = 0;
      local_1e2 = 0;
      local_208 = (undefined8 *)0x0;
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 0xe);
    local_1e2 = (ushort)uVar7;
    local_1e4 = local_1e2;
    if ((uVar6 & 0x20) == 0) {
      local_218 = 1;
      local_208 = (undefined8 *)0x0;
    }
    else if (((local_1e2 < 0x100) &&
             (local_1e4 = (ushort)*(byte *)(local_120 + 0x100 + (ulong)(uVar7 & 0xffff)),
             local_1e2 < 0x80)) || ((uVar13 & 0xa0000) == 0)) {
      local_218 = 1;
      local_208 = (undefined8 *)0x0;
    }
    else {
      local_218 = 1;
      local_208 = (undefined8 *)0x0;
      local_1e4 = local_1e2 +
                  *(short *)(&DAT_0010f01c +
                            (ulong)*(ushort *)
                                    (&_pcre2_ucd_stage2_16 +
                                    (long)(int)((uint)*(ushort *)
                                                       (&_pcre2_ucd_stage1_16 +
                                                       (ulong)(local_1e2 >> 7) * 2) * 0x80 +
                                               (uVar7 & 0x7f)) * 2) * 0xc);
    }
  }
  if ((uVar6 & 0x80) == 0) {
    bVar8 = false;
    local_1d0 = 0;
    local_1ce = 0;
  }
  else {
    uVar7 = *(uint *)((long)param_1 + 0x74);
    local_1ce = (ushort)uVar7;
    local_1d0 = local_1ce;
    if ((uVar6 & 0x100) == 0) {
      bVar8 = true;
    }
    else {
      if (local_1ce < 0x100) {
        bVar8 = true;
        local_1d0 = (ushort)*(byte *)(local_120 + 0x100 + (ulong)(uVar7 & 0xffff));
        if (local_1ce < 0x80) goto LAB_0010cb4a;
      }
      bVar8 = true;
      if ((uVar13 & 0xa0000) != 0) {
        local_1d0 = *(short *)(&DAT_0010f01c +
                              (ulong)*(ushort *)
                                      (&_pcre2_ucd_stage2_16 +
                                      (long)(int)((uint)*(ushort *)
                                                         (&_pcre2_ucd_stage1_16 +
                                                         (ulong)(uVar7 >> 7 & 0x1ff) * 2) * 0x80 +
                                                 (uVar7 & 0x7f)) * 2) * 0xc) + local_1ce;
      }
    }
  }
LAB_0010cb4a:
  local_1e0 = puVar14 + -1;
  bVar28 = uVar21 != 0;
LAB_0010cb93:
  local_130 = 0;
  local_200 = (ushort *)0x0;
  local_220 = (ushort *)0x0;
LAB_0010cbbd:
  puVar24 = local_1e0;
  if ((*(byte *)((long)param_1 + 0x5a) & 1) != 0) goto LAB_0010d070;
  puVar27 = puVar18;
  if (uVar17 != 0) {
    puVar27 = puVar19;
    if (uVar21 == 0) {
      if (puVar19 < puVar18) {
        do {
          if (local_78._4_4_ == 0) {
            if (((puVar27 <= local_d0 + -(local_70 & 0xffffffff)) && (*puVar27 == local_70._4_2_))
               && (((int)local_70 == 1 || (puVar27[1] == local_70._6_2_)))) break;
          }
          else if ((puVar27 < local_d0) && (iVar11 = _pcre2_is_newline_16(), iVar11 != 0)) break;
          puVar27 = puVar27 + 1;
        } while (puVar27 < puVar18);
        goto LAB_0010cc60;
      }
    }
    else if (puVar19 < puVar18) {
      do {
        puVar25 = puVar27;
        puVar27 = puVar25;
        if (local_78._4_4_ == 0) {
          if (((puVar25 <= local_d0 + -(local_70 & 0xffffffff)) && (*puVar25 == local_70._4_2_)) &&
             (((int)local_70 == 1 || (puVar25[1] == local_70._6_2_)))) goto LAB_0010cc60;
        }
        else if ((puVar25 < local_d0) && (iVar11 = _pcre2_is_newline_16(), iVar11 != 0))
        goto LAB_0010cc60;
        puVar27 = puVar25 + 1;
        if ((puVar18 <= puVar27) ||
           (((puVar25[1] & 0xfc00) == 0xdc00 && (puVar27 = puVar25 + 2, puVar18 <= puVar27))))
        goto LAB_0010cc60;
      } while( true );
    }
    if (-1 < (int)uVar22) {
      if (local_218 == 0) goto LAB_0010d3ca;
      goto LAB_0010ccc0;
    }
    puVar18 = puVar19;
    if ((local_208 == (undefined8 *)0x0) && (local_218 == 0)) goto LAB_0010d050;
    goto LAB_0010cd99;
  }
LAB_0010cc60:
  if (-1 < (int)uVar22) {
    if (local_218 == 0) {
LAB_0010d3ca:
      if ((uVar5 & 0x200) == 0) {
        if (local_208 != (undefined8 *)0x0) {
          for (; puVar19 < puVar27; puVar19 = puVar19 + 1) {
            uVar13 = (uint)*puVar19;
            if (0xff < uVar13) {
              uVar13 = 0xff;
            }
            if ((*(byte *)((long)local_208 + (ulong)(uVar13 >> 3)) >> (uVar13 & 7) & 1) != 0) break;
          }
          goto LAB_0010ccc0;
        }
      }
      else if (local_e0 + param_4 < puVar19) {
        puVar18 = puVar19;
        uVar26 = local_70;
        if (uVar21 == 0) {
          for (; puVar19 = puVar18, local_70 = uVar26, puVar18 < puVar27; puVar18 = puVar18 + 1) {
            local_78._4_4_ = (uint)((ulong)local_78 >> 0x20);
            if (local_78._4_4_ == 0) {
              local_70._0_4_ = (int)uVar26;
              uVar16 = uVar26 & 0xffffffff;
              if (((local_e0 + uVar16 <= puVar18) &&
                  (local_70._4_2_ = (ushort)(uVar26 >> 0x20), puVar18[-uVar16] == local_70._4_2_))
                 && ((bVar29 = (int)local_70 == 1, bVar29 ||
                     (local_70._6_2_ = (ushort)(uVar26 >> 0x30),
                     bVar29 = puVar18[1 - uVar16] == local_70._6_2_, bVar29)))) break;
            }
            else if ((local_e0 < puVar18) &&
                    (iVar11 = _pcre2_was_newline_16(), uVar26 = local_70, iVar11 != 0))
            goto LAB_0010d9e9;
            local_70 = uVar26;
            uVar26 = local_70;
          }
        }
        else if (puVar19 < puVar27) {
          do {
            puVar18 = puVar19;
            if (local_78._4_4_ == 0) {
              uVar26 = local_70 & 0xffffffff;
              if (((local_e0 + uVar26 <= puVar18) && (puVar18[-uVar26] == local_70._4_2_)) &&
                 ((puVar19 = puVar18, (int)local_70 == 1 || (puVar18[1 - uVar26] == local_70._6_2_))
                 )) break;
            }
            else if ((local_e0 < puVar18) && (iVar11 = _pcre2_was_newline_16(), iVar11 != 0))
            goto LAB_0010d9e9;
            puVar19 = puVar18 + 1;
            if ((puVar27 <= puVar19) ||
               (((puVar18[1] & 0xfc00) == 0xdc00 && (puVar19 = puVar18 + 2, puVar27 <= puVar19))))
            break;
          } while( true );
        }
      }
      goto LAB_0010d050;
    }
    if (local_1e2 == local_1e4) {
      for (; (puVar19 < puVar27 && (*puVar19 != local_1e2)); puVar19 = puVar19 + 1) {
      }
    }
    else {
      for (; ((puVar19 < puVar27 && (local_1e4 != *puVar19)) && (local_1e2 != *puVar19));
          puVar19 = puVar19 + 1) {
      }
    }
LAB_0010ccc0:
    puVar18 = local_d0;
    if (local_f8 != 0) goto LAB_0010d070;
    puVar18 = puVar27;
    if (puVar19 < local_d0) goto LAB_0010cce0;
    goto LAB_0010cd99;
  }
  if ((local_208 == (undefined8 *)0x0) && (local_218 == 0)) goto LAB_0010d050;
  puVar18 = puVar27;
  if (puVar27 <= puVar19) goto LAB_0010cd99;
  uVar4 = *puVar19;
  if ((local_218 == 0) || ((local_1e2 != uVar4 && (local_1e4 != uVar4)))) {
    if (local_208 == (undefined8 *)0x0) goto LAB_0010cd99;
    uVar13 = (uint)uVar4;
    if (0xff < uVar4) {
      uVar13 = 0xff;
    }
    if ((*(byte *)((long)local_208 + (ulong)(ushort)((ushort)uVar13 >> 3)) >> (uVar13 & 7) & 1) == 0
       ) goto LAB_0010cd99;
  }
  goto LAB_0010d050;
LAB_0010d9e9:
  puVar19 = puVar18;
  if ((puVar18[-1] == 0xd) &&
     (((uVar13 = local_78._4_4_ - 1, uVar13 < 2 && (puVar18 < puVar27)) && (*puVar18 == 10)))) {
    puVar19 = puVar18 + 1;
  }
LAB_0010d050:
  puVar18 = local_d0;
  if (local_f8 == 0) {
LAB_0010cce0:
    uVar26 = (long)local_d0 - (long)puVar19;
    puVar18 = local_d0;
    if ((long)uVar26 >> 1 < (long)(ulong)*(ushort *)((long)param_1 + 0x7e)) goto LAB_0010cd99;
    puVar27 = puVar19 + local_218;
    if (((local_1e0 < puVar27) && (bVar8)) &&
       ((uVar26 < 3999 || ((-1 < (int)uVar22 && (uVar26 < 3999999)))))) {
      if (local_1ce == local_1d0) {
        do {
          puVar24 = puVar27;
          if (local_d0 <= puVar24) goto LAB_0010cd99;
          puVar27 = puVar24 + 1;
        } while (*puVar24 != local_1ce);
      }
      else {
        do {
          puVar24 = puVar27;
          if (local_d0 <= puVar24) goto LAB_0010cd99;
        } while ((*puVar24 != local_1d0) && (puVar27 = puVar24 + 1, *puVar24 != local_1ce));
      }
    }
  }
LAB_0010d070:
  local_1e0 = puVar24;
  if (puVar20 < puVar19) goto LAB_0010cd99;
  local_134 = 0;
  local_100 = 0;
  local_198 = (long)puVar19 - (long)param_2 >> 1;
  local_7c = 0;
  local_160 = local_160 | 1;
  local_84 = local_254 | uVar10;
  local_b8 = puVar19;
  puStack_b0 = puVar19;
  iVar11 = match_constprop_0(puVar19,local_e8,*(undefined2 *)(param_1 + 0x10),uVar3,param_6,
                             &local_158);
  if ((local_130 != 0) && (local_220 == (ushort *)0x0)) {
    local_220 = local_b8;
    local_200 = puVar19;
  }
  if (iVar11 < -0x3e0) {
    if (iVar11 < -0x3e5) {
LAB_0010d29a:
      if (((puVar18 == puVar1) || (!bVar28)) || ((iVar11 + 2U & 0xfffffffd) != 0))
      goto LAB_0010d2c7;
      goto LAB_0010cdad;
    }
    switch(iVar11) {
    case -0x3e4:
    case -0x3e1:
      break;
    case -0x3e3:
      puVar24 = local_90;
      if (puVar19 < local_90) goto LAB_0010d190;
      break;
    case -0x3e2:
      local_78 = CONCAT44(local_78._4_4_,local_7c);
      puVar24 = puVar19;
      goto LAB_0010d190;
    default:
      iVar11 = 0;
      goto LAB_0010d29a;
    }
  }
  else if (iVar11 != 0) goto LAB_0010d29a;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  puVar24 = puVar19 + 1;
  if (((puVar24 < puVar18) && (bVar28)) && ((puVar19[1] & 0xfc00) == 0xdc00)) {
    puVar24 = puVar19 + 2;
  }
LAB_0010d190:
  if (uVar17 != 0) {
    if (local_78._4_4_ == 0) {
      if (((puVar19 <= local_d0 + -(local_70 & 0xffffffff)) && (*puVar19 == local_70._4_2_)) &&
         (((int)local_70 == 1 || (puVar19[1] == local_70._6_2_)))) goto LAB_0010cd99;
    }
    else if ((puVar19 < local_d0) && (iVar11 = _pcre2_is_newline_16(), iVar11 != 0))
    goto LAB_0010cd99;
  }
  puVar19 = puVar24;
  if ((puVar18 < puVar24) || ((int)uVar22 < 0)) goto LAB_0010cd99;
  if (((((puVar14 < puVar24) && (puVar24[-1] == 0xd)) && (puVar24 < puVar18)) &&
      ((*puVar24 == 10 && ((*(byte *)((long)param_1 + 0x61) & 8) == 0)))) &&
     ((local_78._4_4_ - 1 < 2 || ((int)local_70 == 2)))) {
    puVar19 = puVar24 + 1;
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_a8._8_8_;
  local_a8 = auVar9 << 0x40;
  goto LAB_0010cbbd;
LAB_0010cd99:
  if ((puVar1 == puVar18) || (!bVar28)) {
    iVar11 = 0;
LAB_0010d2c7:
    param_6[3] = param_1;
    *(undefined1 *)(param_6 + 0xc) = 0;
    param_6[5] = local_a8._0_8_;
    if (iVar11 != 1) goto LAB_0010cfcf;
    iVar11 = 0;
    iVar12 = (int)local_100;
    if (SBORROW4(iVar12,(uint)*(ushort *)((long)param_6 + 0x62) * 2) !=
        (int)(iVar12 + (uint)*(ushort *)((long)param_6 + 0x62) * -2) < 0) {
      iVar11 = ((int)(((uint)(local_100 >> 0x1f) & 1) + iVar12) >> 1) + 1;
    }
    *(int *)((long)param_6 + 100) = iVar11;
    param_6[8] = local_278;
    param_6[0xb] = (long)puVar19 - (long)param_2 >> 1;
    param_6[9] = (long)local_b8 - (long)param_2 >> 1;
    if (local_c0 < puStack_b0) {
      local_c0 = puStack_b0;
    }
    param_6[10] = (long)local_c0 - (long)param_2 >> 1;
    if ((param_5 & 0x4000) == 0) {
      param_6[4] = param_2;
    }
    else {
      sVar2 = ((long)(int)local_1e8 + local_278) * 2;
      pvVar15 = (void *)(*(code *)*param_6)(sVar2,param_6[2]);
      param_6[4] = pvVar15;
      if (pvVar15 == (void *)0x0) goto LAB_0010db02;
      memcpy(pvVar15,param_2,sVar2);
      *(byte *)((long)param_6 + 0x61) = *(byte *)((long)param_6 + 0x61) | 1;
      iVar11 = *(int *)((long)param_6 + 100);
    }
    goto LAB_0010c740;
  }
LAB_0010cdad:
  puVar24 = puVar18;
  do {
    do {
      puVar19 = puVar24 + 1;
      if (puVar1 <= puVar19) {
        local_200 = (ushort *)0x0;
        iVar11 = 0;
        param_6[3] = param_1;
        *(undefined1 *)(param_6 + 0xc) = 0;
        goto LAB_0010cfcf;
      }
      puVar24 = puVar19;
    } while ((*puVar19 & 0xfc00) == 0xdc00);
    local_d8 = puVar19;
    iVar11 = _pcre2_valid_utf_16(puVar19,local_278 - ((long)puVar19 - (long)param_2 >> 1),
                                 param_6 + 0xb);
    if (iVar11 == 0) {
      local_254 = 1;
      puVar18 = puVar1;
      local_d0 = puVar1;
      goto LAB_0010cb93;
    }
    puVar24 = puVar18;
  } while ((-1 < iVar11) ||
          (puVar18 = puVar19 + param_6[0xb], puVar24 = puVar18, local_d0 = puVar18,
          puVar18 <= puVar19));
  local_254 = 3;
  goto LAB_0010cb93;
LAB_0010cfcf:
  param_6[5] = local_a8._8_8_;
  if (((iVar11 + 2U & 0xfffffffd) == 0) && (iVar11 = -1, local_200 != (ushort *)0x0)) {
    param_6[4] = param_2;
    iVar11 = -2;
    lVar23 = (long)local_200 - (long)param_2 >> 1;
    param_6[8] = local_278;
    param_6[0xd] = lVar23;
    param_6[0xb] = lVar23;
    lVar23 = (long)puVar18 - (long)param_2 >> 1;
    param_6[0xe] = lVar23;
    param_6[10] = lVar23;
    param_6[9] = (long)local_220 - (long)param_2 >> 1;
  }
  *(int *)((long)param_6 + 100) = iVar11;
  goto LAB_0010c740;
}



/* WARNING: Removing unreachable block (ram,0x0010d10b) */
/* WARNING: Removing unreachable block (ram,0x0010d4a8) */
/* WARNING: Type propagation algorithm not settling */

int pcre2_match_16_cold(void)

{
  ushort uVar1;
  size_t __n;
  long lVar2;
  int iVar3;
  uint uVar4;
  void *__dest;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *unaff_RBX;
  void *unaff_R12;
  ushort *puVar10;
  ushort *puVar11;
  ushort *unaff_R13;
  ushort *puVar12;
  long in_FS_OFFSET;
  long unaff_retaddr;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  uint in_stack_00000018;
  ushort *in_stack_00000028;
  ushort *in_stack_00000030;
  undefined8 in_stack_00000038;
  int iStack0000000000000040;
  int iStack0000000000000044;
  ushort *in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  int iStack0000000000000060;
  char cStack0000000000000068;
  char cStack000000000000006f;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000088;
  int iStack0000000000000090;
  ushort uStack0000000000000094;
  ushort uStack0000000000000096;
  ushort *in_stack_00000098;
  int iStack00000000000000a0;
  int iStack00000000000000a4;
  ushort uStack00000000000000a8;
  ushort uStack00000000000000aa;
  ulong in_stack_00000178;
  short in_stack_00000180;
  undefined8 in_stack_00000190;
  ushort *in_stack_00000198;
  ushort *in_stack_000001b8;
  ushort *in_stack_000001c0;
  ushort *in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  ushort *in_stack_000001e8;
  int in_stack_00000204;
  uint in_stack_00000208;
  ushort in_stack_0000020c;
  ushort in_stack_0000020e;
  long in_stack_00000238;
  
code_r0x0010e5cd:
  iVar5 = 0;
  puVar9 = unaff_R13;
LAB_0010d29a:
  if (((unaff_RBX == in_stack_00000030) || (cStack000000000000006f == '\0')) ||
     (puVar8 = unaff_RBX, (iVar5 + 2U & 0xfffffffd) != 0)) {
LAB_0010d2c7:
    in_stack_00000008[3] = in_stack_00000010;
    *(undefined1 *)(in_stack_00000008 + 0xc) = 0;
    in_stack_00000008[5] = in_stack_000001d0;
    puVar10 = unaff_RBX;
    if (iVar5 == 1) {
      iVar5 = 0;
      iVar3 = (int)in_stack_00000178;
      if (SBORROW4(iVar3,(uint)*(ushort *)((long)in_stack_00000008 + 0x62) * 2) !=
          (int)(iVar3 + (uint)*(ushort *)((long)in_stack_00000008 + 0x62) * -2) < 0) {
        iVar5 = ((int)(((uint)(in_stack_00000178 >> 0x1f) & 1) + iVar3) >> 1) + 1;
      }
      *(int *)((long)in_stack_00000008 + 100) = iVar5;
      in_stack_00000008[8] = unaff_retaddr;
      in_stack_00000008[0xb] = (long)puVar9 - (long)unaff_R12 >> 1;
      in_stack_00000008[9] = (long)in_stack_000001c0 - (long)unaff_R12 >> 1;
      if (in_stack_000001b8 < in_stack_000001c8) {
        in_stack_000001b8 = in_stack_000001c8;
      }
      in_stack_00000008[10] = (long)in_stack_000001b8 - (long)unaff_R12 >> 1;
      if ((in_stack_00000018 & 0x4000) == 0) {
        in_stack_00000008[4] = unaff_R12;
      }
      else {
        __n = (iStack0000000000000090 + unaff_retaddr) * 2;
        __dest = (void *)(*(code *)*in_stack_00000008)(__n,in_stack_00000008[2]);
        in_stack_00000008[4] = __dest;
        if (__dest == (void *)0x0) {
          iVar5 = -0x30;
        }
        else {
          memcpy(__dest,unaff_R12,__n);
          *(byte *)((long)in_stack_00000008 + 0x61) = *(byte *)((long)in_stack_00000008 + 0x61) | 1;
          iVar5 = *(int *)((long)in_stack_00000008 + 100);
        }
      }
    }
    else {
LAB_0010cfcf:
      in_stack_00000008[5] = in_stack_000001d8;
      if (((iVar5 + 2U & 0xfffffffd) == 0) && (iVar5 = -1, in_stack_00000078 != 0)) {
        in_stack_00000008[4] = unaff_R12;
        iVar5 = -2;
        lVar7 = in_stack_00000078 - (long)unaff_R12 >> 1;
        in_stack_00000008[8] = unaff_retaddr;
        in_stack_00000008[0xd] = lVar7;
        in_stack_00000008[0xb] = lVar7;
        lVar7 = (long)puVar10 - (long)unaff_R12 >> 1;
        in_stack_00000008[0xe] = lVar7;
        in_stack_00000008[10] = lVar7;
        in_stack_00000008[9] = in_stack_00000058 - (long)unaff_R12 >> 1;
      }
      *(int *)((long)in_stack_00000008 + 100) = iVar5;
    }
    if (in_stack_00000238 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return iVar5;
  }
LAB_0010cdad:
  puVar10 = puVar8;
  do {
    do {
      puVar11 = puVar8 + 1;
      if (in_stack_00000030 <= puVar11) {
        in_stack_00000078 = 0;
        iVar5 = 0;
        in_stack_00000008[3] = in_stack_00000010;
        *(undefined1 *)(in_stack_00000008 + 0xc) = 0;
        goto LAB_0010cfcf;
      }
      puVar8 = puVar11;
    } while ((*puVar11 & 0xfc00) == 0xdc00);
    iVar5 = _pcre2_valid_utf_16(puVar11,unaff_retaddr - ((long)puVar11 - (long)unaff_R12 >> 1),
                                in_stack_00000008 + 0xb);
    unaff_RBX = in_stack_00000030;
  } while ((iVar5 != 0) &&
          ((puVar8 = puVar10, -1 < iVar5 ||
           (unaff_RBX = puVar11 + in_stack_00000008[0xb], puVar8 = unaff_RBX, puVar10 = unaff_RBX,
           unaff_RBX <= puVar11))));
  in_stack_00000078 = 0;
  lVar2 = in_stack_00000078;
  in_stack_00000058 = 0;
  lVar7 = in_stack_00000058;
LAB_0010cbbd:
  unaff_R13 = puVar11;
  puVar10 = in_stack_00000098;
  if ((*(byte *)(in_stack_00000010 + 0x5a) & 1) != 0) goto LAB_0010d070;
  puVar8 = unaff_RBX;
  puVar9 = puVar11;
  if (iStack0000000000000044 != 0) {
    puVar8 = puVar11;
    if (iStack0000000000000040 == 0) {
      if (puVar11 < unaff_RBX) {
        do {
          if (in_stack_00000204 == 0) {
            if (((puVar8 <= unaff_RBX + -(ulong)in_stack_00000208) && (*puVar8 == in_stack_0000020c)
                ) && ((in_stack_00000208 == 1 || (puVar8[1] == in_stack_0000020e)))) break;
          }
          else if ((puVar8 < unaff_RBX) && (iVar5 = _pcre2_is_newline_16(), iVar5 != 0)) break;
          puVar8 = puVar8 + 1;
        } while (puVar8 < unaff_RBX);
        goto LAB_0010cc60;
      }
    }
    else if (puVar11 < unaff_RBX) {
      do {
        puVar12 = puVar8;
        puVar8 = puVar12;
        if (in_stack_00000204 == 0) {
          if (((puVar12 <= unaff_RBX + -(ulong)in_stack_00000208) && (*puVar12 == in_stack_0000020c)
              ) && ((in_stack_00000208 == 1 || (puVar12[1] == in_stack_0000020e))))
          goto LAB_0010cc60;
        }
        else if ((puVar12 < unaff_RBX) && (iVar5 = _pcre2_is_newline_16(), iVar5 != 0))
        goto LAB_0010cc60;
        puVar8 = puVar12 + 1;
        if ((unaff_RBX <= puVar8) ||
           (((puVar12[1] & 0xfc00) == 0xdc00 && (puVar8 = puVar12 + 2, unaff_RBX <= puVar8))))
        goto LAB_0010cc60;
      } while( true );
    }
    if (-1 < _iStack0000000000000060) {
      if (iStack0000000000000060 == 0) goto LAB_0010d3ca;
      goto LAB_0010ccc0;
    }
    if ((in_stack_00000070 == 0) && (iStack0000000000000060 == 0)) goto LAB_0010d050;
    goto LAB_0010cd99;
  }
LAB_0010cc60:
  if (-1 < _iStack0000000000000060) {
    if (iStack0000000000000060 == 0) {
LAB_0010d3ca:
      if (iStack00000000000000a0 == 0) {
        if (in_stack_00000070 != 0) {
          for (; puVar11 < puVar8; puVar11 = puVar11 + 1) {
            uVar4 = (uint)*puVar11;
            if (0xff < uVar4) {
              uVar4 = 0xff;
            }
            if ((*(byte *)(in_stack_00000070 + (ulong)(uVar4 >> 3)) >> (uVar4 & 7) & 1) != 0) break;
          }
          goto LAB_0010ccc0;
        }
      }
      else if ((ushort *)(in_stack_00000088 + (long)in_stack_00000198) < puVar11) {
        if (iStack0000000000000040 == 0) {
          for (; puVar11 = puVar9, puVar9 < puVar8; puVar9 = puVar9 + 1) {
            if (in_stack_00000204 == 0) {
              uVar6 = (ulong)in_stack_00000208;
              if (((in_stack_00000198 + uVar6 <= puVar9) && (puVar9[-uVar6] == in_stack_0000020c))
                 && ((in_stack_00000208 == 1 || (puVar9[1 - uVar6] == in_stack_0000020e)))) break;
            }
            else if ((in_stack_00000198 < puVar9) && (iVar5 = _pcre2_was_newline_16(), iVar5 != 0))
            goto LAB_0010d9e9;
          }
        }
        else if (puVar11 < puVar8) {
          do {
            puVar9 = puVar11;
            if (in_stack_00000204 == 0) {
              uVar6 = (ulong)in_stack_00000208;
              if (((in_stack_00000198 + uVar6 <= puVar9) && (puVar9[-uVar6] == in_stack_0000020c))
                 && ((puVar11 = puVar9, in_stack_00000208 == 1 ||
                     (puVar9[1 - uVar6] == in_stack_0000020e)))) break;
            }
            else if ((in_stack_00000198 < puVar9) && (iVar5 = _pcre2_was_newline_16(), iVar5 != 0))
            goto LAB_0010d9e9;
            puVar11 = puVar9 + 1;
            if ((puVar8 <= puVar11) ||
               (((puVar9[1] & 0xfc00) == 0xdc00 && (puVar11 = puVar9 + 2, puVar8 <= puVar11))))
            break;
          } while( true );
        }
      }
      goto LAB_0010d050;
    }
    if (uStack0000000000000096 == uStack0000000000000094) {
      for (; (puVar11 < puVar8 && (*puVar11 != uStack0000000000000096)); puVar11 = puVar11 + 1) {
      }
    }
    else {
      for (; ((puVar11 < puVar8 && (uStack0000000000000094 != *puVar11)) &&
             (uStack0000000000000096 != *puVar11)); puVar11 = puVar11 + 1) {
      }
    }
LAB_0010ccc0:
    unaff_R13 = puVar11;
    if (in_stack_00000180 != 0) goto LAB_0010d070;
    puVar9 = puVar11;
    if (puVar11 < unaff_RBX) goto LAB_0010cce0;
    goto LAB_0010cd99;
  }
  if ((in_stack_00000070 == 0) && (iStack0000000000000060 == 0)) goto LAB_0010d050;
  if (puVar8 <= puVar11) goto LAB_0010cd99;
  uVar1 = *puVar11;
  if ((iStack0000000000000060 == 0) ||
     ((uStack0000000000000096 != uVar1 && (uStack0000000000000094 != uVar1)))) {
    if (in_stack_00000070 == 0) goto LAB_0010cd99;
    uVar4 = (uint)uVar1;
    if (0xff < uVar1) {
      uVar4 = 0xff;
    }
    if ((*(byte *)(in_stack_00000070 + (ulong)(ushort)((ushort)uVar4 >> 3)) >> (uVar4 & 7) & 1) == 0
       ) goto LAB_0010cd99;
  }
  goto LAB_0010d050;
LAB_0010d9e9:
  puVar11 = puVar9;
  if ((puVar9[-1] == 0xd) &&
     (((in_stack_00000204 - 1U < 2 && (puVar9 < puVar8)) && (*puVar9 == 10)))) {
    puVar11 = puVar9 + 1;
  }
LAB_0010d050:
  unaff_R13 = puVar11;
  if (in_stack_00000180 == 0) {
LAB_0010cce0:
    uVar6 = (long)unaff_RBX - (long)puVar11;
    puVar8 = unaff_RBX;
    puVar9 = puVar11;
    if ((long)uVar6 >> 1 < (long)(ulong)*(ushort *)(in_stack_00000010 + 0x7e)) goto LAB_0010cd99;
    puVar8 = puVar11 + iStack0000000000000060;
    unaff_R13 = puVar11;
    if (((in_stack_00000098 < puVar8) && (iStack00000000000000a4 != 0)) &&
       ((uVar6 < 3999 || ((-1 < _iStack0000000000000060 && (uVar6 < 3999999)))))) {
      if (uStack00000000000000aa == uStack00000000000000a8) {
        do {
          puVar10 = puVar8;
          puVar8 = unaff_RBX;
          if (unaff_RBX <= puVar10) goto LAB_0010cd99;
          puVar8 = puVar10 + 1;
        } while (*puVar10 != uStack00000000000000aa);
      }
      else {
        do {
          puVar10 = puVar8;
          puVar8 = unaff_RBX;
          if (unaff_RBX <= puVar10) goto LAB_0010cd99;
        } while ((*puVar10 != uStack00000000000000a8) &&
                (puVar8 = puVar10 + 1, *puVar10 != uStack00000000000000aa));
      }
    }
  }
LAB_0010d070:
  in_stack_00000098 = puVar10;
  puVar8 = unaff_RBX;
  puVar9 = unaff_R13;
  if (in_stack_00000048 < unaff_R13) goto LAB_0010cd99;
  in_stack_00000178 = 0;
  iVar5 = match_constprop_0(unaff_R13,in_stack_00000190,*(undefined2 *)(in_stack_00000010 + 0x80),
                            in_stack_00000038,in_stack_00000008,in_stack_00000050);
  in_stack_00000078 = 0;
  in_stack_00000058 = 0;
  in_stack_000001c0 = unaff_R13;
  in_stack_000001c8 = unaff_R13;
  if (iVar5 < -0x3e0) {
    in_stack_00000058 = lVar7;
    in_stack_00000078 = lVar2;
    if (iVar5 < -0x3e5) goto LAB_0010d29a;
    switch(iVar5) {
    case -0x3e4:
    case -0x3e1:
      break;
    case -0x3e3:
      puVar11 = in_stack_000001e8;
      if (unaff_R13 < in_stack_000001e8) goto LAB_0010d190;
      break;
    case -0x3e2:
      puVar11 = unaff_R13;
      goto LAB_0010d190;
    default:
      goto code_r0x0010e5cd;
    }
  }
  else if (iVar5 != 0) goto LAB_0010d29a;
  puVar11 = unaff_R13 + 1;
  if (((puVar11 < unaff_RBX) && (cStack000000000000006f != '\0')) &&
     ((unaff_R13[1] & 0xfc00) == 0xdc00)) {
    puVar11 = unaff_R13 + 2;
  }
LAB_0010d190:
  if (iStack0000000000000044 != 0) {
    if (in_stack_00000204 == 0) {
      if (((unaff_R13 <= unaff_RBX + -(ulong)in_stack_00000208) && (*unaff_R13 == in_stack_0000020c)
          ) && ((in_stack_00000208 == 1 || (unaff_R13[1] == in_stack_0000020e)))) goto LAB_0010cd99;
    }
    else if ((unaff_R13 < unaff_RBX) && (iVar5 = _pcre2_is_newline_16(), iVar5 != 0))
    goto LAB_0010cd99;
  }
  puVar9 = puVar11;
  if ((unaff_RBX < puVar11) || (cStack0000000000000068 != '\0')) goto LAB_0010cd99;
  if (((((in_stack_00000028 < puVar11) && (puVar11[-1] == 0xd)) && (puVar11 < unaff_RBX)) &&
      ((*puVar11 == 10 && ((*(byte *)(in_stack_00000010 + 0x61) & 8) == 0)))) &&
     ((in_stack_00000204 - 1U < 2 || (in_stack_00000208 == 2)))) {
    puVar11 = puVar11 + 1;
  }
  in_stack_000001d0 = 0;
  goto LAB_0010cbbd;
LAB_0010cd99:
  in_stack_00000078 = 0;
  in_stack_00000058 = 0;
  if ((in_stack_00000030 == puVar8) || (cStack000000000000006f == '\0')) {
    iVar5 = 0;
    unaff_RBX = puVar8;
    goto LAB_0010d2c7;
  }
  goto LAB_0010cdad;}
