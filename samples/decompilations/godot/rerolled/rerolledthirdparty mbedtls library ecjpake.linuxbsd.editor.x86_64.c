undefined8 self_test_rng(undefined8 param_1, undefined1 *param_2, long param_3) {
   undefined1 *puVar1;
   undefined1 *puVar2;
   if (param_3 != 0) {
      puVar1 = param_2;
      do {
         puVar2 = puVar1 + 1;
         state_0 = state_0 * 0x19660d + 0x3c6ef35f;
         *puVar1 = (char)state_0;
         puVar1 = puVar2;
      }
 while ( param_2 + param_3 != puVar2 );
   }

   return 0;
}
undefined8 ecjpake_lgc(undefined8 param_1, long param_2, ulong param_3) {
   ulong uVar1;
   uint uVar2;
   ulong uVar3;
   if (param_3 != 0) {
      do {
         uVar1 = 4;
         if (param_3 < 5) {
            uVar1 = param_3;
         }

         x_1 = x_1 * 0x19660d + 0x3c6ef35f;
         if ((uint)uVar1 != 0) {
            uVar2 = 0;
            do {
               uVar3 = (ulong)uVar2;
               uVar2 = uVar2 + 1;
               *(undefined1*)( param_2 + uVar3 ) = *(undefined1*)( (long)&x_1 + uVar3 );
            }
 while ( uVar2 < (uint)uVar1 );
         }

         param_2 = param_2 + uVar1;
         param_3 = param_3 - uVar1;
      }
 while ( param_3 != 0 );
   }

   return 0;
}
undefined8 ecjpake_write_len_point(ulong *param_1, ulong param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5) {
   ulong uVar1;
   undefined8 uVar2;
   uint uVar3;
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *param_1;
   if (( param_2 < uVar1 ) || ( (long)( param_2 - uVar1 ) < 5 )) {
      uVar2 = 0xffffb100;
   }
 else {
      uVar2 = mbedtls_ecp_point_write_binary(param_3, param_5, param_4, &local_18, uVar1 + 4, param_2 - ( uVar1 + 4 ));
      if ((int)uVar2 == 0) {
         uVar3 = (uint)local_18;
         *(uint*)*param_1 = uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18;
         *param_1 = *param_1 + local_18 + 4;
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ecjpake_hash(undefined4 param_1, long param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, char *param_7, undefined8 param_8) {
   undefined1 uVar1;
   uint uVar2;
   size_t __n;
   undefined8 uVar3;
   void *pvVar4;
   uint *__dest;
   long in_FS_OFFSET;
   uint *local_230;
   undefined1 local_228[64];
   uint local_1e8[105];
   undefined1 local_43[19];
   local_43._3_8_ = *(long*)( in_FS_OFFSET + 0x28 );
   local_230 = local_1e8;
   __n = strlen(param_7);
   uVar3 = ecjpake_write_len_point(&local_230, local_43, param_2, param_3, param_4);
   if ((int)uVar3 == 0) {
      uVar3 = ecjpake_write_len_point(&local_230, local_43, param_2, param_3, param_5);
      if ((int)uVar3 == 0) {
         uVar3 = ecjpake_write_len_point(&local_230, local_43, param_2, param_3, param_6);
         if ((int)uVar3 == 0) {
            if (3 < (long)local_43 - (long)local_230) {
               __dest = local_230 + 1;
               uVar2 = (uint)__n;
               *local_230 = uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18;
               local_230 = __dest;
               if (( __dest <= local_43 ) && ( __n <= ( ulong )((long)local_43 - (long)__dest) )) {
                  pvVar4 = memcpy(__dest, param_7, __n);
                  local_230 = (uint*)( __n + (long)pvVar4 );
                  uVar3 = mbedtls_md_info_from_type(param_1);
                  uVar3 = mbedtls_md(uVar3, local_1e8, (long)( __n + (long)pvVar4 ) - (long)local_1e8, local_228);
                  if ((int)uVar3 == 0) {
                     uVar3 = mbedtls_md_info_from_type(param_1);
                     uVar1 = mbedtls_md_get_size(uVar3);
                     uVar3 = mbedtls_mpi_read_binary(param_8, local_228, uVar1);
                     if ((int)uVar3 == 0) {
                        uVar3 = mbedtls_mpi_mod_mpi(param_8, param_8, param_2 + 0x68);
                     }

                  }

                  goto LAB_001001bf;
               }

            }

            uVar3 = 0xffffb100;
         }

      }

   }

   LAB_001001bf:if (local_43._3_8_ == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int ecjpake_zkp_write(undefined4 param_1, long param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, ulong *param_8, undefined1 *param_9, undefined8 param_10, undefined8 param_11) {
   undefined1 *puVar1;
   int iVar2;
   long in_FS_OFFSET;
   ulong local_a0;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[56];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_9 < (undefined1*)*param_8) {
      iVar2 = -0x4f00;
   }
 else {
      mbedtls_ecp_point_init(local_78);
      mbedtls_mpi_init(local_98);
      mbedtls_mpi_init(local_88);
      iVar2 = mbedtls_ecp_gen_keypair_base(param_2, param_4, local_98, local_78, param_10, param_11);
      if (iVar2 == 0) {
         iVar2 = ecjpake_hash(param_1, param_2, param_3, param_4, local_78, param_6);
         if (iVar2 == 0) {
            iVar2 = mbedtls_mpi_mul_mpi(local_88, local_88, param_5, local_88);
            if (iVar2 == 0) {
               iVar2 = mbedtls_mpi_sub_mpi(local_88, local_98, local_88);
               if (iVar2 == 0) {
                  iVar2 = mbedtls_mpi_mod_mpi(local_88, local_88, param_2 + 0x68);
                  if (iVar2 == 0) {
                     iVar2 = mbedtls_ecp_tls_write_point(param_2, local_78, param_3, &local_a0, *param_8, (long)param_9 - *param_8);
                     if (iVar2 == 0) {
                        *param_8 = *param_8 + local_a0;
                        local_a0 = mbedtls_mpi_size(local_88);
                        puVar1 = (undefined1*)*param_8;
                        iVar2 = -0x4f00;
                        if (puVar1 <= param_9) {
                           if (( ( ulong )((long)param_9 - (long)puVar1) < local_a0 + 1 ) || ( 0xff < local_a0 )) {
                              iVar2 = -0x4f00;
                           }
 else {
                              *param_8 = ( ulong )(puVar1 + 1);
                              *puVar1 = (char)local_a0;
                              iVar2 = mbedtls_mpi_write_binary(local_88, *param_8, local_a0);
                              if (iVar2 == 0) {
                                 *param_8 = *param_8 + local_a0;
                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

      mbedtls_ecp_point_free(local_78);
      mbedtls_mpi_free(local_98);
      mbedtls_mpi_free(local_88);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ecjpake_kkp_write(undefined4 param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, ulong *param_8, ulong param_9, undefined8 param_10, undefined8 param_11) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_9 < *param_8) {
      uVar1 = 0xffffb100;
   }
 else {
      uVar1 = mbedtls_ecp_gen_keypair_base(param_2, param_4, param_5, param_6, param_10, param_11, param_3, param_7);
      if ((int)uVar1 == 0) {
         uVar1 = mbedtls_ecp_tls_write_point(param_2, param_6, param_3, &local_48, *param_8, param_9 - *param_8);
         if ((int)uVar1 == 0) {
            *param_8 = *param_8 + local_48;
            uVar1 = ecjpake_zkp_write(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10, param_11);
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int ecjpake_ecp_add3(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   int iVar1;
   long in_FS_OFFSET;
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_mpi_init(local_58);
   iVar1 = mbedtls_mpi_lset(local_58, 1);
   if (iVar1 == 0) {
      iVar1 = mbedtls_ecp_muladd(param_1, param_2, local_58, param_3, local_58, param_4);
      if (iVar1 == 0) {
         iVar1 = mbedtls_ecp_muladd(param_1, param_2, local_58, param_2, local_58, param_5);
      }

   }

   mbedtls_mpi_free(local_58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int ecjpake_mul_secret(long param_1, short param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7) {
   int iVar1;
   long in_FS_OFFSET;
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_mpi_init(local_58);
   iVar1 = mbedtls_mpi_fill_random(local_58, 0x10, param_6, param_7);
   if (iVar1 == 0) {
      iVar1 = mbedtls_mpi_mul_mpi(local_58, local_58, param_5);
      if (iVar1 == 0) {
         iVar1 = mbedtls_mpi_add_mpi(local_58, local_58, param_4);
         if (iVar1 == 0) {
            iVar1 = mbedtls_mpi_mul_mpi(param_1, param_3, local_58);
            if (iVar1 == 0) {
               *(short*)( param_1 + 8 ) = param_2 * *(short*)( param_1 + 8 );
               iVar1 = mbedtls_mpi_mod_mpi(param_1, param_1, param_5);
            }

         }

      }

   }

   mbedtls_mpi_free(local_58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_ecjpake_derive_k(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   int iVar1;
   long in_FS_OFFSET;
   undefined1 local_68[16];
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_mpi_init(local_68);
   mbedtls_mpi_init(local_58);
   iVar1 = mbedtls_mpi_lset(local_58, 1);
   if (iVar1 == 0) {
      iVar1 = ecjpake_mul_secret(local_68, 0xffffffff, param_1 + 0x1d0, param_1 + 0x1e0, param_1 + 0x70, param_3);
      if (iVar1 == 0) {
         iVar1 = mbedtls_ecp_muladd(param_1 + 8, param_2, local_58, param_1 + 400, local_68, param_1 + 0x160);
         if (iVar1 == 0) {
            iVar1 = mbedtls_ecp_mul(param_1 + 8, param_2, param_1 + 0x1d0, param_2, param_3, param_4);
         }

      }

   }

   mbedtls_mpi_free(local_68);
   mbedtls_mpi_free(local_58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ecjpake_kkp_read(undefined4 param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, ulong *param_7, byte *param_8) {
   byte *pbVar1;
   byte bVar2;
   byte *pbVar3;
   int iVar4;
   uint uVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   undefined1 local_a8[48];
   undefined1 local_78[56];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_8 < (byte*)*param_7) {
      LAB_00100b30:uVar6 = 0xffffb080;
      goto LAB_0010099e;
   }

   uVar6 = mbedtls_ecp_tls_read_point(param_2, param_5, param_7, (long)param_8 - (long)*param_7);
   if ((int)uVar6 != 0) goto LAB_0010099e;
   iVar4 = mbedtls_ecp_is_zero(param_5);
   if (iVar4 != 0) {
      uVar6 = 0xffffb380;
      goto LAB_0010099e;
   }

   mbedtls_ecp_point_init(local_a8);
   mbedtls_ecp_point_init(local_78);
   mbedtls_mpi_init(local_c8);
   mbedtls_mpi_init(local_b8);
   if (param_8 < (byte*)*param_7) goto LAB_00100b30;
   uVar5 = mbedtls_ecp_tls_read_point(param_2, local_a8, param_7, (long)param_8 - (long)*param_7);
   if (uVar5 == 0) {
      pbVar3 = (byte*)*param_7;
      if (pbVar3 < param_8) {
         pbVar1 = pbVar3 + 1;
         *param_7 = (ulong)pbVar1;
         bVar2 = *pbVar3;
         if (( pbVar1 <= param_8 ) && ( (ulong)bVar2 - 1 < ( ulong )((long)param_8 - (long)pbVar1) )) {
            uVar5 = mbedtls_mpi_read_binary(local_c8);
            if (uVar5 == 0) {
               *param_7 = *param_7 + (ulong)bVar2;
               uVar5 = ecjpake_hash(param_1, param_2, param_3, param_4, local_a8, param_5, param_6, local_b8);
               if (uVar5 == 0) {
                  uVar5 = mbedtls_ecp_muladd(param_2, local_78, local_b8, param_5, local_c8, param_4);
                  if (uVar5 == 0) {
                     iVar4 = mbedtls_ecp_point_cmp(local_78, local_a8);
                     uVar5 = -(uint)(iVar4 != 0) & 0xffffb200;
                  }

               }

            }

            goto LAB_00100a73;
         }

      }

      uVar5 = 0xffffb080;
   }

   LAB_00100a73:mbedtls_ecp_point_free(local_a8);
   mbedtls_ecp_point_free(local_78);
   mbedtls_mpi_free(local_c8);
   mbedtls_mpi_free(local_b8);
   uVar6 = (ulong)uVar5;
   LAB_0010099e:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void mbedtls_ecjpake_free_part_0(undefined4 *param_1) {
   *param_1 = 0;
   mbedtls_ecp_group_free();
   for (int i = 0; i < 5; i++) {
      mbedtls_ecp_point_free(param_1 + ( 12*i + 52 ));
   }

   for (int i = 0; i < 3; i++) {
      mbedtls_mpi_free(param_1 + ( 4*i + 112 ));
   }

   return;
}
void ecjpake_test_load_constprop_0(long param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   iVar1 = mbedtls_mpi_read_binary(param_1 + 0x1c0, param_2, 0x20);
   if (iVar1 == 0) {
      iVar1 = mbedtls_mpi_read_binary(param_1 + 0x1d0, param_3, 0x20);
      if (iVar1 == 0) {
         iVar1 = mbedtls_ecp_mul(param_1 + 8, param_1 + 0xd0, param_1 + 0x1c0, param_1 + 0x40, 0x100000, 0);
         if (iVar1 == 0) {
            mbedtls_ecp_mul(param_1 + 8, param_1 + 0x100, param_1 + 0x1d0, param_1 + 0x40, 0x100000, 0);
            return;
         }

      }

   }

   return;
}
void mbedtls_ecjpake_init(undefined4 *param_1) {
   *param_1 = 0;
   mbedtls_ecp_group_init();
   param_1[0x33] = 0;
   for (int i = 0; i < 5; i++) {
      mbedtls_ecp_point_init(param_1 + ( 12*i + 52 ));
   }

   for (int i = 0; i < 3; i++) {
      mbedtls_mpi_init(param_1 + ( 4*i + 112 ));
   }

   return;
}
void mbedtls_ecjpake_free(long param_1) {
   if (param_1 != 0) {
      mbedtls_ecjpake_free_part_0();
      return;
   }

   return;
}
int mbedtls_ecjpake_setup(undefined4 *param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined8 param_5, undefined8 param_6) {
   int iVar1;
   long lVar2;
   if (param_2 < 2) {
      param_1[0x32] = param_2;
      lVar2 = mbedtls_md_info_from_type(param_3);
      if (lVar2 == 0) {
         iVar1 = -0x5080;
      }
 else {
         *param_1 = param_3;
         iVar1 = mbedtls_ecp_group_load(param_1 + 2, param_4);
         if (iVar1 == 0) {
            iVar1 = mbedtls_mpi_read_binary(param_1 + 0x78, param_5, param_6);
            if (iVar1 == 0) {
               return 0;
            }

         }

         mbedtls_ecjpake_free_part_0(param_1);
      }

   }
 else {
      iVar1 = -0x4f80;
   }

   return iVar1;
}
undefined8 mbedtls_ecjpake_set_point_format(long param_1, uint param_2) {
   if (param_2 < 2) {
      *(uint*)( param_1 + 0xcc ) = param_2;
      return 0;
   }

   return 0xffffb080;
}
uint mbedtls_ecjpake_check(int *param_1) {
   if (( *param_1 != 0 ) && ( param_1[2] != 0 )) {
      return -(uint)(*(long *)(param_1 + 0x78) == 0) & 0xffffb080;
   }

   return 0xffffb080;
}
ulong mbedtls_ecjpake_read_round_one(undefined4 *param_1, long param_2, long param_3) {
   undefined4 uVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   param_3 = param_2 + param_3;
   uVar1 = param_1[0x33];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = *param_1;
   uVar3 = *(undefined8*)( ecjpake_id + ( ulong )(1 - param_1[0x32]) * 8 );
   local_48 = param_2;
   uVar4 = ecjpake_kkp_read(uVar2, param_1 + 2, uVar1, param_1 + 0x10, param_1 + 0x4c, uVar3, &local_48, param_3);
   if (( ( (int)uVar4 == 0 ) && ( uVar4 = ecjpake_kkp_read(uVar2, param_1 + 2, uVar1, param_1 + 0x10, param_1 + 0x58, uVar3, &local_48, param_3) ),(int)uVar4 == 0 )) {
      uVar4 = 0xffffb080;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
void mbedtls_ecjpake_write_round_one(undefined4 *param_1, long param_2, long param_3, long *param_4, undefined8 param_5, undefined8 param_6) {
   undefined4 uVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   int iVar4;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = *(undefined8*)( ecjpake_id + (ulong)(uint)param_1[0x32] * 8 );
   uVar1 = param_1[0x33];
   uVar2 = *param_1;
   local_48 = param_2;
   iVar4 = ecjpake_kkp_write();
   if (iVar4 == 0) {
      iVar4 = ecjpake_kkp_write(uVar2, param_1 + 2, uVar1, param_1 + 0x10, param_1 + 0x74, param_1 + 0x40, uVar3, &local_48, param_3 + param_2, param_5, param_6);
      if (iVar4 == 0) {
         *param_4 = local_48 - param_2;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_ecjpake_read_round_two(undefined4 *param_1, long param_2, long param_3) {
   int iVar1;
   long in_FS_OFFSET;
   long local_140;
   undefined1 local_138[48];
   int local_108[50];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_140 = param_2;
   mbedtls_ecp_group_init(local_108);
   mbedtls_ecp_point_init(local_138);
   iVar1 = ecjpake_ecp_add3(param_1 + 2, local_138, param_1 + 0x34, param_1 + 0x40, param_1 + 0x4c);
   if (iVar1 != 0) goto LAB_0010110e;
   iVar1 = param_1[0x32];
   if (iVar1 == 0) {
      iVar1 = mbedtls_ecp_tls_read_group(local_108, &local_140, param_3);
      if (iVar1 != 0) goto LAB_0010110e;
      if (local_108[0] != param_1[2]) {
         iVar1 = -0x4e80;
         goto LAB_0010110e;
      }

      iVar1 = param_1[0x32];
   }

   iVar1 = ecjpake_kkp_read(*param_1, param_1 + 2, param_1[0x33], local_138, param_1 + 100, *(undefined8*)( ecjpake_id + ( ulong )(1 - iVar1) * 8 ), &local_140, param_3 + param_2);
   if (( iVar1 == 0 ) && ( local_140 != param_3 + param_2 )) {
      iVar1 = -0x4f80;
   }

   LAB_0010110e:mbedtls_ecp_group_free(local_108);
   mbedtls_ecp_point_free(local_138);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_ecjpake_write_round_two(undefined4 *param_1, ulong param_2, long param_3, long *param_4, undefined8 param_5, undefined8 param_6) {
   undefined4 *puVar1;
   ulong uVar2;
   int iVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   ulong local_c8;
   long local_c0;
   undefined1 local_b8[16];
   undefined1 local_a8[48];
   undefined1 local_78[56];
   long local_40;
   puVar1 = param_1 + 2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c8 = param_2;
   mbedtls_ecp_point_init(local_a8);
   mbedtls_ecp_point_init(local_78);
   mbedtls_mpi_init(local_b8);
   iVar3 = ecjpake_ecp_add3(puVar1, local_a8, param_1 + 0x4c, param_1 + 0x58, param_1 + 0x34);
   if (iVar3 != 0) goto LAB_001011f9;
   iVar3 = ecjpake_mul_secret(local_b8, 1, param_1 + 0x74, param_1 + 0x78, param_1 + 0x1c, param_5);
   if (iVar3 != 0) goto LAB_001011f9;
   iVar3 = mbedtls_ecp_mul(puVar1, local_78, local_b8, local_a8, param_5, param_6);
   if (iVar3 != 0) goto LAB_001011f9;
   uVar2 = param_2 + param_3;
   uVar4 = param_2;
   if (param_1[0x32] == 1) {
      if (param_2 <= uVar2) {
         iVar3 = mbedtls_ecp_tls_write_group(puVar1, &local_c0, param_2, param_3);
         if (iVar3 != 0) goto LAB_001011f9;
         uVar4 = local_c0 + param_2;
         local_c8 = uVar4;
         goto LAB_001012bb;
      }

   }
 else {
      LAB_001012bb:if (uVar4 <= uVar2) {
         iVar3 = mbedtls_ecp_tls_write_point(puVar1, local_78, param_1[0x33], &local_c0, uVar4, uVar2 - uVar4);
         if (iVar3 == 0) {
            local_c8 = uVar4 + local_c0;
            iVar3 = ecjpake_zkp_write(*param_1, puVar1, param_1[0x33], local_a8, local_b8, local_78, *(undefined8*)( ecjpake_id + (ulong)(uint)param_1[0x32] * 8 ), &local_c8, uVar2, param_5, param_6);
            if (iVar3 == 0) {
               *param_4 = local_c8 - param_2;
            }

         }

         goto LAB_001011f9;
      }

   }

   iVar3 = -0x4f00;
   LAB_001011f9:mbedtls_ecp_point_free(local_a8);
   mbedtls_ecp_point_free(local_78);
   mbedtls_mpi_free(local_b8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_ecjpake_derive_secret(undefined4 *param_1, undefined8 param_2, ulong param_3, ulong *param_4, undefined8 param_5, undefined8 param_6) {
   byte bVar1;
   int iVar2;
   undefined8 uVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   undefined1 auStack_b8[48];
   undefined1 local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = mbedtls_md_info_from_type(*param_1);
   bVar1 = mbedtls_md_get_size(uVar3);
   *param_4 = (ulong)bVar1;
   if (param_3 < bVar1) {
      iVar2 = -0x4f00;
   }
 else {
      mbedtls_ecp_point_init(auStack_b8);
      iVar2 = mbedtls_ecjpake_derive_k(param_1, auStack_b8, param_5, param_6);
      if (iVar2 == 0) {
         uVar4 = *(long*)( param_1 + 0x20 ) + 7U >> 3;
         iVar2 = mbedtls_mpi_write_binary(auStack_b8, local_88, uVar4);
         if (iVar2 == 0) {
            uVar3 = mbedtls_md_info_from_type(*param_1);
            iVar2 = mbedtls_md(uVar3, local_88, uVar4, param_2);
         }

      }

      mbedtls_ecp_point_free(auStack_b8);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_ecjpake_write_shared_key(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   int iVar1;
   long in_FS_OFFSET;
   undefined1 local_78[56];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_ecp_point_init(local_78);
   iVar1 = mbedtls_ecjpake_derive_k(param_1, local_78, param_5, param_6);
   if (iVar1 == 0) {
      iVar1 = mbedtls_ecp_point_write_binary(param_1 + 8, local_78, *(undefined4*)( param_1 + 0xcc ), param_4, param_2, param_3);
   }

   mbedtls_ecp_point_free(local_78);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined4 mbedtls_ecjpake_self_test(int param_1) {
   int iVar1;
   long lVar2;
   undefined1 *puVar3;
   undefined4 uVar4;
   long in_FS_OFFSET;
   byte bVar5;
   size_t local_658;
   size_t local_650;
   undefined4 local_648[2];
   undefined1 local_640[192];
   undefined4 local_580;
   undefined1 local_468[16];
   undefined4 local_458[2];
   undefined1 local_450[192];
   undefined4 local_390;
   undefined1 local_278[16];
   undefined1 local_268[32];
   undefined1 local_248[520];
   long local_40;
   bVar5 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_ecjpake_init(local_648);
   mbedtls_ecjpake_init(local_458);
   if (param_1 != 0) {
      __printf_chk(2, "  ECJPAKE test #0 (setup): ");
   }

   local_580 = 0;
   lVar2 = mbedtls_md_info_from_type(9);
   if (lVar2 == 0) goto LAB_001016cc;
   local_648[0] = 9;
   iVar1 = mbedtls_ecp_group_load(local_640, 3);
   if (( iVar1 == 0 ) && ( iVar1 = mbedtls_mpi_read_binary(local_468, ecjpake_test_password, 0xf) ),iVar1 == 0) {
      local_390 = 1;
      lVar2 = mbedtls_md_info_from_type(9);
      if (lVar2 == 0) {
         LAB_001016cc:mbedtls_ecjpake_free_part_0(local_648);
         mbedtls_ecjpake_free_part_0(local_458);
         goto joined_r0x001016e4;
      }

      local_458[0] = 9;
      iVar1 = mbedtls_ecp_group_load(local_450, 3);
      if (( iVar1 != 0 ) || ( iVar1 = mbedtls_mpi_read_binary(local_278, ecjpake_test_password, 0xf) ),iVar1 != 0) {
         mbedtls_ecjpake_free_part_0(local_458);
         goto LAB_001016cc;
      }

      if (param_1 != 0) {
         puts("passed");
         __printf_chk(2, "  ECJPAKE test #1 (random handshake): ");
      }

      iVar1 = mbedtls_ecjpake_write_round_one(local_648, local_248, 0x200, &local_658, ecjpake_lgc, 0);
      if (( ( ( iVar1 != 0 ) || ( iVar1 = mbedtls_ecjpake_read_round_one(local_458, local_248, local_658) ),iVar1 != 0 ) ) || ( iVar1 = mbedtls_ecjpake_write_round_one(local_458, local_248, 0x200, &local_658, ecjpake_lgc, 0) ),iVar1 != 0) goto LAB_001016cc;
      iVar1 = mbedtls_ecjpake_derive_secret(local_648, local_268, 0x20, &local_650, ecjpake_lgc, 0);
      if (( ( iVar1 != 0 ) || ( iVar1 = mbedtls_ecjpake_write_round_two(local_648, local_248, 0x200, &local_658, ecjpake_lgc, 0) ),iVar1 != 0 )) goto LAB_001016cc;
      if (param_1 != 0) {
         puts("passed");
         __printf_chk(2, "  ECJPAKE test #2 (reference handshake): ");
      }

      iVar1 = ecjpake_test_load_constprop_0(local_648, ecjpake_test_x1, ecjpake_test_x2);
      if (( ( ( iVar1 != 0 ) || ( iVar1 = ecjpake_test_load_constprop_0(local_458, ecjpake_test_x3, ecjpake_test_x4) ),iVar1 != 0 ) ) || ( ( iVar1 = mbedtls_ecjpake_read_round_one(local_458, ecjpake_test_cli_one, 0x14a) ),iVar1 != 0 || ( ( iVar1 = mbedtls_ecjpake_read_round_one(local_648, ecjpake_test_srv_one, 0x14a) ),iVar1 != 0 || ( iVar1 = mbedtls_ecjpake_read_round_two(local_648, ecjpake_test_srv_two, 0xa8) ),iVar1 != 0 ) )) ( ( iVar1 = mbedtls_ecjpake_read_round_two(local_458, ecjpake_test_cli_two, 0xa5) ),iVar1 != 0 || ( ( ( ( ( iVar1 = mbedtls_ecjpake_derive_secret(local_458, local_248, 0x200, &local_658, ecjpake_lgc, 0) ),iVar1 != 0 || ( local_658 != 0x20 ) ) || ( iVar1 = memcmp(local_248, ecjpake_test_pms, 0x20) ),iVar1 != 0 ) ) || ( ( iVar1 = mbedtls_ecjpake_write_shared_key(local_458, local_248, 0x200, &local_658, ecjpake_lgc, 0) ),iVar1 != 0 || ( local_658 != 0x41 ) ) ) ) || ( iVar1 = iVar1 != 0 );
      puVar3 = local_248;
      for (lVar2 = 0x41; lVar2 != 0; lVar2 = lVar2 + -1) {
         *puVar3 = 0;
         puVar3 = puVar3 + (ulong)bVar5 * -2 + 1;
      }

      iVar1 = mbedtls_ecjpake_derive_secret(local_648, local_248, 0x200, &local_658, ecjpake_lgc, 0);
      if (( ( iVar1 != 0 ) || ( local_658 != 0x20 ) ) || ( ( iVar1 = memcmp(local_248, ecjpake_test_pms, 0x20) ),iVar1 != 0 || ( ( ( iVar1 = mbedtls_ecjpake_write_shared_key(local_648, local_248, 0x200, &local_658, ecjpake_lgc, 0) ),iVar1 != 0 || ( local_658 != 0x41 ) ) || ( iVar1 = memcmp(local_248, ecjpake_test_shared_key, 0x41) ),iVar1 != 0 ) )) goto LAB_001016cc;
      uVar4 = 0;
      if (param_1 == 0) {
         mbedtls_ecjpake_free_part_0(local_648);
         mbedtls_ecjpake_free_part_0(local_458);
         goto LAB_0010161e;
      }

      puts("passed");
      mbedtls_ecjpake_free_part_0(local_648);
      mbedtls_ecjpake_free_part_0(local_458);
   }
 else {
      mbedtls_ecjpake_free_part_0(local_648);
      mbedtls_ecjpake_free_part_0(local_648);
      mbedtls_ecjpake_free_part_0(local_458);
      joined_r0x001016e4:uVar4 = 1;
      if (param_1 == 0) goto LAB_0010161e;
      uVar4 = 1;
      puts("failed");
   }

   putchar(10);
   LAB_0010161e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}

