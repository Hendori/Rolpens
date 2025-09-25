undefined4 *NewDecoder(undefined4 *param_1, undefined8 param_2) {
   undefined4 *puVar1;
   undefined4 uVar2;
   int iVar3;
   undefined4 *puVar4;
   puVar4 = (undefined4*)WebPSafeCalloc(1, 0x1f0);
   if (puVar4 != (undefined4*)0x0) {
      *puVar4 = 0;
      puVar1 = puVar4 + 0x58;
      *(undefined8*)( puVar4 + 0x78 ) = 0;
      puVar4[0x7a] = 0xffffffff;
      puVar4[0x4a] = 0;
      *(undefined8*)( puVar4 + 0x52 ) = 0;
      *(undefined8*)( puVar4 + 0x50 ) = 0;
      *(undefined8*)( puVar4 + 0x56 ) = 0;
      *(undefined8*)( puVar4 + 0x54 ) = 0;
      iVar3 = WebPInitDecBufferInternal(puVar1, 0x209);
      if (iVar3 != 0) {
         iVar3 = VP8InitIoInternal(puVar4 + 0x22, 0x209);
         if (iVar3 != 0) {
            WebPResetDecParams(puVar4 + 2);
            if (param_1 == (undefined4*)0x0) {
               *(undefined4**)( puVar4 + 2 ) = puVar1;
               *(undefined8*)( puVar4 + 0x76 ) = 0;
            }
 else {
               iVar3 = WebPAvoidSlowMemory(param_1, param_2);
               if (iVar3 == 0) {
                  *(undefined4**)( puVar4 + 2 ) = param_1;
                  *(undefined8*)( puVar4 + 0x76 ) = 0;
               }
 else {
                  uVar2 = *param_1;
                  *(undefined4**)( puVar4 + 2 ) = puVar1;
                  *(undefined4**)( puVar4 + 0x76 ) = param_1;
                  puVar4[0x58] = uVar2;
               }

            }

            WebPInitCustomIo(puVar4 + 2, puVar4 + 0x22);
            return puVar4;
         }

      }

      WebPSafeFree(puVar4);
   }

   return (undefined4*)0x0;
}
int FinishDecoding(undefined4 *param_1) {
   undefined8 *puVar1;
   long lVar2;
   undefined8 *puVar3;
   undefined8 uVar4;
   int iVar5;
   *param_1 = 6;
   puVar1 = *(undefined8**)( param_1 + 2 );
   if (( *(long*)( param_1 + 0xc ) == 0 ) || ( *(int*)( *(long*)( param_1 + 0xc ) + 0x30 ) == 0 )) {
      lVar2 = *(long*)( param_1 + 0x76 );
   }
 else {
      iVar5 = WebPFlipBuffer(puVar1);
      if (iVar5 != 0) {
         return iVar5;
      }

      lVar2 = *(long*)( param_1 + 0x76 );
   }

   iVar5 = 0;
   if (lVar2 != 0) {
      iVar5 = WebPCopyDecBufferPixels(puVar1);
      WebPFreeDecBuffer(param_1 + 0x58);
      if (iVar5 == 0) {
         puVar3 = *(undefined8**)( param_1 + 0x76 );
         uVar4 = puVar3[1];
         *puVar1 = *puVar3;
         puVar1[1] = uVar4;
         for (int i = 0; i < 6; i++) {
            uVar4 = puVar3[( 2*i + 3 )];
            puVar1[( 2*i + 2 )] = puVar3[( 2*i + 2 )];
            puVar1[( 2*i + 3 )] = uVar4;
         }

         puVar1[0xe] = puVar3[0xe];
         *(undefined8*)( param_1 + 0x76 ) = 0;
      }

   }

   return iVar5;
}
void DoRemap(int *param_1, long param_2) {
   uint uVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   uint uVar7;
   ulong uVar8;
   lVar3 = *(long*)( param_1 + 0x4e );
   lVar4 = *(long*)( param_1 + 0x52 );
   lVar2 = *(long*)( param_1 + 0x20 );
   lVar5 = lVar4 + *(long*)( param_1 + 0x4c );
   lVar6 = lVar3 - *(long*)( param_1 + 0x4c );
   *(long*)( param_1 + 0x3c ) = lVar5;
   *(long*)( param_1 + 0x3a ) = lVar6;
   if (lVar2 != 0) {
      if (param_1[0x1e] != 0) {
         LAB_00100377:VP8LBitReaderSetBuffer(lVar2 + 0x28, lVar5, lVar6);
         return;
      }

      uVar1 = *(uint*)( lVar2 + 0x1b0 );
      if (param_2 != 0) {
         uVar8 = 0;
         do {
            uVar7 = (int)uVar8 + 1;
            VP8RemapBitReader(uVar8 * 0x30 + lVar2 + 0x1b8, param_2);
            uVar8 = (ulong)uVar7;
         }
 while ( uVar7 <= uVar1 );
         if (param_1[0x4a] == 2) {
            VP8RemapBitReader(lVar2 + 0x10, param_2);
         }

         lVar4 = *(long*)( param_1 + 0x52 );
         lVar3 = *(long*)( param_1 + 0x4e );
      }

      lVar6 = (ulong)uVar1 * 0x30;
      lVar5 = *(long*)( lVar2 + 0x1c8 + lVar6 );
      VP8BitReaderSetBuffer(lVar2 + 0x1b8 + lVar6, lVar5, ( lVar4 + lVar3 ) - lVar5);
      if (( ( ( *param_1 != 0 ) && ( param_1[0x1e] == 0 ) ) && ( *(long*)( *(long*)( param_1 + 0x20 ) + 0xb98 ) != 0 ) ) && ( *(int*)( *(long*)( param_1 + 0x20 ) + 0xba8 ) == 0 )) {
         lVar3 = *(long*)( lVar2 + 0xb90 );
         param_2 = param_2 + *(long*)( lVar2 + 0xb98 );
         *(long*)( lVar2 + 0xb98 ) = param_2;
         if (( ( lVar3 != 0 ) && ( *(long*)( lVar3 + 0x18 ) != 0 ) ) && ( *(int*)( lVar3 + 8 ) == 1 )) {
            lVar5 = param_2 + 1;
            lVar6 = *(long*)( lVar2 + 0xba0 ) + -1;
            lVar2 = *(long*)( lVar3 + 0x18 );
            goto LAB_00100377;
         }

      }

   }

   return;
}
ulong IDecode(int *param_1) {
   int *piVar1;
   long lVar2;
   byte bVar3;
   byte bVar4;
   byte bVar5;
   undefined2 uVar6;
   undefined2 uVar7;
   undefined4 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   uint *puVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   int iVar15;
   uint uVar16;
   long lVar17;
   long lVar18;
   long lVar19;
   size_t __n;
   void *pvVar20;
   ulong uVar21;
   byte *pbVar22;
   long in_FS_OFFSET;
   undefined1 local_8c[4];
   long local_88;
   long local_80;
   undefined4 local_78;
   long local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   int local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar15 = *param_1;
   if (iVar15 == 0) {
      local_78 = 0;
      local_80 = *(long*)( param_1 + 0x4e ) - *(long*)( param_1 + 0x4c );
      local_88 = *(long*)( param_1 + 0x4c ) + *(long*)( param_1 + 0x52 );
      uVar16 = WebPParseHeaders(&local_88);
      if (uVar16 == 7) {
         iVar15 = *param_1;
         uVar21 = 5;
         goto LAB_00100402;
      }

      if (uVar16 == 0) {
         *(undefined8*)( param_1 + 0x78 ) = local_58;
         param_1[0x1e] = local_48;
         if (local_48 == 0) {
            lVar19 = VP8New();
            if (lVar19 == 0) goto LAB_00100ba0;
            *(undefined4*)( lVar19 + 0x40 ) = 1;
            *(long*)( param_1 + 0x20 ) = lVar19;
            *(undefined8*)( lVar19 + 0xb98 ) = local_68;
            *(undefined8*)( lVar19 + 0xba0 ) = local_60;
            local_70 = *(long*)( param_1 + 0x4c ) + local_70;
            *param_1 = 1;
            *(long*)( param_1 + 0x4c ) = local_70;
            *(long*)( param_1 + 0x3c ) = *(long*)( param_1 + 0x52 ) + local_70;
            lVar19 = *(long*)( param_1 + 0x4e );
            *(long*)( param_1 + 0x3a ) = lVar19 - local_70;
            goto LAB_001007e5;
         }

         lVar19 = VP8LNew();
         if (lVar19 == 0) {
            LAB_00100ba0:iVar15 = *param_1;
            uVar21 = 1;
            goto LAB_00100402;
         }

         *(long*)( param_1 + 0x20 ) = lVar19;
         local_70 = *(long*)( param_1 + 0x4c ) + local_70;
         *param_1 = 4;
         *(long*)( param_1 + 0x4c ) = local_70;
         *(long*)( param_1 + 0x3c ) = *(long*)( param_1 + 0x52 ) + local_70;
         lVar19 = *(long*)( param_1 + 0x4e );
         *(long*)( param_1 + 0x3a ) = lVar19 - local_70;
         LAB_00100957:lVar18 = *(long*)( param_1 + 0x4c );
         puVar12 = *(uint**)( param_1 + 0x20 );
         uVar9 = *(undefined8*)( param_1 + 2 );
         if (( ulong )(lVar19 - lVar18) < *(ulong*)( param_1 + 0x78 ) >> 3) {
            *puVar12 = 5;
            uVar21 = 5;
            goto LAB_00100704;
         }

         iVar15 = VP8LDecodeHeader(puVar12, param_1 + 0x22);
         if (iVar15 != 0) {
            uVar16 = WebPAllocateDecBuffer(param_1[0x22], param_1[0x23], *(undefined8*)( param_1 + 0xc ), uVar9);
            *puVar12 = uVar16;
            if (uVar16 != 0) {
               iVar15 = *param_1;
               goto joined_r0x00100ab3;
            }

            *param_1 = 5;
            LAB_00100639:puVar12 = *(uint**)( param_1 + 0x20 );
            puVar12[0x14] = ( uint )(( ulong )(*(long*)( param_1 + 0x4e ) - *(long*)( param_1 + 0x4c )) < *(ulong*)( param_1 + 0x78 ));
            iVar15 = VP8LDecodeImage(puVar12);
            if (iVar15 == 0) {
               uVar16 = *puVar12;
               if (( uVar16 & 0xfffffffd ) != 5) goto LAB_001006f3;
            }
 else if (*puVar12 != 5) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar21 = FinishDecoding(param_1);
                  return uVar21;
               }

               goto LAB_00100c86;
            }

            goto LAB_00100740;
         }

         uVar16 = *puVar12;
         iVar15 = *param_1;
         if (uVar16 == 3) {
            if (( ulong )(lVar19 - lVar18) < *(ulong*)( param_1 + 0x78 )) {
               *puVar12 = 5;
               goto LAB_00100aa5;
            }

         }
 else if (( uVar16 & 0xfffffffd ) == 5) {
            LAB_00100aa5:uVar21 = 5;
            goto LAB_00100630;
         }

         joined_r0x00100ab3:uVar21 = (ulong)uVar16;
         if (iVar15 == 3) {
            VP8ExitCritical(*(undefined8*)( param_1 + 0x20 ), param_1 + 0x22);
         }

      }
 else {
         LAB_001006f3:uVar21 = (ulong)uVar16;
         if (*param_1 == 3) {
            VP8ExitCritical(*(undefined8*)( param_1 + 0x20 ), param_1 + 0x22);
         }

      }

      LAB_001006fd:*param_1 = 7;
   }
 else {
      uVar21 = 5;
      if (*(long*)( param_1 + 0x20 ) != 0) {
         LAB_00100402:if (iVar15 != 1) {
            if (iVar15 != 2) {
               LAB_00100414:if (iVar15 == 3) {
                  lVar19 = *(long*)( param_1 + 0x20 );
                  if (lVar19 == 0) goto LAB_00100740;
                  piVar1 = param_1 + 0x22;
                  if (*(int*)( lVar19 + 4 ) == 0) {
                     VP8ExitCritical(lVar19, piVar1);
                     LAB_001008d5:uVar21 = 3;
                  }
 else {
                     iVar15 = *(int*)( lVar19 + 0xb5c );
                     if (iVar15 < *(int*)( lVar19 + 0x19c )) {
                        do {
                           if (param_1[0x7a] != iVar15) {
                              iVar15 = VP8ParseIntraModeRow(lVar19 + 0x10, lVar19);
                              if (iVar15 == 0) {
                                 LAB_0010059e:if (*param_1 == 3) {
                                    VP8ExitCritical(*(undefined8*)( param_1 + 0x20 ), piVar1);
                                 }

                                 goto LAB_001008d5;
                              }

                              param_1[0x7a] = *(int*)( lVar19 + 0xb5c );
                           }

                           iVar15 = *(int*)( lVar19 + 0xb58 );
                           if (iVar15 < *(int*)( lVar19 + 0x198 )) {
                              uVar16 = *(uint*)( lVar19 + 0x1b0 );
                              do {
                                 uVar21 = ( ulong )(uVar16 & *(uint*)( lVar19 + 0xb5c ));
                                 uVar6 = *(undefined2*)( *(long*)( lVar19 + 0xb10 ) + (long)iVar15 * 2 );
                                 uVar7 = *(undefined2*)( *(long*)( lVar19 + 0xb10 ) + -2 );
                                 lVar17 = uVar21 * 0x30;
                                 lVar18 = lVar19 + lVar17;
                                 lVar2 = lVar19 + 0x1c0 + lVar17;
                                 uVar9 = *(undefined8*)( lVar18 + 0x1b8 );
                                 uVar10 = *(undefined8*)( lVar18 + 0x1c0 );
                                 uVar13 = *(undefined8*)( lVar2 + 8 );
                                 uVar14 = *(undefined8*)( lVar2 + 0x10 );
                                 uVar11 = *(undefined8*)( lVar18 + 0x1d8 );
                                 uVar8 = *(undefined4*)( lVar18 + 0x1e0 );
                                 iVar15 = VP8DecodeMB(lVar19, lVar19 + 0x1b8 + lVar17);
                                 if (iVar15 == 0) {
                                    if (( *(int*)( lVar19 + 0x1b0 ) == 0 ) && ( 0x1000 < ( ulong )(*(long*)( param_1 + 0x4e ) - *(long*)( param_1 + 0x4c )) )) goto LAB_0010059e;
                                    if (0 < *(int*)( lVar19 + 200 )) {
                                       lVar18 = WebPGetWorkerInterface();
                                       iVar15 = ( **(code**)( lVar18 + 0x10 ) )(lVar19 + 0x98);
                                       if (iVar15 == 0) goto LAB_0010059e;
                                    }

                                    lVar18 = *(long*)( lVar19 + 0xb10 );
                                    *(undefined2*)( lVar18 + -2 ) = uVar7;
                                    *(undefined2*)( lVar18 + (long)*(int*)( lVar19 + 0xb58 ) * 2 ) = uVar6;
                                    lVar19 = uVar21 * 0x30 + lVar19;
                                    *(undefined8*)( lVar19 + 0x1b8 ) = uVar9;
                                    *(undefined8*)( lVar19 + 0x1c0 ) = uVar10;
                                    *(undefined8*)( lVar2 + 8 ) = uVar13;
                                    *(undefined8*)( lVar2 + 0x10 ) = uVar14;
                                    *(undefined8*)( lVar19 + 0x1d8 ) = uVar11;
                                    *(undefined4*)( lVar19 + 0x1e0 ) = uVar8;
                                    iVar15 = *param_1;
                                    uVar21 = 5;
                                    goto LAB_00100627;
                                 }

                                 uVar16 = *(uint*)( lVar19 + 0x1b0 );
                                 if (uVar16 == 0) {
                                    *(long*)( param_1 + 0x4c ) = *(long*)( lVar18 + 0x1c8 ) - *(long*)( param_1 + 0x52 );
                                 }

                                 iVar15 = *(int*)( lVar19 + 0xb58 ) + 1;
                                 *(int*)( lVar19 + 0xb58 ) = iVar15;
                              }
 while ( iVar15 < *(int*)( lVar19 + 0x198 ) );
                           }

                           VP8InitScanline(lVar19);
                           iVar15 = VP8ProcessRow(lVar19, piVar1);
                           if (iVar15 == 0) {
                              if (*param_1 == 3) {
                                 VP8ExitCritical(*(undefined8*)( param_1 + 0x20 ), piVar1);
                              }

                              goto LAB_00100c14;
                           }

                           iVar15 = *(int*)( lVar19 + 0xb5c ) + 1;
                           *(int*)( lVar19 + 0xb5c ) = iVar15;
                        }
 while ( iVar15 < *(int*)( lVar19 + 0x19c ) );
                     }

                     iVar15 = VP8ExitCritical(lVar19, piVar1);
                     if (iVar15 != 0) {
                        *(undefined4*)( lVar19 + 4 ) = 0;
                        uVar16 = FinishDecoding(param_1);
                        uVar21 = (ulong)uVar16;
                        iVar15 = *param_1;
                        goto LAB_00100627;
                     }

                     LAB_00100c14:uVar21 = 6;
                  }

                  goto LAB_001006fd;
               }

               LAB_00100627:if (iVar15 == 4) {
                  lVar19 = *(long*)( param_1 + 0x4e );
                  goto LAB_00100957;
               }

               LAB_00100630:if (iVar15 == 5) goto LAB_00100639;
               goto LAB_00100704;
            }

            LAB_0010085f:puVar12 = *(uint**)( param_1 + 0x20 );
            uVar9 = *(undefined8*)( param_1 + 2 );
            if (( ulong )(*(long*)( param_1 + 0x4e ) - *(long*)( param_1 + 0x4c )) < *(ulong*)( param_1 + 0x54 )) goto LAB_00100740;
            piVar1 = param_1 + 0x22;
            iVar15 = VP8GetHeaders(puVar12, piVar1);
            if (iVar15 == 0) {
               uVar16 = *puVar12;
               iVar15 = *param_1;
               uVar21 = ( ulong )(uVar16 & 0xfffffffd);
               if (( uVar16 & 0xfffffffd ) == 5) goto LAB_00100414;
               if (iVar15 == 3) {
                  uVar21 = (ulong)uVar16;
                  VP8ExitCritical(*(undefined8*)( param_1 + 0x20 ), piVar1);
               }
 else {
                  uVar21 = (ulong)uVar16;
               }

               goto LAB_001006fd;
            }

            uVar16 = WebPAllocateDecBuffer(param_1[0x22], param_1[0x23], *(undefined8*)( param_1 + 0xc ), uVar9);
            *puVar12 = uVar16;
            if (uVar16 == 0) {
               uVar16 = VP8GetThreadMethod(*(undefined8*)( param_1 + 0xc ), 0, param_1[0x22], param_1[0x23]);
               uVar9 = *(undefined8*)( param_1 + 0xc );
               puVar12[0x32] = uVar16;
               VP8InitDithering(uVar9, puVar12);
               lVar19 = *(long*)( param_1 + 0x20 );
               __n = *(long*)( lVar19 + 0x28 ) - *(long*)( lVar19 + 0x20 );
               if (__n != 0) {
                  uVar21 = (ulong)(uint)param_1[0x4a];
                  if (param_1[0x4a] == 1) {
                     pvVar20 = (void*)WebPSafeMalloc(1, __n);
                     if (pvVar20 == (void*)0x0) goto LAB_00100c38;
                     pvVar20 = memcpy(pvVar20, *(void**)( lVar19 + 0x20 ), __n);
                     *(void**)( param_1 + 0x56 ) = pvVar20;
                     VP8BitReaderSetBuffer(lVar19 + 0x10, pvVar20, __n);
                  }

                  *(size_t*)( param_1 + 0x4c ) = *(long*)( param_1 + 0x4c ) + __n;
                  *puVar12 = 0;
                  uVar16 = VP8EnterCritical(puVar12, piVar1);
                  uVar21 = (ulong)uVar16;
                  if (uVar16 == 0) {
                     *param_1 = 3;
                     iVar15 = VP8InitFrame(puVar12, piVar1);
                     if (iVar15 != 0) {
                        iVar15 = *param_1;
                        goto LAB_00100414;
                     }

                  }

                  uVar16 = *puVar12;
                  goto LAB_00100bb0;
               }

               uVar21 = 3;
               LAB_00100c38:iVar15 = *param_1;
               *puVar12 = (uint)uVar21;
            }
 else {
               LAB_00100bb0:uVar21 = (ulong)uVar16;
               iVar15 = *param_1;
            }

            if (iVar15 == 3) {
               VP8ExitCritical(*(undefined8*)( param_1 + 0x20 ), piVar1);
            }

            goto LAB_001006fd;
         }

         lVar19 = *(long*)( param_1 + 0x4e );
         LAB_001007e5:uVar21 = lVar19 - *(long*)( param_1 + 0x4c );
         if (9 < uVar21) {
            pbVar22 = (byte*)( *(long*)( param_1 + 0x4c ) + *(long*)( param_1 + 0x52 ) );
            iVar15 = VP8GetInfo(pbVar22, uVar21, *(undefined8*)( param_1 + 0x78 ), local_8c, &local_88);
            if (iVar15 != 0) {
               bVar3 = pbVar22[1];
               bVar4 = pbVar22[2];
               bVar5 = *pbVar22;
               *(byte**)( param_1 + 0x3c ) = pbVar22;
               *(ulong*)( param_1 + 0x3a ) = uVar21;
               *param_1 = 2;
               *(ulong*)( param_1 + 0x54 ) = ( ulong )(( ( (uint)bVar3 << 8 | (uint)bVar4 << 0x10 | (uint)bVar5 ) >> 5 ) + 10);
               goto LAB_0010085f;
            }

            if (*param_1 == 3) {
               VP8ExitCritical(*(undefined8*)( param_1 + 0x20 ), param_1 + 0x22);
            }

            *param_1 = 7;
            uVar21 = 3;
            goto LAB_00100704;
         }

      }

      LAB_00100740:uVar21 = 5;
   }

   LAB_00100704:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar21;
   }

   LAB_00100c86:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
void WebPINewDecoder(undefined8 param_1) {
   NewDecoder(param_1, 0);
   return;
}
long WebPIDecode(long param_1, long param_2, long param_3) {
   bool bVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   undefined1 local_38[16];
   undefined1 local_28[16];
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   bVar1 = param_1 != 0 && param_2 != 0;
   if (param_3 == 0) {
      local_18 = 0;
      local_38 = (undefined1[16])0x0;
      local_28 = (undefined1[16])0x0;
      if (bVar1) {
         iVar2 = WebPGetFeaturesInternal(param_1, param_2, local_38, 0x209);
         if (iVar2 != 0) {
            lVar3 = 0;
            goto LAB_00100d05;
         }

      }

      lVar3 = NewDecoder(0, local_38);
   }
 else {
      local_18 = 0;
      local_38 = (undefined1[16])0x0;
      local_28 = (undefined1[16])0x0;
      if (bVar1) {
         iVar2 = WebPGetFeaturesInternal(param_1, param_2, param_3, 0x209);
         if (iVar2 != 0) {
            lVar3 = 0;
            goto LAB_00100d05;
         }

      }

      lVar3 = NewDecoder(param_3 + 0x28, param_3);
      if (lVar3 != 0) {
         *(long*)( lVar3 + 0x30 ) = param_3 + 0xa0;
      }

   }

   LAB_00100d05:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void WebPIDelete(int *param_1) {
   int iVar1;
   long lVar2;
   if (param_1 == (int*)0x0) {
      return;
   }

   lVar2 = *(long*)( param_1 + 0x20 );
   if (lVar2 != 0) {
      if (param_1[0x1e] != 0) {
         VP8LDelete();
         iVar1 = param_1[0x4a];
         goto joined_r0x00100dec;
      }

      if (*param_1 == 3) {
         VP8ExitCritical(lVar2, param_1 + 0x22);
         lVar2 = *(long*)( param_1 + 0x20 );
      }

      VP8Delete(lVar2);
   }

   iVar1 = param_1[0x4a];
   joined_r0x00100dec:if (iVar1 == 1) {
      WebPSafeFree(*(undefined8*)( param_1 + 0x52 ));
      WebPSafeFree(*(undefined8*)( param_1 + 0x56 ));
   }

   WebPFreeDecBuffer(param_1 + 0x58);
   WebPSafeFree(param_1);
   return;
}
long WebPINewRGB(uint param_1, long param_2, long param_3, int param_4) {
   long lVar1;
   if (10 < param_1) {
      return 0;
   }

   if (param_2 == 0) {
      param_4 = 0;
      param_3 = 0;
   }
 else if (( param_4 == 0 ) || ( param_3 == 0 )) {
      return 0;
   }

   lVar1 = NewDecoder(0, 0);
   if (lVar1 != 0) {
      *(uint*)( lVar1 + 0x160 ) = param_1;
      *(long*)( lVar1 + 0x170 ) = param_2;
      *(uint*)( lVar1 + 0x16c ) = ( uint )(param_2 != 0);
      *(int*)( lVar1 + 0x178 ) = param_4;
      *(long*)( lVar1 + 0x180 ) = param_3;
   }

   return lVar1;
}
long WebPINewYUVA(long param_1, long param_2, int param_3, long param_4, long param_5, int param_6, long param_7, long param_8, int param_9, long param_10, long param_11, int param_12) {
   long lVar1;
   undefined4 uVar2;
   if (param_1 == 0) {
      param_10 = 0;
      param_7 = 0;
      param_4 = 0;
      param_5 = 0;
      param_12 = 0;
      param_6 = 0;
      param_3 = 0;
      param_2 = 0;
      param_11 = 0;
      uVar2 = 0xc;
      param_9 = 0;
      param_8 = 0;
   }
 else {
      if (( ( ( param_4 == 0 ) || ( param_7 == 0 ) ) || ( param_2 == 0 || param_5 == 0 ) ) || ( ( ( param_8 == 0 || ( param_3 == 0 || param_6 == 0 ) ) || ( param_9 == 0 ) ) )) {
         return 0;
      }

      if (param_10 == 0) {
         uVar2 = 0xb;
      }
 else {
         if (param_11 == 0) {
            return 0;
         }

         if (param_12 == 0) {
            return 0;
         }

         uVar2 = 0xc;
      }

   }

   lVar1 = NewDecoder(0, 0);
   if (lVar1 != 0) {
      *(long*)( lVar1 + 0x180 ) = param_7;
      *(undefined4*)( lVar1 + 0x160 ) = uVar2;
      *(long*)( lVar1 + 0x1b0 ) = param_8;
      *(uint*)( lVar1 + 0x16c ) = ( uint )(param_1 != 0);
      *(long*)( lVar1 + 0x170 ) = param_1;
      *(long*)( lVar1 + 0x1a0 ) = param_2;
      *(long*)( lVar1 + 0x178 ) = param_4;
      *(long*)( lVar1 + 0x1a8 ) = param_5;
      *(long*)( lVar1 + 0x188 ) = param_10;
      *(long*)( lVar1 + 0x1b8 ) = param_11;
      *(ulong*)( lVar1 + 400 ) = CONCAT44(param_6, param_3);
      *(ulong*)( lVar1 + 0x198 ) = CONCAT44(param_12, param_9);
      return lVar1;
   }

   return 0;
}
long WebPINewYUV(long param_1, long param_2, int param_3, long param_4, long param_5, int param_6, long param_7, long param_8, int param_9) {
   long lVar1;
   undefined4 uVar2;
   if (param_1 == 0) {
      param_7 = 0;
      param_4 = 0;
      param_6 = 0;
      param_3 = 0;
      param_9 = 0;
      uVar2 = 0xc;
      param_5 = 0;
      param_2 = 0;
      param_8 = 0;
   }
 else {
      if (( ( ( param_4 == 0 ) || ( param_7 == 0 ) ) || ( param_2 == 0 || param_5 == 0 ) ) || ( ( ( param_8 == 0 || ( param_3 == 0 || param_6 == 0 ) ) || ( param_9 == 0 ) ) )) {
         return 0;
      }

      uVar2 = 0xb;
   }

   lVar1 = NewDecoder(0, 0);
   if (lVar1 == 0) {
      return 0;
   }

   *(long*)( lVar1 + 0x170 ) = param_1;
   *(undefined4*)( lVar1 + 0x160 ) = uVar2;
   *(uint*)( lVar1 + 0x16c ) = ( uint )(param_1 != 0);
   *(int*)( lVar1 + 400 ) = param_3;
   *(long*)( lVar1 + 0x1a0 ) = param_2;
   *(long*)( lVar1 + 0x178 ) = param_4;
   *(int*)( lVar1 + 0x194 ) = param_6;
   *(long*)( lVar1 + 0x1a8 ) = param_5;
   *(long*)( lVar1 + 0x180 ) = param_7;
   *(int*)( lVar1 + 0x198 ) = param_9;
   *(long*)( lVar1 + 0x1b0 ) = param_8;
   *(undefined8*)( lVar1 + 0x188 ) = 0;
   *(undefined4*)( lVar1 + 0x19c ) = 0;
   *(undefined8*)( lVar1 + 0x1b8 ) = 0;
   return lVar1;
}
undefined8 WebPIAppend(int *param_1, void *param_2, ulong param_3) {
   int iVar1;
   void *__dest;
   undefined8 uVar2;
   void *__src;
   void *pvVar3;
   ulong uVar4;
   size_t __n;
   if (param_1 == (int*)0x0) {
      return 2;
   }

   if (param_2 == (void*)0x0) {
      return 2;
   }

   iVar1 = *param_1;
   if (iVar1 == 7) {
      uVar2 = 3;
   }
 else {
      if (iVar1 != 6) {
         if (param_1[0x4a] == 0) {
            param_1[0x4a] = 1;
         }
 else if (param_1[0x4a] != 1) {
            return 2;
         }

         __dest = *(void**)( param_1 + 0x52 );
         if (( ( ( iVar1 == 0 ) || ( param_1[0x1e] != 0 ) ) || ( __src = *(void**)( *(long*)( param_1 + 0x20 ) + 0xb98 ) ),__src == (void*)0x0 )) {
            if (__dest == (void*)0x0) {
               pvVar3 = (void*)0x0;
               __src = (void*)0x0;
            }
 else {
               __src = (void*)( *(long*)( param_1 + 0x4c ) + (long)__dest );
               pvVar3 = __src;
            }

         }
 else {
            pvVar3 = (void*)0x0;
            if (__dest != (void*)0x0) {
               pvVar3 = (void*)( *(long*)( param_1 + 0x4c ) + (long)__dest );
            }

         }

         if (0xfffffff6 < param_3) {
            return 1;
         }

         __n = *(size_t*)( param_1 + 0x4e );
         if (*(ulong*)( param_1 + 0x50 ) < param_3 + __n) {
            __n = ( __n - *(long*)( param_1 + 0x4c ) ) + ( (long)pvVar3 - (long)__src );
            uVar4 = __n + 0xfff + param_3 & 0xfffffffffffff000;
            __dest = (void*)WebPSafeMalloc(uVar4, 1);
            if (__dest == (void*)0x0) {
               return 1;
            }

            if (__src != (void*)0x0) {
               __dest = memcpy(__dest, __src, __n);
            }

            WebPSafeFree(*(undefined8*)( param_1 + 0x52 ));
            *(ulong*)( param_1 + 0x50 ) = uVar4;
            *(size_t*)( param_1 + 0x4e ) = __n;
            *(void**)( param_1 + 0x52 ) = __dest;
            *(long*)( param_1 + 0x4c ) = (long)pvVar3 - (long)__src;
         }

         memcpy((void*)( (long)__dest + __n ), param_2, param_3);
         *(ulong*)( param_1 + 0x4e ) = *(long*)( param_1 + 0x4e ) + param_3;
         DoRemap(param_1, ( *(long*)( param_1 + 0x4c ) + *(long*)( param_1 + 0x52 ) ) - (long)pvVar3);
         uVar2 = IDecode(param_1);
         return uVar2;
      }

      uVar2 = 0;
   }

   return uVar2;
}
undefined8 WebPIUpdate(int *param_1, long param_2, ulong param_3) {
   long lVar1;
   undefined8 uVar2;
   if (( param_1 != (int*)0x0 ) && ( param_2 != 0 )) {
      if (*param_1 == 7) {
         return 3;
      }

      if (*param_1 == 6) {
         return 0;
      }

      if (param_1[0x4a] == 0) {
         param_1[0x4a] = 2;
      }
 else if (param_1[0x4a] != 2) {
         return 2;
      }

      lVar1 = *(long*)( param_1 + 0x52 );
      if (lVar1 != 0) {
         lVar1 = lVar1 + *(long*)( param_1 + 0x4c );
      }

      if (*(ulong*)( param_1 + 0x50 ) <= param_3) {
         *(long*)( param_1 + 0x52 ) = param_2;
         *(ulong*)( param_1 + 0x4e ) = param_3;
         *(ulong*)( param_1 + 0x50 ) = param_3;
         DoRemap(param_1, ( param_2 + *(long*)( param_1 + 0x4c ) ) - lVar1);
         uVar2 = IDecode(param_1);
         return uVar2;
      }

   }

   return 2;
}
long WebPIDecodedArea(uint *param_1, undefined4 *param_2, undefined4 *param_3, undefined4 *param_4, uint *param_5) {
   long lVar1;
   if (( ( ( param_1 == (uint*)0x0 ) || ( *(long*)( param_1 + 0x20 ) == 0 ) ) || ( *param_1 < 3 ) ) || ( *(long*)( param_1 + 0x76 ) != 0 )) {
      if (param_2 != (undefined4*)0x0) {
         *param_2 = 0;
      }

      if (param_3 != (undefined4*)0x0) {
         *param_3 = 0;
      }

   }
 else {
      lVar1 = *(long*)( param_1 + 2 );
      if (param_2 != (undefined4*)0x0) {
         *param_2 = 0;
      }

      if (param_3 != (undefined4*)0x0) {
         *param_3 = 0;
      }

      if (lVar1 != 0) {
         if (param_4 != (undefined4*)0x0) {
            *param_4 = *(undefined4*)( lVar1 + 4 );
         }

         if (param_5 != (uint*)0x0) {
            *param_5 = param_1[10];
            return lVar1;
         }

         return lVar1;
      }

   }

   if (param_4 != (undefined4*)0x0) {
      *param_4 = 0;
   }

   if (param_5 != (uint*)0x0) {
      *param_5 = 0;
   }

   return 0;
}
undefined8 WebPIDecGetRGB(uint *param_1, uint *param_2, uint *param_3, uint *param_4, uint *param_5) {
   uint *puVar1;
   if (param_1 != (uint*)0x0) {
      if (*(long*)( param_1 + 0x20 ) == 0) {
         return 0;
      }

      if (( ( ( 2 < *param_1 ) && ( puVar1 = *(uint**)( param_1 + 2 ) * (long*)( param_1 + 0x76 ) == 0 ) ) && ( puVar1 != (uint*)0x0 ) ) && ( *puVar1 < 0xb )) {
         if (param_2 != (uint*)0x0) {
            *param_2 = param_1[10];
         }

         if (param_3 != (uint*)0x0) {
            *param_3 = puVar1[1];
         }

         if (param_4 != (uint*)0x0) {
            *param_4 = puVar1[2];
         }

         if (param_5 != (uint*)0x0) {
            *param_5 = puVar1[6];
         }

         return *(undefined8*)( puVar1 + 4 );
      }

   }

   return 0;
}
long WebPIDecGetYUVA(uint *param_1, uint *param_2, undefined8 *param_3, undefined8 *param_4, undefined8 *param_5, uint *param_6, uint *param_7, uint *param_8, uint *param_9, uint *param_10) {
   uint *puVar1;
   long lVar2;
   if (param_1 == (uint*)0x0) {
      return 0;
   }

   lVar2 = *(long*)( param_1 + 0x20 );
   if (lVar2 != 0) {
      if (*param_1 < 3) {
         return 0;
      }

      puVar1 = *(uint**)( param_1 + 2 );
      if (*(long*)( param_1 + 0x76 ) != 0) {
         return 0;
      }

      if (puVar1 == (uint*)0x0) {
         return 0;
      }

      if (*puVar1 < 0xb) {
         return 0;
      }

      if (param_2 != (uint*)0x0) {
         *param_2 = param_1[10];
      }

      if (param_3 != (undefined8*)0x0) {
         *param_3 = *(undefined8*)( puVar1 + 6 );
      }

      if (param_4 != (undefined8*)0x0) {
         *param_4 = *(undefined8*)( puVar1 + 8 );
      }

      if (param_5 != (undefined8*)0x0) {
         *param_5 = *(undefined8*)( puVar1 + 10 );
      }

      if (param_6 != (uint*)0x0) {
         *param_6 = puVar1[1];
      }

      if (param_7 != (uint*)0x0) {
         *param_7 = puVar1[2];
      }

      if (param_8 != (uint*)0x0) {
         *param_8 = puVar1[0xc];
      }

      if (param_9 != (uint*)0x0) {
         *param_9 = puVar1[0xd];
      }

      if (param_10 != (uint*)0x0) {
         *param_10 = puVar1[0xf];
      }

      lVar2 = *(long*)( puVar1 + 4 );
   }

   return lVar2;
}
undefined8 WebPISetIOHooks(int *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   if (( param_1 != (int*)0x0 ) && ( *param_1 == 0 )) {
      *(undefined8*)( param_1 + 0x32 ) = param_2;
      *(undefined8*)( param_1 + 0x34 ) = param_3;
      *(undefined8*)( param_1 + 0x36 ) = param_4;
      *(undefined8*)( param_1 + 0x30 ) = param_5;
      return 1;
   }

   return 0;
}

