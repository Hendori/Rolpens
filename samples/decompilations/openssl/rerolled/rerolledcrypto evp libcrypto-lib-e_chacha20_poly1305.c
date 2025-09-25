undefined8 chacha_init_key(long param_1, byte *param_2, byte *param_3) {
   uint *puVar1;
   puVar1 = *(uint**)( param_1 + 0x78 );
   if (param_2 != (byte*)0x0) {
      *puVar1 = (uint)param_2[1] << 8 | (uint)param_2[2] << 0x10 | ( uint ) * param_2 | (uint)param_2[3] << 0x18;
      for (int i = 0; i < 6; i++) {
         puVar1[( i + 1 )] = (uint)param_2[( 4*i + 5 )] << 8 | (uint)param_2[( 4*i + 6 )] << 16 | (uint)param_2[( 4*i + 4 )] | (uint)param_2[( 4*i + 7 )] << 24;
      }

      puVar1[7] = (uint)param_2[0x1f] << 0x18 | (uint)param_2[0x1d] << 8 | (uint)param_2[0x1e] << 0x10 | (uint)param_2[0x1c];
   }

   if (param_3 != (byte*)0x0) {
      puVar1[8] = (uint)param_3[1] << 8 | (uint)param_3[2] << 0x10 | ( uint ) * param_3 | (uint)param_3[3] << 0x18;
      puVar1[9] = (uint)param_3[6] << 0x10 | (uint)param_3[5] << 8 | (uint)param_3[4] | (uint)param_3[7] << 0x18;
      puVar1[10] = (uint)param_3[10] << 0x10 | (uint)param_3[9] << 8 | (uint)param_3[8] | (uint)param_3[0xb] << 0x18;
      puVar1[0xb] = (uint)param_3[0xd] << 8 | (uint)param_3[0xe] << 0x10 | (uint)param_3[0xc] | (uint)param_3[0xf] << 0x18;
   }

   puVar1[0x1c] = 0;
   return 1;
}
undefined8 chacha_cipher(long param_1, ulong *param_2, ulong *param_3, ulong param_4) {
   long lVar1;
   uint uVar2;
   ulong uVar3;
   long lVar4;
   uint uVar5;
   ulong uVar6;
   uint uVar7;
   int iVar8;
   ulong *puVar9;
   ulong uVar10;
   lVar1 = *(long*)( param_1 + 0x78 );
   uVar2 = *(uint*)( lVar1 + 0x70 );
   if (uVar2 == 0) {
      uVar7 = *(uint*)( lVar1 + 0x20 );
   }
 else {
      if (param_4 != 0) {
         do {
            if (0x3f < uVar2) break;
            uVar6 = (ulong)uVar2;
            uVar10 = *param_3;
            puVar9 = (ulong*)( (long)param_2 + 1 );
            param_3 = (ulong*)( (long)param_3 + 1 );
            uVar2 = uVar2 + 1;
            *(byte*)param_2 = (byte)uVar10 ^ *(byte*)( lVar1 + 0x30 + uVar6 );
            param_4 = param_4 - 1;
            param_2 = puVar9;
         }
 while ( param_4 != 0 );
      }

      *(uint*)( lVar1 + 0x70 ) = uVar2;
      if (param_4 == 0) {
         return 1;
      }

      uVar7 = *(uint*)( lVar1 + 0x20 );
      if (uVar2 == 0x40) {
         uVar7 = uVar7 + 1;
         *(undefined4*)( lVar1 + 0x70 ) = 0;
         *(uint*)( lVar1 + 0x20 ) = uVar7;
         if (uVar7 == 0) {
            *(int*)( lVar1 + 0x24 ) = *(int*)( lVar1 + 0x24 ) + 1;
         }

      }

   }

   uVar2 = (uint)param_4 & 0x3f;
   uVar10 = param_4 - uVar2;
   if (0x3f < uVar10) {
      uVar6 = (ulong)uVar7;
      do {
         iVar8 = (int)uVar6;
         if (0x40000003f < uVar10) goto LAB_00100293;
         while (true) {
            uVar3 = uVar10 >> 6;
            uVar6 = ( ulong )(uint)((int)uVar3 + (int)uVar6);
            if (uVar3 <= uVar6) break;
            while (true) {
               lVar4 = uVar3 - uVar6;
               ChaCha20_ctr32(param_2, param_3, lVar4 * 0x40, lVar1, lVar1 + 0x20);
               uVar10 = uVar10 + lVar4 * -0x40;
               param_2 = param_2 + lVar4 * 8;
               *(int*)( lVar1 + 0x24 ) = *(int*)( lVar1 + 0x24 ) + 1;
               *(undefined4*)( lVar1 + 0x20 ) = 0;
               param_3 = param_3 + lVar4 * 8;
               if (uVar10 < 0x40) goto LAB_001002e5;
               uVar6 = 0;
               iVar8 = 0;
               if (uVar10 < 0x400000040) break;
               LAB_00100293:uVar3 = 0x10000000;
               uVar6 = ( ulong )(iVar8 + 0x10000000);
               if (0xfffffff < uVar6) goto LAB_001002a8;
            }
;
         }
;
         LAB_001002a8:ChaCha20_ctr32(param_2, param_3, uVar3 * 0x40, lVar1, lVar1 + 0x20);
         uVar10 = uVar10 + uVar3 * -0x40;
         param_2 = param_2 + uVar3 * 8;
         *(int*)( lVar1 + 0x20 ) = (int)uVar6;
         param_3 = param_3 + uVar3 * 8;
      }
 while ( 0x3f < uVar10 );
   }

   LAB_001002e5:if (( param_4 & 0x3f ) == 0) {
      return 1;
   }

   for (int i = 0; i < 4; i++) {
      *(undefined1(*) [16])( lVar1 + ( 16*i + 48 ) ) = (undefined1[16])0;
   }

   ChaCha20_ctr32(lVar1 + 0x30, lVar1 + 0x30, 0x40, lVar1, lVar1 + 0x20);
   if (( ( uVar2 - 1 < 7 ) || ( ( ulong )((long)param_2 - (long)( (long)param_3 + 1 )) < 0xf ) ) || ( ( ulong )((long)param_2 - ( lVar1 + 0x31 )) < 0xf )) {
      uVar10 = 0;
      do {
         *(byte*)( (long)param_2 + uVar10 ) = *(byte*)( lVar1 + 0x30 + uVar10 ) ^ *(byte*)( (long)param_3 + uVar10 );
         uVar10 = uVar10 + 1;
      }
 while ( uVar2 != uVar10 );
      *(uint*)( lVar1 + 0x70 ) = uVar2;
      return 1;
   }

   if (uVar2 - 1 < 0xf) {
      uVar5 = 0;
      uVar7 = uVar2;
      LAB_0010044e:uVar10 = (ulong)uVar5;
      *(ulong*)( (long)param_2 + uVar10 ) = *(ulong*)( (long)param_3 + uVar10 ) ^ *(ulong*)( lVar1 + 0x30 + uVar10 );
      uVar5 = uVar5 + ( uVar7 & 0xfffffff8 );
      if (( uVar7 & 7 ) == 0) goto LAB_00100511;
   }
 else {
      uVar10 = param_3[1];
      uVar6 = *(ulong*)( lVar1 + 0x38 );
      *param_2 = *param_3 ^ *(ulong*)( lVar1 + 0x30 );
      param_2[1] = uVar10 ^ uVar6;
      if (uVar2 >> 4 != 1) {
         uVar10 = param_3[3];
         uVar6 = *(ulong*)( lVar1 + 0x48 );
         param_2[2] = param_3[2] ^ *(ulong*)( lVar1 + 0x40 );
         param_2[3] = uVar10 ^ uVar6;
         if (uVar2 >> 4 == 3) {
            uVar10 = param_3[5];
            uVar6 = *(ulong*)( lVar1 + 0x58 );
            param_2[4] = param_3[4] ^ *(ulong*)( lVar1 + 0x50 );
            param_2[5] = uVar10 ^ uVar6;
         }

      }

      uVar5 = (uint)param_4 & 0x30;
      if (uVar5 == uVar2) goto LAB_00100511;
      uVar7 = uVar2 - uVar5;
      if (6 < ( uVar2 - uVar5 ) - 1) goto LAB_0010044e;
   }

   uVar10 = (ulong)uVar5;
   *(byte*)( (long)param_2 + uVar10 ) = *(byte*)( (long)param_3 + uVar10 ) ^ *(byte*)( lVar1 + 0x30 + uVar10 );
   uVar10 = ( ulong )(uVar5 + 1);
   if (uVar5 + 1 < uVar2) {
      *(byte*)( (long)param_2 + uVar10 ) = *(byte*)( (long)param_3 + uVar10 ) ^ *(byte*)( lVar1 + 0x30 + uVar10 );
      uVar10 = ( ulong )(uVar5 + 2);
      if (uVar5 + 2 < uVar2) {
         *(byte*)( (long)param_2 + uVar10 ) = *(byte*)( (long)param_3 + uVar10 ) ^ *(byte*)( lVar1 + 0x30 + uVar10 );
         uVar10 = ( ulong )(uVar5 + 3);
         if (uVar5 + 3 < uVar2) {
            *(byte*)( (long)param_2 + uVar10 ) = *(byte*)( (long)param_3 + uVar10 ) ^ *(byte*)( lVar1 + 0x30 + uVar10 );
            uVar10 = ( ulong )(uVar5 + 4);
            if (uVar5 + 4 < uVar2) {
               *(byte*)( (long)param_2 + uVar10 ) = *(byte*)( (long)param_3 + uVar10 ) ^ *(byte*)( lVar1 + 0x30 + uVar10 );
               uVar10 = ( ulong )(uVar5 + 5);
               if (uVar5 + 5 < uVar2) {
                  *(byte*)( (long)param_2 + uVar10 ) = *(byte*)( (long)param_3 + uVar10 ) ^ *(byte*)( lVar1 + 0x30 + uVar10 );
                  uVar10 = ( ulong )(uVar5 + 6);
                  if (uVar5 + 6 < uVar2) {
                     *(byte*)( (long)param_2 + uVar10 ) = *(byte*)( (long)param_3 + uVar10 ) ^ *(byte*)( lVar1 + 0x30 + uVar10 );
                  }

               }

            }

         }

      }

   }

   LAB_00100511:*(uint*)( lVar1 + 0x70 ) = uVar2;
   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 chacha20_poly1305_ctrl(long param_1, undefined4 param_2, uint param_3, undefined8 *param_4) {
   undefined4 *puVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   ushort uVar7;
   uint uVar8;
   ulong uVar9;
   ulong uVar10;
   uint uVar11;
   lVar6 = *(long*)( param_1 + 0x78 );
   switch (param_2) {
      case 0:
    if (lVar6 == 0) {
      lVar6 = Poly1305_ctx_size();
      lVar6 = CRYPTO_zalloc(lVar6 + 0xd0,"crypto/evp/e_chacha20_poly1305.c",0x1f9);
      *(long *)(param_1 + 0x78) = lVar6;
      if (lVar6 == 0) {
        ERR_new();
        ERR_set_debug("crypto/evp/e_chacha20_poly1305.c",0x1fb,"chacha20_poly1305_ctrl");
        ERR_set_error(6,0x86,0);
        return 0;
      }
    }
    *(undefined8 *)(lVar6 + 200) = 0xffffffffffffffff;
    *(undefined1 (*) [16])(lVar6 + 0xa8) = (undefined1  [16])0x0;
    uVar3 = _UNK_00101798;
    *(undefined8 *)(lVar6 + 0xb8) = __LC1;
    *(undefined8 *)(lVar6 + 0xc0) = uVar3;
    *(undefined1 (*) [16])(lVar6 + 0x94) = (undefined1  [16])0x0;
    break;
      default:
    return 0xffffffff;
      case 8:
    if (lVar6 != 0) {
      lVar5 = Poly1305_ctx_size();
      lVar6 = CRYPTO_memdup(lVar6,lVar5 + 0xd0,"crypto/evp/e_chacha20_poly1305.c",0x20d);
      param_4[0xf] = lVar6;
      if (lVar6 == 0) {
        ERR_new();
        ERR_set_debug("crypto/evp/e_chacha20_poly1305.c",0x20f,"chacha20_poly1305_ctrl");
        ERR_set_error(6,0xad,0);
        return 0;
      }
    }
    break;
      case 9:
    if (0xb < param_3 - 1) {
      return 0;
    }
    *(uint *)(lVar6 + 0xc4) = param_3;
    break;
      case 0x10:
    if (0xf < param_3 - 1) {
      return 0;
    }
    iVar4 = EVP_CIPHER_CTX_is_encrypting();
    if (iVar4 == 0) {
      return 0;
    }
    uVar10 = (ulong)param_3;
    puVar1 = (undefined4 *)(lVar6 + 0x84);
    if (param_3 < 8) {
      if ((param_3 & 4) == 0) {
        if ((param_3 != 0) && (*(undefined1 *)param_4 = *(undefined1 *)puVar1, (param_3 & 2) != 0))
        {
          *(undefined2 *)((long)param_4 + (uVar10 - 2)) = *(undefined2 *)(lVar6 + 0x82 + uVar10);
        }
      }
      else {
        *(undefined4 *)param_4 = *puVar1;
        *(undefined4 *)((long)param_4 + (uVar10 - 4)) = *(undefined4 *)(lVar6 + 0x80 + uVar10);
      }
    }
    else {
      *param_4 = *(undefined8 *)(lVar6 + 0x84);
      *(undefined8 *)((long)param_4 + ((ulong)param_3 - 8)) =
           *(undefined8 *)(lVar6 + 0x7c + (ulong)param_3);
      lVar6 = (long)param_4 - ((ulong)(param_4 + 1) & 0xfffffffffffffff8);
      uVar11 = param_3 + (int)lVar6 & 0xfffffff8;
      if (7 < uVar11) {
        uVar10 = 0;
        do {
          uVar8 = (int)uVar10 + 8;
          *(undefined8 *)(((ulong)(param_4 + 1) & 0xfffffffffffffff8) + uVar10) =
               *(undefined8 *)((long)puVar1 + (uVar10 - lVar6));
          uVar10 = (ulong)uVar8;
        } while (uVar8 < uVar11);
      }
    }
    break;
      case 0x11:
    if (0xf < param_3 - 1) {
      return 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      puVar1 = (undefined4 *)(lVar6 + 0x84);
      if (param_3 < 8) {
        if ((param_3 & 4) == 0) {
          if ((param_3 != 0) && (*(undefined1 *)puVar1 = *(undefined1 *)param_4, (param_3 & 2) != 0)
             ) {
            *(undefined2 *)(lVar6 + 0x82 + (ulong)param_3) =
                 *(undefined2 *)((long)param_4 + ((ulong)param_3 - 2));
          }
        }
        else {
          *puVar1 = *(undefined4 *)param_4;
          *(undefined4 *)(lVar6 + 0x80 + (ulong)param_3) =
               *(undefined4 *)((long)param_4 + ((ulong)param_3 - 4));
        }
      }
      else {
        uVar10 = lVar6 + 0x8cU & 0xfffffffffffffff8;
        *(undefined8 *)(lVar6 + 0x84) = *param_4;
        *(undefined8 *)(lVar6 + 0x7c + (ulong)param_3) =
             *(undefined8 *)((long)param_4 + ((ulong)param_3 - 8));
        lVar5 = (long)puVar1 - uVar10;
        uVar11 = (int)lVar5 + param_3 & 0xfffffff8;
        if (7 < uVar11) {
          uVar8 = 0;
          do {
            uVar9 = (ulong)uVar8;
            uVar8 = uVar8 + 8;
            *(undefined8 *)(uVar10 + uVar9) = *(undefined8 *)((long)param_4 + (uVar9 - lVar5));
          } while (uVar8 < uVar11);
        }
      }
      *(uint *)(lVar6 + 0xc0) = param_3;
    }
    break;
      case 0x12:
    if (param_3 != 0xc) {
      return 0;
    }
    uVar2 = *(undefined4 *)param_4;
    *(undefined4 *)(lVar6 + 0x24) = uVar2;
    *(undefined4 *)(lVar6 + 0x78) = uVar2;
    uVar2 = *(undefined4 *)((long)param_4 + 4);
    *(undefined4 *)(lVar6 + 0x28) = uVar2;
    *(undefined4 *)(lVar6 + 0x7c) = uVar2;
    uVar2 = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(lVar6 + 0x2c) = uVar2;
    *(undefined4 *)(lVar6 + 0x80) = uVar2;
    break;
      case 0x16:
    if (param_3 != 0xd) {
      return 0;
    }
    *(undefined8 *)(lVar6 + 0x94) = *param_4;
    *(undefined8 *)(lVar6 + 0x99) = *(undefined8 *)((long)param_4 + 5);
    uVar7 = *(ushort *)((long)param_4 + 0xb) << 8 | *(ushort *)((long)param_4 + 0xb) >> 8;
    uVar11 = (uint)uVar7;
    iVar4 = EVP_CIPHER_CTX_is_encrypting();
    if (iVar4 == 0) {
      if (uVar7 < 0x10) {
        return 0;
      }
      uVar11 = uVar7 - 0x10;
      *(ushort *)(lVar6 + 0x9f) = (ushort)uVar11 << 8 | (ushort)uVar11 >> 8;
    }
    *(undefined4 *)(lVar6 + 0xbc) = 0;
    *(ulong *)(lVar6 + 200) = (ulong)uVar11;
    *(uint *)(lVar6 + 0x2c) = *(uint *)(lVar6 + 0x80) ^ *(uint *)(lVar6 + 0x98);
    *(ulong *)(lVar6 + 0x24) =
         CONCAT44(*(uint *)(lVar6 + 0x7c) ^ *(uint *)(lVar6 + 0x94),*(undefined4 *)(lVar6 + 0x78));
    return 0x10;
      case 0x17:
    break;
      case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(lVar6 + 0xc4);
   }

   return 1;
}
ulong chacha20_poly1305_tls_cipher(long param_1, undefined8 *param_2, void *param_3, ulong param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   int iVar5;
   undefined8 *puVar6;
   long lVar7;
   undefined8 *a;
   long in_FS_OFFSET;
   undefined1 *local_180;
   size_t local_178;
   undefined1 local_168[48];
   undefined8 local_138;
   undefined8 uStack_130;
   undefined8 local_128[29];
   long local_40;
   lVar2 = *(long*)( param_1 + 0x78 );
   uVar3 = *(ulong*)( lVar2 + 200 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar3 + 0x10 == param_4) {
      *(undefined4*)( lVar2 + 0x20 ) = 0;
      lVar1 = lVar2 + 0xd0;
      if (uVar3 < 0xc1) {
         local_178 = uVar3 + 0x7f & 0xffffffffffffffc0;
         ChaCha20_ctr32(local_168, zero, local_178, lVar2, lVar2 + 0x20);
         Poly1305_Init(lVar1, local_168);
         local_138 = *(undefined8*)( lVar2 + 0x94 );
         uStack_130 = *(undefined8*)( lVar2 + 0x9c );
         *(undefined4*)( lVar2 + 0x70 ) = 0;
         *(undefined8*)( lVar2 + 0xa8 ) = 0xd;
         *(ulong*)( lVar2 + 0xb0 ) = uVar3;
         if (uVar3 == 0) {
            a = &local_138;
            lVar7 = 0x20;
            puVar6 = local_128;
            local_178 = 0x40;
         }
 else {
            iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
            if (iVar5 == 0) {
               puVar6 = (undefined8*)xor128_decrypt_n_pad(param_2, param_3, local_128, uVar3);
            }
 else {
               puVar6 = (undefined8*)xor128_encrypt_n_pad();
            }

            a = &local_138;
            param_3 = (void*)( (long)param_3 + uVar3 );
            param_2 = (undefined8*)( (long)param_2 + uVar3 );
            lVar7 = (long)puVar6 + ( 0x10 - (long)a );
         }

      }
 else {
         ChaCha20_ctr32(local_168, zero, 0x40, lVar2);
         Poly1305_Init(lVar1, local_168);
         *(undefined4*)( lVar2 + 0x20 ) = 1;
         *(undefined4*)( lVar2 + 0x70 ) = 0;
         Poly1305_Update(lVar1, lVar2 + 0x94, 0x10);
         *(ulong*)( lVar2 + 0xb0 ) = uVar3;
         *(undefined8*)( lVar2 + 0xa8 ) = 0xd;
         iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
         if (iVar5 == 0) {
            Poly1305_Update(lVar1, param_3, uVar3);
            ChaCha20_ctr32(param_2, param_3, uVar3, lVar2, lVar2 + 0x20);
         }
 else {
            ChaCha20_ctr32(param_2, param_3, uVar3, lVar2);
            Poly1305_Update(lVar1, param_2, uVar3);
         }

         param_3 = (void*)( (long)param_3 + uVar3 );
         param_2 = (undefined8*)( (long)param_2 + uVar3 );
         Poly1305_Update(lVar1, zero, -(int)uVar3 & 0xf);
         puVar6 = local_128;
         lVar7 = 0x10;
         local_178 = 0x40;
         a = puVar6;
      }

      local_180 = local_168;
      uVar4 = *(undefined8*)( lVar2 + 0xb0 );
      *puVar6 = *(undefined8*)( lVar2 + 0xa8 );
      puVar6[1] = uVar4;
      Poly1305_Update(lVar1, a, lVar7);
      OPENSSL_cleanse(local_180, local_178);
      iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
      puVar6 = (undefined8*)( lVar2 + 0x84 );
      if (iVar5 == 0) {
         puVar6 = a;
      }

      Poly1305_Final(lVar1, puVar6);
      *(undefined8*)( lVar2 + 200 ) = 0xffffffffffffffff;
      iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar5 == 0) {
         iVar5 = CRYPTO_memcmp(a, param_3, 0x10);
         if (iVar5 != 0) {
            memset((void*)( (long)param_2 + ( 0x10 - param_4 ) ), 0, param_4 - 0x10);
            goto LAB_00100c10;
         }

      }
 else {
         uVar4 = *(undefined8*)( lVar2 + 0x8c );
         *param_2 = *(undefined8*)( lVar2 + 0x84 );
         param_2[1] = uVar4;
      }

      param_4 = param_4 & 0xffffffff;
   }
 else {
      LAB_00100c10:param_4 = 0xffffffff;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong chacha20_poly1305_cipher(long param_1, undefined8 *param_2, long param_3, ulong param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   bool bVar4;
   int iVar5;
   ulong uVar6;
   undefined1 *puVar7;
   ulong uVar8;
   void *b;
   long in_FS_OFFSET;
   long local_78;
   undefined1 local_58[24];
   long local_40;
   lVar1 = *(long*)( param_1 + 0x78 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = *(ulong*)( lVar1 + 200 );
   if (*(int*)( lVar1 + 0xbc ) == 0) {
      if (( uVar6 != 0xffffffffffffffff ) && ( param_2 != (undefined8*)0x0 )) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = chacha20_poly1305_tls_cipher();
            return uVar6;
         }

         goto LAB_001010a0;
      }

      *(undefined4*)( lVar1 + 0x20 ) = 0;
      ChaCha20_ctr32(lVar1 + 0x30, zero, 0x40, lVar1, lVar1 + 0x20);
      Poly1305_Init(lVar1 + 0xd0, lVar1 + 0x30);
      *(undefined4*)( lVar1 + 0x20 ) = 1;
      *(undefined4*)( lVar1 + 0x70 ) = 0;
      *(undefined4*)( lVar1 + 0xbc ) = 1;
      *(undefined1(*) [16])( lVar1 + 0xa8 ) = (undefined1[16])0x0;
      if (uVar6 != 0xffffffffffffffff) {
         Poly1305_Update(lVar1 + 0xd0, lVar1 + 0x94, 0xd);
         *(undefined8*)( lVar1 + 0xa8 ) = 0xd;
         *(undefined4*)( lVar1 + 0xb8 ) = 1;
      }

   }

   if (param_3 == 0) {
      bVar4 = false;
      b = (void*)0x0;
      LAB_00100ea0:local_78 = lVar1 + 0xd0;
      if (*(int*)( lVar1 + 0xb8 ) != 0) {
         if (( *(ulong*)( lVar1 + 0xa8 ) & 0xf ) != 0) {
            Poly1305_Update(local_78, zero, 0x10 - ( ulong )(( uint ) * (ulong*)( lVar1 + 0xa8 ) & 0xf));
         }

         *(undefined4*)( lVar1 + 0xb8 ) = 0;
      }

      if (( *(ulong*)( lVar1 + 0xb0 ) & 0xf ) != 0) {
         Poly1305_Update(local_78, zero, 0x10 - ( ulong )(( uint ) * (ulong*)( lVar1 + 0xb0 ) & 0xf));
      }

      Poly1305_Update(local_78, lVar1 + 0xa8, 0x10);
      iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
      puVar7 = (undefined1*)( lVar1 + 0x84 );
      if (iVar5 == 0) {
         puVar7 = local_58;
      }

      Poly1305_Final(local_78, puVar7);
      *(undefined4*)( lVar1 + 0xbc ) = 0;
      if (bVar4) {
         iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
         if (iVar5 == 0) {
            iVar5 = CRYPTO_memcmp(local_58, b, 0x10);
            if (iVar5 != 0) {
               memset((void*)( (long)param_2 - uVar6 ), 0, uVar6);
               goto LAB_00100f7b;
            }

         }
 else {
            uVar3 = *(undefined8*)( lVar1 + 0x8c );
            *param_2 = *(undefined8*)( lVar1 + 0x84 );
            param_2[1] = uVar3;
         }

      }
 else {
         iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
         if (( iVar5 == 0 ) && ( iVar5 = CRYPTO_memcmp(local_58, (undefined1*)( lVar1 + 0x84 ), (long)*(int*)( lVar1 + 0xc0 )) ),iVar5 != 0) {
            LAB_00100f7b:param_4 = 0xffffffff;
            goto LAB_00100e3d;
         }

      }

      LAB_00100e3b:param_4 = param_4 & 0xffffffff;
   }
 else {
      if (param_2 != (undefined8*)0x0) {
         if (*(int*)( lVar1 + 0xb8 ) != 0) {
            if (( *(ulong*)( lVar1 + 0xa8 ) & 0xf ) != 0) {
               Poly1305_Update(lVar1 + 0xd0, zero, 0x10 - ( ulong )(( uint ) * (ulong*)( lVar1 + 0xa8 ) & 0xf));
            }

            *(undefined4*)( lVar1 + 0xb8 ) = 0;
         }

         *(undefined8*)( lVar1 + 200 ) = 0xffffffffffffffff;
         uVar8 = param_4;
         if (( uVar6 != 0xffffffffffffffff ) && ( uVar8 = uVar6 + 0x10 != param_4 )) goto LAB_00100f7b;
         iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
         if (iVar5 == 0) {
            Poly1305_Update(lVar1 + 0xd0, param_3, uVar8);
            chacha_cipher(param_1, param_2, param_3, uVar8);
            lVar2 = *(long*)( lVar1 + 0xb0 );
         }
 else {
            chacha_cipher(param_1, param_2, param_3, uVar8);
            Poly1305_Update(lVar1 + 0xd0, param_2, uVar8);
            lVar2 = *(long*)( lVar1 + 0xb0 );
         }

         *(ulong*)( lVar1 + 0xb0 ) = lVar2 + uVar8;
         if (uVar8 != param_4) {
            bVar4 = true;
            b = (void*)( param_3 + uVar8 );
            param_2 = (undefined8*)( (long)param_2 + uVar8 );
            uVar6 = uVar8;
            goto LAB_00100ea0;
         }

         goto LAB_00100e3b;
      }

      Poly1305_Update(lVar1 + 0xd0, param_3, param_4);
      *(long*)( lVar1 + 0xa8 ) = *(long*)( lVar1 + 0xa8 ) + param_4;
      param_4 = param_4 & 0xffffffff;
      *(undefined4*)( lVar1 + 0xb8 ) = 1;
   }

   LAB_00100e3d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_4;
   }

   LAB_001010a0:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
undefined8 chacha20_poly1305_cleanup(long param_1) {
   long lVar1;
   if (*(long*)( param_1 + 0x78 ) != 0) {
      lVar1 = Poly1305_ctx_size();
      OPENSSL_cleanse(*(void**)( param_1 + 0x78 ), lVar1 + 0xd0);
      return 1;
   }

   return 1;
}
undefined8 chacha20_poly1305_init_key(long param_1, byte *param_2, long param_3, undefined4 param_4) {
   uint *puVar1;
   ulong uVar2;
   long lVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   undefined1 local_48[16];
   undefined1 auStack_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != (byte*)0x0 || param_3 != 0) {
      puVar1 = *(uint**)( param_1 + 0x78 );
      puVar1[0x2e] = 0;
      puVar1[0x2f] = 0;
      puVar1[0x32] = 0xffffffff;
      puVar1[0x33] = 0xffffffff;
      *(undefined1(*) [16])( puVar1 + 0x2a ) = (undefined1[16])0x0;
      if (param_3 == 0) {
         if (param_2 != (byte*)0x0) {
            *puVar1 = (uint)param_2[2] << 0x10 | (uint)param_2[1] << 8 | ( uint ) * param_2 | (uint)param_2[3] << 0x18;
            for (int i = 0; i < 7; i++) {
               puVar1[( i + 1 )] = (uint)param_2[( 4*i + 5 )] << 8 | (uint)param_2[( 4*i + 6 )] << 16 | (uint)param_2[( 4*i + 4 )] | (uint)param_2[( 4*i + 7 )] << 24;
            }

         }

         puVar1[0x1c] = 0;
      }
 else {
         lVar3 = (long)(int)puVar1[0x31];
         local_48 = (undefined1[16])0x0;
         if ((int)puVar1[0x31] < 0x11) {
            uVar4 = -lVar3 + 0x10;
            uVar2 = 0x10;
            if (0xf < uVar4) {
               uVar2 = uVar4;
            }

            __memcpy_chk(auStack_38 + -lVar3, param_3, lVar3, lVar3 + -0x10 + uVar2);
         }

         chacha_init_key(param_1, param_2, local_48, param_4);
         *(undefined8*)( puVar1 + 0x1e ) = *(undefined8*)( puVar1 + 9 );
         puVar1[0x20] = puVar1[0xb];
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined1 *EVP_chacha20(void) {
   return chacha20;
}
undefined1 *EVP_chacha20_poly1305(void) {
   return chacha20_poly1305;
}

