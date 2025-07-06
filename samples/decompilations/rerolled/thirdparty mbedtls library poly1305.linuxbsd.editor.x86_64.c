void poly1305_process(uint *param_1, long param_2, uint *param_3, int param_4) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   ulong uVar4;
   ulong uVar5;
   ulong uVar6;
   uint uVar7;
   uint *puVar8;
   ulong uVar9;
   ulong uVar10;
   ulong uVar11;
   ulong uVar12;
   ulong uVar13;
   ulong uVar14;
   ulong uVar15;
   ulong uVar16;
   uint uVar17;
   ulong uVar18;
   ulong uVar19;
   puVar8 = param_3 + param_2 * 4;
   uVar3 = param_1[1];
   uVar16 = (ulong)uVar3;
   uVar1 = param_1[2];
   uVar2 = param_1[3];
   uVar17 = param_1[8];
   uVar5 = (ulong)param_1[0xb];
   uVar14 = ( ulong )(( uVar3 >> 2 ) + uVar3);
   uVar15 = ( ulong ) * param_1;
   uVar13 = ( ulong )(( uVar2 >> 2 ) + uVar2);
   uVar6 = ( ulong )(( uVar1 >> 2 ) + uVar1);
   uVar7 = param_1[9];
   uVar4 = (ulong)param_1[10];
   uVar3 = param_1[0xc];
   do {
      uVar19 = ( ulong )(*param_3 + uVar17);
      uVar9 = (ulong)uVar7 + (ulong)param_3[1] + ( (ulong)uVar17 + ( ulong ) * param_3 >> 0x20 );
      uVar10 = uVar9 & 0xffffffff;
      uVar4 = uVar4 + (ulong)param_3[2] + ( uVar9 >> 0x20 );
      uVar9 = uVar4 & 0xffffffff;
      uVar5 = uVar5 + (ulong)param_3[3] + ( uVar4 >> 0x20 );
      uVar4 = uVar5 & 0xffffffff;
      uVar3 = uVar3 + (int)( uVar5 >> 0x20 ) + param_4;
      uVar18 = (ulong)uVar3;
      uVar12 = uVar9 * uVar6 + uVar19 * uVar15 + uVar10 * uVar13 + uVar14 * uVar4;
      uVar11 = ( uVar12 >> 0x20 ) + uVar4 * uVar6 + uVar9 * uVar13 + uVar19 * uVar16 + uVar10 * uVar15 + uVar18 * uVar14;
      uVar5 = ( uVar11 >> 0x20 ) + uVar4 * uVar13 + uVar9 * uVar15 + uVar1 * uVar19 + uVar10 * uVar16 + uVar18 * uVar6;
      uVar19 = ( uVar5 >> 0x20 ) + uVar4 * uVar15 + uVar9 * uVar16 + uVar1 * uVar10 + uVar2 * uVar19 + uVar18 * uVar13;
      uVar3 = uVar3 * *param_1 + (int)( uVar19 >> 0x20 );
      uVar4 = ( ulong )(uVar3 >> 2) + ( ulong )(uVar3 & 0xfffffffc) + ( uVar12 & 0xffffffff );
      uVar17 = (uint)uVar4;
      uVar4 = ( uVar11 & 0xffffffff ) + ( uVar4 >> 0x20 );
      uVar7 = (uint)uVar4;
      uVar9 = ( uVar5 & 0xffffffff ) + ( uVar4 >> 0x20 );
      uVar4 = uVar9 & 0xffffffff;
      param_3 = param_3 + 4;
      uVar19 = ( uVar19 & 0xffffffff ) + ( uVar9 >> 0x20 );
      uVar5 = uVar19 & 0xffffffff;
      uVar3 = (int)( uVar19 >> 0x20 ) + ( uVar3 & 3 );
   }
 while ( param_3 != puVar8 );
   param_1[8] = uVar17;
   param_1[9] = uVar7;
   param_1[10] = (uint)uVar9;
   param_1[0xb] = (uint)uVar19;
   param_1[0xc] = uVar3;
   return;
}
void mbedtls_poly1305_init(undefined8 param_1) {
   mbedtls_platform_zeroize(param_1, 0x50);
   return;
}
void mbedtls_poly1305_free(long param_1) {
   if (param_1 != 0) {
      mbedtls_platform_zeroize(param_1, 0x50);
      return;
   }

   return;
}
undefined8 mbedtls_poly1305_starts(uint *param_1, uint *param_2) {
   uint uVar1;
   *param_1 = *param_2 & 0xfffffff;
   for (int i = 0; i < 3; i++) {
      param_1[( i + 1 )] = param_2[( i + 1 )] & 268435452;
   }

   for (int i = 0; i < 3; i++) {
      param_1[( i + 4 )] = param_2[( i + 4 )];
   }

   uVar1 = param_2[7];
   param_1[0xc] = 0;
   param_1[7] = uVar1;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   mbedtls_platform_zeroize(param_1 + 0xd, 0x10);
   param_1[0x12] = 0;
   param_1[0x13] = 0;
   return 0;
}
undefined8 mbedtls_poly1305_update(long param_1, undefined8 *param_2, ulong param_3) {
   void *__dest;
   uint uVar1;
   long lVar2;
   undefined8 *puVar3;
   uint uVar4;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   if (param_3 == 0) {
      return 0;
   }

   lVar2 = *(long*)( param_1 + 0x48 );
   if (lVar2 == 0) {
      if (param_3 < 0x10) goto LAB_00100392;
      uVar6 = 0;
      puVar3 = param_2;
      LAB_001003e1:uVar5 = param_3 >> 4;
      uVar7 = param_3 & 0xfffffffffffffff0;
      param_3 = ( ulong )((uint)param_3 & 0xf);
      poly1305_process(param_1, uVar5, puVar3, 1);
      uVar6 = uVar7 + uVar6;
   }
 else {
      __dest = (void*)( param_1 + 0x34 + lVar2 );
      uVar6 = 0x10 - lVar2;
      if (param_3 < uVar6) {
         memcpy(__dest, param_2, param_3);
         *(long*)( param_1 + 0x48 ) = *(long*)( param_1 + 0x48 ) + param_3;
         return 0;
      }

      param_3 = lVar2 + -0x10 + param_3;
      memcpy(__dest, param_2, uVar6);
      *(undefined8*)( param_1 + 0x48 ) = 0;
      poly1305_process(param_1, 1, param_1 + 0x34, 1);
      puVar3 = (undefined8*)( (long)param_2 + uVar6 );
      if (0xf < param_3) goto LAB_001003e1;
   }

   if (param_3 == 0) {
      return 0;
   }

   param_2 = (undefined8*)( (long)param_2 + uVar6 );
   LAB_00100392:*(ulong*)( param_1 + 0x48 ) = param_3;
   uVar1 = (uint)param_3;
   uVar6 = param_3 & 0xffffffff;
   if (uVar1 < 8) {
      if (( param_3 & 4 ) == 0) {
         if (( uVar1 != 0 ) && ( *(undefined1*)( param_1 + 0x34 ) = *(undefined1*)param_2(param_3 & 2) != 0 )) {
            *(undefined2*)( param_1 + 0x32 + uVar6 ) = *(undefined2*)( (long)param_2 + ( uVar6 - 2 ) );
         }

      }
 else {
         *(undefined4*)( param_1 + 0x34 ) = *(undefined4*)param_2;
         *(undefined4*)( param_1 + 0x30 + uVar6 ) = *(undefined4*)( (long)param_2 + ( uVar6 - 4 ) );
      }

   }
 else {
      *(undefined8*)( param_1 + 0x34 ) = *param_2;
      *(undefined8*)( param_1 + 0x2c + ( param_3 & 0xffffffff ) ) = *(undefined8*)( (long)param_2 + ( ( param_3 & 0xffffffff ) - 8 ) );
      uVar6 = param_1 + 0x3cU & 0xfffffffffffffff8;
      lVar2 = ( param_1 + 0x34 ) - uVar6;
      uVar1 = (int)lVar2 + uVar1 & 0xfffffff8;
      if (7 < uVar1) {
         uVar4 = 0;
         do {
            uVar5 = (ulong)uVar4;
            uVar4 = uVar4 + 8;
            *(undefined8*)( uVar6 + uVar5 ) = *(undefined8*)( (long)param_2 + ( uVar5 - lVar2 ) );
         }
 while ( uVar4 < uVar1 );
      }

   }

   return 0;
}
undefined8 mbedtls_poly1305_finish(long param_1, undefined8 *param_2) {
   uint uVar1;
   int iVar2;
   ulong uVar3;
   long lVar4;
   ulong uVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   long lVar9;
   lVar4 = *(long*)( param_1 + 0x48 );
   if (lVar4 != 0) {
      *(undefined1*)( param_1 + 0x34 + lVar4 ) = 1;
      *(long*)( param_1 + 0x48 ) = lVar4 + 1;
      memset((void*)( param_1 + 0x35 + lVar4 ), 0, 0x10 - ( lVar4 + 1 ));
      poly1305_process(param_1, 1, param_1 + 0x34, 0);
   }

   uVar8 = *(uint*)( param_1 + 0x20 );
   uVar1 = *(uint*)( param_1 + 0x2c );
   uVar5 = ( ulong ) * (uint*)( param_1 + 0x24 ) + ( (ulong)uVar8 + 5 >> 0x20 );
   uVar3 = ( ulong ) * (uint*)( param_1 + 0x28 ) + ( uVar5 >> 0x20 );
   lVar9 = (ulong)uVar1 + ( uVar3 >> 0x20 );
   uVar6 = ( uint )((int)( (ulong)lVar9 >> 0x20 ) + *(int*)( param_1 + 0x30 )) >> 2;
   uVar7 = uVar6 - 1;
   uVar6 = -uVar6;
   uVar8 = uVar8 & uVar7 | uVar8 + 5 & uVar6;
   uVar5 = ( ulong )((uint)uVar5 & uVar6 | *(uint*)( param_1 + 0x24 ) & uVar7) + ( ulong ) * (uint*)( param_1 + 0x14 ) + ( (ulong)uVar8 + ( ulong ) * (uint*)( param_1 + 0x10 ) >> 0x20 );
   lVar4 = ( ulong )((uint)uVar3 & uVar6 | *(uint*)( param_1 + 0x28 ) & uVar7) + ( ulong ) * (uint*)( param_1 + 0x18 ) + ( uVar5 >> 0x20 );
   iVar2 = *(int*)( param_1 + 0x1c );
   *param_2 = CONCAT44((int)uVar5, uVar8 + *(uint*)( param_1 + 0x10 ));
   param_2[1] = CONCAT44(( uVar6 & (uint)lVar9 | uVar1 & uVar7 ) + iVar2 + (int)( (ulong)lVar4 >> 0x20 ), (int)lVar4);
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int mbedtls_poly1305_mac(ulong *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   int iVar1;
   long in_FS_OFFSET;
   ulong local_88;
   ulong uStack_80;
   ulong local_78;
   ulong uStack_70;
   undefined1 local_68[16];
   undefined4 local_58;
   undefined1 local_54[20];
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_platform_zeroize(&local_88, 0x50);
   local_78 = param_1[2];
   uStack_70 = param_1[3];
   local_88 = *param_1 & __LC0;
   uStack_80 = param_1[1] & _UNK_00100a68;
   local_58 = 0;
   local_68 = (undefined1[16])0x0;
   mbedtls_platform_zeroize(local_54, 0x10);
   local_40 = 0;
   iVar1 = mbedtls_poly1305_update(&local_88, param_2, param_3);
   if (iVar1 == 0) {
      iVar1 = mbedtls_poly1305_finish(&local_88, param_4);
   }

   mbedtls_platform_zeroize(&local_88, 0x50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 mbedtls_poly1305_self_test(int param_1) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      iVar1 = mbedtls_poly1305_mac(test_keys, "Cryptographic Forum Research Group", 0x22, &local_38);
      if (( iVar1 == 0 ) && ( local_38 == -0x39c9aecf3ee2f958 && local_30 == -0x56d8fef35074d43e )) {
         iVar1 = mbedtls_poly1305_mac(0x100a40, "\'Twas brillig, and the slithy toves\nDid gyre and gimble in the wabe:\nAll mimsy were the borogoves,\nAnd the mome raths outgrabe.", 0x7f, &local_38);
         if (( iVar1 == 0 ) && ( local_38 == 0x61eeaa7e9a664145 && local_30 == 0x62ebc5bc7cdc08e7 )) {
            LAB_00100812:uVar2 = 0;
            goto LAB_00100778;
         }

      }

   }
 else {
      __printf_chk(2, "  Poly1305 test %u ", 0);
      iVar1 = mbedtls_poly1305_mac(test_keys, "Cryptographic Forum Research Group", 0x22, &local_38);
      if (iVar1 == 0) {
         if (local_38 == -0x39c9aecf3ee2f958 && local_30 == -0x56d8fef35074d43e) {
            puts("passed");
            __printf_chk(2, "  Poly1305 test %u ", 1);
            iVar1 = mbedtls_poly1305_mac(0x100a40, "\'Twas brillig, and the slithy toves\nDid gyre and gimble in the wabe:\nAll mimsy were the borogoves,\nAnd the mome raths outgrabe.", 0x7f, &local_38);
            if (iVar1 != 0) goto LAB_0010088f;
            if (local_38 == 0x61eeaa7e9a664145 && local_30 == 0x62ebc5bc7cdc08e7) {
               puts("passed");
               putchar(10);
               goto LAB_00100812;
            }

         }

         puts("failed (mac)");
      }
 else {
         LAB_0010088f:__printf_chk(2, "error code: %i\n", iVar1);
      }

   }

   uVar2 = 0xffffffff;
   LAB_00100778:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

