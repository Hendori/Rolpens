/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int connectToMiniSSDPD(char *param_1) {
   int __fd;
   int iVar1;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined8 uStack_a0;
   sockaddr local_98[7];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   __fd = socket(1, 1, 0);
   if (__fd < 0) {
      perror("socket(unix)");
   }
 else {
      local_a8 = __LC2;
      uStack_a0 = _UNK_00101cb8;
      iVar1 = setsockopt(__fd, 1, 0x14, &local_a8, 0x10);
      if (iVar1 < 0) {
         perror("setsockopt SO_RCVTIMEO unix");
      }

      local_a8 = __LC2;
      uStack_a0 = _UNK_00101cb8;
      iVar1 = setsockopt(__fd, 1, 0x15, &local_a8, 0x10);
      if (iVar1 < 0) {
         perror("setsockopt SO_SNDTIMEO unix");
      }

      if (param_1 == (char*)0x0) {
         param_1 = "/var/run/minissdpd.sock";
      }

      local_98[0].sa_family = 1;
      strncpy(local_98[0].sa_data, param_1, 0x6c);
      iVar1 = connect(__fd, local_98, 0x6e);
      if (-1 < iVar1) goto LAB_001000e1;
      close(__fd);
   }

   __fd = -0x65;
   LAB_001000e1:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return __fd;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint disconnectFromMiniSSDPD(int param_1) {
   int iVar1;
   iVar1 = close(param_1);
   return iVar1 >> 0x1f & 0xffffff9b;
}
undefined8 requestDevicesFromMiniSSDPD(int param_1, long *param_2) {
   uint uVar1;
   size_t sVar2;
   ssize_t sVar3;
   byte *pbVar4;
   byte *pbVar5;
   undefined8 uVar6;
   byte *pbVar7;
   long in_FS_OFFSET;
   byte local_138;
   byte local_137[255];
   byte local_38[8];
   long local_30;
   pbVar4 = &local_138;
   pbVar5 = &local_138;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   sVar2 = strlen((char*)param_2);
   uVar1 = (uint)sVar2;
   if (uVar1 == 8) {
      local_138 = ( *param_2 == 0x6c6c613a70647373 ) * '\x02' + 1;
      LAB_00100277:uVar6 = 0xfe;
      goto LAB_001001cc;
   }

   local_138 = 1;
   if (uVar1 < 0x10000000) {
      if (0x1fffff < uVar1) {
         uVar6 = 0xfb;
         pbVar4 = local_137;
         goto LAB_001001a1;
      }

      if (0x3fff < uVar1) {
         uVar6 = 0xfc;
         goto LAB_001001af;
      }

      uVar6 = 0xfd;
      pbVar7 = local_137;
      if (uVar1 < 0x80) goto LAB_00100277;
   }
 else {
      uVar6 = 0xfa;
      pbVar4 = local_137 + 1;
      local_137[0] = ( byte )(sVar2 >> 0x1c) & 0xf | 0x80;
      LAB_001001a1:*pbVar4 = ( byte )(sVar2 >> 0x15) | 0x80;
      LAB_001001af:pbVar7 = pbVar4 + 2;
      pbVar4[1] = ( byte )(sVar2 >> 0xe) | 0x80;
   }

   *pbVar7 = ( byte )(sVar2 >> 7) | 0x80;
   pbVar5 = pbVar7;
   LAB_001001cc:pbVar4 = pbVar5 + 2;
   pbVar5[1] = (byte)sVar2 & 0x7f;
   if (local_38 < pbVar4 + ( sVar2 & 0xffffffff )) {
      uVar6 = 0xffffff99;
   }
 else {
      __memcpy_chk(pbVar4, param_2, sVar2 & 0xffffffff, uVar6);
      sVar3 = write(param_1, &local_138, (long)( pbVar4 + ( sVar2 & 0xffffffff ) ) - (long)&local_138);
      if (sVar3 < 0) {
         perror("minissdpc.c: write()");
         uVar6 = 0xffffff9b;
      }
 else {
         uVar6 = 0;
      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
undefined8 *receiveDevicesFromMiniSSDPD(int param_1, undefined4 *param_2) {
   long lVar1;
   size_t __size;
   ulong uVar2;
   void *__ptr;
   ulong uVar3;
   ulong uVar4;
   void *pvVar5;
   ulong uVar6;
   ulong uVar7;
   undefined8 *__ptr_00;
   long lVar8;
   ulong uVar9;
   ulong uVar10;
   ulong uVar11;
   uint uVar12;
   int iVar13;
   byte *pbVar14;
   size_t sVar15;
   uint uVar16;
   uint uVar17;
   uint uVar18;
   void *pvVar19;
   uint uVar20;
   long lVar21;
   long in_FS_OFFSET;
   uint local_18c;
   undefined8 *local_180;
   byte local_148[264];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = read(param_1, local_148, 0x100);
   if ((long)uVar2 < 1) {
      perror("minissdpc.c: read()");
      if (param_2 != (undefined4*)0x0) {
         *param_2 = 0xffffff9b;
      }

      local_180 = (undefined8*)0x0;
   }
 else {
      if (local_148[0] == 0) {
         __ptr_00 = (undefined8*)0x0;
      }
 else {
         local_18c = 0;
         uVar20 = 1;
         local_180 = (undefined8*)0x0;
         do {
            uVar16 = 0;
            do {
               uVar12 = uVar20 + 1;
               if ((long)uVar2 <= (long)(int)uVar20) {
                  uVar2 = read(param_1, local_148, 0x100);
                  if ((long)uVar2 < 1) goto LAB_001009f0;
                  uVar12 = 1;
                  uVar20 = 0;
               }

               uVar11 = (ulong)uVar20;
               uVar16 = uVar16 << 7 | local_148[uVar11] & 0x7f;
            }
 while ( ( uVar16 < 0x2000000 ) && ( uVar20 = uVar12 ),(char)local_148[uVar11] < '\0' );
            if ((long)uVar2 < 1) {
               LAB_001009f0:if (param_2 != (undefined4*)0x0) {
                  *param_2 = 0xffffff98;
               }

               goto LAB_0010096a;
            }

            uVar11 = (ulong)uVar16;
            __ptr = malloc(uVar11);
            if (__ptr == (void*)0x0) {
               if (param_2 != (undefined4*)0x0) {
                  *param_2 = 0xffffff9a;
               }

               goto LAB_0010096a;
            }

            uVar9 = uVar11;
            pvVar5 = __ptr;
            uVar20 = uVar16;
            if (uVar16 != 0) {
               do {
                  if ((long)(int)uVar12 < (long)uVar2) {
                     uVar4 = uVar2 - uVar12;
                     pbVar14 = local_148 + uVar12;
                  }
 else {
                     uVar4 = read(param_1, local_148, 0x100);
                     if ((long)uVar4 < 1) goto LAB_00100948;
                     uVar12 = 0;
                     uVar2 = uVar4;
                     pbVar14 = local_148;
                  }

                  if ((long)(ulong)uVar20 <= (long)uVar4) {
                     uVar4 = (ulong)uVar20;
                  }

                  uVar10 = uVar4 & 0xffffffff;
                  __memcpy_chk(pvVar5, pbVar14, uVar10, uVar9);
                  uVar7 = uVar11;
                  if (uVar11 < uVar9) {
                     uVar7 = uVar9;
                  }

                  uVar3 = ( uVar10 + uVar7 ) - uVar9;
                  if (uVar3 < uVar7) {
                     uVar3 = uVar7;
                  }

                  uVar12 = uVar12 + (int)uVar4;
                  uVar20 = uVar20 - (int)uVar4;
                  uVar9 = uVar3 + ( uVar9 - ( uVar10 + uVar7 ) );
                  pvVar5 = (void*)( (long)pvVar5 + uVar10 );
               }
 while ( uVar20 != 0 );
               if (0 < (long)uVar2) goto LAB_001004b6;
               LAB_00100948:if (param_2 != (undefined4*)0x0) {
                  *param_2 = 0xffffff98;
               }

               LAB_00100960:free(__ptr);
               goto LAB_0010096a;
            }

            LAB_001004b6:uVar17 = 0;
            do {
               uVar20 = uVar12 + 1;
               uVar18 = uVar12;
               if ((long)uVar2 <= (long)(int)uVar12) {
                  uVar2 = read(param_1, local_148, 0x100);
                  if ((long)uVar2 < 1) goto LAB_00100948;
                  uVar18 = 0;
                  uVar20 = 1;
               }

               uVar12 = uVar20;
               uVar17 = uVar17 << 7 | local_148[uVar18] & 0x7f;
            }
 while ( ( (char)local_148[uVar18] < '\0' ) && ( uVar17 < 0x2000000 ) );
            if ((long)uVar2 < 1) goto LAB_00100948;
            uVar9 = (ulong)uVar17;
            pvVar5 = malloc(uVar9);
            if (pvVar5 == (void*)0x0) {
               if (param_2 != (undefined4*)0x0) {
                  *param_2 = 0xffffff9a;
               }

               goto LAB_00100960;
            }

            uVar4 = uVar9;
            pvVar19 = pvVar5;
            uVar20 = uVar17;
            if (uVar17 != 0) {
               do {
                  if ((long)(int)uVar12 < (long)uVar2) {
                     uVar7 = uVar2 - uVar12;
                     pbVar14 = local_148 + uVar12;
                  }
 else {
                     uVar7 = read(param_1, local_148, 0x100);
                     if ((long)uVar7 < 1) goto LAB_001009a0;
                     uVar12 = 0;
                     uVar2 = uVar7;
                     pbVar14 = local_148;
                  }

                  if ((long)(ulong)uVar20 <= (long)uVar7) {
                     uVar7 = (ulong)uVar20;
                  }

                  uVar3 = uVar7 & 0xffffffff;
                  __memcpy_chk(pvVar19, pbVar14, uVar3, uVar4);
                  uVar10 = uVar9;
                  if (uVar9 < uVar4) {
                     uVar10 = uVar4;
                  }

                  uVar6 = ( uVar3 + uVar10 ) - uVar4;
                  if (uVar6 < uVar10) {
                     uVar6 = uVar10;
                  }

                  uVar12 = uVar12 + (int)uVar7;
                  uVar20 = uVar20 - (int)uVar7;
                  uVar4 = uVar6 + ( uVar4 - ( uVar3 + uVar10 ) );
                  pvVar19 = (void*)( (long)pvVar19 + uVar3 );
               }
 while ( uVar20 != 0 );
               if (0 < (long)uVar2) goto LAB_00100647;
               LAB_001009a0:if (param_2 != (undefined4*)0x0) {
                  *param_2 = 0xffffff98;
               }

               LAB_001009b8:free(pvVar5);
               goto LAB_00100960;
            }

            LAB_00100647:uVar4 = (ulong)uVar12;
            uVar12 = 0;
            do {
               uVar20 = (uint)uVar4;
               uVar4 = ( ulong )(uVar20 + 1);
               if ((long)uVar2 <= (long)(int)uVar20) {
                  uVar2 = read(param_1, local_148, 0x100);
                  if ((long)uVar2 < 1) goto LAB_001009a0;
                  uVar4 = 1;
                  uVar20 = 0;
               }

               uVar12 = uVar12 << 7 | local_148[uVar20] & 0x7f;
            }
 while ( ( (char)local_148[uVar20] < '\0' ) && ( uVar12 < 0x2000000 ) );
            uVar20 = (uint)uVar4;
            if ((long)uVar2 < 1) goto LAB_001009a0;
            __size = uVar9 + uVar11 + 0x2b + (ulong)uVar12;
            __ptr_00 = (undefined8*)malloc(__size);
            if (__ptr_00 == (undefined8*)0x0) {
               if (param_2 != (undefined4*)0x0) {
                  *param_2 = 0xffffff9a;
               }

               goto LAB_001009b8;
            }

            lVar21 = (long)__ptr_00 + 0x24;
            __ptr_00[1] = lVar21;
            uVar7 = __size - 0x24;
            *__ptr_00 = local_180;
            sVar15 = __size;
            if (__size < uVar7) {
               sVar15 = uVar7;
            }

            lVar1 = uVar11 + 1 + sVar15;
            lVar8 = uVar11 + 1 + lVar21;
            __ptr_00[2] = lVar8;
            __memcpy_chk(lVar21, __ptr, uVar11, uVar7);
            uVar10 = lVar1 - uVar7;
            *(undefined1*)( (long)__ptr_00 + uVar11 + 0x24 ) = 0;
            if (uVar10 < sVar15) {
               uVar10 = sVar15;
            }

            __memcpy_chk(lVar8, pvVar5, uVar9, uVar10 + ( uVar7 - lVar1 ));
            *(undefined1*)( (long)__ptr_00 + ( ulong )(uVar16 + uVar17 + 1) + 0x24 ) = 0;
            free(__ptr);
            free(pvVar5);
            lVar8 = uVar9 + uVar11 + 2;
            lVar1 = lVar8 + sVar15;
            uVar11 = lVar1 - uVar7;
            if (uVar11 < sVar15) {
               uVar11 = sVar15;
            }

            lVar21 = lVar21 + lVar8;
            __ptr_00[3] = lVar21;
            uVar11 = uVar11 + ( uVar7 - lVar1 );
            uVar18 = uVar12;
            if (uVar12 != 0) {
               do {
                  iVar13 = (int)uVar4;
                  if ((long)iVar13 < (long)uVar2) {
                     uVar9 = uVar2 - uVar4;
                     pbVar14 = local_148 + uVar4;
                  }
 else {
                     uVar9 = read(param_1, local_148, 0x100);
                     if ((long)uVar9 < 1) goto LAB_001009cd;
                     iVar13 = 0;
                     uVar2 = uVar9;
                     pbVar14 = local_148;
                  }

                  if ((long)(ulong)uVar18 <= (long)uVar9) {
                     uVar9 = (ulong)uVar18;
                  }

                  uVar7 = uVar9 & 0xffffffff;
                  __memcpy_chk(lVar21, pbVar14, uVar7, uVar11);
                  sVar15 = __size;
                  if (__size < uVar11) {
                     sVar15 = uVar11;
                  }

                  uVar10 = ( uVar7 + sVar15 ) - uVar11;
                  if (uVar10 < sVar15) {
                     uVar10 = sVar15;
                  }

                  lVar21 = lVar21 + uVar7;
                  uVar20 = iVar13 + (int)uVar9;
                  uVar4 = (ulong)uVar20;
                  uVar11 = uVar10 + ( uVar11 - ( uVar7 + sVar15 ) );
                  uVar18 = uVar18 - (int)uVar9;
               }
 while ( uVar18 != 0 );
               if ((long)uVar2 < 1) {
                  LAB_001009cd:if (param_2 != (undefined4*)0x0) {
                     *param_2 = 0xffffff98;
                  }

                  free(__ptr_00);
                  goto LAB_0010096a;
               }

            }

            local_18c = local_18c + 1;
            *(undefined1*)( (long)__ptr_00 + ( ulong )(uVar16 + uVar17 + 2 + uVar12) + 0x24 ) = 0;
            *(undefined4*)( __ptr_00 + 4 ) = 0;
            local_180 = __ptr_00;
         }
 while ( local_148[0] != local_18c );
      }

      local_180 = __ptr_00;
      if (param_2 != (undefined4*)0x0) {
         *param_2 = 0;
      }

   }

   LAB_0010096a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_180;
}
undefined8 getDevicesFromMiniSSDPD(undefined8 param_1, undefined8 param_2, int *param_3) {
   int __fd;
   int iVar1;
   undefined8 uVar2;
   __fd = connectToMiniSSDPD(param_2);
   if (-1 < __fd) {
      iVar1 = requestDevicesFromMiniSSDPD(__fd, param_1);
      if (iVar1 < 0) {
         if (param_3 != (int*)0x0) {
            *param_3 = iVar1;
         }

         uVar2 = 0;
      }
 else {
         uVar2 = receiveDevicesFromMiniSSDPD(__fd, param_3);
      }

      close(__fd);
      return uVar2;
   }

   if (param_3 != (int*)0x0) {
      *param_3 = __fd;
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */long *ssdpDiscoverDevices(long *param_1, uint param_2, char *param_3, int param_4, int param_5, byte param_6, undefined4 *param_7, int param_8) {
   ulong uVar1;
   long lVar2;
   char cVar3;
   bool bVar4;
   undefined1 auVar5[16];
   int iVar6;
   uint uVar7;
   ssize_t sVar8;
   long *plVar9;
   size_t sVar10;
   ulong uVar11;
   char *pcVar12;
   long lVar13;
   socklen_t __len;
   int iVar14;
   size_t __n;
   long lVar15;
   sockaddr *psVar16;
   char *pcVar17;
   size_t __size;
   long lVar18;
   int iVar19;
   ushort uVar20;
   int iVar21;
   long in_FS_OFFSET;
   bool bVar22;
   byte bVar23;
   int local_7f4;
   char *local_7f0;
   long *local_7e8;
   char *local_7d8;
   uint local_7c8;
   int local_7c4;
   int local_7c0;
   int local_7bc;
   char *local_7a8;
   int local_79c;
   long local_798;
   long local_790;
   ulong local_778;
   long local_770;
   long local_768;
   byte local_74c[4];
   undefined4 local_748;
   undefined4 local_744;
   int local_740;
   undefined4 uStack_73c;
   timespec local_738;
   undefined1 local_728[16];
   undefined1 local_718[16];
   undefined1 local_708[16];
   char local_6f8[15];
   undefined1 local_6e9;
   int local_6e4;
   sockaddr local_6c8;
   undefined8 uStack_6b8;
   char local_648[1544];
   long local_40;
   bVar23 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_748 = 0;
   local_744 = 1;
   if (param_7 != (undefined4*)0x0) {
      *param_7 = 0xffffffff;
   }

   if (param_4 == 1) {
      param_4 = 0x76c;
   }

   uVar20 = (ushort)param_4;
   local_74c[0] = param_6;
   if (param_5 == 0) {
      local_7f4 = socket(2, 2, 0);
      if (local_7f4 < 0) {
         plVar9 = (long*)FUN_00101b73();
         return plVar9;
      }

      psVar16 = &local_6c8;
      for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
         psVar16.sa_family = 0;
         for (int i = 0; i < 6; i++) {
            psVar16.sa_data[i] = '\0';
         }

         psVar16 = (sockaddr*)( psVar16[-(ulong)bVar23].sa_data + 6 );
      }

      local_6c8.sa_family = 2;
      if (param_4 - 1U < 0xffff) {
         local_6c8.sa_data._0_2_ = uVar20 << 8 | uVar20 >> 8;
      }

      iVar6 = setsockopt(local_7f4, 1, 2, &local_744, 4);
      if (iVar6 < 0) {
         plVar9 = (long*)FUN_00101b14();
         return plVar9;
      }

      iVar6 = setsockopt(local_7f4, 0, 0x21, local_74c, 1);
      if (iVar6 < 0) {
         perror("setsockopt(IP_MULTICAST_TTL,...)");
         if (param_3 != (char*)0x0) {
            cVar3 = *param_3;
            goto joined_r0x00101b57;
         }

      }
 else if (param_3 != (char*)0x0) {
         cVar3 = *param_3;
         joined_r0x00101b57:if (cVar3 != '\0') {
            iVar6 = inet_pton(2, param_3, &local_740);
            if (iVar6 < 1) {
               local_740 = -1;
            }
 else if (local_740 != -1) {
               local_6c8.sa_data[2] = (undefined1)local_740;
               local_6c8.sa_data[3] = local_740._1_1_;
               local_6c8.sa_data[4] = local_740._2_1_;
               local_6c8.sa_data[5] = local_740._3_1_;
               iVar6 = setsockopt(local_7f4, 0, 0x20, &local_740, 4);
               if (iVar6 < 0) {
                  perror("setsockopt IP_MULTICAST_IF");
               }

               goto LAB_00100de6;
            }

            local_738.tv_sec._0_4_ = 0x28;
            pcVar17 = strncpy(local_6f8, param_3, 0x10);
            local_6e9 = 0;
            iVar6 = ioctl(local_7f4, 0x8915, pcVar17, &local_738);
            if (iVar6 < 0) {
               perror("ioctl(...SIOCGIFADDR...)");
            }
 else {
               local_728._0_12_ = ZEXT812(0);
               local_740 = local_6e4;
               auVar5._4_8_ = local_728._8_8_;
               auVar5._0_4_ = local_6e4;
               auVar5._12_4_ = 0;
               local_728 = auVar5 << 0x20;
               uVar7 = if_nametoindex(param_3);
               local_728._8_4_ = uVar7;
               if (uVar7 != 0) {
                  iVar6 = setsockopt(local_7f4, 0, 0x20, local_728, 0xc);
                  if (iVar6 < 0) {
                     plVar9 = (long*)FUN_00101aab();
                     return plVar9;
                  }

                  goto LAB_00100de6;
               }

               if (param_7 != (undefined4*)0x0) {
                  *param_7 = 0xffffff99;
               }

               __fprintf_chk(_stderr, 2, "Invalid multicast ip address / interface name %s\n", param_3);
            }

            local_7e8 = (long*)0x0;
            goto LAB_00100cb0;
         }

      }

      LAB_00100de6:__len = 0x10;
      LAB_00100deb:iVar6 = bind(local_7f4, &local_6c8, __len);
      if (iVar6 != 0) {
         if (param_7 != (undefined4*)0x0) {
            *param_7 = 0xffffff9b;
         }

         perror("bind");
         close(local_7f4);
         local_7e8 = (long*)0x0;
         goto LAB_00100cb9;
      }

      if (param_7 != (undefined4*)0x0) {
         *param_7 = 0;
      }

      if (param_2 < 1000) {
         local_778 = 1;
         local_7c8 = 1000;
      }
 else {
         local_778 = (ulong)param_2 / 1000;
         local_7c8 = param_2;
      }

      lVar13 = *param_1;
      if (lVar13 == 0) {
         local_7e8 = (long*)0x0;
      }
 else {
         lVar15 = 0;
         bVar4 = false;
         local_7e8 = (long*)0x0;
         local_79c = 0;
         if (param_5 == 0) goto LAB_00100fdc;
         LAB_00100e77:if (bVar4) {
            uVar7 = __snprintf_chk(local_648, 0x600, 2, 0x600, "M-SEARCH * HTTP/1.1\r\nHOST: %s:1900\r\nST: %s\r\nMAN: \"ssdp:discover\"\r\nMX: %u\r\n\r\n", "[FF02::C]", lVar13, local_778);
            if (uVar7 < 0x600) {
               pcVar17 = "FF02::C";
               LAB_00100ef1:do {
                  local_708 = (undefined1[16])0x0;
                  local_718 = (undefined1[16])0x0;
                  local_728._0_12_ = ZEXT412(2) << 0x40;
                  local_728._12_4_ = 0;
                  iVar6 = getaddrinfo(pcVar17, "1900", (addrinfo*)local_728, (addrinfo**)&local_740);
                  if (iVar6 != 0) {
                     if (param_7 != (undefined4*)0x0) {
                        *param_7 = 0xffffff9b;
                     }

                     pcVar17 = gai_strerror(iVar6);
                     __fprintf_chk(_stderr, 2, "getaddrinfo: %s\n", pcVar17);
                     goto LAB_00100cb0;
                  }

                  lVar13 = CONCAT44(uStack_73c, local_740);
                  if (lVar13 == 0) {
                     freeaddrinfo((addrinfo*)0x0);
                     LAB_001010a9:if (param_7 != (undefined4*)0x0) {
                        *param_7 = 0xffffff9b;
                     }

                     bVar22 = param_8 == 0;
                     lVar13 = param_1[lVar15 + 1];
                     joined_r0x001010d1:if (lVar13 == 0) goto LAB_001010e0;
                  }
 else {
                     bVar22 = false;
                     do {
                        sVar8 = sendto(local_7f4, local_648, (long)(int)uVar7, 0, *(sockaddr**)( lVar13 + 0x18 ), *(socklen_t*)( lVar13 + 0x10 ));
                        uVar7 = (uint)sVar8;
                        if ((int)uVar7 < 0) {
                           perror("sendto");
                        }
 else {
                           bVar22 = true;
                        }

                        lVar13 = *(long*)( lVar13 + 0x28 );
                     }
 while ( lVar13 != 0 );
                     freeaddrinfo((addrinfo*)CONCAT44(uStack_73c, local_740));
                     if (!bVar22) goto LAB_001010a9;
                     if (param_8 != 0) {
                        bVar22 = false;
                        lVar13 = param_1[lVar15 + 1];
                        goto joined_r0x001010d1;
                     }

                     bVar22 = true;
                     LAB_001010e0:iVar6 = clock_gettime(1, &local_738);
                     if (iVar6 == 0) {
                        local_768 = CONCAT44(local_738.tv_sec._4_4_, (undefined4)local_738.tv_sec);
                        local_770 = local_738.tv_nsec / 1000;
                     }
 else {
                        local_770 = 0;
                        local_768 = 0;
                     }

                     local_790 = 0;
                     local_798 = 0;
                     LAB_0010115f:do {
                        iVar6 = receivedata(local_7f4, local_648, 0x600, local_7c8, &local_748);
                        if (iVar6 < 0) {
                           if (param_7 != (undefined4*)0x0) {
                              *param_7 = 0xffffff9b;
                           }

                           goto LAB_00100cb0;
                        }

                        if (iVar6 == 0) {
                           if (( local_7e8 != (long*)0x0 ) && ( bVar22 )) {
                              if (param_7 != (undefined4*)0x0) {
                                 *param_7 = 0;
                              }

                              goto LAB_00100cb0;
                           }

                           break;
                        }

                        iVar14 = 0;
                        local_7c4 = 0;
                        lVar13 = 0;
                        iVar21 = 0;
                        local_7bc = 0;
                        local_7c0 = 0;
                        local_7a8 = (char*)0x0;
                        local_7f0 = (char*)0x0;
                        local_7d8 = (char*)0x0;
                        do {
                           while (true) {
                              cVar3 = local_648[lVar13];
                              iVar19 = (int)lVar13;
                              if (cVar3 != '\r') break;
                              LAB_00101528:if (iVar21 != 0) {
                                 pcVar17 = local_648 + (long)iVar21 + 1;
                                 do {
                                    pcVar12 = pcVar17;
                                    iVar21 = iVar21 + 1;
                                    pcVar17 = pcVar12 + 1;
                                 }
 while ( *pcVar12 == ' ' );
                                 pcVar17 = local_648 + iVar14;
                                 iVar14 = strncasecmp(pcVar17, "location:", 9);
                                 if (iVar14 == 0) {
                                    local_7c0 = iVar19 - iVar21;
                                    local_7d8 = pcVar12;
                                 }
 else {
                                    iVar14 = strncasecmp(pcVar17, "st:", 3);
                                    if (iVar14 == 0) {
                                       local_7bc = iVar19 - iVar21;
                                       local_7f0 = pcVar12;
                                    }
 else {
                                       iVar14 = strncasecmp(pcVar17, "usn:", 4);
                                       if (iVar14 == 0) {
                                          local_7c4 = iVar19 - iVar21;
                                          local_7a8 = pcVar12;
                                       }

                                    }

                                 }

                              }

                              iVar14 = iVar19 + 1;
                              iVar21 = 0;
                              LAB_00101230:lVar13 = lVar13 + 1;
                              if (iVar6 <= (int)lVar13) goto LAB_0010125e;
                           }
;
                           if (cVar3 != ':') {
                              if (cVar3 == '\n') goto LAB_00101528;
                              goto LAB_00101230;
                           }

                           if (iVar21 == 0) {
                              iVar21 = iVar19;
                           }

                           lVar13 = lVar13 + 1;
                        }
 while ( (int)lVar13 < iVar6 );
                        LAB_0010125e:pcVar17 = local_7d8;
                        if (( local_7f0 != (char*)0x0 ) && ( local_7d8 != (char*)0x0 )) {
                           __n = (size_t)local_7c0;
                           if (local_7e8 != (long*)0x0) {
                              plVar9 = local_7e8;
                              do {
                                 pcVar12 = (char*)plVar9[1];
                                 iVar6 = strncmp(pcVar12, local_7d8, __n);
                                 if (( iVar6 == 0 ) && ( pcVar12[__n] == '\0' )) {
                                    pcVar12 = (char*)plVar9[2];
                                    iVar6 = strncmp(pcVar12, local_7f0, (long)local_7bc);
                                    if (( ( iVar6 == 0 ) && ( pcVar12[local_7bc] == '\0' ) ) && ( ( ( pcVar12 = (char*)plVar9[3] ),local_7c4 == 0 || ( iVar6 = strncmp(pcVar12, local_7a8, (long)local_7c4) ),iVar6 == 0 ) ) && ( pcVar12[local_7c4] == '\0' )) goto LAB_0010115f;
                                 }

                                 plVar9 = (long*)*plVar9;
                              }
 while ( plVar9 != (long*)0x0 );
                           }

                           local_7d8 = (char*)(long)local_7c4;
                           lVar13 = (long)local_7bc;
                           __size = __n + 0x2b + lVar13 + (long)local_7d8;
                           plVar9 = (long*)malloc(__size);
                           if (plVar9 == (long*)0x0) {
                              if (param_7 != (undefined4*)0x0) {
                                 *param_7 = 0xffffff9a;
                              }

                              goto LAB_00100cb0;
                           }

                           lVar15 = (long)plVar9 + 0x24;
                           plVar9[1] = lVar15;
                           *plVar9 = (long)local_7e8;
                           sVar10 = 0x24;
                           if (0x23 < __size) {
                              sVar10 = __size;
                           }

                           uVar1 = sVar10 - 0x24;
                           if (__size < uVar1) {
                              __size = uVar1;
                           }

                           lVar2 = __n + 1 + __size;
                           lVar18 = __n + 1 + lVar15;
                           plVar9[2] = lVar18;
                           plVar9[3] = lVar18 + 1 + lVar13;
                           __memcpy_chk(lVar15, pcVar17, __n);
                           uVar11 = lVar2 - uVar1;
                           *(undefined1*)( (long)plVar9 + __n + 0x24 ) = 0;
                           if (uVar11 < __size) {
                              uVar11 = __size;
                           }

                           __memcpy_chk(lVar18, local_7f0, lVar13, ( uVar1 - lVar2 ) + uVar11);
                           local_7bc = local_7c0 + 1 + local_7bc;
                           *(undefined1*)( (long)plVar9 + (long)local_7bc + 0x24 ) = 0;
                           if (local_7a8 != (char*)0x0) {
                              memcpy((void*)plVar9[3], local_7a8, (size_t)local_7d8);
                           }

                           *(undefined1*)( (long)plVar9 + (long)( local_7bc + 1 + local_7c4 ) + 0x24 ) = 0;
                           *(undefined4*)( plVar9 + 4 ) = local_748;
                           local_7e8 = plVar9;
                        }

                        iVar6 = clock_gettime(1, &local_738);
                        if (iVar6 == 0) {
                           local_798 = CONCAT44(local_738.tv_sec._4_4_, (undefined4)local_738.tv_sec);
                           local_790 = local_738.tv_nsec / 1000;
                        }
 else if (iVar6 < 0) goto LAB_0010115f;
                     }
 while ( ( local_790 - local_770 ) / 1000 + ( local_798 - local_768 ) * 1000 <= (long)(int)local_7c8 );
                  }

                  if (param_5 == 0) {
                     local_79c = local_79c + 1;
                  }
 else if (bVar4) {
                     local_79c = local_79c + 1;
                     bVar4 = false;
                  }
 else {
                     bVar4 = true;
                  }

                  lVar15 = (long)local_79c;
                  lVar13 = param_1[lVar15];
                  if (lVar13 == 0) goto LAB_00100cb0;
                  if (param_5 != 0) goto LAB_00100e77;
                  LAB_00100fdc:uVar7 = __snprintf_chk(local_648, 0x600, 2, 0x600, "M-SEARCH * HTTP/1.1\r\nHOST: %s:1900\r\nST: %s\r\nMAN: \"ssdp:discover\"\r\nMX: %u\r\n\r\n", "239.255.255.250", lVar13, local_778);
                  if (0x5ff < uVar7) break;
                  pcVar17 = "239.255.255.250";
               }
 while ( true );
            }

         }
 else {
            uVar7 = __snprintf_chk(local_648, 0x600, 2, 0x600, "M-SEARCH * HTTP/1.1\r\nHOST: %s:1900\r\nST: %s\r\nMAN: \"ssdp:discover\"\r\nMX: %u\r\n\r\n", "[FF05::C]", lVar13, local_778);
            if (uVar7 < 0x600) {
               pcVar17 = "FF05::C";
               goto LAB_00100ef1;
            }

         }

         if (param_7 != (undefined4*)0x0) {
            *param_7 = 0xffffff9a;
         }

      }

   }
 else {
      local_7f4 = socket(10, 2, 0);
      if (local_7f4 < 0) {
         plVar9 = (long*)FUN_00101b73();
         return plVar9;
      }

      psVar16 = &local_6c8;
      for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
         psVar16.sa_family = 0;
         for (int i = 0; i < 6; i++) {
            psVar16.sa_data[i] = '\0';
         }

         psVar16 = (sockaddr*)( psVar16[-(ulong)bVar23].sa_data + 6 );
      }

      local_6c8.sa_family = 10;
      if (param_4 - 1U < 0xffff) {
         local_6c8.sa_data._0_2_ = uVar20 << 8 | uVar20 >> 8;
      }

      local_6c8.sa_data[6] = in6addr_any;
      local_6c8.sa_data[7] = in6addr_any_1;
      local_6c8.sa_data[8] = cRam000000000010206a;
      local_6c8.sa_data[9] = cRam000000000010206b;
      local_6c8.sa_data[10] = cRam000000000010206c;
      local_6c8.sa_data[0xb] = cRam000000000010206d;
      local_6c8.sa_data[0xc] = cRam000000000010206e;
      local_6c8.sa_data[0xd] = cRam000000000010206f;
      uStack_6b8 = _if_nametoindex;
      iVar6 = setsockopt(local_7f4, 1, 2, &local_744, 4);
      if (iVar6 < 0) {
         plVar9 = (long*)FUN_00101b14();
         return plVar9;
      }

      local_728._1_3_ = 0;
      local_728[0] = local_74c[0];
      iVar6 = setsockopt(local_7f4, 0x29, 0x12, local_728, 4);
      if (iVar6 < 0) {
         perror("setsockopt(IPV6_MULTICAST_HOPS,...)");
      }

      if (( param_3 == (char*)0x0 ) || ( *param_3 == '\0' )) {
         LAB_00101098:__len = 0x1c;
         goto LAB_00100deb;
      }

      uVar7 = if_nametoindex(param_3);
      local_728._0_4_ = uVar7;
      if (uVar7 != 0) {
         iVar6 = setsockopt(local_7f4, 0x29, 0x11, local_728, 4);
         if (iVar6 < 0) {
            perror("setsockopt IPV6_MULTICAST_IF");
         }

         goto LAB_00101098;
      }

      if (param_7 != (undefined4*)0x0) {
         *param_7 = 0xffffff99;
      }

      __fprintf_chk(_stderr, 2, "Invalid multicast interface name %s\n", param_3);
      local_7e8 = (long*)0x0;
   }

   LAB_00100cb0:close(local_7f4);
   LAB_00100cb9:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_7e8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 connectToMiniSSDPD_cold(void) {
   long in_FS_OFFSET;
   long in_stack_00000088;
   perror("socket(unix)");
   if (in_stack_00000088 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0xffffff9b;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 requestDevicesFromMiniSSDPD_cold(void) {
   long in_FS_OFFSET;
   long in_stack_00000108;
   perror("minissdpc.c: write()");
   if (in_stack_00000108 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0xffffff9b;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 receiveDevicesFromMiniSSDPD_cold(void) {
   undefined4 *unaff_RBP;
   long in_FS_OFFSET;
   long in_stack_00000178;
   perror("minissdpc.c: read()");
   if (unaff_RBP != (undefined4*)0x0) {
      *unaff_RBP = 0xffffff9b;
   }

   if (in_stack_00000178 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ssdpDiscoverDevices_cold(void) {
   long in_FS_OFFSET;
   int unaff_retaddr;
   long in_stack_000007b8;
   perror("ioctl(...SIOCGIFADDR...)");
   close(unaff_retaddr);
   if (in_stack_000007b8 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */long *FUN_00101aab(void) {
   ulong uVar1;
   long lVar2;
   char cVar3;
   bool bVar4;
   int iVar5;
   uint uVar6;
   ssize_t sVar7;
   long *plVar8;
   size_t sVar9;
   ulong uVar10;
   char *pcVar11;
   int iVar12;
   size_t __n;
   long lVar13;
   sockaddr *unaff_RBP;
   char *pcVar14;
   size_t __size;
   long lVar15;
   int iVar16;
   addrinfo *paVar17;
   long lVar18;
   int iVar19;
   long in_FS_OFFSET;
   bool bVar20;
   int unaff_retaddr;
   char *pcStack0000000000000008;
   long *plStack0000000000000010;
   char *pcStack0000000000000020;
   uint in_stack_00000030;
   int iStack0000000000000034;
   int iStack0000000000000038;
   int iStack000000000000003c;
   long *in_stack_00000040;
   char *pcStack0000000000000050;
   int in_stack_00000058;
   int iStack000000000000005c;
   long lStack0000000000000060;
   long lStack0000000000000068;
   undefined4 *in_stack_00000078;
   ulong uStack0000000000000080;
   long lStack0000000000000088;
   long lStack0000000000000090;
   undefined4 in_stack_000000b0;
   addrinfo *in_stack_000000b8;
   long in_stack_000000c0;
   long in_stack_000000c8;
   undefined1 auStack00000000000000d0[12];
   undefined4 uStack00000000000000dc;
   undefined1 in_stack_000000e0[16];
   undefined1 in_stack_000000f0[16];
   long in_stack_000007b8;
   int in_stack_00000808;
   perror("setsockopt IP_MULTICAST_IF");
   iVar5 = bind(unaff_retaddr, unaff_RBP, 0x10);
   if (iVar5 == 0) {
      if (in_stack_00000078 != (undefined4*)0x0) {
         *in_stack_00000078 = 0;
      }

      if (in_stack_00000030 < 1000) {
         uStack0000000000000080 = 1;
         in_stack_00000030 = 1000;
      }
 else {
         uStack0000000000000080 = (ulong)in_stack_00000030 / 1000;
      }

      lVar18 = *in_stack_00000040;
      if (lVar18 == 0) {
         plStack0000000000000010 = (long*)0x0;
      }
 else {
         lVar13 = 0;
         bVar4 = false;
         plStack0000000000000010 = (long*)0x0;
         iStack000000000000005c = 0;
         if (in_stack_00000058 == 0) goto LAB_00100fdc;
         LAB_00100e77:if (bVar4) {
            uVar6 = __snprintf_chk(&stack0x000001b0, 0x600, 2, 0x600, "M-SEARCH * HTTP/1.1\r\nHOST: %s:1900\r\nST: %s\r\nMAN: \"ssdp:discover\"\r\nMX: %u\r\n\r\n", "[FF02::C]", lVar18, uStack0000000000000080);
            if (uVar6 < 0x600) {
               pcVar14 = "FF02::C";
               LAB_00100ef1:do {
                  in_stack_000000f0 = (undefined1[16])0x0;
                  in_stack_000000e0 = (undefined1[16])0x0;
                  auStack00000000000000d0 = ZEXT412(2) << 0x40;
                  uStack00000000000000dc = 0;
                  iVar5 = getaddrinfo(pcVar14, "1900", (addrinfo*)&stack0x000000d0, &stack0x000000b8);
                  if (iVar5 != 0) {
                     if (in_stack_00000078 != (undefined4*)0x0) {
                        *in_stack_00000078 = 0xffffff9b;
                     }

                     pcVar14 = gai_strerror(iVar5);
                     __fprintf_chk(_stderr, 2, "getaddrinfo: %s\n", pcVar14);
                     goto LAB_00100cb0;
                  }

                  if (in_stack_000000b8 == (addrinfo*)0x0) {
                     freeaddrinfo((addrinfo*)0x0);
                     LAB_001010a9:if (in_stack_00000078 != (undefined4*)0x0) {
                        *in_stack_00000078 = 0xffffff9b;
                     }

                     bVar20 = in_stack_00000808 == 0;
                     lVar18 = in_stack_00000040[lVar13 + 1];
                     joined_r0x001010d1:if (lVar18 == 0) goto LAB_001010e0;
                  }
 else {
                     bVar20 = false;
                     paVar17 = in_stack_000000b8;
                     do {
                        sVar7 = sendto(unaff_retaddr, &stack0x000001b0, (long)(int)uVar6, 0, paVar17.ai_addr, paVar17.ai_addrlen);
                        uVar6 = (uint)sVar7;
                        if ((int)uVar6 < 0) {
                           perror("sendto");
                        }
 else {
                           bVar20 = true;
                        }

                        paVar17 = paVar17.ai_next;
                     }
 while ( paVar17 != (addrinfo*)0x0 );
                     freeaddrinfo(in_stack_000000b8);
                     if (!bVar20) goto LAB_001010a9;
                     if (in_stack_00000808 != 0) {
                        bVar20 = false;
                        lVar18 = in_stack_00000040[lVar13 + 1];
                        goto joined_r0x001010d1;
                     }

                     bVar20 = true;
                     LAB_001010e0:iVar5 = clock_gettime(1, (timespec*)&stack0x000000c0);
                     if (iVar5 == 0) {
                        lStack0000000000000090 = in_stack_000000c0;
                        lStack0000000000000088 = in_stack_000000c8 / 1000;
                     }
 else {
                        lStack0000000000000088 = 0;
                        lStack0000000000000090 = 0;
                     }

                     lStack0000000000000068 = 0;
                     lStack0000000000000060 = 0;
                     LAB_0010115f:do {
                        iVar5 = receivedata(unaff_retaddr, &stack0x000001b0, 0x600, in_stack_00000030, &stack0x000000b0);
                        if (iVar5 < 0) {
                           if (in_stack_00000078 != (undefined4*)0x0) {
                              *in_stack_00000078 = 0xffffff9b;
                           }

                           goto LAB_00100cb0;
                        }

                        if (iVar5 == 0) {
                           if (( plStack0000000000000010 != (long*)0x0 ) && ( bVar20 )) {
                              if (in_stack_00000078 != (undefined4*)0x0) {
                                 *in_stack_00000078 = 0;
                              }

                              goto LAB_00100cb0;
                           }

                           break;
                        }

                        iVar12 = 0;
                        iStack0000000000000034 = 0;
                        lVar18 = 0;
                        iVar19 = 0;
                        iStack000000000000003c = 0;
                        iStack0000000000000038 = 0;
                        pcStack0000000000000050 = (char*)0x0;
                        pcStack0000000000000008 = (char*)0x0;
                        pcStack0000000000000020 = (char*)0x0;
                        do {
                           while (true) {
                              cVar3 = ( &stack0x000001b0 )[lVar18];
                              iVar16 = (int)lVar18;
                              if (cVar3 != '\r') break;
                              LAB_00101528:if (iVar19 != 0) {
                                 pcVar14 = &stack0x000001b1 + iVar19;
                                 do {
                                    pcVar11 = pcVar14;
                                    iVar19 = iVar19 + 1;
                                    pcVar14 = pcVar11 + 1;
                                 }
 while ( *pcVar11 == ' ' );
                                 pcVar14 = &stack0x000001b0 + iVar12;
                                 iVar12 = strncasecmp(pcVar14, "location:", 9);
                                 if (iVar12 == 0) {
                                    iStack0000000000000038 = iVar16 - iVar19;
                                    pcStack0000000000000020 = pcVar11;
                                 }
 else {
                                    iVar12 = strncasecmp(pcVar14, "st:", 3);
                                    if (iVar12 == 0) {
                                       iStack000000000000003c = iVar16 - iVar19;
                                       pcStack0000000000000008 = pcVar11;
                                    }
 else {
                                       iVar12 = strncasecmp(pcVar14, "usn:", 4);
                                       if (iVar12 == 0) {
                                          iStack0000000000000034 = iVar16 - iVar19;
                                          pcStack0000000000000050 = pcVar11;
                                       }

                                    }

                                 }

                              }

                              iVar12 = iVar16 + 1;
                              iVar19 = 0;
                              LAB_00101230:lVar18 = lVar18 + 1;
                              if (iVar5 <= (int)lVar18) goto LAB_0010125e;
                           }
;
                           if (cVar3 != ':') {
                              if (cVar3 == '\n') goto LAB_00101528;
                              goto LAB_00101230;
                           }

                           if (iVar19 == 0) {
                              iVar19 = iVar16;
                           }

                           lVar18 = lVar18 + 1;
                        }
 while ( (int)lVar18 < iVar5 );
                        LAB_0010125e:pcVar14 = pcStack0000000000000020;
                        if (( pcStack0000000000000008 != (char*)0x0 ) && ( pcStack0000000000000020 != (char*)0x0 )) {
                           __n = (size_t)iStack0000000000000038;
                           if (plStack0000000000000010 != (long*)0x0) {
                              plVar8 = plStack0000000000000010;
                              do {
                                 pcVar11 = (char*)plVar8[1];
                                 iVar5 = strncmp(pcVar11, pcStack0000000000000020, __n);
                                 if (( iVar5 == 0 ) && ( pcVar11[__n] == '\0' )) {
                                    pcVar11 = (char*)plVar8[2];
                                    iVar5 = strncmp(pcVar11, pcStack0000000000000008, (long)iStack000000000000003c);
                                    if (( ( iVar5 == 0 ) && ( pcVar11[iStack000000000000003c] == '\0' ) ) && ( ( ( pcVar11 = (char*)plVar8[3] ),iStack0000000000000034 == 0 || ( iVar5 = strncmp(pcVar11, pcStack0000000000000050, (long)iStack0000000000000034) ),iVar5 == 0 ) ) && ( pcVar11[iStack0000000000000034] == '\0' )) goto LAB_0010115f;
                                 }

                                 plVar8 = (long*)*plVar8;
                              }
 while ( plVar8 != (long*)0x0 );
                           }

                           pcStack0000000000000020 = (char*)(long)iStack0000000000000034;
                           lVar18 = (long)iStack000000000000003c;
                           __size = __n + 0x2b + lVar18 + (long)pcStack0000000000000020;
                           plVar8 = (long*)malloc(__size);
                           if (plVar8 == (long*)0x0) {
                              if (in_stack_00000078 != (undefined4*)0x0) {
                                 *in_stack_00000078 = 0xffffff9a;
                              }

                              goto LAB_00100cb0;
                           }

                           lVar13 = (long)plVar8 + 0x24;
                           plVar8[1] = lVar13;
                           *plVar8 = (long)plStack0000000000000010;
                           sVar9 = 0x24;
                           if (0x23 < __size) {
                              sVar9 = __size;
                           }

                           uVar1 = sVar9 - 0x24;
                           if (__size < uVar1) {
                              __size = uVar1;
                           }

                           lVar2 = __n + 1 + __size;
                           lVar15 = __n + 1 + lVar13;
                           plVar8[2] = lVar15;
                           plVar8[3] = lVar15 + 1 + lVar18;
                           __memcpy_chk(lVar13, pcVar14, __n);
                           uVar10 = lVar2 - uVar1;
                           *(undefined1*)( (long)plVar8 + __n + 0x24 ) = 0;
                           if (uVar10 < __size) {
                              uVar10 = __size;
                           }

                           __memcpy_chk(lVar15, pcStack0000000000000008, lVar18, ( uVar1 - lVar2 ) + uVar10);
                           iStack000000000000003c = iStack0000000000000038 + 1 + iStack000000000000003c;
                           *(undefined1*)( (long)plVar8 + (long)iStack000000000000003c + 0x24 ) = 0;
                           if (pcStack0000000000000050 != (char*)0x0) {
                              memcpy((void*)plVar8[3], pcStack0000000000000050, (size_t)pcStack0000000000000020);
                           }

                           *(undefined1*)( (long)plVar8 + (long)( iStack000000000000003c + 1 + iStack0000000000000034 ) + 0x24 ) = 0;
                           *(undefined4*)( plVar8 + 4 ) = in_stack_000000b0;
                           plStack0000000000000010 = plVar8;
                        }

                        iVar5 = clock_gettime(1, (timespec*)&stack0x000000c0);
                        if (iVar5 == 0) {
                           lStack0000000000000060 = in_stack_000000c0;
                           lStack0000000000000068 = in_stack_000000c8 / 1000;
                        }
 else if (iVar5 < 0) goto LAB_0010115f;
                     }
 while ( ( lStack0000000000000068 - lStack0000000000000088 ) / 1000 + ( lStack0000000000000060 - lStack0000000000000090 ) * 1000 <= (long)(int)in_stack_00000030 );
                  }

                  if (in_stack_00000058 == 0) {
                     iStack000000000000005c = iStack000000000000005c + 1;
                  }
 else if (bVar4) {
                     iStack000000000000005c = iStack000000000000005c + 1;
                     bVar4 = false;
                  }
 else {
                     bVar4 = true;
                  }

                  lVar13 = (long)iStack000000000000005c;
                  lVar18 = in_stack_00000040[lVar13];
                  if (lVar18 == 0) goto LAB_00100cb0;
                  if (in_stack_00000058 != 0) goto LAB_00100e77;
                  LAB_00100fdc:uVar6 = __snprintf_chk(&stack0x000001b0, 0x600, 2, 0x600, "M-SEARCH * HTTP/1.1\r\nHOST: %s:1900\r\nST: %s\r\nMAN: \"ssdp:discover\"\r\nMX: %u\r\n\r\n", "239.255.255.250", lVar18, uStack0000000000000080);
                  if (0x5ff < uVar6) break;
                  pcVar14 = "239.255.255.250";
               }
 while ( true );
            }

         }
 else {
            uVar6 = __snprintf_chk(&stack0x000001b0, 0x600, 2, 0x600, "M-SEARCH * HTTP/1.1\r\nHOST: %s:1900\r\nST: %s\r\nMAN: \"ssdp:discover\"\r\nMX: %u\r\n\r\n", "[FF05::C]", lVar18, uStack0000000000000080);
            if (uVar6 < 0x600) {
               pcVar14 = "FF05::C";
               goto LAB_00100ef1;
            }

         }

         if (in_stack_00000078 != (undefined4*)0x0) {
            *in_stack_00000078 = 0xffffff9a;
         }

      }

      LAB_00100cb0:close(unaff_retaddr);
   }
 else {
      if (in_stack_00000078 != (undefined4*)0x0) {
         *in_stack_00000078 = 0xffffff9b;
      }

      perror("bind");
      close(unaff_retaddr);
      plStack0000000000000010 = (long*)0x0;
   }

   if (in_stack_000007b8 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return plStack0000000000000010;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 FUN_00101b14(void) {
   long in_FS_OFFSET;
   int unaff_retaddr;
   undefined4 *in_stack_00000078;
   long in_stack_000007b8;
   if (in_stack_00000078 != (undefined4*)0x0) {
      *in_stack_00000078 = 0xffffff9b;
   }

   perror("setsockopt(SO_REUSEADDR,...)");
   close(unaff_retaddr);
   if (in_stack_000007b8 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 FUN_00101b73(void) {
   long in_FS_OFFSET;
   undefined4 *in_stack_00000078;
   long in_stack_000007b8;
   if (in_stack_00000078 != (undefined4*)0x0) {
      *in_stack_00000078 = 0xffffff9b;
   }

   perror("socket");
   if (in_stack_000007b8 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

