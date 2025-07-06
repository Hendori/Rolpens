undefined8 dgram_new(long param_1) {
   long lVar1;
   lVar1 = CRYPTO_zalloc(0x108, "crypto/bio/bss_dgram.c", 0x10a);
   if (lVar1 != 0) {
      *(long*)( param_1 + 0x40 ) = lVar1;
      return 1;
   }
   return 0;
}undefined8 dgram_sendmmsg(long param_1, undefined8 *param_2, long param_3, ulong param_4, undefined8 param_5, ulong *param_6) {
   short sVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   int iVar6;
   undefined8 uVar7;
   uint *puVar8;
   int *piVar9;
   long *plVar10;
   undefined8 *puVar11;
   ulong uVar12;
   ulong uVar13;
   uint *puVar14;
   undefined8 *puVar15;
   undefined8 *puVar16;
   undefined4 uVar17;
   long *plVar18;
   ulong *puVar19;
   long in_FS_OFFSET;
   undefined8 local_1e48[128];
   undefined8 local_1a48[320];
   long local_1048[4];
   long local_1028[2];
   uint local_1018[1014];
   long local_40;
   puVar16 = local_1e48;
   puVar15 = local_1e48;
   puVar11 = local_1e48;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar7 = 1;
   if (param_4 != 0) {
      lVar3 = *(long*)( param_1 + 0x40 );
      uVar13 = 0x40;
      if (param_4 < 0x41) {
         uVar13 = param_4;
      }
      iVar6 = *(int*)( lVar3 + 0xe0 );
      if ((long)param_4 < 0) {
         uVar13 = 0x40;
      }
      if (*(char*)( lVar3 + 0x104 ) == '\0') {
         if (iVar6 == 0) {
            uVar12 = 0;
            plVar10 = local_1048;
            puVar16 = param_2;
            LAB_001004a8:*puVar11 = *puVar16;
            puVar11[1] = puVar16[1];
            if (puVar16[2] == 0) {
               *plVar10 = 0;
               LAB_001004e5:uVar17 = 0;
            } else {
               sVar1 = *(short*)( lVar3 + 0x70 );
               *plVar10 = puVar16[2];
               uVar17 = 0x10;
               if (( sVar1 != 2 ) && ( uVar17 = sVar1 != 10 )) goto LAB_001004e5;
            }
            lVar4 = puVar16[3];
            *(undefined4*)( plVar10 + 1 ) = uVar17;
            plVar10[2] = (long)puVar11;
            plVar10[3] = 1;
            if (lVar4 == 0) goto LAB_00100536;
            local_1028[uVar12 * 8] = (long)( local_1a48 + uVar12 * 5 );
            local_1028[uVar12 * 8 + 1] = 0x28;
            local_1018[uVar12 * 0x10] = 0;
            LAB_00100441:ERR_new();
            uVar7 = 0x563;
            goto LAB_0010019d;
         }
         uVar12 = 0;
         plVar10 = local_1048;
         puVar16 = param_2;
         do {
            uVar7 = *puVar16;
            lVar3 = puVar16[3];
            plVar10[2] = (long)puVar15;
            *plVar10 = 0;
            *puVar15 = uVar7;
            uVar7 = puVar16[1];
            *(undefined4*)( plVar10 + 1 ) = 0;
            puVar15[1] = uVar7;
            plVar10[3] = 1;
            if (lVar3 != 0) {
               local_1028[uVar12 * 8] = (long)( local_1a48 + uVar12 * 5 );
               local_1028[uVar12 * 8 + 1] = 0x28;
               local_1018[uVar12 * 0x10] = 0;
               goto LAB_00100441;
            }
            uVar12 = uVar12 + 1;
            puVar16 = (undefined8*)( (long)puVar16 + param_3 );
            puVar15 = puVar15 + 2;
            plVar10[4] = 0;
            plVar10[5] = 0;
            *(undefined4*)( plVar10 + 6 ) = 0;
            plVar10 = plVar10 + 8;
         } while ( uVar13 != uVar12 );
      } else {
         plVar10 = local_1048;
         puVar15 = local_1a48;
         plVar18 = plVar10 + uVar13 * 8;
         puVar11 = param_2;
         do {
            *puVar16 = *puVar11;
            puVar16[1] = puVar11[1];
            if (( iVar6 == 0 ) && ( puVar11[2] != 0 )) {
               sVar1 = *(short*)( lVar3 + 0x70 );
               *plVar10 = puVar11[2];
               uVar17 = 0x10;
               if (( sVar1 != 2 ) && ( uVar17 = sVar1 != 10 )) goto LAB_00100136;
            } else {
               *plVar10 = 0;
               LAB_00100136:uVar17 = 0;
            }
            *(undefined4*)( plVar10 + 1 ) = uVar17;
            lVar4 = puVar11[3];
            plVar10[2] = (long)puVar16;
            plVar10[3] = 1;
            if (lVar4 != 0) {
               sVar1 = *(short*)( lVar3 + 0x70 );
               plVar10[4] = (long)puVar15;
               plVar10[5] = 0x28;
               *(undefined4*)( plVar10 + 6 ) = 0;
               if (sVar1 == 2) {
                  puVar15[1] = _LC2;
                  uVar17 = *(undefined4*)( lVar4 + 4 );
                  *(undefined4*)( puVar15 + 3 ) = 0;
                  *(undefined4*)( (long)puVar15 + 0x14 ) = uVar17;
                  *(undefined4*)( puVar15 + 2 ) = 0;
                  sVar1 = *(short*)( lVar4 + 2 );
                  *puVar15 = 0x1c;
                  if (( sVar1 != 0 ) && ( sVar1 != *(short*)( lVar3 + 0x72 ) )) {
                     ERR_new();
                     uVar7 = 0x4b9;
                     goto LAB_001002cd;
                  }
                  plVar10[5] = 0x20;
                  goto LAB_0010020f;
               }
               if (sVar1 == 10) {
                  puVar15[1] = _LC1;
                  uVar7 = *(undefined8*)( lVar4 + 8 );
                  uVar5 = *(undefined8*)( lVar4 + 0x10 );
                  *(undefined4*)( puVar15 + 4 ) = 0;
                  puVar15[2] = uVar7;
                  puVar15[3] = uVar5;
                  sVar1 = *(short*)( lVar4 + 2 );
                  *puVar15 = 0x24;
                  if (( sVar1 == 0 ) || ( sVar1 == *(short*)( lVar3 + 0x72 ) )) {
                     if (( *(int*)( lVar4 + 0x18 ) == 0 ) || ( *(int*)( lVar4 + 0x18 ) == *(int*)( lVar3 + 0x88 ) )) goto LAB_0010020f;
                     ERR_new();
                     uVar7 = 0x505;
                  } else {
                     ERR_new();
                     uVar7 = 0x4ff;
                  }
                  LAB_001002cd:ERR_set_debug("crypto/bio/bss_dgram.c", uVar7, "pack_local");
                  ERR_set_error(0x20, 0x96, 0);
               }
               ERR_new();
               uVar7 = 0x56a;
               LAB_0010019d:ERR_set_debug("crypto/bio/bss_dgram.c", uVar7, "dgram_sendmmsg");
               ERR_set_error(0x20, 0x6f, 0);
               goto LAB_001001b5;
            }
            plVar10[4] = 0;
            plVar10[5] = 0;
            *(undefined4*)( plVar10 + 6 ) = 0;
            LAB_0010020f:plVar10 = plVar10 + 8;
            puVar11 = (undefined8*)( (long)puVar11 + param_3 );
            puVar16 = puVar16 + 2;
            puVar15 = puVar15 + 5;
         } while ( plVar18 != plVar10 );
      }
      LAB_00100227:iVar6 = sendmmsg(*(undefined4*)( param_1 + 0x38 ), local_1048);
      if (iVar6 < 0) {
         ERR_new();
         ERR_set_debug("crypto/bio/bss_dgram.c", 0x574, "dgram_sendmmsg");
         piVar9 = __errno_location();
         ERR_set_error(2, *piVar9, 0);
         LAB_001001b5:param_4 = 0;
         uVar7 = 0;
      } else {
         param_4 = (ulong)iVar6;
         if (param_4 != 0) {
            puVar8 = local_1018 + 2;
            puVar19 = param_2 + 1;
            puVar14 = puVar8 + param_4 * 0x10;
            do {
               puVar19[3] = 0;
               uVar2 = *puVar8;
               puVar8 = puVar8 + 0x10;
               *puVar19 = (ulong)uVar2;
               puVar19 = (ulong*)( (long)puVar19 + param_3 );
            } while ( puVar8 != puVar14 );
         }
         uVar7 = 1;
      }
   }
   *param_6 = param_4;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar7;
   LAB_00100536:uVar12 = uVar12 + 1;
   puVar16 = (undefined8*)( (long)puVar16 + param_3 );
   puVar11 = puVar11 + 2;
   plVar10[4] = 0;
   plVar10[5] = 0;
   *(undefined4*)( plVar10 + 6 ) = 0;
   plVar10 = plVar10 + 8;
   if (uVar13 == uVar12) goto LAB_00100227;
   goto LAB_001004a8;
}undefined8 dgram_free(long param_1) {
   if (param_1 != 0) {
      if (*(int*)( param_1 + 0x2c ) != 0) {
         if (*(int*)( param_1 + 0x28 ) != 0) {
            BIO_closesocket(*(undefined4*)( param_1 + 0x38 ));
         }
         *(undefined4*)( param_1 + 0x28 ) = 0;
         *(undefined4*)( param_1 + 0x30 ) = 0;
      }
      CRYPTO_free(*(void**)( param_1 + 0x40 ));
      return 1;
   }
   return 0;
}undefined8 dgram_recvmmsg(long param_1, undefined8 *param_2, long param_3, ulong param_4, undefined8 param_5, ulong *param_6) {
   short sVar1;
   undefined2 uVar2;
   uint uVar3;
   undefined4 uVar4;
   long lVar5;
   undefined2 *puVar6;
   ulong *puVar7;
   ulong uVar8;
   long lVar9;
   int iVar10;
   undefined8 uVar11;
   ulong *puVar12;
   iovec *piVar13;
   iovec *piVar14;
   size_t *psVar15;
   size_t *psVar16;
   mmsghdr *pmVar17;
   mmsghdr *pmVar18;
   int *piVar19;
   iovec *piVar20;
   ulong uVar21;
   size_t *psVar22;
   long *plVar23;
   ulong uVar24;
   void **ppvVar25;
   ulong *puVar26;
   undefined8 *puVar27;
   ulong uVar28;
   undefined1 *puVar29;
   socklen_t sVar30;
   void *pvVar31;
   undefined1 *puVar32;
   ulong uVar33;
   undefined1 *puVar34;
   size_t sVar35;
   size_t sVar36;
   long in_FS_OFFSET;
   iovec local_1e48[64];
   undefined1 local_1a48[2560];
   mmsghdr local_1048[64];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar11 = 1;
   if (param_4 != 0) {
      lVar5 = *(long*)( param_1 + 0x40 );
      uVar24 = 0x40;
      if (param_4 < 0x41) {
         uVar24 = param_4;
      }
      iVar10 = *(int*)( lVar5 + 0xe0 );
      if ((long)param_4 < 0) {
         uVar24 = 0x40;
      }
      if (*(char*)( lVar5 + 0x104 ) == '\0') {
         uVar33 = 0;
         piVar20 = local_1e48;
         pmVar17 = local_1048;
         puVar27 = param_2;
         do {
            piVar20->iov_base = (void*)*puVar27;
            piVar20->iov_len = puVar27[1];
            if (( iVar10 == 0 ) && ( (void*)puVar27[2] != (void*)0x0 )) {
               sVar1 = *(short*)( lVar5 + 0x70 );
               (pmVar17->msg_hdr).msg_name = (void*)puVar27[2];
               sVar30 = 0x10;
               if (( sVar1 != 2 ) && ( sVar30 = sVar1 != 10 )) goto LAB_00100b04;
            } else {
               (pmVar17->msg_hdr).msg_name = (void*)0x0;
               LAB_00100b04:sVar30 = 0;
            }
            lVar9 = puVar27[3];
            (pmVar17->msg_hdr).msg_namelen = sVar30;
            (pmVar17->msg_hdr).msg_iov = piVar20;
            (pmVar17->msg_hdr).msg_iovlen = 1;
            if (lVar9 != 0) {
               local_1048[uVar33].msg_hdr.msg_control = local_1a48 + uVar33 * 0x28;
               local_1048[uVar33].msg_hdr.msg_controllen = 0x28;
               local_1048[uVar33].msg_hdr.msg_flags = 0;
               ERR_new();
               ERR_set_debug("crypto/bio/bss_dgram.c", 0x62c, "dgram_recvmmsg");
               ERR_set_error(0x20, 0x6f, 0);
               goto LAB_00100aa0;
            }
            uVar33 = uVar33 + 1;
            puVar27 = (undefined8*)( (long)puVar27 + param_3 );
            piVar20 = piVar20 + 1;
            (pmVar17->msg_hdr).msg_control = (void*)0x0;
            (pmVar17->msg_hdr).msg_controllen = 0;
            (pmVar17->msg_hdr).msg_flags = 0;
            pmVar17 = pmVar17 + 1;
         } while ( uVar24 != uVar33 );
      } else {
         if (iVar10 == 0) {
            piVar20 = local_1e48;
            piVar13 = piVar20;
            puVar27 = param_2;
            do {
               pvVar31 = (void*)*puVar27;
               piVar14 = piVar13 + 1;
               puVar27 = (undefined8*)( (long)puVar27 + param_3 );
               piVar13->iov_base = pvVar31;
               piVar13 = piVar14;
            } while ( piVar14 != piVar20 + uVar24 );
            psVar22 = param_2 + 1;
            psVar15 = &local_1e48[0].iov_len;
            do {
               sVar36 = *psVar22;
               psVar16 = psVar15 + 2;
               psVar22 = (size_t*)( (long)psVar22 + param_3 );
               *psVar15 = sVar36;
               psVar15 = psVar16;
            } while ( psVar16 != &local_1e48[uVar24].iov_len );
            plVar23 = param_2 + 2;
            puVar29 = local_1a48;
            pmVar17 = local_1048;
            puVar34 = puVar29 + uVar24 * 0x28;
            pvVar31 = (void*)*plVar23;
            if (pvVar31 == (void*)0x0) goto LAB_0010092d;
            do {
               sVar1 = *(short*)( lVar5 + 0x70 );
               (pmVar17->msg_hdr).msg_name = pvVar31;
               sVar30 = 0x10;
               pmVar18 = pmVar17;
               if (sVar1 == 2) goto LAB_001008da;
               sVar30 = 0x1c;
               if (sVar1 == 10) goto LAB_001008da;
               while (true) {
                  sVar30 = 0;
                  pmVar18 = pmVar17;
                  LAB_001008da:(pmVar18->msg_hdr).msg_namelen = sVar30;
                  puVar32 = (undefined1*)plVar23[1];
                  sVar36 = 0;
                  (pmVar18->msg_hdr).msg_iov = piVar20;
                  (pmVar18->msg_hdr).msg_iovlen = 1;
                  if (puVar32 != (undefined1*)0x0) {
                     sVar36 = 0x28;
                     puVar32 = puVar29;
                  }
                  puVar29 = puVar29 + 0x28;
                  (pmVar18->msg_hdr).msg_control = puVar32;
                  plVar23 = (long*)( (long)plVar23 + param_3 );
                  pmVar17 = pmVar18 + 1;
                  (pmVar18->msg_hdr).msg_controllen = sVar36;
                  piVar20 = piVar20 + 1;
                  (pmVar18->msg_hdr).msg_flags = 0;
                  if (puVar34 == puVar29) goto LAB_001006f0;
                  pvVar31 = (void*)*plVar23;
                  if (pvVar31 != (void*)0x0) break;
                  LAB_0010092d:(pmVar17->msg_hdr).msg_name = (void*)0x0;
               };
            } while ( true );
         }
         piVar20 = local_1e48;
         puVar34 = local_1a48;
         piVar13 = piVar20 + uVar24;
         pmVar17 = local_1048;
         puVar27 = param_2;
         do {
            pvVar31 = (void*)*puVar27;
            (pmVar17->msg_hdr).msg_name = (void*)0x0;
            sVar35 = 0;
            (pmVar17->msg_hdr).msg_namelen = 0;
            piVar20->iov_base = pvVar31;
            sVar36 = puVar27[1];
            (pmVar17->msg_hdr).msg_iov = piVar20;
            piVar20->iov_len = sVar36;
            puVar29 = (undefined1*)puVar27[3];
            (pmVar17->msg_hdr).msg_iovlen = 1;
            if (puVar29 != (undefined1*)0x0) {
               sVar35 = 0x28;
               puVar29 = puVar34;
            }
            piVar20 = piVar20 + 1;
            (pmVar17->msg_hdr).msg_control = puVar29;
            puVar27 = (undefined8*)( (long)puVar27 + param_3 );
            (pmVar17->msg_hdr).msg_controllen = sVar35;
            puVar34 = puVar34 + 0x28;
            (pmVar17->msg_hdr).msg_flags = 0;
            pmVar17 = pmVar17 + 1;
         } while ( piVar20 != piVar13 );
      }
      LAB_001006f0:iVar10 = recvmmsg(*(int*)( param_1 + 0x38 ), local_1048, (uint)uVar24, 0, (timespec*)0x0);
      if (iVar10 < 0) {
         ERR_new();
         ERR_set_debug("crypto/bio/bss_dgram.c", 0x635, "dgram_recvmmsg");
         piVar19 = __errno_location();
         ERR_set_error(2, *piVar19, 0);
         LAB_00100aa0:param_4 = 0;
         uVar11 = 0;
      } else {
         param_4 = (ulong)iVar10;
         ppvVar25 = &local_1048[0].msg_hdr.msg_control;
         puVar26 = param_2 + 1;
         uVar24 = 0;
         if (param_4 != 0) {
            do {
               while (true) {
                  uVar3 = *(uint*)( ppvVar25 + 3 );
                  puVar6 = (undefined2*)puVar26[2];
                  puVar26[3] = 0;
                  *puVar26 = (ulong)uVar3;
                  if (puVar6 == (undefined2*)0x0) break;
                  lVar5 = *(long*)( param_1 + 0x40 );
                  uVar33 = (ulong)ppvVar25[1];
                  puVar7 = (ulong*)*ppvVar25;
                  puVar12 = (ulong*)0x0;
                  if (0xf < uVar33) {
                     puVar12 = puVar7;
                  }
                  if (*(short*)( lVar5 + 0x70 ) == 2) {
                     if (puVar12 != (ulong*)0x0) {
                        while (true) {
                           if (( (int)puVar12[1] == 0 ) && ( *(int*)( (long)puVar12 + 0xc ) == 8 )) {
                              uVar33 = puVar12[3];
                              *puVar6 = 2;
                              *(int*)( puVar6 + 2 ) = (int)uVar33;
                              puVar6[1] = *(undefined2*)( lVar5 + 0x72 );
                              goto LAB_00100a30;
                           }
                           uVar8 = *puVar12;
                           if (uVar8 < 0x10) break;
                           uVar28 = (long)puVar7 + ( uVar33 - (long)puVar12 );
                           uVar21 = ( ulong )(-(int)uVar8 & 7) + 0x10;
                           if (( ( uVar28 < uVar21 ) || ( uVar28 - uVar21 < uVar8 ) ) || ( puVar12 = (ulong*)( (long)puVar12 + ( uVar8 + 7 & 0xfffffffffffffff8 ) ) ),puVar12 == (ulong*)0x0) break;
                        };
                     }
                  } else if (*(short*)( lVar5 + 0x70 ) == 10) {
                     for (; puVar12 != (ulong*)0x0; puVar12 = (ulong*)( (long)puVar12 + ( uVar8 + 7 & 0xfffffffffffffff8 ) )) {
                        if (( (int)puVar12[1] == 0x29 ) && ( *(int*)( (long)puVar12 + 0xc ) == 0x32 )) {
                           uVar33 = puVar12[2];
                           uVar8 = puVar12[3];
                           *puVar6 = 10;
                           uVar2 = *(undefined2*)( lVar5 + 0x72 );
                           *(ulong*)( puVar6 + 4 ) = uVar33;
                           *(ulong*)( puVar6 + 8 ) = uVar8;
                           puVar6[1] = uVar2;
                           uVar4 = *(undefined4*)( lVar5 + 0x88 );
                           *(undefined4*)( puVar6 + 2 ) = 0;
                           *(undefined4*)( puVar6 + 0xc ) = uVar4;
                           goto LAB_00100a30;
                        }
                        uVar8 = *puVar12;
                        if (uVar8 < 0x10) break;
                        uVar28 = (long)puVar7 + ( uVar33 - (long)puVar12 );
                        uVar21 = ( ulong )(-(int)uVar8 & 7) + 0x10;
                        if (( uVar28 < uVar21 ) || ( uVar28 - uVar21 < uVar8 )) break;
                     }
                  } else if (puVar12 != (ulong*)0x0) {
                     while (uVar8 = *puVar12,0xf < uVar8) {
                        uVar28 = (long)puVar7 + ( uVar33 - (long)puVar12 );
                        uVar21 = ( ulong )(-(int)uVar8 & 7) + 0x10;
                        if (( ( uVar28 < uVar21 ) || ( uVar28 - uVar21 < uVar8 ) ) || ( puVar12 = (ulong*)( (long)puVar12 + ( uVar8 + 7 & 0xfffffffffffffff8 ) ) ),puVar12 == (ulong*)0x0) break;
                     };
                  }
                  uVar24 = uVar24 + 1;
                  ppvVar25 = ppvVar25 + 8;
                  puVar26 = (ulong*)( (long)puVar26 + param_3 );
                  BIO_ADDR_clear(param_2[3]);
                  if (param_4 == uVar24) goto LAB_001007fd;
               };
               LAB_00100a30:uVar24 = uVar24 + 1;
               ppvVar25 = ppvVar25 + 8;
               puVar26 = (ulong*)( (long)puVar26 + param_3 );
            } while ( param_4 != uVar24 );
         }
         LAB_001007fd:uVar11 = 1;
      }
   }
   *param_6 = param_4;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar11;
}char *dgram_ctrl(char *param_1, undefined4 param_2, char *param_3, long *param_4) {
   uint uVar1;
   int iVar2;
   int *piVar3;
   sockaddr *psVar4;
   undefined4 uVar5;
   long lVar6;
   undefined8 uVar7;
   sockaddr *__addr;
   long in_FS_OFFSET;
   uint local_c8;
   socklen_t local_c4;
   socklen_t local_c0;
   socklen_t local_bc;
   sockaddr local_b8[8];
   long local_30;
   __addr = *(sockaddr**)( param_1 + 0x40 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c8 = 0;
   local_c0 = 0x80;
   uVar5 = SUB84(param_3, 0);
   switch (param_2) {
      case 8:
    param_3 = (char *)(long)*(int *)(param_1 + 0x2c);
    goto LAB_00100d2f;
      case 9:
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    break;
      default:
    goto switchD_00100c34_caseD_a;
      case 0xb:
      case 0xc:
      case 0x52:
    break;
      case 0x1f:
      case 0x2c:
switchD_00100c34_caseD_1f:
    uVar7 = BIO_ADDR_sockaddr(param_4);
    BIO_ADDR_make(__addr,uVar7);
    break;
      case 0x20:
    if (param_4 != (long *)0x0) {
      __addr[0xe].sa_family = 1;
      __addr[0xe].sa_data[0] = '\0';
      __addr[0xe].sa_data[1] = '\0';
      goto switchD_00100c34_caseD_1f;
    }
    __addr[0xe].sa_family = 0;
    __addr[0xe].sa_data[0] = '\0';
    __addr[0xe].sa_data[1] = '\0';
    BIO_ADDR_clear(__addr);
    break;
      case 0x21:
    iVar2 = setsockopt(*(int *)(param_1 + 0x38),1,0x14,param_4,0x10);
    param_1 = (char *)(long)iVar2;
    if (-1 < (long)iVar2) goto LAB_00100c58;
    ERR_new();
    uVar7 = 0x31d;
    goto LAB_00100ff0;
      case 0x22:
    local_bc = 0x10;
    iVar2 = getsockopt(*(int *)(param_1 + 0x38),1,0x14,param_4,&local_bc);
    if (-1 < iVar2) {
      param_1 = (char *)(ulong)local_bc;
      if (local_bc < 0x11) goto LAB_00100c58;
      param_1 = "assertion failed: (size_t)sz <= sizeof(struct timeval)";
      OPENSSL_die("assertion failed: (size_t)sz <= sizeof(struct timeval)","crypto/bio/bss_dgram.c",
                  0x339);
      goto switchD_00100c34_caseD_66;
    }
    ERR_new();
    uVar7 = 0x336;
LAB_00101441:
    ERR_set_debug("crypto/bio/bss_dgram.c",uVar7,"dgram_ctrl");
    piVar3 = __errno_location();
    ERR_set_error(2,*piVar3,"calling getsockopt()");
    goto LAB_00100dd0;
      case 0x23:
    iVar2 = setsockopt(*(int *)(param_1 + 0x38),1,0x15,param_4,0x10);
    param_1 = (char *)(long)iVar2;
    if (-1 < (long)iVar2) goto LAB_00100c58;
    ERR_new();
    uVar7 = 0x34f;
    goto LAB_00100ff0;
      case 0x24:
    local_bc = 0x10;
    iVar2 = getsockopt(*(int *)(param_1 + 0x38),1,0x15,param_4,&local_bc);
    if (iVar2 < 0) {
      ERR_new();
      uVar7 = 0x369;
      goto LAB_00101441;
    }
    param_1 = (char *)(ulong)local_bc;
    if (local_bc < 0x11) goto LAB_00100c58;
    OPENSSL_die("assertion failed: (size_t)sz <= sizeof(struct timeval)","crypto/bio/bss_dgram.c",
                0x36c);
      case 0x28:
    local_bc = 0x70;
    BIO_ADDR_clear(local_b8);
    iVar2 = getsockname(*(int *)(param_1 + 0x38),local_b8,&local_bc);
    if (-1 < iVar2) {
      local_c4 = 4;
      if (local_b8[0].sa_family == 2) {
        iVar2 = getsockopt(*(int *)(param_1 + 0x38),0,0xe,&local_c8,&local_c4);
        if ((-1 < iVar2) && (-1 < (int)local_c8)) {
          *(uint *)(__addr[0xe].sa_data + 6) = local_c8 - 0x1c;
          param_1 = (char *)(ulong)(local_c8 - 0x1c);
          goto LAB_00100c58;
        }
      }
      else if (((local_b8[0].sa_family == 10) &&
               (iVar2 = getsockopt(*(int *)(param_1 + 0x38),0x29,0x18,&local_c8,&local_c4),
               -1 < iVar2)) && (-1 < (int)local_c8)) {
        *(uint *)(__addr[0xe].sa_data + 6) = local_c8 - 0x30;
        param_1 = (char *)(ulong)(local_c8 - 0x30);
        goto LAB_00100c58;
      }
   }
   goto switchD_00100c34_caseD_a;
   case 0x25:
   case 0x26:
    if (*(int *)(__addr[0xe].sa_data + 2) != 0xb) goto switchD_00100c34_caseD_a;
LAB_00100d56:
    __addr[0xe].sa_data[2] = '\0';
    __addr[0xe].sa_data[3] = '\0';
    __addr[0xe].sa_data[4] = '\0';
    __addr[0xe].sa_data[5] = '\0';
    break;
   case 0x27:
    local_bc = 0x70;
    BIO_ADDR_clear(local_b8);
    iVar2 = getsockname(*(int *)(param_1 + 0x38),local_b8,&local_bc);
    if (-1 < iVar2) {
      if (local_b8[0].sa_family == 2) {
        local_c8 = 2;
        iVar2 = setsockopt(*(int *)(param_1 + 0x38),0,10,&local_c8,4);
        param_1 = (char *)(long)iVar2;
        if (-1 < (long)iVar2) goto LAB_00100c58;
        ERR_new();
        uVar7 = 0x279;
      }
      else {
        if (local_b8[0].sa_family != 10) goto LAB_00100dd0;
        local_c8 = 2;
        iVar2 = setsockopt(*(int *)(param_1 + 0x38),0x29,0x17,&local_c8,4);
        param_1 = (char *)(long)iVar2;
        if (-1 < (long)iVar2) goto LAB_00100c58;
        ERR_new();
        uVar7 = 0x281;
      }
      goto LAB_00100ff0;
    }
    goto switchD_00100c34_caseD_a;
   case 0x29:
    param_1 = (char *)(ulong)*(uint *)(__addr[0xe].sa_data + 6);
    goto LAB_00100c58;
   case 0x2a:
    *(undefined4 *)(__addr[0xe].sa_data + 6) = uVar5;
    goto LAB_00100d2f;
   case 0x2b:
    if (*(int *)(__addr[0xe].sa_data + 2) == 0x5a) goto LAB_00100d56;
switchD_00100c34_caseD_a:
    param_1 = (char *)0x0;
    goto LAB_00100c58;
   case 0x2d:
    lVar6 = 0;
    if (-1 < *param_4) {
      lVar6 = *param_4 * 1000000000 + param_4[1] * 1000;
    }
    __addr[0xf].sa_family = (short)lVar6;
    __addr[0xf].sa_data[0] = (char)((ulong)lVar6 >> 0x10);
    __addr[0xf].sa_data[1] = (char)((ulong)lVar6 >> 0x18);
    __addr[0xf].sa_data[2] = (char)((ulong)lVar6 >> 0x20);
    __addr[0xf].sa_data[3] = (char)((ulong)lVar6 >> 0x28);
    __addr[0xf].sa_data[4] = (char)((ulong)lVar6 >> 0x30);
    __addr[0xf].sa_data[5] = (char)((ulong)lVar6 >> 0x38);
    break;
   case 0x2e:
    goto switchD_00100c34_caseD_2e;
   case 0x2f:
    lVar6 = 0x1c;
    iVar2 = BIO_ADDR_family(__addr);
    if (iVar2 == 10) {
      lVar6 = 0x30;
      iVar2 = BIO_ADDR_rawaddress(__addr,local_b8,0);
      if (((iVar2 != 0) && (local_b8[0]._0_4_ == 0 && local_b8[0].sa_data._2_4_ == 0)) &&
         (local_b8[0].sa_data._6_4_ == -0x10000)) {
        lVar6 = 0x1c;
      }
    }
    iVar2 = BIO_ADDR_family(__addr);
    param_1 = (char *)(0x240 - lVar6);
    if ((iVar2 == 10) &&
       (((iVar2 = BIO_ADDR_rawaddress(__addr,local_b8,0), iVar2 == 0 ||
         (local_b8[0]._0_4_ != 0 || local_b8[0].sa_data._2_4_ != 0)) ||
        (local_b8[0].sa_data._6_4_ != -0x10000)))) {
      param_1 = (char *)(0x500 - lVar6);
    }
    goto LAB_00100c58;
   case 0x30:
    if (__addr->sa_family == 2) {
      local_c8 = -(uint)(param_3 != (char *)0x0) & 3;
      iVar2 = setsockopt(*(int *)(param_1 + 0x38),0,10,&local_c8,4);
      param_1 = (char *)(long)iVar2;
      if (-1 < (long)iVar2) goto LAB_00100c58;
      ERR_new();
      uVar7 = 0x397;
    }
    else {
      if (__addr->sa_family != 10) goto LAB_00100dd0;
      local_c8 = (uint)(param_3 != (char *)0x0);
      iVar2 = setsockopt(*(int *)(param_1 + 0x38),0x29,0x3e,&local_c8,4);
      param_1 = (char *)(long)iVar2;
      if (-1 < (long)iVar2) goto LAB_00100c58;
      ERR_new();
      uVar7 = 0x3ab;
    }
LAB_00100ff0:
    ERR_set_debug("crypto/bio/bss_dgram.c",uVar7,"dgram_ctrl");
    piVar3 = __errno_location();
    ERR_set_error(2,*piVar3,"calling setsockopt()");
LAB_00100dd0:
    param_1 = (char *)0xffffffffffffffff;
    goto LAB_00100c58;
   case 0x31:
    iVar2 = BIO_ADDR_family(__addr);
    param_1 = (char *)0x1c;
    if (iVar2 == 10) {
      param_1 = (char *)0x30;
      iVar2 = BIO_ADDR_rawaddress(__addr,local_b8,0);
      if (((iVar2 != 0) && (local_b8[0]._0_4_ == 0 && local_b8[0].sa_data._2_4_ == 0)) &&
         (local_b8[0].sa_data._6_4_ == -0x10000)) {
        param_1 = (char *)0x1c;
      }
    }
    goto LAB_00100c58;
   case 0x32:
   case 0x47:
    __addr[0x10].sa_family = (short)uVar5;
    __addr[0x10].sa_data[0] = (char)((uint)uVar5 >> 0x10);
    __addr[0x10].sa_data[1] = (char)((uint)uVar5 >> 0x18);
    break;
   case 0x53:
    *(int *)param_4 = (int)__addr[0x10].sa_data[2];
    break;
   case 0x54:
    if ((long)__addr[0x10].sa_data[2] != (ulong)(0 < (long)param_3)) {
      local_bc = (socklen_t)(0 < (long)param_3);
      if (__addr[7].sa_family == 2) {
        iVar2 = setsockopt(*(int *)(param_1 + 0x38),0,8,&local_bc,4);
      }
      else {
        if (__addr[7].sa_family != 10) goto switchD_00100c34_caseD_a;
        iVar2 = setsockopt(*(int *)(param_1 + 0x38),0x29,0x31,&local_bc,4);
      }
      if (iVar2 < 0) goto switchD_00100c34_caseD_a;
      __addr[0x10].sa_data[2] = 0 < (long)param_3;
    }
    break;
   case 0x55:
    param_1 = (char *)0xf;
    goto LAB_00100c58;
   case 0x5b:
   case 0x5c:
    iVar2 = *(int *)(param_1 + 0x38);
    *(int *)param_4 = 1;
    *(int *)(param_4 + 1) = iVar2;
    break;
   case 0x5d:
    local_bc = 0x10;
    iVar2 = BIO_ADDR_family(__addr);
    if (iVar2 == 0) {
      __addr = local_b8;
      iVar2 = getpeername(*(int *)(param_1 + 0x38),__addr,&local_bc);
      if ((iVar2 != 0) || (iVar2 = BIO_ADDR_family(__addr), iVar2 == 0))
      goto switchD_00100c34_caseD_a;
    }
switchD_00100c34_caseD_2e:
    uVar1 = BIO_ADDR_sockaddr_size(__addr);
    param_1 = (char *)(ulong)uVar1;
    if ((param_3 == (char *)0x0) || ((long)param_1 < (long)param_3)) {
      memcpy(param_4,__addr,(size_t)param_1);
      goto LAB_00100c58;
    }
    memcpy(param_4,__addr,(size_t)param_3);
    goto LAB_00100d2f;
   case 0x66:
switchD_00100c34_caseD_66:
    iVar2 = BIO_socket_nbio(*(int *)(param_1 + 0x38),(uint)(param_3 != (char *)0x0));
    param_1 = (char *)(ulong)(iVar2 != 0);
    goto LAB_00100c58;
   case 0x68:
    psVar4 = __addr;
    if (*(int *)(param_1 + 0x2c) != 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        BIO_closesocket(*(undefined4 *)(param_1 + 0x38));
        psVar4 = *(sockaddr **)(param_1 + 0x40);
      }
      param_1[0x28] = '\0';
      param_1[0x29] = '\0';
      param_1[0x2a] = '\0';
      param_1[0x2b] = '\0';
      param_1[0x30] = '\0';
      param_1[0x31] = '\0';
      param_1[0x32] = '\0';
      param_1[0x33] = '\0';
    }
    lVar6 = *param_4;
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    param_1[0x28] = '\x01';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    *(int *)(param_1 + 0x38) = (int)lVar6;
    local_bc = 0x70;
    iVar2 = getsockname((int)lVar6,psVar4 + 7,&local_bc);
    if (iVar2 < 0) {
      BIO_ADDR_clear(psVar4 + 7);
    }
    iVar2 = getpeername(*(int *)(param_1 + 0x38),local_b8,&local_c0);
    if (iVar2 == 0) {
      BIO_ADDR_sockaddr(local_b8);
      BIO_ADDR_make(__addr);
      __addr[0xe].sa_family = 1;
      __addr[0xe].sa_data[0] = '\0';
      __addr[0xe].sa_data[1] = '\0';
    }
    if (__addr[0x10].sa_data[2] != '\0') {
      local_bc = 1;
      if (*(short *)(*(long *)(param_1 + 0x40) + 0x70) == 2) {
        iVar2 = setsockopt(*(int *)(param_1 + 0x38),0,8,&local_bc,4);
joined_r0x00101562:
        if (-1 < iVar2) break;
      }
      else if (*(short *)(*(long *)(param_1 + 0x40) + 0x70) == 10) {
        iVar2 = setsockopt(*(int *)(param_1 + 0x38),0x29,0x31,&local_bc,4);
        goto joined_r0x00101562;
      }
      __addr[0x10].sa_data[2] = '\0';
    }
    break;
   case 0x69:
    if (*(int *)(param_1 + 0x28) == 0) goto LAB_00100dd0;
    if (param_4 != (long *)0x0) {
      *(int *)param_4 = *(int *)(param_1 + 0x38);
    }
    param_3 = (char *)(long)*(int *)(param_1 + 0x38);
LAB_00100d2f:
    param_1 = (char *)0xffffffffffffffff;
    if (-1 < (long)param_3) {
      param_1 = param_3;
    }
    goto LAB_00100c58;
}param_1 = (char*)0x1;LAB_00100c58:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return param_1;}/* WARNING: Unknown calling convention -- yet parameter storage is locked */BIO_METHOD *BIO_s_datagram(void) {
   return (BIO_METHOD*)methods_dgramp;
}BIO *BIO_new_dgram(int fd, int close_flag) {
   BIO_METHOD *type;
   BIO *bp;
   type = BIO_s_datagram();
   bp = BIO_new(type);
   if (bp != (BIO*)0x0) {
      BIO_int_ctrl(bp, 0x68, (long)close_flag, fd);
   }
   return bp;
}int BIO_dgram_non_fatal_error(int error) {
   if (error != 0x47) {
      if (0x47 < error) {
         return (int)( error - 0x72U < 2 );
      }
      if (error != 4) {
         return (int)( error == 0xb );
      }
   }
   return 1;
}ulong dgram_read(BIO *param_1, void *param_2, int param_3) {
   bio_st *pbVar1;
   bio_st *pbVar2;
   int iVar3;
   int *piVar4;
   sockaddr *__addr;
   ulong uVar5;
   char *pcVar6;
   ulong uVar7;
   ulong uVar8;
   long lVar9;
   long in_FS_OFFSET;
   socklen_t local_d0;
   socklen_t local_cc;
   ulong local_c8;
   ulong local_c0;
   undefined1 local_b8[120];
   long local_40;
   uVar5 = 0;
   pbVar1 = param_1->prev_bio;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_d0 = 0x70;
   if (param_2 == (void*)0x0) goto LAB_00101720;
   piVar4 = __errno_location();
   *piVar4 = 0;
   BIO_ADDR_clear(local_b8);
   pbVar2 = param_1->prev_bio;
   if (pbVar2[2].cb_arg != (char*)0x0) {
      local_cc = 0x10;
      iVar3 = getsockopt(*(int*)&param_1->next_bio, 1, 0x14, &local_c8, &local_cc);
      if (iVar3 < 0) {
         ERR_new();
         ERR_set_debug("crypto/bio/bss_dgram.c", 0x147, "dgram_adjust_rcv_timeout");
         ERR_set_error(2, *piVar4, "calling getsockopt()");
      } else {
         lVar9 = 0;
         if (-1 < (long)local_c8) {
            lVar9 = local_c8 * 1000000000 + local_c0 * 1000;
         }
         pbVar2[2].init = (int)lVar9;
         pbVar2[2].shutdown = (int)( (ulong)lVar9 >> 0x20 );
      }
      pcVar6 = (char*)ossl_time_now();
      uVar5 = 1000;
      if (( pcVar6 <= pbVar2[2].cb_arg ) && ( uVar5 = uVar5 < 1000 )) {
         uVar5 = 1000;
      }
      uVar8 = *(ulong*)&pbVar2[2].init;
      uVar7 = uVar8 - 1;
      if (uVar8 - 1 < uVar8) {
         uVar7 = uVar8;
      }
      if (uVar5 <= uVar7) {
         if (uVar5 < 0xfffffffffffffc19) {
            local_c8 = ( uVar5 + 999 ) / 1000000000;
            local_c0 = ( ( uVar5 + 999 ) % 1000000000 ) / 1000;
         } else {
            local_c8 = 0x44b82fa09;
            local_c0 = 0xad3af;
         }
         iVar3 = setsockopt(*(int*)&param_1->next_bio, 1, 0x14, &local_c8, 0x10);
         if (iVar3 < 0) {
            ERR_new();
            ERR_set_debug("crypto/bio/bss_dgram.c", 0x162, "dgram_adjust_rcv_timeout");
            ERR_set_error(2, *piVar4, "calling setsockopt()");
         }
      }
   }
   iVar3 = pbVar1[2].flags;
   __addr = (sockaddr*)BIO_ADDR_sockaddr_noconst(local_b8);
   uVar5 = recvfrom(*(int*)&param_1->next_bio, param_2, (long)param_3, ( uint )(iVar3 != 0) * 2, __addr, &local_d0);
   iVar3 = (int)uVar5;
   uVar5 = uVar5 & 0xffffffff;
   if (*(int*)&pbVar1[2].method == 0) {
      if (iVar3 < 0) {
         BIO_clear_flags(param_1, 0xf);
         LAB_00101703:if (( iVar3 + 1U < 2 ) && ( iVar3 = iVar3 != 0 )) {
            BIO_set_flags(param_1, 9);
            *(int*)( (long)&pbVar1[2].method + 4 ) = *piVar4;
         }
         pbVar1 = param_1->prev_bio;
         pcVar6 = pbVar1[2].cb_arg;
      } else {
         BIO_ctrl(param_1, 0x2c, 0, local_b8);
         BIO_clear_flags(param_1, 0xf);
         pbVar1 = param_1->prev_bio;
         pcVar6 = pbVar1[2].cb_arg;
      }
   } else {
      BIO_clear_flags(param_1, 0xf);
      if (iVar3 < 0) goto LAB_00101703;
      pbVar1 = param_1->prev_bio;
      pcVar6 = pbVar1[2].cb_arg;
   }
   if (pcVar6 != (char*)0x0) {
      uVar8 = *(ulong*)&pbVar1[2].init + 999;
      if (*(ulong*)&pbVar1[2].init < 0xfffffffffffffc19) {
         local_c8 = uVar8 / 1000000000;
         local_c0 = ( uVar8 % 1000000000 ) / 1000;
      } else {
         local_c8 = 0x44b82fa09;
         local_c0 = 0xad3af;
      }
      iVar3 = setsockopt(*(int*)&param_1->next_bio, 1, 0x14, &local_c8, 0x10);
      if (iVar3 < 0) {
         ERR_new();
         ERR_set_debug("crypto/bio/bss_dgram.c", 0x191, "dgram_reset_rcv_timeout");
         ERR_set_error(2, *piVar4, "calling setsockopt()");
      }
   }
   LAB_00101720:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ulong dgram_write(BIO *param_1, void *param_2, int param_3) {
   bio_st *pbVar1;
   socklen_t __addr_len;
   int iVar2;
   int *piVar3;
   ulong uVar4;
   sockaddr *__addr;
   pbVar1 = param_1->prev_bio;
   piVar3 = __errno_location();
   *piVar3 = 0;
   if (*(int*)&pbVar1[2].method == 0) {
      __addr_len = BIO_ADDR_sockaddr_size(pbVar1);
      __addr = (sockaddr*)BIO_ADDR_sockaddr(pbVar1);
      uVar4 = sendto(*(int*)&param_1->next_bio, param_2, (long)param_3, 0, __addr, __addr_len);
   } else {
      uVar4 = write(*(int*)&param_1->next_bio, param_2, (long)param_3);
   }
   BIO_clear_flags(param_1, 0xf);
   if (( (int)uVar4 < 1 ) && ( (int)uVar4 + 1U < 2 )) {
      iVar2 = BIO_dgram_non_fatal_error(*piVar3);
      if (iVar2 != 0) {
         BIO_set_flags(param_1, 10);
         *(int*)( (long)&pbVar1[2].method + 4 ) = *piVar3;
      }
   }
   return uVar4 & 0xffffffff;
}ulong dgram_puts(BIO *param_1, char *param_2) {
   bio_st *pbVar1;
   socklen_t __addr_len;
   int iVar2;
   size_t sVar3;
   int *piVar4;
   ulong uVar5;
   sockaddr *__addr;
   sVar3 = strlen(param_2);
   pbVar1 = param_1->prev_bio;
   piVar4 = __errno_location();
   *piVar4 = 0;
   if (*(int*)&pbVar1[2].method == 0) {
      __addr_len = BIO_ADDR_sockaddr_size(pbVar1);
      __addr = (sockaddr*)BIO_ADDR_sockaddr(pbVar1);
      uVar5 = sendto(*(int*)&param_1->next_bio, param_2, (long)(int)sVar3, 0, __addr, __addr_len);
   } else {
      uVar5 = write(*(int*)&param_1->next_bio, param_2, (long)(int)sVar3);
   }
   BIO_clear_flags(param_1, 0xf);
   if (( (int)uVar5 < 1 ) && ( (int)uVar5 + 1U < 2 )) {
      iVar2 = BIO_dgram_non_fatal_error(*piVar4);
      if (iVar2 != 0) {
         BIO_set_flags(param_1, 10);
         *(int*)( (long)&pbVar1[2].method + 4 ) = *piVar4;
      }
   }
   return uVar5 & 0xffffffff;
}
