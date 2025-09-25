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
ulong ecp_modp(long param_1, long param_2) {
   uint uVar1;
   int iVar2;
   ulong uVar3;
   if (*(long*)( param_2 + 0x90 ) == 0) {
      uVar3 = mbedtls_mpi_mod_mpi(param_1, param_1, param_2 + 8);
      return uVar3;
   }

   if (( ( *(short*)( param_1 + 8 ) < 0 ) && ( iVar2 = iVar2 != 0 ) ) || ( uVar3 = mbedtls_mpi_bitlen(param_1)(ulong)(*(long*)( param_2 + 0x78 ) * 2) < uVar3 )) {
      uVar3 = 0xffffb080;
   }
 else {
      uVar1 = ( **(code**)( param_2 + 0x90 ) )(param_1);
      param_2 = param_2 + 8;
      uVar3 = (ulong)uVar1;
      if (uVar1 == 0) {
         do {
            if (-1 < *(short*)( param_1 + 8 )) {
               iVar2 = mbedtls_mpi_cmp_mpi(param_1, param_2);
               if (-1 < iVar2) goto LAB_001000d0;
               return uVar3;
            }

            iVar2 = mbedtls_mpi_cmp_int(param_1, 0);
            if (iVar2 == 0) goto LAB_001000e2;
            uVar1 = mbedtls_mpi_add_mpi(param_1, param_1, param_2);
         }
 while ( uVar1 == 0 );
         goto LAB_00100100;
      }

   }

   return uVar3;
   LAB_001000e2:do {
      iVar2 = mbedtls_mpi_cmp_mpi(param_1, param_2);
      if (iVar2 < 0) {
         return uVar3;
      }

      LAB_001000d0:uVar1 = mbedtls_mpi_sub_abs(param_1, param_1, param_2);
   }
 while ( uVar1 == 0 );
   LAB_00100100:return (ulong)uVar1;
}
int ecp_safe_invert_jac(long param_1, long param_2, byte param_3) {
   int iVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined1 auStack_48[24];
   long local_30;
   param_2 = param_2 + 0x10;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_mpi_init(auStack_48);
   iVar1 = mbedtls_mpi_cmp_int(param_2, 0);
   iVar2 = mbedtls_mpi_sub_mpi(auStack_48, param_1 + 8, param_2);
   if (iVar2 == 0) {
      iVar2 = mbedtls_mpi_safe_cond_assign(param_2, auStack_48, iVar1 != 0 & param_3);
   }

   mbedtls_mpi_free(auStack_48);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ecp_select_comb(undefined8 param_1, long param_2, long param_3, byte param_4, byte param_5) {
   int iVar1;
   byte bVar2;
   bool bVar3;
   if (param_4 != 0) {
      bVar2 = 0;
      do {
         bVar3 = ( param_5 >> 1 & 0x3f ) == bVar2;
         iVar1 = mbedtls_mpi_safe_cond_assign(param_2, param_3, bVar3);
         if (iVar1 != 0) {
            return;
         }

         iVar1 = mbedtls_mpi_safe_cond_assign(param_2 + 0x10, param_3 + 0x10, bVar3);
         if (iVar1 != 0) {
            return;
         }

         bVar2 = bVar2 + 1;
         param_3 = param_3 + 0x30;
      }
 while ( param_4 != bVar2 );
   }

   iVar1 = ecp_safe_invert_jac(param_1, param_2, param_5 >> 7);
   if (iVar1 != 0) {
      return;
   }

   mbedtls_mpi_lset(param_2 + 0x20, 1);
   return;
}
int mbedtls_mpi_sub_mod(long param_1, long param_2, undefined8 param_3, undefined8 param_4) {
   int iVar1;
   int iVar2;
   iVar1 = mbedtls_mpi_sub_mpi(param_2, param_3, param_4);
   if (iVar1 == 0) {
      while (( *(short*)( param_2 + 8 ) < 0 && ( iVar2 = iVar2 != 0 ) )) {
         iVar2 = mbedtls_mpi_add_mpi(param_2, param_2, param_1 + 8);
         if (iVar2 != 0) {
            return iVar2;
         }

      }
;
   }

   return iVar1;
}
void mbedtls_mpi_mul_mod(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   int iVar1;
   iVar1 = mbedtls_mpi_mul_mpi(param_2, param_3, param_4);
   if (iVar1 == 0) {
      iVar1 = ecp_modp(param_2, param_1);
      if (iVar1 == 0) {
         mul_count = mul_count + 1;
         return;
      }

   }

   return;
}
int mbedtls_mpi_add_mod(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   int iVar1;
   int iVar2;
   iVar1 = mbedtls_mpi_add_mpi(param_2, param_3, param_4);
   if (iVar1 == 0) {
      while (iVar2 = mbedtls_mpi_cmp_mpi(param_2, param_1 + 8),-1 < iVar2) {
         iVar2 = mbedtls_mpi_sub_abs(param_2, param_2, param_1 + 8);
         if (iVar2 != 0) {
            return iVar2;
         }

      }
;
   }

   return iVar1;
}
int mbedtls_mpi_shift_l_mod_constprop_0(long param_1, undefined8 param_2) {
   int iVar1;
   int iVar2;
   iVar1 = mbedtls_mpi_shift_l(param_2, 1);
   if (iVar1 == 0) {
      while (iVar2 = mbedtls_mpi_cmp_mpi(param_2, param_1 + 8),-1 < iVar2) {
         iVar2 = mbedtls_mpi_sub_abs(param_2, param_2, param_1 + 8);
         if (iVar2 != 0) {
            return iVar2;
         }

      }
;
   }

   return iVar1;
}
int ecp_sw_rhs_part_0(long param_1, long param_2, undefined8 param_3) {
   short sVar1;
   int iVar2;
   int iVar3;
   if (*(long*)( param_1 + 0x18 ) == 0) {
      iVar2 = mbedtls_mpi_sub_int(param_2, param_2, 3);
      if (iVar2 == 0) {
         sVar1 = *(short*)( param_2 + 8 );
         while (( sVar1 < 0 && ( iVar2 = iVar2 != 0 ) )) {
            iVar2 = mbedtls_mpi_add_mpi(param_2, param_2, param_1 + 8);
            if (iVar2 != 0) {
               return iVar2;
            }

            sVar1 = *(short*)( param_2 + 8 );
         }
;
         LAB_001004b3:iVar2 = mbedtls_mpi_mul_mpi(param_2, param_2, param_3);
         if (( iVar2 == 0 ) && ( iVar2 = iVar2 == 0 )) {
            mul_count = mul_count + 1;
            iVar2 = mbedtls_mpi_add_mpi(param_2, param_2, param_1 + 0x28);
            if (iVar2 == 0) {
               while (iVar3 = mbedtls_mpi_cmp_mpi(param_2, param_1 + 8),-1 < iVar3) {
                  iVar3 = mbedtls_mpi_sub_abs(param_2, param_2, param_1 + 8);
                  if (iVar3 != 0) {
                     return iVar3;
                  }

               }
;
            }

         }

      }

   }
 else {
      iVar2 = mbedtls_mpi_add_mpi(param_2, param_2, param_1 + 0x18);
      while (iVar2 == 0) {
         iVar2 = mbedtls_mpi_cmp_mpi(param_2, param_1 + 8);
         if (iVar2 < 0) goto LAB_001004b3;
         iVar2 = mbedtls_mpi_sub_abs(param_2, param_2, param_1 + 8);
      }
;
   }

   return iVar2;
}
int ecp_randomize_mxz(long param_1, long param_2, undefined8 param_3, undefined8 param_4) {
   int iVar1;
   long in_FS_OFFSET;
   undefined1 auStack_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_mpi_init(auStack_48);
   iVar1 = mbedtls_mpi_random(auStack_48, 2, param_1 + 8, param_3, param_4);
   if (iVar1 == 0) {
      iVar1 = mbedtls_mpi_mul_mpi(param_2, param_2, auStack_48);
      if (iVar1 == 0) {
         iVar1 = ecp_modp(param_2, param_1);
         if (iVar1 == 0) {
            param_2 = param_2 + 0x20;
            mul_count = mul_count + 1;
            iVar1 = mbedtls_mpi_mul_mpi(param_2, param_2, auStack_48);
            if (iVar1 == 0) {
               iVar1 = ecp_modp(param_2, param_1);
               if (iVar1 == 0) {
                  mul_count = mul_count + 1;
                  mbedtls_mpi_free(auStack_48);
                  goto LAB_00100612;
               }

            }

         }

      }

   }

   mbedtls_mpi_free(auStack_48);
   if (iVar1 == -0xe) {
      iVar1 = -0x4d00;
   }

   LAB_00100612:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int ecp_normalize_jac(long param_1, long param_2) {
   long lVar1;
   long lVar2;
   int iVar3;
   long in_FS_OFFSET;
   undefined1 auStack_58[24];
   long local_40;
   lVar1 = param_2 + 0x20;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = mbedtls_mpi_cmp_int(lVar1, 0);
   if (iVar3 != 0) {
      mbedtls_mpi_init(auStack_58);
      iVar3 = mbedtls_mpi_inv_mod(auStack_58, lVar1, param_1 + 8);
      if (iVar3 == 0) {
         lVar2 = param_2 + 0x10;
         iVar3 = mbedtls_mpi_mul_mpi(lVar2, lVar2, auStack_58);
         if (iVar3 == 0) {
            iVar3 = ecp_modp(lVar2, param_1);
            if (iVar3 == 0) {
               mul_count = mul_count + 1;
               iVar3 = mbedtls_mpi_mul_mpi(auStack_58, auStack_58, auStack_58);
               if (iVar3 == 0) {
                  iVar3 = ecp_modp(auStack_58, param_1);
                  if (iVar3 == 0) {
                     mul_count = mul_count + 1;
                     iVar3 = mbedtls_mpi_mul_mpi(param_2, param_2, auStack_58);
                     if (iVar3 == 0) {
                        iVar3 = ecp_modp(param_2, param_1);
                        if (iVar3 == 0) {
                           mul_count = mul_count + 1;
                           iVar3 = mbedtls_mpi_mul_mpi(lVar2, lVar2, auStack_58);
                           if (iVar3 == 0) {
                              iVar3 = ecp_modp(lVar2, param_1);
                              if (iVar3 == 0) {
                                 mul_count = mul_count + 1;
                                 iVar3 = mbedtls_mpi_lset(lVar1, 1);
                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

      mbedtls_mpi_free(auStack_58);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ecp_normalize_jac_many(long param_1, long *param_2, ulong param_3) {
   long lVar1;
   void *pvVar2;
   uint uVar3;
   void *__ptr;
   void *pvVar4;
   ulong uVar5;
   void *pvVar6;
   long *plVar7;
   long lVar8;
   long in_FS_OFFSET;
   void *local_80;
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 < 2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = ecp_normalize_jac(param_1, *param_2);
         return uVar5;
      }

   }
 else {
      __ptr = calloc(param_3, 0x10);
      if (__ptr == (void*)0x0) {
         uVar5 = 0xffffb280;
      }
 else {
         pvVar2 = (void*)( (long)__ptr + param_3 * 0x10 );
         mbedtls_mpi_init(local_58);
         pvVar4 = __ptr;
         do {
            pvVar6 = (void*)( (long)pvVar4 + 0x10 );
            mbedtls_mpi_init(pvVar4);
            pvVar4 = pvVar6;
         }
 while ( pvVar6 != pvVar2 );
         uVar3 = mbedtls_mpi_copy(__ptr, *param_2 + 0x20);
         uVar5 = (ulong)uVar3;
         if (uVar3 == 0) {
            plVar7 = param_2 + 1;
            pvVar4 = __ptr;
            do {
               pvVar6 = (void*)( (long)pvVar4 + 0x10 );
               uVar3 = mbedtls_mpi_mul_mpi(pvVar6, pvVar4, *plVar7 + 0x20);
               uVar5 = (ulong)uVar3;
               if (uVar3 != 0) goto LAB_00100941;
               uVar3 = ecp_modp(pvVar6, param_1);
               uVar5 = (ulong)uVar3;
               if (uVar3 != 0) goto LAB_00100941;
               plVar7 = plVar7 + 1;
               mul_count = mul_count + 1;
               pvVar4 = pvVar6;
            }
 while ( plVar7 != param_2 + param_3 );
            lVar8 = (long)__ptr + param_3 * 0x10 + -0x10;
            uVar3 = mbedtls_mpi_inv_mod(lVar8, lVar8, param_1 + 8);
            uVar5 = (ulong)uVar3;
            if (uVar3 == 0) {
               lVar8 = param_3 - 1;
               param_2 = param_2 + lVar8;
               local_80 = (void*)( lVar8 * 0x10 + (long)__ptr );
               do {
                  if (lVar8 == 0) {
                     uVar3 = mbedtls_mpi_copy(local_58, __ptr);
                     uVar5 = (ulong)uVar3;
                     if (uVar3 != 0) break;
                  }
 else {
                     lVar1 = (long)local_80 + -0x10;
                     uVar3 = mbedtls_mpi_mul_mpi(local_58, local_80, lVar1);
                     uVar5 = (ulong)uVar3;
                     if (uVar3 != 0) break;
                     uVar3 = ecp_modp(local_58, param_1);
                     uVar5 = (ulong)uVar3;
                     if (uVar3 != 0) break;
                     mul_count = mul_count + 1;
                     uVar3 = mbedtls_mpi_mul_mpi(lVar1, local_80, *param_2 + 0x20);
                     uVar5 = (ulong)uVar3;
                     if (uVar3 != 0) break;
                     uVar3 = ecp_modp(lVar1, param_1);
                     uVar5 = (ulong)uVar3;
                     if (uVar3 != 0) break;
                     mul_count = mul_count + 1;
                  }

                  lVar1 = *param_2 + 0x10;
                  uVar3 = mbedtls_mpi_mul_mpi(lVar1, lVar1, local_58);
                  uVar5 = (ulong)uVar3;
                  if (uVar3 != 0) break;
                  uVar3 = ecp_modp(lVar1, param_1);
                  uVar5 = (ulong)uVar3;
                  if (uVar3 != 0) break;
                  mul_count = mul_count + 1;
                  uVar3 = mbedtls_mpi_mul_mpi(local_58, local_58, local_58);
                  uVar5 = (ulong)uVar3;
                  if (uVar3 != 0) break;
                  uVar3 = ecp_modp(local_58, param_1);
                  uVar5 = (ulong)uVar3;
                  if (uVar3 != 0) break;
                  lVar1 = *param_2;
                  mul_count = mul_count + 1;
                  uVar3 = mbedtls_mpi_mul_mpi(lVar1, lVar1, local_58);
                  uVar5 = (ulong)uVar3;
                  if (uVar3 != 0) break;
                  uVar3 = ecp_modp(lVar1, param_1);
                  uVar5 = (ulong)uVar3;
                  if (uVar3 != 0) break;
                  mul_count = mul_count + 1;
                  lVar1 = *param_2 + 0x10;
                  uVar3 = mbedtls_mpi_mul_mpi(lVar1, lVar1, local_58);
                  uVar5 = (ulong)uVar3;
                  if (uVar3 != 0) break;
                  uVar3 = ecp_modp(lVar1, param_1);
                  uVar5 = (ulong)uVar3;
                  if (uVar3 != 0) break;
                  mul_count = mul_count + 1;
                  uVar3 = mbedtls_mpi_shrink(*param_2, *(undefined2*)( param_1 + 0x12 ));
                  uVar5 = (ulong)uVar3;
                  if (uVar3 != 0) break;
                  uVar3 = mbedtls_mpi_shrink(*param_2 + 0x10, *(undefined2*)( param_1 + 0x12 ));
                  uVar5 = (ulong)uVar3;
                  if (uVar3 != 0) break;
                  uVar3 = mbedtls_mpi_lset(*param_2 + 0x20, 1);
                  uVar5 = (ulong)uVar3;
                  if (uVar3 != 0) break;
                  local_80 = (void*)( (long)local_80 + -0x10 );
                  param_2 = param_2 + -1;
                  if (lVar8 == 0) break;
                  lVar8 = lVar8 + -1;
               }
 while ( true );
            }

         }

         LAB_00100941:mbedtls_mpi_free(local_58);
         pvVar4 = __ptr;
         do {
            pvVar6 = (void*)( (long)pvVar4 + 0x10 );
            mbedtls_mpi_free(pvVar4);
            pvVar4 = pvVar6;
         }
 while ( pvVar6 != pvVar2 );
         free(__ptr);
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar5;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int ecp_randomize_jac(long param_1, long param_2, undefined8 param_3, undefined8 param_4) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined1 auStack_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_mpi_init(auStack_48);
   iVar2 = mbedtls_mpi_random(auStack_48, 2, param_1 + 8, param_3, param_4);
   if (iVar2 == 0) {
      lVar1 = param_2 + 0x20;
      iVar2 = mbedtls_mpi_mul_mpi(lVar1, lVar1, auStack_48);
      if (iVar2 == 0) {
         iVar2 = ecp_modp(lVar1, param_1);
         if (iVar2 == 0) {
            lVar1 = param_2 + 0x10;
            mul_count = mul_count + 1;
            iVar2 = mbedtls_mpi_mul_mpi(lVar1, lVar1, auStack_48);
            if (iVar2 == 0) {
               iVar2 = ecp_modp(lVar1, param_1);
               if (iVar2 == 0) {
                  mul_count = mul_count + 1;
                  iVar2 = mbedtls_mpi_mul_mpi(auStack_48, auStack_48, auStack_48);
                  if (iVar2 == 0) {
                     iVar2 = ecp_modp(auStack_48, param_1);
                     if (iVar2 == 0) {
                        mul_count = mul_count + 1;
                        iVar2 = mbedtls_mpi_mul_mpi(param_2, param_2, auStack_48);
                        if (iVar2 == 0) {
                           iVar2 = ecp_modp(param_2, param_1);
                           if (iVar2 == 0) {
                              mul_count = mul_count + 1;
                              iVar2 = mbedtls_mpi_mul_mpi(lVar1, lVar1, auStack_48);
                              if (iVar2 == 0) {
                                 iVar2 = ecp_modp(lVar1, param_1);
                                 if (iVar2 == 0) {
                                    mul_count = mul_count + 1;
                                    mbedtls_mpi_free(auStack_48);
                                    goto LAB_00100cb2;
                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   mbedtls_mpi_free(auStack_48);
   if (iVar2 == -0xe) {
      iVar2 = -0x4d00;
   }

   LAB_00100cb2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ecp_double_jac(long param_1, long param_2, long param_3, long param_4) {
   long lVar1;
   long lVar2;
   long lVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   lVar1 = param_4 + 0x10;
   dbl_count = dbl_count + 1;
   if (*(long*)( param_1 + 0x18 ) == 0) {
      iVar4 = mbedtls_mpi_mul_mpi(lVar1, param_3 + 0x20, param_3 + 0x20);
      if (iVar4 != 0) {
         return;
      }

      iVar4 = ecp_modp(lVar1, param_1);
      if (iVar4 != 0) {
         return;
      }

      lVar2 = param_4 + 0x20;
      lVar5 = param_1 + 8;
      mul_count = mul_count + 1;
      iVar4 = mbedtls_mpi_add_mpi(lVar2, param_3, lVar1);
      while (true) {
         if (iVar4 != 0) {
            return;
         }

         iVar4 = mbedtls_mpi_cmp_mpi(lVar2, lVar5);
         if (iVar4 < 0) break;
         iVar4 = mbedtls_mpi_sub_abs(lVar2, lVar2, lVar5);
      }
;
      lVar6 = param_4 + 0x30;
      iVar4 = mbedtls_mpi_sub_mpi(lVar6, param_3, lVar1);
      while (true) {
         if (iVar4 != 0) {
            return;
         }

         if (( -1 < *(short*)( param_4 + 0x38 ) ) || ( iVar4 = iVar4 == 0 )) break;
         iVar4 = mbedtls_mpi_add_mpi(lVar6, lVar6, lVar5);
      }
;
      iVar4 = mbedtls_mpi_mul_mpi(lVar1, lVar2, lVar6);
      if (iVar4 != 0) {
         return;
      }

      iVar4 = ecp_modp(lVar1, param_1);
      if (iVar4 != 0) {
         return;
      }

      mul_count = mul_count + 1;
      iVar4 = mbedtls_mpi_mul_int(param_4, lVar1, 3);
      while (true) {
         if (iVar4 != 0) {
            return;
         }

         iVar4 = mbedtls_mpi_cmp_mpi(param_4, lVar5);
         if (iVar4 < 0) break;
         iVar4 = mbedtls_mpi_sub_abs(param_4, param_4, lVar5);
      }
;
   }
 else {
      iVar4 = mbedtls_mpi_mul_mpi(lVar1, param_3);
      if (iVar4 != 0) {
         return;
      }

      iVar4 = ecp_modp(lVar1, param_1);
      if (iVar4 != 0) {
         return;
      }

      lVar2 = param_1 + 8;
      mul_count = mul_count + 1;
      iVar4 = mbedtls_mpi_mul_int(param_4, lVar1, 3);
      while (true) {
         if (iVar4 != 0) {
            return;
         }

         iVar4 = mbedtls_mpi_cmp_mpi(param_4, lVar2);
         if (iVar4 < 0) break;
         iVar4 = mbedtls_mpi_sub_abs(param_4, param_4, lVar2);
      }
;
      iVar4 = mbedtls_mpi_cmp_int(param_1 + 0x18, 0);
      if (iVar4 != 0) {
         iVar4 = mbedtls_mpi_mul_mpi(lVar1, param_3 + 0x20, param_3 + 0x20);
         if (iVar4 != 0) {
            return;
         }

         iVar4 = ecp_modp(lVar1, param_1);
         if (iVar4 != 0) {
            return;
         }

         lVar5 = param_4 + 0x20;
         mul_count = mul_count + 1;
         iVar4 = mbedtls_mpi_mul_mpi(lVar5, lVar1, lVar1);
         if (iVar4 != 0) {
            return;
         }

         iVar4 = ecp_modp(lVar5, param_1);
         if (iVar4 != 0) {
            return;
         }

         mul_count = mul_count + 1;
         iVar4 = mbedtls_mpi_mul_mpi(lVar1, lVar5, param_1 + 0x18);
         if (iVar4 != 0) {
            return;
         }

         iVar4 = ecp_modp(lVar1, param_1);
         if (iVar4 != 0) {
            return;
         }

         mul_count = mul_count + 1;
         iVar4 = mbedtls_mpi_add_mpi(param_4, param_4, lVar1);
         while (true) {
            if (iVar4 != 0) {
               return;
            }

            iVar4 = mbedtls_mpi_cmp_mpi(param_4, lVar2);
            if (iVar4 < 0) break;
            iVar4 = mbedtls_mpi_sub_abs(param_4, param_4, lVar2);
         }
;
      }

   }

   lVar6 = param_4 + 0x20;
   lVar5 = param_1 + 8;
   lVar2 = param_3 + 0x10;
   iVar4 = mbedtls_mpi_mul_mpi(lVar6, lVar2, lVar2);
   if (( iVar4 == 0 ) && ( iVar4 = iVar4 == 0 )) {
      mul_count = mul_count + 1;
      iVar4 = mbedtls_mpi_shift_l(lVar6, 1);
      while (iVar4 == 0) {
         iVar4 = mbedtls_mpi_cmp_mpi(lVar6, lVar5);
         if (iVar4 < 0) {
            iVar4 = mbedtls_mpi_mul_mpi(lVar1, param_3, lVar6);
            if (iVar4 != 0) {
               return;
            }

            iVar4 = ecp_modp(lVar1, param_1);
            if (iVar4 != 0) {
               return;
            }

            mul_count = mul_count + 1;
            iVar4 = mbedtls_mpi_shift_l(lVar1, 1);
            while (true) {
               if (iVar4 != 0) {
                  return;
               }

               iVar4 = mbedtls_mpi_cmp_mpi(lVar1, lVar5);
               if (iVar4 < 0) break;
               iVar4 = mbedtls_mpi_sub_abs(lVar1, lVar1, lVar5);
            }
;
            lVar3 = param_4 + 0x30;
            iVar4 = mbedtls_mpi_mul_mpi(lVar3, lVar6, lVar6);
            if (iVar4 != 0) {
               return;
            }

            iVar4 = ecp_modp(lVar3, param_1);
            if (iVar4 != 0) {
               return;
            }

            mul_count = mul_count + 1;
            iVar4 = mbedtls_mpi_shift_l(lVar3, 1);
            while (true) {
               if (iVar4 != 0) {
                  return;
               }

               iVar4 = mbedtls_mpi_cmp_mpi(lVar3, lVar5);
               if (iVar4 < 0) break;
               iVar4 = mbedtls_mpi_sub_abs(lVar3, lVar3, lVar5);
            }
;
            iVar4 = mbedtls_mpi_mul_mpi(lVar6, param_4, param_4);
            if (iVar4 != 0) {
               return;
            }

            iVar4 = ecp_modp(lVar6, param_1);
            if (iVar4 != 0) {
               return;
            }

            mul_count = mul_count + 1;
            iVar4 = mbedtls_mpi_sub_mod(param_1, lVar6, lVar6, lVar1);
            if (iVar4 != 0) {
               return;
            }

            iVar4 = mbedtls_mpi_sub_mod(param_1, lVar6, lVar6, lVar1);
            if (iVar4 != 0) {
               return;
            }

            iVar4 = mbedtls_mpi_sub_mod(param_1, lVar1, lVar1, lVar6);
            if (iVar4 != 0) {
               return;
            }

            iVar4 = mbedtls_mpi_mul_mod(param_1, lVar1, lVar1, param_4);
            if (iVar4 != 0) {
               return;
            }

            iVar4 = mbedtls_mpi_sub_mod(param_1, lVar1, lVar1, lVar3);
            if (iVar4 != 0) {
               return;
            }

            iVar4 = mbedtls_mpi_mul_mod(param_1, lVar3, lVar2, param_3 + 0x20);
            if (iVar4 != 0) {
               return;
            }

            iVar4 = mbedtls_mpi_shift_l_mod_constprop_0(param_1, lVar3);
            if (iVar4 != 0) {
               return;
            }

            iVar4 = mbedtls_mpi_copy(param_2, lVar6);
            if (iVar4 != 0) {
               return;
            }

            iVar4 = mbedtls_mpi_copy(param_2 + 0x10, lVar1);
            if (iVar4 != 0) {
               return;
            }

            mbedtls_mpi_copy(param_2 + 0x20, lVar3);
            return;
         }

         iVar4 = mbedtls_mpi_sub_abs(lVar6, lVar6, lVar5);
      }
;
   }

   return;
}
undefined8 ecp_add_mixed(long param_1, long param_2, long param_3, long param_4, long param_5) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   int iVar5;
   undefined8 uVar6;
   lVar1 = param_2 + 0x10;
   add_count = add_count + 1;
   lVar2 = param_2 + 0x20;
   if (*(long*)( param_4 + 0x20 ) == 0) {
      LAB_00101660:uVar6 = 0xffffb080;
   }
 else {
      lVar3 = param_3 + 0x20;
      iVar5 = mbedtls_mpi_cmp_int(lVar3, 0);
      if (iVar5 == 0) {
         uVar6 = mbedtls_mpi_copy(param_2, param_4);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         uVar6 = mbedtls_mpi_copy(lVar1, param_4 + 0x10);
         lVar3 = param_4 + 0x20;
         iVar5 = (int)uVar6;
      }
 else {
         iVar5 = mbedtls_mpi_cmp_int(param_4 + 0x20, 0);
         if (iVar5 != 0) {
            iVar5 = mbedtls_mpi_cmp_int(param_4 + 0x20, 1);
            if (iVar5 == 0) {
               uVar6 = mbedtls_mpi_mul_mpi(param_5, lVar3, lVar3);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               uVar6 = ecp_modp(param_5, param_1);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               lVar4 = param_5 + 0x10;
               mul_count = mul_count + 1;
               uVar6 = mbedtls_mpi_mul_mpi(lVar4, param_5, lVar3);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               uVar6 = ecp_modp(lVar4, param_1);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               mul_count = mul_count + 1;
               uVar6 = mbedtls_mpi_mul_mpi(param_5, param_5, param_4);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               uVar6 = ecp_modp(param_5, param_1);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               mul_count = mul_count + 1;
               uVar6 = mbedtls_mpi_mul_mpi(lVar4, lVar4, param_4 + 0x10);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               uVar6 = ecp_modp(lVar4, param_1);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               mul_count = mul_count + 1;
               uVar6 = mbedtls_mpi_sub_mpi(param_5, param_5, param_3);
               iVar5 = (int)uVar6;
               while (true) {
                  if (iVar5 != 0) {
                     return uVar6;
                  }

                  if (( -1 < *(short*)( param_5 + 8 ) ) || ( iVar5 = iVar5 == 0 )) break;
                  uVar6 = mbedtls_mpi_add_mpi(param_5, param_5, param_1 + 8);
                  iVar5 = (int)uVar6;
               }
;
               uVar6 = mbedtls_mpi_sub_mpi(lVar4, lVar4, param_3 + 0x10);
               iVar5 = (int)uVar6;
               while (true) {
                  if (iVar5 != 0) {
                     return uVar6;
                  }

                  if (( -1 < *(short*)( param_5 + 0x18 ) ) || ( iVar5 = iVar5 == 0 )) break;
                  uVar6 = mbedtls_mpi_add_mpi(lVar4, lVar4, param_1 + 8);
                  iVar5 = (int)uVar6;
               }
;
               iVar5 = mbedtls_mpi_cmp_int(param_5, 0);
               if (iVar5 == 0) {
                  iVar5 = mbedtls_mpi_cmp_int(lVar4, 0);
                  if (iVar5 == 0) {
                     uVar6 = ecp_double_jac(param_1, param_2, param_3, param_5);
                     return uVar6;
                  }

                  uVar6 = mbedtls_mpi_lset(param_2, 1);
                  if ((int)uVar6 != 0) {
                     return uVar6;
                  }

                  uVar6 = mbedtls_mpi_lset(lVar1, 1);
                  if ((int)uVar6 != 0) {
                     return uVar6;
                  }

                  uVar6 = mbedtls_mpi_lset(lVar2, 0);
                  return uVar6;
               }

               uVar6 = mbedtls_mpi_mul_mpi(lVar2, lVar3, param_5);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               uVar6 = ecp_modp(lVar2, param_1);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               lVar2 = param_5 + 0x20;
               mul_count = mul_count + 1;
               uVar6 = mbedtls_mpi_mul_mpi(lVar2, param_5, param_5);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               uVar6 = ecp_modp(lVar2, param_1);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               lVar3 = param_5 + 0x30;
               mul_count = mul_count + 1;
               uVar6 = mbedtls_mpi_mul_mod(param_1, lVar3, lVar2, param_5);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               uVar6 = mbedtls_mpi_mul_mod(param_1, lVar2, lVar2, param_3);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               uVar6 = mbedtls_mpi_copy(param_5, lVar2);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               uVar6 = mbedtls_mpi_shift_l_mod_constprop_0(param_1, param_5);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               uVar6 = mbedtls_mpi_mul_mod(param_1, param_2, lVar4, lVar4);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               uVar6 = mbedtls_mpi_sub_mod(param_1, param_2, param_2, param_5);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               uVar6 = mbedtls_mpi_sub_mod(param_1, param_2, param_2, lVar3);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               uVar6 = mbedtls_mpi_sub_mod(param_1, lVar2, lVar2, param_2);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               uVar6 = mbedtls_mpi_mul_mod(param_1, lVar2, lVar2, lVar4);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               uVar6 = mbedtls_mpi_mul_mod(param_1, lVar3, lVar3, param_3 + 0x10);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               uVar6 = mbedtls_mpi_sub_mod(param_1, lVar1, lVar2, lVar3);
               return uVar6;
            }

            goto LAB_00101660;
         }

         uVar6 = mbedtls_mpi_copy(param_2, param_3);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         uVar6 = mbedtls_mpi_copy(lVar1, param_3 + 0x10);
         iVar5 = (int)uVar6;
      }

      if (iVar5 == 0) {
         uVar6 = mbedtls_mpi_copy(lVar2, lVar3);
         return uVar6;
      }

   }

   return uVar6;
}
ulong ecp_mul_comb_after_precomp_isra_0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined1 param_5, byte param_6, byte *param_7, long param_8, undefined8 param_9) {
   byte bVar1;
   int iVar2;
   uint uVar3;
   int iVar4;
   uint uVar5;
   byte *pbVar6;
   uint uVar7;
   ulong uVar8;
   uint uVar9;
   byte *pbVar10;
   byte *pbVar11;
   long in_FS_OFFSET;
   undefined1 local_1c8[16];
   undefined1 local_1b8[16];
   undefined1 local_1a8[16];
   undefined1 local_198[16];
   byte local_188[64];
   byte local_148[264];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_mpi_init(local_1c8);
   mbedtls_mpi_init(local_1b8);
   iVar2 = mbedtls_mpi_get_bit(param_1 + 0x68, 0);
   uVar8 = 0xffffb080;
   if (iVar2 == 1) {
      iVar2 = mbedtls_mpi_get_bit(param_3, 0);
      uVar3 = mbedtls_mpi_copy(local_1c8, param_3);
      if (uVar3 == 0) {
         uVar3 = mbedtls_mpi_sub_mpi(local_1b8, param_1 + 0x68, param_3);
         if (uVar3 == 0) {
            uVar3 = mbedtls_mpi_safe_cond_assign(local_1c8, local_1b8, iVar2 == 0);
            if (uVar3 == 0) {
               __memset_chk(local_148, 0, param_7 + 1);
               if (param_7 != (byte*)0x0) {
                  if (param_6 != 0) {
                     pbVar6 = (byte*)0x0;
                     pbVar11 = local_148;
                     do {
                        uVar8 = 0;
                        pbVar10 = pbVar6;
                        do {
                           iVar4 = mbedtls_mpi_get_bit(local_1c8, pbVar10);
                           bVar1 = (byte)uVar8;
                           uVar8 = uVar8 + 1;
                           *pbVar11 = *pbVar11 | ( byte )(iVar4 << ( bVar1 & 0x1f ));
                           pbVar10 = pbVar10 + (long)param_7;
                        }
 while ( uVar8 != param_6 );
                        pbVar11 = pbVar11 + 1;
                        pbVar6 = pbVar6 + 1;
                     }
 while ( param_7 != pbVar6 );
                  }

                  uVar7 = (uint)local_148[0];
                  uVar3 = 0;
                  pbVar11 = local_148;
                  do {
                     pbVar6 = pbVar11 + 1;
                     uVar9 = pbVar11[1] ^ uVar3;
                     uVar5 = -(~uVar9 & 1) & uVar7;
                     uVar3 = uVar9 & uVar5 | ( uint )((byte)uVar3 & *pbVar6);
                     bVar1 = (byte)uVar7;
                     uVar7 = uVar9 ^ uVar5;
                     *pbVar6 = (byte)uVar7;
                     *pbVar11 = ( byte )(( ~uVar9 & 1 ) << 7) | bVar1;
                     pbVar11 = pbVar6;
                  }
 while ( pbVar6 + ( 1 - (long)local_148 ) <= param_7 );
               }

               mbedtls_mpi_free(local_1b8);
               mbedtls_mpi_free(local_1c8);
               mbedtls_mpi_init(local_1b8);
               mbedtls_mpi_init(local_1a8);
               mbedtls_mpi_init(local_198);
               pbVar11 = local_188;
               do {
                  pbVar6 = pbVar11 + 0x10;
                  mbedtls_mpi_init(pbVar11);
                  pbVar11 = pbVar6;
               }
 while ( pbVar6 != local_148 );
               param_7 = param_7 + (long)local_148;
               uVar7 = ecp_select_comb(param_1, param_2, param_4, param_5, *param_7);
               uVar3 = uVar7;
               if (uVar7 == 0) {
                  if (param_8 == 0) goto LAB_00101bd9;
                  uVar3 = ecp_randomize_jac(param_1, param_2, param_8, param_9);
                  while (uVar3 == 0) {
                     LAB_00101bd9:uVar3 = uVar7;
                     if (( ( local_148 == param_7 ) || ( uVar3 = ecp_double_jac(param_1, param_2, param_2, local_188) ),uVar3 != 0 )) break;
                     param_7 = param_7 + -1;
                     uVar3 = ecp_add_mixed(param_1, param_2, param_2, local_1b8, local_188);
                  }
;
               }

               mbedtls_mpi_free(local_1b8);
               mbedtls_mpi_free(local_1a8);
               mbedtls_mpi_free(local_198);
               pbVar11 = local_188;
               do {
                  pbVar6 = pbVar11 + 0x10;
                  mbedtls_mpi_free(pbVar11);
                  pbVar11 = pbVar6;
               }
 while ( pbVar6 != local_148 );
               uVar8 = (ulong)uVar3;
               if (uVar3 == 0) {
                  uVar3 = ecp_safe_invert_jac(param_1, param_2, iVar2 == 0);
                  uVar8 = (ulong)uVar3;
                  if (uVar3 == 0) {
                     if (param_8 != 0) {
                        uVar3 = ecp_randomize_jac(param_1, param_2, param_8, param_9);
                        uVar8 = (ulong)uVar3;
                        if (uVar3 != 0) goto LAB_0010190f;
                     }

                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        uVar8 = ecp_normalize_jac(param_1, param_2);
                        return uVar8;
                     }

                     goto LAB_00101cca;
                  }

               }

               goto LAB_0010190f;
            }

         }

         mbedtls_mpi_free(local_1b8);
         mbedtls_mpi_free(local_1c8);
         uVar8 = (ulong)uVar3;
      }
 else {
         mbedtls_mpi_free(local_1b8);
         mbedtls_mpi_free(local_1c8);
         uVar8 = (ulong)uVar3;
      }

   }

   LAB_0010190f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar8;
   }

   LAB_00101cca:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
undefined4 *mbedtls_ecp_curve_list(void) {
   return &ecp_supported_curves;
}
undefined4 *mbedtls_ecp_grp_id_list(void) {
   long lVar1;
   int *piVar2;
   int iVar3;
   if (init_done_1 == 0) {
      piVar2 = &ecp_supported_curves;
      lVar1 = 0;
      iVar3 = 5;
      do {
         lVar1 = lVar1 + 1;
         piVar2 = piVar2 + 4;
         *(int*)( &DAT_00104ebc + lVar1 * 4 ) = iVar3;
         iVar3 = *piVar2;
      }
 while ( iVar3 != 0 );
      init_done_1 = 1;
      ( &ecp_supported_grp_id )[lVar1] = 0;
   }

   return &ecp_supported_grp_id;
}
undefined4 *mbedtls_ecp_curve_info_from_grp_id(int param_1) {
   undefined4 *puVar1;
   int iVar2;
   puVar1 = &ecp_supported_curves;
   iVar2 = 5;
   do {
      if (param_1 == iVar2) {
         return puVar1;
      }

      iVar2 = puVar1[4];
      puVar1 = puVar1 + 4;
   }
 while ( iVar2 != 0 );
   return (undefined4*)0x0;
}
undefined4 *mbedtls_ecp_curve_info_from_tls_id(short param_1) {
   int *piVar1;
   undefined4 *puVar2;
   puVar2 = &ecp_supported_curves;
   do {
      if (*(short*)( puVar2 + 1 ) == param_1) {
         return puVar2;
      }

      piVar1 = puVar2 + 4;
      puVar2 = puVar2 + 4;
   }
 while ( *piVar1 != 0 );
   return (undefined4*)0x0;
}
undefined4 *mbedtls_ecp_curve_info_from_name(char *param_1) {
   int *piVar1;
   int iVar2;
   undefined4 *puVar3;
   if (param_1 != (char*)0x0) {
      puVar3 = &ecp_supported_curves;
      do {
         iVar2 = strcmp(*(char**)( puVar3 + 2 ), param_1);
         if (iVar2 == 0) {
            return puVar3;
         }

         piVar1 = puVar3 + 4;
         puVar3 = puVar3 + 4;
      }
 while ( *piVar1 != 0 );
   }

   return (undefined4*)0x0;
}
int mbedtls_ecp_get_type(long param_1) {
   if (*(long*)( param_1 + 0x38 ) != 0) {
      return 2 - ( uint )(*(long*)( param_1 + 0x48 ) != 0);
   }

   return 0;
}
void mbedtls_ecp_point_init(long param_1) {
   mbedtls_mpi_init();
   mbedtls_mpi_init(param_1 + 0x10);
   mbedtls_mpi_init(param_1 + 0x20);
   return;
}
void mbedtls_ecp_group_init(undefined4 *param_1) {
   *param_1 = 0;
   mbedtls_mpi_init();
   for (int i = 0; i < 6; i++) {
      mbedtls_mpi_init(param_1 + ( 4*i + 6 ));
   }

   param_1[0x22] = 0;
   *(undefined8*)( param_1 + 0x28 ) = 0;
   *(undefined8*)( param_1 + 0x2e ) = 0;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( param_1 + ( 6*i + 30 ) ) = (undefined1[16])0;
   }

   return;
}
void mbedtls_ecp_keypair_init(long param_1) {
   mbedtls_ecp_group_init();
   for (int i = 0; i < 4; i++) {
      mbedtls_mpi_init(param_1 + ( 16*i + 192 ));
   }

   return;
}
void mbedtls_ecp_point_free(long param_1) {
   if (param_1 != 0) {
      mbedtls_mpi_free();
      mbedtls_mpi_free(param_1 + 0x10);
      mbedtls_mpi_free(param_1 + 0x20);
      return;
   }

   return;
}
void mbedtls_ecp_group_free(long param_1) {
   void *pvVar1;
   ulong uVar2;
   void *__ptr;
   if (param_1 != 0) {
      if (*(int*)( param_1 + 0x88 ) != 1) {
         for (int i = 0; i < 3; i++) {
            mbedtls_mpi_free(param_1 + ( 32*i + 24 ));
            mbedtls_mpi_free(param_1 + ( 32*i + 40 ));
         }

         mbedtls_mpi_free(param_1 + 8);
      }

      __ptr = *(void**)( param_1 + 0xb0 );
      if (( __ptr != (void*)0x0 ) && ( *(long*)( param_1 + 0xb8 ) != 0 )) {
         uVar2 = 0;
         do {
            pvVar1 = (void*)( uVar2 * 0x30 + (long)__ptr );
            if (pvVar1 != (void*)0x0) {
               mbedtls_mpi_free(pvVar1);
               mbedtls_mpi_free((long)pvVar1 + 0x10);
               mbedtls_mpi_free((long)pvVar1 + 0x20);
               __ptr = *(void**)( param_1 + 0xb0 );
            }

            uVar2 = uVar2 + 1;
         }
 while ( uVar2 < *(ulong*)( param_1 + 0xb8 ) );
         free(__ptr);
      }

      mbedtls_platform_zeroize(param_1, 0xc0);
      return;
   }

   return;
}
void mbedtls_ecp_keypair_free(long param_1) {
   if (param_1 != 0) {
      mbedtls_ecp_group_free();
      for (int i = 0; i < 4; i++) {
         mbedtls_mpi_free(param_1 + ( 16*i + 192 ));
      }

      return;
   }

   return;
}
void mbedtls_ecp_copy(long param_1, long param_2) {
   int iVar1;
   iVar1 = mbedtls_mpi_copy();
   if (iVar1 == 0) {
      iVar1 = mbedtls_mpi_copy(param_1 + 0x10, param_2 + 0x10);
      if (iVar1 == 0) {
         mbedtls_mpi_copy(param_1 + 0x20, param_2 + 0x20);
         return;
      }

   }

   return;
}
void mbedtls_ecp_group_copy(undefined8 param_1, undefined4 *param_2) {
   mbedtls_ecp_group_load(param_1, *param_2);
   return;
}
void mbedtls_ecp_set_zero(long param_1) {
   int iVar1;
   iVar1 = mbedtls_mpi_lset(param_1, 1);
   if (iVar1 == 0) {
      iVar1 = mbedtls_mpi_lset(param_1 + 0x10, 1);
      if (iVar1 == 0) {
         mbedtls_mpi_lset(param_1 + 0x20, 0);
         return;
      }

   }

   return;
}
bool mbedtls_ecp_is_zero(long param_1) {
   int iVar1;
   iVar1 = mbedtls_mpi_cmp_int(param_1 + 0x20, 0);
   return iVar1 == 0;
}
undefined8 mbedtls_ecp_point_cmp(long param_1, long param_2) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = mbedtls_mpi_cmp_mpi();
   if (iVar1 == 0) {
      iVar1 = mbedtls_mpi_cmp_mpi(param_1 + 0x10, param_2 + 0x10);
      if (iVar1 == 0) {
         uVar2 = mbedtls_mpi_cmp_mpi(param_1 + 0x20, param_2 + 0x20);
         if ((int)uVar2 == 0) {
            return uVar2;
         }

      }

   }

   return 0xffffb080;
}
void mbedtls_ecp_point_read_string(long param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4) {
   int iVar1;
   iVar1 = mbedtls_mpi_read_string();
   if (iVar1 == 0) {
      iVar1 = mbedtls_mpi_read_string(param_1 + 0x10, param_2, param_4);
      if (iVar1 == 0) {
         mbedtls_mpi_lset(param_1 + 0x20, 1);
         return;
      }

   }

   return;
}
undefined8 mbedtls_ecp_point_write_binary(long param_1, long param_2, uint param_3, ulong *param_4, char *param_5, ulong param_6) {
   ulong uVar1;
   char cVar2;
   int iVar3;
   ulong uVar4;
   undefined8 uVar5;
   char *pcVar6;
   if (1 < param_3) {
      return 0xffffb080;
   }

   uVar4 = mbedtls_mpi_size(param_1 + 8);
   if (*(long*)( param_1 + 0x38 ) == 0) {
      return 0xffffb180;
   }

   if (*(long*)( param_1 + 0x48 ) == 0) {
      *param_4 = uVar4;
      if (param_6 < uVar4) {
         return 0xffffb100;
      }

      uVar5 = mbedtls_mpi_write_binary_le(param_2, param_5, uVar4);
      if ((int)uVar5 != 0) {
         return uVar5;
      }

      if (*(long*)( param_1 + 0x38 ) == 0) {
         return 0;
      }

      if (*(long*)( param_1 + 0x48 ) == 0) {
         return 0;
      }

   }

   iVar3 = mbedtls_mpi_cmp_int(param_2 + 0x20, 0);
   if (iVar3 == 0) {
      if (param_6 != 0) {
         *param_5 = '\0';
         *param_4 = 1;
         return 0;
      }

   }
 else if (param_3 == 0) {
      uVar1 = uVar4 * 2 + 1;
      *param_4 = uVar1;
      if (uVar1 <= param_6) {
         *param_5 = '\x04';
         uVar5 = mbedtls_mpi_write_binary(param_2, param_5 + 1, uVar4);
         if ((int)uVar5 != 0) {
            return uVar5;
         }

         pcVar6 = param_5 + uVar4 + 1;
         param_2 = param_2 + 0x10;
         LAB_0010230d:uVar5 = mbedtls_mpi_write_binary(param_2, pcVar6, uVar4);
         return uVar5;
      }

   }
 else {
      *param_4 = uVar4 + 1;
      if (uVar4 + 1 <= param_6) {
         cVar2 = mbedtls_mpi_get_bit(param_2 + 0x10, 0);
         pcVar6 = param_5 + 1;
         *param_5 = cVar2 + '\x02';
         goto LAB_0010230d;
      }

   }

   return 0xffffb100;
}
ulong mbedtls_ecp_point_read_binary(int *param_1, long param_2, byte *param_3, ulong param_4) {
   int *piVar1;
   ulong uVar2;
   long lVar3;
   byte bVar4;
   uint uVar5;
   int iVar6;
   uint uVar7;
   ulong uVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 == 0) goto LAB_001025e0;
   piVar1 = param_1 + 2;
   uVar8 = mbedtls_mpi_size(piVar1);
   if (*(long*)( param_1 + 0xe ) == 0) {
      LAB_00102568:uVar9 = 0xffffb180;
   }
 else if (*(long*)( param_1 + 0x12 ) == 0) {
      if (param_4 != uVar8) goto LAB_001025e0;
      uVar5 = mbedtls_mpi_read_binary_le(param_2, param_3, param_4);
      uVar9 = (ulong)uVar5;
      if (uVar5 == 0) {
         mbedtls_mpi_free(param_2 + 0x10);
         if (*param_1 == 9) {
            uVar5 = mbedtls_mpi_set_bit(param_2, param_4 * 8 + -1, 0);
            uVar9 = (ulong)uVar5;
            if (uVar5 != 0) goto LAB_00102428;
         }

         uVar5 = mbedtls_mpi_lset(param_2 + 0x20, 1);
         uVar9 = (ulong)uVar5;
         if (( ( uVar5 == 0 ) && ( *(long*)( param_1 + 0xe ) != 0 ) ) && ( *(long*)( param_1 + 0x12 ) != 0 )) goto LAB_001023fc;
      }

   }
 else {
      LAB_001023fc:if (*param_3 == 0) {
         if (param_4 == 1) {
            uVar5 = mbedtls_mpi_lset(param_2, 1);
            uVar9 = (ulong)uVar5;
            if (uVar5 == 0) {
               uVar5 = mbedtls_mpi_lset(param_2 + 0x10, 1);
               uVar9 = (ulong)uVar5;
               if (uVar5 == 0) {
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     uVar8 = mbedtls_mpi_lset(param_2 + 0x20, 0);
                     return uVar8;
                  }

                  goto LAB_00102717;
               }

            }

         }
 else {
            LAB_001025e0:uVar9 = 0xffffb080;
         }

      }
 else {
         uVar2 = uVar8 + 1;
         if (param_4 < uVar2) goto LAB_001025e0;
         uVar5 = mbedtls_mpi_read_binary(param_2, param_3 + 1, uVar8);
         uVar9 = (ulong)uVar5;
         if (uVar5 == 0) {
            uVar5 = mbedtls_mpi_lset(param_2 + 0x20, 1);
            uVar9 = (ulong)uVar5;
            if (uVar5 == 0) {
               bVar4 = *param_3;
               if (bVar4 == 4) {
                  if (uVar8 * 2 + 1 == param_4) {
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        uVar8 = mbedtls_mpi_read_binary(param_2 + 0x10, param_3 + uVar2, uVar8);
                        return uVar8;
                     }

                     goto LAB_00102717;
                  }

               }
 else if (( ( byte )(bVar4 - 2) < 2 ) && ( uVar2 == param_4 )) {
                  lVar3 = param_2 + 0x10;
                  iVar6 = mbedtls_mpi_get_bit(piVar1, 0);
                  if (( iVar6 != 1 ) || ( iVar6 = iVar6 != 1 )) goto LAB_00102568;
                  mbedtls_mpi_init(local_58);
                  uVar5 = mbedtls_mpi_mul_mpi(lVar3, param_2, param_2);
                  if (( uVar5 == 0 ) && ( uVar5 = uVar5 == 0 )) {
                     mul_count = mul_count + 1;
                     uVar5 = ecp_sw_rhs_part_0(param_1, lVar3, param_2);
                     if (( uVar5 == 0 ) && ( ( ( ( uVar5 = mbedtls_mpi_add_int(local_58, piVar1, 1) ),uVar5 == 0 && ( uVar5 = mbedtls_mpi_shift_r(local_58, 2) ),uVar5 == 0 ) ) && ( uVar5 = mbedtls_mpi_exp_mod(lVar3, lVar3, local_58, piVar1, 0) ),uVar5 == 0 )) {
                        uVar5 = mbedtls_mpi_sub_mpi(lVar3, piVar1, lVar3);
                     }

                  }

                  mbedtls_mpi_free(local_58);
                  uVar9 = (ulong)uVar5;
                  goto LAB_00102428;
               }

               goto LAB_001025e0;
            }

         }

      }

   }

   LAB_00102428:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }

   LAB_00102717:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
undefined8 mbedtls_ecp_tls_read_point(undefined8 param_1, undefined8 param_2, long *param_3, ulong param_4) {
   byte *pbVar1;
   byte bVar2;
   byte *pbVar3;
   ulong uVar4;
   undefined8 uVar5;
   if (1 < param_4) {
      pbVar3 = (byte*)*param_3;
      pbVar1 = pbVar3 + 1;
      *param_3 = (long)pbVar1;
      bVar2 = *pbVar3;
      uVar4 = (ulong)bVar2;
      if (( bVar2 != 0 ) && ( uVar4 <= param_4 - 1 )) {
         *param_3 = (long)( pbVar1 + uVar4 );
         uVar5 = mbedtls_ecp_point_read_binary(param_1, param_2, pbVar1, uVar4);
         return uVar5;
      }

   }

   return 0xffffb080;
}
undefined8 mbedtls_ecp_tls_write_point(undefined8 param_1, undefined8 param_2, uint param_3, long *param_4, undefined1 *param_5, long param_6) {
   undefined8 uVar1;
   if (( param_6 != 0 ) && ( param_3 < 2 )) {
      uVar1 = mbedtls_ecp_point_write_binary();
      if ((int)uVar1 == 0) {
         *param_5 = (char)*param_4;
         *param_4 = *param_4 + 1;
      }

      return uVar1;
   }

   return 0xffffb080;
}
undefined8 mbedtls_ecp_tls_read_group_id(undefined4 *param_1, long *param_2, ulong param_3) {
   int *piVar1;
   ushort uVar2;
   char *pcVar3;
   undefined4 *puVar4;
   if (2 < param_3) {
      pcVar3 = (char*)*param_2;
      *param_2 = (long)( pcVar3 + 1 );
      if (*pcVar3 == '\x03') {
         uVar2 = *(ushort*)( pcVar3 + 1 );
         *param_2 = (long)( pcVar3 + 3 );
         puVar4 = &ecp_supported_curves;
         do {
            if (( ushort )(uVar2 << 8 | uVar2 >> 8) == *(ushort*)( puVar4 + 1 )) {
               *param_1 = *puVar4;
               return 0;
            }

            piVar1 = puVar4 + 4;
            puVar4 = puVar4 + 4;
         }
 while ( *piVar1 != 0 );
         return 0xffffb180;
      }

   }

   return 0xffffb080;
}
void mbedtls_ecp_tls_read_group(undefined8 param_1) {
   int iVar1;
   long in_FS_OFFSET;
   undefined4 local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = mbedtls_ecp_tls_read_group_id(&local_14);
   if (iVar1 == 0) {
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         mbedtls_ecp_group_load(param_1, local_14);
         return;
      }

   }
 else if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 mbedtls_ecp_tls_write_group(int *param_1, undefined8 *param_2, undefined1 *param_3, ulong param_4) {
   undefined4 *puVar1;
   int iVar2;
   puVar1 = &ecp_supported_curves;
   iVar2 = 5;
   while (*param_1 != iVar2) {
      iVar2 = puVar1[4];
      puVar1 = puVar1 + 4;
      if (iVar2 == 0) {
         return 0xffffb080;
      }

   }
;
   *param_2 = 3;
   if (2 < param_4) {
      *param_3 = 3;
      *(ushort*)( param_3 + 1 ) = *(ushort*)( puVar1 + 1 ) << 8 | *(ushort*)( puVar1 + 1 ) >> 8;
      return 0;
   }

   return 0xffffb100;
}
uint mbedtls_ecp_check_pubkey(int *param_1, long param_2) {
   long lVar1;
   int iVar2;
   uint uVar3;
   int iVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   undefined1 auStack_58[16];
   undefined1 local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = mbedtls_mpi_cmp_int(param_2 + 0x20, 1);
   if (iVar2 == 0) {
      if (*(long*)( param_1 + 0xe ) == 0) {
         uVar3 = 0xffffb080;
         goto LAB_001029d1;
      }

      if (*(long*)( param_1 + 0x12 ) == 0) {
         uVar5 = mbedtls_mpi_size(param_2);
         if (( uVar5 <= *(long*)( param_1 + 0x20 ) + 7U >> 3 ) && ( iVar2 = -1 < iVar2 )) {
            iVar2 = *param_1;
            param_1 = param_1 + 2;
            mbedtls_mpi_init(local_48);
            uVar3 = mbedtls_mpi_copy(local_48, param_2);
            while (uVar3 == 0) {
               iVar4 = mbedtls_mpi_cmp_mpi(local_48, param_1);
               if (iVar4 < 0) {
                  iVar4 = mbedtls_mpi_cmp_int(local_48, 1);
                  if (( ( iVar4 < 1 ) || ( ( iVar2 == 9 && ( ( iVar2 = mbedtls_mpi_cmp_mpi(local_48, ecp_x25519_bad_point_1) ),iVar2 == 0 || ( iVar2 = mbedtls_mpi_cmp_mpi(local_48, ecp_x25519_bad_point_2) ),iVar2 == 0 ) ) ) )) {
                     uVar3 = 0xffffb380;
                  }

                  break;
               }

               uVar3 = mbedtls_mpi_sub_mpi(local_48, local_48, param_1);
            }
;
            LAB_001029c9:mbedtls_mpi_free(local_48);
            goto LAB_001029d1;
         }

      }
 else {
         iVar2 = mbedtls_mpi_cmp_int(param_2, 0);
         if (-1 < iVar2) {
            lVar1 = param_2 + 0x10;
            iVar2 = mbedtls_mpi_cmp_int(lVar1, 0);
            if (-1 < iVar2) {
               iVar2 = mbedtls_mpi_cmp_mpi(param_2, param_1 + 2);
               if (( iVar2 < 0 ) && ( iVar2 = iVar2 < 0 )) {
                  mbedtls_mpi_init(auStack_58);
                  mbedtls_mpi_init(local_48);
                  uVar3 = mbedtls_mpi_mul_mpi(auStack_58, lVar1, lVar1);
                  if (( uVar3 == 0 ) && ( uVar3 = uVar3 == 0 )) {
                     mul_count = mul_count + 1;
                     uVar3 = mbedtls_mpi_mul_mpi(local_48, param_2, param_2);
                     if (( uVar3 == 0 ) && ( uVar3 = uVar3 == 0 )) {
                        mul_count = mul_count + 1;
                        uVar3 = ecp_sw_rhs_part_0(param_1, local_48, param_2);
                        if (uVar3 == 0) {
                           iVar2 = mbedtls_mpi_cmp_mpi(auStack_58, local_48);
                           uVar3 = -(uint)(iVar2 != 0) & 0xffffb380;
                        }

                     }

                  }

                  mbedtls_mpi_free(auStack_58);
                  goto LAB_001029c9;
               }

            }

         }

      }

   }

   uVar3 = 0xffffb380;
   LAB_001029d1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 mbedtls_ecp_check_privkey(long param_1, undefined8 param_2) {
   int iVar1;
   long lVar2;
   if (*(long*)( param_1 + 0x38 ) == 0) {
      return 0xffffb080;
   }

   if (*(long*)( param_1 + 0x48 ) == 0) {
      iVar1 = mbedtls_mpi_get_bit(param_2, 0);
      if (( iVar1 == 0 ) && ( iVar1 = iVar1 == 0 )) {
         lVar2 = mbedtls_mpi_bitlen(param_2);
         if (lVar2 == *(long*)( param_1 + 0x80 ) + 1) {
            if (*(long*)( param_1 + 0x80 ) != 0xfe) {
               return 0;
            }

            iVar1 = mbedtls_mpi_get_bit(param_2, 2);
            if (iVar1 == 0) {
               return 0;
            }

         }

      }

   }
 else {
      iVar1 = mbedtls_mpi_cmp_int(param_2, 1);
      if (( -1 < iVar1 ) && ( iVar1 = iVar1 < 0 )) {
         return 0;
      }

   }

   return 0xffffb380;
}
int ecp_mul_restartable_internal_isra_0(long param_1, long param_2, undefined8 param_3, long param_4, long param_5, undefined8 param_6) {
   long lVar1;
   bool bVar2;
   byte bVar3;
   byte bVar4;
   undefined1 uVar5;
   int iVar6;
   int iVar7;
   uint uVar8;
   int iVar9;
   void *__ptr;
   long lVar10;
   byte bVar11;
   undefined8 *puVar12;
   void *pvVar13;
   undefined1 *puVar14;
   undefined1 *puVar15;
   undefined1 *puVar16;
   long lVar17;
   ulong uVar18;
   uint uVar19;
   ulong uVar20;
   ulong uVar21;
   void *pvVar22;
   long in_FS_OFFSET;
   ulong local_148;
   size_t local_140;
   long local_138;
   undefined1 local_108[16];
   undefined1 local_f8[16];
   undefined1 local_e8[16];
   undefined1 local_d8[8];
   undefined8 uStack_d0;
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   undefined1 local_a8[16];
   undefined8 local_98;
   undefined1 local_88[8];
   short local_80;
   undefined1 local_78[8];
   short local_70;
   undefined1 local_68[16];
   undefined1 local_58[8];
   short local_50;
   undefined1 local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar6 = mbedtls_ecp_check_privkey(param_1, param_3);
   if (( iVar6 != 0 ) || ( iVar7 = mbedtls_ecp_check_pubkey(param_1, param_4) ),iVar6 = iVar7,iVar7 != 0) goto LAB_00102cb1;
   if (*(long*)( param_1 + 0x38 ) == 0) {
      LAB_001030b0:iVar6 = -0x4f80;
      goto LAB_00102cb1;
   }

   if (*(long*)( param_1 + 0x48 ) == 0) {
      mbedtls_mpi_init(local_f8);
      mbedtls_mpi_init(local_e8);
      mbedtls_mpi_init(local_d8);
      mbedtls_mpi_init();
      puVar15 = local_88;
      do {
         puVar16 = puVar15 + 0x10;
         mbedtls_mpi_init(puVar15);
         puVar15 = puVar16;
      }
 while ( puVar16 != local_48 );
      if (param_5 == 0) goto LAB_001030b0;
      iVar6 = mbedtls_mpi_copy(local_108, param_4);
      if (( ( ( iVar6 == 0 ) && ( iVar6 = mbedtls_mpi_copy(local_f8, param_4) ),iVar6 == 0 ) ) && ( iVar6 = iVar6 == 0 )) {
         lVar1 = param_2 + 0x20;
         iVar6 = mbedtls_mpi_lset(lVar1, 0);
         if (iVar6 == 0) {
            lVar10 = param_1 + 8;
            mbedtls_mpi_free(param_2 + 0x10);
            do {
               iVar6 = mbedtls_mpi_cmp_mpi(local_f8, lVar10);
               if (iVar6 < 0) {
                  iVar6 = ecp_randomize_mxz(param_1, local_f8, param_5);
                  if (iVar6 == 0) {
                     local_138 = *(long*)( param_1 + 0x80 );
                     goto LAB_001033f2;
                  }

                  break;
               }

               iVar6 = mbedtls_mpi_sub_abs(local_f8, local_f8, lVar10);
            }
 while ( iVar6 == 0 );
         }

      }

      LAB_001037f8:mbedtls_mpi_free(local_f8);
      mbedtls_mpi_free(local_e8);
      mbedtls_mpi_free(local_d8);
      mbedtls_mpi_free(local_108);
      puVar15 = local_88;
      do {
         puVar16 = puVar15 + 0x10;
         mbedtls_mpi_free(puVar15);
         puVar15 = puVar16;
      }
 while ( puVar16 != local_48 );
      if (( ( iVar6 != 0 ) || ( iVar6 = iVar7 * (long*)( param_1 + 0x38 ) == 0 ) ) || ( *(long*)( param_1 + 0x48 ) == 0 )) goto LAB_00102cb1;
   }

   iVar6 = mbedtls_mpi_cmp_mpi(param_4 + 0x10, param_1 + 0x48);
   if (iVar6 == 0) {
      iVar6 = mbedtls_mpi_cmp_mpi();
      uVar18 = *(ulong*)( param_1 + 0x80 );
      if (iVar6 != 0) goto joined_r0x00102eff;
      __ptr = *(void**)( param_1 + 0xb0 );
      if (0x17f < uVar18) {
         if (__ptr == (void*)0x0) {
            bVar3 = 8;
            bVar4 = 4;
            uVar20 = uVar18 + 3 >> 2;
            uVar8 = 8;
            iVar6 = 3;
            goto LAB_00102d91;
         }

         bVar2 = true;
         uVar20 = ( ulong )(-(uint)(*(long *)(param_1 + 0xb8) == 0) & 2) + 4;
         bVar4 = ( -(*(long *)(param_1 + 0xb8) == 0) & 2U ) + 4;
         goto LAB_00102d58;
      }

      if (__ptr == (void*)0x0) {
         uVar20 = 4;
         bVar4 = 4;
      }
 else {
         uVar20 = 5 - ( ulong )(*(long*)( param_1 + 0xb8 ) != 0);
         bVar4 = 5 - ( *(long*)( param_1 + 0xb8 ) != 0 );
      }

      bVar2 = true;
      if (uVar20 < uVar18) goto LAB_00102d58;
      bVar3 = 2;
      bVar4 = 2;
      uVar20 = uVar18 + 1 >> 1;
      uVar8 = 2;
      iVar6 = 1;
      LAB_00102d91:if (__ptr == (void*)0x0) {
         local_140 = (size_t)uVar8;
         bVar2 = true;
         goto LAB_00102f3e;
      }

      LAB_00102d9a:iVar9 = ecp_mul_comb_after_precomp_isra_0(param_1, param_2, param_3, __ptr, uVar8, bVar4, uVar20, param_5, param_6);
      if (*(void**)( param_1 + 0xb0 ) != __ptr) {
         local_148 = (ulong)bVar3;
         LAB_00102de9:pvVar13 = __ptr;
         do {
            mbedtls_mpi_free(pvVar13);
            mbedtls_mpi_free((long)pvVar13 + 0x10);
            lVar1 = (long)pvVar13 + 0x20;
            pvVar13 = (void*)( (long)pvVar13 + 0x30 );
            mbedtls_mpi_free(lVar1);
         }
 while ( (void*)( local_148 * 0x30 + (long)__ptr ) != pvVar13 );
         free(__ptr);
      }

      iVar6 = iVar7;
      if (iVar9 == 0) goto LAB_00102cb1;
   }
 else {
      uVar18 = *(ulong*)( param_1 + 0x80 );
      joined_r0x00102eff:if (uVar18 < 0x180) {
         if (uVar18 < 5) {
            bVar3 = 2;
            bVar4 = 2;
            uVar20 = uVar18 + 1 >> 1;
            uVar8 = 2;
            iVar6 = 1;
         }
 else {
            bVar2 = false;
            uVar20 = 4;
            bVar4 = 4;
            LAB_00102d58:iVar6 = bVar4 - 1;
            uVar8 = 1 << ( (byte)iVar6 & 0x1f );
            bVar3 = (byte)uVar8;
            uVar20 = ( ( uVar18 - 1 ) + uVar20 ) / uVar20;
            if (bVar2) {
               __ptr = *(void**)( param_1 + 0xb0 );
               goto LAB_00102d91;
            }

         }

         local_140 = (size_t)uVar8;
         bVar2 = false;
      }
 else {
         bVar2 = false;
         local_140 = 8;
         uVar20 = uVar18 + 3 >> 2;
         bVar3 = 8;
         uVar8 = 8;
         iVar6 = 3;
         bVar4 = 4;
      }

      LAB_00102f3e:__ptr = calloc(local_140, 0x30);
      if (__ptr != (void*)0x0) {
         local_148 = (ulong)bVar3;
         pvVar13 = __ptr;
         do {
            mbedtls_mpi_init(pvVar13);
            mbedtls_mpi_init((long)pvVar13 + 0x10);
            lVar1 = (long)pvVar13 + 0x20;
            pvVar13 = (void*)( (long)pvVar13 + 0x30 );
            mbedtls_mpi_init(lVar1);
         }
 while ( pvVar13 != (void*)( (long)__ptr + local_148 * 0x30 ) );
         puVar15 = local_88;
         local_98 = 0;
         local_c8 = (undefined1[16])0x0;
         local_b8 = (undefined1[16])0x0;
         local_a8 = (undefined1[16])0x0;
         puVar16 = puVar15;
         do {
            puVar14 = puVar16 + 0x10;
            mbedtls_mpi_init(puVar16);
            puVar16 = puVar14;
         }
 while ( puVar14 != local_48 );
         iVar9 = mbedtls_mpi_copy(__ptr, param_4);
         if (( iVar9 == 0 ) && ( iVar9 = iVar9 == 0 )) {
            lVar1 = (long)__ptr + 0x20;
            iVar9 = mbedtls_mpi_copy(lVar1, param_4 + 0x20);
            if (iVar9 == 0) {
               uVar18 = 0;
               if ((long)iVar6 * uVar20 != 0) {
                  do {
                     uVar19 = 1 << ( ( byte )(uVar18 / uVar20) & 0x1f );
                     pvVar13 = (void*)( (long)__ptr + ( ulong )(uVar19 & 0xff) * 0x30 );
                     if (uVar18 % uVar20 == 0) {
                        pvVar22 = (void*)( ( ulong )(byte)((byte)uVar19 >> 1) * 0x30 + (long)__ptr );
                        iVar9 = mbedtls_mpi_copy(pvVar13, pvVar22);
                        if (( ( iVar9 != 0 ) || ( iVar9 = mbedtls_mpi_copy((long)pvVar13 + 0x10, (long)pvVar22 + 0x10) ),iVar9 != 0 )) goto LAB_00103060;
                     }

                     iVar9 = ecp_double_jac(param_1, pvVar13, pvVar13);
                     if (iVar9 != 0) goto LAB_00103060;
                     uVar18 = uVar18 + 1;
                  }
 while ( (long)iVar6 * uVar20 != uVar18 );
               }

               lVar10 = 0;
               bVar11 = 1;
               do {
                  uVar18 = (ulong)bVar11;
                  lVar10 = lVar10 + 1;
                  bVar11 = bVar11 * '\x02';
                  ( &uStack_d0 )[lVar10] = (void*)( uVar18 * 0x30 + (long)__ptr );
               }
 while ( bVar11 < bVar3 );
               iVar9 = ecp_normalize_jac_many(param_1, local_c8, lVar10);
               if (iVar9 == 0) {
                  bVar11 = 1;
                  do {
                     uVar21 = (ulong)bVar11;
                     lVar10 = (long)__ptr + uVar21 * 0x60 + -0x30;
                     uVar18 = uVar21;
                     while (uVar18 = uVar18 - 1,uVar18 != 0xffffffffffffffff) {
                        iVar9 = ecp_add_mixed(param_1, lVar10, lVar10 + uVar21 * -0x30, (void*)( (long)__ptr + uVar21 * 0x30 ), puVar15);
                        lVar10 = lVar10 + -0x30;
                        if (iVar9 != 0) goto LAB_00103060;
                     }
;
                     bVar11 = bVar11 * '\x02';
                  }
 while ( bVar11 < bVar3 );
                  pvVar13 = (void*)( (long)__ptr + 0x30 );
                  puVar12 = (undefined8*)local_c8;
                  do {
                     *puVar12 = pvVar13;
                     pvVar13 = (void*)( (long)pvVar13 + 0x30 );
                     puVar12 = puVar12 + 1;
                  }
 while ( pvVar13 != (void*)( local_140 * 0x30 + (long)__ptr ) );
                  iVar9 = ecp_normalize_jac_many(param_1, local_c8, local_140 - 1);
                  if (iVar9 == 0) {
                     lVar10 = lVar1;
                     do {
                        lVar17 = lVar10 + 0x30;
                        mbedtls_mpi_free(lVar10);
                        lVar10 = lVar17;
                     }
 while ( lVar17 != local_148 * 0x30 + lVar1 );
                  }

               }

            }

         }

         LAB_00103060:do {
            puVar16 = puVar15 + 0x10;
            mbedtls_mpi_free(puVar15);
            puVar15 = puVar16;
         }
 while ( puVar16 != local_48 );
         if (iVar9 == 0) {
            if (bVar2) {
               *(void**)( param_1 + 0xb0 ) = __ptr;
               *(size_t*)( param_1 + 0xb8 ) = local_140;
            }

            goto LAB_00102d9a;
         }

         if (__ptr == *(void**)( param_1 + 0xb0 )) goto LAB_00102e4c;
         goto LAB_00102de9;
      }

      iVar9 = -0x4d80;
   }

   LAB_00102e4c:iVar6 = iVar9;
   if (param_2 != 0) {
      mbedtls_mpi_free(param_2);
      mbedtls_mpi_free(param_2 + 0x10);
      mbedtls_mpi_free(param_2 + 0x20);
   }

   LAB_00102cb1:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar6;
   LAB_001033f2:if (local_138 == -1) {
      iVar6 = ecp_randomize_mxz(param_1, param_2, param_5);
      if (( ( iVar6 == 0 ) && ( iVar6 = mbedtls_mpi_inv_mod(lVar1, lVar1, lVar10) ),iVar6 == 0 )) {
         iVar6 = mbedtls_mpi_lset(lVar1, 1);
      }

      goto LAB_001037f8;
   }

   uVar5 = mbedtls_mpi_get_bit(param_3, local_138);
   iVar6 = mbedtls_mpi_safe_cond_swap(param_2, local_f8, uVar5);
   if (( iVar6 != 0 ) || ( iVar6 = iVar6 != 0 )) goto LAB_001037f8;
   iVar6 = mbedtls_mpi_add_mpi(local_88, param_2, lVar1);
   while (true) {
      if (iVar6 != 0) goto LAB_001037f8;
      iVar6 = mbedtls_mpi_cmp_mpi(local_88, lVar10);
      if (iVar6 < 0) break;
      iVar6 = mbedtls_mpi_sub_abs(local_88, local_88, lVar10);
   }
;
   iVar6 = mbedtls_mpi_sub_mpi(local_78, param_2, lVar1);
   while (true) {
      if (iVar6 != 0) goto LAB_001037f8;
      if (( -1 < local_70 ) || ( iVar6 = iVar6 == 0 )) break;
      iVar6 = mbedtls_mpi_add_mpi(local_78, local_78, lVar10);
   }
;
   iVar6 = mbedtls_mpi_add_mpi(local_68, local_f8, local_d8);
   while (true) {
      if (iVar6 != 0) goto LAB_001037f8;
      iVar6 = mbedtls_mpi_cmp_mpi(local_68, lVar10);
      if (iVar6 < 0) break;
      iVar6 = mbedtls_mpi_sub_abs(local_68, local_68, lVar10);
   }
;
   iVar6 = mbedtls_mpi_sub_mpi(local_58, local_f8, local_d8);
   while (true) {
      if (iVar6 != 0) goto LAB_001037f8;
      if (( -1 < local_50 ) || ( iVar6 = iVar6 == 0 )) break;
      iVar6 = mbedtls_mpi_add_mpi(local_58, local_58, lVar10);
   }
;
   iVar6 = mbedtls_mpi_mul_mpi(local_58, local_58, local_88);
   if (( iVar6 != 0 ) || ( iVar6 = iVar6 != 0 )) goto LAB_001037f8;
   mul_count = mul_count + 1;
   iVar6 = mbedtls_mpi_mul_mpi(local_68, local_68, local_78);
   if (( iVar6 != 0 ) || ( iVar6 = iVar6 != 0 )) goto LAB_001037f8;
   mul_count = mul_count + 1;
   iVar6 = mbedtls_mpi_mul_mpi(local_88, local_88, local_88);
   if (( iVar6 != 0 ) || ( iVar6 = iVar6 != 0 )) goto LAB_001037f8;
   mul_count = mul_count + 1;
   iVar6 = mbedtls_mpi_mul_mpi(local_78, local_78, local_78);
   if (( iVar6 != 0 ) || ( iVar6 = iVar6 != 0 )) goto LAB_001037f8;
   mul_count = mul_count + 1;
   iVar6 = mbedtls_mpi_mul_mpi(param_2, local_88, local_78);
   if (( iVar6 != 0 ) || ( iVar6 = iVar6 != 0 )) goto LAB_001037f8;
   mul_count = mul_count + 1;
   iVar6 = mbedtls_mpi_sub_mpi(local_88, local_88, local_78);
   while (true) {
      if (iVar6 != 0) goto LAB_001037f8;
      if (( -1 < local_80 ) || ( iVar6 = iVar6 == 0 )) break;
      iVar6 = mbedtls_mpi_add_mpi(local_88, local_88, lVar10);
   }
;
   iVar6 = mbedtls_mpi_mul_mod(param_1, lVar1, param_1 + 0x18);
   if (( ( ( iVar6 != 0 ) || ( iVar6 = mbedtls_mpi_add_mod(param_1, lVar1, local_78) ),iVar6 != 0 ) ) || ( iVar6 = iVar6 != 0 )) ( ( ( ( iVar6 = mbedtls_mpi_mul_mod(param_1, local_f8, local_f8) ),iVar6 != 0 || ( iVar6 = mbedtls_mpi_sub_mod(param_1, local_d8, local_58) ),iVar6 != 0 ) ) || ( ( iVar6 = mbedtls_mpi_mul_mod(param_1, local_d8, local_d8) ),iVar6 != 0 || ( ( iVar6 = mbedtls_mpi_mul_mod(param_1, local_d8, local_108) ),iVar6 != 0 || ( iVar6 = mbedtls_mpi_mul_mod(param_1, lVar1, local_88) ),iVar6 != 0 ) ) ) || ( iVar6 = iVar6 != 0 );
   iVar6 = mbedtls_mpi_safe_cond_swap(lVar1, local_d8, uVar5);
   local_138 = local_138 + -1;
   if (iVar6 != 0) goto LAB_001037f8;
   goto LAB_001033f2;
}
int mbedtls_ecp_mul_shortcuts_isra_0(long param_1, long param_2, undefined8 param_3, long param_4) {
   long lVar1;
   int iVar2;
   int iVar3;
   long in_FS_OFFSET;
   undefined1 auStack_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_mpi_init(auStack_58);
   iVar2 = mbedtls_mpi_cmp_int(param_3, 0);
   if (iVar2 == 0) {
      iVar2 = mbedtls_ecp_check_pubkey(param_1, param_4);
      if (iVar2 == 0) {
         iVar2 = mbedtls_mpi_lset(param_2, 1);
         if (iVar2 == 0) {
            iVar2 = mbedtls_mpi_lset(param_2 + 0x10, 1);
            if (iVar2 == 0) {
               iVar2 = mbedtls_mpi_lset(param_2 + 0x20, 0);
            }

         }

      }

   }
 else {
      iVar2 = mbedtls_mpi_cmp_int(param_3, 1);
      if (iVar2 == 0) {
         iVar2 = mbedtls_ecp_check_pubkey(param_1, param_4);
         if (iVar2 == 0) {
            iVar2 = mbedtls_mpi_copy(param_2, param_4);
            if (iVar2 == 0) {
               iVar2 = mbedtls_mpi_copy(param_2 + 0x10, param_4 + 0x10);
               if (iVar2 == 0) {
                  iVar2 = mbedtls_mpi_copy(param_2 + 0x20, param_4 + 0x20);
               }

            }

         }

      }
 else {
         iVar2 = mbedtls_mpi_cmp_int(param_3, 0xffffffffffffffff);
         if (iVar2 == 0) {
            iVar2 = mbedtls_ecp_check_pubkey(param_1, param_4);
            if (iVar2 == 0) {
               iVar2 = mbedtls_mpi_copy(param_2, param_4);
               if (iVar2 == 0) {
                  lVar1 = param_2 + 0x10;
                  iVar2 = mbedtls_mpi_copy(lVar1, param_4 + 0x10);
                  if (iVar2 == 0) {
                     iVar2 = mbedtls_mpi_copy(param_2 + 0x20, param_4 + 0x20);
                     if (iVar2 == 0) {
                        iVar3 = mbedtls_mpi_cmp_int(lVar1, 0);
                        iVar2 = mbedtls_mpi_sub_mpi(auStack_58, param_1 + 8, lVar1);
                        if (iVar2 == 0) {
                           iVar2 = mbedtls_mpi_safe_cond_assign(lVar1, auStack_58, iVar3 != 0);
                        }

                     }

                  }

               }

            }

         }
 else {
            iVar2 = ecp_mul_restartable_internal_isra_0(param_1, param_2, param_3, param_4, 0, 0);
         }

      }

   }

   mbedtls_mpi_free(auStack_58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_ecp_muladd_restartable(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   int iVar1;
   undefined1 *puVar2;
   undefined1 *puVar3;
   undefined1 *puVar4;
   long in_FS_OFFSET;
   undefined1 local_b8[16];
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined1 local_88[64];
   undefined1 local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_1 + 0x38 ) == 0 ) || ( *(long*)( param_1 + 0x48 ) == 0 )) {
      iVar1 = -0x4e80;
   }
 else {
      puVar2 = local_88;
      mbedtls_mpi_init(local_b8);
      mbedtls_mpi_init(local_a8);
      mbedtls_mpi_init(local_98);
      puVar3 = puVar2;
      do {
         puVar4 = puVar3 + 0x10;
         mbedtls_mpi_init(puVar3);
         puVar3 = puVar4;
      }
 while ( puVar4 != local_48 );
      iVar1 = mbedtls_ecp_mul_shortcuts_isra_0(param_1, local_b8, param_3, param_4);
      if (iVar1 == 0) {
         iVar1 = mbedtls_ecp_mul_shortcuts_isra_0(param_1, param_2, param_5, param_6);
         if (iVar1 == 0) {
            iVar1 = ecp_add_mixed(param_1, param_2, local_b8, param_2, puVar2);
            if (iVar1 == 0) {
               iVar1 = ecp_normalize_jac(param_1, param_2);
            }

         }

      }

      do {
         puVar3 = puVar2 + 0x10;
         mbedtls_mpi_free(puVar2);
         puVar2 = puVar3;
      }
 while ( puVar3 != local_48 );
      mbedtls_mpi_free(local_b8);
      mbedtls_mpi_free(local_a8);
      mbedtls_mpi_free(local_98);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void mbedtls_ecp_muladd(void) {
   mbedtls_ecp_muladd_restartable();
   return;
}
int self_test_point_constprop_0(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 *param_6) {
   long lVar1;
   long lVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   add_count = 0;
   dbl_count = 0;
   mul_count = 0;
   iVar4 = mbedtls_mpi_read_string(param_4, 0x10, *param_6);
   if (( iVar4 == 0 ) && ( iVar4 = ecp_mul_restartable_internal_isra_0(param_2, param_3, param_4, param_5, 0x100000, 0) ),lVar3 = add_count,lVar2 = dbl_count,lVar1 = mul_count,iVar4 == 0) {
      uVar5 = 1;
      do {
         add_count = 0;
         dbl_count = 0;
         mul_count = 0;
         iVar4 = mbedtls_mpi_read_string(param_4, 0x10, param_6[uVar5]);
         if (( iVar4 != 0 ) || ( iVar4 = ecp_mul_restartable_internal_isra_0(param_2, param_3, param_4, param_5, 0x100000, 0) ),iVar4 != 0) {
            LAB_001040cc:if (param_1 == 0) {
               return iVar4;
            }

            uVar5 = uVar5 & 0xffffffff;
            goto LAB_00103fb2;
         }

         if (( add_count != lVar3 ) || ( ( dbl_count != lVar2 || ( mul_count != lVar1 ) ) )) {
            iVar4 = 1;
            goto LAB_001040cc;
         }

         uVar5 = uVar5 + 1;
      }
 while ( uVar5 != 6 );
      iVar4 = 0;
      if (param_1 != 0) {
         puts("passed");
         iVar4 = 0;
      }

   }
 else if (param_1 != 0) {
      uVar5 = 0;
      LAB_00103fb2:__printf_chk(2, "failed (%u)\n", uVar5);
   }

   return iVar4;
}
undefined8 mbedtls_ecp_mul(void) {
   undefined8 uVar1;
   long in_R8;
   if (in_R8 != 0) {
      uVar1 = ecp_mul_restartable_internal_isra_0();
      return uVar1;
   }

   return 0xffffb080;
}
undefined8 mbedtls_ecp_mul_restartable(void) {
   undefined8 uVar1;
   long in_R8;
   if (in_R8 != 0) {
      uVar1 = ecp_mul_restartable_internal_isra_0();
      return uVar1;
   }

   return 0xffffb080;
}
undefined8 mbedtls_ecp_gen_privkey(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   ulong uVar1;
   undefined8 uVar2;
   long lVar3;
   if (*(long*)( param_1 + 0x38 ) == 0) {
      return 0xffffb080;
   }

   if (*(long*)( param_1 + 0x48 ) == 0) {
      uVar1 = *(ulong*)( param_1 + 0x80 );
      lVar3 = ( uVar1 >> 3 ) + 1;
      uVar2 = mbedtls_mpi_fill_random(param_2, lVar3, param_3, param_4, param_4);
      if ((int)uVar2 == 0) {
         uVar2 = mbedtls_mpi_shift_r(param_2, ~uVar1 + lVar3 * 8);
         if ((int)uVar2 == 0) {
            uVar2 = mbedtls_mpi_set_bit(param_2, uVar1, 1);
            if ((int)uVar2 == 0) {
               uVar2 = mbedtls_mpi_set_bit(param_2, 0, 0);
               if ((int)uVar2 == 0) {
                  uVar2 = mbedtls_mpi_set_bit(param_2, 1, 0);
                  if (( (int)uVar2 == 0 ) && ( uVar1 == 0xfe )) {
                     uVar2 = mbedtls_mpi_set_bit(param_2, 2, 0);
                     return uVar2;
                  }

               }

            }

         }

      }

   }
 else {
      uVar2 = mbedtls_mpi_random(param_2, 1, param_1 + 0x68, param_3);
      if ((int)uVar2 == -0xe) {
         uVar2 = 0xffffb300;
      }

   }

   return uVar2;
}
undefined8 mbedtls_ecp_gen_keypair_base(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long param_5, undefined8 param_6) {
   undefined8 uVar1;
   uVar1 = mbedtls_ecp_gen_privkey(param_1, param_3, param_5, param_6);
   if ((int)uVar1 == 0) {
      if (param_5 != 0) {
         uVar1 = ecp_mul_restartable_internal_isra_0(param_1, param_4, param_3, param_2, param_5, param_6);
         return uVar1;
      }

      uVar1 = 0xffffb080;
   }

   return uVar1;
}
undefined8 mbedtls_ecp_gen_keypair(long param_1, undefined8 param_2, undefined8 param_3, long param_4, undefined8 param_5) {
   undefined8 uVar1;
   uVar1 = mbedtls_ecp_gen_privkey(param_1, param_2, param_4, param_5);
   if ((int)uVar1 == 0) {
      if (param_4 != 0) {
         uVar1 = ecp_mul_restartable_internal_isra_0(param_1, param_3, param_2, param_1 + 0x38, param_4, param_5);
         return uVar1;
      }

      uVar1 = 0xffffb080;
   }

   return uVar1;
}
undefined8 mbedtls_ecp_gen_key(undefined4 param_1, long param_2, long param_3, undefined8 param_4) {
   undefined8 uVar1;
   uVar1 = mbedtls_ecp_group_load(param_2, param_1);
   if ((int)uVar1 == 0) {
      uVar1 = mbedtls_ecp_gen_privkey(param_2, param_2 + 0xc0, param_3, param_4);
      if ((int)uVar1 == 0) {
         if (param_3 != 0) {
            uVar1 = ecp_mul_restartable_internal_isra_0(param_2, param_2 + 0xd0, param_2 + 0xc0, param_2 + 0x38, param_3, param_4);
            return uVar1;
         }

         uVar1 = 0xffffb080;
      }

   }

   return uVar1;
}
undefined8 mbedtls_ecp_set_public_key(int param_1, int *param_2, long param_3) {
   undefined8 uVar1;
   if (*param_2 == 0) {
      uVar1 = mbedtls_ecp_group_load(param_2, param_1);
      if ((int)uVar1 != 0) {
         return uVar1;
      }

   }
 else if (*param_2 != param_1) {
      return 0xffffb080;
   }

   uVar1 = mbedtls_mpi_copy(param_2 + 0x34, param_3);
   if (( (int)uVar1 == 0 ) && ( uVar1 = mbedtls_mpi_copy(param_2 + 0x38, param_3 + 0x10) ),(int)uVar1 == 0) {
      uVar1 = mbedtls_mpi_copy(param_2 + 0x3c, param_3 + 0x20);
      return uVar1;
   }

   return uVar1;
}
ulong mbedtls_ecp_read_key(int param_1, long param_2, undefined8 param_3, long param_4) {
   long lVar1;
   int iVar2;
   ulong uVar3;
   uVar3 = mbedtls_ecp_group_load(param_2, param_1);
   if ((int)uVar3 != 0) {
      return uVar3;
   }

   if (*(long*)( param_2 + 0x38 ) == 0) {
      uVar3 = 0xffffb180;
      goto LAB_001044cc;
   }

   if (*(long*)( param_2 + 0x48 ) == 0) {
      if (param_1 == 9) {
         if (param_4 != 0x20) {
            return 0xffffb380;
         }

         lVar1 = param_2 + 0xc0;
         uVar3 = mbedtls_mpi_read_binary_le(lVar1, param_3, 0x20);
         if (( ( ( (int)uVar3 != 0 ) || ( uVar3 = mbedtls_mpi_set_bit(lVar1, 0, 0) ),(int)uVar3 != 0 ) ) || ( uVar3 = mbedtls_mpi_set_bit(lVar1, 1, 0) ),(int)uVar3 != 0) goto LAB_001044cc;
         uVar3 = mbedtls_mpi_set_bit(lVar1, 0xfe, 1);
         iVar2 = (int)uVar3;
      }
 else {
         uVar3 = 0xffffb180;
         lVar1 = param_2 + 0xc0;
         if (param_1 != 0xd) goto LAB_001044cc;
         if (param_4 != 0x38) {
            return 0xffffb380;
         }

         uVar3 = mbedtls_mpi_read_binary_le(lVar1, param_3, 0x38);
         if (( ( (int)uVar3 != 0 ) || ( uVar3 = mbedtls_mpi_set_bit(lVar1, 0, 0) ),(int)uVar3 != 0 )) goto LAB_001044cc;
         uVar3 = mbedtls_mpi_set_bit(lVar1, 0x1bf, 1);
         iVar2 = (int)uVar3;
      }

      if (iVar2 != 0) goto LAB_001044cc;
      if (( *(long*)( param_2 + 0x38 ) != 0 ) && ( *(long*)( param_2 + 0x48 ) != 0 )) goto LAB_00104490;
   }
 else {
      LAB_00104490:uVar3 = mbedtls_mpi_read_binary(param_2 + 0xc0, param_3, param_4);
      if ((int)uVar3 != 0) goto LAB_001044cc;
   }

   uVar3 = mbedtls_ecp_check_privkey(param_2, param_2 + 0xc0);
   if ((int)uVar3 == 0) {
      return uVar3;
   }

   LAB_001044cc:mbedtls_mpi_free(param_2 + 0xc0);
   return uVar3 & 0xffffffff;
}
undefined8 mbedtls_ecp_write_key_ext(long param_1, ulong *param_2, undefined8 param_3, ulong param_4) {
   short sVar1;
   undefined8 uVar2;
   ulong uVar3;
   uVar3 = *(long*)( param_1 + 0x80 ) + 7U >> 3;
   if (param_4 < uVar3) {
      *param_2 = 0;
      return 0xffffb100;
   }

   sVar1 = *(short*)( param_1 + 0xca );
   *param_2 = uVar3;
   if (sVar1 == 0) {
      return 0xffffb080;
   }

   if (*(long*)( param_1 + 0x38 ) == 0) {
      return 0xffffff92;
   }

   if (*(long*)( param_1 + 0x48 ) != 0) {
      uVar2 = mbedtls_mpi_write_binary(param_1 + 0xc0, param_3);
      return uVar2;
   }

   uVar2 = mbedtls_mpi_write_binary_le(param_1 + 0xc0, param_3);
   return uVar2;
}
void mbedtls_ecp_write_public_key(long param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   mbedtls_ecp_point_write_binary(param_1, param_1 + 0xd0, param_2, param_3, param_4, param_5);
   return;
}
int mbedtls_ecp_check_pub_priv(int *param_1, int *param_2, long param_3, undefined8 param_4) {
   int iVar1;
   long in_FS_OFFSET;
   undefined1 local_138[16];
   undefined1 local_128[16];
   undefined1 local_118[16];
   undefined1 local_108[200];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *param_1 != 0 ) && ( *param_1 == *param_2 )) {
      iVar1 = mbedtls_mpi_cmp_mpi(param_1 + 0x34, param_2 + 0x34);
      if (iVar1 == 0) {
         iVar1 = mbedtls_mpi_cmp_mpi(param_1 + 0x38, param_2 + 0x38);
         if (iVar1 == 0) {
            iVar1 = mbedtls_mpi_cmp_mpi(param_1 + 0x3c, param_2 + 0x3c);
            if (iVar1 == 0) {
               mbedtls_mpi_init(local_138);
               mbedtls_mpi_init(local_128);
               mbedtls_mpi_init(local_118);
               mbedtls_ecp_group_init(local_108);
               mbedtls_ecp_group_load(local_108, *param_2);
               if (( param_3 == 0 ) || ( ( iVar1 = ecp_mul_restartable_internal_isra_0(local_108, local_138, param_2 + 0x30, param_2 + 0xe, param_3, param_4) ),iVar1 == 0 && ( ( ( iVar1 = mbedtls_mpi_cmp_mpi(local_138, param_2 + 0x34) ),iVar1 != 0 || ( iVar1 = mbedtls_mpi_cmp_mpi(local_128, param_2 + 0x38) ),iVar1 != 0 ) ) || ( iVar1 = mbedtls_mpi_cmp_mpi(local_118, param_2 + 0x3c) ),iVar1 != 0 )) {
                  iVar1 = -0x4f80;
               }

               mbedtls_mpi_free(local_138);
               mbedtls_mpi_free(local_128);
               mbedtls_mpi_free(local_118);
               mbedtls_ecp_group_free(local_108);
               goto LAB_0010481a;
            }

         }

      }

   }

   iVar1 = -0x4f80;
   LAB_0010481a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
undefined8 mbedtls_ecp_keypair_calc_public(long param_1, long param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (param_2 != 0) {
      uVar1 = ecp_mul_restartable_internal_isra_0(param_1, param_1 + 0xd0, param_1 + 0xc0, param_1 + 0x38, param_2, param_3);
      return uVar1;
   }

   return 0xffffb080;
}
undefined4 mbedtls_ecp_keypair_get_group_id(undefined4 *param_1) {
   return *param_1;
}
undefined8 mbedtls_ecp_export(undefined4 *param_1, long param_2, long param_3, long param_4) {
   undefined8 uVar1;
   if (( param_2 != 0 ) && ( uVar1 = mbedtls_ecp_group_load(param_2, *param_1) ),(int)uVar1 != 0) {
      return uVar1;
   }

   if (( param_3 != 0 ) && ( uVar1 = mbedtls_mpi_copy(param_3, param_1 + 0x30) ),(int)uVar1 != 0) {
      return uVar1;
   }

   uVar1 = 0;
   if (( ( param_4 != 0 ) && ( uVar1 = mbedtls_mpi_copy(param_4, param_1 + 0x34) ),(int)uVar1 == 0 )) {
      uVar1 = mbedtls_mpi_copy(param_4 + 0x20, param_1 + 0x3c);
      return uVar1;
   }

   return uVar1;
}
int mbedtls_ecp_self_test(int param_1) {
   int iVar1;
   long in_FS_OFFSET;
   bool bVar2;
   undefined1 *local_1e8;
   undefined1 local_1d8[16];
   undefined1 local_1c8[16];
   undefined1 local_1b8[16];
   undefined1 local_1a8[16];
   undefined1 local_198[16];
   undefined1 local_188[16];
   undefined1 local_178[16];
   undefined1 local_168[56];
   undefined1 local_130[136];
   char *local_a8;
   char *pcStack_a0;
   char *local_98;
   char *pcStack_90;
   char *local_88;
   char *pcStack_80;
   char *local_78;
   char *pcStack_70;
   char *local_68;
   char *pcStack_60;
   char *local_58;
   char *pcStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = "000000000000000000000000000000000000000000000001";
   pcStack_a0 = "FFFFFFFFFFFFFFFFFFFFFFFE26F2FC170F69466A74DEFD8C";
   local_98 = "5EA6F389A38B8BC81E767753B15AA5569E1782E30ABE7D25";
   pcStack_90 = "400000000000000000000000000000000000000000000000";
   local_88 = "7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF";
   pcStack_80 = "555555555555555555555555555555555555555555555555";
   local_78 = "4000000000000000000000000000000000000000000000000000000000000000";
   pcStack_70 = "5C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C30";
   local_68 = "5715ECCE24583F7A7023C24164390586842E816D7280A49EF6DF4EAE6B280BF8";
   pcStack_60 = "41A2B017516F6D254E1F002BCCBADD54BE30F8CEC737A0E912B4963B6BA74460";
   local_58 = "5555555555555555555555555555555555555555555555555555555555555550";
   pcStack_50 = "7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF8";
   mbedtls_ecp_group_init(local_168);
   mbedtls_mpi_init(local_1c8);
   mbedtls_mpi_init(local_1b8);
   mbedtls_mpi_init(local_1a8);
   mbedtls_mpi_init(local_198);
   mbedtls_mpi_init(local_188);
   mbedtls_mpi_init(local_178);
   mbedtls_mpi_init(local_1d8);
   iVar1 = mbedtls_ecp_group_load(local_168, 1);
   if (iVar1 == 0) {
      if (param_1 != 0) {
         __printf_chk(2, "  ECP SW test #1 (constant op_count, base point G): ");
         iVar1 = mbedtls_mpi_lset(local_1d8, 2);
         if (iVar1 == 0) {
            iVar1 = ecp_mul_restartable_internal_isra_0(local_168, local_198, local_1d8, local_130, 0x100000, 0);
            if (iVar1 == 0) goto LAB_00104ce3;
         }

         goto LAB_00104c00;
      }

      iVar1 = mbedtls_mpi_lset(local_1d8, 2);
      if (iVar1 != 0) {
         LAB_00104d40:mbedtls_ecp_group_free(local_168);
         mbedtls_mpi_free(local_1c8);
         mbedtls_mpi_free(local_1b8);
         mbedtls_mpi_free(local_1a8);
         mbedtls_mpi_free(local_198);
         mbedtls_mpi_free(local_188);
         mbedtls_mpi_free(local_178);
         mbedtls_mpi_free(local_1d8);
         goto LAB_00104c7f;
      }

      iVar1 = ecp_mul_restartable_internal_isra_0(local_168, local_198, local_1d8, local_130, 0x100000, 0);
      bVar2 = false;
      if (iVar1 == 0) {
         LAB_00104ce3:local_1e8 = local_130;
         iVar1 = self_test_point_constprop_0(param_1, local_168, local_1c8, local_1d8, local_1e8);
         if (iVar1 == 0) {
            if (param_1 == 0) {
               iVar1 = self_test_point_constprop_0(0, local_168, local_1c8, local_1d8, local_198);
               if (iVar1 == 0) {
                  mbedtls_ecp_group_free(local_168);
                  mbedtls_mpi_free(local_1c8);
                  mbedtls_mpi_free(local_1b8);
                  mbedtls_mpi_free(local_1a8);
                  iVar1 = mbedtls_ecp_group_load(local_168, 9);
                  if (iVar1 == 0) goto LAB_00104dcb;
               }

               goto LAB_00104d40;
            }

            __printf_chk(2, "  ECP SW test #2 (constant op_count, other point): ");
            iVar1 = self_test_point_constprop_0(param_1, local_168, local_1c8, local_1d8, local_198, &local_a8);
            if (iVar1 == 0) {
               mbedtls_ecp_group_free(local_168);
               mbedtls_mpi_free(local_1c8);
               mbedtls_mpi_free(local_1b8);
               mbedtls_mpi_free(local_1a8);
               __printf_chk(2, "  ECP Montgomery test (constant op_count): ");
               iVar1 = mbedtls_ecp_group_load(local_168, 9);
               if (iVar1 == 0) {
                  LAB_00104dcb:iVar1 = self_test_point_constprop_0(param_1, local_168, local_1c8, local_1d8, local_1e8, &local_78);
               }

            }

         }

         goto LAB_00104c00;
      }

      LAB_00104b71:mbedtls_ecp_group_free(local_168);
      mbedtls_mpi_free(local_1c8);
      mbedtls_mpi_free(local_1b8);
      mbedtls_mpi_free(local_1a8);
      mbedtls_mpi_free(local_198);
      mbedtls_mpi_free(local_188);
      mbedtls_mpi_free(local_178);
      mbedtls_mpi_free(local_1d8);
      if (!bVar2) goto LAB_00104c7f;
   }
 else {
      LAB_00104c00:bVar2 = param_1 != 0;
      if (( -1 < iVar1 ) || ( !bVar2 )) goto LAB_00104b71;
      __printf_chk(2, "Unexpected error, return code = %08X\n", iVar1);
      mbedtls_ecp_group_free(local_168);
      mbedtls_mpi_free(local_1c8);
      mbedtls_mpi_free(local_1b8);
      mbedtls_mpi_free(local_1a8);
      mbedtls_mpi_free(local_198);
      mbedtls_mpi_free(local_188);
      mbedtls_mpi_free(local_178);
      mbedtls_mpi_free(local_1d8);
   }

   putchar(10);
   LAB_00104c7f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}

