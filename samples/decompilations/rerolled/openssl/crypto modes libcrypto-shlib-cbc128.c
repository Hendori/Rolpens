void CRYPTO_cbc128_encrypt(ulong *param_1, ulong *param_2, ulong param_3, undefined8 param_4, ulong *param_5, code *param_6) {
   ulong *puVar1;
   ulong *puVar2;
   long lVar3;
   ulong *puVar4;
   ulong *puVar5;
   ulong uVar6;
   ulong uVar7;
   ulong *puVar8;
   if (param_3 == 0) {
      return;
   }

   puVar2 = param_5;
   if (0xf < param_3) {
      lVar3 = ( param_3 - 0x10 & 0xfffffffffffffff0 ) + 0x10;
      puVar1 = (ulong*)( (long)param_1 + lVar3 );
      puVar2 = param_2;
      puVar5 = param_5;
      do {
         puVar4 = puVar2;
         puVar8 = param_1 + 2;
         *puVar4 = *param_1 ^ *puVar5;
         puVar4[1] = param_1[1] ^ puVar5[1];
         ( *param_6 )(puVar4, puVar4, param_4);
         puVar2 = puVar4 + 2;
         puVar5 = puVar4;
         param_1 = puVar8;
      }
 while ( puVar8 != puVar1 );
      puVar5 = (ulong*)( (long)param_2 + ( param_3 - 0x10 & 0xfffffffffffffff0 ) );
      uVar6 = param_3 & 0xf;
      param_3 = ( ulong )((uint)param_3 & 0xf);
      puVar2 = puVar5;
      param_2 = (ulong*)( lVar3 + (long)param_2 );
      param_1 = puVar1;
      if (uVar6 == 0) goto LAB_001001ad;
   }

   puVar5 = param_2;
   if (param_3 < 4) {
      *(byte*)puVar5 = ( byte ) * param_1 ^ ( byte ) * puVar2;
      if (param_3 == 1) {
         uVar6 = 0xe;
      }
 else {
         *(byte*)( (long)puVar5 + 1 ) = *(byte*)( (long)param_1 + 1 ) ^ *(byte*)( (long)puVar2 + 1 );
         if (param_3 == 3) goto LAB_001003b4;
         param_3 = 2;
         uVar6 = 0xd;
      }

      goto LAB_001001f0;
   }

   if (( ( ulong )((long)puVar5 - ( (long)param_1 + 1 )) < 7 ) || ( ( ulong )((long)puVar5 - ( (long)puVar2 + 1 )) < 7 )) {
      *(byte*)puVar5 = ( byte ) * param_1 ^ ( byte ) * puVar2;
      *(byte*)( (long)puVar5 + 1 ) = *(byte*)( (long)puVar2 + 1 ) ^ *(byte*)( (long)param_1 + 1 );
      LAB_001003b4:*(byte*)( (long)puVar5 + 2 ) = *(byte*)( (long)param_1 + 2 ) ^ *(byte*)( (long)puVar2 + 2 );
      if (param_3 < 4) {
         param_3 = 3;
         uVar6 = 0xc;
      }
 else {
         *(byte*)( (long)puVar5 + 3 ) = *(byte*)( (long)param_1 + 3 ) ^ *(byte*)( (long)puVar2 + 3 );
         if (param_3 != 4) {
            *(byte*)( (long)puVar5 + 4 ) = *(byte*)( (long)param_1 + 4 ) ^ *(byte*)( (long)puVar2 + 4 );
            for (int i = 0; i < 3; i++) {
               if (param_3 == ( i + 5 )) {
                  uVar6 = ( 10 - i );
                  goto LAB_001001f0;
               }

               *(byte*)( (long)puVar5 + ( i + 5 ) ) = *(byte*)( (long)param_1 + ( i + 5 ) ) ^ *(byte*)( (long)puVar2 + ( i + 5 ) );
            }

            if (param_3 == 8) goto LAB_00100518;
            *(byte*)( puVar5 + 1 ) = (byte)param_1[1] ^ (byte)puVar2[1];
            for (int i = 0; i < 4; i++) {
               if (param_3 == ( i + 9 )) {
                  uVar6 = ( 6 - i );
                  goto LAB_001001f0;
               }

               *(byte*)( (long)puVar5 + ( i + 9 ) ) = *(byte*)( (long)param_1 + ( i + 9 ) ) ^ *(byte*)( (long)puVar2 + ( i + 9 ) );
            }

            if (( param_3 != 0xd ) && ( *(byte*)( (long)puVar5 + 0xd ) = *(byte*)( (long)param_1 + 0xd ) ^ *(byte*)( (long)puVar2 + 0xd ) ),param_3 == 0xf) {
               *(byte*)( (long)puVar5 + 0xe ) = *(byte*)( (long)param_1 + 0xe ) ^ *(byte*)( (long)puVar2 + 0xe );
            }

            goto LAB_00100188;
         }

         uVar6 = 0xb;
      }

      LAB_001001f0:if ((long)( (long)puVar5 + param_3 ) - ( (long)puVar2 + param_3 + 1 ) < 7) {
         *(undefined1*)( (long)puVar5 + param_3 ) = *(undefined1*)( (long)puVar2 + param_3 );
         *(undefined1*)( (long)puVar5 + param_3 + 1 ) = *(undefined1*)( (long)puVar2 + param_3 + 1 );
         lVar3 = param_3 + 2;
         LAB_0010021f:*(undefined1*)( (long)puVar5 + lVar3 ) = *(undefined1*)( (long)puVar2 + lVar3 );
         if (( ( ( ( param_3 != 0xd ) && ( *(undefined1*)( (long)puVar5 + param_3 + 3 ) = *(undefined1*)( (long)puVar2 + param_3 + 3 ) ),param_3 != 0xc ) ) && ( *(undefined1*)( (long)puVar5 + param_3 + 4 ) = *(undefined1*)( (long)puVar2 + param_3 + 4 ) ),param_3 != 0xb )) &&( ( ( ( *(undefined1*)( (long)puVar5 + param_3 + 5 ) = *(undefined1*)( (long)puVar2 + param_3 + 5 ) ),param_3 != 10 && ( *(undefined1*)( (long)puVar5 + param_3 + 6 ) = *(undefined1*)( (long)puVar2 + param_3 + 6 ) ),param_3 != 9 ) ) && ( ( *(undefined1*)( (long)puVar5 + param_3 + 7 ) = *(undefined1*)( (long)puVar2 + param_3 + 7 ) ),param_3 != 8 && ( ( *(undefined1*)( (long)puVar5 + param_3 + 8 ) = *(undefined1*)( (long)puVar2 + param_3 + 8 ) ),param_3 != 7 && ( *(undefined1*)( (long)puVar5 + param_3 + 9 ) = *(undefined1*)( (long)puVar2 + param_3 + 9 ) ),param_3 != 6 ) ) ) && ( *(undefined1*)( (long)puVar5 + param_3 + 10 ) = param_3 != 5 ) && ( ( ( *(undefined1*)( (long)puVar5 + param_3 + 0xb ) = *(undefined1*)( (long)puVar2 + param_3 + 0xb ) ),param_3 != 4 && ( *(undefined1*)( (long)puVar5 + param_3 + 0xc ) = *(undefined1*)( (long)puVar2 + param_3 + 0xc ) ),param_3 != 3 ) ) && ( *(undefined1*)( (long)puVar5 + param_3 + 0xd ) = param_3 == 1 ) * (undefined1*)( (long)puVar5 + 0xf ) = *(undefined1*)( (long)puVar2 + 0xf );
      }

   }
 else {
      uVar7 = 0x10 - param_3;
      if (uVar6 < 7) {
         LAB_0010034e:*(undefined4*)( (long)puVar5 + param_3 ) = *(undefined4*)( (long)puVar2 + param_3 );
         if (( uVar7 & 3 ) == 0) goto LAB_001001a0;
         param_3 = param_3 + ( uVar7 & 0xfffffffffffffffc );
      }
 else {
         *(undefined8*)( (long)puVar5 + param_3 ) = *(undefined8*)( (long)puVar2 + param_3 );
         if (uVar7 == 8) goto LAB_001001a0;
         param_3 = param_3 + 8;
         uVar7 = 0x10 - param_3;
         if (2 < 0xf - param_3) goto LAB_0010034e;
      }

      *(undefined1*)( (long)puVar5 + param_3 ) = *(undefined1*)( (long)puVar2 + param_3 );
      if (( param_3 != 0xf ) && ( *(undefined1*)( (long)puVar5 + param_3 + 1 ) = *(undefined1*)( (long)puVar2 + param_3 + 1 ) ),param_3 != 0xe) {
         *(undefined1*)( (long)puVar5 + param_3 + 2 ) = *(undefined1*)( (long)puVar2 + param_3 + 2 );
      }

   }

}
else{if (param_3 < 8) {
      lVar3 = 0;
      uVar6 = param_3;
LAB_00100121:
      *(uint *)((long)puVar5 + lVar3) =
           *(uint *)((long)puVar2 + lVar3) ^ *(uint *)((long)param_1 + lVar3);
      lVar3 = lVar3 + 4;
      if (uVar6 != 4) goto LAB_00100140;
    }else{*puVar5 = *param_1 ^ *puVar2;
      if (param_3 == 8) {
LAB_00100518:
        param_3 = 8;
        uVar6 = 7;
        goto LAB_001001f0;
      }
      lVar3 = 8;
      uVar6 = param_3 - 8;
      if (2 < param_3 - 9) goto LAB_00100121;LAB_00100140:*(byte*)( (long)puVar5 + lVar3 ) = *(byte*)( (long)param_1 + lVar3 ) ^ *(byte*)( (long)puVar2 + lVar3 )(( lVar3 + 1U < param_3 ) && ( *(byte*)( (long)puVar5 + lVar3 + 1 ) = *(byte*)( (long)param_1 + lVar3 + 1 ) ^ *(byte*)( (long)puVar2 + lVar3 + 1 ) ), lVar3 + 2U < param_3) * (byte*)( (long)puVar5 + lVar3 + 2 ) = *(byte*)( (long)param_1 + lVar3 + 2 ) ^ *(byte*)( (long)puVar2 + lVar3 + 2 );}};uVar6 = 0xf - param_3;if (2 < uVar6) goto LAB_001001f0;LAB_00100188:*(undefined1*)( (long)puVar5 + param_3 ) = *(undefined1*)( (long)puVar2 + param_3 );if (( param_3 != 0xf ) && ( *(undefined1*)( (long)puVar5 + param_3 + 1 ) = *(undefined1*)( (long)puVar2 + param_3 + 1 ) ),param_3 != 0xe) {
   param_3 = 0xd;
   lVar3 = 0xf;
   goto LAB_0010021f;
}
}LAB_001001a0:( *param_6 )(puVar5, puVar5, param_4);LAB_001001ad:if (puVar5 != param_5) {
   uVar6 = puVar5[1];
   *param_5 = *puVar5;
   param_5[1] = uVar6;
}
return;}void CRYPTO_cbc128_decrypt(ulong *param_1, ulong *param_2, ulong param_3, undefined8 param_4, ulong *param_5, code *param_6) {
   undefined1 uVar1;
   ulong uVar2;
   long lVar3;
   ulong *puVar4;
   ulong *puVar5;
   ulong uVar6;
   ulong *puVar7;
   ulong *puVar8;
   long in_FS_OFFSET;
   byte local_58;
   byte bStack_57;
   byte bStack_56;
   byte bStack_55;
   byte bStack_54;
   byte bStack_53;
   byte bStack_52;
   byte bStack_51;
   byte local_50;
   byte bStack_4f;
   byte bStack_4e;
   byte bStack_4d;
   byte bStack_4c;
   byte bStack_4b;
   byte bStack_4a;
   undefined1 uStack_49;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0) goto LAB_00100860;
   if (param_1 == param_2) {
      puVar5 = param_2;
      if (0xf < param_3) {
         lVar3 = ( param_3 - 0x10 & 0xfffffffffffffff0 ) + 0x10;
         puVar5 = (ulong*)( (long)param_1 + lVar3 );
         puVar7 = param_1;
         do {
            ( *param_6 )(param_1, &local_58);
            uVar6 = *param_1;
            *puVar7 = CONCAT17(bStack_51, CONCAT16(bStack_52, CONCAT15(bStack_53, CONCAT14(bStack_54, CONCAT13(bStack_55, CONCAT12(bStack_56, CONCAT11(bStack_57, local_58))))))) ^ *param_5;
            puVar8 = param_1 + 2;
            *param_5 = uVar6;
            uVar6 = param_1[1];
            puVar7[1] = CONCAT17(uStack_49, CONCAT16(bStack_4a, CONCAT15(bStack_4b, CONCAT14(bStack_4c, CONCAT13(bStack_4d, CONCAT12(bStack_4e, CONCAT11(bStack_4f, local_50))))))) ^ param_5[1];
            param_5[1] = uVar6;
            param_1 = puVar8;
            puVar7 = puVar7 + 2;
         }
 while ( puVar8 != puVar5 );
         goto LAB_00100695;
      }

   }
 else {
      puVar5 = param_1;
      if (0xf < param_3) {
         puVar7 = param_5;
         puVar8 = param_2;
         do {
            puVar4 = puVar5;
            ( *param_6 )(puVar4, puVar8);
            *puVar8 = *puVar8 ^ *puVar7;
            puVar8[1] = puVar8[1] ^ puVar7[1];
            puVar8 = puVar8 + 2;
            puVar5 = puVar4 + 2;
            puVar7 = puVar4;
         }
 while ( puVar4 + 2 != (ulong*)( (long)param_1 + ( param_3 - 0x10 & 0xfffffffffffffff0 ) + 0x10 ) );
         uVar6 = param_3 - 0x10 & 0xfffffffffffffff0;
         puVar5 = (ulong*)( (long)param_1 + uVar6 );
         if (puVar5 != param_5) {
            uVar2 = puVar5[1];
            *param_5 = *puVar5;
            param_5[1] = uVar2;
         }

         lVar3 = uVar6 + 0x10;
         puVar5 = (ulong*)( (long)param_1 + lVar3 );
         LAB_00100695:param_3 = ( ulong )((uint)param_3 & 0xf);
         param_2 = (ulong*)( (long)param_2 + lVar3 );
         if (param_3 == 0) goto LAB_00100860;
      }

   }

   ( *param_6 )(puVar5, &local_58);
   uVar6 = *puVar5;
   *(byte*)param_2 = local_58 ^ ( byte ) * param_5;
   *(char*)param_5 = (char)uVar6;
   if (param_3 == 1) {
      LAB_00100888:if (6 < (long)( (long)param_5 + param_3 ) - ( (long)puVar5 + param_3 + 1 )) {
         lVar3 = 0x10 - param_3;
         if (0xf - param_3 < 7) {
            LAB_00100a99:uVar6 = param_3 + 4;
            *(undefined4*)( (long)param_5 + param_3 ) = *(undefined4*)( (long)puVar5 + param_3 );
            if (lVar3 == 4) goto LAB_00100860;
         }
 else {
            *(undefined8*)( (long)param_5 + param_3 ) = *(undefined8*)( (long)puVar5 + param_3 );
            if (lVar3 == 8) goto LAB_00100860;
            uVar6 = param_3 + 8;
            lVar3 = 0x10 - uVar6;
            param_3 = uVar6;
            if (2 < 0xf - uVar6) goto LAB_00100a99;
         }

         *(undefined1*)( (long)param_5 + uVar6 ) = *(undefined1*)( (long)puVar5 + uVar6 );
         if (( uVar6 != 0xf ) && ( *(undefined1*)( (long)param_5 + uVar6 + 1 ) = uVar6 != 0xe )) {
            *(undefined1*)( (long)param_5 + uVar6 + 2 ) = *(undefined1*)( (long)puVar5 + uVar6 + 2 );
         }

         goto LAB_00100860;
      }

      *(undefined1*)( (long)param_5 + param_3 ) = *(undefined1*)( (long)puVar5 + param_3 );
      *(undefined1*)( (long)param_5 + param_3 + 1 ) = *(undefined1*)( (long)puVar5 + param_3 + 1 );
      lVar3 = param_3 + 2;
   }
 else {
      uVar1 = *(undefined1*)( (long)puVar5 + 1 );
      *(byte*)( (long)param_2 + 1 ) = bStack_57 ^ *(byte*)( (long)param_5 + 1 );
      *(undefined1*)( (long)param_5 + 1 ) = uVar1;
      if (param_3 == 2) goto LAB_00100888;
      uVar1 = *(undefined1*)( (long)puVar5 + 2 );
      *(byte*)( (long)param_2 + 2 ) = bStack_56 ^ *(byte*)( (long)param_5 + 2 );
      *(undefined1*)( (long)param_5 + 2 ) = uVar1;
      if (param_3 == 3) goto LAB_00100888;
      uVar1 = *(undefined1*)( (long)puVar5 + 3 );
      *(byte*)( (long)param_2 + 3 ) = bStack_55 ^ *(byte*)( (long)param_5 + 3 );
      *(undefined1*)( (long)param_5 + 3 ) = uVar1;
      if (param_3 == 4) goto LAB_00100888;
      uVar1 = *(undefined1*)( (long)puVar5 + 4 );
      *(byte*)( (long)param_2 + 4 ) = bStack_54 ^ *(byte*)( (long)param_5 + 4 );
      *(undefined1*)( (long)param_5 + 4 ) = uVar1;
      if (param_3 == 5) goto LAB_00100888;
      uVar1 = *(undefined1*)( (long)puVar5 + 5 );
      *(byte*)( (long)param_2 + 5 ) = bStack_53 ^ *(byte*)( (long)param_5 + 5 );
      *(undefined1*)( (long)param_5 + 5 ) = uVar1;
      if (param_3 == 6) goto LAB_00100888;
      uVar1 = *(undefined1*)( (long)puVar5 + 6 );
      *(byte*)( (long)param_2 + 6 ) = bStack_52 ^ *(byte*)( (long)param_5 + 6 );
      *(undefined1*)( (long)param_5 + 6 ) = uVar1;
      if (param_3 == 7) goto LAB_00100888;
      uVar1 = *(undefined1*)( (long)puVar5 + 7 );
      *(byte*)( (long)param_2 + 7 ) = bStack_51 ^ *(byte*)( (long)param_5 + 7 );
      *(undefined1*)( (long)param_5 + 7 ) = uVar1;
      if (param_3 == 8) goto LAB_00100888;
      uVar6 = puVar5[1];
      *(byte*)( param_2 + 1 ) = local_50 ^ (byte)param_5[1];
      *(char*)( param_5 + 1 ) = (char)uVar6;
      if (param_3 == 9) goto LAB_00100888;
      uVar1 = *(undefined1*)( (long)puVar5 + 9 );
      *(byte*)( (long)param_2 + 9 ) = bStack_4f ^ *(byte*)( (long)param_5 + 9 );
      *(undefined1*)( (long)param_5 + 9 ) = uVar1;
      if (param_3 == 10) goto LAB_00100888;
      uVar1 = *(undefined1*)( (long)puVar5 + 10 );
      *(byte*)( (long)param_2 + 10 ) = bStack_4e ^ *(byte*)( (long)param_5 + 10 );
      *(undefined1*)( (long)param_5 + 10 ) = uVar1;
      if (param_3 == 0xb) goto LAB_00100888;
      uVar1 = *(undefined1*)( (long)puVar5 + 0xb );
      *(byte*)( (long)param_2 + 0xb ) = bStack_4d ^ *(byte*)( (long)param_5 + 0xb );
      *(undefined1*)( (long)param_5 + 0xb ) = uVar1;
      if (param_3 == 0xc) goto LAB_00100888;
      uVar1 = *(undefined1*)( (long)puVar5 + 0xc );
      *(byte*)( (long)param_2 + 0xc ) = bStack_4c ^ *(byte*)( (long)param_5 + 0xc );
      *(undefined1*)( (long)param_5 + 0xc ) = uVar1;
      if (param_3 != 0xd) {
         uVar1 = *(undefined1*)( (long)puVar5 + 0xd );
         *(byte*)( (long)param_2 + 0xd ) = bStack_4b ^ *(byte*)( (long)param_5 + 0xd );
         *(undefined1*)( (long)param_5 + 0xd ) = uVar1;
         if (param_3 == 0xf) {
            uVar1 = *(undefined1*)( (long)puVar5 + 0xe );
            *(byte*)( (long)param_2 + 0xe ) = bStack_4a ^ *(byte*)( (long)param_5 + 0xe );
            *(undefined1*)( (long)param_5 + 0xe ) = uVar1;
         }
 else {
            param_3 = 0xe;
         }

      }

      *(undefined1*)( (long)param_5 + param_3 ) = *(undefined1*)( (long)puVar5 + param_3 );
      if (( param_3 == 0xf ) || ( *(undefined1*)( (long)param_5 + param_3 + 1 ) = *(undefined1*)( (long)puVar5 + param_3 + 1 ) ),param_3 == 0xe) goto LAB_00100860;
      param_3 = 0xd;
      lVar3 = 0xf;
   }

   *(undefined1*)( (long)param_5 + lVar3 ) = *(undefined1*)( (long)puVar5 + lVar3 );
   if (( ( ( ( param_3 != 0xd ) && ( *(undefined1*)( (long)param_5 + param_3 + 3 ) = *(undefined1*)( (long)puVar5 + param_3 + 3 ) ),param_3 != 0xc ) ) && ( *(undefined1*)( (long)param_5 + param_3 + 4 ) = *(undefined1*)( (long)puVar5 + param_3 + 4 ) ),param_3 != 0xb )) &&( ( ( ( *(undefined1*)( (long)param_5 + param_3 + 5 ) = *(undefined1*)( (long)puVar5 + param_3 + 5 ) ),param_3 != 10 && ( *(undefined1*)( (long)param_5 + param_3 + 6 ) = *(undefined1*)( (long)puVar5 + param_3 + 6 ) ),param_3 != 9 ) ) && ( ( *(undefined1*)( (long)param_5 + param_3 + 7 ) = *(undefined1*)( (long)puVar5 + param_3 + 7 ) ),param_3 != 8 && ( ( *(undefined1*)( (long)param_5 + param_3 + 8 ) = *(undefined1*)( (long)puVar5 + param_3 + 8 ) ),param_3 != 7 && ( *(undefined1*)( (long)param_5 + param_3 + 9 ) = *(undefined1*)( (long)puVar5 + param_3 + 9 ) ),param_3 != 6 ) ) ) && ( *(undefined1*)( (long)param_5 + param_3 + 10 )= *(undefined1 *)((long)puVar5 + param_3 + 10),param_3 != 5 ) && ( ( ( *(undefined1*)( (long)param_5 + param_3 + 0xb ) = *(undefined1*)( (long)puVar5 + param_3 + 0xb ) ),param_3 != 4 && ( *(undefined1*)( (long)param_5 + param_3 + 0xc ) = *(undefined1*)( (long)puVar5 + param_3 + 0xc ) ),param_3 != 3 ) ) && ( *(undefined1*)( (long)param_5 + param_3 + 0xd ) = param_3 == 1 ) * (undefined1*)( (long)param_5 + 0xf ) = *(undefined1*)( (long)puVar5 + 0xf );
}
LAB_00100860:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}
