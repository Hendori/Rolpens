undefined8 SipHash_ctx_size(void) {
   return 0x40;
}undefined4 SipHash_hash_size(long param_1) {
   return *(undefined4*)( param_1 + 0x2c );
}undefined8 SipHash_set_hash_size(long param_1, ulong param_2) {
   ulong uVar1;
   uint uVar2;
   if (param_2 == 0) {
      uVar2 = *(uint*)( param_1 + 0x2c );
      uVar1 = (ulong)uVar2;
      param_2 = 0x10;
      if (uVar1 == 0) {
         *(undefined4*)( param_1 + 0x2c ) = 0x10;
         return 1;
      }
   } else {
      if (( param_2 - 8 & 0xfffffffffffffff7 ) != 0) {
         return 0;
      }
      uVar2 = *(uint*)( param_1 + 0x2c );
      uVar1 = (ulong)uVar2;
      if (uVar1 == 0) {
         uVar2 = 0x10;
         uVar1 = 0x10;
      }
   }
   *(uint*)( param_1 + 0x2c ) = uVar2;
   if (uVar1 != param_2) {
      *(ulong*)( param_1 + 0x10 ) = *(ulong*)( param_1 + 0x10 ) ^ 0xee;
      *(int*)( param_1 + 0x2c ) = (int)param_2;
   }
   return 1;
}undefined8 SipHash_Init(undefined8 *param_1, ulong *param_2, int param_3, int param_4) {
   ulong uVar1;
   ulong uVar2;
   int iVar3;
   uVar1 = *param_2;
   uVar2 = param_2[1];
   iVar3 = *(int*)( (long)param_1 + 0x2c );
   if (iVar3 == 0) {
      iVar3 = 0x10;
   }
   *(int*)( (long)param_1 + 0x2c ) = iVar3;
   if (param_4 == 0) {
      param_4 = 4;
   }
   *(undefined4*)( param_1 + 5 ) = 0;
   if (param_3 == 0) {
      param_3 = 2;
   }
   *param_1 = 0;
   *(int*)( (long)param_1 + 0x34 ) = param_4;
   *(int*)( param_1 + 6 ) = param_3;
   param_1[1] = uVar1 ^ 0x736f6d6570736575;
   param_1[2] = uVar2 ^ 0x646f72616e646f6d;
   param_1[3] = uVar1 ^ 0x6c7967656e657261;
   param_1[4] = uVar2 ^ 0x7465646279746573;
   if (iVar3 == 0x10) {
      param_1[2] = uVar2 ^ 0x646f72616e646f83;
   }
   return 1;
}void SipHash_Update(long *param_1, ulong *param_2, ulong param_3) {
   ulong *puVar1;
   void *__dest;
   int iVar2;
   uint uVar3;
   ulong uVar4;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   uint uVar8;
   ulong uVar9;
   ulong uVar10;
   uVar8 = *(uint*)( param_1 + 5 );
   *param_1 = *param_1 + param_3;
   uVar9 = param_1[1];
   uVar7 = param_1[2];
   uVar10 = param_1[3];
   uVar4 = param_1[4];
   if (uVar8 != 0) {
      __dest = (void*)( (long)param_1 + (ulong)uVar8 + 0x38 );
      uVar5 = ( ulong )(8 - uVar8);
      if (param_3 < uVar5) {
         memcpy(__dest, param_2, param_3);
         *(int*)( param_1 + 5 ) = (int)param_1[5] + (int)param_3;
         return;
      }
      memcpy(__dest, param_2, uVar5);
      param_3 = param_3 - uVar5;
      param_2 = (ulong*)( (long)param_2 + uVar5 );
      uVar4 = uVar4 ^ param_1[7];
      if ((int)param_1[6] != 0) {
         iVar2 = 0;
         do {
            uVar9 = uVar9 + uVar7;
            iVar2 = iVar2 + 1;
            uVar7 = ( uVar7 << 0xd | uVar7 >> 0x33 ) ^ uVar9;
            uVar5 = ( uVar4 << 0x10 | uVar4 >> 0x30 ) ^ uVar10 + uVar4;
            uVar10 = uVar10 + uVar4 + uVar7;
            uVar9 = ( uVar9 << 0x20 | uVar9 >> 0x20 ) + uVar5;
            uVar7 = ( uVar7 << 0x11 | uVar7 >> 0x2f ) ^ uVar10;
            uVar4 = ( uVar5 << 0x15 | uVar5 >> 0x2b ) ^ uVar9;
            uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
         } while ( (int)param_1[6] != iVar2 );
      }
      uVar9 = uVar9 ^ param_1[7];
   }
   puVar1 = (ulong*)( (long)param_2 + ( param_3 & 0xfffffffffffffff8 ) );
   uVar8 = (uint)param_3 & 7;
   if (param_2 != puVar1) {
      do {
         uVar5 = *param_2;
         uVar4 = uVar4 ^ uVar5;
         if ((int)param_1[6] != 0) {
            iVar2 = 0;
            do {
               uVar9 = uVar9 + uVar7;
               iVar2 = iVar2 + 1;
               uVar7 = ( uVar7 << 0xd | uVar7 >> 0x33 ) ^ uVar9;
               uVar6 = ( uVar4 << 0x10 | uVar4 >> 0x30 ) ^ uVar10 + uVar4;
               uVar10 = uVar10 + uVar4 + uVar7;
               uVar9 = ( uVar9 << 0x20 | uVar9 >> 0x20 ) + uVar6;
               uVar7 = ( uVar7 << 0x11 | uVar7 >> 0x2f ) ^ uVar10;
               uVar4 = ( uVar6 << 0x15 | uVar6 >> 0x2b ) ^ uVar9;
               uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
            } while ( (int)param_1[6] != iVar2 );
         }
         param_2 = param_2 + 1;
         uVar9 = uVar9 ^ uVar5;
      } while ( puVar1 != param_2 );
   }
   if (( param_3 & 7 ) != 0) {
      uVar3 = 0;
      do {
         uVar5 = (ulong)uVar3;
         uVar3 = uVar3 + 1;
         *(undefined1*)( (long)param_1 + uVar5 + 0x38 ) = *(undefined1*)( (long)puVar1 + uVar5 );
      } while ( uVar3 < uVar8 );
   }
   *(uint*)( param_1 + 5 ) = uVar8;
   param_1[1] = uVar9;
   param_1[2] = uVar7;
   param_1[3] = uVar10;
   param_1[4] = uVar4;
   return;
}undefined8 SipHash_Final(long *param_1, ulong *param_2, ulong param_3) {
   ulong uVar1;
   undefined8 uVar2;
   ulong uVar3;
   ulong uVar4;
   ulong uVar5;
   ulong uVar6;
   int iVar7;
   ulong uVar8;
   uint uVar9;
   if (( *(uint*)( param_1 + 6 ) != 0 ) && ( param_3 != 0 )) {
      uVar2 = 0;
      if (*(uint*)( (long)param_1 + 0x2c ) == param_3) {
         uVar6 = *param_1 << 0x38;
         switch ((int)param_1[5]) {
            for (int i_623 = 0; i_623 < 6; i_623++) {
               case 7:
        uVar6 = uVar6 | (ulong)*(byte *)((long)param_1 + 0x3e) << 0x30;
            }
            case 1:
        uVar6 = uVar6 | *(byte *)(param_1 + 7);
            default:
        uVar8 = param_1[1];
        uVar9 = 0;
        uVar1 = param_1[2];
        uVar5 = param_1[3];
        uVar3 = param_1[4] ^ uVar6;
        do {
          uVar8 = uVar8 + uVar1;
          uVar9 = uVar9 + 1;
          uVar1 = (uVar1 << 0xd | uVar1 >> 0x33) ^ uVar8;
          uVar4 = (uVar3 << 0x10 | uVar3 >> 0x30) ^ uVar5 + uVar3;
          uVar5 = uVar5 + uVar3 + uVar1;
          uVar8 = (uVar8 << 0x20 | uVar8 >> 0x20) + uVar4;
          uVar1 = (uVar1 << 0x11 | uVar1 >> 0x2f) ^ uVar5;
          uVar3 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar8;
          uVar5 = uVar5 << 0x20 | uVar5 >> 0x20;
        } while (uVar9 < *(uint *)(param_1 + 6));
        uVar6 = uVar6 ^ uVar8;
        uVar8 = uVar5 ^ 0xff;
        if (*(uint *)((long)param_1 + 0x2c) == 0x10) {
          uVar8 = uVar5 ^ 0xee;
        }
        iVar7 = 0;
        if (*(int *)((long)param_1 + 0x34) != 0) {
          do {
            uVar6 = uVar6 + uVar1;
            uVar1 = (uVar1 << 0xd | uVar1 >> 0x33) ^ uVar6;
            iVar7 = iVar7 + 1;
            uVar5 = (uVar3 << 0x10 | uVar3 >> 0x30) ^ uVar8 + uVar3;
            uVar8 = uVar8 + uVar3 + uVar1;
            uVar6 = (uVar6 << 0x20 | uVar6 >> 0x20) + uVar5;
            uVar1 = (uVar1 << 0x11 | uVar1 >> 0x2f) ^ uVar8;
            uVar3 = (uVar5 << 0x15 | uVar5 >> 0x2b) ^ uVar6;
            uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
          } while (iVar7 != *(int *)((long)param_1 + 0x34));
        }
        *param_2 = uVar6 ^ uVar1 ^ uVar8 ^ uVar3;
        if (*(int *)((long)param_1 + 0x2c) != 8) {
          uVar1 = uVar1 ^ 0xdd;
          if (*(int *)((long)param_1 + 0x34) != 0) {
            iVar7 = 0;
            do {
              uVar6 = uVar6 + uVar1;
              iVar7 = iVar7 + 1;
              uVar1 = (uVar1 << 0xd | uVar1 >> 0x33) ^ uVar6;
              uVar5 = (uVar3 << 0x10 | uVar3 >> 0x30) ^ uVar8 + uVar3;
              uVar8 = uVar8 + uVar3 + uVar1;
              uVar6 = (uVar6 << 0x20 | uVar6 >> 0x20) + uVar5;
              uVar1 = (uVar1 << 0x11 | uVar1 >> 0x2f) ^ uVar8;
              uVar3 = (uVar5 << 0x15 | uVar5 >> 0x2b) ^ uVar6;
              uVar8 = uVar8 << 0x20 | uVar8 >> 0x20;
            } while (*(int *)((long)param_1 + 0x34) != iVar7);
          }
          param_2[1] = uVar1 ^ uVar6 ^ uVar8 ^ uVar3;
        }
        uVar2 = 1;
         }
      }
      return uVar2;
   }
   return 0;
}
