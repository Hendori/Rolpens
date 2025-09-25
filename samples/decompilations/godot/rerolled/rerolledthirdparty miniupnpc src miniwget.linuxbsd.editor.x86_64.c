void *getHTTPResponse(undefined4 param_1, int *param_2, int *param_3) {
   char *pcVar1;
   char cVar2;
   ushort *puVar3;
   bool bVar4;
   byte bVar5;
   int iVar6;
   int iVar7;
   void *pvVar8;
   long lVar9;
   ushort **ppuVar10;
   byte *pbVar11;
   ulong uVar12;
   uint uVar13;
   ulong uVar14;
   byte *pbVar15;
   int iVar16;
   char *__nptr;
   char *pcVar17;
   uint uVar18;
   uint uVar19;
   uint uVar20;
   ulong uVar21;
   ulong uVar22;
   uint uVar23;
   char *pcVar24;
   uint uVar25;
   ulong uVar26;
   int iVar27;
   long in_FS_OFFSET;
   bool bVar28;
   void *local_8d8;
   ulong local_8c8;
   uint local_8c0;
   void *local_8b8;
   uint local_8b0;
   uint local_8ac;
   int local_8a8;
   uint local_89c;
   ulong local_898;
   byte local_868[32];
   byte local_848[2056];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 != (int*)0x0) {
      *param_3 = -1;
   }

   local_8b8 = malloc(0x800);
   if (local_8b8 == (void*)0x0) {
      LAB_001009fe:*param_2 = -1;
   }
 else {
      local_8d8 = malloc(0x800);
      if (local_8d8 == (void*)0x0) {
         free(local_8b8);
         goto LAB_001009fe;
      }

      local_868[0] = 0;
      uVar14 = 0;
      uVar19 = 0;
      local_8c0 = 0x800;
      local_898 = 0x800;
      local_8ac = 0;
      local_89c = 0x800;
      local_8b0 = 0xffffffff;
      bVar4 = false;
      local_8a8 = 0;
      local_8c8 = 0x800;
      uVar22 = 0;
      LAB_001000e0:iVar6 = receivedata(param_1, local_848, 0x800, 5000);
      uVar21 = uVar22;
      if (iVar6 < 1) goto LAB_001003f9;
      uVar20 = (uint)uVar22;
      if (local_8a8 == 0) {
         uVar18 = iVar6 + local_8ac;
         pvVar8 = local_8b8;
         if (local_89c < uVar18) {
            local_898 = (ulong)uVar18;
            pvVar8 = realloc(local_8b8, local_898);
            local_89c = uVar18;
            if (pvVar8 == (void*)0x0) {
               free(local_8b8);
               free(local_8d8);
               *param_2 = -1;
               goto LAB_00100985;
            }

         }

         local_8b8 = pvVar8;
         uVar26 = (ulong)local_8ac;
         uVar12 = local_898;
         if (local_898 <= uVar26) {
            uVar12 = uVar26;
         }

         __memcpy_chk((long)local_8b8 + uVar26, local_848, (long)iVar6, uVar12 - uVar26);
         local_8ac = uVar18;
         if ((int)uVar18 < 2) goto LAB_001000e0;
         iVar6 = 0;
         do {
            iVar27 = iVar6 + 1;
            if (*(char*)( (long)local_8b8 + (long)iVar6 ) == '\r') {
               if (*(char*)( (long)local_8b8 + (long)iVar27 ) == '\n') {
                  if (( iVar6 + 2 < (int)uVar18 ) && ( *(char*)( (long)local_8b8 + (long)( iVar6 + 2 ) ) == '\r' )) {
                     if (( iVar6 + 3 < (int)uVar18 ) && ( *(char*)( (long)local_8b8 + (long)( iVar6 + 3 ) ) == '\n' )) {
                        iVar6 = iVar6 + 4;
                        bVar28 = iVar6 == 0;
                        local_8a8 = iVar6;
                     }
 else {
                        bVar28 = true;
                        iVar6 = iVar6 + 4;
                        local_8a8 = 0;
                     }

                  }
 else {
                     bVar28 = true;
                     iVar6 = iVar6 + 3;
                     local_8a8 = 0;
                  }

               }
 else {
                  LAB_001001db:bVar28 = true;
                  iVar6 = iVar6 + 2;
                  local_8a8 = 0;
               }

            }
 else if (*(char*)( (long)local_8b8 + (long)iVar6 ) == '\n') {
               if (*(char*)( (long)local_8b8 + (long)iVar27 ) != '\n') goto LAB_001001db;
               iVar6 = iVar6 + 2;
               bVar28 = iVar6 == 0;
               local_8a8 = iVar6;
            }
 else {
               bVar28 = true;
               iVar6 = iVar27;
               local_8a8 = 0;
            }

         }
 while ( ( iVar6 < (int)( uVar18 - 1 ) ) && ( bVar28 ) );
         if (local_8a8 == 0) {
            local_8a8 = 0;
            goto LAB_001000e0;
         }

         iVar6 = local_8a8 + -1;
         if (0 < iVar6) {
            uVar12 = 0;
            uVar23 = 0;
            uVar13 = 0;
            lVar9 = 0;
            do {
               uVar25 = uVar23 + 1;
               pcVar24 = (char*)( (long)(int)uVar23 + (long)local_8b8 );
               cVar2 = *pcVar24;
               iVar27 = (int)lVar9;
               bVar28 = bVar4;
               if (( iVar27 < 1 ) || ( iVar27 < (int)uVar13 )) {
                  if (( cVar2 == '\r' ) || ( cVar2 == '\n' )) {
                     if (( iVar27 == 0 ) && ( param_3 != (int*)0x0 )) {
                        if (1 < (int)uVar23) {
                           pcVar1 = (char*)( (long)local_8b8 + ( ulong )(uVar23 - 2) + 2 );
                           __nptr = (char*)( (long)local_8b8 + 1 );
                           do {
                              while (__nptr[-1] != ' ') {
                                 LAB_001002c0:__nptr = __nptr + 1;
                                 if (pcVar1 == __nptr) goto joined_r0x00100940;
                              }
;
                              if (-1 < *param_3) break;
                              if (8 < ( byte )(*__nptr - 0x31U)) goto LAB_001002c0;
                              pcVar17 = __nptr + 1;
                              lVar9 = strtol(__nptr, (char**)0x0, 10);
                              *param_3 = (int)lVar9;
                              __nptr = pcVar17;
                           }
 while ( pcVar1 != pcVar17 );
                           goto joined_r0x00100940;
                        }

                     }
 else {
                        if (( iVar27 < (int)uVar13 ) && ( iVar16= (int)uVar12,(int)uVar13 < iVar16 )) {
                           iVar7 = strncasecmp((char*)( (long)local_8b8 + lVar9 ), "content-length", (long)(int)( uVar13 - iVar27 ));
                           if (iVar7 == 0) {
                              lVar9 = strtol((char*)( (long)iVar16 + (long)local_8b8 ), (char**)0x0, 10);
                              local_8b0 = (uint)lVar9;
                           }
 else {
                              iVar27 = strncasecmp((char*)( (long)local_8b8 + lVar9 ), "transfer-encoding", (long)(int)( uVar13 - iVar27 ));
                              if (iVar27 == 0) {
                                 iVar27 = strncasecmp((char*)( (long)iVar16 + (long)local_8b8 ), "chunked", 7);
                                 bVar28 = true;
                                 if (iVar27 != 0) {
                                    bVar28 = bVar4;
                                 }

                              }

                           }

                        }

                        joined_r0x00100940:bVar4 = bVar28;
                        if ((int)uVar18 <= (int)uVar23) {
                           uVar12 = 0;
                           lVar9 = (long)(int)uVar23;
                           uVar13 = uVar23;
                           goto joined_r0x0010049b;
                        }

                     }

                     while (true) {
                        lVar9 = (long)(int)uVar23;
                        if (( *pcVar24 != '\r' ) && ( *pcVar24 != '\n' )) {
                           uVar12 = 0;
                           uVar13 = uVar23;
                           goto joined_r0x0010049b;
                        }

                        pcVar24 = pcVar24 + 1;
                        if (uVar18 == uVar25) break;
                        uVar23 = uVar25;
                        uVar25 = uVar25 + 1;
                     }
;
                     uVar12 = 0;
                     lVar9 = (long)(int)uVar18;
                     uVar13 = uVar18;
                     uVar25 = uVar23 + 2;
                  }

               }
 else if (cVar2 == ':') {
                  uVar26 = (ulong)(int)uVar25;
                  do {
                     uVar25 = (uint)uVar26;
                     uVar12 = uVar26 & 0xffffffff;
                     uVar13 = uVar23;
                     if (iVar6 <= (int)( uVar25 - 1 )) break;
                     pcVar24 = (char*)( (long)local_8b8 + uVar26 );
                     uVar26 = uVar26 + 1;
                  }
 while ( ( *pcVar24 == ' ' ) || ( *pcVar24 == '\t' ) );
               }
 else if (( cVar2 == '\r' ) || ( cVar2 == '\n' )) goto joined_r0x00100940;
               joined_r0x0010049b:uVar23 = uVar25;
            }
 while ( (int)uVar23 < iVar6 );
         }

         iVar6 = uVar18 - local_8a8;
         __memcpy_chk(local_848, (long)local_8a8 + (long)local_8b8, (long)iVar6, 0x800);
         if (!bVar4) goto LAB_0010034c;
         if (0 < iVar6) goto LAB_001004ff;
         bVar28 = local_8b0 <= uVar20;
      }
 else if (bVar4) {
         LAB_001004ff:iVar27 = 0;
         do {
            if (uVar19 == 0) {
               do {
                  uVar22 = uVar21;
                  if ((int)uVar14 == 0) {
                     if (local_848[iVar27] == 0xd) {
                        iVar27 = iVar27 + 1;
                     }

                     if (iVar6 <= iVar27) goto LAB_00100784;
                     lVar9 = (long)iVar27;
                     if (local_848[lVar9] == 10) {
                        iVar27 = iVar27 + 1;
                        goto LAB_00100770;
                     }

                  }
 else {
                     LAB_00100770:if (iVar6 <= iVar27) goto LAB_00100784;
                     lVar9 = (long)iVar27;
                  }

                  ppuVar10 = __ctype_b_loc();
                  puVar3 = *ppuVar10;
                  uVar20 = ( iVar6 + (int)uVar14 ) - iVar27;
                  pbVar11 = local_848 + lVar9;
                  while (true) {
                     if (( ( *(byte*)( (long)puVar3 + (long)(char)*pbVar11 * 2 + 1 ) & 0x10 ) == 0 ) || ( 0x1e < (uint)uVar14 )) goto LAB_0010067d;
                     uVar18 = (uint)uVar14 + 1;
                     local_868[uVar14] = *pbVar11;
                     iVar27 = iVar27 + 1;
                     pbVar11 = pbVar11 + 1;
                     local_868[uVar18] = 0;
                     if (uVar20 == uVar18) break;
                     uVar14 = (ulong)uVar18;
                  }
;
                  uVar14 = (ulong)uVar20;
                  LAB_0010067d:if (iVar6 <= iVar27) goto LAB_00100784;
                  pbVar11 = local_848 + iVar27;
                  while (( *pbVar11 != 0xd && ( *pbVar11 != 10 ) )) {
                     iVar27 = iVar27 + 1;
                     pbVar11 = pbVar11 + 1;
                     if (iVar27 == iVar6) goto LAB_00100784;
                  }
;
                  if (iVar6 <= iVar27) goto LAB_00100784;
                  bVar5 = local_848[iVar27];
                  if (bVar5 == 0xd) {
                     iVar27 = iVar27 + 1;
                     if (iVar6 <= iVar27) goto LAB_00100784;
                     bVar5 = local_848[iVar27];
                  }

               }
 while ( bVar5 != 10 );
               if ((int)uVar14 == 0) goto LAB_001003f9;
               pbVar11 = local_868;
               uVar19 = 0;
               pbVar15 = pbVar11 + uVar14;
               do {
                  while (true) {
                     bVar5 = *pbVar11;
                     if (( byte )(bVar5 - 0x30) < 10) break;
                     pbVar11 = pbVar11 + 1;
                     uVar19 = uVar19 * 0x10 + -0x57 + (int)(char)( bVar5 | 0x20 );
                     if (pbVar15 == pbVar11) goto LAB_00100731;
                  }
;
                  pbVar11 = pbVar11 + 1;
                  uVar19 = uVar19 * 0x10 + -0x30 + (int)(char)bVar5;
               }
 while ( pbVar15 != pbVar11 );
               LAB_00100731:local_868[0] = 0;
               iVar27 = iVar27 + 1;
               if (uVar19 == 0) goto LAB_001003f9;
               uVar14 = 0;
            }

            uVar20 = iVar6 - iVar27;
            if (uVar19 < ( uint )(iVar6 - iVar27)) {
               uVar20 = uVar19;
            }

            uVar18 = (int)uVar21 + uVar20;
            uVar22 = (ulong)uVar18;
            pvVar8 = local_8d8;
            if (local_8c0 < uVar18) {
               local_8c0 = local_8b0;
               if (local_8b0 < uVar18) {
                  local_8c0 = uVar18;
               }

               if ((int)local_8b0 < 0) {
                  local_8c0 = uVar18;
               }

               local_8c8 = (ulong)local_8c0;
               pvVar8 = realloc(local_8d8, local_8c8);
               if (pvVar8 == (void*)0x0) goto LAB_00100998;
            }

            local_8d8 = pvVar8;
            uVar12 = local_8c8;
            if (local_8c8 <= uVar21) {
               uVar12 = uVar21;
            }

            __memcpy_chk((long)local_8d8 + uVar21, local_848 + iVar27, uVar20, uVar12 - uVar21);
            iVar27 = iVar27 + uVar20;
            uVar19 = uVar19 - uVar20;
            uVar21 = uVar22;
         }
 while ( iVar27 < iVar6 );
         LAB_00100784:bVar4 = true;
         bVar28 = local_8b0 <= (uint)uVar22;
         uVar21 = uVar22;
      }
 else {
         LAB_0010034c:uVar18 = iVar6 + uVar20;
         uVar21 = (ulong)uVar18;
         if ((int)local_8b0 < 1) {
            if (local_8c0 < uVar18) {
               LAB_00100380:local_8c0 = (uint)uVar21;
               LAB_00100385:local_8c8 = (ulong)local_8c0;
               pvVar8 = realloc(local_8d8, local_8c8);
               if (pvVar8 == (void*)0x0) {
                  LAB_00100998:free(local_8d8);
                  free(local_8b8);
                  *param_2 = -1;
                  goto LAB_00100985;
               }

               bVar28 = local_8b0 <= (uint)uVar21;
               local_8d8 = pvVar8;
            }
 else {
               bVar28 = local_8b0 <= uVar18;
            }

         }
 else if (local_8b0 < uVar18) {
            uVar21 = (ulong)local_8b0;
            bVar28 = true;
            iVar6 = local_8b0 - uVar20;
            if (local_8c0 < local_8b0) {
               uVar21 = (ulong)local_8b0;
               goto LAB_00100380;
            }

         }
 else {
            if (local_8c0 < uVar18) {
               local_8c0 = local_8b0;
               if (local_8b0 < uVar18) {
                  local_8c0 = uVar18;
               }

               goto LAB_00100385;
            }

            bVar28 = local_8b0 == uVar18;
         }

         uVar12 = local_8c8;
         if (local_8c8 <= uVar22) {
            uVar12 = uVar22;
         }

         __memcpy_chk((long)local_8d8 + uVar22, local_848, (long)iVar6, uVar12 - uVar22);
         bVar4 = false;
      }

      uVar22 = uVar21;
      if (( (int)local_8b0 < 1 ) || ( !bVar28 )) goto LAB_001000e0;
      LAB_001003f9:free(local_8b8);
      *param_2 = (int)uVar21;
      if ((int)uVar21 != 0) goto LAB_00100417;
      free(local_8d8);
   }

   LAB_00100985:local_8d8 = (void*)0x0;
   LAB_00100417:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_8d8;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 miniwget3_constprop_0(undefined8 param_1, undefined2 param_2, undefined8 param_3, undefined4 *param_4, char *param_5, socklen_t param_6, undefined4 param_7, undefined8 param_8) {
   int __fd;
   int iVar1;
   uint uVar2;
   ssize_t sVar3;
   undefined8 uVar4;
   char *pcVar5;
   long in_FS_OFFSET;
   socklen_t local_8cc;
   sockaddr local_8c8[8];
   undefined1 local_848[2056];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_4 = 0;
   __fd = connecthostport(param_1, param_2, param_7);
   if (-1 < __fd) {
      if (param_5 != (char*)0x0) {
         local_8cc = 0x80;
         iVar1 = getsockname(__fd, local_8c8, &local_8cc);
         if (iVar1 < 0) {
            perror("getsockname");
         }
 else {
            iVar1 = getnameinfo(local_8c8, local_8cc, param_5, param_6, (char*)0x0, 0, 3);
            if (iVar1 != 0) {
               pcVar5 = gai_strerror(iVar1);
               __fprintf_chk(_stderr, 2, "getnameinfo() failed : %s\n", pcVar5);
            }

         }

      }

      uVar2 = __snprintf_chk(local_848, 0x800, 2, 0x800, "GET %s HTTP/%s\r\nHost: %s:%d\r\nConnection: close\r\nUser-Agent: Godot Engine/1.0 UPnP/1.1 MiniUPnPc/2.2.8\r\n\r\n", param_3, &_LC6, param_1, param_2);
      if (uVar2 < 0x800) {
         iVar1 = 0;
         if (uVar2 != 0) {
            do {
               sVar3 = send(__fd, local_848 + iVar1, (long)(int)( uVar2 - iVar1 ), 0);
               if ((int)sVar3 < 0) {
                  perror("send");
                  close(__fd);
                  goto LAB_00100bcf;
               }

               iVar1 = iVar1 + (int)sVar3;
            }
 while ( iVar1 < (int)uVar2 );
         }

         uVar4 = getHTTPResponse(__fd, param_4, param_8);
         close(__fd);
         goto LAB_00100b69;
      }

      close(__fd);
   }

   LAB_00100bcf:uVar4 = 0;
   LAB_00100b69:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 parseURL(char *param_1, undefined1 (*param_2)[16], short *param_3, undefined8 *param_4, uint *param_5) {
   char *pcVar1;
   char cVar2;
   short sVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   char *pcVar7;
   char *pcVar8;
   undefined8 uVar9;
   ulong uVar10;
   char *pcVar11;
   long in_FS_OFFSET;
   char local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( ( param_1 == (char*)0x0 ) || ( pcVar7 = strstr(param_1, "://") ),pcVar7 == (char*)0x0 ) ) || ( *param_1 != 'h' ) ) || ( ( param_1[1] != 't' || ( param_1[2] != 't' ) ) )) {
      LAB_00100c2d:uVar9 = 0;
   }
 else {
      param_2[4][0] = 0;
      pcVar1 = pcVar7 + 3;
      *param_2 = (undefined1[16])0x0;
      for (int i = 0; i < 3; i++) {
         param_2[( i + 1 )] = (undefined1[16])0;
      }

      iVar4 = (int)pcVar1;
      if (pcVar7[3] == '[') {
         pcVar7 = strchr(pcVar1, 0x25);
         pcVar8 = strchr(pcVar1, 0x5d);
         if (( ( pcVar7 != (char*)0x0 ) && ( pcVar8 != (char*)0x0 ) ) && ( ( pcVar7 < pcVar8 && ( param_5 != (uint*)0x0 ) ) )) {
            pcVar11 = pcVar7 + 1;
            if (( pcVar7[1] == '2' ) && ( pcVar7[2] == '5' )) {
               pcVar11 = pcVar7 + 3;
            }

            iVar5 = (int)pcVar8 - (int)pcVar11;
            if (0xf < iVar5) {
               iVar5 = 0xf;
            }

            __memcpy_chk(local_58, pcVar11, (long)iVar5, 0x10);
            local_58[iVar5] = '\0';
            uVar6 = if_nametoindex(local_58);
            *param_5 = uVar6;
            if (uVar6 == 0) {
               uVar10 = strtoul(local_58, (char**)0x0, 10);
               *param_5 = (uint)uVar10;
            }

         }

         pcVar7 = strchr(pcVar1, 0x2f);
         if (( pcVar7 == (char*)0x0 ) || ( pcVar8 == (char*)0x0 )) goto LAB_00100ca3;
         iVar4 = ( (int)pcVar8 + 1 ) - iVar4;
         if (0x40 < iVar4) {
            iVar4 = 0x40;
         }

         strncpy((char*)param_2, pcVar1, (long)iVar4);
         if (pcVar8[1] != ':') goto LAB_00100d56;
         *param_3 = 0;
         sVar3 = 0;
         cVar2 = pcVar8[2];
         pcVar1 = pcVar8 + 2;
         while (( byte )(cVar2 - 0x30U) < 10) {
            *param_3 = sVar3 * 10;
            sVar3 = sVar3 * 10 + -0x30 + (short)*pcVar1;
            *param_3 = sVar3;
            cVar2 = pcVar1[1];
            pcVar1 = pcVar1 + 1;
         }
;
      }
 else {
         pcVar7 = strchr(pcVar1, 0x2f);
         LAB_00100ca3:pcVar8 = strchr(pcVar1, 0x3a);
         if (pcVar7 == (char*)0x0) goto LAB_00100c2d;
         if (( pcVar8 == (char*)0x0 ) || ( pcVar7 < pcVar8 )) {
            iVar4 = (int)pcVar7 - iVar4;
            if (0x40 < iVar4) {
               iVar4 = 0x40;
            }

            strncpy((char*)param_2, pcVar1, (long)iVar4);
            LAB_00100d56:*param_3 = 0x50;
         }
 else {
            iVar4 = (int)pcVar8 - iVar4;
            if (0x40 < iVar4) {
               iVar4 = 0x40;
            }

            strncpy((char*)param_2, pcVar1, (long)iVar4);
            *param_3 = 0;
            sVar3 = 0;
            cVar2 = pcVar8[1];
            pcVar1 = pcVar8 + 1;
            while (( byte )(cVar2 - 0x30U) < 10) {
               *param_3 = sVar3 * 10;
               sVar3 = sVar3 * 10 + -0x30 + (short)*pcVar1;
               *param_3 = sVar3;
               cVar2 = pcVar1[1];
               pcVar1 = pcVar1 + 1;
            }
;
         }

      }

      *param_4 = pcVar7;
      uVar9 = 1;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar9;
}
undefined8 miniwget(undefined8 param_1, undefined4 *param_2, undefined4 param_3, undefined8 param_4) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined4 local_7c[2];
   undefined2 local_72;
   undefined8 local_70;
   undefined1 local_68[72];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_2 = 0;
   local_7c[0] = param_3;
   iVar1 = parseURL(param_1, local_68, &local_72, &local_70, local_7c);
   uVar2 = 0;
   if (iVar1 != 0) {
      uVar2 = miniwget3_constprop_0(local_68, local_72, local_70, param_2, 0, 0, local_7c[0], param_4);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 miniwget_getaddr(undefined8 param_1, undefined4 *param_2, undefined1 *param_3, undefined4 param_4, undefined4 param_5, undefined8 param_6) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined4 local_8c[2];
   undefined2 local_82;
   undefined8 local_80;
   undefined1 local_78[72];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_2 = 0;
   if (param_3 != (undefined1*)0x0) {
      *param_3 = 0;
   }

   local_8c[0] = param_5;
   iVar1 = parseURL(param_1, local_78, &local_82, &local_80, local_8c);
   uVar2 = 0;
   if (iVar1 != 0) {
      uVar2 = miniwget3_constprop_0(local_78, local_82, local_80, param_2, param_3, param_4, local_8c[0], param_6);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 miniwget3_constprop_0_cold(void) {
   int unaff_EBX;
   long in_FS_OFFSET;
   long in_stack_000008b8;
   perror("send");
   close(unaff_EBX);
   if (in_stack_000008b8 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

