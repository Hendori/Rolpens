/* WARNING: Removing unreachable block (ram,0x00100053) *//* WARNING: Removing unreachable block (ram,0x00100040) *//* WARNING: Removing unreachable block (ram,0x00100005) */uint padlock_capability(void) {
   long lVar1;
   uint *puVar2;
   uint uVar3;
   lVar1 = cpuid_basic_info(0);
   if (*(int*)( lVar1 + 4 ) == 0x746e6543) {
      if (*(int*)( lVar1 + 8 ) != 0x48727561) {
         return 0;
      }

      if (*(int*)( lVar1 + 0xc ) != 0x736c7561) {
         return 0;
      }

   }
 else {
      if (*(int*)( lVar1 + 4 ) != 0x68532020) {
         return 0;
      }

      if (*(int*)( lVar1 + 8 ) != 0x68676e61) {
         return 0;
      }

      if (*(int*)( lVar1 + 0xc ) != 0x20206961) {
         return 0;
      }

   }

   puVar2 = (uint*)cpuid(0xc0000000);
   uVar3 = 0;
   if (0xc0000000 < *puVar2) {
      lVar1 = cpuid(0xc0000001);
      uVar3 = *(uint*)( lVar1 + 8 ) & 0xffffffef | 0x10;
   }

   return uVar3;
}
void padlock_key_bswap(uint *param_1) {
   uint uVar1;
   int iVar2;
   iVar2 = ( param_1[0x3c] + 1 ) * 4;
   do {
      uVar1 = *param_1;
      *param_1 = uVar1 >> 0x18 | ( uVar1 & 0xff0000 ) >> 8 | ( uVar1 & 0xff00 ) << 8 | uVar1 << 0x18;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
   }
 while ( iVar2 != 0 );
   return;
}
void padlock_verify_context(undefined8 param_1, undefined8 param_2) {
   _padlock_verify_ctx(param_1, param_2, param_1);
   return;
}
void padlock_reload_key(void) {
   return;
}
void padlock_aes_block(undefined4 param_1, undefined4 param_2, int param_3) {
   xcrypt_ecb(1, param_3 + 0x10, param_3 + 0x20, param_2, param_1);
   return;
}
undefined4 padlock_xstore(undefined4 param_1, undefined4 param_2) {
   undefined4 uVar1;
   uVar1 = xstore_available(param_2, param_1);
   return uVar1;
}
void padlock_sha1_oneshot(undefined8 *param_1, undefined4 param_2, undefined4 param_3) {
   undefined1 local_88[136];
   xsha1(param_3, param_2, (int)local_88);
   *param_1 = *param_1;
   param_1[1] = param_1[1];
   *(undefined4*)( param_1 + 2 ) = *(undefined4*)( param_1 + 2 );
   return;
}
void padlock_sha1_blocks(undefined8 *param_1, undefined4 param_2, undefined4 param_3) {
   undefined1 local_88[136];
   xsha1(param_3, param_2, (int)local_88);
   *param_1 = *param_1;
   param_1[1] = param_1[1];
   *(undefined4*)( param_1 + 2 ) = *(undefined4*)( param_1 + 2 );
   return;
}
undefined4 padlock_sha256_oneshot(undefined8 *param_1, undefined4 param_2, undefined4 param_3) {
   undefined1 local_88[136];
   xsha256(param_3, param_2, (int)local_88);
   *param_1 = *param_1;
   for (int i = 0; i < 3; i++) {
      param_1[( i + 1 )] = param_1[( i + 1 )];
   }

   return param_3;
}
undefined8 padlock_sha256_blocks(undefined8 *param_1, undefined4 param_2, undefined4 param_3) {
   undefined1 local_88[136];
   xsha256(param_3, param_2, (int)local_88);
   *param_1 = *param_1;
   for (int i = 0; i < 3; i++) {
      param_1[( i + 1 )] = param_1[( i + 1 )];
   }

   return CONCAT44(0xffffffff, param_3);
}
/* WARNING: Control flow encountered bad instruction data */void padlock_sha512_blocks(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
undefined8 padlock_ecb_encrypt(undefined8 *param_1, undefined8 *param_2, ulong param_3, ulong param_4) {
   long lVar1;
   ulong uVar2;
   undefined1(*pauVar3)[16];
   undefined4 uVar4;
   long extraout_RDX;
   ulong uVar5;
   undefined1(*pauVar6)[16];
   ulong uVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   byte in_AF;
   bool bVar10;
   byte in_TF;
   byte in_IF;
   byte bVar11;
   byte in_NT;
   byte in_AC;
   byte in_VIF;
   byte in_VIP;
   byte in_ID;
   ulong local_18;
   if (( param_3 & 0xf ) != 0) {
      return 0;
   }

   uVar7 = param_4 & 0xf;
   if (uVar7 == 0) {
      local_18 = ( ulong )(in_NT & 1) * 0x4000 | ( ulong )(in_IF & 1) * 0x200 | ( ulong )(in_TF & 1) * 0x100 | ( ulong )(uVar7 == 0) * 0x40 | ( ulong )(in_AF & 1) * 0x10 | ( ulong )(( POPCOUNT(uVar7) & 1U ) == 0) * 4 | ( ulong )(in_ID & 1) * 0x200000 | ( ulong )(in_VIP & 1) * 0x100000 | ( ulong )(in_VIF & 1) * 0x80000 | ( ulong )(in_AC & 1) * 0x40000;
      bVar11 = 0;
      _padlock_verify_ctx();
      uVar4 = SUB84((uint*)( extraout_RDX + 0x10 ), 0);
      if (( ( *(uint*)( extraout_RDX + 0x10 ) & 0x20 ) != 0 ) || ( bVar10 = ( (ulong)param_1 & 0xf ) == 0 ),bVar10 && ( (ulong)param_2 & 0xf ) == 0) {
         uVar7 = 0x7f;
         if (0x7f < ( -(long)((long)param_2 + param_4) & 0xfffU )) {
            uVar7 = 0;
         }

         uVar7 = uVar7 & param_4;
         if (( param_4 - uVar7 != 0 ) && ( xcrypt_ecb((int)( param_4 - uVar7 >> 4 ), uVar4, (int)extraout_RDX + 0x20, (int)param_2, (int)param_1),uVar7 == 0 )) {
            return 1;
         }

         lVar1 = -uVar7;
         pauVar3 = (undefined1(*) [16])( (long)&local_18 + lVar1 );
         puVar8 = param_2;
         puVar9 = (undefined8*)( (long)&local_18 + lVar1 );
         for (uVar5 = uVar7 >> 3; param_4 = uVar7,param_2 = (undefined8*)( (long)&local_18 + lVar1 ),uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
            puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
         }

      }
 else {
         uVar7 = 0x200;
         if (param_4 < 0x200) {
            uVar7 = param_4;
         }

         uVar5 = param_4 & 0x1ff;
         pauVar3 = (undefined1(*) [16])( (long)&local_18 - ( ~-(ulong)bVar10 & uVar7 ) );
         if (uVar5 == 0) {
            uVar5 = 0x200;
         }

         uVar7 = uVar5;
         if (param_4 <= uVar5) {
            puVar8 = param_2;
            if ((undefined1(*) [16])&local_18 == pauVar3) {
               puVar8 = param_1;
            }

            uVar2 = 0xffffffffffffff80;
            if (0x7f < ( -(long)((long)puVar8 + param_4) & 0xfffU )) {
               uVar2 = uVar5;
            }

            uVar7 = uVar5 & uVar2;
            pauVar6 = pauVar3;
            puVar8 = param_2;
            if (( uVar5 & uVar2 ) == 0) goto LAB_001003eb;
         }

      }

      while (true) {
         if (param_4 < uVar7) {
            uVar7 = param_4;
         }

         pauVar6 = (undefined1(*) [16])param_1;
         if (( (ulong)param_1 & 0xf ) != 0) {
            pauVar6 = pauVar3;
         }

         puVar8 = param_2;
         if (( (ulong)param_2 & 0xf ) != 0) {
            for (uVar5 = uVar7 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
               *(undefined8*)pauVar6 = *puVar8;
               puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
               pauVar6 = (undefined1(*) [16])( (long)pauVar6 + ( (ulong)bVar11 * -2 + 1 ) * 8 );
            }

            puVar8 = (undefined8*)( (long)pauVar6 - uVar7 );
            pauVar6 = (undefined1(*) [16])puVar8;
         }

         xcrypt_ecb((int)( uVar7 >> 4 ), uVar4, (int)extraout_RDX + 0x20, (int)puVar8, (int)pauVar6);
         if (( (ulong)param_1 & 0xf ) != 0) {
            pauVar6 = pauVar3;
            for (uVar5 = uVar7 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
               *param_1 = *(undefined8*)pauVar6;
               pauVar6 = (undefined1(*) [16])( (long)pauVar6 + ( (ulong)bVar11 * -2 + 1 ) * 8 );
               param_1 = param_1 + (ulong)bVar11 * -2 + 1;
            }

            param_1 = (undefined8*)( (long)param_1 - uVar7 );
         }

         param_1 = (undefined8*)( (long)param_1 + uVar7 );
         puVar8 = (undefined8*)( (long)param_2 + uVar7 );
         param_4 = param_4 - uVar7;
         if (param_4 == 0) break;
         uVar7 = 0x200;
         pauVar6 = pauVar3;
         param_2 = puVar8;
         if (param_4 < 0x200) {
            LAB_001003eb:uVar7 = 0;
            if ((undefined1(*) [16])&local_18 == pauVar6) {
               uVar7 = param_4;
            }

            lVar1 = -uVar7;
            pauVar3 = (undefined1(*) [16])( (long)pauVar6 + lVar1 );
            param_2 = (undefined8*)( (long)pauVar6 + lVar1 );
            puVar9 = (undefined8*)( (long)pauVar6 + lVar1 );
            for (uVar5 = param_4 >> 3; uVar7 = param_4,uVar5 != 0; uVar5 = uVar5 - 1) {
               *puVar9 = *puVar8;
               puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
               puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
            }

         }

      }
;
      if (pauVar3 != (undefined1(*) [16])&local_18) {
         do {
            *pauVar3 = (undefined1[16])0x0;
            pauVar3 = pauVar3 + 1;
         }
 while ( pauVar3 < (undefined1(*) [16])&local_18 );
      }

      return 1;
   }

   return 0;
}
undefined8 padlock_cbc_encrypt(undefined8 *param_1, undefined8 *param_2, ulong param_3, ulong param_4) {
   long lVar1;
   int iVar2;
   ulong uVar3;
   undefined1(*pauVar4)[16];
   undefined4 uVar5;
   undefined8 *extraout_RDX;
   ulong uVar6;
   undefined1(*pauVar7)[16];
   ulong uVar8;
   undefined8 *puVar9;
   undefined8 *puVar10;
   byte in_AF;
   bool bVar11;
   byte in_TF;
   byte in_IF;
   byte bVar12;
   byte in_NT;
   byte in_AC;
   byte in_VIF;
   byte in_VIP;
   byte in_ID;
   ulong local_18;
   if (( param_3 & 0xf ) != 0) {
      return 0;
   }

   uVar8 = param_4 & 0xf;
   if (uVar8 == 0) {
      local_18 = ( ulong )(in_NT & 1) * 0x4000 | ( ulong )(in_IF & 1) * 0x200 | ( ulong )(in_TF & 1) * 0x100 | ( ulong )(uVar8 == 0) * 0x40 | ( ulong )(in_AF & 1) * 0x10 | ( ulong )(( POPCOUNT(uVar8) & 1U ) == 0) * 4 | ( ulong )(in_ID & 1) * 0x200000 | ( ulong )(in_VIP & 1) * 0x100000 | ( ulong )(in_VIF & 1) * 0x80000 | ( ulong )(in_AC & 1) * 0x40000;
      bVar12 = 0;
      _padlock_verify_ctx();
      uVar5 = SUB84(extraout_RDX + 2, 0);
      iVar2 = (int)extraout_RDX;
      if (( ( *(uint*)( extraout_RDX + 2 ) & 0x20 ) != 0 ) || ( bVar11 = ( (ulong)param_1 & 0xf ) == 0 ),bVar11 && ( (ulong)param_2 & 0xf ) == 0) {
         uVar8 = 0x3f;
         if (0x3f < ( -(long)((long)param_2 + param_4) & 0xfffU )) {
            uVar8 = 0;
         }

         uVar8 = uVar8 & param_4;
         if (param_4 - uVar8 != 0) {
            xcrypt_cbc((int)( param_4 - uVar8 >> 4 ), iVar2, uVar5, iVar2 + 0x20, (int)param_2, (int)param_1);
            *extraout_RDX = *extraout_RDX;
            extraout_RDX[1] = extraout_RDX[1];
            if (uVar8 == 0) {
               return 1;
            }

         }

         lVar1 = -uVar8;
         pauVar4 = (undefined1(*) [16])( (long)&local_18 + lVar1 );
         puVar9 = param_2;
         puVar10 = (undefined8*)( (long)&local_18 + lVar1 );
         for (uVar6 = uVar8 >> 3; param_4 = uVar8,param_2 = (undefined8*)( (long)&local_18 + lVar1 ),uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + (ulong)bVar12 * -2 + 1;
            puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
         }

      }
 else {
         uVar8 = 0x200;
         if (param_4 < 0x200) {
            uVar8 = param_4;
         }

         uVar6 = param_4 & 0x1ff;
         pauVar4 = (undefined1(*) [16])( (long)&local_18 - ( ~-(ulong)bVar11 & uVar8 ) );
         if (uVar6 == 0) {
            uVar6 = 0x200;
         }

         uVar8 = uVar6;
         if (param_4 <= uVar6) {
            puVar9 = param_2;
            if ((undefined1(*) [16])&local_18 == pauVar4) {
               puVar9 = param_1;
            }

            uVar3 = 0xffffffffffffffc0;
            if (0x3f < ( -(long)((long)puVar9 + param_4) & 0xfffU )) {
               uVar3 = uVar6;
            }

            uVar8 = uVar6 & uVar3;
            pauVar7 = pauVar4;
            puVar9 = param_2;
            if (( uVar6 & uVar3 ) == 0) goto LAB_00100624;
         }

      }

      while (true) {
         if (param_4 < uVar8) {
            uVar8 = param_4;
         }

         pauVar7 = (undefined1(*) [16])param_1;
         if (( (ulong)param_1 & 0xf ) != 0) {
            pauVar7 = pauVar4;
         }

         puVar9 = param_2;
         if (( (ulong)param_2 & 0xf ) != 0) {
            for (uVar6 = uVar8 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
               *(undefined8*)pauVar7 = *puVar9;
               puVar9 = puVar9 + (ulong)bVar12 * -2 + 1;
               pauVar7 = (undefined1(*) [16])( (long)pauVar7 + ( (ulong)bVar12 * -2 + 1 ) * 8 );
            }

            puVar9 = (undefined8*)( (long)pauVar7 - uVar8 );
            pauVar7 = (undefined1(*) [16])puVar9;
         }

         xcrypt_cbc((int)( uVar8 >> 4 ), iVar2, uVar5, iVar2 + 0x20, (int)puVar9, (int)pauVar7);
         *extraout_RDX = *extraout_RDX;
         extraout_RDX[1] = extraout_RDX[1];
         if (( (ulong)param_1 & 0xf ) != 0) {
            pauVar7 = pauVar4;
            for (uVar6 = uVar8 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
               *param_1 = *(undefined8*)pauVar7;
               pauVar7 = (undefined1(*) [16])( (long)pauVar7 + ( (ulong)bVar12 * -2 + 1 ) * 8 );
               param_1 = param_1 + (ulong)bVar12 * -2 + 1;
            }

            param_1 = (undefined8*)( (long)param_1 - uVar8 );
         }

         param_1 = (undefined8*)( (long)param_1 + uVar8 );
         puVar9 = (undefined8*)( (long)param_2 + uVar8 );
         param_4 = param_4 - uVar8;
         if (param_4 == 0) break;
         uVar8 = 0x200;
         pauVar7 = pauVar4;
         param_2 = puVar9;
         if (param_4 < 0x200) {
            LAB_00100624:uVar8 = 0;
            if ((undefined1(*) [16])&local_18 == pauVar7) {
               uVar8 = param_4;
            }

            lVar1 = -uVar8;
            pauVar4 = (undefined1(*) [16])( (long)pauVar7 + lVar1 );
            param_2 = (undefined8*)( (long)pauVar7 + lVar1 );
            puVar10 = (undefined8*)( (long)pauVar7 + lVar1 );
            for (uVar6 = param_4 >> 3; uVar8 = param_4,uVar6 != 0; uVar6 = uVar6 - 1) {
               *puVar10 = *puVar9;
               puVar9 = puVar9 + (ulong)bVar12 * -2 + 1;
               puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
            }

         }

      }
;
      if (pauVar4 != (undefined1(*) [16])&local_18) {
         do {
            *pauVar4 = (undefined1[16])0x0;
            pauVar4 = pauVar4 + 1;
         }
 while ( pauVar4 < (undefined1(*) [16])&local_18 );
      }

      return 1;
   }

   return 0;
}
undefined8 padlock_cfb_encrypt(undefined1 (*param_1)[16], undefined1 (*param_2)[16], ulong param_3, ulong param_4) {
   int iVar1;
   undefined1(*pauVar2)[16];
   undefined8 uVar3;
   ulong uVar4;
   undefined4 uVar5;
   undefined8 *extraout_RDX;
   ulong uVar6;
   undefined1(*pauVar7)[16];
   undefined1(*pauVar8)[16];
   byte in_AF;
   bool bVar9;
   byte in_TF;
   byte in_IF;
   byte bVar10;
   byte in_NT;
   byte in_AC;
   byte in_VIF;
   byte in_VIP;
   byte in_ID;
   ulong local_18;
   uVar3 = 0;
   if (( param_3 & 0xf ) == 0) {
      uVar4 = param_4 & 0xf;
      if (uVar4 == 0) {
         local_18 = ( ulong )(in_NT & 1) * 0x4000 | ( ulong )(in_IF & 1) * 0x200 | ( ulong )(in_TF & 1) * 0x100 | ( ulong )(uVar4 == 0) * 0x40 | ( ulong )(in_AF & 1) * 0x10 | ( ulong )(( POPCOUNT(uVar4) & 1U ) == 0) * 4 | ( ulong )(in_ID & 1) * 0x200000 | ( ulong )(in_VIP & 1) * 0x100000 | ( ulong )(in_VIF & 1) * 0x80000 | ( ulong )(in_AC & 1) * 0x40000;
         bVar10 = 0;
         _padlock_verify_ctx();
         uVar5 = SUB84(extraout_RDX + 2, 0);
         iVar1 = (int)extraout_RDX;
         if (( ( *(uint*)( extraout_RDX + 2 ) & 0x20 ) != 0 ) || ( bVar9 = ( (ulong)param_1 & 0xf ) == 0 ),bVar9 && ( (ulong)param_2 & 0xf ) == 0) {
            xcrypt_cfb((int)( param_4 >> 4 ), iVar1, uVar5, iVar1 + 0x20, (int)param_2, (int)param_1);
            *extraout_RDX = *extraout_RDX;
            extraout_RDX[1] = extraout_RDX[1];
         }
 else {
            uVar4 = 0x200;
            if (param_4 < 0x200) {
               uVar4 = param_4;
            }

            uVar6 = param_4 & 0x1ff;
            pauVar2 = (undefined1(*) [16])( (long)&local_18 - ( ~-(ulong)bVar9 & uVar4 ) );
            if (uVar6 == 0) {
               uVar6 = 0x200;
            }

            do {
               if (param_4 < uVar6) {
                  uVar6 = param_4;
               }

               pauVar7 = param_1;
               if (( (ulong)param_1 & 0xf ) != 0) {
                  pauVar7 = pauVar2;
               }

               pauVar8 = param_2;
               if (( (ulong)param_2 & 0xf ) != 0) {
                  for (uVar4 = uVar6 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                     *(undefined8*)*pauVar7 = *(undefined8*)*pauVar8;
                     pauVar8 = (undefined1(*) [16])( pauVar8[-(ulong)bVar10] + 8 );
                     pauVar7 = (undefined1(*) [16])( pauVar7[-(ulong)bVar10] + 8 );
                  }

                  pauVar8 = (undefined1(*) [16])( (long)pauVar7 - uVar6 );
                  pauVar7 = pauVar8;
               }

               xcrypt_cfb((int)( uVar6 >> 4 ), iVar1, uVar5, iVar1 + 0x20, (int)pauVar8, (int)pauVar7);
               *extraout_RDX = *extraout_RDX;
               extraout_RDX[1] = extraout_RDX[1];
               if (( (ulong)param_1 & 0xf ) != 0) {
                  pauVar7 = pauVar2;
                  for (uVar4 = uVar6 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                     *(undefined8*)*param_1 = *(undefined8*)*pauVar7;
                     pauVar7 = (undefined1(*) [16])( pauVar7[-(ulong)bVar10] + 8 );
                     param_1 = (undefined1(*) [16])( param_1[-(ulong)bVar10] + 8 );
                  }

                  param_1 = (undefined1(*) [16])( (long)param_1 - uVar6 );
               }

               param_1 = (undefined1(*) [16])( *param_1 + uVar6 );
               param_2 = (undefined1(*) [16])( *param_2 + uVar6 );
               param_4 = param_4 - uVar6;
               uVar6 = 0x200;
            }
 while ( param_4 != 0 );
            if (pauVar2 != (undefined1(*) [16])&local_18) {
               do {
                  *pauVar2 = (undefined1[16])0x0;
                  pauVar2 = pauVar2 + 1;
               }
 while ( pauVar2 < (undefined1(*) [16])&local_18 );
            }

         }

         uVar3 = 1;
      }

   }

   return uVar3;
}
undefined8 padlock_ofb_encrypt(undefined1 (*param_1)[16], undefined1 (*param_2)[16], ulong param_3, ulong param_4) {
   int iVar1;
   undefined1(*pauVar2)[16];
   undefined8 uVar3;
   ulong uVar4;
   undefined4 uVar5;
   undefined8 *extraout_RDX;
   ulong uVar6;
   undefined1(*pauVar7)[16];
   undefined1(*pauVar8)[16];
   byte in_AF;
   bool bVar9;
   byte in_TF;
   byte in_IF;
   byte bVar10;
   byte in_NT;
   byte in_AC;
   byte in_VIF;
   byte in_VIP;
   byte in_ID;
   ulong local_18;
   uVar3 = 0;
   if (( param_3 & 0xf ) == 0) {
      uVar4 = param_4 & 0xf;
      if (uVar4 == 0) {
         local_18 = ( ulong )(in_NT & 1) * 0x4000 | ( ulong )(in_IF & 1) * 0x200 | ( ulong )(in_TF & 1) * 0x100 | ( ulong )(uVar4 == 0) * 0x40 | ( ulong )(in_AF & 1) * 0x10 | ( ulong )(( POPCOUNT(uVar4) & 1U ) == 0) * 4 | ( ulong )(in_ID & 1) * 0x200000 | ( ulong )(in_VIP & 1) * 0x100000 | ( ulong )(in_VIF & 1) * 0x80000 | ( ulong )(in_AC & 1) * 0x40000;
         bVar10 = 0;
         _padlock_verify_ctx();
         uVar5 = SUB84(extraout_RDX + 2, 0);
         iVar1 = (int)extraout_RDX;
         if (( ( *(uint*)( extraout_RDX + 2 ) & 0x20 ) != 0 ) || ( bVar9 = ( (ulong)param_1 & 0xf ) == 0 ),bVar9 && ( (ulong)param_2 & 0xf ) == 0) {
            xcrypt_ofb((int)( param_4 >> 4 ), iVar1, uVar5, iVar1 + 0x20, (int)param_2, (int)param_1);
            *extraout_RDX = *extraout_RDX;
            extraout_RDX[1] = extraout_RDX[1];
         }
 else {
            uVar4 = 0x200;
            if (param_4 < 0x200) {
               uVar4 = param_4;
            }

            uVar6 = param_4 & 0x1ff;
            pauVar2 = (undefined1(*) [16])( (long)&local_18 - ( ~-(ulong)bVar9 & uVar4 ) );
            if (uVar6 == 0) {
               uVar6 = 0x200;
            }

            do {
               if (param_4 < uVar6) {
                  uVar6 = param_4;
               }

               pauVar7 = param_1;
               if (( (ulong)param_1 & 0xf ) != 0) {
                  pauVar7 = pauVar2;
               }

               pauVar8 = param_2;
               if (( (ulong)param_2 & 0xf ) != 0) {
                  for (uVar4 = uVar6 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                     *(undefined8*)*pauVar7 = *(undefined8*)*pauVar8;
                     pauVar8 = (undefined1(*) [16])( pauVar8[-(ulong)bVar10] + 8 );
                     pauVar7 = (undefined1(*) [16])( pauVar7[-(ulong)bVar10] + 8 );
                  }

                  pauVar8 = (undefined1(*) [16])( (long)pauVar7 - uVar6 );
                  pauVar7 = pauVar8;
               }

               xcrypt_ofb((int)( uVar6 >> 4 ), iVar1, uVar5, iVar1 + 0x20, (int)pauVar8, (int)pauVar7);
               *extraout_RDX = *extraout_RDX;
               extraout_RDX[1] = extraout_RDX[1];
               if (( (ulong)param_1 & 0xf ) != 0) {
                  pauVar7 = pauVar2;
                  for (uVar4 = uVar6 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                     *(undefined8*)*param_1 = *(undefined8*)*pauVar7;
                     pauVar7 = (undefined1(*) [16])( pauVar7[-(ulong)bVar10] + 8 );
                     param_1 = (undefined1(*) [16])( param_1[-(ulong)bVar10] + 8 );
                  }

                  param_1 = (undefined1(*) [16])( (long)param_1 - uVar6 );
               }

               param_1 = (undefined1(*) [16])( *param_1 + uVar6 );
               param_2 = (undefined1(*) [16])( *param_2 + uVar6 );
               param_4 = param_4 - uVar6;
               uVar6 = 0x200;
            }
 while ( param_4 != 0 );
            if (pauVar2 != (undefined1(*) [16])&local_18) {
               do {
                  *pauVar2 = (undefined1[16])0x0;
                  pauVar2 = pauVar2 + 1;
               }
 while ( pauVar2 < (undefined1(*) [16])&local_18 );
            }

         }

         uVar3 = 1;
      }

   }

   return uVar3;
}
undefined8 padlock_ctr32_encrypt(undefined8 *param_1, undefined8 *param_2, ulong param_3, ulong param_4) {
   long lVar1;
   int iVar2;
   uint uVar3;
   uint uVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined1(*pauVar7)[16];
   ulong uVar8;
   ulong uVar9;
   undefined4 uVar10;
   long extraout_RDX;
   undefined1(*pauVar11)[16];
   undefined8 *puVar12;
   byte in_AF;
   bool bVar13;
   byte in_TF;
   byte in_IF;
   byte bVar14;
   byte in_NT;
   byte in_AC;
   byte in_VIF;
   byte in_VIP;
   byte in_ID;
   ulong local_18;
   if (( param_3 & 0xf ) != 0) {
      return 0;
   }

   uVar8 = param_4 & 0xf;
   if (uVar8 != 0) {
      return 0;
   }

   local_18 = ( ulong )(in_NT & 1) * 0x4000 | ( ulong )(in_IF & 1) * 0x200 | ( ulong )(in_TF & 1) * 0x100 | ( ulong )(uVar8 == 0) * 0x40 | ( ulong )(in_AF & 1) * 0x10 | ( ulong )(( POPCOUNT(uVar8) & 1U ) == 0) * 4 | ( ulong )(in_ID & 1) * 0x200000 | ( ulong )(in_VIP & 1) * 0x100000 | ( ulong )(in_VIF & 1) * 0x80000 | ( ulong )(in_AC & 1) * 0x40000;
   bVar14 = 0;
   _padlock_verify_ctx();
   uVar10 = SUB84((uint*)( extraout_RDX + 0x10 ), 0);
   iVar2 = (int)extraout_RDX;
   if (( ( *(uint*)( extraout_RDX + 0x10 ) & 0x20 ) != 0 ) || ( bVar13 = ( (ulong)param_1 & 0xf ) == 0 ),bVar13 && ( (ulong)param_2 & 0xf ) == 0) {
      uVar3 = -(*(uint *)(extraout_RDX + 0xc) >> 0x18 |
             (*(uint *)(extraout_RDX + 0xc) & 0xff0000) >> 8) & 0xffff;
      uVar8 = ( ulong )(uVar3 << 4);
      if (uVar3 == 0) {
         uVar8 = 0x100000;
      }

      uVar5 = uVar8;
      if (param_4 <= uVar8) {
         uVar5 = param_4;
      }

      uVar9 = param_4;
      if (uVar8 < param_4) {
         do {
            xcrypt_ctr((int)( uVar5 >> 4 ), iVar2, uVar10, iVar2 + 0x20, (int)param_2, (int)param_1);
            uVar3 = *(uint*)( extraout_RDX + 0xc );
            uVar4 = ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 ) + 0x10000;
            *(uint*)( extraout_RDX + 0xc ) = uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | ( uVar3 >> 0x18 ) << 0x18;
            param_4 = param_4 - uVar5;
            uVar5 = 0x100000;
            if (param_4 == 0) {
               return 1;
            }

            uVar9 = param_4;
         }
 while ( 0xfffff < param_4 );
      }

      param_4 = 0x1f;
      if (0x1f < ( -(long)((long)param_2 + uVar9) & 0xfffU )) {
         param_4 = 0;
      }

      param_4 = param_4 & uVar9;
      if (( uVar9 - param_4 != 0 ) && ( xcrypt_ctr((int)( uVar9 - param_4 >> 4 ), iVar2, uVar10, iVar2 + 0x20, (int)param_2, (int)param_1),param_4 == 0 )) {
         return 1;
      }

      lVar1 = -param_4;
      pauVar7 = (undefined1(*) [16])( (long)&local_18 + lVar1 );
      puVar6 = (undefined8*)( (long)&local_18 + lVar1 );
      puVar12 = (undefined8*)( (long)&local_18 + lVar1 );
      for (uVar8 = param_4 >> 3; uVar5 = param_4,uVar8 != 0; uVar8 = uVar8 - 1) {
         *puVar12 = *param_2;
         param_2 = param_2 + (ulong)bVar14 * -2 + 1;
         puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
      }

   }
 else {
      uVar8 = 0x200;
      if (param_4 < 0x200) {
         uVar8 = param_4;
      }

      pauVar7 = (undefined1(*) [16])( (long)&local_18 - ( ~-(ulong)bVar13 & uVar8 ) );
      uVar3 = -(*(uint *)(extraout_RDX + 0xc) >> 0x18) & 0x1f;
      uVar5 = ( ulong )(uVar3 << 4);
      if (uVar3 == 0) {
         uVar5 = 0x200;
      }

      if (param_4 <= uVar5) {
         uVar5 = param_4;
      }

      puVar6 = param_2;
      if (param_4 <= uVar5) {
         if ((undefined1(*) [16])&local_18 == pauVar7) {
            puVar6 = param_1;
         }

         uVar8 = 0xffffffffffffffe0;
         if (0x1f < ( -(long)((long)puVar6 + param_4) & 0xfffU )) {
            uVar8 = uVar5;
         }

         uVar5 = uVar5 & uVar8;
         pauVar11 = pauVar7;
         goto joined_r0x00100ad3;
      }

   }

   while (true) {
      if (param_4 < uVar5) {
         uVar5 = param_4;
      }

      pauVar11 = (undefined1(*) [16])param_1;
      if (( (ulong)param_1 & 0xf ) != 0) {
         pauVar11 = pauVar7;
      }

      puVar12 = puVar6;
      if (( (ulong)puVar6 & 0xf ) != 0) {
         for (uVar8 = uVar5 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined8*)pauVar11 = *puVar12;
            puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
            pauVar11 = (undefined1(*) [16])( (long)pauVar11 + ( (ulong)bVar14 * -2 + 1 ) * 8 );
         }

         puVar12 = (undefined8*)( (long)pauVar11 - uVar5 );
         pauVar11 = (undefined1(*) [16])puVar12;
      }

      xcrypt_ctr((int)( uVar5 >> 4 ), iVar2, uVar10, iVar2 + 0x20, (int)puVar12, (int)pauVar11);
      uVar3 = *(uint*)( extraout_RDX + 0xc );
      if (( uVar3 & 0xffff0000 ) == 0) {
         uVar4 = ( uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18 ) + 0x10000;
         *(uint*)( extraout_RDX + 0xc ) = uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | ( uVar3 >> 0x18 ) << 0x18;
      }

      if (( (ulong)param_1 & 0xf ) != 0) {
         pauVar11 = pauVar7;
         for (uVar8 = uVar5 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *param_1 = *(undefined8*)pauVar11;
            pauVar11 = (undefined1(*) [16])( (long)pauVar11 + ( (ulong)bVar14 * -2 + 1 ) * 8 );
            param_1 = param_1 + (ulong)bVar14 * -2 + 1;
         }

         param_1 = (undefined8*)( (long)param_1 - uVar5 );
      }

      param_1 = (undefined8*)( (long)param_1 + uVar5 );
      param_2 = (undefined8*)( (long)puVar6 + uVar5 );
      param_4 = param_4 - uVar5;
      if (param_4 == 0) break;
      uVar5 = 0x200;
      puVar6 = param_2;
      if (param_4 < 0x200) {
         if ((undefined1(*) [16])&local_18 == pauVar7) {
            puVar6 = param_1;
         }

         uVar5 = 0xffffffffffffffe0;
         if (0x1f < ( -(long)((long)puVar6 + param_4) & 0xfffU )) {
            uVar5 = param_4;
         }

         uVar5 = param_4 & uVar5;
         pauVar11 = pauVar7;
         joined_r0x00100ad3:pauVar7 = pauVar11;
         puVar6 = param_2;
         if (uVar5 == 0) {
            uVar8 = 0;
            if ((undefined1(*) [16])&local_18 == pauVar11) {
               uVar8 = param_4;
            }

            lVar1 = -uVar8;
            pauVar7 = (undefined1(*) [16])( (long)pauVar11 + lVar1 );
            puVar6 = (undefined8*)( (long)pauVar11 + lVar1 );
            puVar12 = (undefined8*)( (long)pauVar11 + lVar1 );
            for (uVar8 = param_4 >> 3; uVar5 = param_4,uVar8 != 0; uVar8 = uVar8 - 1) {
               *puVar12 = *param_2;
               param_2 = param_2 + (ulong)bVar14 * -2 + 1;
               puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
            }

         }

      }

   }
;
   if (pauVar7 != (undefined1(*) [16])&local_18) {
      do {
         *pauVar7 = (undefined1[16])0x0;
         pauVar7 = pauVar7 + 1;
      }
 while ( pauVar7 < (undefined1(*) [16])&local_18 );
   }

   return 1;
}

