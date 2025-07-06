ushort *get_chr_property_list(ushort *param_1, int param_2, uint param_3, long param_4, uint *param_5) {
   ushort uVar1;
   int iVar2;
   ushort uVar3;
   ushort uVar4;
   uint uVar5;
   uint uVar6;
   ulong uVar7;
   long lVar8;
   ushort *puVar9;
   ushort *puVar10;
   uint uVar11;
   ushort *puVar12;
   undefined7 uVar13;
   ushort uVar14;
   uVar1 = *param_1;
   uVar11 = (uint)uVar1;
   *param_5 = (uint)uVar1;
   puVar9 = param_1 + 1;
   uVar4 = uVar1 - 0x21;
   if (uVar4 < 0x41) {
      uVar13 = ( undefined7 )((ulong)param_1 >> 8);
      if (uVar1 < 0x55) {
         if (uVar1 < 0x48) {
            if (uVar1 < 0x3b) {
               if (uVar1 < 0x2e) {
                  if (( ( ushort )(uVar1 - 0x27) < 3 ) || ( uVar4 == 0xc )) {
                     uVar3 = 0x21;
                     goto LAB_00100160;
                  }
                  param_5[1] = ( uint )(1 < ( ushort )(uVar1 - 0x23) && ( uVar4 & 0xfffd ) != 8);
                  goto LAB_001003e6;
               }
               uVar4 = uVar1 - 0x2e;
               if (( ( ushort )(uVar1 - 0x34) < 3 ) || ( uVar4 == 0xc )) {
                  uVar3 = 0x2e;
                  LAB_00100160:uVar14 = uVar3;
                  puVar9 = param_1 + 2;
                  goto LAB_001000f8;
               }
               param_5[1] = ( uint )(1 < ( ushort )(uVar1 - 0x30) && ( uVar4 & 0xfffd ) != 8);
               goto LAB_0010017b;
            }
            uVar4 = uVar1 - 0x3b;
            if (( ( ushort )(uVar1 - 0x41) < 3 ) || ( uVar4 == 0xc )) {
               uVar3 = 0x3b;
               goto LAB_00100160;
            }
            param_5[1] = ( uint )(( uVar4 & 0xfffd ) != 8) & (uint)CONCAT71(uVar13, 1 < ( ushort )(uVar1 - 0x3d));
            goto LAB_00100301;
         }
         uVar4 = uVar1 - 0x48;
         if (( ( ushort )(uVar1 - 0x4e) < 3 ) || ( uVar4 == 0xc )) {
            uVar3 = 0x48;
            goto LAB_00100160;
         }
         param_5[1] = ( uint )(( uVar4 & 0xfffd ) != 8) & (uint)CONCAT71(uVar13, 1 < ( ushort )(uVar1 - 0x4a));
         LAB_00100377:uVar11 = 0x1f;
      } else {
         uVar4 = uVar1 - 0x55;
         uVar14 = 0x55;
         uVar3 = 0x55;
         if (( ( ushort )(uVar1 - 0x5b) < 3 ) || ( uVar4 == 0xc )) goto LAB_00100160;
         LAB_001000f8:param_5[1] = ( uint )(( uVar4 & 0xfffd ) != 8) & (uint)CONCAT71(uVar13, 1 < ( ushort )(uVar4 - 2));
         if (uVar14 == 0x3b) {
            LAB_00100301:*param_5 = 0x1f;
            LAB_0010030b:uVar4 = *puVar9;
            uVar11 = (uint)uVar4;
            puVar10 = puVar9 + 1;
            if (( param_2 != 0 ) && ( ( uVar4 & 0xfc00 ) == 0xd800 )) {
               puVar10 = puVar9 + 2;
               uVar11 = ( ( uVar4 & 0x3ff ) << 10 | puVar9[1] & 0x3ff ) + 0x10000;
            }
            param_5[2] = uVar11;
            param_5[3] = 0xffffffff;
            return puVar10;
         }
         if (0x3b < uVar14) {
            if (uVar14 != 0x48) {
               uVar4 = *puVar9;
               puVar9 = puVar9 + 1;
               uVar11 = (uint)uVar4;
               *param_5 = uVar11;
               goto LAB_00100023;
            }
            goto LAB_00100377;
         }
         if (uVar14 == 0x21) {
            LAB_001003e6:*param_5 = 0x1d;
            goto LAB_0010030b;
         }
         LAB_0010017b:uVar11 = 0x1d;
      }
   } else {
      param_5[1] = 0;
      LAB_00100023:uVar4 = (ushort)uVar11;
      if (0x20 < uVar4) {
         if (( ushort )(uVar4 - 0x6e) < 3) {
            puVar10 = puVar9 + 0x10;
            if (uVar4 == 0x70) {
               puVar10 = puVar9 + ( ( ulong ) * puVar9 - 1 );
            }
            puVar12 = puVar10;
            if (( ushort )(*puVar10 - 0x62) < 0xc) {
               uVar7 = 1L << ( ( byte )(*puVar10 - 0x62) & 0x3f );
               if (( uVar7 & 0x533 ) == 0) {
                  if (( uVar7 & 0x8c0 ) == 0) {
                     if (( uVar7 & 0x20c ) != 0) {
                        puVar12 = puVar10 + 1;
                     }
                  } else {
                     puVar12 = puVar10 + 3;
                     param_5[1] = ( uint )(puVar10[1] == 0);
                  }
               } else {
                  param_5[1] = 1;
                  puVar12 = puVar10 + 1;
               }
            }
            param_5[2] = ( uint )((long)puVar12 - (long)puVar9 >> 1);
            return puVar12;
         }
         switchD_00100055_caseD_0:return (ushort*)0x0;
      }
      if (uVar4 < 6) {
         return (ushort*)0x0;
      }
      switch (uVar11 - 6 & 0xffff) {
         for (int i_492 = 0; i_492 < 8; i_492++) {
            case 0:
         }
         for (int i_491 = 0; i_491 < 9; i_491++) {
            case 0xb:
         }
         case 0x14:
      return puVar9;
         default:
      goto switchD_00100055_caseD_0;
         case 9:
         case 10:
      uVar1 = puVar9[1];
      if (*puVar9 == 10) {
        lVar8 = 0;
        do {
          iVar2 = *(int *)(&_pcre2_ucd_caseless_sets_16 + lVar8 + (ulong)uVar1 * 4);
          *(int *)((long)param_5 + lVar8 + 8) = iVar2;
          lVar8 = lVar8 + 4;
          if (iVar2 == -1) {
            *param_5 = (uVar4 != 0x10) + 0x1d + (uint)(uVar4 != 0x10);
            goto LAB_00100251;
          }
        } while (lVar8 != 0x18);
        param_5[2] = (uint)puVar9[2];
        param_5[3] = (uint)puVar9[3];
      }
      else {
        param_5[2] = (uint)*puVar9;
        param_5[3] = (uint)uVar1;
      }
LAB_00100251:
      return puVar9 + 2;
         case 0x17:
         case 0x19:
      goto LAB_0010030b;
         case 0x18:
         case 0x1a:
      uVar11 = (uVar4 != 0x1e) + 0x1d + (uint)(uVar4 != 0x1e);
      }
   }
   *param_5 = uVar11;
   uVar4 = *puVar9;
   uVar11 = (uint)uVar4;
   uVar5 = (uint)uVar4;
   puVar10 = puVar9 + 1;
   if (param_2 == 0) {
      uVar6 = (uint)uVar4;
      param_5[2] = uVar6;
      if (( uVar6 < 0x80 ) || ( ( uVar6 < 0x100 && ( ( param_3 & 1 ) == 0 ) ) )) {
         LAB_001001b4:uVar11 = ( uint ) * (byte*)( param_4 + (ulong)uVar4 );
         goto LAB_001001b9;
      }
   } else if (( uVar4 & 0xfc00 ) == 0xd800) {
      puVar10 = puVar9 + 2;
      uVar11 = ( ( uVar4 & 0x3ff ) << 10 | puVar9[1] & 0x3ff ) + 0x10000;
      param_5[2] = uVar11;
   } else {
      param_5[2] = (uint)uVar4;
      if (uVar4 < 0x80) goto LAB_001001b4;
   }
   uVar5 = uVar11;
   uVar11 = *(int*)( &DAT_00103014 + ( ulong ) * (ushort*)( &_pcre2_ucd_stage2_16 + (long)(int)( ( uint ) * (ushort*)( &_pcre2_ucd_stage1_16 + (long)( (int)uVar5 >> 7 ) * 2 ) * 0x80 + ( uVar5 & 0x7f ) ) * 2 ) * 0xc ) + uVar5;
   LAB_001001b9:param_5[3] = uVar11;
   if (uVar11 == uVar5) {
      param_5[3] = 0xffffffff;
   } else {
      param_5[4] = 0xffffffff;
   }
   return puVar10;
}ushort compare_opcodes(ushort *param_1, undefined4 param_2, undefined4 param_3, long param_4, uint *param_5, ushort *param_6, int *param_7) {
   long lVar1;
   byte bVar2;
   ushort uVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   ushort uVar7;
   int iVar8;
   uint uVar9;
   ulong uVar10;
   uint *puVar11;
   ushort *puVar12;
   ushort *puVar13;
   ushort *puVar14;
   ushort *puVar15;
   byte *pbVar16;
   uint *puVar17;
   uint *puVar18;
   long in_FS_OFFSET;
   bool bVar19;
   bool bVar20;
   uint local_68;
   int local_64;
   uint local_60;
   uint local_5c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar8 = *param_7;
   uVar7 = 0;
   *param_7 = iVar8 + -1;
   if (iVar8 + -1 < 1) {
      switchD_001005ca_caseD_83:uVar7 = 0;
   } else {
      LAB_00100537:do {
         while (true) {
            for (; uVar3 = *param_1,uVar3 == 0x76; param_1 = param_1 + DAT_00103096) {}
            if (uVar3 != 0x77) break;
            param_1 = param_1 + param_1[3];
         };
         while (uVar3 == 0x78) {
            param_1 = param_1 + param_1[1];
            uVar3 = *param_1;
         };
         if (uVar3 == 0) {
            uVar7 = ( ushort )(param_5[1] != 0);
            goto LAB_001007bb;
         }
         if (( ushort )(uVar3 - 0x79) < 0x20) {
            uVar10 = 1L << ( ( byte )(uVar3 - 0x79) & 0x3f );
            if (( uVar10 & 0x15000 ) != 0) {
               uVar7 = 1;
               puVar15 = param_1 + param_1[1];
               param_1 = param_1 + ( byte )(&_pcre2_OP_lengths_16)[uVar3];
               if (*puVar15 == 0x78) {
                  do {
                     iVar8 = compare_opcodes(param_1, param_2, param_3, param_4, param_5, param_6, param_7);
                     if (iVar8 == 0) goto switchD_001005ca_caseD_83;
                     param_1 = puVar15 + 2;
                     puVar15 = puVar15 + puVar15[1];
                  } while ( *puVar15 == 0x78 );
                  uVar7 = 1;
               }
               goto LAB_00100537;
            }
            if (( uVar10 & 0xc0000000 ) != 0) {
               puVar15 = param_1 + 1;
               if (( ( param_1[1] & 0xfffd ) != 0x85 ) && ( param_1[1] != 0x89 )) goto switchD_001005ca_caseD_83;
               do {
                  puVar15 = puVar15 + puVar15[1];
               } while ( *puVar15 == 0x78 );
               iVar8 = compare_opcodes(puVar15 + 2, param_2, param_3, param_4, param_5, param_6, param_7);
               if (iVar8 == 0) goto switchD_001005ca_caseD_83;
               param_1 = param_1 + ( byte )(&_pcre2_OP_lengths_16)[uVar3];
               goto LAB_00100537;
            }
            if (( uVar10 & 9 ) != 0) {
               if (param_5[1] == 0) goto switchD_001005ca_caseD_83;
               switch (param_1[-(ulong)param_1[1]]) {
                  case 0x7f:
                  case 0x80:
                  case 0x85:
            uVar7 = uVar7 ^ 1;
            goto LAB_001007bb;
                  case 0x81:
                  case 0x82:
            uVar7 = (uVar7 ^ 1) & (ushort)((param_1 + -(ulong)param_1[1])[2] != 0x7e);
            goto LAB_001007bb;
                  case 0x83:
                  case 0x84:
            goto switchD_001005ca_caseD_83;
                  case 0x86:
            if (1 < *param_5 - 0x1d) {
              uVar7 = 0;
              goto LAB_001007bb;
            }
            break;
                  case 0x89:
                  case 0x8a:
                  case 0x8e:
                  case 0x8f:
            if (*(int *)(param_4 + 0x124) != 0) goto switchD_001005ca_caseD_83;
               }
               param_1 = param_1 + ( byte )(&_pcre2_OP_lengths_16)[uVar3];
               goto LAB_00100537;
            }
         }
         param_1 = (ushort*)get_chr_property_list(param_1, param_2, param_3, *(undefined8*)( param_4 + 0x10 ));
         if (param_1 == (ushort*)0x0) goto switchD_001005ca_caseD_83;
         uVar9 = *param_5;
         if (uVar9 == 0x1d) {
            puVar17 = param_5 + 2;
            uVar9 = local_68;
            puVar18 = &local_68;
            LAB_001008c0:do {
               uVar4 = *puVar17;
               uVar10 = (ulong)uVar4;
               switch (uVar9) {
                  case 6:
            if (0xff < uVar4) goto switchD_001005ca_caseD_83;
            if ((*(byte *)(*(long *)(param_4 + 0x20) + uVar10) & 8) == 0) {
              uVar7 = 0;
              goto LAB_001007bb;
            }
            break;
                  case 7:
            if ((uVar4 < 0x100) && ((*(byte *)(*(long *)(param_4 + 0x20) + uVar10) & 8) != 0)) {
              uVar7 = 0;
              goto LAB_001007bb;
            }
            break;
                  case 8:
            if (0xff < uVar4) goto switchD_001005ca_caseD_83;
            if ((*(byte *)(*(long *)(param_4 + 0x20) + uVar10) & 1) == 0) {
              uVar7 = 0;
              goto LAB_001007bb;
            }
            break;
                  case 9:
            if ((uVar4 < 0x100) && ((*(byte *)(*(long *)(param_4 + 0x20) + uVar10) & 1) != 0)) {
              uVar7 = 0;
              goto LAB_001007bb;
            }
            break;
                  case 10:
            if (0xff < uVar4) goto switchD_001005ca_caseD_83;
            if ((*(byte *)(*(long *)(param_4 + 0x20) + uVar10) & 0x10) == 0) {
              uVar7 = 0;
              goto LAB_001007bb;
            }
            break;
                  case 0xb:
            if ((uVar4 < 0xff) && ((*(byte *)(*(long *)(param_4 + 0x20) + uVar10) & 0x10) != 0)) {
              uVar7 = 0;
              goto LAB_001007bb;
            }
            break;
                  default:
            goto switchD_001005ca_caseD_83;
                  case 0xf:
                  case 0x10:
            bVar20 = uVar9 == 0xf;
            uVar5 = puVar18[3];
            uVar6 = uVar4 + 0x7f;
            if (-1 < (int)uVar4) {
              uVar6 = uVar4;
            }
            lVar1 = (ulong)*(ushort *)
                            (&_pcre2_ucd_stage2_16 +
                            (long)(int)((uint)*(ushort *)
                                               (&_pcre2_ucd_stage1_16 + (long)((int)uVar6 >> 7) * 2)
                                        * 0x80 + (int)uVar4 % 0x80) * 2) * 0xc;
            switch(puVar18[2]) {
            default:
              goto switchD_001005ca_caseD_83;
            case 1:
              bVar20 = ((byte)((&DAT_00103011)[lVar1] - 8) < 2 || (&DAT_00103011)[lVar1] == '\x05')
                       == bVar20;
              goto LAB_00100b32;
            case 2:
              bVar19 = *(uint *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00103011)[lVar1] * 4)
                       == uVar5;
              break;
            case 3:
              bVar19 = (byte)(&DAT_00103011)[lVar1] == uVar5;
              break;
            case 4:
              bVar19 = (byte)(&_pcre2_ucd_records_16)[lVar1] == uVar5;
              break;
            case 5:
              bVar19 = true;
              if (uVar5 != (byte)(&_pcre2_ucd_records_16)[lVar1]) {
                bVar19 = (1 << ((byte)uVar5 & 0x1f) &
                         *(uint *)(&_pcre2_ucd_script_sets_16 +
                                  ((ulong)(uVar5 >> 5) +
                                  (ulong)(*(ushort *)(&_pcre2_ucd_caseless_sets_16 + lVar1) & 0x3ff)
                                  ) * 4)) != 0;
              }
              if (bVar20 == bVar19) goto switchD_001008d5_caseD_18;
              uVar7 = 0;
              goto LAB_001007bb;
            case 6:
              bVar19 = (*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00103011)[lVar1] * 4)
                       & 0xfffffffd) == 1;
              break;
            case 7:
            case 8:
              if (uVar4 != 0x180e) {
                if (uVar4 < 0x180f) {
                  if (uVar4 != 0x85) {
                    if (uVar4 < 0x86) {
                      if (uVar4 < 0xe) {
                        if (uVar4 < 9) goto LAB_00100b13;
                      }
                      else if (uVar4 != 0x20) goto LAB_00100b13;
                    }
                    else if ((uVar4 != 0xa0) && (uVar4 != 0x1680)) goto LAB_00100b13;
                  }
                }
                else if (uVar4 < 0x2060) {
                  if (uVar4 < 0x2028) {
                    if (10 < uVar4 - 0x2000) {
LAB_00100b13:
                      bVar19 = *(int *)(&_pcre2_ucp_gentype_16 +
                                       (ulong)(byte)(&DAT_00103011)[lVar1] * 4) == 6;
                      break;
                    }
                  }
                  else if ((0x80000000000083U >> ((ulong)(uVar4 - 0x2028) & 0x3f) & 1) == 0)
                  goto LAB_00100b13;
                }
                else if (uVar4 != 0x3000) goto LAB_00100b13;
              }
              goto LAB_0010132d;
            case 9:
              bVar20 = ((*(uint *)(&_pcre2_ucp_gentype_16 + (ulong)(byte)(&DAT_00103011)[lVar1] * 4)
                        & 0xfffffffd) == 1 || uVar4 == 0x5f) == bVar20;
              goto LAB_00100b32;
            case 10:
              puVar11 = (uint *)(&_pcre2_ucd_caseless_sets_16 +
                                (ulong)(byte)(&DAT_00103013)[lVar1] * 4);
              do {
                uVar5 = *puVar11;
                if (uVar4 < uVar5) {
                  bVar20 = uVar9 != 0xf;
                  goto LAB_00100b32;
                }
                puVar11 = puVar11 + 1;
              } while (uVar4 != uVar5);
LAB_0010132d:
              if (uVar9 == 0xf) goto switchD_001008d5_caseD_18;
              uVar7 = 0;
              goto LAB_001007bb;
            }
            bVar20 = bVar19 == bVar20;
LAB_00100b32:
            if (!bVar20) {
              uVar7 = 0;
              goto LAB_001007bb;
            }
            break;
                  case 0x11:
                  case 0x15:
                  case 0x17:
                  case 0x19:
            if (uVar4 == 0x85) goto switchD_001005ca_caseD_83;
            if (uVar4 < 0x86) {
              if (uVar4 - 10 < 4) goto switchD_001005ca_caseD_83;
            }
            else if (uVar4 - 0x2028 < 2) {
              uVar7 = 0;
              goto LAB_001007bb;
            }
            break;
                  case 0x12:
            if (uVar4 != 0x180e) {
              if (uVar4 < 0x180f) {
                if (uVar4 != 0xa0) {
                  if (uVar4 < 0xa1) {
                    if ((uVar4 != 9) && (uVar4 != 0x20)) {
                      uVar7 = 0;
                      goto LAB_001007bb;
                    }
                  }
                  else if (uVar4 != 0x1680) {
                    uVar7 = 0;
                    goto LAB_001007bb;
                  }
                }
              }
              else if (uVar4 != 0x205f) {
                if (uVar4 < 0x2060) {
                  if (uVar4 < 0x200b) {
                    if (uVar4 < 0x2000) {
                      uVar7 = 0;
                      goto LAB_001007bb;
                    }
                  }
                  else if (uVar4 != 0x202f) {
                    uVar7 = 0;
                    goto LAB_001007bb;
                  }
                }
                else if (uVar4 != 0x3000) {
                  uVar7 = 0;
                  goto LAB_001007bb;
                }
              }
            }
            break;
                  case 0x13:
            if (uVar4 == 0x180e) goto switchD_001005ca_caseD_83;
            if (uVar4 < 0x180f) {
              if (uVar4 == 0xa0) goto switchD_001005ca_caseD_83;
              if (uVar4 < 0xa1) {
                if (uVar4 == 9) goto switchD_001005ca_caseD_83;
                if (uVar4 == 0x20) {
                  uVar7 = 0;
                  goto LAB_001007bb;
                }
              }
              else if (uVar4 == 0x1680) {
                uVar7 = 0;
                goto LAB_001007bb;
              }
            }
            else {
              if (uVar4 == 0x205f) goto switchD_001005ca_caseD_83;
              if (uVar4 < 0x2060) {
                if (uVar4 < 0x200b) {
                  if (0x1fff < uVar4) {
                    uVar7 = 0;
                    goto LAB_001007bb;
                  }
                }
                else if (uVar4 == 0x202f) {
                  uVar7 = 0;
                  goto LAB_001007bb;
                }
              }
              else if (uVar4 == 0x3000) {
                uVar7 = 0;
                goto LAB_001007bb;
              }
            }
            break;
                  case 0x14:
            if (uVar4 != 0x85) {
              if (uVar4 < 0x86) {
                if (3 < uVar4 - 10) {
                  uVar7 = 0;
                  goto LAB_001007bb;
                }
              }
              else if (1 < uVar4 - 0x2028) {
                uVar7 = 0;
                goto LAB_001007bb;
              }
            }
            break;
                  case 0x18:
            break;
                  case 0x1d:
            puVar11 = puVar18 + 2;
            do {
              if (*puVar11 == uVar4) {
                uVar7 = 0;
                goto LAB_001007bb;
              }
              puVar11 = puVar11 + 1;
            } while (*puVar11 != 0xffffffff);
            break;
                  case 0x1f:
            puVar11 = puVar18 + 2;
            while (*puVar11 != uVar4) {
              puVar11 = puVar11 + 1;
              if (*puVar11 == 0xffffffff) goto switchD_001005ca_caseD_83;
            }
            if (uVar4 == 0xffffffff) {
              uVar7 = 0;
              goto LAB_001007bb;
            }
            break;
                  case 0x6e:
            if (uVar4 < 0x100) goto LAB_00100c34;
            break;
                  case 0x6f:
            if (0xff < uVar4) {
              uVar7 = 0;
              goto LAB_001007bb;
            }
LAB_00100c34:
            puVar15 = param_1;
            if (puVar18 != &local_68) {
              puVar15 = param_6;
            }
            if ((*(byte *)((long)puVar15 + (ulong)(uVar4 >> 3) + (ulong)puVar18[2] * -2) >>
                 (uVar4 & 7) & 1) != 0) {
              uVar7 = 0;
              goto LAB_001007bb;
            }
            break;
                  case 0x70:
            puVar15 = param_1;
            if (puVar18 != &local_68) {
              puVar15 = param_6;
            }
            iVar8 = _pcre2_xclass_16(uVar10,puVar15 + (1 - (ulong)puVar18[2]),param_2);
            if (iVar8 != 0) {
              uVar7 = 0;
              goto LAB_001007bb;
            }
               }
               switchD_001008d5_caseD_18:puVar17 = puVar17 + 1;
               if (*puVar17 == 0xffffffff) goto LAB_0010079a;
               uVar9 = *puVar18;
            } while ( true );
         }
         if (local_68 == 0x1d) {
            puVar17 = &local_60;
            puVar18 = param_5;
            goto LAB_001008c0;
         }
         if (uVar9 != 0x6e) {
            if (local_68 == 0x6e) {
               puVar15 = param_1 + -(ulong)local_60;
               puVar17 = param_5;
               goto LAB_00100848;
            }
            if (1 < uVar9 - 0xf) {
               if (( ( uVar9 - 6 < 0x11 ) && ( local_68 - 6 < 0x15 ) ) && ( autoposstab[( ulong )(local_68 - 6) + ( ulong )(uVar9 - 6) * 0x15] != '\0' )) goto LAB_0010079a;
               goto switchD_001005ca_caseD_83;
            }
            if (local_68 == 0x18) goto LAB_0010079a;
            if (1 < local_68 - 0xf) goto switchD_001005ca_caseD_83;
            bVar2 = propposstab[(ulong)local_60 + (ulong)param_5[2] * 0xe];
            switch (bVar2) {
               default:
          goto switchD_001005ca_caseD_83;
               case 1:
          bVar20 = uVar9 == 0x10 && local_68 == 0x10;
          break;
               case 2:
          bVar20 = (param_5[3] == local_5c) != (uVar9 == local_68);
          break;
               case 3:
          if (uVar9 != local_68) goto LAB_0010079a;
          uVar7 = 0;
          goto LAB_001007bb;
               case 4:
          if (local_68 == 0x10) {
            uVar5 = param_5[3];
            uVar4 = local_5c;
            goto LAB_00101070;
          }
          goto switchD_001005ca_caseD_83;
               case 5:
          if (uVar9 != 0x10) goto switchD_001005ca_caseD_83;
          uVar4 = param_5[3];
          uVar5 = local_5c;
LAB_00101070:
          if ((bool)catposstab[(ulong)uVar4 + (ulong)uVar5 * 0x1e] == (uVar9 == local_68))
          goto LAB_0010079a;
          uVar7 = 0;
          goto LAB_001007bb;
               case 6:
               case 7:
               case 8:
          lVar1 = (long)(int)(bVar2 - 6) * 4;
          if (local_68 == 0x10) {
            bVar20 = false;
            if ((local_5c != (byte)posspropstab[lVar1]) &&
               (local_5c != (byte)posspropstab[lVar1 + 1])) {
              bVar2 = posspropstab[lVar1 + 2];
LAB_00100e33:
              bVar20 = bVar2 != local_5c || uVar9 != 0x10;
            }
            goto LAB_00100e41;
          }
          goto switchD_001005ca_caseD_83;
               case 9:
               case 10:
               case 0xb:
          lVar1 = (long)(int)(bVar2 - 9) * 4;
          if (uVar9 == 0x10) {
            uVar9 = param_5[3];
            bVar20 = false;
            if ((uVar9 != (byte)posspropstab[lVar1]) && (uVar9 != (byte)posspropstab[lVar1 + 1])) {
              bVar20 = (byte)posspropstab[lVar1 + 2] == uVar9;
LAB_00100e8d:
              bVar20 = !bVar20 || local_68 != 0x10;
            }
            goto LAB_00100e9b;
          }
          goto switchD_001005ca_caseD_83;
               case 0xc:
               case 0xd:
               case 0xe:
          lVar1 = (long)(int)(bVar2 - 0xc) * 4;
          if (local_68 != 0x10) goto switchD_001005ca_caseD_83;
          bVar20 = false;
          if ((catposstab[(ulong)local_5c + (ulong)(byte)posspropstab[lVar1] * 0x1e] != '\0') &&
             (bVar20 = false,
             catposstab[(ulong)local_5c + (ulong)(byte)posspropstab[lVar1 + 1] * 0x1e] != '\0')) {
            bVar2 = posspropstab[lVar1 + 3];
            goto LAB_00100e33;
          }
LAB_00100e41:
          if (bVar20 == (uVar9 == 0x10)) goto LAB_0010079a;
          uVar7 = 0;
          goto LAB_001007bb;
               case 0xf:
               case 0x10:
               case 0x11:
          lVar1 = (long)(int)(bVar2 - 0xf) * 4;
          if (uVar9 != 0x10) goto switchD_001005ca_caseD_83;
          uVar9 = param_5[3];
          bVar20 = false;
          if ((catposstab[(ulong)uVar9 + (ulong)(byte)posspropstab[lVar1] * 0x1e] != '\0') &&
             (catposstab[(ulong)uVar9 + (ulong)(byte)posspropstab[lVar1 + 1] * 0x1e] != '\0')) {
            bVar20 = (byte)posspropstab[lVar1 + 3] == uVar9;
            goto LAB_00100e8d;
          }
LAB_00100e9b:
          if (bVar20 == (local_68 == 0x10)) goto LAB_0010079a;
          uVar7 = 0;
          goto LAB_001007bb;
            }
            if (bVar20) goto LAB_0010079a;
            uVar7 = 0;
            goto LAB_001007bb;
         }
         puVar15 = param_6 + -(ulong)param_5[2];
         puVar17 = &local_68;
         uVar9 = local_68;
         LAB_00100848:puVar13 = puVar15;
         if (uVar9 < 0xc) {
            if (uVar9 < 6) goto switchD_001005ca_caseD_83;
            switch (uVar9) {
               case 7:
          puVar14 = (ushort *)(*(long *)(param_4 + 0x18) + 0x40);
          break;
               case 8:
          pbVar16 = *(byte **)(param_4 + 0x18);
          goto LAB_00100a99;
               case 9:
          puVar14 = *(ushort **)(param_4 + 0x18);
          break;
               case 10:
          pbVar16 = (byte *)(*(long *)(param_4 + 0x18) + 0xa0);
          goto LAB_00100a99;
               case 0xb:
          puVar14 = (ushort *)(*(long *)(param_4 + 0x18) + 0xa0);
          break;
               default:
          pbVar16 = (byte *)(*(long *)(param_4 + 0x18) + 0x40);
LAB_00100a99:
          do {
            bVar2 = *pbVar16;
            puVar14 = (ushort *)((long)puVar13 + 1);
            pbVar16 = pbVar16 + 1;
            if ((byte)(~bVar2 & (byte)*puVar13) != 0) {
              uVar7 = 0;
              goto LAB_001007bb;
            }
            puVar13 = puVar14;
          } while (puVar14 < puVar15 + 0x10);
          goto LAB_0010079a;
            }
         } else {
            if (0x6f < uVar9) {
               if (uVar9 != 0x70) goto switchD_001005ca_caseD_83;
               puVar14 = param_1;
               if (puVar17 != &local_68) {
                  puVar14 = param_6;
               }
               uVar3 = puVar14[1 - (ulong)puVar17[2]];
               if (( uVar3 & 4 ) != 0) goto switchD_001005ca_caseD_83;
               if (( uVar3 & 2 ) != 0) {
                  puVar14 = puVar14 + ( 1 - (ulong)puVar17[2] ) + 1;
                  goto LAB_00100a61;
               }
               if (local_64 == 0) {
                  uVar7 = ~uVar3 & 1;
                  goto LAB_001007bb;
               }
               goto LAB_00100537;
            }
            if (uVar9 < 0x6e) goto switchD_001005ca_caseD_83;
            puVar14 = param_1;
            if (puVar17 != &local_68) {
               puVar14 = param_6;
            }
            puVar14 = puVar14 + -(ulong)puVar17[2];
         }
         LAB_00100a61:do {
            puVar12 = (ushort*)( (long)puVar13 + 1 );
            if (( byte )(( byte ) * puVar13 & ( byte ) * puVar14) != 0) {
               uVar7 = 0;
               goto LAB_001007bb;
            }
            puVar13 = puVar12;
            puVar14 = (ushort*)( (long)puVar14 + 1 );
         } while ( puVar12 < puVar15 + 0x10 );
         LAB_0010079a:;
      } while ( local_64 != 0 );
      uVar7 = 1;
   }
   LAB_001007bb:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar7;
}
