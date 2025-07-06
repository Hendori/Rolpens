long OPENSSL_atomic_add(int *param_1, int param_2) {
   int iVar1;
   int iVar2;
   int iVar3;
   bool bVar4;
   iVar3 = *param_1;
   do {
      iVar1 = param_2 + iVar3;
      LOCK();
      iVar2 = *param_1;
      bVar4 = iVar3 == iVar2;
      if (bVar4) {
         *param_1 = iVar1;
         iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
   } while ( !bVar4 );
   return (long)iVar1;
}ulong OPENSSL_rdtsc(void) {
   ulong uVar1;
   undefined8 in_RAX;
   uVar1 = rdtsc();
   return CONCAT44((int)( (ulong)in_RAX >> 0x20 ), (int)uVar1) | uVar1 & 0xffffffff00000000;
}/* WARNING: Removing unreachable block (ram,0x00100212) *//* WARNING: Removing unreachable block (ram,0x001001ef) *//* WARNING: Removing unreachable block (ram,0x001001aa) *//* WARNING: Removing unreachable block (ram,0x001000d2) *//* WARNING: Removing unreachable block (ram,0x001000c4) *//* WARNING: Removing unreachable block (ram,0x00100120) *//* WARNING: Removing unreachable block (ram,0x0010010b) *//* WARNING: Removing unreachable block (ram,0x001000aa) *//* WARNING: Removing unreachable block (ram,0x00100099) *//* WARNING: Removing unreachable block (ram,0x0010003d) */undefined1[16];OPENSSL_ia32_cpuid(uint param_1, long param_2) {
   uint *puVar1;
   uint *puVar2;
   long lVar3;
   long lVar4;
   int *piVar5;
   undefined4 *puVar6;
   int iVar7;
   undefined4 uVar8;
   int iVar9;
   undefined4 uVar10;
   byte bVar11;
   uint uVar12;
   uint uVar13;
   uint uVar14;
   ulong uVar15;
   ulong uVar16;
   uint uVar17;
   ulong uVar18;
   uint uVar19;
   uint in_XCR0;
   uint in_register_00000604;
   undefined1 auVar20[16];
   *(undefined8*)( param_2 + 8 ) = 0;
   puVar1 = (uint*)cpuid_basic_info(0);
   uVar17 = ( uint )(( puVar1[1] != 0x756e6547 || puVar1[2] != 0x49656e69 ) || puVar1[3] != 0x6c65746e);
   if (( uVar17 != 0 ) && ( ( puVar1[1] == 0x68747541 && puVar1[2] == 0x69746e65 ) && puVar1[3] == 0x444d4163 )) {
      puVar2 = (uint*)cpuid(0x80000000);
      if (0x80000000 < *puVar2) {
         lVar3 = cpuid(0x80000001);
         uVar17 = uVar17 | *(uint*)( lVar3 + 0xc ) & 0x801;
         if (0x80000007 < *puVar2) {
            lVar3 = cpuid(0x80000008);
            lVar4 = cpuid_Version_info(1);
            uVar19 = *(uint*)( lVar4 + 8 );
            uVar15 = (ulong)uVar19;
            uVar12 = *(uint*)( lVar4 + 0xc );
            if (( ( uVar19 >> 0x1c & 1 ) != 0 ) && ( ( byte )(( uint ) * (undefined4*)( lVar4 + 4 ) >> 0x10) <= ( byte )((char)*(undefined4*)( lVar3 + 0xc ) + 1U) )) {
               uVar15 = ( ulong )(uVar19 & 0xefffffff);
            }
            goto LAB_0010018a;
         }
      }
   }
   uVar19 = 0xffffffff;
   if (3 < *puVar1) {
      puVar2 = (uint*)cpuid_Deterministic_Cache_Parameters_info(4);
      uVar19 = *puVar2 >> 0xe & 0xfff;
   }
   puVar2 = (uint*)cpuid_Version_info(1);
   param_1 = *puVar2;
   uVar12 = puVar2[3];
   uVar13 = puVar2[2] & 0xbfefffff;
   uVar15 = (ulong)uVar13;
   if (uVar17 == 0) {
      uVar14 = uVar13 | 0x40000000;
      bVar11 = ( byte )(param_1 >> 8) & 0xf;
      if (bVar11 == 0xf) {
         uVar14 = uVar13 | 0x40100000;
      }
      uVar15 = (ulong)uVar14;
      if (( bVar11 == 6 ) && ( ( ( param_1 & 0xfff0ff0 ) == 0x50670 || ( ( param_1 & 0xfff0ff0 ) == 0x80650 ) ) )) {
         uVar12 = uVar12 & 0xfbffffff;
      }
   }
   if (( (uint)uVar15 >> 0x1c & 1 ) != 0) {
      uVar13 = (uint)uVar15 & 0xefffffff;
      uVar15 = (ulong)uVar13;
      if (( uVar19 != 0 ) && ( uVar15 = ( ulong )(uVar13 | 0x10000000)(byte)(puVar2[1] >> 0x10) < 2 )) {
         uVar15 = (ulong)uVar13;
      }
   }
   LAB_0010018a:uVar18 = ( ulong )(uVar17 & 0x800 | uVar12 & 0xfffff7ff);
   uVar16 = uVar15;
   if (6 < *puVar1) {
      piVar5 = (int*)cpuid_Extended_Feature_Enumeration_info(7);
      iVar7 = *piVar5;
      uVar17 = piVar5[1];
      uVar19 = piVar5[2];
      uVar16 = (ulong)uVar19;
      iVar9 = piVar5[3];
      if (( uVar12 & 0x4000000 ) == 0) {
         uVar17 = uVar17 & 0xfff7ffff;
      }
      if (( param_1 & 0xfff0ff0 ) == 0x50650) {
         uVar17 = uVar17 & 0xfffeffff;
      }
      *(uint*)( param_2 + 8 ) = uVar17;
      *(int*)( param_2 + 0xc ) = iVar9;
      *(uint*)( param_2 + 0x10 ) = uVar19;
      if (iVar7 != 0) {
         puVar6 = (undefined4*)cpuid_Extended_Feature_Enumeration_info(7);
         uVar8 = puVar6[1];
         uVar17 = puVar6[2];
         uVar10 = puVar6[3];
         *(undefined4*)( param_2 + 0x14 ) = *puVar6;
         *(uint*)( param_2 + 0x18 ) = uVar17;
         *(undefined4*)( param_2 + 0x1c ) = uVar8;
         *(undefined4*)( param_2 + 0x20 ) = uVar10;
         uVar17 = uVar17 & 0x80000;
         uVar16 = (ulong)uVar17;
         if (uVar17 != 0) {
            lVar3 = cpuid(0x24);
            uVar16 = ( ulong ) * (uint*)( lVar3 + 8 );
            *(undefined4*)( param_2 + 0x24 ) = *(undefined4*)( lVar3 + 4 );
         }
      }
   }
   if (( ( uVar12 & 0x8000000 ) == 0 ) || ( ( uVar16 = (ulong)in_register_00000604(in_XCR0 & 0xe6) != 0xe6 && ( *(uint*)( param_2 + 8 ) = *(uint*)( param_2 + 8 ) & 0x3fdeffff(in_XCR0 & 6) != 6 ) ) )) {
      *(uint*)( param_2 + 0x14 ) = *(uint*)( param_2 + 0x14 ) & 0xff7fffff;
      uVar18 = ( ulong )(uVar12 & 0xefffe7ff);
      *(uint*)( param_2 + 8 ) = *(uint*)( param_2 + 8 ) & 0x3fdeffdf;
   }
   auVar20._0_8_ = uVar15 | uVar18 << 0x20;
   auVar20._8_8_ = uVar16;
   return auVar20;
}void OPENSSL_cleanse(void *ptr, size_t len) {
   if (len < 0xf) {
      if (len == 0) {
         return;
      }
   } else {
      for (; ( (ulong)ptr & 7 ) != 0; ptr = (void*)( (long)ptr + 1 )) {
         *(undefined1*)ptr = 0;
         len = len - 1;
      }
      do {
         *(undefined8*)ptr = 0;
         len = len - 8;
         ptr = (void*)( (long)ptr + 8 );
      } while ( ( len & 0xfffffffffffffff8 ) != 0 );
      if (len == 0) {
         return;
      }
   }
   do {
      *(undefined1*)ptr = 0;
      len = len - 1;
      ptr = (void*)( (long)ptr + 1 );
   } while ( len != 0 );
   return;
}int CRYPTO_memcmp(void *a, void *b, size_t len) {
   byte bVar1;
   byte bVar2;
   uint uVar3;
   ulong uVar4;
   uVar4 = 0;
   uVar3 = 0;
   if (len != 0) {
      if (len == 0x10) {
         for (int i_41 = 0; i_41 < 2; i_41++) {
            /* WARNING: Load size is inaccurate */
         }
         return (int)( *a != *b || *(long*)( (long)a + 8 ) != *(long*)( (long)b + 8 ) );
      }
      do {
         /* WARNING: Load size is inaccurate */
         bVar1 = *a;
         a = (void*)( (long)a + 1 );
         /* WARNING: Load size is inaccurate */
         bVar2 = *b;
         b = (void*)( (long)b + 1 );
         uVar4 = ( ulong )(byte)((byte)uVar4 | bVar1 ^ bVar2);
         len = len - 1;
      } while ( len != 0 );
      uVar3 = ( uint )(-uVar4 >> 0x3f);
   }
   return uVar3;
}undefined1 *OPENSSL_wipe_cpu(void) {
   return &stack0x00000008;
}long OPENSSL_instrument_bus(int *param_1, long param_2) {
   undefined8 uVar1;
   long lVar2;
   int iVar3;
   uVar1 = rdtsc();
   clflush((char)*param_1);
   LOCK();
   *param_1 = *param_1;
   UNLOCK();
   lVar2 = param_2;
   iVar3 = (int)uVar1;
   do {
      uVar1 = rdtsc();
      clflush((char)*param_1);
      LOCK();
      *param_1 = *param_1 + ( (int)uVar1 - iVar3 );
      UNLOCK();
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
      iVar3 = (int)uVar1;
   } while ( lVar2 != 0 );
   return param_2;
}long OPENSSL_instrument_bus2(int *param_1, long param_2, long param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   long lVar4;
   ulong uVar5;
   int iVar6;
   int iVar7;
   uVar1 = rdtsc();
   clflush((char)*param_1);
   LOCK();
   *param_1 = *param_1;
   UNLOCK();
   uVar2 = rdtsc();
   lVar4 = param_2;
   iVar6 = (int)uVar2;
   iVar7 = (int)uVar2 - (int)uVar1;
   do {
      clflush((char)*param_1);
      LOCK();
      *param_1 = *param_1 + iVar7;
      UNLOCK();
      param_3 = param_3 + -1;
      if (param_3 == 0) break;
      uVar1 = rdtsc();
      iVar3 = (int)uVar1 - iVar6;
      uVar5 = ( ulong )(iVar3 != iVar7);
      lVar4 = lVar4 - uVar5;
      param_1 = param_1 + uVar5;
      iVar6 = (int)uVar1;
      iVar7 = iVar3;
   } while ( lVar4 != 0 );
   return param_2 - lVar4;
}long OPENSSL_ia32_rdrand_bytes(ulong *param_1, ulong param_2) {
   long lVar1;
   ulong uVar2;
   long lVar3;
   bool bVar4;
   lVar1 = 0;
   if (param_2 != 0) {
      lVar3 = 8;
      do {
         while (true) {
            uVar2 = rdrand();
            bVar4 = (bool)rdrandIsValid();
            if (!bVar4) break;
            if (param_2 < 8) {
               do {
                  *(char*)param_1 = (char)uVar2;
                  param_1 = (ulong*)( (long)param_1 + 1 );
                  lVar1 = lVar1 + 1;
                  uVar2 = uVar2 >> 8;
                  param_2 = param_2 - 1;
               } while ( param_2 != 0 );
               return lVar1;
            }
            *param_1 = uVar2;
            param_1 = param_1 + 1;
            lVar1 = lVar1 + 8;
            param_2 = param_2 - 8;
            if (param_2 == 0) {
               return lVar1;
            }
            lVar3 = 8;
         };
         lVar3 = lVar3 + -1;
      } while ( lVar3 != 0 );
   }
   return lVar1;
}long OPENSSL_ia32_rdseed_bytes(ulong *param_1, ulong param_2) {
   long lVar1;
   ulong uVar2;
   long lVar3;
   bool bVar4;
   lVar1 = 0;
   if (param_2 != 0) {
      lVar3 = 8;
      do {
         while (true) {
            uVar2 = rdseed();
            bVar4 = (bool)rdseedIsValid();
            if (!bVar4) break;
            if (param_2 < 8) {
               do {
                  *(char*)param_1 = (char)uVar2;
                  param_1 = (ulong*)( (long)param_1 + 1 );
                  lVar1 = lVar1 + 1;
                  uVar2 = uVar2 >> 8;
                  param_2 = param_2 - 1;
               } while ( param_2 != 0 );
               return lVar1;
            }
            *param_1 = uVar2;
            param_1 = param_1 + 1;
            lVar1 = lVar1 + 8;
            param_2 = param_2 - 8;
            if (param_2 == 0) {
               return lVar1;
            }
            lVar3 = 8;
         };
         lVar3 = lVar3 + -1;
      } while ( lVar3 != 0 );
   }
   return lVar1;
}
