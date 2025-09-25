long dgram_pair_read_inner(long param_1, void *param_2, ulong param_3) {
   ulong uVar1;
   long lVar2;
   ulong uVar3;
   ulong __n;
   long lVar4;
   long lVar5;
   if (param_3 == 0) {
      lVar5 = 0;
   }
 else {
      lVar5 = 0;
      lVar4 = *(long*)( param_1 + 0x10 );
      do {
         while (true) {
            lVar2 = *(long*)( param_1 + 0x28 );
            uVar1 = *(ulong*)( param_1 + 0x18 );
            uVar3 = lVar4 - lVar2;
            __n = uVar1;
            if (uVar3 <= uVar1) {
               __n = uVar3;
            }

            if (__n == 0) {
               return lVar5;
            }

            if (param_3 < __n) {
               __n = param_3;
            }

            if (param_2 != (void*)0x0) break;
            if (( uVar3 < __n ) || ( uVar1 < __n )) goto LAB_00100068;
            if (lVar4 == lVar2 + __n) {
               *(undefined8*)( param_1 + 0x28 ) = 0;
               *(ulong*)( param_1 + 0x18 ) = uVar1 - __n;
               goto LAB_00100068;
            }

            *(ulong*)( param_1 + 0x28 ) = lVar2 + __n;
            lVar5 = lVar5 + __n;
            *(ulong*)( param_1 + 0x18 ) = uVar1 - __n;
            param_3 = param_3 - __n;
            if (param_3 == 0) {
               return lVar5;
            }

         }
;
         param_2 = memcpy(param_2, (void*)( *(long*)( param_1 + 8 ) + lVar2 ), __n);
         lVar4 = *(long*)( param_1 + 0x10 );
         if (( __n <= ( ulong )(lVar4 - *(long*)( param_1 + 0x28 )) ) && ( uVar1 = __n <= uVar1 )) {
            lVar2 = *(long*)( param_1 + 0x28 ) + __n;
            if (lVar4 == lVar2) {
               *(undefined8*)( param_1 + 0x28 ) = 0;
               *(ulong*)( param_1 + 0x18 ) = uVar1 - __n;
            }
 else {
               *(long*)( param_1 + 0x28 ) = lVar2;
               *(ulong*)( param_1 + 0x18 ) = uVar1 - __n;
            }

         }

         param_2 = (void*)( (long)param_2 + __n );
         LAB_00100068:lVar5 = lVar5 + __n;
         param_3 = param_3 - __n;
      }
 while ( param_3 != 0 );
   }

   return lVar5;
}
ulong dgram_pair_read(BIO *param_1, long param_2, int param_3) {
   byte bVar1;
   bio_st *pbVar2;
   bio_st *pbVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   long lVar7;
   ulong uVar8;
   bio_st *pbVar9;
   undefined4 uVar10;
   ulong uVar11;
   ulong uVar12;
   bio_st *pbVar13;
   long in_FS_OFFSET;
   ulong local_128[29];
   long local_40;
   uVar11 = (ulong)param_3;
   pbVar2 = param_1.prev_bio;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 < 0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x3f8, "dgram_pair_read");
      ERR_set_error(0x20, 0x7d, 0);
   }
 else if (pbVar2.method == (BIO_METHOD*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x3fd, "dgram_pair_read");
      ERR_set_error(0x20, 0x7c, 0);
   }
 else {
      pbVar3 = (bio_st*)pbVar2.method.destroy;
      bVar1 = (byte)pbVar3.num_write;
      pbVar9 = pbVar2;
      pbVar13 = pbVar3;
      if (( bVar1 & 4 ) == 0) {
         pbVar9 = pbVar3;
         pbVar13 = pbVar2;
      }

      if (( ( ( ( ( bVar1 ^ (byte)pbVar2.num_write ) & 4 ) != 0 ) && ( pbVar2 != pbVar3 ) ) && ( pbVar9 != pbVar13 ) ) && ( iVar6 = iVar6 != 0 )) {
         iVar6 = CRYPTO_THREAD_write_lock(pbVar9.num_read);
         if (iVar6 != 0) {
            pbVar9 = param_1.prev_bio;
            BIO_clear_flags(param_1, 0xf);
            if (param_1.num == 0) {
               uVar10 = 0x78;
               LAB_0010033d:ERR_new();
               ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x410, "dgram_pair_read");
               ERR_set_error(0x20, uVar10, 0);
               LAB_0010036a:uVar12 = 0xffffffff;
            }
 else {
               if (( ( pbVar9 == (bio_st*)0x0 ) || ( ( pbVar13 = pbVar9 ),pbVar9.method != (BIO_METHOD*)0x0 && ( pbVar13 = (bio_st*)pbVar9.method.destroy ),pbVar13 == (bio_st*)0x0 ) )) goto LAB_00100338;
               if (( uVar11 != 0 ) && ( param_2 == 0 )) {
                  uVar10 = 0x7d;
                  goto LAB_0010033d;
               }

               iVar6 = pbVar13.num;
               uVar10 = *(undefined4*)&pbVar13.field_0x2c;
               iVar4 = pbVar13.init;
               iVar5 = pbVar13.shutdown;
               lVar7 = dgram_pair_read_inner(pbVar13, local_128, 0xe8);
               if (lVar7 == 0) {
                  BIO_set_flags(param_1, 9);
                  goto LAB_0010036a;
               }

               if (lVar7 != 0xe8) {
                  uVar10 = 0x7c;
                  goto LAB_0010033d;
               }

               uVar12 = local_128[0];
               if (( local_128[0] < uVar11 ) || ( uVar12 = local_128[0] <= uVar11 )) {
                  uVar11 = dgram_pair_read_inner(pbVar13, param_2, uVar12);
                  if (uVar12 != uVar11) {
                     LAB_00100338:uVar10 = 0x68;
                     goto LAB_0010033d;
                  }

               }
 else {
                  if (( pbVar9.num_write & 1 ) != 0) {
                     pbVar13.num = iVar6;
                     *(undefined4*)&pbVar13.field_0x2c = uVar10;
                     pbVar13.init = iVar4;
                     pbVar13.shutdown = iVar5;
                     goto LAB_0010036a;
                  }

                  uVar8 = dgram_pair_read_inner(pbVar13, param_2, uVar11);
                  if (( uVar11 != uVar8 ) || ( lVar7 = dgram_pair_read_inner(pbVar13, 0, local_128[0] - uVar11) ),local_128[0] - uVar11 != lVar7) goto LAB_00100338;
               }

            }

            CRYPTO_THREAD_unlock(pbVar3.num_read);
            CRYPTO_THREAD_unlock(pbVar2.num_read);
            goto LAB_001001d0;
         }

         CRYPTO_THREAD_unlock(pbVar13.num_read);
      }

      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x409, "dgram_pair_read");
      ERR_set_error(0x20, 0xc0110, 0);
   }

   uVar12 = 0xffffffff;
   LAB_001001d0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar12 & 0xffffffff;
}
undefined8 ring_buf_resize(undefined8 *param_1, ulong param_2) {
   ulong uVar1;
   void *pvVar2;
   long lVar3;
   if ((void*)*param_1 == (void*)0x0) {
      pvVar2 = CRYPTO_malloc((int)param_2, "crypto/bio/bss_dgram_pair.c", 0x25);
      *param_1 = pvVar2;
      if (pvVar2 == (void*)0x0) {
         return 0;
      }

      param_1[1] = param_2;
      param_1[2] = 0;
      param_1[4] = 0;
      param_1[3] = 0;
   }
 else if (param_1[1] != param_2) {
      if (( param_1[2] != 0 ) && ( param_2 < (ulong)param_1[1] )) {
         return 0;
      }

      pvVar2 = CRYPTO_realloc((void*)*param_1, (int)param_2, "crypto/bio/bss_dgram_pair.c", 0x86);
      if (pvVar2 == (void*)0x0) {
         return 0;
      }

      if (param_1[2] == 0) {
         *(undefined1(*) [16])( param_1 + 3 ) = (undefined1[16])0x0;
      }
 else {
         uVar1 = param_1[4];
         if ((ulong)param_1[3] <= uVar1) {
            lVar3 = param_2 - param_1[1];
            memmove((void*)( uVar1 + lVar3 + (long)pvVar2 ), (void*)( (long)pvVar2 + uVar1 ), param_1[1] - uVar1);
            param_1[4] = param_1[4] + lVar3;
         }

      }

      *param_1 = pvVar2;
      param_1[1] = param_2;
   }

   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 dgram_pair_init(long param_1) {
   undefined8 uVar1;
   void *ptr;
   long lVar2;
   ptr = (void*)CRYPTO_zalloc(0x60, "crypto/bio/bss_dgram_pair.c", 0x117);
   uVar1 = _UNK_00102618;
   if (ptr != (void*)0x0) {
      *(undefined8*)( (long)ptr + 0x30 ) = __LC1;
      *(undefined8*)( (long)ptr + 0x38 ) = uVar1;
      lVar2 = CRYPTO_THREAD_lock_new();
      *(long*)( (long)ptr + 0x50 ) = lVar2;
      if (lVar2 != 0) {
         *(void**)( param_1 + 0x40 ) = ptr;
         return 1;
      }

      CRYPTO_free(ptr);
   }

   return 0;
}
long dgram_pair_write_inner(long param_1, void *param_2, ulong param_3) {
   int iVar1;
   ulong uVar2;
   ulong uVar3;
   ulong uVar4;
   ulong uVar5;
   ulong __n;
   void *local_48;
   long local_40;
   if (param_3 == 0) {
      local_40 = 0;
   }
 else {
      local_40 = 0;
      uVar2 = *(ulong*)( param_1 + 0x10 );
      uVar4 = *(ulong*)( param_1 + 0x20 );
      local_48 = param_2;
      LAB_00100610:do {
         __n = uVar2 - *(long*)( param_1 + 0x18 );
         if (uVar2 - uVar4 < __n) {
            __n = uVar2 - uVar4;
         }

         if (__n == 0) {
            if (( *(byte*)( param_1 + 0x58 ) & 8 ) == 0) {
               return local_40;
            }

            uVar4 = *(ulong*)( param_1 + 0x30 );
            uVar2 = uVar4 + param_3;
            uVar3 = uVar4;
            if (uVar4 < uVar2) {
               do {
                  if (0x7ffffffffffffffe < uVar3) {
                     return local_40;
                  }

                  while (uVar4 >> 0x3d == 0) {
                     uVar4 = ( uVar4 * 8 ) / 5;
                     if (uVar2 <= uVar4) goto LAB_00100687;
                  }
;
                  if (uVar4 < 8) {
                     uVar5 = 3;
                     uVar3 = uVar4;
                  }
 else {
                     uVar3 = uVar4 / 5;
                     uVar5 = uVar4 % 5;
                     uVar4 = 8;
                     uVar3 = uVar3 * 8;
                  }

                  uVar3 = ( uVar5 * uVar4 ) / 5 + uVar3;
                  uVar4 = 0x7fffffffffffffff;
                  if (uVar3 < 0x8000000000000000) {
                     uVar4 = uVar3;
                  }

               }
 while ( uVar4 < uVar2 );
            }
 else if (uVar4 == 0) {
               return local_40;
            }

            LAB_00100687:iVar1 = ring_buf_resize(param_1 + 8, uVar4);
            if (iVar1 == 0) {
               return local_40;
            }

            uVar2 = *(ulong*)( param_1 + 0x10 );
            uVar3 = *(ulong*)( param_1 + 0x18 );
            *(ulong*)( param_1 + 0x30 ) = uVar4;
            uVar4 = *(ulong*)( param_1 + 0x20 );
            if (uVar2 < uVar3) goto LAB_00100610;
            LAB_001006b5:uVar4 = uVar4 + __n;
            *(ulong*)( param_1 + 0x18 ) = uVar3;
            if (uVar4 == uVar2) {
               uVar4 = 0;
            }

            *(ulong*)( param_1 + 0x20 ) = uVar4;
         }
 else {
            if (param_3 < __n) {
               __n = param_3;
            }

            memcpy((void*)( *(long*)( param_1 + 8 ) + uVar4 ), local_48, __n);
            uVar2 = *(ulong*)( param_1 + 0x10 );
            uVar4 = *(ulong*)( param_1 + 0x20 );
            if (( __n <= uVar2 - uVar4 ) && ( uVar3 = uVar3 <= uVar2 )) goto LAB_001006b5;
         }

         local_48 = (void*)( (long)local_48 + __n );
         local_40 = local_40 + __n;
         param_3 = param_3 - __n;
      }
 while ( param_3 != 0 );
   }

   return local_40;
}
int dgram_pair_write(BIO *param_1, long param_2, int param_3) {
   bio_st *pbVar1;
   bio_st *pbVar2;
   undefined8 *puVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   long lVar8;
   undefined4 uVar9;
   long *plVar10;
   long lVar11;
   long in_FS_OFFSET;
   byte bVar12;
   long local_128[29];
   long local_40;
   bVar12 = 0;
   pbVar1 = param_1.prev_bio;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 < 0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x501, "dgram_pair_write");
      ERR_set_error(0x20, 0x7d, 0);
   }
 else {
      iVar7 = CRYPTO_THREAD_write_lock(pbVar1.num_read);
      if (iVar7 != 0) {
         pbVar2 = param_1.prev_bio;
         lVar11 = (long)param_3;
         plVar10 = local_128;
         for (lVar8 = 0x1d; lVar8 != 0; lVar8 = lVar8 + -1) {
            *plVar10 = 0;
            plVar10 = plVar10 + (ulong)bVar12 * -2 + 1;
         }

         BIO_clear_flags(param_1, 0xf);
         if (param_1.num == 0) {
            uVar9 = 0x78;
            LAB_001009ad:ERR_new();
            ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x50c, "dgram_pair_write");
            param_3 = -1;
            ERR_set_error(0x20, uVar9, 0);
         }
 else {
            if (( pbVar2 == (bio_st*)0x0 ) || ( pbVar2.callback == (_func_603*)0x0 )) {
               uVar9 = 0x68;
               goto LAB_001009ad;
            }

            if (( lVar11 != 0 ) && ( param_2 == 0 )) {
               uVar9 = 0x7d;
               goto LAB_001009ad;
            }

            local_128[0xf] = zero_addr_6._0_8_;
            local_128[0x10] = zero_addr_6._8_8_;
            puVar3 = *(undefined8**)&pbVar2.references;
            local_128[0x11] = zero_addr_6._16_8_;
            local_128[0x12] = zero_addr_6._24_8_;
            local_128[0x13] = zero_addr_6._32_8_;
            local_128[0x14] = zero_addr_6._40_8_;
            local_128[0x15] = zero_addr_6._48_8_;
            local_128[0x16] = zero_addr_6._56_8_;
            local_128[0x17] = zero_addr_6._64_8_;
            local_128[0x18] = zero_addr_6._72_8_;
            local_128[0x19] = zero_addr_6._80_8_;
            local_128[0x1a] = zero_addr_6._88_8_;
            local_128[0x1b] = zero_addr_6._96_8_;
            local_128[0x1c] = zero_addr_6._104_8_;
            if (puVar3 == (undefined8*)0x0) {
               local_128[1] = zero_addr_6._0_8_;
               local_128[2] = zero_addr_6._8_8_;
               local_128[9] = zero_addr_6._64_8_;
               local_128[10] = zero_addr_6._72_8_;
               local_128[3] = zero_addr_6._16_8_;
               local_128[4] = zero_addr_6._24_8_;
               local_128[7] = zero_addr_6._48_8_;
               local_128[8] = zero_addr_6._56_8_;
               local_128[5] = zero_addr_6._32_8_;
               local_128[6] = zero_addr_6._40_8_;
               local_128[0xb] = zero_addr_6._80_8_;
               local_128[0xc] = zero_addr_6._88_8_;
               local_128[0xd] = zero_addr_6._96_8_;
               local_128[0xe] = zero_addr_6._104_8_;
            }
 else {
               local_128[1] = *puVar3;
               for (int i = 0; i < 13; i++) {
                  local_128[( i + 2 )] = puVar3[( i + 1 )];
               }

            }

            iVar7 = pbVar2.init;
            iVar4 = pbVar2.shutdown;
            iVar5 = pbVar2.flags;
            iVar6 = pbVar2.retry_reason;
            local_128[0] = lVar11;
            lVar8 = dgram_pair_write_inner(pbVar2, local_128, 0xe8);
            if (lVar8 != 0xe8) {
               LAB_00100a30:uVar9 = 0x70;
               pbVar2.init = iVar7;
               pbVar2.shutdown = iVar4;
               pbVar2.flags = iVar5;
               pbVar2.retry_reason = iVar6;
               BIO_set_flags(param_1, 10);
               goto LAB_001009ad;
            }

            lVar8 = dgram_pair_write_inner(pbVar2, param_2, lVar11);
            if (lVar11 != lVar8) goto LAB_00100a30;
         }

         CRYPTO_THREAD_unlock(pbVar1.num_read);
         goto LAB_00100978;
      }

      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x506, "dgram_pair_write");
      ERR_set_error(0x20, 0xc0110, 0);
   }

   param_3 = -1;
   LAB_00100978:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong dgram_mem_ctrl(long param_1, undefined4 param_2, ulong param_3, uint *param_4) {
   long lVar1;
   long lVar2;
   int iVar3;
   long *plVar4;
   long lVar5;
   long *plVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   ulong local_118[29];
   long local_30;
   plVar6 = *(long**)( param_1 + 0x40 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar6 == (long*)0x0) goto switchD_00100b3b_caseD_0;
   switch (param_2) {
      default:
    goto switchD_00100b3b_caseD_0;
      case 1:
    plVar6[5] = 0;
    *(undefined1 (*) [16])(plVar6 + 3) = (undefined1  [16])0x0;
    goto switchD_00100b3b_caseD_b;
      case 2:
    local_118[0] = 1;
    if (*(int *)(param_1 + 0x28) == 0) break;
    if (*plVar6 != 0) {
      local_118[0] = -(ulong)(*(long *)(*plVar6 + 0x40) == 0);
      break;
    }
    goto switchD_00100b3b_caseD_0;
      case 10:
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*plVar6 != 0) {
        plVar6 = *(long **)(*plVar6 + 0x40);
      }
      iVar3 = CRYPTO_THREAD_write_lock(plVar6[10]);
      if (iVar3 != 0) {
        lVar1 = plVar6[5];
        lVar2 = plVar6[3];
        lVar5 = dgram_pair_read_inner(plVar6,local_118,0xe8);
        plVar6[5] = lVar1;
        plVar6[3] = lVar2;
        CRYPTO_THREAD_unlock(plVar6[10]);
        if (lVar5 == 0xe8) break;
      }
    }
    goto switchD_00100b3b_caseD_0;
      case 0xb:
    goto switchD_00100b3b_caseD_b;
      case 0x29:
    local_118[0] = (ulong)(int)plVar6[7];
    break;
      case 0x2a:
    plVar6[7] = param_3 & 0xffffffff;
    if (*plVar6 != 0) {
      *(ulong *)(*(long *)(*plVar6 + 0x40) + 0x38) = param_3 & 0xffffffff;
    }
    goto switchD_00100b3b_caseD_b;
      case 0x52:
    local_118[0] = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*plVar6 != 0) {
        plVar6 = *(long **)(*plVar6 + 0x40);
      }
      local_118[0] = (ulong)((~*(uint *)(plVar6 + 8) & 9) == 0);
    }
    break;
      case 0x53:
    *param_4 = *(byte *)(plVar6 + 0xb) >> 1 & 1;
    goto switchD_00100b3b_caseD_b;
      case 0x54:
    local_118[0] = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      plVar4 = plVar6;
      if (*plVar6 != 0) {
        plVar4 = *(long **)(*plVar6 + 0x40);
      }
      local_118[0] = 0;
      if ((~*(uint *)(plVar4 + 8) & 9) == 0) {
        local_118[0] = 1;
        *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) & 0xfd | ((int)param_3 != 0) * '\x02';
      }
    }
    break;
      case 0x55:
      case 0x56:
    local_118[0] = (ulong)*(uint *)(plVar6 + 8);
    break;
      case 0x57:
    *(int *)(plVar6 + 8) = (int)param_3;
    goto switchD_00100b3b_caseD_b;
      case 0x58:
    local_118[0] = (ulong)(*(byte *)(plVar6 + 0xb) & 1);
    break;
      case 0x59:
    *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) & 0xfe | 0 < (long)param_3;
    goto switchD_00100b3b_caseD_b;
      case 0x5e:
    BIO_ADDR_free(plVar6[9]);
    plVar6[9] = (long)param_4;
switchD_00100b3b_caseD_b:
    local_118[0] = 1;
    break;
      case 0x88:
    if (*plVar6 == 0) {
      uVar7 = 0x400;
      if (0x3ff < param_3) {
        uVar7 = param_3;
      }
      if ((plVar6[1] == 0) || (iVar3 = ring_buf_resize(plVar6 + 1,uVar7), iVar3 != 0)) {
        plVar6[6] = uVar7;
        local_118[0] = 1;
        *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) & 0xf7;
        break;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x1d1,"dgram_pair_ctrl_set_write_buf_size");
      ERR_set_error(0x20,0x7b,0);
    }
switchD_00100b3b_caseD_0:
    local_118[0] = 0;
    break;
      case 0x89:
    local_118[0] = plVar6[6];
    break;
      case 0x8c:
    iVar3 = CRYPTO_THREAD_read_lock(plVar6[10]);
    local_118[0] = 0;
    if (iVar3 != 0) {
      uVar7 = plVar6[2] - plVar6[3];
      if (0xe7 < uVar7) {
        uVar7 = uVar7 - 0xe8;
      }
      if (uVar7 < (ulong)plVar6[7]) {
        uVar7 = 0;
      }
      CRYPTO_THREAD_unlock(plVar6[10]);
      local_118[0] = uVar7;
    }
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_118[0];
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
long dgram_pair_ctrl(long param_1, int param_2, undefined8 param_3, long param_4) {
   long *plVar1;
   long *plVar2;
   ulong uVar3;
   long lVar4;
   void *pvVar5;
   undefined8 uVar6;
   ulong uVar7;
   if (param_2 != 0x8a) {
      if (param_2 == 0x8b) {
         plVar1 = *(long**)( param_1 + 0x40 );
         CRYPTO_free((void*)plVar1[1]);
         lVar4 = plVar1[9];
         plVar1[1] = 0;
         *(undefined1(*) [16])( plVar1 + 2 ) = (undefined1[16])0x0;
         *(undefined4*)( param_1 + 0x28 ) = 0;
         BIO_ADDR_free(lVar4);
         lVar4 = *plVar1;
         if (( lVar4 != 0 ) && ( plVar2 = param_1 == *plVar2 )) {
            CRYPTO_free((void*)plVar2[1]);
            plVar2[1] = 0;
            *(undefined1(*) [16])( plVar2 + 2 ) = (undefined1[16])0x0;
            *(undefined4*)( lVar4 + 0x28 ) = 0;
            *plVar1 = 0;
            *plVar2 = 0;
         }

         lVar4 = 1;
      }
 else {
         if (param_2 != 0x55) {
            lVar4 = dgram_mem_ctrl();
            return lVar4;
         }

         if (**(long**)( param_1 + 0x40 ) == 0) {
            return 0;
         }

         lVar4 = (long)*(int*)( *(long*)( **(long**)( param_1 + 0x40 ) + 0x40 ) + 0x40 );
      }

      return lVar4;
   }

   if (( param_1 == 0 ) || ( param_4 == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x158, "dgram_pair_ctrl_make_bio_pair");
      ERR_set_error(0x20, 0x7d, 0);
   }
 else if (( *(undefined1**)( param_1 + 8 ) == dgram_pair_method ) && ( *(undefined1**)( param_4 + 8 ) == dgram_pair_method )) {
      plVar1 = *(long**)( param_1 + 0x40 );
      plVar2 = *(long**)( param_4 + 0x40 );
      if (( plVar1 == (long*)0x0 ) || ( plVar2 == (long*)0x0 )) {
         ERR_new();
         uVar6 = 0x167;
      }
 else {
         if (( *plVar1 != 0 ) || ( *plVar2 != 0 )) {
            ERR_new();
            ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x170, "dgram_pair_ctrl_make_bio_pair");
            ERR_set_error(0x20, 0x7b, "cannot associate a BIO_dgram_pair which is already in use");
            return 0;
         }

         uVar3 = plVar1[6];
         if (( 0x3ff < uVar3 ) && ( uVar7 = 0x3ff < uVar7 )) {
            if (uVar3 != plVar1[2]) {
               pvVar5 = CRYPTO_malloc((int)uVar3, "crypto/bio/bss_dgram_pair.c", 0x25);
               plVar1[1] = (long)pvVar5;
               if (pvVar5 == (void*)0x0) {
                  ERR_new();
                  ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x17d, "dgram_pair_ctrl_make_bio_pair");
                  ERR_set_error(0x20, 0x80020, 0);
                  return 0;
               }

               plVar1[2] = uVar3;
               uVar7 = plVar2[6];
               plVar1[3] = 0;
               plVar1[5] = 0;
               plVar1[4] = 0;
            }

            if (plVar2[2] != uVar7) {
               pvVar5 = CRYPTO_malloc((int)uVar7, "crypto/bio/bss_dgram_pair.c", 0x25);
               plVar2[1] = (long)pvVar5;
               if (pvVar5 == (void*)0x0) {
                  ERR_new();
                  ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x183, "dgram_pair_ctrl_make_bio_pair");
                  ERR_set_error(0x20, 0x80020, 0);
                  CRYPTO_free((void*)plVar1[1]);
                  plVar1[1] = 0;
                  *(undefined1(*) [16])( plVar1 + 2 ) = (undefined1[16])0x0;
                  return 0;
               }

               plVar2[2] = uVar7;
               plVar2[3] = 0;
               plVar2[5] = 0;
               plVar2[4] = 0;
            }

            *plVar1 = param_4;
            *plVar2 = param_1;
            *(byte*)( plVar1 + 0xb ) = *(byte*)( plVar1 + 0xb ) & 0xfb;
            *(byte*)( plVar2 + 0xb ) = *(byte*)( plVar2 + 0xb ) | 4;
            *(undefined4*)( param_1 + 0x28 ) = 1;
            *(undefined4*)( param_4 + 0x28 ) = 1;
            return 1;
         }

         ERR_new();
         uVar6 = 0x177;
      }

      ERR_set_debug("crypto/bio/bss_dgram_pair.c", uVar6, "dgram_pair_ctrl_make_bio_pair");
      ERR_set_error(0x20, 0x78, 0);
   }
 else {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x15e, "dgram_pair_ctrl_make_bio_pair");
      ERR_set_error(0x20, 0x7d, "both BIOs must be BIO_dgram_pair");
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 dgram_mem_init(long param_1) {
   undefined8 uVar1;
   void *ptr;
   long lVar2;
   void *pvVar3;
   ptr = (void*)CRYPTO_zalloc(0x60, "crypto/bio/bss_dgram_pair.c", 0x117);
   uVar1 = _UNK_00102618;
   if (ptr != (void*)0x0) {
      *(undefined8*)( (long)ptr + 0x30 ) = __LC1;
      *(undefined8*)( (long)ptr + 0x38 ) = uVar1;
      lVar2 = CRYPTO_THREAD_lock_new();
      *(long*)( (long)ptr + 0x50 ) = lVar2;
      if (lVar2 != 0) {
         uVar1 = *(undefined8*)( (long)ptr + 0x30 );
         *(void**)( param_1 + 0x40 ) = ptr;
         pvVar3 = CRYPTO_malloc((int)uVar1, "crypto/bio/bss_dgram_pair.c", 0x25);
         *(void**)( (long)ptr + 8 ) = pvVar3;
         if (pvVar3 != (void*)0x0) {
            *(byte*)( (long)ptr + 0x58 ) = *(byte*)( (long)ptr + 0x58 ) | 8;
            *(undefined8*)( (long)ptr + 0x10 ) = uVar1;
            *(undefined8*)( (long)ptr + 0x18 ) = 0;
            *(undefined8*)( (long)ptr + 0x28 ) = 0;
            *(undefined8*)( (long)ptr + 0x20 ) = 0;
            *(undefined4*)( param_1 + 0x28 ) = 1;
            return 1;
         }

         ERR_new();
         ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x134, "dgram_mem_init");
         ERR_set_error(0x20, 0x80020, 0);
         return 0;
      }

      CRYPTO_free(ptr);
   }

   return 0;
}
undefined8 dgram_pair_free(long param_1) {
   long *ptr;
   long lVar1;
   long *plVar2;
   undefined8 uVar3;
   if (param_1 != 0) {
      ptr = *(long**)( param_1 + 0x40 );
      if (ptr == (long*)0x0) {
         uVar3 = 0;
      }
 else {
         CRYPTO_free((void*)ptr[1]);
         lVar1 = ptr[9];
         ptr[1] = 0;
         *(undefined1(*) [16])( ptr + 2 ) = (undefined1[16])0x0;
         *(undefined4*)( param_1 + 0x28 ) = 0;
         BIO_ADDR_free(lVar1);
         lVar1 = *ptr;
         if (( lVar1 != 0 ) && ( plVar2 = param_1 == *plVar2 )) {
            CRYPTO_free((void*)plVar2[1]);
            plVar2[1] = 0;
            *(undefined1(*) [16])( plVar2 + 2 ) = (undefined1[16])0x0;
            *(undefined4*)( lVar1 + 0x28 ) = 0;
            *ptr = 0;
            *plVar2 = 0;
         }

         CRYPTO_THREAD_lock_free(ptr[10]);
         CRYPTO_free(ptr);
         uVar3 = 1;
      }

      return uVar3;
   }

   return 0;
}
undefined4 dgram_pair_sendmmsg(long param_1, long *param_2, long param_3, long param_4, undefined8 param_5, long *param_6) {
   long lVar1;
   undefined8 *puVar2;
   long lVar3;
   long lVar4;
   int iVar5;
   long lVar6;
   long *plVar7;
   long lVar8;
   undefined8 *puVar9;
   undefined4 uVar10;
   long lVar11;
   long *plVar12;
   long lVar13;
   long in_FS_OFFSET;
   byte bVar14;
   long local_128[29];
   long local_40;
   bVar14 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = *(long*)( param_1 + 0x40 );
   if (param_4 == 0) {
      *param_6 = 0;
      uVar10 = 1;
   }
 else {
      iVar5 = CRYPTO_THREAD_write_lock(*(undefined8*)( lVar1 + 0x50 ));
      if (iVar5 == 0) {
         ERR_new();
         ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x526, "dgram_pair_sendmmsg");
         ERR_set_error(0x20, 0xc0110, 0);
         *param_6 = 0;
         uVar10 = 0;
      }
 else {
         lVar11 = 0;
         do {
            puVar2 = (undefined8*)param_2[2];
            puVar9 = (undefined8*)param_2[3];
            lVar13 = param_2[1];
            plVar12 = local_128;
            for (lVar8 = 0x1d; lVar8 != 0; lVar8 = lVar8 + -1) {
               *plVar12 = 0;
               plVar12 = plVar12 + (ulong)bVar14 * -2 + 1;
            }

            lVar8 = *param_2;
            plVar12 = *(long**)( param_1 + 0x40 );
            if (*(int*)( param_1 + 0x28 ) == 0) {
               lVar13 = -0x78;
               LAB_001015fc:*param_6 = lVar11;
               if (lVar11 != 0) goto LAB_0010160d;
               ERR_new();
               ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x534, "dgram_pair_sendmmsg");
               ERR_set_error(0x20, -(int)lVar13, 0);
               uVar10 = 0;
               goto LAB_00101612;
            }

            if (( plVar12 == (long*)0x0 ) || ( plVar12[1] == 0 )) {
               lVar13 = -0x68;
               goto LAB_001015fc;
            }

            if (( lVar13 != 0 ) && ( lVar8 == 0 )) {
               lVar13 = -0x7d;
               goto LAB_001015fc;
            }

            if (( puVar9 != (undefined8*)0x0 ) && ( ( *(byte*)( plVar12 + 0xb ) & 2 ) == 0 )) {
               lVar13 = -0x6f;
               goto LAB_001015fc;
            }

            plVar7 = plVar12;
            if (*plVar12 != 0) {
               plVar7 = *(long**)( *plVar12 + 0x40 );
            }

            if (puVar2 != (undefined8*)0x0) {
               if (( *(byte*)( plVar7 + 8 ) & 2 ) != 0) {
                  local_128[0xf] = *puVar2;
                  for (int i = 0; i < 13; i++) {
                     local_128[( i + 16 )] = puVar2[( i + 1 )];
                  }

                  if (puVar9 == (undefined8*)0x0) goto LAB_001016a6;
                  goto LAB_0010150a;
               }

               lVar13 = -0x97;
               goto LAB_001015fc;
            }

            local_128[0xf] = zero_addr_6._0_8_;
            local_128[0x10] = zero_addr_6._8_8_;
            local_128[0x15] = zero_addr_6._48_8_;
            local_128[0x16] = zero_addr_6._56_8_;
            local_128[0x11] = zero_addr_6._16_8_;
            local_128[0x12] = zero_addr_6._24_8_;
            local_128[0x17] = zero_addr_6._64_8_;
            local_128[0x18] = zero_addr_6._72_8_;
            local_128[0x13] = zero_addr_6._32_8_;
            local_128[0x14] = zero_addr_6._40_8_;
            local_128[0x19] = zero_addr_6._80_8_;
            local_128[0x1a] = zero_addr_6._88_8_;
            local_128[0x1b] = zero_addr_6._96_8_;
            local_128[0x1c] = zero_addr_6._104_8_;
            if (puVar9 == (undefined8*)0x0) {
               LAB_001016a6:puVar9 = (undefined8*)plVar12[9];
               if (puVar9 != (undefined8*)0x0) goto LAB_0010150a;
               local_128[1] = zero_addr_6._0_8_;
               local_128[2] = zero_addr_6._8_8_;
               local_128[3] = zero_addr_6._16_8_;
               local_128[4] = zero_addr_6._24_8_;
               local_128[5] = zero_addr_6._32_8_;
               local_128[6] = zero_addr_6._40_8_;
               local_128[7] = zero_addr_6._48_8_;
               local_128[8] = zero_addr_6._56_8_;
               local_128[9] = zero_addr_6._64_8_;
               local_128[10] = zero_addr_6._72_8_;
               local_128[0xb] = zero_addr_6._80_8_;
               local_128[0xc] = zero_addr_6._88_8_;
               local_128[0xd] = zero_addr_6._96_8_;
               local_128[0xe] = zero_addr_6._104_8_;
            }
 else {
               LAB_0010150a:local_128[1] = *puVar9;
               for (int i = 0; i < 13; i++) {
                  local_128[( i + 2 )] = puVar9[( i + 1 )];
               }

            }

            lVar3 = plVar12[3];
            lVar4 = plVar12[4];
            local_128[0] = lVar13;
            lVar6 = dgram_pair_write_inner(plVar12, local_128, 0xe8);
            if (lVar6 != 0xe8) {
               LAB_00101780:lVar13 = -0x70;
               plVar12[3] = lVar3;
               plVar12[4] = lVar4;
               goto LAB_001015fc;
            }

            lVar8 = dgram_pair_write_inner(plVar12, lVar8, lVar13);
            if (lVar13 != lVar8) goto LAB_00101780;
            if (lVar13 < 0) goto LAB_001015fc;
            param_2[4] = 0;
            lVar11 = lVar11 + 1;
            param_2 = (long*)( (long)param_2 + param_3 );
         }
 while ( param_4 != lVar11 );
         *param_6 = param_4;
         LAB_0010160d:uVar10 = 1;
         LAB_00101612:CRYPTO_THREAD_unlock(*(undefined8*)( lVar1 + 0x50 ));
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar10;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 dgram_pair_recvmmsg(long param_1, long *param_2, long param_3, long param_4, undefined8 param_5, long *param_6) {
   long lVar1;
   long lVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   long *plVar5;
   int iVar6;
   long lVar7;
   ulong uVar8;
   long lVar9;
   ulong uVar10;
   undefined8 uVar11;
   ulong uVar12;
   long *plVar13;
   long *plVar14;
   long in_FS_OFFSET;
   long local_180;
   ulong local_128;
   undefined8 local_120;
   undefined8 uStack_118;
   undefined8 local_110;
   undefined8 uStack_108;
   undefined8 local_100;
   undefined8 uStack_f8;
   undefined8 local_f0;
   undefined8 uStack_e8;
   undefined8 local_e0;
   undefined8 uStack_d8;
   undefined8 local_d0;
   undefined8 uStack_c8;
   undefined8 local_c0;
   undefined8 uStack_b8;
   undefined8 local_b0;
   undefined8 uStack_a8;
   undefined8 local_a0;
   undefined8 uStack_98;
   undefined8 local_90;
   undefined8 uStack_88;
   undefined8 local_80;
   undefined8 uStack_78;
   undefined8 local_70;
   undefined8 uStack_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar13 = *(long**)( param_1 + 0x40 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 == 0) {
      *param_6 = 0;
      uVar11 = 1;
   }
 else {
      if (*(int*)( param_1 + 0x28 ) == 0) {
         ERR_new();
         ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x42c, "dgram_pair_recvmmsg");
         ERR_set_error(0x20, 0x7c, 0);
      }
 else {
         if (*plVar13 != 0) {
            plVar13 = *(long**)( *plVar13 + 0x40 );
         }

         iVar6 = CRYPTO_THREAD_write_lock(plVar13[10]);
         local_180 = 0;
         if (iVar6 != 0) {
            do {
               puVar3 = (undefined8*)param_2[2];
               puVar4 = (undefined8*)param_2[3];
               uVar10 = param_2[1];
               plVar5 = *(long**)( param_1 + 0x40 );
               lVar9 = *param_2;
               if (*(int*)( param_1 + 0x28 ) == 0) {
                  uVar12 = 0xffffffffffffff88;
                  goto LAB_00101af1;
               }

               if (plVar5 == (long*)0x0) {
                  LAB_00101ae0:uVar12 = 0xffffffffffffff98;
                  LAB_00101af1:*param_6 = local_180;
                  if (local_180 != 0) goto LAB_00101b03;
                  ERR_new();
                  uVar11 = 0;
                  ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x445, "dgram_pair_recvmmsg");
                  ERR_set_error(0x20, -(int)uVar12, 0);
                  goto LAB_00101b08;
               }

               if (*plVar5 != 0) {
                  plVar14 = *(long**)( *plVar5 + 0x40 );
                  if (( plVar14 != (long*)0x0 ) && ( plVar14[1] != 0 )) goto LAB_001018e8;
                  goto LAB_00101ae0;
               }

               plVar14 = plVar5;
               if (plVar5[1] == 0) goto LAB_00101ae0;
               LAB_001018e8:if (( uVar10 != 0 ) && ( lVar9 == 0 )) {
                  uVar12 = 0xffffffffffffff83;
                  goto LAB_00101af1;
               }

               if (( puVar4 != (undefined8*)0x0 ) && ( ( *(byte*)( plVar5 + 0xb ) & 2 ) == 0 )) {
                  uVar12 = 0xffffffffffffff91;
                  goto LAB_00101af1;
               }

               lVar1 = plVar14[5];
               lVar2 = plVar14[3];
               lVar7 = dgram_pair_read_inner(plVar14, &local_128, 0xe8);
               if (lVar7 == 0) {
                  LAB_00101c9b:uVar12 = 0xffffffffffffff90;
                  goto LAB_00101af1;
               }

               if (lVar7 != 0xe8) {
                  uVar12 = 0xffffffffffffff84;
                  goto LAB_00101af1;
               }

               uVar12 = local_128;
               if (( local_128 < uVar10 ) || ( uVar12 = local_128 <= uVar10 )) {
                  uVar10 = dgram_pair_read_inner(plVar14, lVar9, uVar12);
                  if (uVar10 != uVar12) goto LAB_00101ae0;
               }
 else {
                  lVar7 = local_128 - uVar10;
                  if (( *(byte*)( plVar5 + 0xb ) & 1 ) != 0) {
                     plVar14[5] = lVar1;
                     plVar14[3] = lVar2;
                     goto LAB_00101c9b;
                  }

                  uVar8 = dgram_pair_read_inner(plVar14, lVar9, uVar10);
                  if (( uVar10 != uVar8 ) || ( lVar9 = lVar7 != lVar9 )) goto LAB_00101ae0;
               }

               if (puVar4 != (undefined8*)0x0) {
                  *puVar4 = local_b0;
                  puVar4[1] = uStack_a8;
                  puVar4[2] = local_a0;
                  puVar4[3] = uStack_98;
                  puVar4[4] = local_90;
                  puVar4[5] = uStack_88;
                  puVar4[6] = local_80;
                  puVar4[7] = uStack_78;
                  puVar4[8] = local_70;
                  puVar4[9] = uStack_68;
                  puVar4[10] = local_60;
                  puVar4[0xb] = uStack_58;
                  puVar4[0xc] = local_50;
                  puVar4[0xd] = uStack_48;
               }

               if (puVar3 != (undefined8*)0x0) {
                  *puVar3 = local_120;
                  puVar3[1] = uStack_118;
                  puVar3[2] = local_110;
                  puVar3[3] = uStack_108;
                  puVar3[4] = local_100;
                  puVar3[5] = uStack_f8;
                  puVar3[6] = local_f0;
                  puVar3[7] = uStack_e8;
                  puVar3[8] = local_e0;
                  puVar3[9] = uStack_d8;
                  puVar3[10] = local_d0;
                  puVar3[0xb] = uStack_c8;
                  puVar3[0xc] = local_c0;
                  puVar3[0xd] = uStack_b8;
               }

               if ((long)uVar12 < 0) goto LAB_00101af1;
               local_180 = local_180 + 1;
               param_2[1] = uVar12;
               param_2[4] = 0;
               param_2 = (long*)( (long)param_2 + param_3 );
            }
 while ( param_4 != local_180 );
            *param_6 = param_4;
            LAB_00101b03:uVar11 = 1;
            LAB_00101b08:CRYPTO_THREAD_unlock(plVar13[10]);
            goto LAB_00101b11;
         }

         ERR_new();
         ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x437, "dgram_pair_recvmmsg");
         ERR_set_error(0x20, 0xc0110, 0);
      }

      *param_6 = 0;
      uVar11 = 0;
   }

   LAB_00101b11:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar11;
}
ulong dgram_mem_read(BIO *param_1, long param_2, int param_3) {
   bio_st *pbVar1;
   bio_st *pbVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   long lVar6;
   ulong uVar7;
   undefined4 uVar8;
   ulong uVar9;
   ulong uVar10;
   bio_st *pbVar11;
   long in_FS_OFFSET;
   ulong local_128[29];
   long local_40;
   uVar9 = (ulong)param_3;
   pbVar1 = param_1.prev_bio;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 < 0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x45e, "dgram_mem_read");
      ERR_set_error(0x20, 0x7d, 0);
   }
 else {
      iVar5 = CRYPTO_THREAD_write_lock(pbVar1.num_read);
      if (iVar5 != 0) {
         pbVar2 = param_1.prev_bio;
         BIO_clear_flags(param_1, 0xf);
         if (param_1.num == 0) {
            uVar8 = 0x78;
            goto LAB_00101e85;
         }

         if (pbVar2 == (bio_st*)0x0) {
            LAB_00101e80:uVar8 = 0x68;
            LAB_00101e85:ERR_new();
            ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x46a, "dgram_mem_read");
            ERR_set_error(0x20, uVar8, 0);
            LAB_00101eb2:uVar10 = 0xffffffff;
         }
 else {
            if (pbVar2.method == (BIO_METHOD*)0x0) {
               pbVar11 = pbVar2;
               if (pbVar2.callback != (_func_603*)0x0) goto LAB_00101d98;
               goto LAB_00101e80;
            }

            pbVar11 = (bio_st*)pbVar2.method.destroy;
            if (( pbVar11 == (bio_st*)0x0 ) || ( pbVar11.callback == (_func_603*)0x0 )) goto LAB_00101e80;
            LAB_00101d98:if (( uVar9 != 0 ) && ( param_2 == 0 )) {
               uVar8 = 0x7d;
               goto LAB_00101e85;
            }

            iVar5 = pbVar11.num;
            uVar8 = *(undefined4*)&pbVar11.field_0x2c;
            iVar3 = pbVar11.init;
            iVar4 = pbVar11.shutdown;
            lVar6 = dgram_pair_read_inner(pbVar11, local_128, 0xe8);
            if (lVar6 == 0) {
               BIO_set_flags(param_1, 9);
               goto LAB_00101eb2;
            }

            if (lVar6 != 0xe8) {
               uVar8 = 0x7c;
               goto LAB_00101e85;
            }

            uVar10 = local_128[0];
            if (( local_128[0] < uVar9 ) || ( uVar10 = local_128[0] <= uVar9 )) {
               uVar9 = dgram_pair_read_inner(pbVar11, param_2, uVar10);
               if (uVar9 != uVar10) goto LAB_00101e80;
            }
 else {
               if (( pbVar2.num_write & 1 ) != 0) {
                  pbVar11.num = iVar5;
                  *(undefined4*)&pbVar11.field_0x2c = uVar8;
                  pbVar11.init = iVar3;
                  pbVar11.shutdown = iVar4;
                  goto LAB_00101eb2;
               }

               uVar7 = dgram_pair_read_inner(pbVar11, param_2, uVar9);
               if (( uVar9 != uVar7 ) || ( lVar6 = dgram_pair_read_inner(pbVar11, 0, local_128[0] - uVar9) ),local_128[0] - uVar9 != lVar6) goto LAB_00101e80;
            }

         }

         CRYPTO_THREAD_unlock(pbVar1.num_read);
         goto LAB_00101e2c;
      }

      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram_pair.c", 0x463, "dgram_mem_read");
      ERR_set_error(0x20, 0xc0110, 0);
   }

   uVar10 = 0xffffffff;
   LAB_00101e2c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar10 & 0xffffffff;
}
undefined1 *BIO_s_dgram_pair(void) {
   return dgram_pair_method;
}
undefined1 *BIO_s_dgram_mem(void) {
   return dgram_mem_method;
}
undefined8 BIO_new_bio_dgram_pair(undefined8 *param_1, long param_2, undefined8 *param_3, long param_4) {
   BIO_METHOD *pBVar1;
   BIO *pBVar2;
   BIO *bp;
   long lVar3;
   undefined8 uVar4;
   BIO *pBVar5;
   pBVar1 = (BIO_METHOD*)BIO_s_dgram_pair();
   pBVar2 = BIO_new(pBVar1);
   if (pBVar2 == (BIO*)0x0) {
      LAB_00102080:bp = (BIO*)0x0;
   }
 else {
      pBVar1 = (BIO_METHOD*)BIO_s_dgram_pair();
      bp = BIO_new(pBVar1);
      if (bp == (BIO*)0x0) goto LAB_00102080;
      if (( ( ( param_2 == 0 ) || ( lVar3 = BIO_ctrl(pBVar2, 0x88, param_2, (void*)0x0) ),(int)lVar3 != 0 ) ) && ( ( param_4 == 0 || ( lVar3 = BIO_ctrl(bp, 0x88, param_4, (void*)0x0) ),(int)lVar3 != 0 ) )) {
         uVar4 = 1;
         pBVar5 = pBVar2;
         pBVar2 = bp;
         goto LAB_00102029;
      }

   }

   pBVar5 = (BIO*)0x0;
   BIO_free(pBVar2);
   pBVar2 = (BIO*)0x0;
   BIO_free(bp);
   uVar4 = 0;
   LAB_00102029:*param_1 = pBVar5;
   *param_3 = pBVar2;
   return uVar4;
}

