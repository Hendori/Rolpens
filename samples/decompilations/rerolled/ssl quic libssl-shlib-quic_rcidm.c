ulong rcid_cmp(long param_1, long param_2) {
   ulong uVar1;
   uVar1 = 0xffffffff;
   if (*(ulong*)( param_2 + 0x28 ) <= *(ulong*)( param_1 + 0x28 )) {
      uVar1 = ( ulong )(*(ulong*)( param_2 + 0x28 ) < *(ulong*)( param_1 + 0x28 ));
   }

   return uVar1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void rcidm_tick(byte *param_1) {
   byte bVar1;
   byte bVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   int iVar6;
   long lVar7;
   long lVar8;
   if (( ( ( param_1[0x88] & 4 ) != 0 ) && ( ( ( *(long*)( param_1 + 0x48 ) == 0 || ( 9999 < *(ulong*)( param_1 + 0x40 ) ) ) || ( ( param_1[0x88] & 0x40 ) != 0 ) ) ) ) && ( lVar7 = ossl_pqueue_peek(*(undefined8*)( param_1 + 0x58 )) ),lVar7 != 0) {
      bVar1 = *(byte*)( lVar7 + 0x38 );
      if (( bVar1 & 3 ) != 1) {
         puVar3 = *(undefined8**)( param_1 + 0x60 );
         if (puVar3 != (undefined8*)0x0) {
            bVar2 = *(byte*)( puVar3 + 7 );
            if (( bVar2 & 3 ) != 2) {
               if (( bVar2 & 3 ) == 0) {
                  ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), puVar3[6]);
                  puVar3[6] = 0xffffffffffffffff;
                  *(byte*)( puVar3 + 7 ) = *(byte*)( puVar3 + 7 ) & 0xfc | 2;
               }
 else {
                  *(byte*)( puVar3 + 7 ) = bVar2 & 0xfc | 2;
                  if (( bVar2 & 3 ) == 1) {
                     for (int i = 0; i < 8; i++) {
                        param_1[( i + 96 )] = 0;
                     }

                  }

               }

               puVar4 = *(undefined8**)( param_1 + 0x70 );
               if (puVar4 != (undefined8*)0x0) {
                  *puVar4 = puVar3;
               }

               lVar8 = *(long*)( param_1 + 0x68 );
               puVar3[1] = puVar4;
               *puVar3 = 0;
               *(undefined8**)( param_1 + 0x70 ) = puVar3;
               if (lVar8 == 0) {
                  *(undefined8**)( param_1 + 0x68 ) = puVar3;
               }

               lVar8 = *(long*)( param_1 + 0x80 ) + _UNK_00101c48;
               *(long*)( param_1 + 0x78 ) = *(long*)( param_1 + 0x78 ) + __LC0;
               *(long*)( param_1 + 0x80 ) = lVar8;
            }

         }

         if (( bVar1 & 3 ) == 0) {
            ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), *(undefined8*)( lVar7 + 0x30 ));
            *(undefined8*)( lVar7 + 0x30 ) = 0xffffffffffffffff;
         }

         *(byte*)( lVar7 + 0x38 ) = *(byte*)( lVar7 + 0x38 ) & 0xfc | 1;
         *(long*)( param_1 + 0x60 ) = lVar7;
      }

      *(long*)( param_1 + 0x48 ) = *(long*)( param_1 + 0x48 ) + 1;
      param_1[0x88] = param_1[0x88] & 0xbf;
      if (*(ulong*)( param_1 + 0x40 ) < 10000) {
         lVar7 = *(long*)( param_1 + 0x60 );
         for (int i = 0; i < 8; i++) {
            param_1[( i + 64 )] = 0;
         }

         goto joined_r0x0010019f;
      }

      *(ulong*)( param_1 + 0x40 ) = *(ulong*)( param_1 + 0x40 ) % 10000;
   }

   lVar7 = *(long*)( param_1 + 0x60 );
   joined_r0x0010019f:if (lVar7 == 0) {
      lVar7 = ossl_pqueue_peek(*(undefined8*)( param_1 + 0x58 ));
      if (( lVar7 == 0 ) || ( bVar1 = *(byte*)( lVar7 + 0x38 )(bVar1 & 3) == 1 )) {
         lVar7 = *(long*)( param_1 + 0x60 );
         if (lVar7 == 0) {
            bVar1 = param_1[0x88];
            if (( bVar1 & 0x14 ) == 0x10) {
               bVar1 = *param_1;
               if (( ( param_1[0x2a] == bVar1 ) && ( bVar1 < 0x15 ) ) && ( iVar6 = memcmp(param_1 + 1, param_1 + 0x2b, (ulong)bVar1) ),iVar6 == 0) {
                  return;
               }

               param_1[0x88] = param_1[0x88] | 3;
               *(undefined8*)param_1 = *(undefined8*)( param_1 + 0x2a );
               *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_1 + 0x32 );
               *(undefined8*)( param_1 + 0xd ) = *(undefined8*)( param_1 + 0x37 );
               return;
            }

            if (( bVar1 & 0xc ) != 8) {
               param_1[0x88] = bVar1 & 0xfc | 1;
               return;
            }

            bVar1 = *param_1;
            if (( ( param_1[0x15] == bVar1 ) && ( bVar1 < 0x15 ) ) && ( iVar6 = memcmp(param_1 + 1, param_1 + 0x16, (ulong)bVar1) ),iVar6 == 0) {
               return;
            }

            param_1[0x88] = param_1[0x88] | 3;
            *(undefined8*)param_1 = *(undefined8*)( param_1 + 0x15 );
            *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_1 + 0x1d );
            *(undefined8*)( param_1 + 0xd ) = *(undefined8*)( param_1 + 0x22 );
            return;
         }

      }
 else {
         puVar3 = *(undefined8**)( param_1 + 0x60 );
         if (puVar3 != (undefined8*)0x0) {
            bVar2 = *(byte*)( puVar3 + 7 );
            if (( bVar2 & 3 ) != 2) {
               if (( bVar2 & 3 ) == 0) {
                  ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), puVar3[6]);
                  puVar3[6] = 0xffffffffffffffff;
                  *(byte*)( puVar3 + 7 ) = *(byte*)( puVar3 + 7 ) & 0xfc | 2;
               }
 else {
                  *(byte*)( puVar3 + 7 ) = bVar2 & 0xfc | 2;
                  if (( bVar2 & 3 ) == 1) {
                     for (int i = 0; i < 8; i++) {
                        param_1[( i + 96 )] = 0;
                     }

                  }

               }

               puVar4 = *(undefined8**)( param_1 + 0x70 );
               if (puVar4 != (undefined8*)0x0) {
                  *puVar4 = puVar3;
               }

               lVar8 = *(long*)( param_1 + 0x68 );
               puVar3[1] = puVar4;
               *puVar3 = 0;
               *(undefined8**)( param_1 + 0x70 ) = puVar3;
               if (lVar8 == 0) {
                  *(undefined8**)( param_1 + 0x68 ) = puVar3;
               }

               lVar8 = *(long*)( param_1 + 0x80 ) + _UNK_00101c48;
               *(long*)( param_1 + 0x78 ) = *(long*)( param_1 + 0x78 ) + __LC0;
               *(long*)( param_1 + 0x80 ) = lVar8;
            }

         }

         if (( bVar1 & 3 ) == 0) {
            ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), *(undefined8*)( lVar7 + 0x30 ));
            *(undefined8*)( lVar7 + 0x30 ) = 0xffffffffffffffff;
         }

         *(byte*)( lVar7 + 0x38 ) = *(byte*)( lVar7 + 0x38 ) & 0xfc | 1;
         *(long*)( param_1 + 0x60 ) = lVar7;
      }

   }

   bVar1 = *param_1;
   if (( ( *(byte*)( lVar7 + 0x10 ) != bVar1 ) || ( 0x14 < bVar1 ) ) || ( iVar6 = memcmp(param_1 + 1, (void*)( lVar7 + 0x11 ), (ulong)bVar1) ),iVar6 != 0) {
      uVar5 = *(undefined8*)( lVar7 + 0x18 );
      *(undefined8*)param_1 = *(undefined8*)( lVar7 + 0x10 );
      *(undefined8*)( param_1 + 8 ) = uVar5;
      uVar5 = *(undefined8*)( lVar7 + 0x1d );
      param_1[0x88] = param_1[0x88] | 3;
      *(undefined8*)( param_1 + 0xd ) = uVar5;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */byte *ossl_quic_rcidm_new(undefined8 *param_1) {
   byte bVar1;
   byte bVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   int iVar8;
   byte *ptr;
   long lVar9;
   long lVar10;
   ptr = (byte*)CRYPTO_zalloc(0x90, "ssl/quic/quic_rcidm.c", 0x11d);
   if (ptr != (byte*)0x0) {
      lVar9 = ossl_pqueue_new(0x100000);
      *(long*)( ptr + 0x58 ) = lVar9;
      if (lVar9 != 0) {
         if (param_1 != (undefined8*)0x0) {
            uVar6 = *param_1;
            uVar7 = param_1[1];
            uVar3 = *(undefined8*)( (long)param_1 + 0xd );
            ptr[0x88] = ptr[0x88] | 8;
            *(undefined8*)( ptr + 0x15 ) = uVar6;
            *(undefined8*)( ptr + 0x1d ) = uVar7;
            *(undefined8*)( ptr + 0x22 ) = uVar3;
         }

         lVar10 = *(long*)( ptr + 0x60 );
         if (lVar10 == 0) {
            lVar10 = ossl_pqueue_peek(lVar9);
            if (( lVar10 == 0 ) || ( bVar1 = *(byte*)( lVar10 + 0x38 )(bVar1 & 3) == 1 )) {
               lVar10 = *(long*)( ptr + 0x60 );
               if (lVar10 == 0) {
                  bVar1 = ptr[0x88];
                  if (( bVar1 & 0x14 ) == 0x10) {
                     bVar1 = *ptr;
                     if (( ( ptr[0x2a] == bVar1 ) && ( bVar1 < 0x15 ) ) && ( iVar8 = iVar8 == 0 )) {
                        return ptr;
                     }

                     ptr[0x88] = ptr[0x88] | 3;
                     *(undefined8*)ptr = *(undefined8*)( ptr + 0x2a );
                     *(undefined8*)( ptr + 8 ) = *(undefined8*)( ptr + 0x32 );
                     *(undefined8*)( ptr + 0xd ) = *(undefined8*)( ptr + 0x37 );
                     return ptr;
                  }

                  if (( bVar1 & 0xc ) != 8) {
                     ptr[0x88] = bVar1 & 0xfc | 1;
                     return ptr;
                  }

                  bVar1 = *ptr;
                  if (( ( ptr[0x15] == bVar1 ) && ( bVar1 < 0x15 ) ) && ( iVar8 = iVar8 == 0 )) {
                     return ptr;
                  }

                  ptr[0x88] = ptr[0x88] | 3;
                  *(undefined8*)ptr = *(undefined8*)( ptr + 0x15 );
                  *(undefined8*)( ptr + 8 ) = *(undefined8*)( ptr + 0x1d );
                  *(undefined8*)( ptr + 0xd ) = *(undefined8*)( ptr + 0x22 );
                  return ptr;
               }

            }
 else {
               puVar4 = *(undefined8**)( ptr + 0x60 );
               if (puVar4 != (undefined8*)0x0) {
                  bVar2 = *(byte*)( puVar4 + 7 );
                  if (( bVar2 & 3 ) != 2) {
                     if (( bVar2 & 3 ) == 0) {
                        ossl_pqueue_remove(*(undefined8*)( ptr + 0x58 ), puVar4[6]);
                        puVar4[6] = 0xffffffffffffffff;
                        *(byte*)( puVar4 + 7 ) = *(byte*)( puVar4 + 7 ) & 0xfc | 2;
                     }
 else {
                        *(byte*)( puVar4 + 7 ) = bVar2 & 0xfc | 2;
                        if (( bVar2 & 3 ) == 1) {
                           for (int i = 0; i < 8; i++) {
                              ptr[( i + 96 )] = 0;
                           }

                        }

                     }

                     puVar5 = *(undefined8**)( ptr + 0x70 );
                     if (puVar5 != (undefined8*)0x0) {
                        *puVar5 = puVar4;
                     }

                     lVar9 = *(long*)( ptr + 0x68 );
                     puVar4[1] = puVar5;
                     *puVar4 = 0;
                     *(undefined8**)( ptr + 0x70 ) = puVar4;
                     if (lVar9 == 0) {
                        *(undefined8**)( ptr + 0x68 ) = puVar4;
                     }

                     lVar9 = *(long*)( ptr + 0x80 ) + _UNK_00101c48;
                     *(long*)( ptr + 0x78 ) = *(long*)( ptr + 0x78 ) + __LC0;
                     *(long*)( ptr + 0x80 ) = lVar9;
                  }

               }

               if (( bVar1 & 3 ) == 0) {
                  ossl_pqueue_remove(*(undefined8*)( ptr + 0x58 ), *(undefined8*)( lVar10 + 0x30 ));
                  *(undefined8*)( lVar10 + 0x30 ) = 0xffffffffffffffff;
               }

               *(byte*)( lVar10 + 0x38 ) = *(byte*)( lVar10 + 0x38 ) & 0xfc | 1;
               *(long*)( ptr + 0x60 ) = lVar10;
            }

         }

         bVar1 = *ptr;
         if (( ( *(byte*)( lVar10 + 0x10 ) == bVar1 ) && ( bVar1 < 0x15 ) ) && ( iVar8 = memcmp(ptr + 1, (void*)( lVar10 + 0x11 ), (ulong)bVar1) ),iVar8 == 0) {
            return ptr;
         }

         uVar3 = *(undefined8*)( lVar10 + 0x18 );
         *(undefined8*)ptr = *(undefined8*)( lVar10 + 0x10 );
         *(undefined8*)( ptr + 8 ) = uVar3;
         uVar3 = *(undefined8*)( lVar10 + 0x1d );
         ptr[0x88] = ptr[0x88] | 3;
         *(undefined8*)( ptr + 0xd ) = uVar3;
         return ptr;
      }

      CRYPTO_free(ptr);
   }

   return (byte*)0x0;
}
void ossl_quic_rcidm_free(void *param_1) {
   undefined8 *puVar1;
   undefined8 *ptr;
   void *ptr_00;
   if (param_1 == (void*)0x0) {
      return;
   }

   CRYPTO_free(*(void**)( (long)param_1 + 0x60 ));
   while (ptr_00 = (void*)ossl_pqueue_pop(*(undefined8*)( (long)param_1 + 0x58 )),ptr_00 != (void*)0x0) {
      CRYPTO_free(ptr_00);
   }
;
   ptr = *(undefined8**)( (long)param_1 + 0x68 );
   while (ptr != (undefined8*)0x0) {
      puVar1 = (undefined8*)*ptr;
      CRYPTO_free(ptr);
      ptr = puVar1;
   }
;
   ossl_pqueue_free(*(undefined8*)( (long)param_1 + 0x58 ));
   CRYPTO_free(param_1);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void ossl_quic_rcidm_on_handshake_complete(byte *param_1) {
   byte bVar1;
   byte bVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   int iVar6;
   long lVar7;
   long lVar8;
   bVar1 = param_1[0x88];
   if (( bVar1 & 4 ) != 0) {
      return;
   }

   param_1[0x88] = bVar1 | 4;
   if (( ( ( *(long*)( param_1 + 0x48 ) == 0 ) || ( 9999 < *(ulong*)( param_1 + 0x40 ) ) ) || ( ( bVar1 & 0x40 ) != 0 ) ) && ( lVar7 = ossl_pqueue_peek(*(undefined8*)( param_1 + 0x58 )) ),lVar7 != 0) {
      bVar1 = *(byte*)( lVar7 + 0x38 );
      if (( bVar1 & 3 ) != 1) {
         puVar3 = *(undefined8**)( param_1 + 0x60 );
         if (puVar3 != (undefined8*)0x0) {
            bVar2 = *(byte*)( puVar3 + 7 );
            if (( bVar2 & 3 ) != 2) {
               if (( bVar2 & 3 ) == 0) {
                  ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), puVar3[6]);
                  puVar3[6] = 0xffffffffffffffff;
                  *(byte*)( puVar3 + 7 ) = *(byte*)( puVar3 + 7 ) & 0xfc | 2;
               }
 else {
                  *(byte*)( puVar3 + 7 ) = bVar2 & 0xfc | 2;
                  if (( bVar2 & 3 ) == 1) {
                     for (int i = 0; i < 8; i++) {
                        param_1[( i + 96 )] = 0;
                     }

                  }

               }

               puVar4 = *(undefined8**)( param_1 + 0x70 );
               if (puVar4 != (undefined8*)0x0) {
                  *puVar4 = puVar3;
               }

               lVar8 = *(long*)( param_1 + 0x68 );
               puVar3[1] = puVar4;
               *puVar3 = 0;
               *(undefined8**)( param_1 + 0x70 ) = puVar3;
               if (lVar8 == 0) {
                  *(undefined8**)( param_1 + 0x68 ) = puVar3;
               }

               lVar8 = *(long*)( param_1 + 0x80 ) + _UNK_00101c48;
               *(long*)( param_1 + 0x78 ) = *(long*)( param_1 + 0x78 ) + __LC0;
               *(long*)( param_1 + 0x80 ) = lVar8;
            }

         }

         if (( bVar1 & 3 ) == 0) {
            ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), *(undefined8*)( lVar7 + 0x30 ));
            *(undefined8*)( lVar7 + 0x30 ) = 0xffffffffffffffff;
         }

         *(byte*)( lVar7 + 0x38 ) = *(byte*)( lVar7 + 0x38 ) & 0xfc | 1;
         *(long*)( param_1 + 0x60 ) = lVar7;
      }

      *(long*)( param_1 + 0x48 ) = *(long*)( param_1 + 0x48 ) + 1;
      param_1[0x88] = param_1[0x88] & 0xbf;
      if (*(ulong*)( param_1 + 0x40 ) < 10000) {
         for (int i = 0; i < 8; i++) {
            param_1[( i + 64 )] = 0;
         }

      }
 else {
         *(ulong*)( param_1 + 0x40 ) = *(ulong*)( param_1 + 0x40 ) % 10000;
      }

   }

   lVar7 = *(long*)( param_1 + 0x60 );
   if (lVar7 == 0) {
      lVar7 = ossl_pqueue_peek(*(undefined8*)( param_1 + 0x58 ));
      if (( lVar7 == 0 ) || ( bVar1 = *(byte*)( lVar7 + 0x38 )(bVar1 & 3) == 1 )) {
         lVar7 = *(long*)( param_1 + 0x60 );
         if (lVar7 == 0) {
            bVar1 = param_1[0x88];
            if (( bVar1 & 0x14 ) == 0x10) {
               bVar1 = *param_1;
               if (( ( param_1[0x2a] == bVar1 ) && ( bVar1 < 0x15 ) ) && ( iVar6 = memcmp(param_1 + 1, param_1 + 0x2b, (ulong)bVar1) ),iVar6 == 0) {
                  return;
               }

               param_1[0x88] = param_1[0x88] | 3;
               *(undefined8*)param_1 = *(undefined8*)( param_1 + 0x2a );
               *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_1 + 0x32 );
               *(undefined8*)( param_1 + 0xd ) = *(undefined8*)( param_1 + 0x37 );
               return;
            }

            if (( bVar1 & 0xc ) != 8) {
               param_1[0x88] = bVar1 & 0xfc | 1;
               return;
            }

            bVar1 = *param_1;
            if (( ( param_1[0x15] == bVar1 ) && ( bVar1 < 0x15 ) ) && ( iVar6 = memcmp(param_1 + 1, param_1 + 0x16, (ulong)bVar1) ),iVar6 == 0) {
               return;
            }

            param_1[0x88] = param_1[0x88] | 3;
            *(undefined8*)param_1 = *(undefined8*)( param_1 + 0x15 );
            *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_1 + 0x1d );
            *(undefined8*)( param_1 + 0xd ) = *(undefined8*)( param_1 + 0x22 );
            return;
         }

      }
 else {
         puVar3 = *(undefined8**)( param_1 + 0x60 );
         if (puVar3 != (undefined8*)0x0) {
            bVar2 = *(byte*)( puVar3 + 7 );
            if (( bVar2 & 3 ) != 2) {
               if (( bVar2 & 3 ) == 0) {
                  ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), puVar3[6]);
                  puVar3[6] = 0xffffffffffffffff;
                  *(byte*)( puVar3 + 7 ) = *(byte*)( puVar3 + 7 ) & 0xfc | 2;
               }
 else {
                  *(byte*)( puVar3 + 7 ) = bVar2 & 0xfc | 2;
                  if (( bVar2 & 3 ) == 1) {
                     for (int i = 0; i < 8; i++) {
                        param_1[( i + 96 )] = 0;
                     }

                  }

               }

               puVar4 = *(undefined8**)( param_1 + 0x70 );
               if (puVar4 != (undefined8*)0x0) {
                  *puVar4 = puVar3;
               }

               lVar8 = *(long*)( param_1 + 0x68 );
               puVar3[1] = puVar4;
               *puVar3 = 0;
               *(undefined8**)( param_1 + 0x70 ) = puVar3;
               if (lVar8 == 0) {
                  *(undefined8**)( param_1 + 0x68 ) = puVar3;
               }

               lVar8 = *(long*)( param_1 + 0x80 ) + _UNK_00101c48;
               *(long*)( param_1 + 0x78 ) = *(long*)( param_1 + 0x78 ) + __LC0;
               *(long*)( param_1 + 0x80 ) = lVar8;
            }

         }

         if (( bVar1 & 3 ) == 0) {
            ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), *(undefined8*)( lVar7 + 0x30 ));
            *(undefined8*)( lVar7 + 0x30 ) = 0xffffffffffffffff;
         }

         *(byte*)( lVar7 + 0x38 ) = *(byte*)( lVar7 + 0x38 ) & 0xfc | 1;
         *(long*)( param_1 + 0x60 ) = lVar7;
      }

   }

   bVar1 = *param_1;
   if (( ( *(byte*)( lVar7 + 0x10 ) != bVar1 ) || ( 0x14 < bVar1 ) ) || ( iVar6 = memcmp(param_1 + 1, (void*)( lVar7 + 0x11 ), (ulong)bVar1) ),iVar6 != 0) {
      uVar5 = *(undefined8*)( lVar7 + 0x18 );
      *(undefined8*)param_1 = *(undefined8*)( lVar7 + 0x10 );
      *(undefined8*)( param_1 + 8 ) = uVar5;
      uVar5 = *(undefined8*)( lVar7 + 0x1d );
      param_1[0x88] = param_1[0x88] | 3;
      *(undefined8*)( param_1 + 0xd ) = uVar5;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void ossl_quic_rcidm_on_packet_sent(byte *param_1, long param_2) {
   byte bVar1;
   byte bVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   int iVar6;
   long lVar7;
   long lVar8;
   if (param_2 == 0) {
      return;
   }

   lVar7 = *(long*)( param_1 + 0x40 );
   *(long*)( param_1 + 0x40 ) = param_2 + lVar7;
   if (( ( ( param_1[0x88] & 4 ) != 0 ) && ( ( ( *(long*)( param_1 + 0x48 ) == 0 || ( 9999 < ( ulong )(param_2 + lVar7) ) ) || ( ( param_1[0x88] & 0x40 ) != 0 ) ) ) ) && ( lVar7 = ossl_pqueue_peek(*(undefined8*)( param_1 + 0x58 )) ),lVar7 != 0) {
      bVar1 = *(byte*)( lVar7 + 0x38 );
      if (( bVar1 & 3 ) != 1) {
         puVar4 = *(undefined8**)( param_1 + 0x60 );
         if (puVar4 != (undefined8*)0x0) {
            bVar2 = *(byte*)( puVar4 + 7 );
            if (( bVar2 & 3 ) != 2) {
               if (( bVar2 & 3 ) == 0) {
                  ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), puVar4[6]);
                  puVar4[6] = 0xffffffffffffffff;
                  *(byte*)( puVar4 + 7 ) = *(byte*)( puVar4 + 7 ) & 0xfc | 2;
               }
 else {
                  *(byte*)( puVar4 + 7 ) = bVar2 & 0xfc | 2;
                  if (( bVar2 & 3 ) == 1) {
                     for (int i = 0; i < 8; i++) {
                        param_1[( i + 96 )] = 0;
                     }

                  }

               }

               puVar5 = *(undefined8**)( param_1 + 0x70 );
               if (puVar5 != (undefined8*)0x0) {
                  *puVar5 = puVar4;
               }

               lVar8 = *(long*)( param_1 + 0x68 );
               puVar4[1] = puVar5;
               *puVar4 = 0;
               *(undefined8**)( param_1 + 0x70 ) = puVar4;
               if (lVar8 == 0) {
                  *(undefined8**)( param_1 + 0x68 ) = puVar4;
               }

               lVar8 = *(long*)( param_1 + 0x80 ) + _UNK_00101c48;
               *(long*)( param_1 + 0x78 ) = *(long*)( param_1 + 0x78 ) + __LC0;
               *(long*)( param_1 + 0x80 ) = lVar8;
            }

         }

         if (( bVar1 & 3 ) == 0) {
            ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), *(undefined8*)( lVar7 + 0x30 ));
            *(undefined8*)( lVar7 + 0x30 ) = 0xffffffffffffffff;
         }

         *(byte*)( lVar7 + 0x38 ) = *(byte*)( lVar7 + 0x38 ) & 0xfc | 1;
         *(long*)( param_1 + 0x60 ) = lVar7;
      }

      *(long*)( param_1 + 0x48 ) = *(long*)( param_1 + 0x48 ) + 1;
      param_1[0x88] = param_1[0x88] & 0xbf;
      if (*(ulong*)( param_1 + 0x40 ) < 10000) {
         for (int i = 0; i < 8; i++) {
            param_1[( i + 64 )] = 0;
         }

      }
 else {
         *(ulong*)( param_1 + 0x40 ) = *(ulong*)( param_1 + 0x40 ) % 10000;
      }

   }

   lVar7 = *(long*)( param_1 + 0x60 );
   if (lVar7 == 0) {
      lVar7 = ossl_pqueue_peek(*(undefined8*)( param_1 + 0x58 ));
      if (( lVar7 == 0 ) || ( bVar1 = *(byte*)( lVar7 + 0x38 )(bVar1 & 3) == 1 )) {
         lVar7 = *(long*)( param_1 + 0x60 );
         if (lVar7 == 0) {
            bVar1 = param_1[0x88];
            if (( bVar1 & 0x14 ) == 0x10) {
               bVar1 = *param_1;
               if (( ( param_1[0x2a] == bVar1 ) && ( bVar1 < 0x15 ) ) && ( iVar6 = memcmp(param_1 + 1, param_1 + 0x2b, (ulong)bVar1) ),iVar6 == 0) {
                  return;
               }

               param_1[0x88] = param_1[0x88] | 3;
               *(undefined8*)param_1 = *(undefined8*)( param_1 + 0x2a );
               *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_1 + 0x32 );
               *(undefined8*)( param_1 + 0xd ) = *(undefined8*)( param_1 + 0x37 );
               return;
            }

            if (( bVar1 & 0xc ) != 8) {
               param_1[0x88] = bVar1 & 0xfc | 1;
               return;
            }

            bVar1 = *param_1;
            if (( ( param_1[0x15] == bVar1 ) && ( bVar1 < 0x15 ) ) && ( iVar6 = memcmp(param_1 + 1, param_1 + 0x16, (ulong)bVar1) ),iVar6 == 0) {
               return;
            }

            param_1[0x88] = param_1[0x88] | 3;
            *(undefined8*)param_1 = *(undefined8*)( param_1 + 0x15 );
            *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_1 + 0x1d );
            *(undefined8*)( param_1 + 0xd ) = *(undefined8*)( param_1 + 0x22 );
            return;
         }

      }
 else {
         puVar4 = *(undefined8**)( param_1 + 0x60 );
         if (puVar4 != (undefined8*)0x0) {
            bVar2 = *(byte*)( puVar4 + 7 );
            if (( bVar2 & 3 ) != 2) {
               if (( bVar2 & 3 ) == 0) {
                  ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), puVar4[6]);
                  puVar4[6] = 0xffffffffffffffff;
                  *(byte*)( puVar4 + 7 ) = *(byte*)( puVar4 + 7 ) & 0xfc | 2;
               }
 else {
                  *(byte*)( puVar4 + 7 ) = bVar2 & 0xfc | 2;
                  if (( bVar2 & 3 ) == 1) {
                     for (int i = 0; i < 8; i++) {
                        param_1[( i + 96 )] = 0;
                     }

                  }

               }

               puVar5 = *(undefined8**)( param_1 + 0x70 );
               if (puVar5 != (undefined8*)0x0) {
                  *puVar5 = puVar4;
               }

               lVar8 = *(long*)( param_1 + 0x68 );
               puVar4[1] = puVar5;
               *puVar4 = 0;
               *(undefined8**)( param_1 + 0x70 ) = puVar4;
               if (lVar8 == 0) {
                  *(undefined8**)( param_1 + 0x68 ) = puVar4;
               }

               lVar8 = *(long*)( param_1 + 0x80 ) + _UNK_00101c48;
               *(long*)( param_1 + 0x78 ) = *(long*)( param_1 + 0x78 ) + __LC0;
               *(long*)( param_1 + 0x80 ) = lVar8;
            }

         }

         if (( bVar1 & 3 ) == 0) {
            ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), *(undefined8*)( lVar7 + 0x30 ));
            *(undefined8*)( lVar7 + 0x30 ) = 0xffffffffffffffff;
         }

         *(byte*)( lVar7 + 0x38 ) = *(byte*)( lVar7 + 0x38 ) & 0xfc | 1;
         *(long*)( param_1 + 0x60 ) = lVar7;
      }

   }

   bVar1 = *param_1;
   if (( ( *(byte*)( lVar7 + 0x10 ) == bVar1 ) && ( bVar1 < 0x15 ) ) && ( iVar6 = memcmp(param_1 + 1, (void*)( lVar7 + 0x11 ), (ulong)bVar1) ),iVar6 == 0) {
      return;
   }

   uVar3 = *(undefined8*)( lVar7 + 0x18 );
   *(undefined8*)param_1 = *(undefined8*)( lVar7 + 0x10 );
   *(undefined8*)( param_1 + 8 ) = uVar3;
   uVar3 = *(undefined8*)( lVar7 + 0x1d );
   param_1[0x88] = param_1[0x88] | 3;
   *(undefined8*)( param_1 + 0xd ) = uVar3;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void ossl_quic_rcidm_request_roll(byte *param_1) {
   byte bVar1;
   byte bVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   int iVar6;
   long lVar7;
   long lVar8;
   bVar1 = param_1[0x88];
   param_1[0x88] = bVar1 | 0x40;
   if (( ( bVar1 & 4 ) != 0 ) && ( lVar7 = ossl_pqueue_peek(*(undefined8*)( param_1 + 0x58 )) ),lVar7 != 0) {
      bVar1 = *(byte*)( lVar7 + 0x38 );
      if (( bVar1 & 3 ) != 1) {
         puVar3 = *(undefined8**)( param_1 + 0x60 );
         if (puVar3 != (undefined8*)0x0) {
            bVar2 = *(byte*)( puVar3 + 7 );
            if (( bVar2 & 3 ) != 2) {
               if (( bVar2 & 3 ) == 0) {
                  ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), puVar3[6]);
                  puVar3[6] = 0xffffffffffffffff;
                  *(byte*)( puVar3 + 7 ) = *(byte*)( puVar3 + 7 ) & 0xfc | 2;
               }
 else {
                  *(byte*)( puVar3 + 7 ) = bVar2 & 0xfc | 2;
                  if (( bVar2 & 3 ) == 1) {
                     for (int i = 0; i < 8; i++) {
                        param_1[( i + 96 )] = 0;
                     }

                  }

               }

               puVar4 = *(undefined8**)( param_1 + 0x70 );
               if (puVar4 != (undefined8*)0x0) {
                  *puVar4 = puVar3;
               }

               lVar8 = *(long*)( param_1 + 0x68 );
               puVar3[1] = puVar4;
               *puVar3 = 0;
               *(undefined8**)( param_1 + 0x70 ) = puVar3;
               if (lVar8 == 0) {
                  *(undefined8**)( param_1 + 0x68 ) = puVar3;
               }

               lVar8 = *(long*)( param_1 + 0x80 ) + _UNK_00101c48;
               *(long*)( param_1 + 0x78 ) = *(long*)( param_1 + 0x78 ) + __LC0;
               *(long*)( param_1 + 0x80 ) = lVar8;
            }

         }

         if (( bVar1 & 3 ) == 0) {
            ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), *(undefined8*)( lVar7 + 0x30 ));
            *(undefined8*)( lVar7 + 0x30 ) = 0xffffffffffffffff;
         }

         *(byte*)( lVar7 + 0x38 ) = *(byte*)( lVar7 + 0x38 ) & 0xfc | 1;
         *(long*)( param_1 + 0x60 ) = lVar7;
      }

      *(long*)( param_1 + 0x48 ) = *(long*)( param_1 + 0x48 ) + 1;
      param_1[0x88] = param_1[0x88] & 0xbf;
      if (*(ulong*)( param_1 + 0x40 ) < 10000) {
         lVar7 = *(long*)( param_1 + 0x60 );
         for (int i = 0; i < 8; i++) {
            param_1[( i + 64 )] = 0;
         }

         goto joined_r0x001010a7;
      }

      *(ulong*)( param_1 + 0x40 ) = *(ulong*)( param_1 + 0x40 ) % 10000;
   }

   lVar7 = *(long*)( param_1 + 0x60 );
   joined_r0x001010a7:if (lVar7 == 0) {
      lVar7 = ossl_pqueue_peek(*(undefined8*)( param_1 + 0x58 ));
      if (( lVar7 == 0 ) || ( bVar1 = *(byte*)( lVar7 + 0x38 )(bVar1 & 3) == 1 )) {
         lVar7 = *(long*)( param_1 + 0x60 );
         if (lVar7 == 0) {
            bVar1 = param_1[0x88];
            if (( bVar1 & 0x14 ) == 0x10) {
               bVar1 = *param_1;
               if (( ( param_1[0x2a] == bVar1 ) && ( bVar1 < 0x15 ) ) && ( iVar6 = memcmp(param_1 + 1, param_1 + 0x2b, (ulong)bVar1) ),iVar6 == 0) {
                  return;
               }

               param_1[0x88] = param_1[0x88] | 3;
               *(undefined8*)param_1 = *(undefined8*)( param_1 + 0x2a );
               *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_1 + 0x32 );
               *(undefined8*)( param_1 + 0xd ) = *(undefined8*)( param_1 + 0x37 );
               return;
            }

            if (( bVar1 & 0xc ) != 8) {
               param_1[0x88] = bVar1 & 0xfc | 1;
               return;
            }

            bVar1 = *param_1;
            if (( ( param_1[0x15] == bVar1 ) && ( bVar1 < 0x15 ) ) && ( iVar6 = memcmp(param_1 + 1, param_1 + 0x16, (ulong)bVar1) ),iVar6 == 0) {
               return;
            }

            param_1[0x88] = param_1[0x88] | 3;
            *(undefined8*)param_1 = *(undefined8*)( param_1 + 0x15 );
            *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_1 + 0x1d );
            *(undefined8*)( param_1 + 0xd ) = *(undefined8*)( param_1 + 0x22 );
            return;
         }

      }
 else {
         puVar3 = *(undefined8**)( param_1 + 0x60 );
         if (puVar3 != (undefined8*)0x0) {
            bVar2 = *(byte*)( puVar3 + 7 );
            if (( bVar2 & 3 ) != 2) {
               if (( bVar2 & 3 ) == 0) {
                  ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), puVar3[6]);
                  puVar3[6] = 0xffffffffffffffff;
                  *(byte*)( puVar3 + 7 ) = *(byte*)( puVar3 + 7 ) & 0xfc | 2;
               }
 else {
                  *(byte*)( puVar3 + 7 ) = bVar2 & 0xfc | 2;
                  if (( bVar2 & 3 ) == 1) {
                     for (int i = 0; i < 8; i++) {
                        param_1[( i + 96 )] = 0;
                     }

                  }

               }

               puVar4 = *(undefined8**)( param_1 + 0x70 );
               if (puVar4 != (undefined8*)0x0) {
                  *puVar4 = puVar3;
               }

               lVar8 = *(long*)( param_1 + 0x68 );
               puVar3[1] = puVar4;
               *puVar3 = 0;
               *(undefined8**)( param_1 + 0x70 ) = puVar3;
               if (lVar8 == 0) {
                  *(undefined8**)( param_1 + 0x68 ) = puVar3;
               }

               lVar8 = *(long*)( param_1 + 0x80 ) + _UNK_00101c48;
               *(long*)( param_1 + 0x78 ) = *(long*)( param_1 + 0x78 ) + __LC0;
               *(long*)( param_1 + 0x80 ) = lVar8;
            }

         }

         if (( bVar1 & 3 ) == 0) {
            ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), *(undefined8*)( lVar7 + 0x30 ));
            *(undefined8*)( lVar7 + 0x30 ) = 0xffffffffffffffff;
         }

         *(byte*)( lVar7 + 0x38 ) = *(byte*)( lVar7 + 0x38 ) & 0xfc | 1;
         *(long*)( param_1 + 0x60 ) = lVar7;
      }

   }

   bVar1 = *param_1;
   if (( ( *(byte*)( lVar7 + 0x10 ) != bVar1 ) || ( 0x14 < bVar1 ) ) || ( iVar6 = memcmp(param_1 + 1, (void*)( lVar7 + 0x11 ), (ulong)bVar1) ),iVar6 != 0) {
      uVar5 = *(undefined8*)( lVar7 + 0x18 );
      *(undefined8*)param_1 = *(undefined8*)( lVar7 + 0x10 );
      *(undefined8*)( param_1 + 8 ) = uVar5;
      uVar5 = *(undefined8*)( lVar7 + 0x1d );
      param_1[0x88] = param_1[0x88] | 3;
      *(undefined8*)( param_1 + 0xd ) = uVar5;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 ossl_quic_rcidm_add_from_initial(long param_1, char *param_2) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   byte bVar4;
   int iVar5;
   long lVar6;
   undefined8 *ptr;
   if (( *(byte*)( param_1 + 0x88 ) & 0x24 ) != 0) {
      return 0;
   }

   if (( ( ( byte )(*param_2 - 1U) < 0x14 ) && ( lVar6 = ossl_pqueue_num(*(undefined8*)( param_1 + 0x58 )) ),-1 < lVar6 + *(long*)( param_1 + 0x80 ) )) {
      uVar2 = *(undefined8*)param_2;
      uVar3 = *(undefined8*)( param_2 + 8 );
      ptr[5] = 0;
      ptr[2] = uVar2;
      ptr[3] = uVar3;
      *(undefined8*)( (long)ptr + 0x1d ) = *(undefined8*)( param_2 + 0xd );
      bVar4 = *(byte*)( ptr + 7 ) & 0xf0;
      lVar6 = *(long*)( param_1 + 0x50 );
      *(byte*)( ptr + 7 ) = *(byte*)( ptr + 7 ) & 0xf3;
      if (lVar6 == 0) {
         *(byte*)( ptr + 7 ) = bVar4;
         iVar5 = ossl_pqueue_push(*(undefined8*)( param_1 + 0x58 ), ptr, ptr + 6);
         if (iVar5 == 0) {
            CRYPTO_free(ptr);
            return 0;
         }

      }
 else {
         ptr[6] = 0xffffffffffffffff;
         *(byte*)( ptr + 7 ) = bVar4 | 2;
         puVar1 = *(undefined8**)( param_1 + 0x70 );
         if (puVar1 != (undefined8*)0x0) {
            *puVar1 = ptr;
         }

         lVar6 = *(long*)( param_1 + 0x68 );
         ptr[1] = puVar1;
         *ptr = 0;
         *(undefined8**)( param_1 + 0x70 ) = ptr;
         if (lVar6 == 0) {
            *(undefined8**)( param_1 + 0x68 ) = ptr;
         }

         lVar6 = *(long*)( param_1 + 0x80 ) + _UNK_00101c48;
         *(long*)( param_1 + 0x78 ) = *(long*)( param_1 + 0x78 ) + __LC0;
         *(long*)( param_1 + 0x80 ) = lVar6;
      }

      *(byte*)( param_1 + 0x88 ) = *(byte*)( param_1 + 0x88 ) | 0x20;
      rcidm_tick(param_1);
      return 1;
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 ossl_quic_rcidm_add_from_server_retry(byte *param_1, undefined8 *param_2) {
   byte bVar1;
   byte bVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   int iVar6;
   long lVar7;
   long lVar8;
   bVar1 = param_1[0x88];
   if (( bVar1 & 0x14 ) != 0) {
      return 0;
   }

   uVar3 = param_2[1];
   *(undefined8*)( param_1 + 0x2a ) = *param_2;
   *(undefined8*)( param_1 + 0x32 ) = uVar3;
   uVar3 = *(undefined8*)( (long)param_2 + 0xd );
   param_1[0x88] = bVar1 | 0x10;
   *(undefined8*)( param_1 + 0x37 ) = uVar3;
   if (( ( ( bVar1 & 4 ) != 0 ) && ( ( ( *(long*)( param_1 + 0x48 ) == 0 || ( 9999 < *(ulong*)( param_1 + 0x40 ) ) ) || ( ( bVar1 & 0x40 ) != 0 ) ) ) ) && ( lVar7 = ossl_pqueue_peek(*(undefined8*)( param_1 + 0x58 )) ),lVar7 != 0) {
      bVar1 = *(byte*)( lVar7 + 0x38 );
      if (( bVar1 & 3 ) != 1) {
         puVar4 = *(undefined8**)( param_1 + 0x60 );
         if (puVar4 != (undefined8*)0x0) {
            bVar2 = *(byte*)( puVar4 + 7 );
            if (( bVar2 & 3 ) != 2) {
               if (( bVar2 & 3 ) == 0) {
                  ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), puVar4[6]);
                  puVar4[6] = 0xffffffffffffffff;
                  *(byte*)( puVar4 + 7 ) = *(byte*)( puVar4 + 7 ) & 0xfc | 2;
               }
 else {
                  *(byte*)( puVar4 + 7 ) = bVar2 & 0xfc | 2;
                  if (( bVar2 & 3 ) == 1) {
                     for (int i = 0; i < 8; i++) {
                        param_1[( i + 96 )] = 0;
                     }

                  }

               }

               puVar5 = *(undefined8**)( param_1 + 0x70 );
               if (puVar5 != (undefined8*)0x0) {
                  *puVar5 = puVar4;
               }

               lVar8 = *(long*)( param_1 + 0x68 );
               puVar4[1] = puVar5;
               *puVar4 = 0;
               *(undefined8**)( param_1 + 0x70 ) = puVar4;
               if (lVar8 == 0) {
                  *(undefined8**)( param_1 + 0x68 ) = puVar4;
               }

               lVar8 = *(long*)( param_1 + 0x80 ) + _UNK_00101c48;
               *(long*)( param_1 + 0x78 ) = *(long*)( param_1 + 0x78 ) + __LC0;
               *(long*)( param_1 + 0x80 ) = lVar8;
            }

         }

         if (( bVar1 & 3 ) == 0) {
            ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), *(undefined8*)( lVar7 + 0x30 ));
            *(undefined8*)( lVar7 + 0x30 ) = 0xffffffffffffffff;
         }

         *(byte*)( lVar7 + 0x38 ) = *(byte*)( lVar7 + 0x38 ) & 0xfc | 1;
         *(long*)( param_1 + 0x60 ) = lVar7;
      }

      *(long*)( param_1 + 0x48 ) = *(long*)( param_1 + 0x48 ) + 1;
      param_1[0x88] = param_1[0x88] & 0xbf;
      if (*(ulong*)( param_1 + 0x40 ) < 10000) {
         for (int i = 0; i < 8; i++) {
            param_1[( i + 64 )] = 0;
         }

      }
 else {
         *(ulong*)( param_1 + 0x40 ) = *(ulong*)( param_1 + 0x40 ) % 10000;
      }

   }

   lVar7 = *(long*)( param_1 + 0x60 );
   if (lVar7 == 0) {
      lVar7 = ossl_pqueue_peek(*(undefined8*)( param_1 + 0x58 ));
      if (( lVar7 == 0 ) || ( bVar1 = *(byte*)( lVar7 + 0x38 )(bVar1 & 3) == 1 )) {
         lVar7 = *(long*)( param_1 + 0x60 );
         if (lVar7 == 0) {
            bVar1 = param_1[0x88];
            if (( bVar1 & 0x14 ) == 0x10) {
               bVar1 = *param_1;
               if (( ( param_1[0x2a] == bVar1 ) && ( bVar1 < 0x15 ) ) && ( iVar6 = memcmp(param_1 + 1, param_1 + 0x2b, (ulong)bVar1) ),iVar6 == 0) {
                  return 1;
               }

               param_1[0x88] = param_1[0x88] | 3;
               *(undefined8*)param_1 = *(undefined8*)( param_1 + 0x2a );
               *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_1 + 0x32 );
               *(undefined8*)( param_1 + 0xd ) = *(undefined8*)( param_1 + 0x37 );
               return 1;
            }

            if (( bVar1 & 0xc ) != 8) {
               param_1[0x88] = bVar1 & 0xfc | 1;
               return 1;
            }

            bVar1 = *param_1;
            if (( ( param_1[0x15] == bVar1 ) && ( bVar1 < 0x15 ) ) && ( iVar6 = memcmp(param_1 + 1, param_1 + 0x16, (ulong)bVar1) ),iVar6 == 0) {
               return 1;
            }

            param_1[0x88] = param_1[0x88] | 3;
            *(undefined8*)param_1 = *(undefined8*)( param_1 + 0x15 );
            *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_1 + 0x1d );
            *(undefined8*)( param_1 + 0xd ) = *(undefined8*)( param_1 + 0x22 );
            return 1;
         }

      }
 else {
         puVar4 = *(undefined8**)( param_1 + 0x60 );
         if (puVar4 != (undefined8*)0x0) {
            bVar2 = *(byte*)( puVar4 + 7 );
            if (( bVar2 & 3 ) != 2) {
               if (( bVar2 & 3 ) == 0) {
                  ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), puVar4[6]);
                  puVar4[6] = 0xffffffffffffffff;
                  *(byte*)( puVar4 + 7 ) = *(byte*)( puVar4 + 7 ) & 0xfc | 2;
               }
 else {
                  *(byte*)( puVar4 + 7 ) = bVar2 & 0xfc | 2;
                  if (( bVar2 & 3 ) == 1) {
                     for (int i = 0; i < 8; i++) {
                        param_1[( i + 96 )] = 0;
                     }

                  }

               }

               puVar5 = *(undefined8**)( param_1 + 0x70 );
               if (puVar5 != (undefined8*)0x0) {
                  *puVar5 = puVar4;
               }

               lVar8 = *(long*)( param_1 + 0x68 );
               puVar4[1] = puVar5;
               *puVar4 = 0;
               *(undefined8**)( param_1 + 0x70 ) = puVar4;
               if (lVar8 == 0) {
                  *(undefined8**)( param_1 + 0x68 ) = puVar4;
               }

               lVar8 = *(long*)( param_1 + 0x80 ) + _UNK_00101c48;
               *(long*)( param_1 + 0x78 ) = *(long*)( param_1 + 0x78 ) + __LC0;
               *(long*)( param_1 + 0x80 ) = lVar8;
            }

         }

         if (( bVar1 & 3 ) == 0) {
            ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), *(undefined8*)( lVar7 + 0x30 ));
            *(undefined8*)( lVar7 + 0x30 ) = 0xffffffffffffffff;
         }

         *(byte*)( lVar7 + 0x38 ) = *(byte*)( lVar7 + 0x38 ) & 0xfc | 1;
         *(long*)( param_1 + 0x60 ) = lVar7;
      }

   }

   bVar1 = *param_1;
   if (( ( *(byte*)( lVar7 + 0x10 ) != bVar1 ) || ( 0x14 < bVar1 ) ) || ( iVar6 = memcmp(param_1 + 1, (void*)( lVar7 + 0x11 ), (ulong)bVar1) ),iVar6 != 0) {
      uVar3 = *(undefined8*)( lVar7 + 0x18 );
      *(undefined8*)param_1 = *(undefined8*)( lVar7 + 0x10 );
      *(undefined8*)( param_1 + 8 ) = uVar3;
      uVar3 = *(undefined8*)( lVar7 + 0x1d );
      param_1[0x88] = param_1[0x88] | 3;
      *(undefined8*)( param_1 + 0xd ) = uVar3;
   }

   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 ossl_quic_rcidm_add_from_ncid(long param_1, ulong *param_2) {
   byte bVar1;
   ulong uVar2;
   undefined8 *puVar3;
   ulong uVar4;
   ulong uVar5;
   int iVar6;
   long lVar7;
   undefined8 *puVar8;
   ulong uVar9;
   undefined8 uVar10;
   uVar2 = *param_2;
   if (( ( ( 0x13 < ( byte )((char)param_2[2] - 1U) ) || ( uVar2 >> 0x3e != 0 ) ) || ( lVar7 = ossl_pqueue_num(*(undefined8*)( param_1 + 0x58 )) ),lVar7 + *(long*)( param_1 + 0x80 ) < 0 )) {
      return 0;
   }

   uVar4 = param_2[2];
   uVar5 = param_2[3];
   uVar9 = *(ulong*)( param_1 + 0x50 );
   puVar8[5] = uVar2;
   puVar8[2] = uVar4;
   puVar8[3] = uVar5;
   *(undefined8*)( (long)puVar8 + 0x1d ) = *(undefined8*)( (long)param_2 + 0x1d );
   bVar1 = *(byte*)( puVar8 + 7 );
   *(byte*)( puVar8 + 7 ) = bVar1 & 0xf3 | 8;
   bVar1 = bVar1 & 0xf0;
   if (uVar2 < uVar9) {
      puVar8[6] = 0xffffffffffffffff;
      *(byte*)( puVar8 + 7 ) = bVar1 | 10;
      puVar3 = *(undefined8**)( param_1 + 0x70 );
      if (puVar3 != (undefined8*)0x0) {
         *puVar3 = puVar8;
      }

      lVar7 = *(long*)( param_1 + 0x68 );
      puVar8[1] = puVar3;
      *puVar8 = 0;
      *(undefined8**)( param_1 + 0x70 ) = puVar8;
      if (lVar7 == 0) {
         *(undefined8**)( param_1 + 0x68 ) = puVar8;
      }

      lVar7 = *(long*)( param_1 + 0x80 ) + _UNK_00101c48;
      *(long*)( param_1 + 0x78 ) = *(long*)( param_1 + 0x78 ) + __LC0;
      *(long*)( param_1 + 0x80 ) = lVar7;
   }
 else {
      *(byte*)( puVar8 + 7 ) = bVar1 | 8;
      iVar6 = ossl_pqueue_push(*(undefined8*)( param_1 + 0x58 ), puVar8, puVar8 + 6);
      if (iVar6 == 0) {
         CRYPTO_free(puVar8);
         return 0;
      }

      uVar9 = *(ulong*)( param_1 + 0x50 );
   }

   uVar2 = param_2[1];
   if (uVar9 < uVar2) {
      puVar8 = *(undefined8**)( param_1 + 0x60 );
      if (( puVar8 != (undefined8*)0x0 ) && ( (ulong)puVar8[5] < uVar2 )) goto LAB_00101980;
      uVar10 = *(undefined8*)( param_1 + 0x58 );
      do {
         puVar8 = (undefined8*)ossl_pqueue_peek(uVar10);
         while (true) {
            if (( puVar8 == (undefined8*)0x0 ) || ( uVar2 <= (ulong)puVar8[5] )) {
               *(ulong*)( param_1 + 0x50 ) = uVar2;
               goto LAB_001019f4;
            }

            LAB_00101980:bVar1 = *(byte*)( puVar8 + 7 );
            uVar10 = *(undefined8*)( param_1 + 0x58 );
            if (( bVar1 & 3 ) == 2) break;
            if (( bVar1 & 3 ) == 0) {
               ossl_pqueue_remove(uVar10, puVar8[6]);
               uVar10 = *(undefined8*)( param_1 + 0x58 );
               puVar8[6] = 0xffffffffffffffff;
               *(byte*)( puVar8 + 7 ) = *(byte*)( puVar8 + 7 ) & 0xfc | 2;
            }
 else {
               *(byte*)( puVar8 + 7 ) = bVar1 & 0xfc | 2;
               if (( bVar1 & 3 ) == 1) {
                  *(undefined8*)( param_1 + 0x60 ) = 0;
               }

            }

            puVar3 = *(undefined8**)( param_1 + 0x70 );
            if (puVar3 != (undefined8*)0x0) {
               *puVar3 = puVar8;
            }

            puVar8[1] = puVar3;
            *puVar8 = 0;
            *(undefined8**)( param_1 + 0x70 ) = puVar8;
            if (*(long*)( param_1 + 0x68 ) == 0) {
               *(undefined8**)( param_1 + 0x68 ) = puVar8;
            }

            lVar7 = *(long*)( param_1 + 0x80 ) + _UNK_00101c48;
            *(long*)( param_1 + 0x78 ) = *(long*)( param_1 + 0x78 ) + __LC0;
            *(long*)( param_1 + 0x80 ) = lVar7;
            puVar8 = (undefined8*)ossl_pqueue_peek(uVar10);
         }
;
      }
 while ( true );
   }

   LAB_001019f4:rcidm_tick(param_1);
   return 1;
}
undefined8 ossl_quic_rcidm_pop_retire_seq_num(long param_1, undefined8 *param_2) {
   undefined1(*ptr)[16];
   long *plVar1;
   byte bVar2;
   long lVar3;
   ptr = *(undefined1(**) [16])( param_1 + 0x68 );
   if (ptr != (undefined1(*) [16])0x0) {
      if (param_2 != (undefined8*)0x0) {
         *param_2 = *(undefined8*)( ptr[2] + 8 );
      }

      bVar2 = ptr[3][8] & 3;
      if (bVar2 == 1) {
         *(undefined8*)( param_1 + 0x60 ) = 0;
      }
 else if (bVar2 == 2) {
         lVar3 = *(long*)*ptr;
         plVar1 = *(long**)( *ptr + 8 );
         *(long*)( param_1 + 0x68 ) = lVar3;
         if (ptr == *(undefined1(**) [16])( param_1 + 0x70 )) {
            *(long**)( param_1 + 0x70 ) = plVar1;
         }

         if (plVar1 != (long*)0x0) {
            *plVar1 = lVar3;
            lVar3 = *(long*)*ptr;
         }

         if (lVar3 != 0) {
            *(long**)( lVar3 + 8 ) = plVar1;
         }

         *(long*)( param_1 + 0x78 ) = *(long*)( param_1 + 0x78 ) + -1;
         *ptr = (undefined1[16])0x0;
         *(long*)( param_1 + 0x80 ) = *(long*)( param_1 + 0x80 ) + -1;
      }
 else if (bVar2 == 0) {
         ossl_pqueue_remove(*(undefined8*)( param_1 + 0x58 ), *(undefined8*)ptr[3]);
      }

      CRYPTO_free(ptr);
      return 1;
   }

   return 0;
}
undefined8 ossl_quic_rcidm_peek_retire_seq_num(long param_1, undefined8 *param_2) {
   if (*(long*)( param_1 + 0x68 ) != 0) {
      if (param_2 != (undefined8*)0x0) {
         *param_2 = *(undefined8*)( *(long*)( param_1 + 0x68 ) + 0x28 );
      }

      return 1;
   }

   return 0;
}
bool ossl_quic_rcidm_get_preferred_tx_dcid(undefined8 *param_1, undefined8 *param_2) {
   undefined8 uVar1;
   bool bVar2;
   bVar2 = ( *(byte*)( param_1 + 0x11 ) & 2 ) != 0;
   if (bVar2) {
      uVar1 = param_1[1];
      *param_2 = *param_1;
      param_2[1] = uVar1;
      *(undefined8*)( (long)param_2 + 0xd ) = *(undefined8*)( (long)param_1 + 0xd );
   }

   return bVar2;
}
byte ossl_quic_rcidm_get_preferred_tx_dcid_changed(long param_1, int param_2) {
   byte bVar1;
   bVar1 = *(byte*)( param_1 + 0x88 );
   if (param_2 != 0) {
      *(byte*)( param_1 + 0x88 ) = bVar1 & 0xfe;
   }

   return bVar1 & 1;
}
undefined8 ossl_quic_rcidm_get_num_retiring(long param_1) {
   return *(undefined8*)( param_1 + 0x80 );
}
long ossl_quic_rcidm_get_num_active(long param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   lVar2 = ossl_pqueue_num(*(undefined8*)( param_1 + 0x58 ));
   lVar1 = *(long*)( param_1 + 0x60 );
   lVar3 = ossl_quic_rcidm_get_num_retiring(param_1);
   return lVar3 + lVar2 + ( ulong )(lVar1 != 0);
}

