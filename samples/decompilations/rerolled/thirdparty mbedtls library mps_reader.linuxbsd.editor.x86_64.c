undefined8 mbedtls_mps_reader_init(undefined1 (*param_1)[16], undefined8 param_2, undefined8 param_3) {
   *(undefined8*)param_1[4] = 0;
   param_1[2] = (undefined1[16])0x0;
   param_1[3] = (undefined1[16])0x0;
   *(undefined8*)( param_1[2] + 8 ) = param_2;
   *(undefined8*)param_1[3] = param_3;
   *param_1 = (undefined1[16])0x0;
   param_1[1] = (undefined1[16])0x0;
   return 0;
}
undefined8 mbedtls_mps_reader_free(undefined1 (*param_1)[16]) {
   *(undefined8*)param_1[4] = 0;
   *param_1 = (undefined1[16])0x0;
   for (int i = 0; i < 3; i++) {
      param_1[( i + 1 )] = (undefined1[16])0;
   }

   return 0;
}
undefined8 mbedtls_mps_reader_feed(long *param_1, void *param_2, ulong param_3) {
   ulong uVar1;
   long lVar2;
   undefined8 uVar3;
   ulong __n;
   if (param_2 == (void*)0x0) {
      return 0xfffffefe;
   }

   if (*param_1 == 0) {
      if (( param_1[5] == 0 ) || ( uVar1 = uVar1 == 0 )) {
         param_1[8] = 0;
      }
 else {
         lVar2 = param_1[7];
         __n = uVar1;
         if (param_3 <= uVar1) {
            __n = param_3;
         }

         memcpy((void*)( param_1[5] + lVar2 ), param_2, __n);
         if (uVar1 - __n != 0) {
            param_1[7] = __n + lVar2;
            param_1[8] = uVar1 - __n;
            return 0xfffffefd;
         }

         param_1[7] = __n + lVar2;
         param_1[8] = lVar2;
      }

      *param_1 = (long)param_2;
      uVar3 = 0;
      param_1[1] = param_3;
      param_1[2] = 0;
      param_1[3] = 0;
   }
 else {
      uVar3 = 0xffffffff;
   }

   return uVar3;
}
undefined8 mbedtls_mps_reader_get(long *param_1, ulong param_2, long *param_3, ulong *param_4) {
   long lVar1;
   ulong uVar2;
   ulong uVar3;
   ulong uVar4;
   lVar1 = *param_1;
   if (lVar1 == 0) {
      return 0xffffffff;
   }

   uVar2 = param_1[3];
   if (param_1[5] == 0) {
      uVar3 = 0;
      uVar4 = uVar2;
      LAB_001001a5:uVar3 = uVar3 + ( param_1[1] - uVar2 );
      if (param_2 <= uVar3) {
         *param_3 = lVar1 + uVar4;
         goto joined_r0x001001d1;
      }

      if (param_4 == (ulong*)0x0) {
         if (uVar3 != 0) {
            param_1[4] = param_2 - uVar3;
         }

         return 0xfffffefc;
      }

      *param_3 = lVar1 + uVar4;
   }
 else {
      uVar3 = param_1[8];
      uVar4 = uVar2 - uVar3;
      if (uVar3 <= uVar2) goto LAB_001001a5;
      if (( uVar3 - uVar2 < param_2 ) && ( param_1[7] - uVar2 != param_2 )) {
         return 0xfffffefb;
      }

      *param_3 = param_1[5] + uVar2;
      joined_r0x001001d1:uVar3 = param_2;
      if (param_4 == (ulong*)0x0) goto LAB_00100187;
   }

   *param_4 = uVar3;
   LAB_00100187:param_1[4] = 0;
   param_1[3] = uVar2 + uVar3;
   return 0;
}
undefined8 mbedtls_mps_reader_commit(long *param_1) {
   if (*param_1 != 0) {
      param_1[2] = param_1[3];
      return 0;
   }

   return 0xffffffff;
}
undefined8 mbedtls_mps_reader_reclaim(long *param_1, undefined4 *param_2) {
   long lVar1;
   ulong uVar2;
   ulong uVar3;
   void *pvVar4;
   ulong __n;
   ulong uVar5;
   ulong uVar6;
   long lVar7;
   ulong __n_00;
   bool bVar8;
   if (param_2 != (undefined4*)0x0) {
      *param_2 = 0;
   }

   lVar1 = *param_1;
   if (lVar1 == 0) {
      return 0xffffffff;
   }

   pvVar4 = (void*)param_1[5];
   uVar2 = param_1[4];
   uVar3 = param_1[2];
   __n_00 = param_1[1];
   if (pvVar4 == (void*)0x0) {
      uVar5 = uVar3;
      if (uVar2 != 0) {
         return 0xfffffefa;
      }

   }
 else {
      uVar5 = param_1[8];
      if (uVar2 != 0) {
         if (uVar3 < uVar5) {
            __n = uVar5 - uVar3;
            bVar8 = CARRY8(__n_00, __n);
            uVar5 = __n_00 + __n;
            lVar7 = 0;
            uVar6 = uVar3;
         }
 else {
            bVar8 = false;
            __n = 0;
            uVar6 = 0;
            lVar7 = uVar3 - uVar5;
            uVar5 = ( uVar5 + __n_00 ) - uVar3;
            __n_00 = uVar5;
         }

         if (( CARRY8(uVar2, uVar5) || (ulong)param_1[6] < uVar2 + uVar5 ) || ( bVar8 )) {
            param_1[3] = uVar3;
            param_1[4] = 0;
            return 0xfffffef9;
         }

         pvVar4 = memmove(pvVar4, (void*)( uVar6 + (long)pvVar4 ), __n);
         memcpy((void*)( (long)pvVar4 + __n ), (void*)( lVar1 + lVar7 ), __n_00);
         param_1[7] = uVar5;
         param_1[8] = uVar2;
         if (param_2 != (undefined4*)0x0) {
            *param_2 = 1;
         }

         goto LAB_00100291;
      }

      if (uVar3 < uVar5) goto LAB_001003b0;
      uVar5 = uVar3 - uVar5;
   }

   if (uVar5 < __n_00) {
      LAB_001003b0:param_1[3] = uVar3;
      return 0xfffffeff;
   }

   *(undefined1(*) [16])( param_1 + 7 ) = (undefined1[16])0x0;
   LAB_00100291:*param_1 = 0;
   *(undefined1(*) [16])( param_1 + 1 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_1 + 3 ) = (undefined1[16])0x0;
   return 0;
}

