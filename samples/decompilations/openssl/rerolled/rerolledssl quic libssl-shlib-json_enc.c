undefined8 json_push(long param_1, uint param_2) {
   ulong uVar1;
   byte bVar2;
   byte *pbVar3;
   void *pvVar4;
   byte bVar5;
   ulong uVar6;
   ulong uVar7;
   if (1 < param_2) {
      return 0;
   }

   uVar6 = *(ulong*)( param_1 + 0x48 );
   uVar1 = *(ulong*)( param_1 + 0x50 );
   if (uVar6 < uVar1) {
      pvVar4 = *(void**)( param_1 + 8 );
      goto LAB_00100023;
   }

   if (uVar1 == 0) {
      uVar7 = 0x10;
      LAB_0010006b:pvVar4 = (void*)( param_1 + 0x11 );
      LAB_0010006f:*(void**)( param_1 + 8 ) = pvVar4;
   }
 else {
      uVar7 = uVar1 * 2;
      if (uVar1 < uVar7) {
         if (uVar7 < 0x11) goto LAB_0010006b;
         pvVar4 = *(void**)( param_1 + 8 );
         if (pvVar4 == (void*)( param_1 + 0x11 )) {
            *(undefined8*)( param_1 + 8 ) = 0;
            pvVar4 = (void*)0x0;
         }

         pvVar4 = CRYPTO_realloc(pvVar4, (int)uVar7, "ssl/quic/json_enc.c", 0x82);
         if (pvVar4 == (void*)0x0) {
            return 0;
         }

         uVar6 = *(ulong*)( param_1 + 0x48 );
         goto LAB_0010006f;
      }

      pvVar4 = *(void**)( param_1 + 8 );
   }

   *(ulong*)( param_1 + 0x50 ) = uVar7;
   LAB_00100023:pbVar3 = (byte*)( (long)pvVar4 + uVar6 );
   bVar2 = ( byte )(1 << ( *(byte*)( param_1 + 5 ) & 0x1f ));
   bVar5 = ~bVar2 & *pbVar3;
   if (param_2 != 0) {
      bVar5 = *pbVar3 | bVar2;
   }

   *pbVar3 = bVar5;
   bVar2 = *(char*)( param_1 + 5 ) + 1U & 7;
   *(byte*)( param_1 + 5 ) = bVar2;
   if (bVar2 == 0) {
      *(long*)( param_1 + 0x48 ) = *(long*)( param_1 + 0x48 ) + 1;
   }

   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */bool ossl_json_init(undefined4 *param_1, undefined8 param_2, undefined4 param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   void *pvVar3;
   ulong uVar4;
   undefined8 *puVar5;
   *(undefined8*)( param_1 + 1 ) = 0;
   *(undefined8*)( param_1 + 0x14 ) = 0;
   puVar5 = (undefined8*)( ( ulong )(param_1 + 3) & 0xfffffffffffffff8 );
   for (uVar4 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 3) & 0xfffffffffffffff8 ) ) + 0x58U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
   }

   *param_1 = param_3;
   pvVar3 = CRYPTO_malloc(0x1000, "ssl/quic/json_enc.c", 0x18);
   *(void**)( param_1 + 0xc ) = pvVar3;
   uVar2 = _UNK_00102408;
   uVar1 = __LC1;
   if (pvVar3 != (void*)0x0) {
      *(undefined8*)( param_1 + 10 ) = param_2;
      *(undefined1*)( (long)param_1 + 6 ) = 2;
      *(undefined8*)( param_1 + 0xe ) = uVar1;
      *(undefined8*)( param_1 + 0x10 ) = uVar2;
   }

   return pvVar3 != (void*)0x0;
}
void ossl_json_cleanup(long param_1) {
   CRYPTO_free(*(void**)( param_1 + 0x30 ));
   *(undefined8*)( param_1 + 0x30 ) = 0;
   *(undefined8*)( param_1 + 0x38 ) = 0;
   if (*(void**)( param_1 + 8 ) != (void*)( param_1 + 0x11 )) {
      CRYPTO_free(*(void**)( param_1 + 8 ));
   }

   *(undefined8*)( param_1 + 8 ) = 0;
   return;
}
undefined8 ossl_json_reset(long param_1) {
   *(undefined2*)( param_1 + 4 ) = 0;
   *(undefined1(*) [16])( param_1 + 0x40 ) = (undefined1[16])0x0;
   return 1;
}
undefined4 ossl_json_flush(long param_1) {
   long lVar1;
   long lVar2;
   int iVar3;
   undefined4 uVar4;
   long in_FS_OFFSET;
   lVar1 = *(long*)( param_1 + 0x40 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      if (lVar1 == 0) {
         *(undefined8*)( param_1 + 0x40 ) = 0;
         uVar4 = 1;
         BIO_ctrl(*(BIO**)( param_1 + 0x28 ), 0xb, 0, (void*)0x0);
         LAB_0010029f:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar4;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      iVar3 = BIO_write_ex(*(undefined8*)( param_1 + 0x28 ), *(undefined8*)( param_1 + 0x30 ), lVar1);
      if (iVar3 == 0) {
         memmove(*(void**)( param_1 + 0x30 ), *(void**)( param_1 + 0x30 ), *(size_t*)( param_1 + 0x40 ));
         *(undefined8*)( param_1 + 0x40 ) = 0;
         uVar4 = 0;
         goto LAB_0010029f;
      }

      lVar1 = *(long*)( param_1 + 0x40 );
   }
 while ( true );
}
undefined4 ossl_json_flush_cleanup(undefined8 param_1) {
   undefined4 uVar1;
   uVar1 = ossl_json_flush();
   ossl_json_cleanup(param_1);
   return uVar1;
}
undefined8 ossl_json_set0_sink(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x28 ) = param_2;
   return 1;
}
undefined1 ossl_json_in_error(long param_1) {
   return *(undefined1*)( param_1 + 4 );
}
void json_indent_part_0(byte *param_1) {
   char cVar1;
   int iVar2;
   long lVar3;
   ulong uVar4;
   char *pcVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = ossl_json_in_error();
   if (iVar2 == 0) {
      json_write_char_part_0(param_1, 10);
   }

   lVar6 = 0;
   lVar7 = ( (ulong)param_1[5] + *(long*)( param_1 + 0x48 ) * 8 ) * 4;
   if (lVar7 != 0) {
      do {
         iVar2 = ossl_json_in_error(param_1);
         if (iVar2 == 0) {
            if (( param_1[0x10] != 0 ) && ( param_1[0x10] = 0(*param_1 & 2) != 0 )) {
               json_indent_part_0(param_1);
            }

            pcVar5 = "    ";
            while (true) {
               cVar1 = *pcVar5;
               pcVar5 = pcVar5 + 1;
               if (cVar1 == '\0') break;
               uVar4 = *(ulong*)( param_1 + 0x40 );
               if (*(ulong*)( param_1 + 0x38 ) == uVar4) {
                  local_48 = 0;
                  uVar8 = 0;
                  if (uVar4 != 0) {
                     do {
                        iVar2 = BIO_write_ex(*(undefined8*)( param_1 + 0x28 ), *(long*)( param_1 + 0x30 ) + uVar8, uVar4 - uVar8, &local_48);
                        if (iVar2 == 0) {
                           memmove(*(void**)( param_1 + 0x30 ), (void*)( (long)*(void**)( param_1 + 0x30 ) + uVar8 ), *(long*)( param_1 + 0x40 ) - uVar8);
                           for (int i = 0; i < 4; i++) {
                              param_1[( 2*i + 64 )] = 0;
                              param_1[( 2*i + 65 )] = 0;
                           }

                           param_1[4] = 1;
                           goto LAB_00100441;
                        }

                        uVar4 = *(ulong*)( param_1 + 0x40 );
                        uVar8 = uVar8 + local_48;
                     }
 while ( uVar8 < uVar4 );
                  }

                  lVar3 = 1;
                  uVar4 = 0;
               }
 else {
                  lVar3 = uVar4 + 1;
               }

               *(long*)( param_1 + 0x40 ) = lVar3;
               *(char*)( *(long*)( param_1 + 0x30 ) + uVar4 ) = cVar1;
            }
;
         }

         LAB_00100441:lVar6 = lVar6 + 1;
      }
 while ( lVar6 != lVar7 );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void json_write_char_part_0(byte *param_1, undefined1 param_2) {
   int iVar1;
   long lVar2;
   ulong uVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1[0x10] == 0 ) || ( param_1[0x10] = 0(*param_1 & 2) == 0 )) {
      uVar3 = *(ulong*)( param_1 + 0x40 );
      if (*(ulong*)( param_1 + 0x38 ) == uVar3) {
         LAB_0010050f:local_38 = 0;
         uVar4 = 0;
         if (uVar3 != 0) {
            do {
               iVar1 = BIO_write_ex(*(undefined8*)( param_1 + 0x28 ), *(long*)( param_1 + 0x30 ) + uVar4, uVar3 - uVar4, &local_38);
               if (iVar1 == 0) {
                  memmove(*(void**)( param_1 + 0x30 ), (void*)( (long)*(void**)( param_1 + 0x30 ) + uVar4 ), *(long*)( param_1 + 0x40 ) - uVar4);
                  for (int i = 0; i < 4; i++) {
                     param_1[( 2*i + 64 )] = 0;
                     param_1[( 2*i + 65 )] = 0;
                  }

                  param_1[4] = 1;
                  goto LAB_001004d9;
               }

               uVar3 = *(ulong*)( param_1 + 0x40 );
               uVar4 = uVar4 + local_38;
            }
 while ( uVar4 < uVar3 );
         }

         lVar2 = 1;
         uVar3 = 0;
         goto LAB_001004cd;
      }

   }
 else {
      json_indent_part_0();
      uVar3 = *(ulong*)( param_1 + 0x40 );
      if (*(ulong*)( param_1 + 0x38 ) == uVar3) goto LAB_0010050f;
   }

   lVar2 = uVar3 + 1;
   LAB_001004cd:*(long*)( param_1 + 0x40 ) = lVar2;
   *(undefined1*)( *(long*)( param_1 + 0x30 ) + uVar3 ) = param_2;
   LAB_001004d9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void json_post_item_part_0_constprop_0(undefined8 param_1) {
   int iVar1;
   iVar1 = ossl_json_in_error();
   if (iVar1 == 0) {
      json_write_char_part_0(param_1, 10);
      return;
   }

   return;
}
void json_write_str_part_0(byte *param_1, char *param_2) {
   char cVar1;
   int iVar2;
   long lVar3;
   ulong uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1[0x10] != 0 ) && ( param_1[0x10] = 0(*param_1 & 2) != 0 )) {
      json_indent_part_0();
   }

   do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      if (cVar1 == '\0') {
         LAB_00100687:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      uVar4 = *(ulong*)( param_1 + 0x40 );
      if (*(ulong*)( param_1 + 0x38 ) == uVar4) {
         local_38 = 0;
         uVar5 = 0;
         if (uVar4 != 0) {
            do {
               iVar2 = BIO_write_ex(*(undefined8*)( param_1 + 0x28 ), *(long*)( param_1 + 0x30 ) + uVar5, uVar4 - uVar5, &local_38);
               if (iVar2 == 0) {
                  memmove(*(void**)( param_1 + 0x30 ), (void*)( (long)*(void**)( param_1 + 0x30 ) + uVar5 ), *(long*)( param_1 + 0x40 ) - uVar5);
                  for (int i = 0; i < 4; i++) {
                     param_1[( 2*i + 64 )] = 0;
                     param_1[( 2*i + 65 )] = 0;
                  }

                  param_1[4] = 1;
                  goto LAB_00100687;
               }

               uVar4 = *(ulong*)( param_1 + 0x40 );
               uVar5 = uVar5 + local_38;
            }
 while ( uVar5 < uVar4 );
         }

         lVar3 = 1;
         uVar4 = 0;
      }
 else {
         lVar3 = uVar4 + 1;
      }

      *(long*)( param_1 + 0x40 ) = lVar3;
      *(char*)( *(long*)( param_1 + 0x30 ) + uVar4 ) = cVar1;
   }
 while ( true );
}
undefined8 json_pre_item(byte *param_1) {
   int iVar1;
   long lVar2;
   uint uVar3;
   iVar1 = ossl_json_in_error();
   if (iVar1 != 0) {
      return 0;
   }

   if (param_1[6] == 1) {
      return 1;
   }

   if (param_1[6] == 2) {
      lVar2 = *(long*)( param_1 + 0x48 );
      if (param_1[5] == 0) {
         if (lVar2 == 0) {
            if (( ( *param_1 & 1 ) != 0 ) && ( iVar1 = iVar1 == 0 )) {
               json_write_char_part_0(param_1, 0x1e);
            }

            goto LAB_00100740;
         }

         lVar2 = lVar2 + -1;
         uVar3 = 7;
      }
 else {
         uVar3 = param_1[5] - 1;
      }

      if (( *(byte*)( *(long*)( param_1 + 8 ) + lVar2 ) >> ( uVar3 & 0x1f ) & 1 ) != 0) {
         iVar1 = ossl_json_in_error(param_1);
         if (iVar1 == 0) {
            json_write_char_part_0(param_1, 0x2c);
         }

         iVar1 = ossl_json_in_error(param_1);
         if (iVar1 != 0) {
            return 0;
         }

         param_1[0x10] = 0;
         if (( *param_1 & 2 ) != 0) {
            json_indent_part_0(param_1);
         }

         LAB_00100740:param_1[6] = 1;
         return 1;
      }

   }

   param_1[4] = 1;
   return 0;
}
void ossl_json_object_begin(byte *param_1) {
   int iVar1;
   long lVar2;
   uint uVar3;
   iVar1 = ossl_json_in_error();
   if (iVar1 != 0) goto LAB_0010081a;
   if (param_1[6] == 1) {
      LAB_0010080c:iVar1 = json_push(param_1, 0);
      if (iVar1 != 0) goto LAB_0010081e;
   }
 else {
      if (param_1[6] != 2) goto LAB_0010081a;
      lVar2 = *(long*)( param_1 + 0x48 );
      if (param_1[5] == 0) {
         if (lVar2 != 0) {
            lVar2 = lVar2 + -1;
            uVar3 = 7;
            goto LAB_001007c1;
         }

         if (( *param_1 & 1 ) != 0) {
            iVar1 = ossl_json_in_error(param_1);
            if (iVar1 == 0) {
               json_write_char_part_0(param_1, 0x1e);
            }

         }

         LAB_00100808:param_1[6] = 1;
         goto LAB_0010080c;
      }

      uVar3 = param_1[5] - 1;
      LAB_001007c1:if (( *(byte*)( *(long*)( param_1 + 8 ) + lVar2 ) >> ( uVar3 & 0x1f ) & 1 ) != 0) {
         iVar1 = ossl_json_in_error(param_1);
         if (iVar1 == 0) {
            json_write_char_part_0(param_1, 0x2c);
         }

         iVar1 = ossl_json_in_error(param_1);
         if (iVar1 == 0) {
            param_1[0x10] = 0;
            if (( *param_1 & 2 ) != 0) {
               json_indent_part_0(param_1);
            }

            goto LAB_00100808;
         }

      }

   }

   LAB_0010081a:param_1[4] = 1;
   LAB_0010081e:iVar1 = ossl_json_in_error(param_1);
   if (iVar1 == 0) {
      json_write_char_part_0(param_1, 0x7b);
   }

   param_1[0x10] = 1;
   param_1[6] = 0;
   return;
}
void ossl_json_object_end(byte *param_1) {
   byte bVar1;
   long lVar2;
   int iVar3;
   byte bVar4;
   bVar1 = param_1[0x10];
   iVar3 = ossl_json_in_error();
   if (iVar3 != 0) {
      return;
   }

   bVar4 = param_1[5];
   lVar2 = *(long*)( param_1 + 0x48 );
   param_1[0x10] = 0;
   if (bVar4 == 0) {
      if (( lVar2 == 0 ) || ( *(char*)( *(long*)( param_1 + 8 ) + lVar2 + -1 ) < '\0' )) goto LAB_0010095f;
   }
 else if (( *(byte*)( *(long*)( param_1 + 8 ) + lVar2 ) >> ( bVar4 - 1 & 0x1f ) & 1 ) != 0) goto LAB_0010095f;
   if (param_1[6] == 1) {
      LAB_0010095f:param_1[4] = 1;
      return;
   }

   if (lVar2 == 0) {
      if (bVar4 == 0) goto LAB_0010095f;
   }
 else if (bVar4 == 0) {
      bVar4 = 7;
      *(long*)( param_1 + 0x48 ) = lVar2 + -1;
      goto LAB_001008f5;
   }

   bVar4 = bVar4 - 1;
   LAB_001008f5:param_1[5] = bVar4;
   if (( bVar1 == 0 ) && ( ( *param_1 & 2 ) != 0 )) {
      json_indent_part_0(param_1);
   }

   iVar3 = ossl_json_in_error(param_1);
   if (iVar3 == 0) {
      json_write_char_part_0(param_1, 0x7d);
   }

   if (( param_1[5] == 0 ) && ( *(long*)( param_1 + 0x48 ) == 0 )) {
      param_1[6] = 2;
      if (( *param_1 & 1 ) != 0) {
         json_post_item_part_0_constprop_0(param_1);
         return;
      }

   }
 else {
      param_1[6] = 2;
   }

   return;
}
void ossl_json_array_begin(byte *param_1) {
   int iVar1;
   long lVar2;
   uint uVar3;
   iVar1 = ossl_json_in_error();
   if (iVar1 != 0) goto LAB_00100a1d;
   if (param_1[6] == 1) {
      LAB_00100a0c:iVar1 = json_push(param_1, 1);
      if (iVar1 != 0) goto LAB_00100a21;
   }
 else {
      if (param_1[6] != 2) goto LAB_00100a1d;
      lVar2 = *(long*)( param_1 + 0x48 );
      if (param_1[5] == 0) {
         if (lVar2 != 0) {
            lVar2 = lVar2 + -1;
            uVar3 = 7;
            goto LAB_001009c1;
         }

         if (( *param_1 & 1 ) != 0) {
            iVar1 = ossl_json_in_error(param_1);
            if (iVar1 == 0) {
               json_write_char_part_0(param_1, 0x1e);
            }

         }

         LAB_00100a08:param_1[6] = 1;
         goto LAB_00100a0c;
      }

      uVar3 = param_1[5] - 1;
      LAB_001009c1:if (( *(byte*)( *(long*)( param_1 + 8 ) + lVar2 ) >> ( uVar3 & 0x1f ) & 1 ) != 0) {
         iVar1 = ossl_json_in_error(param_1);
         if (iVar1 == 0) {
            json_write_char_part_0(param_1, 0x2c);
         }

         iVar1 = ossl_json_in_error(param_1);
         if (iVar1 == 0) {
            param_1[0x10] = 0;
            if (( *param_1 & 2 ) != 0) {
               json_indent_part_0(param_1);
            }

            goto LAB_00100a08;
         }

      }

   }

   LAB_00100a1d:param_1[4] = 1;
   LAB_00100a21:iVar1 = ossl_json_in_error(param_1);
   if (iVar1 == 0) {
      json_write_char_part_0(param_1, 0x5b);
   }

   param_1[0x10] = 1;
   param_1[6] = 1;
   return;
}
void ossl_json_array_end(byte *param_1) {
   byte bVar1;
   byte bVar2;
   long lVar3;
   int iVar4;
   bVar1 = param_1[0x10];
   iVar4 = ossl_json_in_error();
   if (iVar4 != 0) {
      return;
   }

   bVar2 = param_1[5];
   lVar3 = *(long*)( param_1 + 0x48 );
   param_1[0x10] = 0;
   if (bVar2 == 0) {
      if (( lVar3 != 0 ) && ( *(char*)( *(long*)( param_1 + 8 ) + -1 + lVar3 ) < '\0' )) {
         *(long*)( param_1 + 0x48 ) = lVar3 + -1;
         param_1[5] = 7;
         joined_r0x00100aea:if (( bVar1 == 0 ) && ( ( *param_1 & 2 ) != 0 )) {
            json_indent_part_0(param_1);
         }

         iVar4 = ossl_json_in_error(param_1);
         if (iVar4 == 0) {
            json_write_char_part_0(param_1, 0x5d);
         }

         if (( param_1[5] == 0 ) && ( *(long*)( param_1 + 0x48 ) == 0 )) {
            param_1[6] = 2;
            if (( *param_1 & 1 ) == 0) {
               return;
            }

            json_post_item_part_0_constprop_0(param_1);
            return;
         }

         param_1[6] = 2;
         return;
      }

   }
 else if (( *(byte*)( *(long*)( param_1 + 8 ) + lVar3 ) >> ( bVar2 - 1 & 0x1f ) & 1 ) != 0) {
      param_1[5] = bVar2 - 1;
      goto joined_r0x00100aea;
   }

   param_1[4] = 1;
   return;
}
void ossl_json_key(byte *param_1, uint *param_2) {
   byte bVar1;
   byte bVar2;
   int iVar3;
   long lVar4;
   ulong uVar5;
   uint uVar6;
   byte bVar7;
   uint *puVar8;
   long in_FS_OFFSET;
   uint local_48;
   char local_44;
   char local_43;
   undefined1 local_42;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = ossl_json_in_error();
   if (iVar3 != 0) goto LAB_00100bcc;
   lVar4 = *(long*)( param_1 + 0x48 );
   if (param_1[5] == 0) {
      if (lVar4 != 0) {
         lVar4 = lVar4 + -1;
         uVar6 = 7;
         goto LAB_00100ba2;
      }

   }
 else {
      uVar6 = param_1[5] - 1;
      LAB_00100ba2:if (( *(byte*)( *(long*)( param_1 + 8 ) + lVar4 ) >> ( uVar6 & 0x1f ) & 1 ) == 0) {
         bVar1 = param_1[6];
         if (bVar1 == 2) {
            iVar3 = ossl_json_in_error(param_1);
            if (iVar3 == 0) {
               json_write_char_part_0(param_1, 0x2c);
            }

            param_1[6] = 0;
            param_1[0x10] = 0;
            if (( *param_1 & 2 ) != 0) goto LAB_00100c29;
         }
 else {
            param_1[0x10] = 0;
            if (( *param_1 & 2 ) != 0) {
               LAB_00100c29:json_indent_part_0(param_1);
               bVar1 = param_1[6];
            }

            if (bVar1 != 0) goto LAB_00100bc7;
         }

         iVar3 = ossl_json_in_error(param_1);
         if (iVar3 == 0) {
            iVar3 = ossl_json_in_error(param_1);
            if (iVar3 == 0) {
               json_write_char_part_0(param_1, 0x22);
            }

            for (uVar5 = strlen((char*)param_2); uVar5 != 0; uVar5 = uVar5 - 1) {
               bVar1 = ( byte ) * param_2;
               if ((char)bVar1 < '#') {
                  if ((char)bVar1 < '\b') {
                     switchD_00100ceb_caseD_b:if (( byte )(bVar1 + 0x3e) < 0x1e) {
                        if (( uVar5 == 1 ) || ( 0x3f < ( byte )(*(byte*)( (long)param_2 + 1 ) + 0x80) )) {
                           LAB_00100d91:local_44 = ( bVar1 >> 4 ) + 0x57;
                           goto LAB_00100d98;
                        }

                        uVar6 = *param_2;
                        uVar5 = uVar5 - 1;
                        param_2 = (uint*)( (long)param_2 + 1 );
                        puVar8 = &local_48;
                        local_48 = CONCAT22((short)( local_48 >> 0x10 ), (short)uVar6) & 0xff00ffff;
                     }
 else {
                        bVar7 = bVar1;
                        if (( byte )(bVar1 + 0x20) < 0x10) {
                           if (uVar5 < 3) {
                              LAB_00100ef0:local_44 = ( bVar7 >> 4 ) + 0x57;
                              goto LAB_00100d98;
                           }

                           bVar7 = *(byte*)( (long)param_2 + 1 );
                           if (( 0x3f < ( byte )(bVar7 + 0x80) ) || ( 0x3f < ( byte )(*(byte*)( (long)param_2 + 2 ) + 0x80) )) goto LAB_00100d91;
                           if (bVar1 == 0xe0) {
                              if (bVar7 < 0xa0) {
                                 bVar7 = 0;
                                 local_44 = 'e';
                                 goto LAB_00100dad;
                              }

                           }
 else if (( bVar1 == 0xed ) && ( 0x9f < bVar7 )) {
                              bVar7 = 0xed;
                              goto LAB_00100ef0;
                           }

                           uVar5 = uVar5 - 2;
                           puVar8 = &local_48;
                           local_48 = ( uint )(uint3) * param_2;
                           param_2 = (uint*)( (long)param_2 + 2 );
                        }
 else {
                           if (4 < ( byte )(bVar1 + 0x10)) {
                              if (( byte )(bVar1 - 0x20) < 0x5f) goto LAB_00100e65;
                              bVar7 = bVar1 >> 4;
                              if (bVar7 < 10) goto LAB_00100ff0;
                              goto LAB_00100d91;
                           }

                           if (uVar5 < 4) {
                              LAB_00100f8f:local_44 = 'f';
                              goto LAB_00100d98;
                           }

                           bVar2 = *(byte*)( (long)param_2 + 1 );
                           if (( ( 0x3f < ( byte )(bVar2 + 0x80) ) || ( 0x3f < ( byte )(*(byte*)( (long)param_2 + 2 ) + 0x80) ) ) || ( 0x3f < ( byte )(*(byte*)( (long)param_2 + 3 ) + 0x80) )) goto LAB_00100ef0;
                           if (bVar1 == 0xf0) {
                              if (bVar2 < 0x90) {
                                 bVar7 = 0;
                                 local_44 = 'f';
                                 goto LAB_00100dad;
                              }

                           }
 else if (( 0x8f < bVar2 ) && ( bVar1 == 0xf4 )) goto LAB_00100f8f;
                           local_48 = *param_2;
                           local_44 = '\0';
                           param_2 = (uint*)( (long)param_2 + 3 );
                           uVar5 = uVar5 - 3;
                           puVar8 = &local_48;
                        }

                     }

                  }
 else {
                     switch (bVar1) {
                        case 8:
                puVar8 = (uint *)&_LC5;
                break;
                        case 9:
                puVar8 = (uint *)&_LC4;
                break;
                        case 10:
                puVar8 = (uint *)&_LC3;
                break;
                        default:
                goto switchD_00100ceb_caseD_b;
                        case 0xc:
                puVar8 = (uint *)&_LC6;
                break;
                        case 0xd:
                puVar8 = (uint *)&_LC9;
                break;
                        case 0x22:
                puVar8 = (uint *)&_LC7;
                     }

                  }

                  LAB_00100dd0:iVar3 = ossl_json_in_error(param_1);
                  if (iVar3 == 0) {
                     json_write_str_part_0(param_1, puVar8);
                  }

               }
 else {
                  puVar8 = (uint*)&_LC8;
                  if (bVar1 == 0x5c) goto LAB_00100dd0;
                  if (bVar1 == 0x7f) {
                     bVar7 = 7;
                     LAB_00100ff0:local_44 = bVar7 + 0x30;
                     LAB_00100d98:bVar7 = bVar1 & 0xf;
                     local_43 = bVar7 + 0x57;
                     if (( bVar1 & 0xf ) < 10) {
                        LAB_00100dad:local_43 = bVar7 + 0x30;
                     }

                     local_48 = 0x3030755c;
                     puVar8 = &local_48;
                     local_42 = 0;
                     goto LAB_00100dd0;
                  }

                  LAB_00100e65:iVar3 = ossl_json_in_error(param_1);
                  if (iVar3 == 0) {
                     json_write_char_part_0(param_1, (int)(char)bVar1);
                  }

               }

               param_2 = (uint*)( (long)param_2 + 1 );
            }

            iVar3 = ossl_json_in_error(param_1);
            if (iVar3 == 0) {
               json_write_char_part_0(param_1, 0x22);
            }

         }

         iVar3 = ossl_json_in_error(param_1);
         if (iVar3 == 0) {
            iVar3 = ossl_json_in_error(param_1);
            if (iVar3 == 0) {
               json_write_char_part_0(param_1, 0x3a);
            }

            if (( ( *param_1 & 2 ) != 0 ) && ( iVar3 = iVar3 == 0 )) {
               json_write_char_part_0(param_1, 0x20);
            }

            param_1[6] = 1;
         }

         goto LAB_00100bcc;
      }

   }

   LAB_00100bc7:param_1[4] = 1;
   LAB_00100bcc:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void ossl_json_null(byte *param_1) {
   int iVar1;
   long lVar2;
   uint uVar3;
   iVar1 = ossl_json_in_error();
   if (iVar1 != 0) {
      return;
   }

   if (param_1[6] == 1) goto LAB_001010a4;
   if (param_1[6] != 2) goto LAB_001010d8;
   lVar2 = *(long*)( param_1 + 0x48 );
   if (param_1[5] == 0) {
      if (lVar2 != 0) {
         lVar2 = lVar2 + -1;
         uVar3 = 7;
         goto LAB_00101059;
      }

      if (( ( *param_1 & 1 ) != 0 ) && ( iVar1 = iVar1 == 0 )) {
         json_write_char_part_0(param_1, 0x1e);
      }

   }
 else {
      uVar3 = param_1[5] - 1;
      LAB_00101059:if (( *(byte*)( *(long*)( param_1 + 8 ) + lVar2 ) >> ( uVar3 & 0x1f ) & 1 ) == 0) {
         LAB_001010d8:param_1[4] = 1;
         return;
      }

      iVar1 = ossl_json_in_error(param_1);
      if (iVar1 == 0) {
         json_write_char_part_0(param_1, 0x2c);
      }

      iVar1 = ossl_json_in_error(param_1);
      if (iVar1 != 0) {
         return;
      }

      param_1[0x10] = 0;
      if (( *param_1 & 2 ) != 0) {
         json_indent_part_0(param_1);
      }

   }

   param_1[6] = 1;
   LAB_001010a4:iVar1 = ossl_json_in_error(param_1);
   if (iVar1 == 0) {
      json_write_str_part_0(param_1, &_LC11);
   }

   if (( param_1[5] == 0 ) && ( *(long*)( param_1 + 0x48 ) == 0 )) {
      param_1[6] = 2;
      if (( *param_1 & 1 ) != 0) {
         json_post_item_part_0_constprop_0(param_1);
         return;
      }

   }
 else {
      param_1[6] = 2;
   }

   return;
}
void ossl_json_bool(byte *param_1, int param_2) {
   int iVar1;
   long lVar2;
   uint uVar3;
   char *pcVar4;
   iVar1 = ossl_json_in_error();
   if (iVar1 != 0) {
      return;
   }

   if (param_1[6] == 1) goto LAB_001011c4;
   if (param_1[6] != 2) goto LAB_00101218;
   lVar2 = *(long*)( param_1 + 0x48 );
   if (param_1[5] == 0) {
      if (lVar2 != 0) {
         lVar2 = lVar2 + -1;
         uVar3 = 7;
         goto LAB_00101170;
      }

      if (( ( *param_1 & 1 ) != 0 ) && ( iVar1 = iVar1 == 0 )) {
         json_write_char_part_0(param_1, 0x1e);
      }

   }
 else {
      uVar3 = param_1[5] - 1;
      LAB_00101170:if (( *(byte*)( *(long*)( param_1 + 8 ) + lVar2 ) >> ( uVar3 & 0x1f ) & 1 ) == 0) {
         LAB_00101218:param_1[4] = 1;
         return;
      }

      iVar1 = ossl_json_in_error(param_1);
      if (iVar1 == 0) {
         json_write_char_part_0(param_1, 0x2c);
      }

      iVar1 = ossl_json_in_error(param_1);
      if (iVar1 != 0) {
         return;
      }

      param_1[0x10] = 0;
      if (( *param_1 & 2 ) != 0) {
         json_indent_part_0(param_1);
      }

   }

   param_1[6] = 1;
   LAB_001011c4:pcVar4 = "true";
   if (param_2 < 1) {
      pcVar4 = "false";
   }

   iVar1 = ossl_json_in_error(param_1);
   if (iVar1 == 0) {
      json_write_str_part_0(param_1, pcVar4);
      lVar2 = *(long*)( param_1 + 0x48 );
   }
 else {
      lVar2 = *(long*)( param_1 + 0x48 );
   }

   if (( lVar2 == 0 ) && ( param_1[5] == 0 )) {
      param_1[6] = 2;
      if (( ( *param_1 & 1 ) != 0 ) && ( iVar1 = iVar1 == 0 )) {
         json_write_char_part_0(param_1, 10);
         return;
      }

   }
 else {
      param_1[6] = 2;
   }

   return;
}
void ossl_json_u64(uint *param_1, ulong param_2) {
   uint uVar1;
   bool bVar2;
   int iVar3;
   long lVar4;
   uint uVar5;
   byte bVar6;
   char *pcVar7;
   long in_FS_OFFSET;
   char local_34[4];
   long local_30;
   uVar1 = *param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = ossl_json_in_error();
   if (iVar3 == 0) {
      if (*(byte*)( (long)param_1 + 6 ) != 1) {
         if (*(byte*)( (long)param_1 + 6 ) != 2) {
            LAB_00101448:*(byte*)( param_1 + 1 ) = 1;
            goto LAB_0010138a;
         }

         lVar4 = *(long*)( param_1 + 0x12 );
         if (*(byte*)( (long)param_1 + 5 ) == 0) {
            if (lVar4 != 0) {
               lVar4 = lVar4 + -1;
               uVar5 = 7;
               goto LAB_001012ec;
            }

            if (( *param_1 & 1 ) != 0) {
               iVar3 = ossl_json_in_error(param_1);
               if (iVar3 == 0) {
                  json_write_char_part_0(param_1, 0x1e);
               }

            }

         }
 else {
            uVar5 = *(byte*)( (long)param_1 + 5 ) - 1;
            LAB_001012ec:if (( *(byte*)( *(long*)( param_1 + 2 ) + lVar4 ) >> ( uVar5 & 0x1f ) & 1 ) == 0) goto LAB_00101448;
            iVar3 = ossl_json_in_error(param_1);
            if (iVar3 == 0) {
               json_write_char_part_0(param_1, 0x2c);
            }

            iVar3 = ossl_json_in_error(param_1);
            if (iVar3 != 0) goto LAB_0010138a;
            *(byte*)( param_1 + 4 ) = 0;
            if (( *param_1 & 2 ) != 0) {
               json_indent_part_0(param_1);
            }

         }

         *(byte*)( (long)param_1 + 6 ) = 1;
      }

      bVar6 = param_2 >> 0x35 != 0 & ( byte )(uVar1 >> 2);
      if (bVar6 == 0) {
         if (param_2 != 0) goto LAB_001013c9;
         iVar3 = ossl_json_in_error(param_1);
         if (iVar3 == 0) {
            json_write_str_part_0(param_1, &_LC14);
         }

      }
 else {
         iVar3 = ossl_json_in_error(param_1);
         if (iVar3 == 0) {
            json_write_char_part_0(param_1, 0x22);
         }

         LAB_001013c9:local_34[1] = 0;
         pcVar7 = local_34 + 1;
         do {
            pcVar7 = pcVar7 + -1;
            *pcVar7 = (char)param_2 + (char)( param_2 / 10 ) * -10 + '0';
            bVar2 = 9 < param_2;
            param_2 = param_2 / 10;
         }
 while ( bVar2 );
         iVar3 = ossl_json_in_error(param_1);
         if (iVar3 == 0) {
            json_write_str_part_0(param_1, pcVar7);
         }

         if (bVar6 != 0) {
            iVar3 = ossl_json_in_error(param_1);
            if (iVar3 == 0) {
               json_write_char_part_0(param_1, 0x22);
            }

         }

      }

      if (( *(long*)( param_1 + 0x12 ) == 0 ) && ( *(byte*)( (long)param_1 + 5 ) == 0 )) {
         *(byte*)( (long)param_1 + 6 ) = 2;
         if (( *param_1 & 1 ) != 0) {
            iVar3 = ossl_json_in_error(param_1);
            if (iVar3 == 0) {
               if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  json_write_char_part_0(param_1, 10);
                  return;
               }

               goto LAB_00101508;
            }

         }

      }
 else {
         *(byte*)( (long)param_1 + 6 ) = 2;
      }

   }

   LAB_0010138a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00101508:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
void ossl_json_i64(byte *param_1, ulong param_2) {
   bool bVar1;
   bool bVar2;
   int iVar3;
   char *pcVar4;
   long in_FS_OFFSET;
   char local_34[4];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (-1 < (long)param_2) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         ossl_json_u64();
         return;
      }

      goto LAB_00101748;
   }

   iVar3 = json_pre_item();
   if (iVar3 != 0) {
      if (( *param_1 & 4 ) == 0) {
         bVar2 = false;
         LAB_00101556:iVar3 = ossl_json_in_error(param_1);
         if (iVar3 == 0) {
            json_write_char_part_0(param_1, 0x2d);
         }

         if (param_2 != 0x8000000000000000) {
            LAB_001016a0:param_2 = -param_2;
         }

         iVar3 = json_pre_item(param_1);
         if (iVar3 != 0) goto LAB_00101591;
      }
 else {
         if (0x3ffffffffffffe < param_2 + 0x1fffffffffffff) {
            iVar3 = ossl_json_in_error(param_1);
            if (iVar3 == 0) {
               json_write_char_part_0(param_1, 0x22);
            }

            bVar2 = true;
            goto LAB_00101556;
         }

         iVar3 = ossl_json_in_error(param_1);
         if (iVar3 == 0) {
            json_write_char_part_0(param_1, 0x2d);
            bVar2 = false;
            goto LAB_001016a0;
         }

         param_2 = -param_2;
         bVar2 = false;
         iVar3 = json_pre_item(param_1);
         if (iVar3 == 0) goto LAB_00101618;
         LAB_00101591:local_34[1] = 0;
         pcVar4 = local_34 + 1;
         do {
            pcVar4 = pcVar4 + -1;
            *pcVar4 = (char)param_2 + (char)( param_2 / 10 ) * -10 + '0';
            bVar1 = 9 < param_2;
            param_2 = param_2 / 10;
         }
 while ( bVar1 );
         iVar3 = ossl_json_in_error(param_1);
         if (iVar3 == 0) {
            json_write_str_part_0(param_1, pcVar4);
         }

         if (( *(long*)( param_1 + 0x48 ) == 0 ) && ( param_1[5] == 0 )) {
            param_1[6] = 2;
            if (( *param_1 & 1 ) != 0) {
               json_post_item_part_0_constprop_0(param_1);
            }

         }
 else {
            param_1[6] = 2;
         }

      }

      if (( ( bVar2 ) && ( iVar3 = ossl_json_in_error(param_1) ),iVar3 == 0 )) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            json_write_char_part_0(param_1, 0x22);
            return;
         }

         goto LAB_00101748;
      }

   }

   LAB_00101618:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00101748:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void ossl_json_f64(double param_1, byte *param_2) {
   int iVar1;
   long lVar2;
   uint uVar3;
   long in_FS_OFFSET;
   char local_48[40];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = ossl_json_in_error();
   if (iVar1 != 0) goto LAB_00101884;
   if (param_2[6] == 1) {
      LAB_00101824:if (( (double)( (ulong)param_1 & __LC15 ) <= __LC16 ) && ( !NAN(param_1) )) {
         BIO_snprintf(local_48, 0x20, "%1.17g");
         iVar1 = ossl_json_in_error(param_2);
         if (iVar1 == 0) {
            json_write_str_part_0(param_2, local_48);
            lVar2 = *(long*)( param_2 + 0x48 );
         }
 else {
            lVar2 = *(long*)( param_2 + 0x48 );
         }

         if (( lVar2 == 0 ) && ( param_2[5] == 0 )) {
            param_2[6] = 2;
            if (( *param_2 & 1 ) != 0) {
               json_post_item_part_0_constprop_0(param_2);
            }

         }
 else {
            param_2[6] = 2;
         }

         goto LAB_00101884;
      }

   }
 else if (param_2[6] == 2) {
      lVar2 = *(long*)( param_2 + 0x48 );
      if (param_2[5] == 0) {
         if (lVar2 != 0) {
            lVar2 = lVar2 + -1;
            uVar3 = 7;
            goto LAB_001017ae;
         }

         if (( ( *param_2 & 1 ) != 0 ) && ( iVar1 = iVar1 == 0 )) {
            json_write_char_part_0(param_2, 0x1e);
         }

      }
 else {
         uVar3 = param_2[5] - 1;
         LAB_001017ae:if (( *(byte*)( *(long*)( param_2 + 8 ) + lVar2 ) >> ( uVar3 & 0x1f ) & 1 ) == 0) goto LAB_00101880;
         iVar1 = ossl_json_in_error(param_2);
         if (iVar1 == 0) {
            json_write_char_part_0(param_2, 0x2c);
         }

         iVar1 = ossl_json_in_error(param_2);
         if (iVar1 != 0) goto LAB_00101884;
         param_2[0x10] = 0;
         if (( *param_2 & 2 ) != 0) {
            json_indent_part_0(param_2);
         }

      }

      param_2[6] = 1;
      goto LAB_00101824;
   }

   LAB_00101880:param_2[4] = 1;
   LAB_00101884:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ossl_json_str(byte *param_1, uint *param_2) {
   byte bVar1;
   byte bVar2;
   byte bVar3;
   int iVar4;
   ulong uVar5;
   uint *puVar6;
   long in_FS_OFFSET;
   uint local_48;
   char local_44;
   char local_43;
   undefined1 local_42;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = json_pre_item();
   if (iVar4 != 0) {
      iVar4 = ossl_json_in_error(param_1);
      if (iVar4 == 0) {
         iVar4 = ossl_json_in_error(param_1);
         if (iVar4 == 0) {
            json_write_char_part_0(param_1, 0x22);
         }

         for (uVar5 = strlen((char*)param_2); uVar5 != 0; uVar5 = uVar5 - 1) {
            bVar1 = ( byte ) * param_2;
            if ((char)bVar1 < '#') {
               if ((char)bVar1 < '\b') {
                  switchD_001019fb_caseD_b:if (( byte )(bVar1 + 0x3e) < 0x1e) {
                     if (( uVar5 == 1 ) || ( 0x3f < ( byte )(*(byte*)( (long)param_2 + 1 ) + 0x80) )) goto LAB_00101c16;
                     uVar5 = uVar5 - 1;
                     puVar6 = &local_48;
                     local_48 = CONCAT22((short)( local_48 >> 0x10 ), (short)*param_2) & 0xff00ffff;
                     param_2 = (uint*)( (long)param_2 + 1 );
                  }
 else {
                     bVar3 = bVar1;
                     if (( byte )(bVar1 + 0x20) < 0x10) {
                        if (uVar5 < 3) goto LAB_00101b42;
                        bVar2 = *(byte*)( (long)param_2 + 1 );
                        if (( 0x3f < ( byte )(bVar2 + 0x80) ) || ( 0x3f < ( byte )(*(byte*)( (long)param_2 + 2 ) + 0x80) )) goto LAB_00101c16;
                        if (bVar1 == 0xe0) {
                           if (0x9f < bVar2) goto LAB_00101bb9;
                        }
 else {
                           if (( bVar1 != 0xed ) || ( bVar2 < 0xa0 )) {
                              LAB_00101bb9:uVar5 = uVar5 - 2;
                              puVar6 = &local_48;
                              local_48 = ( uint )(uint3) * param_2;
                              param_2 = (uint*)( (long)param_2 + 2 );
                              goto LAB_00101a10;
                           }

                           bVar3 = 0xed;
                        }

                        LAB_00101b42:local_44 = ( bVar3 >> 4 ) + 0x57;
                        goto LAB_00101b50;
                     }

                     if (4 < ( byte )(bVar1 + 0x10)) goto LAB_00101aa4;
                     if (uVar5 < 4) {
                        LAB_00101d08:local_44 = 'f';
                        goto LAB_00101b50;
                     }

                     bVar2 = *(byte*)( (long)param_2 + 1 );
                     if (( ( 0x3f < ( byte )(bVar2 + 0x80) ) || ( 0x3f < ( byte )(*(byte*)( (long)param_2 + 2 ) + 0x80) ) ) || ( 0x3f < ( byte )(*(byte*)( (long)param_2 + 3 ) + 0x80) )) goto LAB_00101b42;
                     if (bVar1 == 0xf0) {
                        if (bVar2 < 0x90) {
                           bVar3 = 0;
                           local_44 = 'f';
                           goto LAB_00101b64;
                        }

                     }
 else if (( 0x8f < bVar2 ) && ( bVar1 == 0xf4 )) goto LAB_00101d08;
                     local_48 = *param_2;
                     local_44 = '\0';
                     param_2 = (uint*)( (long)param_2 + 3 );
                     uVar5 = uVar5 - 3;
                     puVar6 = &local_48;
                  }

               }
 else {
                  switch (bVar1) {
                     case 8:
              puVar6 = (uint *)&_LC5;
              break;
                     case 9:
              puVar6 = (uint *)&_LC4;
              break;
                     case 10:
              puVar6 = (uint *)&_LC3;
              break;
                     default:
              goto switchD_001019fb_caseD_b;
                     case 0xc:
              puVar6 = (uint *)&_LC6;
              break;
                     case 0xd:
              puVar6 = (uint *)&_LC9;
              break;
                     case 0x22:
              puVar6 = (uint *)&_LC7;
                  }

               }

               LAB_00101a10:iVar4 = ossl_json_in_error(param_1);
               if (iVar4 == 0) {
                  json_write_str_part_0(param_1, puVar6);
               }

            }
 else {
               puVar6 = (uint*)&_LC8;
               if (bVar1 == 0x5c) goto LAB_00101a10;
               LAB_00101aa4:if (0x5e < ( byte )(bVar1 - 0x20)) {
                  if (bVar1 >> 4 < 10) {
                     local_44 = ( bVar1 >> 4 ) + 0x30;
                  }
 else {
                     LAB_00101c16:local_44 = ( bVar1 >> 4 ) + 0x57;
                  }

                  LAB_00101b50:bVar3 = bVar1 & 0xf;
                  local_43 = bVar3 + 0x57;
                  if (( bVar1 & 0xf ) < 10) {
                     LAB_00101b64:local_43 = bVar3 + 0x30;
                  }

                  local_48 = 0x3030755c;
                  puVar6 = &local_48;
                  local_42 = 0;
                  goto LAB_00101a10;
               }

               iVar4 = ossl_json_in_error(param_1);
               if (iVar4 == 0) {
                  json_write_char_part_0(param_1, (int)(char)bVar1);
               }

            }

            param_2 = (uint*)( (long)param_2 + 1 );
         }

         iVar4 = ossl_json_in_error(param_1);
         if (iVar4 == 0) {
            json_write_char_part_0(param_1, 0x22);
         }

      }

      if (( *(long*)( param_1 + 0x48 ) == 0 ) && ( param_1[5] == 0 )) {
         param_1[6] = 2;
         if (( *param_1 & 1 ) != 0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               json_post_item_part_0_constprop_0(param_1);
               return;
            }

            goto LAB_00101c81;
         }

      }
 else {
         param_1[6] = 2;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00101c81:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
void ossl_json_str_len(byte *param_1, uint *param_2, ulong param_3) {
   byte bVar1;
   byte bVar2;
   byte bVar3;
   int iVar4;
   uint *puVar5;
   long in_FS_OFFSET;
   uint local_48;
   char local_44;
   char local_43;
   undefined1 local_42;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = json_pre_item();
   if (iVar4 != 0) {
      iVar4 = ossl_json_in_error(param_1);
      if (iVar4 == 0) {
         iVar4 = ossl_json_in_error(param_1);
         if (iVar4 == 0) {
            json_write_char_part_0(param_1, 0x22);
         }

         if (param_3 != 0) {
            do {
               bVar1 = ( byte ) * param_2;
               if ((char)bVar1 < '#') {
                  if ((char)bVar1 < '\b') {
                     switchD_00101e0c_caseD_b:if (( byte )(bVar1 + 0x3e) < 0x1e) {
                        if (( param_3 == 1 ) || ( 0x3f < ( byte )(*(byte*)( (long)param_2 + 1 ) + 0x80) )) goto LAB_0010202e;
                        param_3 = param_3 - 1;
                        puVar5 = &local_48;
                        local_48 = CONCAT22((short)( local_48 >> 0x10 ), (short)*param_2) & 0xff00ffff;
                        param_2 = (uint*)( (long)param_2 + 1 );
                     }
 else {
                        bVar3 = bVar1;
                        if (( byte )(bVar1 + 0x20) < 0x10) {
                           if (param_3 < 3) goto LAB_00101f5a;
                           bVar2 = *(byte*)( (long)param_2 + 1 );
                           if (( 0x3f < ( byte )(bVar2 + 0x80) ) || ( 0x3f < ( byte )(*(byte*)( (long)param_2 + 2 ) + 0x80) )) goto LAB_0010202e;
                           if (bVar1 == 0xe0) {
                              if (0x9f < bVar2) goto LAB_00101fd5;
                           }
 else {
                              if (( bVar2 < 0xa0 ) || ( bVar1 != 0xed )) {
                                 LAB_00101fd5:param_3 = param_3 - 2;
                                 puVar5 = &local_48;
                                 local_48 = ( uint )(uint3) * param_2;
                                 param_2 = (uint*)( (long)param_2 + 2 );
                                 goto LAB_00101e20;
                              }

                              bVar3 = 0xed;
                           }

                           LAB_00101f5a:local_44 = ( bVar3 >> 4 ) + 0x57;
                           goto LAB_00101f68;
                        }

                        if (4 < ( byte )(bVar1 + 0x10)) goto LAB_00101eb4;
                        if (param_3 < 4) {
                           LAB_00102130:local_44 = 'f';
                           goto LAB_00101f68;
                        }

                        bVar2 = *(byte*)( (long)param_2 + 1 );
                        if (( ( 0x3f < ( byte )(bVar2 + 0x80) ) || ( 0x3f < ( byte )(*(byte*)( (long)param_2 + 2 ) + 0x80) ) ) || ( 0x3f < ( byte )(*(byte*)( (long)param_2 + 3 ) + 0x80) )) goto LAB_00101f5a;
                        if (bVar1 == 0xf0) {
                           if (bVar2 < 0x90) {
                              bVar3 = 0;
                              local_44 = 'f';
                              goto LAB_00101f7c;
                           }

                        }
 else if (( 0x8f < bVar2 ) && ( bVar1 == 0xf4 )) goto LAB_00102130;
                        local_48 = *param_2;
                        local_44 = '\0';
                        param_2 = (uint*)( (long)param_2 + 3 );
                        param_3 = param_3 - 3;
                        puVar5 = &local_48;
                     }

                  }
 else {
                     switch (bVar1) {
                        case 8:
                puVar5 = (uint *)&_LC5;
                break;
                        case 9:
                puVar5 = (uint *)&_LC4;
                break;
                        case 10:
                puVar5 = (uint *)&_LC3;
                break;
                        default:
                goto switchD_00101e0c_caseD_b;
                        case 0xc:
                puVar5 = (uint *)&_LC6;
                break;
                        case 0xd:
                puVar5 = (uint *)&_LC9;
                break;
                        case 0x22:
                puVar5 = (uint *)&_LC7;
                     }

                  }

                  LAB_00101e20:iVar4 = ossl_json_in_error(param_1);
                  if (iVar4 == 0) {
                     json_write_str_part_0(param_1, puVar5);
                  }

               }
 else {
                  puVar5 = (uint*)&_LC8;
                  if (bVar1 == 0x5c) goto LAB_00101e20;
                  LAB_00101eb4:if (0x5e < ( byte )(bVar1 - 0x20)) {
                     if (bVar1 >> 4 < 10) {
                        local_44 = ( bVar1 >> 4 ) + 0x30;
                     }
 else {
                        LAB_0010202e:local_44 = ( bVar1 >> 4 ) + 0x57;
                     }

                     LAB_00101f68:bVar3 = bVar1 & 0xf;
                     local_43 = bVar3 + 0x57;
                     if (( bVar1 & 0xf ) < 10) {
                        LAB_00101f7c:local_43 = bVar3 + 0x30;
                     }

                     local_48 = 0x3030755c;
                     puVar5 = &local_48;
                     local_42 = 0;
                     goto LAB_00101e20;
                  }

                  iVar4 = ossl_json_in_error(param_1);
                  if (iVar4 == 0) {
                     json_write_char_part_0(param_1, (int)(char)bVar1);
                  }

               }

               param_2 = (uint*)( (long)param_2 + 1 );
               param_3 = param_3 - 1;
            }
 while ( param_3 != 0 );
         }

         iVar4 = ossl_json_in_error(param_1);
         if (iVar4 == 0) {
            json_write_char_part_0(param_1, 0x22);
         }

      }

      if (( param_1[5] == 0 ) && ( *(long*)( param_1 + 0x48 ) == 0 )) {
         param_1[6] = 2;
         if (( *param_1 & 1 ) != 0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               json_post_item_part_0_constprop_0(param_1);
               return;
            }

            goto LAB_001020a2;
         }

      }
 else {
         param_1[6] = 2;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001020a2:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
void ossl_json_str_hex(byte *param_1, byte *param_2, long param_3) {
   byte bVar1;
   char cVar2;
   int iVar3;
   byte bVar4;
   byte *pbVar5;
   iVar3 = json_pre_item();
   if (iVar3 != 0) {
      iVar3 = ossl_json_in_error(param_1);
      if (iVar3 == 0) {
         json_write_char_part_0(param_1, 0x22);
      }

      pbVar5 = param_2 + param_3;
      if (param_2 < pbVar5) {
         do {
            bVar1 = *param_2;
            bVar4 = bVar1 >> 4;
            cVar2 = bVar4 + 0x57;
            if (bVar4 < 10) {
               cVar2 = bVar4 + 0x30;
            }

            iVar3 = ossl_json_in_error(param_1);
            if (iVar3 == 0) {
               json_write_char_part_0(param_1, cVar2);
            }

            cVar2 = ( bVar1 & 0xf ) + 0x30;
            if (9 < ( bVar1 & 0xf )) {
               cVar2 = ( bVar1 & 0xf ) + 0x57;
            }

            iVar3 = ossl_json_in_error(param_1);
            if (iVar3 == 0) {
               json_write_char_part_0(param_1, cVar2);
            }

            param_2 = param_2 + 1;
         }
 while ( pbVar5 != param_2 );
      }

      iVar3 = ossl_json_in_error(param_1);
      if (iVar3 == 0) {
         json_write_char_part_0(param_1, 0x22);
      }

      if (( param_1[5] != 0 ) || ( *(long*)( param_1 + 0x48 ) != 0 )) {
         param_1[6] = 2;
         return;
      }

      param_1[6] = 2;
      if (( *param_1 & 1 ) != 0) {
         json_post_item_part_0_constprop_0(param_1);
         return;
      }

   }

   return;
}

