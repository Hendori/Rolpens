uint psa_key_policy_algorithm_intersection(uint param_1, uint param_2, uint param_3) {
   byte bVar1;
   uint uVar2;
   uint uVar3;
   ulong uVar4;
   ushort uVar5;
   uint uVar6;
   ulong uVar7;
   ulong uVar8;
   if (param_2 == param_3) {
      return param_2;
   }
   if (( param_2 & 0xffffef00 ) == 0x6000300) {
      if (( param_3 & 0xffffef00 ) == 0x6000300) goto LAB_001000e0;
   } else {
      if (( ( ( ( param_2 & 0xffffff00 ) != 0x6000200 ) && ( ( param_2 & 0xfffffe00 ) != 0x6000600 ) ) && ( ( param_2 & 0xffffff00 ) != 0x6000900 ) ) && ( ( param_2 & 0xfffffe00 ) != 0x6000400 )) {
         if (( param_2 & 0x7f000000 ) == 0x5000000) {
            if (( param_3 & 0x7f000000 ) != 0x5000000) {
               return 0;
            }
            if (( ( param_2 ^ param_3 ) & 0xffc07fff ) != 0) {
               return 0;
            }
            uVar3 = param_2 >> 0x10 & 0x3f;
            uVar6 = param_3 >> 0x10 & 0x3f;
            if (( param_2 & 0x8000 ) != 0) {
               if (( param_3 & 0x8000 ) != 0) {
                  if (uVar3 < uVar6) {
                     uVar3 = uVar6;
                  }
                  return param_2 & 0xffc07fff | uVar3 << 0x10 | 0x8000;
               }
               if (uVar3 <= uVar6) {
                  return param_3;
               }
               return 0;
            }
            if (uVar3 < uVar6) {
               return 0;
            }
            if (( param_3 & 0x8000 ) != 0) {
               return param_2;
            }
            return 0;
         }
         if (( param_2 & 0x7f000000 ) != 0x3000000) {
            return 0;
         }
         if (( param_3 & 0x7f000000 ) != 0x3000000) {
            return 0;
         }
         if (( ( param_2 ^ param_3 ) & 0xffc07fff ) != 0) {
            return 0;
         }
         uVar5 = (ushort)param_1;
         bVar1 = ( byte )(param_1 >> 8);
         if (( param_2 & 0x7fc00000 ) == 0x3800000) {
            if (uVar5 != 0x1100) {
               return 0;
            }
            if (( param_2 & 0x3f0000 ) == 0) {
               uVar4 = 0;
               uVar3 = ( param_2 & 0xff | 0x2000000 ) + 0xfdfffffd;
               if (uVar3 < 0x11) {
                  uVar4 = *(ulong*)( CSWTCH_773 + (ulong)uVar3 * 8 );
               }
               goto LAB_00100208;
            }
         } else {
            if (( param_2 & 0x7fc00000 ) != 0x3c00000) {
               return 0;
            }
            if (( uVar5 & 0x7000 ) != 0x2000) {
               return 0;
            }
            if (( param_1 & 0x700 ) == 0) {
               return 0;
            }
            if (( param_2 & 0x3f0000 ) == 0) {
               uVar4 = ( ulong )(uint)(1 << ( bVar1 & 7 ));
               goto LAB_00100208;
            }
         }
         uVar4 = ( ulong )(param_2 >> 0x10 & 0x3f);
         LAB_00100208:uVar6 = (uint)uVar4;
         uVar3 = uVar6;
         if (( param_3 & 0x3f0000 ) == 0) {
            if (( param_3 & 0x7fc00000 ) == 0x3800000) {
               uVar2 = ( param_3 & 0xff | 0x2000000 ) + 0xfdfffffd;
               if (uVar2 < 0x11) {
                  uVar7 = *(ulong*)( CSWTCH_773 + (ulong)uVar2 * 8 );
                  uVar8 = uVar4;
                  if (uVar4 <= uVar7) {
                     uVar8 = uVar7;
                  }
                  uVar3 = (uint)uVar8;
               } else {
                  uVar7 = 0;
               }
            } else {
               uVar7 = 0;
               if (( ( param_3 & 0x7fc00000 ) == 0x3c00000 ) && ( ( uVar5 & 0x7000 ) == 0x2000 )) {
                  uVar7 = ( ulong )(uint)(1 << ( bVar1 & 7 ));
                  uVar8 = uVar7;
                  if (uVar7 <= uVar4) {
                     uVar8 = uVar4;
                  }
                  uVar3 = (uint)uVar8;
               }
            }
         } else {
            uVar3 = param_3 >> 0x10 & 0x3f;
            uVar7 = (ulong)uVar3;
            if (uVar7 <= uVar4) {
               uVar3 = uVar6;
            }
         }
         if (( param_2 & 0x8000 ) == 0) {
            if (( param_3 & 0x8000 ) != 0) {
               if (uVar7 <= uVar4) {
                  return param_2;
               }
               return 0;
            }
            if (uVar4 == uVar7) {
               return ( uVar6 & 0x3f ) << 0x10 | param_2 & 0xffc07fff;
            }
            return 0;
         }
         if (( param_3 & 0x8000 ) != 0) {
            return CONCAT22(( ushort )(( param_2 & 0xffc07fff ) >> 0x10) | (ushort)uVar3 & 0x3f, (short)( param_2 & 0xffc07fff )) | 0x8000;
         }
         if (uVar4 <= uVar7) {
            return param_3;
         }
         return 0;
      }
      if (( param_3 & 0xffffef00 ) == 0x6000300) {
         return 0;
      }
   }
   if (( ( ( param_3 & 0xffffff00 ) != 0x6000200 ) && ( ( param_3 & 0xfffffc00 ) != 0x6000400 ) ) && ( ( param_3 & 0xffffff00 ) != 0x6000900 )) {
      return 0;
   }
   LAB_001000e0:uVar3 = 0;
   if (( ( param_2 ^ param_3 ) < 0x100 ) && ( ( ( ( param_2 & 0xff ) == 0 || ( uVar3 = param_3(param_2 & 0xff | 0x2000000) != 0x20000ff ) ) && ( uVar3 = param_3 & 0xff ),uVar3 != 0 ) )) {
      uVar6 = 0;
      if (( uVar3 | 0x2000000 ) == 0x20000ff) {
         uVar6 = param_2;
      }
      return uVar6;
   }
   return uVar3;
}uint psa_sign_verify_check_alg(int param_1, uint param_2) {
   uint uVar1;
   uVar1 = param_2 & 0xffffff00;
   if (param_1 == 0) {
      if (( ( ( ( ( param_2 & 0xfffffe00 ) != 0x6000200 ) && ( uVar1 != 0x6001300 ) ) && ( ( param_2 & 0xfffffc00 ) != 0x6000400 ) ) && ( uVar1 != 0x6000900 ) ) || ( ( param_2 & 0xff ) == 0 )) {
         return 0;
      }
   } else {
      if (( ( ( param_2 & 0xffffef00 ) != 0x6000300 ) && ( uVar1 != 0x6000200 ) ) && ( ( ( param_2 & 0xfffffc00 ) != 0x6000400 && ( uVar1 != 0x6000900 ) ) )) {
         return 0xffffff79;
      }
      if (( param_2 & 0xff ) == 0) {
         return 0xffffff79;
      }
   }
   uVar1 = param_2 & 0xff | 0x2000000;
   if (uVar1 == 0x20000ff) {
      return 0xffffff79;
   }
   uVar1 = uVar1 + 0xfdfffffd;
   if (0x10 < uVar1) {
      return 0xffffff7a;
   }
   return -(uint)((0x1e1e7UL >> ((ulong)uVar1 & 0x3f) & 1) == 0) & 0xffffff7a;
}uint psa_aead_check_algorithm(uint param_1) {
   uint uVar1;
   if (( param_1 & 0x7f000000 ) == 0x5000000) {
      if (( ( ( ( param_1 & 0xfffffe00 ) != 0x6000200 ) && ( ( param_1 & 0xffffff00 ) != 0x6001300 ) ) && ( ( param_1 & 0xfffffc00 ) != 0x6000400 ) ) && ( ( param_1 & 0xffffff00 ) != 0x6000900 )) {
         return -(uint)((param_1 & 0x8000) != 0) & 0xffffff79;
      }
      uVar1 = 0;
      if (( param_1 & 0xff ) != 0) {
         if (( param_1 & 0xff | 0x2000000 ) == 0x20000ff) {
            uVar1 = 0xffffff79;
         }
         return uVar1;
      }
   } else {
      uVar1 = 0xffffff79;
   }
   return uVar1;
}undefined8 psa_tls12_prf_set_key(long param_1, undefined8 param_2, size_t param_3) {
   void *pvVar1;
   if (1 < *(int*)( param_1 + 4 ) - 1U) {
      return 0xffffff77;
   }
   if (param_3 != 0) {
      pvVar1 = calloc(1, param_3);
      *(void**)( param_1 + 8 ) = pvVar1;
      if (pvVar1 == (void*)0x0) {
         return 0xffffff73;
      }
      __memcpy_chk(pvVar1, param_2, param_3, param_3);
      *(size_t*)( param_1 + 0x10 ) = param_3;
   }
   *(undefined4*)( param_1 + 4 ) = 3;
   return 0;
}undefined8 psa_tls12_prf_input(long param_1, short param_2, undefined8 param_3, size_t param_4) {
   undefined8 uVar1;
   void *pvVar2;
   if (param_2 == 0x201) {
      if (*(int*)( param_1 + 4 ) != 3) {
         return 0xffffff77;
      }
      if (param_4 != 0) {
         pvVar2 = calloc(1, param_4);
         *(void**)( param_1 + 0x28 ) = pvVar2;
         if (pvVar2 == (void*)0x0) {
            return 0xffffff73;
         }
         __memcpy_chk(pvVar2, param_3, param_4, param_4);
         *(size_t*)( param_1 + 0x30 ) = param_4;
      }
      *(undefined4*)( param_1 + 4 ) = 4;
   } else {
      if (param_2 != 0x204) {
         if (param_2 == 0x101) {
            uVar1 = psa_tls12_prf_set_key(param_1, param_3, param_4);
            return uVar1;
         }
         return 0xffffff79;
      }
      if (*(int*)( param_1 + 4 ) != 0) {
         return 0xffffff77;
      }
      if (param_4 != 0) {
         pvVar2 = calloc(1, param_4);
         *(void**)( param_1 + 0x18 ) = pvVar2;
         if (pvVar2 == (void*)0x0) {
            return 0xffffff73;
         }
         __memcpy_chk(pvVar2, param_3, param_4, param_4);
         *(size_t*)( param_1 + 0x20 ) = param_4;
      }
      *(undefined4*)( param_1 + 4 ) = 1;
   }
   return 0;
}undefined8 psa_export_key_buffer_internal(void *param_1, ulong param_2, void *param_3, ulong param_4, ulong *param_5) {
   void *pvVar1;
   if (param_2 <= param_4) {
      pvVar1 = memcpy(param_3, param_1, param_2);
      memset((void*)( (long)pvVar1 + param_2 ), 0, param_4 - param_2);
      *param_5 = param_2;
      return 0;
   }
   return 0xffffff76;
}int psa_pake_complete_inputs(undefined4 *param_1) {
   int iVar1;
   long in_FS_OFFSET;
   undefined8 local_78;
   long lStack_70;
   void *local_68;
   long lStack_60;
   void *local_58;
   long lStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined8 local_28;
   long local_20;
   local_78 = *(undefined8*)( param_1 + 8 );
   lStack_70 = *(long*)( param_1 + 10 );
   local_68 = *(void**)( param_1 + 0xc );
   lStack_60 = *(long*)( param_1 + 0xe );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = *(void**)( param_1 + 0x10 );
   lStack_50 = *(long*)( param_1 + 0x12 );
   local_48 = *(undefined8*)( param_1 + 0x14 );
   uStack_40 = *(undefined8*)( param_1 + 0x16 );
   local_38 = *(undefined8*)( param_1 + 0x18 );
   uStack_30 = *(undefined8*)( param_1 + 0x1a );
   local_28 = *(undefined8*)( param_1 + 0x1c );
   if (( lStack_70 == 0 ) || ( ( param_1[1] == 0xa000100 && ( ( lStack_60 == 0 || ( lStack_50 == 0 ) ) ) ) )) {
      iVar1 = -0x89;
   } else {
      mbedtls_platform_zeroize(param_1 + 8, 0x370);
      if (local_48._4_4_ >> 8 == 0) {
         iVar1 = mbedtls_psa_pake_setup(param_1 + 8, &local_78);
         if (iVar1 == 0) {
            *param_1 = 1;
            mbedtls_zeroize_and_free(local_78, lStack_70);
            free(local_68);
            free(local_58);
            if (param_1[1] == 0xa000100) {
               *(undefined1*)( param_1 + 3 ) = 2;
            } else {
               iVar1 = -0x86;
            }
            goto LAB_001007b1;
         }
      } else {
         iVar1 = -0x87;
      }
      mbedtls_zeroize_and_free(local_78, lStack_70);
      free(local_68);
      free(local_58);
   }
   LAB_001007b1:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 psa_start_key_creation_isra_0(undefined8 *param_1, long *param_2, undefined8 *param_3) {
   undefined4 uVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   int iVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined4 local_34;
   long local_30;
   uVar1 = *(undefined4*)( (long)param_1 + 4 );
   iVar4 = *(int*)( (long)param_1 + 0x14 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_3 = 0;
   uVar5 = psa_validate_key_location(uVar1, param_3);
   if ((int)uVar5 != 0) goto LAB_0010087c;
   uVar5 = psa_validate_key_persistence(uVar1);
   if ((int)uVar5 != 0) goto LAB_0010087c;
   if ((char)uVar1 == '\0') {
      if (iVar4 == 0) {
         LAB_001008bd:if (( *(uint*)( param_1 + 1 ) & 0xffff00fc ) == 0) {
            if (*(ushort*)( (long)param_1 + 2 ) < 0xfff9) {
               if (*(char*)( (long)param_1 + 4 ) == '\0') {
                  uVar5 = psa_reserve_free_key_slot(&local_34, param_2);
                  if ((int)uVar5 == 0) {
                     puVar2 = (undefined8*)*param_2;
                     uVar3 = param_1[1];
                     *puVar2 = *param_1;
                     puVar2[1] = uVar3;
                     puVar2[2] = param_1[2];
                     *(undefined4*)( (long)puVar2 + 0x14 ) = local_34;
                  }
               } else {
                  uVar5 = psa_reserve_free_key_slot(0, param_2);
                  if ((int)uVar5 == 0) {
                     puVar2 = (undefined8*)*param_2;
                     uVar3 = param_1[1];
                     *puVar2 = *param_1;
                     puVar2[1] = uVar3;
                     puVar2[2] = param_1[2];
                  }
               }
            } else {
               uVar5 = 0xffffff7a;
            }
            goto LAB_0010087c;
         }
      }
   } else {
      iVar4 = psa_is_valid_key_id(*(undefined4*)( (long)param_1 + 0x14 ), 0);
      if (iVar4 != 0) goto LAB_001008bd;
   }
   uVar5 = 0xffffff79;
   LAB_0010087c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int psa_key_derivation_start_hmac(undefined4 *param_1, byte param_2, undefined8 param_3, long param_4) {
   uint uVar1;
   int iVar2;
   ulong uVar3;
   undefined1 uVar4;
   long in_FS_OFFSET;
   undefined2 local_38;
   undefined2 local_36;
   undefined1 local_34[16];
   undefined4 local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0x1100;
   uVar3 = param_4 * 8;
   local_24 = 0;
   if (0xfff8 < uVar3) {
      uVar3 = 0xffff;
   }
   local_34 = ZEXT816(0x140000000000);
   uVar4 = 0;
   *(byte*)( (long)param_1 + 5 ) = *(byte*)( (long)param_1 + 5 ) | 1;
   local_36 = (undefined2)uVar3;
   uVar1 = ( param_2 | 0x2000000 ) + 0xfdfffffd;
   if (uVar1 < 0x11) {
      uVar4 = CSWTCH_771[uVar1];
   }
   *(undefined1*)( param_1 + 1 ) = uVar4;
   iVar2 = mbedtls_psa_mac_sign_setup(param_1 + 2, &local_38, param_3, param_4, param_2 | 0x3800000);
   if (iVar2 == 0) {
      *param_1 = 1;
   }
   psa_reset_key_attributes(&local_38);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 psa_mac_finalize_alg_and_key_validation_isra_0(uint param_1, uint param_2, byte *param_3) {
   byte bVar1;
   uint uVar2;
   uint uVar3;
   if (( param_1 & 0x7f000000 ) != 0x3000000) {
      return 0xffffff79;
   }
   if (( param_1 & 0x7fc00000 ) == 0x3800000) {
      if ((ushort)param_2 != 0x1100) {
         return 0xffffff79;
      }
      if (( param_1 & 0x3f0000 ) != 0) {
         uVar2 = param_1 >> 0x10 & 0x3f;
         *param_3 = (byte)uVar2;
         if (( param_1 >> 0x10 & 0x3c ) == 0) {
            return 0xffffff7a;
         }
         uVar3 = ( param_1 & 0xff | 0x2000000 ) + 0xfdfffffd;
         if (0x10 < uVar3) {
            return 0xffffff79;
         }
         if (*(uint*)( CSWTCH_553 + (ulong)uVar3 * 4 ) < uVar2) {
            return 0xffffff79;
         }
         return 0;
      }
      uVar2 = ( param_1 & 0xff | 0x2000000 ) + 0xfdfffffd;
      if (0x10 < uVar2) {
         *param_3 = 0;
         return 0xffffff7a;
      }
      bVar1 = CSWTCH_771[uVar2];
      uVar3 = (uint)bVar1;
      *param_3 = bVar1;
      if (bVar1 < 4) {
         return 0xffffff7a;
      }
      if (*(uint*)( CSWTCH_553 + (ulong)uVar2 * 4 ) < (uint)bVar1) {
         return 0xffffff79;
      }
   } else {
      if (( param_1 & 0x7fc00000 ) != 0x3c00000) {
         return 0xffffff79;
      }
      if (( (ushort)param_2 & 0x7000 ) != 0x2000) {
         return 0xffffff79;
      }
      if (( param_2 & 0x700 ) == 0) {
         return 0xffffff79;
      }
      bVar1 = ( byte )(param_2 >> 8);
      if (( param_1 & 0x3f0000 ) != 0) {
         uVar2 = param_1 >> 0x10 & 0x3f;
         *param_3 = (byte)uVar2;
         if (( param_1 >> 0x10 & 0x3c ) == 0) {
            return 0xffffff7a;
         }
         if (uVar2 <= ( uint )(1 << ( bVar1 & 7 ))) {
            return 0;
         }
         return 0xffffff79;
      }
      uVar3 = 1 << ( bVar1 & 7 );
      *param_3 = (byte)uVar3;
      if (uVar3 < 4) {
         return 0xffffff7a;
      }
   }
   if ((byte)uVar3 < 0x41) {
      return 0;
   }
   return 0xffffff7a;
}bool psa_key_algorithm_permits(uint param_1, uint param_2, ulong param_3) {
   byte bVar1;
   uint uVar2;
   uint uVar3;
   ulong uVar4;
   ulong uVar5;
   ushort uVar6;
   bool bVar7;
   uVar3 = (uint)param_3;
   if (uVar3 == param_2) {
      return true;
   }
   if (( ( ( ( uVar3 & 0xfffffe00 ) == 0x6000200 ) || ( ( uVar3 & 0xffffff00 ) == 0x6001300 ) ) || ( ( uVar3 & 0xfffffc00 ) == 0x6000400 ) ) || ( ( uVar3 & 0xffffff00 ) == 0x6000900 )) {
      if (( ( param_2 & 0xfffffe00 ) == 0x6000200 ) || ( ( param_2 & 0xffffff00 ) == 0x6001300 )) {
         if (( param_2 & 0xff ) == 0) {
            return false;
         }
      } else if (( ( ( param_2 & 0xfffffc00 ) != 0x6000400 ) && ( ( param_2 & 0xffffff00 ) != 0x6000900 ) ) || ( ( param_2 & 0xff ) == 0 )) goto LAB_00100c07;
      if (( param_2 & 0xff | 0x2000000 ) != 0x20000ff) {
         return false;
      }
      return ( uVar3 ^ param_2 ) < 0x100;
   }
   if (( param_2 & 0x7f000000 ) == 0x5000000) {
      if (( uVar3 & 0x7f000000 ) == 0x5000000) {
         if (( ( uVar3 ^ param_2 ) & 0xffc07fff ) != 0) {
            return false;
         }
         if (( param_2 & 0x8000 ) == 0) {
            return false;
         }
         return ( param_2 >> 0x10 & 0x3f ) <= ( uVar3 >> 0x10 & 0x3f );
      }
      LAB_00100c07:bVar7 = false;
      if (( ( param_2 & 0xff00ffff ) == 0x9000000 ) && ( ( uVar3 & 0x7f000000 ) == 0x9000000 )) {
         bVar7 = ( uVar3 & 0xf6ff0000 | 0x9000000 ) == param_2;
      }
      return bVar7;
   }
   if (( ( param_2 & 0x7f000000 ) != 0x3000000 ) || ( ( uVar3 & 0x7f000000 ) != 0x3000000 )) goto LAB_00100c07;
   if (( ( uVar3 ^ param_2 ) & 0xffc07fff ) != 0) {
      return false;
   }
   uVar6 = (ushort)param_1;
   if (( param_2 & 0x7fc00000 ) == 0x3800000) {
      if (uVar6 != 0x1100) {
         return false;
      }
   } else if (( ( ( param_2 & 0x7fc00000 ) != 0x3c00000 ) || ( ( uVar6 & 0x7000 ) != 0x2000 ) ) || ( ( param_1 & 0x700 ) == 0 )) {
      return false;
   }
   uVar2 = uVar3 & 0x7fc00000;
   bVar1 = ( byte )(param_1 >> 8);
   if (( param_3 & 0x3f0000 ) == 0) {
      if (uVar2 == 0x3800000) {
         uVar3 = ( uVar3 & 0xff | 0x2000000 ) + 0xfdfffffd;
         if (uVar3 < 0x11) {
            uVar5 = *(ulong*)( CSWTCH_773 + (ulong)uVar3 * 8 );
            uVar4 = *(ulong*)( CSWTCH_773 + (ulong)uVar3 * 8 );
            if (( param_2 & 0x3f0000 ) == 0) goto LAB_00100df8;
            goto LAB_00100ddf;
         }
      } else if (( uVar2 == 0x3c00000 ) && ( ( uVar6 & 0x7000 ) == 0x2000 )) {
         uVar5 = ( ulong )(uint)(1 << ( bVar1 & 7 ));
         goto LAB_00100e7e;
      }
      uVar5 = 0;
      uVar4 = 0;
      if (( param_2 & 0x3f0000 ) != 0) {
         LAB_00100ddf:if (( param_2 >> 0x10 & 0x3f ) == uVar4) {
            return true;
         }
         goto LAB_00100d9f;
      }
   } else {
      uVar5 = ( ulong )(( uint )(param_3 >> 0x10) & 0x3f);
      if (uVar2 == 0x3800000) {
         uVar3 = ( uVar3 & 0xff | 0x2000000 ) + 0xfdfffffd;
         if (uVar3 < 0x11) {
            if (( param_2 & 0x3f0000 ) == 0) {
               uVar4 = *(ulong*)( CSWTCH_773 + (ulong)uVar3 * 8 );
               goto LAB_00100df8;
            }
            goto LAB_00100d9f;
         }
      } else if (( uVar2 == 0x3c00000 ) && ( ( uVar6 & 0x7000 ) == 0x2000 )) {
         LAB_00100e7e:uVar4 = ( ulong )(uint)(1 << ( bVar1 & 7 ));
         if (( param_2 & 0x3f0000 ) == 0) goto LAB_00100df8;
         if (( param_3 & 0x3f0000 ) != 0) goto LAB_00100d9f;
         goto LAB_00100ddf;
      }
      if (( param_2 & 0x3f0000 ) != 0) {
         LAB_00100d9f:if (( param_2 & 0x8000 ) == 0) {
            return false;
         }
         return ( param_2 >> 0x10 & 0x3f ) <= uVar5;
      }
   }
   uVar4 = 0;
   LAB_00100df8:return uVar5 == uVar4;
}undefined4 psa_get_and_lock_key_slot_with_policy_part_0(undefined8 *param_1, uint param_2, uint param_3) {
   ushort *puVar1;
   int iVar2;
   undefined4 uVar3;
   ulong uVar4;
   ulong uVar5;
   uVar4 = (ulong)param_3;
   puVar1 = (ushort*)*param_1;
   if (( *puVar1 & 0x7000 ) == 0x4000) {
      param_2 = param_2 & 0xfffffffe;
   }
   if (param_2 == ( *(uint*)( puVar1 + 4 ) & param_2 )) {
      if (param_3 == 0) {
         return 0;
      }
      if (( ( param_3 & 0xfffffe00 ) != 0x6000200 ) && ( ( param_3 & 0xffffff00 ) != 0x6001300 )) {
         if (( ( param_3 & 0xfffffc00 ) == 0x6000400 ) || ( ( param_3 & 0xffffff00 ) == 0x6000900 )) {
            if (( param_3 & 0xff ) != 0) goto LAB_00100f67;
            LAB_00100f50:if (param_3 != 0x20000ff) goto LAB_00100f73;
         } else {
            if (( ( param_3 & 0x7f000000 ) + 0xfd000000 & 0xfd000000 ) != 0) goto LAB_00100f50;
            if (( param_3 & 0x8000 ) == 0) goto LAB_00100f73;
         }
         LAB_00100f59:uVar3 = 0xffffff79;
         goto LAB_00100fa5;
      }
      if (( param_3 & 0xff ) != 0) {
         LAB_00100f67:if (( param_3 & 0xff | 0x2000000 ) == 0x20000ff) goto LAB_00100f59;
      }
      LAB_00100f73:uVar5 = ( ulong ) * puVar1;
      iVar2 = psa_key_algorithm_permits(uVar5, *(undefined4*)( puVar1 + 6 ), param_3);
      if (iVar2 != 0) {
         return 0;
      }
      iVar2 = psa_key_algorithm_permits(uVar5 & 0xffffffff, *(undefined4*)( puVar1 + 8 ), uVar4 & 0xffffffff);
      if (iVar2 != 0) {
         return 0;
      }
   }
   uVar3 = 0xffffff7b;
   LAB_00100fa5:*param_1 = 0;
   psa_unregister_read_under_mutex(puVar1);
   return uVar3;
}int psa_mac_compute_internal(undefined8 param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, void *param_5, ulong param_6, ulong *param_7, int param_8) {
   int iVar1;
   undefined2 *puVar2;
   long in_FS_OFFSET;
   byte local_49;
   undefined2 *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_49 = 0;
   iVar1 = psa_get_and_lock_key_slot(param_1, &local_48);
   if (iVar1 == 0) {
      iVar1 = psa_get_and_lock_key_slot_with_policy_part_0(&local_48, ( -(uint)(param_8 == 0) & 0x400 ) + 0x400, param_2);
      puVar2 = local_48;
      if (( iVar1 == 0 ) && ( iVar1 = psa_mac_finalize_alg_and_key_validation_isra_0(param_2, *local_48, &local_49) ),iVar1 == 0) {
         iVar1 = -0x8a;
         if (local_49 <= param_6) {
            if (*(uint*)( puVar2 + 2 ) >> 8 == 0) {
               iVar1 = mbedtls_psa_mac_compute(puVar2, *(undefined8*)( puVar2 + 0x14 ), *(undefined8*)( puVar2 + 0x18 ), param_2, param_3, param_4, param_5, (ulong)local_49, param_7);
               puVar2 = local_48;
               if (iVar1 == 0) {
                  if (param_6 != 0) {
                     memset((void*)( (long)param_5 + *param_7 ), 0x21, param_6 - *param_7);
                  }
                  iVar1 = psa_unregister_read_under_mutex(local_48);
                  goto LAB_001010c0;
               }
            } else {
               iVar1 = -0x87;
            }
         }
      }
      *param_7 = param_6;
   } else {
      *param_7 = param_6;
      puVar2 = local_48;
   }
   if (param_6 == 0) {
      psa_unregister_read_under_mutex(puVar2);
   } else {
      memset(param_5, 0x21, param_6);
      psa_unregister_read_under_mutex(puVar2);
   }
   LAB_001010c0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int psa_mac_setup(int *param_1, undefined4 param_2, undefined4 param_3, int param_4) {
   int iVar1;
   int iVar2;
   undefined2 *puVar3;
   long in_FS_OFFSET;
   undefined2 *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *param_1;
   local_48 = (undefined2*)0x0;
   if (iVar2 == 0) {
      iVar1 = psa_get_and_lock_key_slot(param_2, &local_48);
      if (( ( iVar1 == 0 ) && ( iVar1 = psa_get_and_lock_key_slot_with_policy_part_0(&local_48, ( -(uint)(param_4 == 0) & 0x400 ) + 0x400, param_3) ),iVar1 == 0 )) {
         *(byte*)( (long)param_1 + 5 ) = *(byte*)( (long)param_1 + 5 ) & 0xfe | (byte)param_4 & 1;
         if (param_4 == 0) {
            if (*(uint*)( puVar3 + 2 ) >> 8 != 0) goto LAB_001012fe;
            iVar1 = mbedtls_psa_mac_verify_setup(param_1 + 2, puVar3, *(undefined8*)( puVar3 + 0x14 ), *(undefined8*)( puVar3 + 0x18 ), param_3);
         } else {
            if (*(uint*)( puVar3 + 2 ) >> 8 != 0) {
               LAB_001012fe:iVar1 = -0x87;
               goto LAB_00101270;
            }
            iVar1 = mbedtls_psa_mac_sign_setup(param_1 + 2, puVar3, *(undefined8*)( puVar3 + 0x14 ), *(undefined8*)( puVar3 + 0x18 ), param_3);
         }
         if (iVar1 == 0) {
            *param_1 = 1;
            iVar1 = psa_unregister_read_under_mutex(local_48);
            goto LAB_00101281;
         }
      }
      LAB_00101270:iVar2 = *param_1;
      if (iVar2 != 0) goto LAB_001012ad;
   } else {
      iVar1 = -0x89;
      LAB_001012ad:if (iVar2 == 1) {
         mbedtls_psa_mac_abort(param_1 + 2);
      }
      *(ushort*)( param_1 + 1 ) = *(ushort*)( param_1 + 1 ) & 0xfe00;
      *param_1 = 0;
   }
   psa_unregister_read_under_mutex(local_48);
   LAB_00101281:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar1;
}int psa_cipher_setup(int *param_1, undefined4 param_2, uint param_3, int param_4) {
   byte bVar1;
   ushort uVar2;
   byte bVar3;
   undefined1 uVar4;
   int iVar5;
   int iVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   ushort *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (ushort*)0x0;
   uVar7 = 0x100;
   if (param_4 != 1) {
      uVar7 = 0x200;
   }
   iVar6 = *param_1;
   if (iVar6 == 0) {
      iVar5 = -0x87;
      if (( param_3 & 0x7f000000 ) == 0x4000000) {
         iVar5 = psa_get_and_lock_key_slot(param_2, &local_48);
         if (( iVar5 == 0 ) && ( iVar5 = psa_get_and_lock_key_slot_with_policy_part_0(&local_48, uVar7, param_3) ),iVar5 == 0) {
            bVar1 = *(byte*)( param_1 + 1 );
            uVar2 = *local_48;
            bVar3 = bVar1 & 0xfd;
            *(byte*)( param_1 + 1 ) = bVar3;
            if (param_3 == 0x4404400) {
               *(byte*)( param_1 + 1 ) = bVar1 & 0xfc;
               if (( ( uVar2 & 0x7000 ) == 0x2000 ) && ( ( uVar2 & 0x700 ) != 0 )) goto LAB_00101406;
               LAB_00101478:uVar4 = 0;
            } else {
               *(byte*)( param_1 + 1 ) = bVar3 | 1;
               if (( ( ( uVar2 & 0x7000 ) != 0x2000 ) || ( ( uVar2 & 0x700 ) == 0 ) ) || ( ( ( ( uVar4 = ( undefined1 )(1 << ( ( byte )(uVar2 >> 8) & 7 ))(param_3 & 0xfffffeff) != 0x4c01000 && ( param_3 != 0x4c01200 ) ) && ( param_3 != 0x440ff00 ) ) && ( ( param_3 & 0xfffffeff ) != 0x4404000 ) ) )) {
                  LAB_00101406:if (( uVar2 != 0x2004 ) || ( uVar4 = param_3 != 0x4800100 )) {
                     if (param_3 != 0x4c01300) goto LAB_00101478;
                     uVar4 = 0xd;
                  }
               }
            }
            *(undefined1*)( (long)param_1 + 5 ) = uVar4;
            if (param_4 == 1) {
               if (*(uint*)( local_48 + 2 ) >> 8 != 0) goto LAB_00101550;
               iVar5 = mbedtls_psa_cipher_encrypt_setup(param_1 + 2, local_48, *(undefined8*)( local_48 + 0x14 ), *(undefined8*)( local_48 + 0x18 ), param_3);
            } else {
               if (*(uint*)( local_48 + 2 ) >> 8 != 0) {
                  LAB_00101550:iVar5 = -0x87;
                  goto LAB_001014ac;
               }
               iVar5 = mbedtls_psa_cipher_decrypt_setup(param_1 + 2);
            }
            if (iVar5 == 0) {
               *param_1 = 1;
               iVar5 = psa_unregister_read_under_mutex(local_48);
               goto LAB_00101376;
            }
         }
         LAB_001014ac:iVar6 = *param_1;
         if (iVar6 != 0) goto LAB_00101436;
      }
      psa_unregister_read_under_mutex(local_48);
   } else {
      iVar5 = -0x89;
      LAB_00101436:if (iVar6 == 1) {
         mbedtls_psa_cipher_abort(param_1 + 2);
      }
      *(byte*)( param_1 + 1 ) = *(byte*)( param_1 + 1 ) & 0xfc;
      *param_1 = 0;
      psa_unregister_read_under_mutex(local_48);
   }
   LAB_00101376:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar5;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}byte psa_can_do_hash(void) {
   return global_data & 1;
}byte psa_can_do_cipher(void) {
   return global_data & 1;
}uint mbedtls_to_psa_error(uint param_1) {
   uint uVar1;
   ulong uVar2;
   if (( -param_1 & 0x7f ) == 0) {
      if (param_1 == 0xffffc500) {
         return 0xffffff79;
      }
      if ((int)param_1 < -0x3aff) {
         if (param_1 == 0xffffbd00) {
            return 0xffffff69;
         }
         if (-0x4300 < (int)param_1) {
            if (param_1 == 0xffffc100) {
               return 0xffffff79;
            }
            if ((int)param_1 < -0x3eff) {
               if (param_1 == 0xffffbe80) {
                  return 0xffffff6d;
               }
               if ((int)param_1 < -0x417f) {
                  if (param_1 != 0xffffbd80) {
                     return ( uint )(param_1 != 0xffffbe00) * 3 - 0x87;
                  }
                  return 0xffffff69;
               }
               if (param_1 == 0xffffbf00) {
                  return 0xffffff6a;
               }
               if ((int)param_1 < -0x4100) {
                  return 0xffffff7c;
               }
               if (param_1 != 0xffffbf80) {
                  return ( uint )(param_1 != 0xffffc080) * 9 - 0x8d;
               }
               return 0xffffff79;
            }
            if (param_1 == 0xffffc400) {
               return 0xffffff7b;
            }
            if (-0x3c00 < (int)param_1) {
               return ( param_1 != 0xffffc480 ) - 0x85;
            }
            if (param_1 == 0xffffc200) {
               return 0xffffff6e;
            }
            if ((int)param_1 < -0x3dff) {
               return ( uint )(param_1 != 0xffffc180) * 3 - 0x87;
            }
            if (param_1 == 0xffffc300) {
               return 0xffffff79;
            }
            if (param_1 != 0xffffc380) {
               return ( uint )(param_1 != 0xffffc280) * 3 - 0x87;
            }
            return 0xffffff7a;
         }
         if (param_1 == 0xffffae80) {
            return 0xffffff73;
         }
         if ((int)param_1 < -0x517f) {
            if (param_1 == 0xffff9e00) {
               return 0xffffff6a;
            }
            if ((int)param_1 < -0x61ff) {
               if (param_1 == 0xffff9c80) {
                  return 0xffffff69;
               }
               if ((int)param_1 < -0x6380) {
                  return 0xffffff7c;
               }
               if (param_1 != 0xffff9d00) {
                  return ( uint )(param_1 != 0xffff9d80) * 3 - 0x87;
               }
               return 0xffffff6b;
            }
            if (param_1 == 0xffffae00) {
               return 0xffffff6e;
            }
            if ((int)param_1 < -0x51ff) {
               if (param_1 == 0xffff9e80) {
                  return 0xffffff73;
               }
               if ((int)param_1 < -0x6180) {
                  return 0xffffff7c;
               }
               if (param_1 != 0xffff9f00) {
                  return ( ( param_1 != 0xffff9f80 ) - 0x86 ) + ( uint )(param_1 != 0xffff9f80);
               }
               return 0xffffff79;
            }
            return 0xffffff7c;
         }
         if (param_1 == 0xffffb300) {
            return 0xffffff6c;
         }
         if (-0x4d00 < (int)param_1) {
            if (param_1 == 0xffffbb80) {
               return 0xffffff6c;
            }
            if ((int)param_1 < -0x447f) {
               if (param_1 != 0xffffb380) {
                  uVar1 = 0xffffff7c;
                  if (param_1 == 0xffffb400) {
                     uVar1 = 0xffffff6b;
                  }
                  return uVar1;
               }
               return 0xffffff79;
            }
            if (param_1 != 0xffffbc00) {
               uVar1 = 0xffffff7c;
               if (param_1 == 0xffffbc80) {
                  uVar1 = 0xffffff6b;
               }
               return uVar1;
            }
            return 0xffffff76;
         }
         if (param_1 == 0xffffb180) {
            return 0xffffff7a;
         }
         if (-0x4e80 < (int)param_1) {
            if (param_1 != 0xffffb200) {
               return ( uint )(param_1 != 0xffffb280) * 9 - 0x8d;
            }
            return 0xffffff6b;
         }
         if (param_1 == 0xffffb100) {
            return 0xffffff76;
         }
         if (-0x4f00 < (int)param_1) {
            return 0xffffff7c;
         }
         if (param_1 == 0xffffaf80) {
            return 0xffffff7a;
         }
         if (param_1 != 0xffffb080) {
            return ( uint )(param_1 != 0xffffaf00) * 3 - 0x87;
         }
         return 0xffffff79;
      }
   } else {
      param_1 = -(-param_1 & 0x7f);
   }
   if ((int)param_1 < -0x33) {
      if ((int)param_1 < -0x51) {
         if (-0x6a < (int)param_1) {
            param_1 = param_1 + 0x68;
            if (0x14 < param_1) {
               return 0xffffff7c;
            }
            if (( 1L << ( (byte)param_1 & 0x3f ) & 0x155U ) == 0) {
               if (param_1 == 0x12) {
                  return 0xffffff6b;
               }
               return ( uint )(param_1 != 0x14) * 5 - 0x89;
            }
            return 0xffffff79;
         }
         if (-0x73 < (int)param_1) {
            switch (param_1) {
               case 0xffffff8e:
          goto switchD_001015cd_caseD_ffffff8e;
               default:
          goto switchD_001015cd_caseD_ffffff8f;
               case 0xffffff90:
          return 0xffffff6d;
               case 0xffffff92:
          return 0xffffff69;
               case 0xffffff94:
          goto switchD_001015cd_caseD_ffffff94;
               case 0xffffff96:
          goto switchD_001015cd_caseD_ffffff96;
            }
         }
         if (param_1 == 0xffffc700) {
            return 0xffffff6b;
         }
         if (-0x3900 < (int)param_1) {
            uVar1 = 0xffffff7c;
            if (param_1 == 0xffffc780) {
               uVar1 = 0xffffff76;
            }
            return uVar1;
         }
         if (( param_1 & 0xffffff7f ) != 0xffffc600) {
            return ( ( param_1 != 0xffffc580 ) - 0x86 ) + ( uint )(param_1 != 0xffffc580);
         }
      } else {
         uVar2 = 1L << ( (char)param_1 + 0x51U & 0x3f );
         if (( uVar2 & 0x20b20000 ) != 0) {
            return 0xffffff6c;
         }
         if (( uVar2 & 0xa000000 ) == 0) {
            return ( -(uint)((uVar2 & 1) == 0) & 3 ) - 0x87;
         }
      }
      switchD_001015cd_caseD_ffffff8e:return 0xffffff7a;
   }
   if ((int)param_1 < -0x15) {
      if (-0x27 < (int)param_1) {
         if (( 1L << ( (char)param_1 + 0x26U & 0x3f ) & 0x55U ) != 0) {
            return 0xffffff7a;
         }
         if (param_1 != 0xffffffea) {
            return ( uint )(param_1 != 0xffffffdf) * 3 - 0x87;
         }
         return 0xffffff76;
      }
   } else {
      switch (param_1) {
         case 0:
      return param_1;
         case 0xffffffec:
         case 0xfffffff2:
         case 0xfffffff3:
         case 0xfffffff4:
         case 0xfffffff6:
         case 0xfffffffa:
         case 0xfffffffc:
      return 0xffffff79;
         case 0xffffffee:
         case 0xfffffff1:
      return 0xffffff6b;
         case 0xfffffff0:
switchD_001015cd_caseD_ffffff96:
      return 0xffffff73;
         case 0xfffffff8:
switchD_001015cd_caseD_ffffff94:
      return 0xffffff76;
         case 0xfffffffe:
      return 0xffffff6e;
      }
   }
   switchD_001015cd_caseD_ffffff8f:return 0xffffff7c;
}undefined8 psa_generate_random_internal(long param_1, ulong param_2) {
   int iVar1;
   undefined8 uVar2;
   ulong uVar3;
   if (( DAT_0010ad01 != '\x02' ) || ( global_data != '\a' )) {
      return 0xffffff77;
   }
   if (param_2 != 0) {
      do {
         uVar3 = 0x400;
         if (param_2 < 0x401) {
            uVar3 = param_2;
         }
         iVar1 = mbedtls_ctr_drbg_random(&DAT_0010b058, param_1, uVar3);
         if (iVar1 != 0) {
            uVar2 = mbedtls_to_psa_error(iVar1);
            return uVar2;
         }
         param_1 = param_1 + uVar3;
         param_2 = param_2 - uVar3;
      } while ( param_2 != 0 );
   }
   return 0;
}uint psa_validate_unstructured_key_bit_size(ushort param_1, ulong param_2) {
   uint uVar1;
   if (param_1 < 0x2407) {
      if (param_1 < 0x2400) {
         if (param_1 == 0x2004) {
            uVar1 = 0xffffff79;
            if (param_2 == 0x100) {
               uVar1 = 0;
            }
            return uVar1;
         }
         if (param_1 < 0x1206) {
            if (param_1 < 0x1200) {
               if (( param_1 == 0x1001 ) || ( param_1 == 0x1100 )) {
                  LAB_00101bdb:return -(uint)((param_2 & 7) != 0) & 0xffffff79;
               }
            } else if (( 0x29UL >> ( (ulong)param_1 & 0x3f ) & 1 ) != 0) goto LAB_00101bdb;
         }
      } else if (( 0x49UL >> ( (ulong)param_1 & 0x3f ) & 1 ) != 0) {
         if (( ( param_2 & 0xffffffffffffffbf ) != 0x80 ) && ( param_2 != 0x100 )) {
            return 0xffffff79;
         }
         return 0;
      }
   }
   return 0xffffff7a;
}undefined8 psa_allocate_buffer_to_slot(long param_1, size_t param_2) {
   void *pvVar1;
   undefined8 uVar2;
   if (*(long*)( param_1 + 0x28 ) == 0) {
      pvVar1 = calloc(1, param_2);
      *(void**)( param_1 + 0x28 ) = pvVar1;
      if (pvVar1 == (void*)0x0) {
         uVar2 = 0xffffff73;
      } else {
         *(size_t*)( param_1 + 0x30 ) = param_2;
         uVar2 = 0;
      }
      return uVar2;
   }
   return 0xffffff75;
}undefined8 psa_copy_key_material_into_slot(long param_1, void *param_2, size_t param_3) {
   void *__dest;
   undefined8 uVar1;
   if (*(long*)( param_1 + 0x28 ) == 0) {
      __dest = calloc(1, param_3);
      *(void**)( param_1 + 0x28 ) = __dest;
      if (__dest == (void*)0x0) {
         uVar1 = 0xffffff73;
      } else {
         *(size_t*)( param_1 + 0x30 ) = param_3;
         memcpy(__dest, param_2, param_3);
         uVar1 = 0;
      }
      return uVar1;
   }
   return 0xffffff75;
}ulong psa_import_key_into_slot(ushort *param_1, void *param_2, size_t param_3, void *param_4, undefined8 param_5, size_t *param_6, long *param_7) {
   ushort uVar1;
   uint uVar2;
   ulong uVar3;
   uVar1 = *param_1;
   if (param_3 != 0) {
      if (( ( uVar1 & 0x7000 ) - 0x1000 & 0xe000 ) == 0) {
         *param_7 = param_3 * 8;
         uVar2 = psa_validate_unstructured_key_bit_size(uVar1, param_3 * 8);
         if (uVar2 != 0) {
            return (ulong)uVar2;
         }
         memcpy(param_4, param_2, param_3);
         *param_6 = param_3;
         return (ulong)uVar2;
      }
      if (( uVar1 & 0x4000 ) != 0) {
         if (( uVar1 & 0xcf00 ) == 0x4100) {
            uVar3 = mbedtls_psa_ecp_import_key(param_1, param_2, param_3);
            return uVar3;
         }
         if (( uVar1 & 0xcfff ) == 0x4001) {
            uVar3 = mbedtls_psa_rsa_import_key(param_1, param_2, param_3);
            return uVar3;
         }
      }
   }
   return 0xffffff7a;
}undefined8 psa_remove_key_data_from_memory(long param_1) {
   if (*(long*)( param_1 + 0x28 ) != 0) {
      mbedtls_zeroize_and_free(*(long*)( param_1 + 0x28 ), *(undefined8*)( param_1 + 0x30 ));
   }
   *(undefined8*)( param_1 + 0x28 ) = 0;
   *(undefined8*)( param_1 + 0x30 ) = 0;
   return 0;
}undefined8 psa_wipe_key_slot(undefined1 (*param_1)[16]) {
   undefined1 uVar1;
   undefined8 uVar2;
   if (*(long*)( param_1[2] + 8 ) != 0) {
      mbedtls_zeroize_and_free(*(long*)( param_1[2] + 8 ), *(undefined8*)param_1[3]);
   }
   if (*(int*)( param_1[1] + 8 ) == 1) {
      if (*(long*)param_1[2] == 0) goto LAB_00101e37;
   } else if (( *(int*)( param_1[1] + 8 ) - 2U < 2 ) && ( *(long*)param_1[2] == 1 )) {
      LAB_00101e37:*(undefined8*)param_1[3] = 0;
      uVar1 = param_1[1][0xc];
      *param_1 = (undefined1[16])0x0;
      param_1[1] = (undefined1[16])0x0;
      param_1[2] = (undefined1[16])0x0;
      uVar2 = psa_free_key_slot(uVar1, param_1);
      return uVar2;
   }
   *(undefined8*)param_1[3] = 0;
   *param_1 = (undefined1[16])0x0;
   param_1[1] = (undefined1[16])0x0;
   param_1[2] = (undefined1[16])0x0;
   return 0xffffff69;
}int psa_destroy_key(undefined8 param_1) {
   char cVar1;
   int iVar2;
   int iVar3;
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = 0;
   if (( (int)param_1 != 0 ) && ( iVar2 = psa_get_and_lock_key_slot(param_1, &local_18) ),iVar2 == 0) {
      if (*(int*)( local_18 + 0x18 ) == 2) {
         *(undefined4*)( local_18 + 0x18 ) = 3;
         cVar1 = (char)*(undefined4*)( local_18 + 4 );
         if (cVar1 == -1) {
            iVar2 = -0x85;
         } else if (cVar1 != '\0') {
            iVar2 = psa_destroy_persistent_key(*(undefined4*)( local_18 + 0x14 ));
         }
      } else {
         iVar2 = -0x97;
      }
      iVar3 = psa_unregister_read(local_18);
      if (iVar3 != 0) {
         iVar2 = iVar3;
      }
   }
   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}void psa_get_key_attributes(undefined4 param_1, undefined8 *param_2) {
   undefined8 uVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   psa_reset_key_attributes(param_2);
   iVar2 = psa_get_and_lock_key_slot(param_1, &local_28);
   if (iVar2 == 0) {
      uVar1 = local_28[1];
      *param_2 = *local_28;
      param_2[1] = uVar1;
      param_2[2] = local_28[2];
      psa_unregister_read_under_mutex();
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 psa_export_key_internal(ushort *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   ushort uVar1;
   undefined8 uVar2;
   uVar1 = *param_1;
   if (( ( ( ( uVar1 & 0x7000 ) - 0x1000 & 0xe000 ) != 0 ) && ( ( uVar1 & 0xcfff ) != 0x4001 ) ) && ( ( ( uVar1 & 0xffffcf00 ) - 0x4100 & 0xfffffe00 ) != 0 )) {
      return 0xffffff7a;
   }
   uVar2 = psa_export_key_buffer_internal(param_2, param_3, param_4, param_5, param_6);
   return uVar2;
}undefined8 psa_export_public_key_internal(ushort *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   ushort uVar1;
   undefined8 uVar2;
   uVar1 = *param_1;
   if (( uVar1 & 0x7000 ) == 0x4000) {
      if (( ( uVar1 & 0xcfff ) == 0x4001 ) || ( ( ( uVar1 & 0xffffcf00 ) - 0x4100 & 0xfffffe00 ) == 0 )) {
         uVar2 = psa_export_key_buffer_internal(param_2, param_3, param_4, param_5, param_6);
         return uVar2;
      }
   } else {
      if (( uVar1 & 0xcfff ) == 0x4001) {
         uVar2 = mbedtls_psa_rsa_export_public_key(param_1, param_2, param_3, param_4, param_5);
         return uVar2;
      }
      if (( uVar1 & 0xffffcf00 ) == 0x4100) {
         uVar2 = mbedtls_psa_ecp_export_public_key(param_1, param_2, param_3, param_4, param_5);
         return uVar2;
      }
   }
   return 0xffffff7a;
}/* WARNING: Type propagation algorithm not settling */int psa_copy_key(undefined8 param_1, ushort *param_2, undefined4 *param_3) {
   uint uVar1;
   int iVar2;
   long lVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   void *pvVar9;
   ulong uVar10;
   long lVar11;
   long in_FS_OFFSET;
   ushort *local_78;
   long local_70[3];
   undefined8 local_58;
   undefined8 uStack_50;
   ulong local_48;
   long local_40;
   local_58 = *(undefined8*)param_2;
   uStack_50 = *(undefined8*)( param_2 + 4 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = *(ulong*)( param_2 + 8 );
   *param_3 = 0;
   local_78 = (ushort*)0x0;
   for (int i = 0; i < 3; i++) {
      local_70[i] = 0;
   }
   iVar6 = psa_get_and_lock_key_slot(param_1, &local_78);
   if (iVar6 == 0) {
      uVar1 = *(uint*)( local_78 + 4 );
      if (( uVar1 & 2 ) == 0) {
         local_78 = (ushort*)0x0;
         iVar6 = -0x85;
         psa_unregister_read_under_mutex();
         lVar11 = local_70[0];
         goto LAB_00102136;
      }
      if (( *param_2 == 0 ) || ( *local_78 == *param_2 )) {
         if (( param_2[1] != 0 ) && ( param_2[1] != local_78[1] )) goto LAB_00102350;
         uVar10 = ( ulong ) * local_78;
         iVar6 = *(int*)( local_78 + 6 );
         iVar4 = uStack_50._4_4_;
         iVar2 = *(int*)( local_78 + 8 );
         local_58 = CONCAT44(local_58._4_4_, *(undefined4*)local_78);
         iVar7 = psa_key_policy_algorithm_intersection(uVar10, uStack_50._4_4_, iVar6);
         iVar5 = (int)local_48;
         iVar8 = psa_key_policy_algorithm_intersection(uVar10 & 0xffffffff, local_48 & 0xffffffff, iVar2);
         if (( ( iVar6 != 0 && iVar4 != 0 ) && ( iVar7 == 0 ) ) || ( ( iVar2 != 0 && iVar5 != 0 && ( iVar8 == 0 ) ) )) goto LAB_00102350;
         uStack_50 = CONCAT44(iVar7, (uint)uStack_50 & uVar1);
         local_48 = CONCAT44(local_48._4_4_, iVar8);
         iVar6 = psa_start_key_creation_isra_0(&local_58, local_70, local_70 + 1);
         lVar3 = local_70[0];
         lVar11 = lVar3;
         if (iVar6 != 0) goto LAB_00102136;
         uVar1 = *(uint*)( local_70[0] + 4 );
         if (uVar1 >> 8 == *(uint*)( local_78 + 2 ) >> 8) {
            if (local_58._4_4_ >> 8 == 0) {
               iVar6 = psa_copy_key_material_into_slot(local_70[0], *(undefined8*)( local_78 + 0x14 ), *(undefined8*)( local_78 + 0x18 ));
               if (( iVar6 == 0 ) && ( ( (char)uVar1 == '\0' || ( iVar6 = psa_save_persistent_key(lVar3, *(undefined8*)( lVar3 + 0x28 ), *(undefined8*)( lVar3 + 0x30 )) ),lVar11 = local_70[0],iVar6 == 0 ) )) {
                  *param_3 = *(undefined4*)( lVar3 + 0x14 );
                  if (*(int*)( lVar3 + 0x18 ) == 1) {
                     *(undefined4*)( lVar3 + 0x18 ) = 2;
                     iVar6 = psa_unregister_read_under_mutex(local_78);
                     goto LAB_00102150;
                  }
                  iVar6 = -0x97;
                  *param_3 = 0;
                  lVar11 = local_70[0];
               }
            } else {
               iVar6 = psa_driver_wrapper_get_key_buffer_size(&local_58, local_70 + 2);
               lVar3 = local_70[2];
               lVar11 = local_70[0];
               if (iVar6 == 0) {
                  if (*(long*)( local_70[0] + 0x28 ) == 0) {
                     pvVar9 = calloc(1, local_70[2]);
                     *(void**)( lVar11 + 0x28 ) = pvVar9;
                     if (pvVar9 == (void*)0x0) {
                        iVar6 = -0x8d;
                     } else {
                        *(long*)( lVar11 + 0x30 ) = lVar3;
                        iVar6 = -0x87;
                     }
                  } else {
                     iVar6 = -0x8b;
                  }
                  goto LAB_0010213f;
               }
            }
            goto LAB_00102136;
         }
         iVar6 = -0x86;
         lVar11 = local_70[0];
      } else {
         LAB_00102350:iVar6 = -0x87;
         lVar11 = local_70[0];
         LAB_00102136:if (lVar11 == 0) goto LAB_00102298;
      }
      LAB_0010213f:psa_wipe_key_slot(lVar11);
      psa_unregister_read_under_mutex(local_78);
   } else {
      lVar11 = local_70[0];
      if (local_70[0] != 0) goto LAB_0010213f;
      LAB_00102298:psa_unregister_read_under_mutex(local_78);
   }
   LAB_00102150:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar6;
}undefined8 psa_hash_abort(int *param_1) {
   undefined8 uVar1;
   if (*param_1 != 0) {
      if (*param_1 == 1) {
         uVar1 = mbedtls_psa_hash_abort(param_1 + 2);
      } else {
         uVar1 = 0xffffff77;
      }
      *param_1 = 0;
      return uVar1;
   }
   return 0;
}int psa_hash_setup(int *param_1, uint param_2) {
   int iVar1;
   int iVar2;
   ulong uVar3;
   undefined8 *puVar4;
   iVar2 = *param_1;
   if (iVar2 == 0) {
      iVar1 = -0x87;
      if (( param_2 & 0x7f000000 ) == 0x2000000) {
         param_1[2] = 0;
         param_1[3] = 0;
         param_1[0x38] = 0;
         param_1[0x39] = 0;
         puVar4 = (undefined8*)( ( ulong )(param_1 + 4) & 0xfffffffffffffff8 );
         for (uVar3 = ( ulong )(( (int)( param_1 + 2 ) - (int)(undefined8*)( ( ulong )(param_1 + 4) & 0xfffffffffffffff8 ) ) + 0xe0U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
         }
         iVar1 = mbedtls_psa_hash_setup(param_1 + 2);
         if (iVar1 == 0) {
            *param_1 = 1;
         } else {
            iVar2 = *param_1;
            if (iVar2 != 0) goto LAB_0010246f;
         }
      }
      return iVar1;
   }
   iVar1 = -0x89;
   LAB_0010246f:if (iVar2 == 1) {
      mbedtls_psa_hash_abort(param_1 + 2);
   }
   *param_1 = 0;
   return iVar1;
}int psa_key_derivation_setup_kdf(long param_1, uint param_2) {
   int iVar1;
   ulong uVar2;
   long lVar3;
   uint uVar4;
   undefined8 *puVar5;
   int *piVar6;
   long lVar7;
   uint uVar8;
   long in_FS_OFFSET;
   int local_128[2];
   undefined1 local_120[224];
   long local_40;
   uVar8 = param_2 & 0xffffff00;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( param_1 + 0x10 ) = 0;
   *(undefined8*)( param_1 + 0x230 ) = 0;
   puVar5 = (undefined8*)( param_1 + 0x18U & 0xfffffffffffffff8 );
   uVar2 = ( ulong )(( (int)param_1 - (int)puVar5 ) + 0x238U >> 3);
   for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
   }
   if (( ( param_2 & 0xfffffe00 ) != 0x8000200 && uVar8 != 0x8000500 ) && ( uVar8 != 0x8000100 && uVar8 != 0x8000400 )) {
      if (param_2 != 0x8000609) goto switchD_001025a1_caseD_2000006;
      *(undefined8*)( param_1 + 8 ) = 0x20;
      goto LAB_001025b8;
   }
   if (( param_2 & 0xff ) == 0) goto switchD_001025a1_caseD_2000006;
   uVar4 = param_2 & 0xff | 0x2000000;
   switch (uVar4) {
      case 0x2000003:
    lVar7 = 0x10;
    break;
      case 0x2000004:
      case 0x2000005:
    lVar7 = 0x14;
    break;
      default:
    goto switchD_001025a1_caseD_2000006;
      case 0x2000008:
      case 0x200000c:
      case 0x2000010:
    lVar7 = 0x1c;
    break;
      case 0x2000009:
      case 0x200000d:
      case 0x2000011:
    lVar7 = 0x20;
    break;
      case 0x200000a:
      case 0x2000012:
    lVar7 = 0x30;
    break;
      case 0x200000b:
      case 0x2000013:
    lVar7 = 0x40;
   }
   piVar6 = local_128;
   for (lVar3 = 0x1d; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined8*)piVar6 = 0;
      piVar6 = (int*)( (long)piVar6 + 8 );
   }
   iVar1 = psa_hash_setup(local_128, uVar4);
   if (local_128[0] == 1) {
      mbedtls_psa_hash_abort(local_120);
   }
   if (iVar1 != 0) goto LAB_00102554;
   if (uVar8 == 0x8000100) {
      LAB_00102680:*(long*)( param_1 + 8 ) = lVar7 * 0xff;
      LAB_001025b8:iVar1 = 0;
   } else {
      if (uVar8 == 0x8000100 || uVar8 == 0x8000400) {
         *(long*)( param_1 + 8 ) = lVar7;
         goto LAB_001025b8;
      }
      if (uVar8 == 0x8000500) goto LAB_00102680;
      if (uVar8 == 0x8000200) {
         if (uVar4 + 0xfdfffff7 < 2) {
            *(undefined8*)( param_1 + 8 ) = 0xffffffffffffffff;
            goto LAB_001025b8;
         }
      } else if (uVar4 + 0xfdfffff7 < 2) {
         *(undefined8*)( param_1 + 8 ) = 0x30;
         goto LAB_001025b8;
      }
      switchD_001025a1_caseD_2000006:iVar1 = -0x86;
   }
   LAB_00102554:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int psa_hash_clone(int *param_1, int *param_2) {
   int iVar1;
   if (( ( *param_1 == 0 ) || ( *param_2 != 0 ) ) || ( *param_1 != 1 )) {
      iVar1 = -0x89;
   } else {
      *param_2 = 1;
      iVar1 = mbedtls_psa_hash_clone(param_1 + 2, param_2 + 2);
      if (( iVar1 != 0 ) && ( *param_2 != 0 )) {
         if (*param_2 == 1) {
            mbedtls_psa_hash_abort(param_2 + 2);
         }
         *param_2 = 0;
      }
   }
   return iVar1;
}undefined8 psa_mac_abort(int *param_1) {
   undefined8 uVar1;
   if (*param_1 != 0) {
      if (*param_1 == 1) {
         uVar1 = mbedtls_psa_mac_abort(param_1 + 2);
      } else {
         uVar1 = 0xffffff79;
      }
      *(ushort*)( param_1 + 1 ) = *(ushort*)( param_1 + 1 ) & 0xfe00;
      *param_1 = 0;
      return uVar1;
   }
   return 0;
}void psa_mac_sign_setup(void) {
   psa_mac_setup();
   return;
}void psa_mac_verify_setup(void) {
   psa_mac_setup();
   return;
}undefined8 psa_sign_hash_builtin(ushort *param_1, undefined8 param_2, undefined8 param_3, uint param_4) {
   undefined8 uVar1;
   if (*param_1 == 0x7001) {
      if (( ( param_4 & 0xfffffe00 ) == 0x6000200 ) || ( param_4 >> 8 == 0x60013 )) {
         uVar1 = mbedtls_psa_rsa_sign_hash();
         return uVar1;
      }
   } else {
      if (( *param_1 & 0xcf00 ) != 0x4100) {
         return 0xffffff7a;
      }
      if (( param_4 & 0xfffffe00 ) == 0x6000600) {
         uVar1 = mbedtls_psa_ecdsa_sign_hash();
         return uVar1;
      }
   }
   return 0xffffff79;
}undefined8 psa_sign_message_builtin(long param_1, undefined8 param_2, undefined8 param_3, uint param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9) {
   undefined8 uVar1;
   uint uVar2;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined1 local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( ( param_4 & 0xfffffe00 ) == 0x6000200 ) || ( ( param_4 & 0xffffff00 ) == 0x6001300 ) ) || ( ( param_4 & 0xfffffc00 ) == 0x6000400 ) ) || ( ( param_4 & 0xffffff00 ) == 0x6000900 )) {
      uVar2 = param_4 & 0xff;
      if (uVar2 != 0) {
         uVar2 = uVar2 | 0x2000000;
      }
      uVar1 = mbedtls_psa_hash_compute(uVar2, param_5, param_6, local_88, 0x40, &local_90);
      if ((int)uVar1 == 0) {
         if (*(uint*)( param_1 + 4 ) >> 8 == 0) {
            uVar1 = psa_sign_hash_builtin(param_1, param_2, param_3, param_4, local_88, local_90, param_7, param_8, param_9);
         } else {
            uVar1 = 0xffffff79;
         }
      }
   } else {
      uVar1 = 0xffffff7a;
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int psa_sign_internal_part_0_constprop_0(undefined8 param_1, int param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, void *param_6, size_t param_7, long *param_8) {
   int iVar1;
   ushort *puVar2;
   long in_FS_OFFSET;
   ushort *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = psa_get_and_lock_key_slot(param_1, &local_48);
   puVar2 = local_48;
   if (( iVar1 == 0 ) && ( iVar1 = psa_get_and_lock_key_slot_with_policy_part_0(&local_48, ( -(uint)(param_2 == 0) & 0xc00 ) + 0x400, param_3) ),puVar2 = local_48,iVar1 == 0) {
      if (( ~*local_48 & 0x7000 ) == 0) {
         if (param_2 == 0) {
            if (*(uint*)( local_48 + 2 ) >> 8 != 0) goto LAB_001029f1;
            iVar1 = psa_sign_hash_builtin(local_48, *(undefined8*)( local_48 + 0x14 ), *(undefined8*)( local_48 + 0x18 ), param_3, param_4, param_5, param_6, param_7, param_8);
         } else {
            iVar1 = psa_sign_message_builtin(local_48, *(undefined8*)( local_48 + 0x14 ), *(undefined8*)( local_48 + 0x18 ), param_3, param_4, param_5, param_6, param_7, param_8);
         }
         puVar2 = local_48;
         if (iVar1 == 0) {
            memset((void*)( (long)param_6 + *param_8 ), 0x21, param_7 - *param_8);
            iVar1 = psa_unregister_read_under_mutex(local_48);
            goto LAB_00102a1d;
         }
      } else {
         LAB_001029f1:iVar1 = -0x87;
      }
   }
   memset(param_6, 0x21, param_7);
   psa_unregister_read_under_mutex(puVar2);
   LAB_00102a1d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar1;
}undefined8 psa_verify_hash_builtin(ushort *param_1, undefined8 param_2, undefined8 param_3, uint param_4) {
   undefined8 uVar1;
   if (( *param_1 & 0xcfff ) == 0x4001) {
      if (( ( param_4 & 0xfffffe00 ) == 0x6000200 ) || ( param_4 >> 8 == 0x60013 )) {
         uVar1 = mbedtls_psa_rsa_verify_hash(param_1, param_2, param_3);
         return uVar1;
      }
   } else {
      if (( *param_1 & 0xcf00 ) != 0x4100) {
         return 0xffffff7a;
      }
      if (( param_4 & 0xfffffe00 ) == 0x6000600) {
         uVar1 = mbedtls_psa_ecdsa_verify_hash(param_1, param_2, param_3);
         return uVar1;
      }
   }
   return 0xffffff79;
}undefined8 psa_verify_message_builtin(long param_1, undefined8 param_2, undefined8 param_3, uint param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8) {
   undefined8 uVar1;
   uint uVar2;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined1 local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( ( param_4 & 0xfffffe00 ) == 0x6000200 ) || ( ( param_4 & 0xffffff00 ) == 0x6001300 ) ) || ( ( param_4 & 0xfffffc00 ) == 0x6000400 ) ) || ( ( param_4 & 0xffffff00 ) == 0x6000900 )) {
      uVar2 = param_4 & 0xff;
      if (uVar2 != 0) {
         uVar2 = uVar2 | 0x2000000;
      }
      uVar1 = mbedtls_psa_hash_compute(uVar2, param_5, param_6, local_88, 0x40, &local_90);
      if ((int)uVar1 == 0) {
         if (*(uint*)( param_1 + 4 ) >> 8 == 0) {
            uVar1 = psa_verify_hash_builtin(param_1, param_2, param_3, param_4, local_88, local_90, param_7, param_8);
         } else {
            uVar1 = 0xffffff79;
         }
      }
   } else {
      uVar1 = 0xffffff7a;
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void psa_interruptible_set_max_ops(undefined4 param_1) {
   psa_interruptible_max_ops = param_1;
   return;
}undefined4 psa_interruptible_get_max_ops(void) {
   return psa_interruptible_max_ops;
}undefined4 psa_sign_hash_get_num_ops(long param_1) {
   return *(undefined4*)( param_1 + 0xc );
}undefined4 psa_verify_hash_get_num_ops(long param_1) {
   return *(undefined4*)( param_1 + 0xc );
}int psa_sign_hash_complete(int *param_1, void *param_2, size_t param_3, undefined8 *param_4) {
   int iVar1;
   void *__s;
   int iVar2;
   iVar1 = *param_1;
   *param_4 = 0;
   if (iVar1 == 0) {
      *(byte*)( param_1 + 2 ) = *(byte*)( param_1 + 2 ) | 1;
      iVar2 = -0x89;
   } else {
      if (( *(byte*)( param_1 + 2 ) & 1 ) == 0) {
         iVar2 = -0x8a;
         if (param_3 != 0) {
            __s = calloc(param_3, 1);
            if (__s != (void*)0x0) {
               param_1[3] = 0;
               memset(__s, 0x21, param_3);
               *(byte*)( param_1 + 2 ) = *(byte*)( param_1 + 2 ) | 1;
               *param_1 = 0;
               if (param_2 != (void*)0x0) {
                  memcpy(param_2, __s, param_3);
                  mbedtls_zeroize_and_free(__s, param_3);
                  return ( iVar1 == 1 ) - 0x87;
               }
               return -0x97;
            }
            iVar2 = -0x8d;
         }
      } else {
         iVar2 = -0x89;
      }
      *(byte*)( param_1 + 2 ) = *(byte*)( param_1 + 2 ) | 1;
      *param_1 = 0;
   }
   return iVar2;
}int psa_sign_hash_abort(int *param_1) {
   int iVar1;
   int iVar2;
   iVar1 = *param_1;
   iVar2 = 0;
   if (iVar1 != 0) {
      *param_1 = 0;
      iVar2 = ( iVar1 == 1 ) - 0x87;
   }
   *(byte*)( param_1 + 2 ) = *(byte*)( param_1 + 2 ) & 0xfe;
   param_1[3] = 0;
   return iVar2;
}int psa_verify_hash_complete(int *param_1) {
   int iVar1;
   if (*param_1 != 0) {
      if (( *(byte*)( param_1 + 2 ) & 1 ) == 0) {
         param_1[3] = 0;
         iVar1 = ( *param_1 == 1 ) - 0x87;
      } else {
         iVar1 = -0x89;
      }
      *(byte*)( param_1 + 2 ) = *(byte*)( param_1 + 2 ) | 1;
      *param_1 = 0;
      return iVar1;
   }
   *(byte*)( param_1 + 2 ) = *(byte*)( param_1 + 2 ) | 1;
   return -0x89;
}int psa_verify_hash_abort(int *param_1) {
   int iVar1;
   int iVar2;
   iVar1 = *param_1;
   iVar2 = 0;
   if (iVar1 != 0) {
      *param_1 = 0;
      iVar2 = ( iVar1 == 1 ) - 0x87;
   }
   *(byte*)( param_1 + 2 ) = *(byte*)( param_1 + 2 ) & 0xfe;
   param_1[3] = 0;
   return iVar2;
}void mbedtls_psa_interruptible_set_max_ops(void) {
   return;
}undefined8 mbedtls_psa_sign_hash_get_num_ops(void) {
   return 0;
}undefined8 mbedtls_psa_verify_hash_get_num_ops(void) {
   return 0;
}int mbedtls_psa_sign_hash_start(undefined8 param_1, ushort *param_2) {
   int iVar1;
   iVar1 = -0x86;
   if (( *param_2 & 0xff00 ) == 0x7100) {
      iVar1 = ( ( byte ) * param_2 < 0x40 ) - 0x87;
   }
   return iVar1;
}undefined8 mbedtls_psa_sign_hash_complete(void) {
   return 0xffffff7a;
}undefined8 mbedtls_psa_sign_hash_abort(void) {
   return 0xffffff7a;
}int mbedtls_psa_verify_hash_start(undefined8 param_1, ushort *param_2) {
   int iVar1;
   iVar1 = -0x86;
   if (( *param_2 & 0xcf00 ) == 0x4100) {
      iVar1 = ( ( byte ) * param_2 < 0x40 ) - 0x87;
   }
   return iVar1;
}undefined8 mbedtls_psa_verify_hash_complete(void) {
   return 0xffffff7a;
}undefined8 mbedtls_psa_verify_hash_abort(void) {
   return 0xffffff7a;
}void psa_cipher_encrypt_setup(void) {
   psa_cipher_setup();
   return;
}void psa_cipher_decrypt_setup(void) {
   psa_cipher_setup();
   return;
}int psa_cipher_generate_iv(int *param_1, undefined8 *param_2, ulong param_3, ulong *param_4) {
   int iVar1;
   uint uVar2;
   undefined8 *puVar3;
   long lVar4;
   uint uVar5;
   ulong uVar6;
   ulong uVar7;
   int iVar8;
   iVar8 = *param_1;
   if (iVar8 == 0) {
      *param_4 = 0;
      return -0x89;
   }
   if (( *(byte*)( param_1 + 1 ) & 3 ) == 1) {
      uVar7 = ( ulong ) * (byte*)( (long)param_1 + 5 );
      uVar6 = uVar7;
      if (param_3 < uVar7) {
         iVar1 = -0x8a;
         LAB_00103186:param_2 = (undefined8*)0x0;
         *param_4 = 0;
         puVar3 = (undefined8*)0x0;
         uVar7 = 0;
         goto LAB_00102fca;
      }
      iVar1 = -0x84;
      if (0x10 < uVar7) goto LAB_00103186;
      if (uVar7 == 0) {
         puVar3 = (undefined8*)0x0;
         param_2 = (undefined8*)0x0;
      } else {
         puVar3 = (undefined8*)calloc(uVar7, 1);
         if (puVar3 == (undefined8*)0x0) {
            iVar1 = -0x8d;
            goto LAB_00103186;
         }
      }
      iVar1 = psa_generate_random_internal(puVar3, uVar7);
      if (iVar1 == 0) {
         iVar8 = *param_1;
         if (iVar8 == 1) {
            iVar1 = mbedtls_psa_cipher_set_iv(param_1 + 2, puVar3, uVar7);
            if (iVar1 == 0) {
               *param_4 = uVar7;
               *(byte*)( param_1 + 1 ) = *(byte*)( param_1 + 1 ) | 2;
               if (puVar3 == (undefined8*)0x0) {
                  return 0;
               }
               goto LAB_0010300b;
            }
            goto LAB_001031b0;
         }
         iVar1 = -0x87;
         *param_4 = 0;
         if (iVar8 == 0) goto LAB_00102fed;
         goto LAB_00102fe3;
      }
      LAB_001031b0:iVar8 = *param_1;
      *param_4 = 0;
      if (iVar8 != 0) goto LAB_00102fca;
   } else {
      *param_4 = 0;
      param_2 = (undefined8*)0x0;
      puVar3 = (undefined8*)0x0;
      iVar1 = -0x89;
      uVar7 = 0;
      uVar6 = 0;
      LAB_00102fca:if (iVar8 == 1) {
         mbedtls_psa_cipher_abort(param_1 + 2);
      }
      LAB_00102fe3:*(byte*)( param_1 + 1 ) = *(byte*)( param_1 + 1 ) & 0xfc;
      *param_1 = 0;
   }
   LAB_00102fed:if (puVar3 == (undefined8*)0x0) {
      return iVar1;
   }
   mbedtls_platform_zeroize(puVar3, uVar6);
   LAB_0010300b:if (param_2 == (undefined8*)0x0) {
      iVar1 = -0x97;
   } else {
      if (uVar7 != 0) {
         uVar2 = (uint)uVar7;
         if (uVar2 < 8) {
            if (( uVar7 & 4 ) == 0) {
               if (( uVar2 != 0 ) && ( *(undefined1*)param_2 = *(undefined1*)puVar3(uVar7 & 2) != 0 )) {
                  *(undefined2*)( (long)param_2 + ( uVar7 - 2 ) ) = *(undefined2*)( (long)puVar3 + ( uVar7 - 2 ) );
               }
            } else {
               *(undefined4*)param_2 = *(undefined4*)puVar3;
               *(undefined4*)( (long)param_2 + ( uVar7 - 4 ) ) = *(undefined4*)( (long)puVar3 + ( uVar7 - 4 ) );
            }
         } else {
            *param_2 = *puVar3;
            *(undefined8*)( (long)param_2 + ( uVar7 - 8 ) ) = *(undefined8*)( (long)puVar3 + ( uVar7 - 8 ) );
            lVar4 = (long)param_2 - ( ( ulong )(param_2 + 1) & 0xfffffffffffffff8 );
            uVar2 = (int)lVar4 + uVar2 & 0xfffffff8;
            if (7 < uVar2) {
               uVar6 = 0;
               do {
                  uVar5 = (int)uVar6 + 8;
                  *(undefined8*)( ( ( ulong )(param_2 + 1) & 0xfffffffffffffff8 ) + uVar6 ) = *(undefined8*)( (long)puVar3 + ( uVar6 - lVar4 ) );
                  uVar6 = (ulong)uVar5;
               } while ( uVar5 < uVar2 );
            }
         }
      }
      mbedtls_zeroize_and_free(puVar3, uVar7);
   }
   return iVar1;
}undefined8 psa_cipher_abort(int *param_1) {
   if (*param_1 == 0) {
      return 0;
   }
   if (*param_1 == 1) {
      mbedtls_psa_cipher_abort(param_1 + 2);
   }
   *(byte*)( param_1 + 1 ) = *(byte*)( param_1 + 1 ) & 0xfc;
   *param_1 = 0;
   return 0;
}undefined4 psa_aead_abort(int *param_1) {
   undefined4 uVar1;
   ulong uVar2;
   undefined8 *puVar3;
   byte bVar4;
   bVar4 = 0;
   if (*param_1 != 0) {
      if (*param_1 == 1) {
         uVar1 = mbedtls_psa_aead_abort(param_1 + 10);
      } else {
         uVar1 = 0xffffff79;
      }
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[0x74] = 0;
      param_1[0x75] = 0;
      puVar3 = (undefined8*)( ( ulong )(param_1 + 2) & 0xfffffffffffffff8 );
      for (uVar2 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 2) & 0xfffffffffffffff8 ) ) + 0x1d8U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
         *puVar3 = 0;
         puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
      }
      return uVar1;
   }
   return 0;
}int psa_aead_setup(int *param_1, uint param_2, ulong param_3, ulong param_4) {
   undefined8 uVar1;
   undefined8 uVar2;
   char cVar3;
   int iVar4;
   uint uVar5;
   int iVar6;
   undefined2 *puVar7;
   uint uVar8;
   long in_FS_OFFSET;
   undefined2 *local_48;
   long local_40;
   param_3 = param_3 & 0xffffffff;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (undefined2*)0x0;
   iVar4 = psa_aead_check_algorithm(param_4 & 0xffffffff);
   if (iVar4 == 0) {
      if (( *param_1 == 0 ) && ( ( *(byte*)( param_1 + 8 ) & 0xf ) == 0 )) {
         iVar4 = psa_get_and_lock_key_slot(param_3 & 0xffffffff, &local_48);
         if (iVar4 == 0) {
            iVar4 = psa_get_and_lock_key_slot_with_policy_part_0(&local_48, ( -(uint)(param_2 == 0) & 0x100 ) + 0x100, param_4 & 0xffffffff);
            if (iVar4 == 0) {
               uVar8 = (uint)param_4 & 0xffc07fff;
               uVar5 = ( uint )(param_4 >> 0x10) & 0x3f;
               cVar3 = (char)uVar5;
               if (uVar8 == 0x5400100) {
                  if (( ( byte )(cVar3 - 4U) < 0xd ) && ( ( param_4 >> 0x10 & 1 ) == 0 )) {
                     LAB_00103393:uVar1 = *(undefined8*)( local_48 + 0x18 );
                     uVar2 = *(undefined8*)( local_48 + 0x14 );
                     if (param_2 == 0) {
                        if (*(uint*)( local_48 + 2 ) >> 8 != 0) goto LAB_001034e8;
                        *param_1 = 1;
                        iVar4 = mbedtls_psa_aead_decrypt_setup(param_1 + 10, local_48, uVar2, uVar1, param_4 & 0xffffffff);
                     } else {
                        if (*(uint*)( local_48 + 2 ) >> 8 != 0) {
                           LAB_001034e8:iVar4 = -0x87;
                           puVar7 = local_48;
                           goto LAB_00103474;
                        }
                        *param_1 = 1;
                        iVar4 = mbedtls_psa_aead_encrypt_setup(param_1 + 10, local_48, uVar2, uVar1, param_4 & 0xffffffff);
                     }
                     puVar7 = local_48;
                     if (iVar4 == 0) {
                        *(undefined2*)( param_1 + 2 ) = *local_48;
                        iVar4 = psa_unregister_read_under_mutex();
                        iVar6 = 0x5500100;
                        if (( uVar8 != 0x5400100 ) && ( iVar6 = uVar8 != 0x5400200 )) {
                           iVar6 = 0x5100500;
                        }
                        param_1[1] = iVar6;
                        *(byte*)( param_1 + 8 ) = *(byte*)( param_1 + 8 ) & 0xef | ( byte )(( param_2 & 1 ) << 4);
                        goto LAB_00103444;
                     }
                     goto LAB_00103474;
                  }
               } else if (uVar8 == 0x5400200) {
                  if (( 0x1f110UL >> uVar5 & 1 ) != 0) goto LAB_00103393;
               } else {
                  iVar4 = -0x86;
                  if (uVar8 != 0x5000500) goto LAB_00103498;
                  if (cVar3 == '\x10') goto LAB_00103393;
               }
               iVar4 = -0x87;
            }
         }
         LAB_00103498:psa_unregister_read_under_mutex(local_48);
      } else {
         iVar4 = -0x89;
         psa_unregister_read_under_mutex(0);
      }
   } else {
      puVar7 = (undefined2*)0x0;
      LAB_00103474:psa_unregister_read_under_mutex(puVar7);
   }
   psa_aead_abort(param_1);
   LAB_00103444:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar4;
}void psa_aead_encrypt_setup(undefined8 param_1, undefined4 param_2, undefined4 param_3) {
   psa_aead_setup(param_1, 1, param_2, param_3);
   return;
}void psa_aead_decrypt_setup(undefined8 param_1, undefined4 param_2, undefined4 param_3) {
   psa_aead_setup(param_1, 0, param_2, param_3);
   return;
}int psa_aead_set_nonce_internal(int *param_1, undefined8 param_2, long param_3) {
   int iVar1;
   uint uVar2;
   if (( *param_1 == 0 ) || ( ( *(byte*)( param_1 + 8 ) & 1 ) != 0 )) {
      iVar1 = -0x89;
      goto LAB_0010357d;
   }
   uVar2 = param_1[1] & 0xffc07fff;
   if (uVar2 == 0x5400100) {
      if (param_3 - 7U < 7) goto LAB_0010359a;
   } else if (uVar2 == 0x5400200) {
      if (param_3 != 0) goto LAB_0010359a;
   } else if (( param_3 == 0xc ) && ( uVar2 == 0x5000500 )) {
      LAB_0010359a:if (*param_1 == 1) {
         iVar1 = mbedtls_psa_aead_set_nonce(param_1 + 10);
         if (iVar1 == 0) {
            *(byte*)( param_1 + 8 ) = *(byte*)( param_1 + 8 ) | 1;
            return 0;
         }
         goto LAB_0010357d;
      }
   }
   iVar1 = -0x87;
   LAB_0010357d:psa_aead_abort(param_1);
   return iVar1;
}int psa_aead_set_lengths(int *param_1, ulong param_2, ulong param_3) {
   int iVar1;
   if (( *param_1 == 0 ) || ( ( *(byte*)( param_1 + 8 ) & 0xe ) != 0 )) {
      iVar1 = -0x89;
      goto LAB_00103646;
   }
   if (param_1[1] == 0x5500100) {
      if (param_2 < 0xff01) goto LAB_0010360a;
   } else if (( param_1[1] != 0x5500200 ) || ( ( param_2 >> 0x3d == 0 && ( param_3 < 0xfffffffe1 ) ) )) {
      LAB_0010360a:if (*param_1 == 1) {
         iVar1 = mbedtls_psa_aead_set_lengths(param_1 + 10, param_2, param_3);
         if (iVar1 == 0) {
            *(byte*)( param_1 + 8 ) = *(byte*)( param_1 + 8 ) | 2;
            *(ulong*)( param_1 + 4 ) = param_2;
            *(ulong*)( param_1 + 6 ) = param_3;
            return 0;
         }
         goto LAB_00103646;
      }
   }
   iVar1 = -0x87;
   LAB_00103646:psa_aead_abort(param_1);
   return iVar1;
}undefined4 psa_key_derivation_abort(uint *param_1) {
   uint uVar1;
   undefined4 uVar2;
   uVar1 = *param_1;
   if (( uVar1 & 0x7f000000 ) == 0x9000000) {
      uVar1 = uVar1 & 0xf600ffff | 0x8000000;
      LAB_001036ca:if (( uVar1 >> 8 == 0x80004 ) || ( ( uVar1 & 0xfffffb00 ) == 0x8000100 )) {
         free(*(void**)( param_1 + 4 ));
         if (param_1[0x2a] != 0) {
            if (param_1[0x2a] == 1) {
               uVar2 = mbedtls_psa_mac_abort(param_1 + 0x2c);
            } else {
               uVar2 = 0xffffff79;
            }
            *(ushort*)( param_1 + 0x2b ) = (ushort)param_1[0x2b] & 0xfe00;
            param_1[0x2a] = 0;
            goto LAB_0010378d;
         }
      } else {
         if (( uVar1 & 0xfffffe00 ) != 0x8000200) {
            if (uVar1 == 0x8000609) {
               uVar2 = 0;
               mbedtls_platform_zeroize(param_1 + 4, 0x20);
            } else {
               uVar2 = 0xffffff77;
            }
            goto LAB_0010378d;
         }
         for (int i = 0; i < 3; i++) {
            if (*(long*)( param_1 + ( 4*i + 6 ) ) != 0) {
               mbedtls_zeroize_and_free(*(long*)( param_1 + ( 4*i + 6 ) ), *(undefined8*)( param_1 + ( 4*i + 8 ) ));
            }
         }
         if (*(long*)( param_1 + 0x12 ) != 0) {
            uVar2 = 0;
            mbedtls_zeroize_and_free(*(long*)( param_1 + 0x12 ), *(undefined8*)( param_1 + 0x14 ));
            goto LAB_0010378d;
         }
      }
   } else if (uVar1 != 0) goto LAB_001036ca;
   uVar2 = 0;
   LAB_0010378d:mbedtls_platform_zeroize(param_1, 0x238);
   return uVar2;
}undefined8 psa_key_derivation_get_capacity(int *param_1, undefined8 *param_2) {
   if (*param_1 != 0) {
      *param_2 = *(undefined8*)( param_1 + 2 );
      return 0;
   }
   return 0xffffff77;
}undefined8 psa_key_derivation_set_capacity(int *param_1, ulong param_2) {
   if (*param_1 == 0) {
      return 0xffffff77;
   }
   if (param_2 <= *(ulong*)( param_1 + 2 )) {
      *(ulong*)( param_1 + 2 ) = param_2;
      return 0;
   }
   return 0xffffff79;
}bool psa_custom_key_parameters_are_default(int *param_1, long param_2) {
   return *param_1 == 0 && param_2 == 0;
}undefined8 psa_key_derivation_setup(uint *param_1, uint param_2) {
   undefined8 uVar1;
   if (*param_1 != 0) {
      return 0xffffff77;
   }
   if (( param_2 & 0xff00ffff ) == 0x9000000) {
      LAB_001038f0:uVar1 = 0xffffff79;
   } else {
      if (( param_2 & 0x7f000000 ) == 0x9000000) {
         if (( param_2 & 0xf6ff0000 | 0x9000000 ) != 0x9020000) {
            return 0xffffff7a;
         }
         if (( param_2 & 0xf600ffff | 0x8000000 ) == 0x8000609) {
            return 0xffffff79;
         }
      } else if (( param_2 & 0x7f000000 ) != 0x8000000) goto LAB_001038f0;
      uVar1 = psa_key_derivation_setup_kdf(param_1);
      if ((int)uVar1 == 0) {
         *param_1 = param_2;
      }
   }
   return uVar1;
}undefined8 psa_key_derivation_input_integer(uint *param_1) {
   undefined8 uVar1;
   if (( ( *param_1 & 0x7f000000 ) == 0x9000000 ) || ( uVar1 = 0xffffff77 * param_1 != 0 )) {
      uVar1 = 0xffffff79;
   }
   psa_key_derivation_abort();
   return uVar1;
}undefined8 psa_key_agreement_raw_builtin(void) {
   undefined8 uVar1;
   int in_ECX;
   if (in_ECX == 0x9020000) {
      uVar1 = mbedtls_psa_key_agreement_ecdh();
      return uVar1;
   }
   return 0xffffff7a;
}undefined4 psa_generate_random(void *param_1, size_t param_2) {
   int iVar1;
   undefined4 uVar2;
   void *__src;
   void *pvVar3;
   ulong uVar4;
   ulong uVar5;
   if (param_2 == 0) {
      if (DAT_0010ad01 != '\x02') {
         return 0xffffff77;
      }
      if (global_data != '\a') {
         return 0xffffff77;
      }
      return 0;
   }
   __src = calloc(param_2, 1);
   if (__src == (void*)0x0) {
      return 0xffffff73;
   }
   if (DAT_0010ad01 == '\x02') {
      uVar2 = 0xffffff77;
      pvVar3 = __src;
      uVar5 = param_2;
      if (global_data == '\a') {
         do {
            uVar4 = 0x400;
            if (uVar5 < 0x401) {
               uVar4 = uVar5;
            }
            iVar1 = mbedtls_ctr_drbg_random(&DAT_0010b058, pvVar3, uVar4);
            if (iVar1 != 0) {
               uVar2 = mbedtls_to_psa_error(iVar1);
               break;
            }
            uVar5 = uVar5 - uVar4;
            uVar2 = 0;
            pvVar3 = (void*)( (long)pvVar3 + uVar4 );
         } while ( uVar5 != 0 );
      }
      if (param_1 == (void*)0x0) {
         return 0xffffff69;
      }
   } else {
      if (param_1 == (void*)0x0) {
         return 0xffffff69;
      }
      uVar2 = 0xffffff77;
   }
   memcpy(param_1, __src, param_2);
   mbedtls_zeroize_and_free(__src, param_2);
   return uVar2;
}undefined8 psa_generate_key_internal(ushort *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7) {
   ushort uVar1;
   undefined8 uVar2;
   uVar1 = *param_1;
   if (( ( uVar1 & 0x7000 ) - 0x1000 & 0xe000 ) == 0) {
      uVar2 = psa_generate_random_internal(param_5, param_6);
      return uVar2;
   }
   if (uVar1 != 0x7001) {
      if (( uVar1 & 0xff00 ) == 0x7100) {
         uVar2 = mbedtls_psa_ecp_generate_key(param_1, param_5);
         return uVar2;
      }
      return 0xffffff7a;
   }
   uVar2 = mbedtls_psa_rsa_generate_key(param_1, param_3, param_4, param_5, param_6, param_7);
   return uVar2;
}/* WARNING: Type propagation algorithm not settling */int psa_generate_key_custom(ushort *param_1, int *param_2, undefined8 param_3, long param_4, undefined4 *param_5) {
   ushort uVar1;
   ushort uVar2;
   int iVar3;
   int iVar4;
   void *pvVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   size_t sVar9;
   long in_FS_OFFSET;
   long lStack_70;
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = param_1[1];
   *param_5 = 0;
   local_58[0] = 0;
   local_58[1] = 0;
   if (( ( ( uVar1 == 0 ) || ( ( *param_1 & 0x7000 ) == 0x4000 ) ) || ( ( *param_1 != 0x7001 && ( param_4 != 0 ) ) ) ) || ( *param_2 != 0 )) {
      iVar3 = -0x87;
      goto LAB_00103d2d;
   }
   lStack_70 = 0x103bd5;
   iVar3 = psa_start_key_creation_isra_0(param_1, local_58, local_58 + 1);
   lVar7 = local_58[0];
   if (iVar3 == 0) {
      sVar9 = *(size_t*)( local_58[0] + 0x30 );
      uVar8 = *(uint*)( param_1 + 2 );
      if (sVar9 == 0) {
         if (uVar8 >> 8 == 0) {
            uVar1 = *param_1;
            uVar2 = param_1[1];
            uVar8 = (uint)uVar2;
            if (( ( uVar1 & 0x7000 ) - 0x1000 & 0xe000 ) == 0) {
               uVar8 = (uint)uVar2;
               iVar3 = psa_validate_unstructured_key_bit_size();
               if (iVar3 == 0) {
                  LAB_00103c34:uVar8 = ( uVar8 & 0xffff ) + 7 >> 3;
                  LAB_00103c3d:local_58[2] = (long)uVar8;
                  goto LAB_00103c42;
               }
            } else {
               if (uVar1 == 0x7001) {
                  if (( (ulong)uVar2 - 0x400 < 0xc01 ) && ( ( uVar2 & 7 ) == 0 )) {
                     uVar1 = ( uVar2 >> 1 ) + 1;
                     uVar8 = ( uVar1 >> 3 ) + 0x3b + ( uVar1 & 0xfff8 );
                     goto LAB_00103c3d;
                  }
               } else if (uVar1 >> 8 == 0x71) goto LAB_00103c34;
               iVar3 = -0x86;
            }
         } else {
            iVar3 = psa_driver_wrapper_get_key_buffer_size(param_1, local_58 + 2);
            lVar7 = local_58[0];
            if (iVar3 == 0) {
               LAB_00103c42:sVar9 = local_58[2];
               if (*(long*)( lVar7 + 0x28 ) == 0) {
                  lStack_70 = 0x103c5f;
                  pvVar5 = calloc(1, local_58[2]);
                  *(void**)( lVar7 + 0x28 ) = pvVar5;
                  if (pvVar5 != (void*)0x0) {
                     *(size_t*)( lVar7 + 0x30 ) = sVar9;
                     uVar8 = *(uint*)( param_1 + 2 );
                     lVar6 = lVar7;
                     goto LAB_00103c7b;
                  }
                  iVar3 = -0x8d;
               } else {
                  iVar3 = -0x8b;
               }
               goto LAB_00103d25;
            }
         }
         goto LAB_00103d20;
      }
      pvVar5 = *(void**)( local_58[0] + 0x28 );
      lVar6 = local_58[0];
      LAB_00103c7b:lVar7 = lVar6;
      if (( *param_2 == 0 ) && ( param_4 == 0 )) {
         if (uVar8 >> 8 == 0) {
            LAB_00103c9f:iVar4 = psa_generate_key_internal(param_1, param_2, param_3, param_4, pvVar5, sVar9, lVar6 + 0x30);
            lVar6 = local_58[0];
            if (iVar4 == 0) {
               if (( *(char*)( local_58[0] + 4 ) == '\0' ) || ( iVar3 = psa_save_persistent_key(local_58[0], *(undefined8*)( local_58[0] + 0x28 ), *(undefined8*)( local_58[0] + 0x30 )) ),lVar7 = local_58[0],iVar3 == 0) {
                  *param_5 = *(undefined4*)( lVar6 + 0x14 );
                  if (*(int*)( lVar6 + 0x18 ) == 1) {
                     *(undefined4*)( lVar6 + 0x18 ) = 2;
                     iVar3 = iVar4;
                     goto LAB_00103d2d;
                  }
                  *param_5 = 0;
                  iVar3 = -0x97;
                  lVar7 = local_58[0];
               }
               goto LAB_00103d20;
            }
            pvVar5 = *(void**)( local_58[0] + 0x28 );
            lVar6 = lStack_70;
            lVar7 = local_58[0];
            iVar3 = iVar4;
         } else {
            iVar3 = -0x87;
         }
      } else {
         if (uVar8 >> 8 == 0) goto LAB_00103c9f;
         iVar3 = -0x86;
      }
      if (pvVar5 != (void*)0x0) {
         mbedtls_zeroize_and_free(pvVar5, *(undefined8*)( lVar7 + 0x30 ), lVar6);
         *(undefined8*)( lVar7 + 0x28 ) = 0;
         *(undefined8*)( lVar7 + 0x30 ) = 0;
         lVar7 = local_58[0];
         goto LAB_00103d20;
      }
      *(undefined8*)( lVar7 + 0x28 ) = 0;
      *(undefined8*)( lVar7 + 0x30 ) = 0;
   } else {
      LAB_00103d20:if (lVar7 == 0) goto LAB_00103d2d;
   }
   LAB_00103d25:psa_wipe_key_slot(lVar7);
   LAB_00103d2d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar3;
}void psa_generate_key_ext(undefined8 param_1, long param_2, undefined8 param_3, undefined8 param_4) {
   psa_generate_key_custom(param_1, param_2, param_2 + 4, param_3, param_4);
   return;
}void psa_generate_key(undefined8 param_1, undefined8 param_2) {
   psa_generate_key_custom(param_1, &default_custom_production, 0, 0, param_2);
   return;
}undefined8 mbedtls_psa_crypto_configure_entropy_sources(undefined8 param_1, undefined8 param_2) {
   if (DAT_0010ad01 == '\0') {
      DAT_0010ad08 = param_1;
      DAT_0010ad10 = param_2;
      return 0;
   }
   return 0xffffff77;
}void mbedtls_psa_crypto_free(void) {
   if (( global_data & 4 ) != 0) {
      global_data = global_data & 0xfb;
   }
   if (( global_data & 2 ) == 0) {
      if (DAT_0010ad01 == '\0') goto LAB_00103f39;
   } else {
      psa_wipe_all_key_slots();
      global_data = global_data & 0xfd;
      if (DAT_0010ad01 == '\0') goto LAB_00103f39;
   }
   mbedtls_ctr_drbg_free(&DAT_0010b058);
   ( *DAT_0010ad10 )(&DAT_0010ad18);
   LAB_00103f39:DAT_0010ad01 = 0;
   mbedtls_platform_zeroize(&DAT_0010ad08, 0x4a8);
   if (( global_data & 1 ) != 0) {
      global_data = global_data & 0xfe;
   }
   return;
}int psa_crypto_init(void) {
   byte bVar1;
   undefined4 uVar2;
   int iVar3;
   byte bVar4;
   long in_FS_OFFSET;
   undefined4 local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( DAT_0010ad01 != '\x02' ) || ( global_data != 7 )) {
      if (( global_data & 1 ) == 0) {
         bVar4 = global_data | 1;
         bVar1 = global_data & 2;
         global_data = bVar4;
         if (bVar1 != 0) goto LAB_00103fda;
         LAB_0010402e:iVar3 = psa_initialize_key_slots();
         global_data = global_data | 2;
         if (iVar3 == 0) goto LAB_00103fda;
         LAB_00104068:mbedtls_psa_crypto_free();
         goto LAB_00104000;
      }
      if (( global_data & 2 ) == 0) goto LAB_0010402e;
      LAB_00103fda:if (( DAT_0010ad01 == '\0' ) && ( ( global_data & 1 ) != 0 )) {
         if (DAT_0010ad08 == (code*)0x0) {
            DAT_0010ad08 = (code*)&mbedtls_entropy_init;
         }
         if (DAT_0010ad10 == (undefined*)0x0) {
            DAT_0010ad10 = &mbedtls_entropy_free;
         }
         ( *DAT_0010ad08 )(&DAT_0010ad18);
         mbedtls_ctr_drbg_init(&DAT_0010b058);
         DAT_0010ad01 = '\x01';
         local_24 = 0x415350;
         uVar2 = mbedtls_ctr_drbg_seed(&DAT_0010b058, &mbedtls_entropy_func, &DAT_0010ad18, &local_24, 3);
         iVar3 = mbedtls_to_psa_error(uVar2);
         if (iVar3 != 0) goto LAB_00104068;
         DAT_0010ad01 = '\x02';
      }
      if (( global_data & 4 ) == 0) {
         global_data = global_data | 4;
      }
   }
   iVar3 = 0;
   LAB_00104000:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar3;
}undefined8 psa_crypto_driver_pake_get_password_len(long param_1, long *param_2) {
   if (*(long*)( param_1 + 8 ) != 0) {
      *param_2 = *(long*)( param_1 + 8 );
      return 0;
   }
   return 0xffffff77;
}undefined8 psa_crypto_driver_pake_get_password(undefined8 *param_1, void *param_2, ulong param_3, undefined8 *param_4) {
   ulong __n;
   undefined8 uVar1;
   __n = param_1[1];
   if (__n == 0) {
      uVar1 = 0xffffff77;
   } else if (param_3 < __n) {
      uVar1 = 0xffffff76;
   } else {
      memcpy(param_2, (void*)*param_1, __n);
      *param_4 = param_1[1];
      uVar1 = 0;
   }
   return uVar1;
}undefined8 psa_crypto_driver_pake_get_user_len(long param_1, long *param_2) {
   if (*(long*)( param_1 + 0x18 ) != 0) {
      *param_2 = *(long*)( param_1 + 0x18 );
      return 0;
   }
   return 0xffffff77;
}undefined8 psa_crypto_driver_pake_get_user(long param_1, void *param_2, ulong param_3, undefined8 *param_4) {
   ulong __n;
   undefined8 uVar1;
   __n = *(ulong*)( param_1 + 0x18 );
   if (__n == 0) {
      uVar1 = 0xffffff77;
   } else if (param_3 < __n) {
      uVar1 = 0xffffff76;
   } else {
      memcpy(param_2, *(void**)( param_1 + 0x10 ), __n);
      *param_4 = *(undefined8*)( param_1 + 0x18 );
      uVar1 = 0;
   }
   return uVar1;
}undefined8 psa_crypto_driver_pake_get_peer_len(long param_1, long *param_2) {
   if (*(long*)( param_1 + 0x28 ) != 0) {
      *param_2 = *(long*)( param_1 + 0x28 );
      return 0;
   }
   return 0xffffff77;
}undefined8 psa_crypto_driver_pake_get_peer(long param_1, void *param_2, ulong param_3, undefined8 *param_4) {
   ulong __n;
   undefined8 uVar1;
   __n = *(ulong*)( param_1 + 0x28 );
   if (__n == 0) {
      uVar1 = 0xffffff77;
   } else if (param_3 < __n) {
      uVar1 = 0xffffff76;
   } else {
      memcpy(param_2, *(void**)( param_1 + 0x20 ), __n);
      *param_4 = *(undefined8*)( param_1 + 0x28 );
      uVar1 = 0;
   }
   return uVar1;
}undefined8 psa_crypto_driver_pake_get_cipher_suite(long param_1, undefined8 *param_2) {
   if (*(int*)( param_1 + 0x48 ) != 0) {
      *param_2 = *(undefined8*)( param_1 + 0x48 );
      *(undefined4*)( param_2 + 1 ) = *(undefined4*)( param_1 + 0x50 );
      return 0;
   }
   return 0xffffff77;
}undefined4 psa_pake_abort(int *param_1) {
   char cVar1;
   undefined4 uVar2;
   ulong uVar3;
   undefined8 *puVar4;
   byte bVar5;
   bVar5 = 0;
   uVar2 = 0;
   cVar1 = (char)param_1[3];
   if (cVar1 == '\x02') {
      if (*param_1 != 1) {
         uVar2 = 0xffffff79;
         goto LAB_001042fb;
      }
      uVar2 = mbedtls_psa_pake_abort(param_1 + 8);
      cVar1 = (char)param_1[3];
   }
   if (cVar1 == '\x01') {
      if (*(long*)( param_1 + 8 ) != 0) {
         mbedtls_zeroize_and_free(*(long*)( param_1 + 8 ), *(undefined8*)( param_1 + 10 ));
      }
      if (*(void**)( param_1 + 0xc ) != (void*)0x0) {
         free(*(void**)( param_1 + 0xc ));
      }
      if (*(void**)( param_1 + 0x10 ) != (void*)0x0) {
         free(*(void**)( param_1 + 0x10 ));
      }
   }
   LAB_001042fb:param_1[0] = 0;
   param_1[1] = 0;
   param_1[0xe2] = 0;
   param_1[0xe3] = 0;
   puVar4 = (undefined8*)( ( ulong )(param_1 + 2) & 0xfffffffffffffff8 );
   for (uVar3 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 2) & 0xfffffffffffffff8 ) ) + 0x390U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
   }
   return uVar2;
}undefined8 psa_pake_setup(long param_1, uint *param_2) {
   uint uVar1;
   ulong uVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   if (*(char*)( param_1 + 0xc ) == '\0') {
      if (( *param_2 & 0x7f000000 ) == 0xa000000) {
         uVar3 = 0xffffff79;
         if (( param_2[2] & 0x7f000000 ) == 0x2000000) {
            *(undefined8*)( param_1 + 0x20 ) = 0;
            uVar3 = 0xffffff7a;
            *(undefined8*)( param_1 + 0x70 ) = 0;
            puVar4 = (undefined8*)( param_1 + 0x28U & 0xfffffffffffffff8 );
            uVar2 = ( ulong )(( (int)param_1 - (int)puVar4 ) + 0x78U >> 3);
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
               *puVar4 = 0;
               puVar4 = puVar4 + 1;
            }
            uVar1 = *param_2;
            *(ulong*)( param_1 + 4 ) = CONCAT44((uint)(byte)param_2[1] << 0x18 | ( uint ) * (byte*)( (long)param_2 + 5 ) << 0x10 | ( uint ) * (ushort*)( (long)param_2 + 6 ), uVar1);
            *(undefined8*)( param_1 + 0x68 ) = *(undefined8*)param_2;
            *(uint*)( param_1 + 0x70 ) = param_2[2];
            if (uVar1 == 0xa000100) {
               *(undefined4*)( param_1 + 0x18 ) = 0;
               *(undefined8*)( param_1 + 0x10 ) = 0;
               *(undefined1*)( param_1 + 0x1a ) = 1;
               *(undefined1*)( param_1 + 0xc ) = 1;
               return 0;
            }
         }
      } else {
         uVar3 = 0xffffff79;
      }
   } else {
      uVar3 = 0xffffff77;
   }
   psa_pake_abort(param_1);
   return uVar3;
}int psa_pake_set_password_key(long param_1, undefined4 param_2) {
   undefined4 uVar1;
   size_t __size;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   short *psVar5;
   int iVar6;
   void *pvVar7;
   long in_FS_OFFSET;
   short *local_38;
   long local_30;
   iVar6 = -0x89;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (short*)0x0;
   if (*(char*)( param_1 + 0xc ) == '\x01') {
      uVar1 = *(undefined4*)( param_1 + 4 );
      iVar6 = psa_get_and_lock_key_slot(param_2, &local_38);
      if (iVar6 == 0) {
         iVar6 = psa_get_and_lock_key_slot_with_policy_part_0(&local_38, 0x4000, uVar1);
         psVar5 = local_38;
         if (iVar6 == 0) {
            iVar6 = -0x87;
            if (( *local_38 + 0xedfdU & 0xfffd ) == 0) {
               __size = *(size_t*)( local_38 + 0x18 );
               pvVar7 = calloc(1, __size);
               *(void**)( param_1 + 0x20 ) = pvVar7;
               if (pvVar7 != (void*)0x0) {
                  __memcpy_chk(pvVar7, *(undefined8*)( psVar5 + 0x14 ), __size, __size);
                  uVar3 = *(undefined8*)psVar5;
                  uVar4 = *(undefined8*)( psVar5 + 4 );
                  *(undefined8*)( param_1 + 0x28 ) = *(undefined8*)( psVar5 + 0x18 );
                  uVar2 = *(undefined8*)( psVar5 + 8 );
                  *(undefined8*)( param_1 + 0x50 ) = uVar3;
                  *(undefined8*)( param_1 + 0x58 ) = uVar4;
                  *(undefined8*)( param_1 + 0x60 ) = uVar2;
                  iVar6 = psa_unregister_read_under_mutex(psVar5);
                  goto LAB_001044c5;
               }
               iVar6 = -0x8d;
            }
         }
      }
   }
   psa_pake_abort(param_1);
   psa_unregister_read_under_mutex(local_38);
   LAB_001044c5:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar6;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 psa_pake_set_role(long param_1, char param_2) {
   undefined8 uVar1;
   if (*(char*)( param_1 + 0xc ) == '\x01') {
      if (*(int*)( param_1 + 4 ) == 0xa000100) {
         if (param_2 == '\0') {
            return 0;
         }
         uVar1 = 0xffffff79;
      } else {
         uVar1 = 0xffffff7a;
      }
   } else {
      uVar1 = 0xffffff77;
   }
   psa_pake_abort();
   return uVar1;
}int psa_pake_output(int *param_1, byte param_2, void *param_3, size_t param_4, undefined8 *param_5) {
   void *__src;
   char cVar1;
   char cVar2;
   char cVar3;
   int iVar4;
   *param_5 = 0;
   cVar2 = (char)param_1[3];
   if (cVar2 == '\x01') {
      iVar4 = psa_pake_complete_inputs();
      if (iVar4 != 0) goto LAB_0010462a;
      cVar2 = (char)param_1[3];
   }
   if (cVar2 != '\x02') goto LAB_00104624;
   if (param_4 == 0) {
      LAB_00104760:iVar4 = -0x87;
      goto LAB_0010462a;
   }
   iVar4 = -0x86;
   if (param_1[1] != 0xa000100) goto LAB_0010462a;
   if (2 < ( byte )(param_2 - 1)) goto LAB_00104760;
   if (( 1 < (uint)param_1[4] ) || ( param_2 != *(byte*)( (long)param_1 + 0x1a ) )) {
      LAB_00104624:iVar4 = -0x89;
      goto LAB_0010462a;
   }
   if (( param_2 == 1 ) && ( (short)param_1[6] == 0 )) {
      param_1[5] = 1;
   } else if (param_1[5] != 1) goto LAB_00104624;
   if (param_1[4] == 0) {
      iVar4 = ( -(uint)(*(char *)((long)param_1 + 0x19) == '\0') & 0xfffffffd ) + 4;
   } else {
      iVar4 = ( uint )(param_1[5] != 1) * 3 + 7;
   }
   __src = calloc(param_4, 1);
   if (__src == (void*)0x0) {
      iVar4 = -0x8d;
      goto LAB_0010462a;
   }
   if (*param_1 == 1) {
      iVar4 = mbedtls_psa_pake_output(param_1 + 8, iVar4 + -1 + (uint)param_2, __src, param_4, param_5);
      if (iVar4 != 0) goto LAB_00104785;
      if (param_1[1] != 0xa000100) {
         iVar4 = -0x86;
         goto LAB_00104785;
      }
      cVar2 = *(char*)( (long)param_1 + 0x1a ) + '\x01';
      if (*(char*)( (long)param_1 + 0x1a ) == '\x03') {
         iVar4 = param_1[4];
         cVar2 = *(char*)( (long)param_1 + 0x19 ) + '\x01';
         *(char*)( (long)param_1 + 0x19 ) = cVar2;
         if (iVar4 == 2) {
            if (cVar2 == '\0') {
               cVar1 = '\0';
               cVar3 = (char)param_1[6];
               param_1[5] = 0;
               goto LAB_00104811;
            }
         } else if (iVar4 == 0) {
            if (cVar2 == '\x02') {
               cVar1 = '\x02';
               param_1[5] = 0;
               cVar3 = (char)param_1[6];
               goto LAB_00104811;
            }
         } else if (cVar2 == '\x01') {
            cVar3 = (char)param_1[6];
            cVar1 = '\x01';
            param_1[5] = 0;
            LAB_00104811:if (( cVar1 == cVar3 ) && ( cVar2 == cVar1 )) {
               *(undefined2*)( param_1 + 6 ) = 0;
               param_1[4] = iVar4 + 1;
            }
         }
         cVar2 = '\x01';
      }
      *(char*)( (long)param_1 + 0x1a ) = cVar2;
      if (param_3 != (void*)0x0) {
         memcpy(param_3, __src, param_4);
         mbedtls_zeroize_and_free(__src, param_4);
         return 0;
      }
   } else {
      iVar4 = -0x87;
      LAB_00104785:if (param_3 != (void*)0x0) {
         memcpy(param_3, __src, param_4);
         mbedtls_zeroize_and_free(__src, param_4);
         goto LAB_0010462a;
      }
   }
   iVar4 = -0x97;
   LAB_0010462a:psa_pake_abort(param_1);
   return iVar4;
}undefined8 psa_crypto_local_input_alloc(undefined8 param_1, size_t param_2, undefined8 *param_3) {
   void *pvVar1;
   undefined8 uVar2;
   *param_3 = 0;
   param_3[1] = 0;
   if (param_2 == 0) {
      return 0;
   }
   pvVar1 = calloc(param_2, 1);
   *param_3 = pvVar1;
   if (pvVar1 == (void*)0x0) {
      uVar2 = 0xffffff73;
   } else {
      param_3[1] = param_2;
      __memcpy_chk(pvVar1, param_1, param_2, param_2);
      uVar2 = 0;
   }
   return uVar2;
}int psa_import_key(short *param_1, undefined8 param_2, ulong param_3, undefined4 *param_4) {
   short *psVar1;
   int iVar2;
   int iVar3;
   void *pvVar4;
   uint uVar5;
   ulong *extraout_RDX;
   ulong uVar7;
   long in_FS_OFFSET;
   undefined8 uStack_80;
   short *local_70;
   undefined8 local_68;
   ulong local_60;
   undefined8 local_58;
   undefined8 local_50;
   long local_40;
   ulong *puVar6;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_4 = 0;
   local_70 = (short*)0x0;
   local_68 = 0;
   if (param_3 == 0) {
      iVar3 = -0x87;
      goto LAB_0010495d;
   }
   if (param_3 >> 0x3d != 0) {
      iVar3 = -0x86;
      goto LAB_0010495d;
   }
   iVar2 = psa_crypto_local_input_alloc(param_2, param_3, &local_58);
   if (iVar2 == 0) {
      uStack_80 = 0x10499f;
      iVar2 = psa_start_key_creation_isra_0(param_1, &local_70, &local_68);
      psVar1 = local_70;
      puVar6 = extraout_RDX;
      if (iVar2 == 0) {
         uVar7 = *(ulong*)( local_70 + 0x18 );
         uVar5 = *(uint*)( param_1 + 2 ) >> 8;
         puVar6 = (ulong*)(ulong)uVar5;
         if (uVar7 == 0) {
            if (uVar5 == 0) {
               if (*(long*)( local_70 + 0x14 ) == 0) {
                  uStack_80 = 0x104a28;
                  pvVar4 = calloc(1, param_3);
                  *(void**)( psVar1 + 0x14 ) = pvVar4;
                  if (pvVar4 != (void*)0x0) {
                     local_60 = (ulong)(ushort)psVar1[1];
                     *(ulong*)( psVar1 + 0x18 ) = param_3;
                     uVar7 = param_3;
                     goto LAB_00104a4c;
                  }
                  iVar2 = -0x8d;
                  mbedtls_zeroize_and_free(local_58, local_50);
               } else {
                  iVar2 = -0x8b;
                  mbedtls_zeroize_and_free(local_58, local_50);
               }
            } else {
               LAB_001049c2:iVar2 = -0x87;
               mbedtls_zeroize_and_free(local_58, local_50);
            }
            goto LAB_0010494e;
         }
         local_60 = (ulong)(ushort)local_70[1];
         pvVar4 = *(void**)( local_70 + 0x14 );
         if (uVar5 == 0) {
            LAB_00104a4c:puVar6 = &local_60;
            iVar3 = psa_import_key_into_slot(param_1, local_58, param_3, pvVar4, uVar7, psVar1 + 0x18);
            psVar1 = local_70;
            iVar2 = iVar3;
            if (iVar3 == 0) {
               if (local_70[1] == 0) {
                  local_70[1] = (short)local_60;
               } else if ((ushort)local_70[1] != local_60) goto LAB_001049c2;
               if (local_60 < 0xfff9) {
                  if (( ( *param_1 != 0 ) && ( *param_1 != *local_70 ) ) || ( ( param_1[1] != 0 && ( param_1[1] != local_70[1] ) ) )) goto LAB_001049c2;
                  if (( (char)local_70[2] == '\0' ) || ( iVar2 = psa_save_persistent_key(local_70, *(undefined8*)( local_70 + 0x14 ), *(undefined8*)( local_70 + 0x18 )) ),iVar2 == 0) {
                     *param_4 = *(undefined4*)( psVar1 + 10 );
                     if (*(int*)( psVar1 + 0xc ) == 1) {
                        psVar1[0xc] = 2;
                        psVar1[0xd] = 0;
                        mbedtls_zeroize_and_free(local_58, local_50);
                        goto LAB_0010495d;
                     }
                     iVar2 = -0x97;
                     *param_4 = 0;
                     mbedtls_zeroize_and_free(local_58, local_50);
                  } else {
                     mbedtls_zeroize_and_free(local_58, local_50);
                  }
               } else {
                  iVar2 = -0x86;
                  mbedtls_zeroize_and_free(local_58, local_50, local_60, uStack_80);
               }
               goto LAB_0010494e;
            }
         } else {
            iVar2 = -0x87;
         }
      }
      mbedtls_zeroize_and_free(local_58, local_50, puVar6);
   } else {
      mbedtls_zeroize_and_free(local_58, local_50);
   }
   LAB_0010494e:iVar3 = iVar2;
   if (local_70 != (short*)0x0) {
      psa_wipe_key_slot();
   }
   LAB_0010495d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar3;
}int psa_hash_update(int *param_1, undefined8 param_2, long param_3) {
   int iVar1;
   int iVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined8 local_40;
   long local_30;
   iVar2 = *param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   local_40 = 0;
   if (iVar2 == 0) {
      uVar3 = 0;
      iVar1 = -0x89;
   } else {
      iVar1 = 0;
      if (param_3 == 0) goto LAB_00104c0b;
      iVar1 = psa_crypto_local_input_alloc(param_2, param_3, &local_48);
      uVar3 = local_48;
      if (iVar1 == 0) {
         if (iVar2 == 1) {
            iVar1 = mbedtls_psa_hash_update(param_1 + 2, local_48, param_3);
            if (( iVar1 == 0 ) || ( iVar2 = iVar2 == 0 )) goto LAB_00104c87;
            goto LAB_00104c6d;
         }
         iVar1 = -0x89;
      } else {
         LAB_00104c6d:if (iVar2 == 1) {
            mbedtls_psa_hash_abort(param_1 + 2);
         }
      }
      *param_1 = 0;
   }
   LAB_00104c87:mbedtls_zeroize_and_free(uVar3, local_40);
   LAB_00104c0b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar1;
}int psa_hash_verify(int *param_1, undefined8 param_2, long param_3) {
   int iVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   long local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined1 local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   local_90 = 0;
   local_a0 = 0;
   if (*param_1 == 0) {
      uVar3 = 0;
      uVar2 = 0;
      mbedtls_platform_zeroize(local_88, 0x40);
      iVar1 = -0x89;
   } else {
      if (*param_1 == 1) {
         iVar1 = mbedtls_psa_hash_finish(param_1 + 2, local_88, 0x40, &local_a0);
         if (*param_1 != 0) {
            if (*param_1 == 1) {
               mbedtls_psa_hash_abort(param_1 + 2);
            }
            *param_1 = 0;
         }
         if (iVar1 == 0) {
            if (local_a0 == param_3) {
               iVar1 = psa_crypto_local_input_alloc(param_2, param_3, &local_98);
               uVar3 = local_98;
               if (iVar1 == 0) {
                  iVar1 = mbedtls_ct_memcmp(local_98, local_88, param_3);
                  uVar2 = local_90;
                  if (iVar1 == 0) {
                     mbedtls_platform_zeroize(local_88, 0x40);
                     iVar1 = 0;
                     goto LAB_00104db0;
                  }
                  mbedtls_platform_zeroize(local_88, 0x40);
                  iVar1 = -0x95;
               } else {
                  mbedtls_platform_zeroize(local_88, 0x40);
                  uVar2 = local_90;
                  uVar3 = local_98;
               }
            } else {
               uVar3 = 0;
               uVar2 = 0;
               mbedtls_platform_zeroize(local_88, 0x40);
               iVar1 = -0x95;
            }
            goto LAB_00104d94;
         }
      } else {
         *param_1 = 0;
         iVar1 = -0x89;
      }
      uVar3 = 0;
      uVar2 = 0;
      mbedtls_platform_zeroize(local_88, 0x40);
   }
   LAB_00104d94:if (*param_1 != 0) {
      if (*param_1 == 1) {
         mbedtls_psa_hash_abort(param_1 + 2);
      }
      *param_1 = 0;
   }
   LAB_00104db0:mbedtls_zeroize_and_free(uVar3, uVar2);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}uint psa_hash_compare(uint param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long param_5) {
   uint uVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   long local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined1 local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   local_90 = 0;
   if (( param_1 & 0x7f000000 ) == 0x2000000) {
      uVar1 = psa_crypto_local_input_alloc(param_2, param_3, &local_a8);
      if (uVar1 == 0) {
         uVar1 = mbedtls_psa_hash_compute(param_1, local_a8, param_3, local_88, 0x40, &local_b0);
         if (uVar1 == 0) {
            if (local_b0 == param_5) {
               uVar1 = psa_crypto_local_input_alloc(param_4, param_5, &local_98);
               uVar4 = local_98;
               uVar3 = local_90;
               if (uVar1 == 0) {
                  iVar2 = mbedtls_ct_memcmp(local_98, local_88, param_5);
                  uVar1 = -(uint)(iVar2 != 0) & 0xffffff6b;
                  uVar3 = local_90;
               }
            } else {
               uVar4 = 0;
               uVar1 = 0xffffff6b;
               uVar3 = 0;
            }
         } else {
            uVar4 = 0;
            uVar3 = 0;
         }
      } else {
         uVar4 = 0;
         uVar3 = 0;
      }
      mbedtls_platform_zeroize(local_88, 0x40);
      mbedtls_zeroize_and_free(local_a8, local_a0);
      mbedtls_zeroize_and_free(uVar4, uVar3);
   } else {
      uVar1 = 0xffffff79;
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar1;
}int psa_mac_update(int *param_1, undefined8 param_2, long param_3) {
   int iVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined8 local_40;
   long local_30;
   iVar1 = *param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (iVar1 == 0) {
      iVar2 = -0x89;
      goto LAB_00105079;
   }
   iVar2 = 0;
   if (param_3 == 0) goto LAB_00105079;
   iVar2 = psa_crypto_local_input_alloc(param_2, param_3, &local_48);
   if (iVar2 == 0) {
      if (iVar1 == 1) {
         iVar2 = mbedtls_psa_mac_update(param_1 + 2, local_48, param_3);
         if (( iVar2 == 0 ) || ( *param_1 == 0 )) goto LAB_001050f7;
         if (*param_1 == 1) {
            mbedtls_psa_mac_abort(param_1 + 2);
         }
      } else {
         iVar2 = -0x87;
      }
      *(ushort*)( param_1 + 1 ) = *(ushort*)( param_1 + 1 ) & 0xfe00;
      *param_1 = 0;
   }
   LAB_001050f7:mbedtls_zeroize_and_free(local_48, local_40);
   LAB_00105079:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int psa_mac_verify_finish(int *param_1, undefined8 param_2, ulong param_3) {
   int iVar1;
   int iVar2;
   int iVar3;
   undefined8 uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   long local_40;
   iVar3 = *param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_50 = 0;
   if (iVar3 == 0) {
      iVar1 = -0x89;
      mbedtls_zeroize_and_free(0, 0);
      goto LAB_001051ca;
   }
   if (( *(byte*)( (long)param_1 + 5 ) & 1 ) == 0) {
      uVar5 = ( ulong ) * (byte*)( param_1 + 1 );
      iVar2 = -0x95;
      if (( uVar5 != param_3 ) || ( iVar1 = psa_crypto_local_input_alloc(param_2, uVar5, &local_58) ),uVar4 = local_58,iVar2 = iVar1,iVar1 != 0) goto LAB_0010518c;
      if (iVar3 != 1) {
         iVar2 = -0x87;
         iVar1 = -0x87;
         goto LAB_001051aa;
      }
      iVar2 = mbedtls_psa_mac_verify_finish(param_1 + 2, local_58, uVar5);
      iVar3 = *param_1;
      if (iVar3 != 0) goto LAB_0010518c;
   } else {
      iVar2 = -0x89;
      LAB_0010518c:iVar1 = -0x87;
      if (iVar3 == 1) {
         iVar1 = mbedtls_psa_mac_abort(param_1 + 2);
      }
      LAB_001051aa:*(ushort*)( param_1 + 1 ) = *(ushort*)( param_1 + 1 ) & 0xfe00;
      *param_1 = 0;
      uVar4 = local_58;
   }
   mbedtls_zeroize_and_free(uVar4, local_50);
   if (iVar2 != 0) {
      iVar1 = iVar2;
   }
   LAB_001051ca:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar1;
}int psa_mac_verify(undefined4 param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, long param_6) {
   int iVar1;
   undefined8 extraout_RDX;
   undefined8 uVar2;
   undefined8 extraout_RDX_00;
   undefined8 extraout_RDX_01;
   undefined8 uVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 uStack_d0;
   long local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined1 local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   local_90 = 0;
   iVar1 = psa_crypto_local_input_alloc(param_3, param_4, &local_a8);
   if (iVar1 == 0) {
      uStack_d0 = 0;
      iVar1 = psa_mac_compute_internal(param_1, param_2, local_a8, param_4, local_88, 0x40, &local_b0);
      uVar2 = 0;
      if (iVar1 == 0) {
         if (local_b0 == param_6) {
            iVar1 = psa_crypto_local_input_alloc(param_5, param_6, &local_98);
            uVar4 = local_98;
            uVar2 = extraout_RDX_00;
            uVar3 = local_90;
            if (( iVar1 == 0 ) && ( iVar1 = mbedtls_ct_memcmp(local_98, local_88, param_6) ),uVar2 = extraout_RDX_01,uVar3 = local_90,iVar1 != 0) {
               iVar1 = -0x95;
               uVar2 = extraout_RDX_01;
            }
         } else {
            uVar4 = 0;
            iVar1 = -0x95;
            uVar2 = uStack_d0;
            uVar3 = 0;
         }
      } else {
         uVar4 = 0;
         uVar3 = 0;
      }
   } else {
      uVar4 = 0;
      uVar2 = extraout_RDX;
      uVar3 = 0;
   }
   mbedtls_platform_zeroize(local_88, 0x40, uVar2);
   mbedtls_zeroize_and_free(local_a8, local_a0);
   mbedtls_zeroize_and_free(uVar4, uVar3);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar1;
}int psa_verify_message(undefined4 param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   int iVar1;
   int iVar2;
   undefined8 extraout_RDX;
   undefined8 uVar3;
   undefined8 extraout_RDX_00;
   undefined8 extraout_RDX_01;
   undefined8 extraout_RDX_02;
   undefined8 extraout_RDX_03;
   long in_FS_OFFSET;
   long local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = psa_crypto_local_input_alloc(param_3, param_4, &local_68);
   if (iVar1 == 0) {
      iVar1 = psa_crypto_local_input_alloc(param_5, param_6, &local_58);
      uVar3 = extraout_RDX_00;
      if (( iVar1 == 0 ) && ( iVar1 = psa_sign_verify_check_alg(1, param_2) ),uVar3 = extraout_RDX_01,iVar1 == 0) {
         iVar1 = psa_get_and_lock_key_slot(param_1, &local_70);
         uVar3 = extraout_RDX_02;
         if (( iVar1 == 0 ) && ( iVar1 = psa_get_and_lock_key_slot_with_policy_part_0(&local_70, 0x800, param_2) ),uVar3 = extraout_RDX_03,iVar1 == 0) {
            uVar3 = local_58;
            iVar1 = psa_verify_message_builtin(local_70, *(undefined8*)( local_70 + 0x28 ), *(undefined8*)( local_70 + 0x30 ), param_2, local_68, param_4, local_58, param_6);
            iVar2 = psa_unregister_read_under_mutex(local_70);
            if (iVar1 == 0) {
               iVar1 = iVar2;
            }
         }
      }
   } else {
      uVar3 = extraout_RDX;
      local_58 = 0;
      local_50 = 0;
   }
   mbedtls_zeroize_and_free(local_68, local_60, uVar3);
   mbedtls_zeroize_and_free(local_58, local_50);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar1;
}int psa_verify_hash(undefined4 param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   int iVar1;
   int iVar2;
   undefined8 extraout_RDX;
   undefined8 uVar3;
   undefined8 extraout_RDX_00;
   undefined8 extraout_RDX_01;
   undefined8 extraout_RDX_02;
   undefined8 extraout_RDX_03;
   undefined8 extraout_RDX_04;
   undefined8 uVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   long local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = psa_crypto_local_input_alloc(param_3, param_4, &local_68);
   if (iVar1 == 0) {
      iVar1 = psa_crypto_local_input_alloc(param_5, param_6, &local_58);
      uVar3 = extraout_RDX_00;
      uVar4 = local_58;
      uVar5 = local_50;
      if (( iVar1 == 0 ) && ( iVar1 = psa_sign_verify_check_alg(0, param_2) ),uVar3 = extraout_RDX_01,uVar5 = local_50,iVar1 == 0) {
         iVar1 = psa_get_and_lock_key_slot(param_1, &local_70);
         uVar3 = extraout_RDX_02;
         if (( iVar1 == 0 ) && ( iVar1 = psa_get_and_lock_key_slot_with_policy_part_0(&local_70, 0x2000, param_2) ),uVar3 = extraout_RDX_03,iVar1 == 0) {
            if (*(uint*)( local_70 + 4 ) >> 8 == 0) {
               iVar1 = psa_verify_hash_builtin();
               iVar2 = psa_unregister_read_under_mutex(local_70);
               uVar3 = local_58;
               if (iVar1 == 0) {
                  iVar1 = iVar2;
               }
            } else {
               psa_unregister_read_under_mutex(local_70, *(undefined8*)( local_70 + 0x28 ), *(undefined8*)( local_70 + 0x30 ));
               uVar3 = extraout_RDX_04;
               iVar1 = -0x87;
            }
         }
      }
   } else {
      uVar3 = extraout_RDX;
      uVar4 = 0;
      uVar5 = 0;
   }
   mbedtls_zeroize_and_free(local_68, local_60, uVar3);
   mbedtls_zeroize_and_free(uVar4, uVar5);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar1;
}int psa_sign_hash_start(int *param_1, uint param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5) {
   ushort uVar1;
   uint uVar2;
   int iVar3;
   int iVar4;
   byte bVar5;
   ulong uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   ushort *local_60;
   undefined8 local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_50 = 0;
   if (( *param_1 != 0 ) || ( bVar5 = *(byte*)( param_1 + 2 )(bVar5 & 1) != 0 )) {
      iVar3 = -0x89;
      goto LAB_0010574c;
   }
   uVar6 = (ulong)param_2;
   iVar3 = psa_sign_verify_check_alg(0, param_3);
   if (iVar3 != 0) {
      *(byte*)( param_1 + 2 ) = bVar5 | 1;
      goto LAB_0010574c;
   }
   iVar3 = psa_get_and_lock_key_slot(uVar6 & 0xffffffff, &local_60);
   if (iVar3 == 0) {
      iVar3 = psa_get_and_lock_key_slot_with_policy_part_0(&local_60, 0x1000, param_3);
      if (iVar3 != 0) {
         iVar4 = *param_1;
         uVar7 = 0;
         uVar8 = 0;
         goto LAB_001057cd;
      }
      uVar1 = *local_60;
      if (( ~uVar1 & 0x7000 ) != 0) {
         iVar4 = *param_1;
         iVar3 = -0x87;
         uVar7 = 0;
         uVar8 = 0;
         goto LAB_001057cd;
      }
      iVar3 = psa_crypto_local_input_alloc(param_4, param_5, &local_58);
      uVar7 = local_58;
      uVar8 = local_50;
      if (iVar3 != 0) {
         iVar4 = *param_1;
         goto LAB_001057cd;
      }
      uVar2 = *(uint*)( local_60 + 2 );
      param_1[3] = 0;
      if (uVar2 >> 8 != 0) {
         iVar4 = *param_1;
         iVar3 = -0x87;
         goto LAB_001057cd;
      }
      *(byte*)( param_1 + 2 ) = *(byte*)( param_1 + 2 ) | 1;
      *param_1 = 1;
      if (( ( uVar1 & 0xff00 ) != 0x7100 ) || ( iVar3 = -0x87 ),(byte)uVar1 < 0x40) {
         iVar3 = -0x86;
      }
      LAB_001057d5:*param_1 = 0;
   } else {
      iVar4 = *param_1;
      uVar7 = 0;
      uVar8 = 0;
      LAB_001057cd:*(byte*)( param_1 + 2 ) = *(byte*)( param_1 + 2 ) | 1;
      if (iVar4 != 0) goto LAB_001057d5;
   }
   iVar4 = psa_unregister_read_under_mutex(local_60);
   if (iVar4 != 0) {
      *(byte*)( param_1 + 2 ) = *(byte*)( param_1 + 2 ) | 1;
   }
   mbedtls_zeroize_and_free(uVar7, uVar8);
   LAB_0010574c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar3;
}int psa_verify_hash_start(int *param_1, uint param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7) {
   ushort uVar1;
   uint uVar2;
   int iVar3;
   int iVar4;
   byte bVar5;
   ulong uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   ushort *local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   local_50 = 0;
   if (*param_1 == 0) {
      bVar5 = *(byte*)( param_1 + 2 );
      if (( bVar5 & 1 ) == 0) {
         uVar6 = (ulong)param_2;
         iVar3 = psa_sign_verify_check_alg(0, param_3);
         if (iVar3 != 0) {
            *(byte*)( param_1 + 2 ) = bVar5 | 1;
            goto LAB_0010594e;
         }
         iVar3 = psa_get_and_lock_key_slot(uVar6 & 0xffffffff, &local_70);
         if (iVar3 == 0) {
            iVar3 = psa_get_and_lock_key_slot_with_policy_part_0(&local_70, 0x2000, param_3);
            if (iVar3 == 0) {
               iVar3 = psa_crypto_local_input_alloc(param_4, param_5, &local_68);
               if (iVar3 == 0) {
                  iVar3 = psa_crypto_local_input_alloc(param_6, param_7, &local_58);
                  uVar7 = local_58;
                  uVar8 = local_50;
                  if (iVar3 != 0) {
                     iVar4 = *param_1;
                     goto LAB_001059d5;
                  }
                  uVar2 = *(uint*)( local_70 + 2 );
                  param_1[3] = 0;
                  if (uVar2 >> 8 != 0) {
                     iVar4 = *param_1;
                     iVar3 = -0x87;
                     goto LAB_001059d5;
                  }
                  uVar1 = *local_70;
                  *param_1 = 1;
                  *(byte*)( param_1 + 2 ) = *(byte*)( param_1 + 2 ) | 1;
                  if (( ( uVar1 & 0xcf00 ) != 0x4100 ) || ( iVar3 = -0x87 ),(byte)uVar1 < 0x40) {
                     iVar3 = -0x86;
                  }
                  LAB_001059dd:*param_1 = 0;
               } else {
                  iVar4 = *param_1;
                  uVar7 = 0;
                  uVar8 = 0;
                  LAB_001059d5:*(byte*)( param_1 + 2 ) = *(byte*)( param_1 + 2 ) | 1;
                  if (iVar4 != 0) goto LAB_001059dd;
               }
               iVar4 = psa_unregister_read_under_mutex(local_70);
               if (iVar4 != 0) {
                  *(byte*)( param_1 + 2 ) = *(byte*)( param_1 + 2 ) | 1;
               }
               mbedtls_zeroize_and_free(local_68, local_60);
               mbedtls_zeroize_and_free(uVar7, uVar8);
               goto LAB_0010594e;
            }
         }
         *(byte*)( param_1 + 2 ) = *(byte*)( param_1 + 2 ) | 1;
         goto LAB_0010594e;
      }
   }
   iVar3 = -0x89;
   LAB_0010594e:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int psa_cipher_set_iv(int *param_1, undefined8 param_2, ulong param_3) {
   int iVar1;
   int iVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined8 local_40;
   long local_30;
   iVar2 = *param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   local_40 = 0;
   if (iVar2 == 0) {
      iVar1 = -0x89;
      uVar3 = 0;
      goto LAB_00105b53;
   }
   if (( *(byte*)( param_1 + 1 ) & 3 ) == 1) {
      iVar1 = -0x87;
      if (( 0x10 < param_3 ) || ( iVar1 = psa_crypto_local_input_alloc(param_2, param_3, &local_48) ),uVar3 = local_48,iVar1 != 0) goto LAB_00105b31;
      if (iVar2 == 1) {
         iVar1 = mbedtls_psa_cipher_set_iv(param_1 + 2, local_48, param_3);
         if (iVar1 == 0) {
            *(byte*)( param_1 + 1 ) = *(byte*)( param_1 + 1 ) | 2;
            goto LAB_00105b53;
         }
         iVar2 = *param_1;
         if (iVar2 == 0) goto LAB_00105b53;
         goto LAB_00105b31;
      }
      iVar1 = -0x87;
   } else {
      iVar1 = -0x89;
      LAB_00105b31:if (iVar2 == 1) {
         mbedtls_psa_cipher_abort(param_1 + 2);
      }
   }
   *(byte*)( param_1 + 1 ) = *(byte*)( param_1 + 1 ) & 0xfc;
   *param_1 = 0;
   uVar3 = local_48;
   LAB_00105b53:mbedtls_zeroize_and_free(uVar3, local_40);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar1;
}int psa_aead_set_nonce(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = psa_crypto_local_input_alloc(param_2, param_3, &local_48);
   if (iVar1 == 0) {
      iVar1 = psa_aead_set_nonce_internal(param_1, local_48, param_3);
   }
   mbedtls_zeroize_and_free(local_48, local_40);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar1;
}int psa_aead_update_ad(int *param_1, undefined8 param_2, ulong param_3) {
   int iVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = psa_crypto_local_input_alloc(param_2, param_3, &local_48);
   iVar2 = iVar1;
   if (iVar1 == 0) {
      if (( *param_1 == 0 ) || ( ( *(byte*)( param_1 + 8 ) & 9 ) != 1 )) {
         LAB_00105d18:iVar2 = -0x89;
      } else {
         if (param_3 == 0) {
            LAB_00105d71:*(byte*)( param_1 + 8 ) = *(byte*)( param_1 + 8 ) | 4;
            iVar2 = iVar1;
            goto LAB_00105d25;
         }
         if (( *(byte*)( param_1 + 8 ) & 2 ) == 0) {
            if (param_1[1] == 0x5500100) goto LAB_00105d18;
            LAB_00105d59:if (*param_1 == 1) {
               iVar2 = mbedtls_psa_aead_update_ad(param_1 + 10, local_48, param_3);
               if (iVar2 != 0) goto LAB_00105d1d;
               goto LAB_00105d71;
            }
         } else if (param_3 <= *(ulong*)( param_1 + 4 )) {
            *(ulong*)( param_1 + 4 ) = *(ulong*)( param_1 + 4 ) - param_3;
            goto LAB_00105d59;
         }
         iVar2 = -0x87;
      }
   }
   LAB_00105d1d:psa_aead_abort(param_1);
   LAB_00105d25:mbedtls_zeroize_and_free(local_48, local_40);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}int psa_pake_set_user(long param_1, undefined8 param_2, size_t param_3) {
   void *pvVar1;
   int iVar2;
   void *__dest;
   long in_FS_OFFSET;
   void *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (void*)0x0;
   local_40 = 0;
   if (*(char*)( param_1 + 0xc ) == '\x01') {
      if (param_3 == 0) {
         iVar2 = -0x87;
         mbedtls_zeroize_and_free(0, 0);
      } else {
         if (*(long*)( param_1 + 0x38 ) != 0) goto LAB_00105e88;
         __dest = calloc(1, param_3);
         *(void**)( param_1 + 0x30 ) = __dest;
         if (__dest == (void*)0x0) {
            iVar2 = -0x8d;
            mbedtls_zeroize_and_free(0, 0);
         } else {
            iVar2 = psa_crypto_local_input_alloc(param_2, param_3, &local_48);
            pvVar1 = local_48;
            if (iVar2 == 0) {
               memcpy(__dest, local_48, param_3);
               *(size_t*)( param_1 + 0x38 ) = param_3;
               mbedtls_zeroize_and_free(pvVar1, local_40);
               goto LAB_00105e40;
            }
            mbedtls_zeroize_and_free(local_48, local_40);
         }
      }
   } else {
      LAB_00105e88:iVar2 = -0x89;
      mbedtls_zeroize_and_free(0, 0);
   }
   psa_pake_abort(param_1);
   LAB_00105e40:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int psa_pake_set_peer(long param_1, undefined8 param_2, size_t param_3) {
   void *pvVar1;
   int iVar2;
   void *__dest;
   long in_FS_OFFSET;
   void *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (void*)0x0;
   local_40 = 0;
   if (*(char*)( param_1 + 0xc ) == '\x01') {
      if (param_3 == 0) {
         iVar2 = -0x87;
         mbedtls_zeroize_and_free(0, 0);
      } else {
         if (*(long*)( param_1 + 0x48 ) != 0) goto LAB_00105fb8;
         __dest = calloc(1, param_3);
         *(void**)( param_1 + 0x40 ) = __dest;
         if (__dest == (void*)0x0) {
            iVar2 = -0x8d;
            mbedtls_zeroize_and_free(0, 0);
         } else {
            iVar2 = psa_crypto_local_input_alloc(param_2, param_3, &local_48);
            pvVar1 = local_48;
            if (iVar2 == 0) {
               memcpy(__dest, local_48, param_3);
               *(size_t*)( param_1 + 0x48 ) = param_3;
               mbedtls_zeroize_and_free(pvVar1, local_40);
               goto LAB_00105f70;
            }
            mbedtls_zeroize_and_free(local_48, local_40);
         }
      }
   } else {
      LAB_00105fb8:iVar2 = -0x89;
      mbedtls_zeroize_and_free(0, 0);
   }
   psa_pake_abort(param_1);
   LAB_00105f70:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int psa_pake_input(int *param_1, byte param_2, undefined8 param_3, long param_4) {
   uint uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   int iVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1[1] != 0xa000100 ) || ( uVar7 = param_1[2] != 0 )) {
      uVar7 = ( ulong )(-(uint)((byte)(param_2 - 1) < 2) & 0x21) + 0x20;
   }
   local_58 = 0;
   cVar4 = (char)param_1[3];
   local_50 = 0;
   if (cVar4 == '\x01') {
      iVar5 = psa_pake_complete_inputs(param_1);
      if (iVar5 == 0) {
         cVar4 = (char)param_1[3];
         goto LAB_00106068;
      }
      mbedtls_zeroize_and_free(0, 0);
   } else {
      LAB_00106068:if (cVar4 != '\x02') goto LAB_00106160;
      if (param_4 - 1U < uVar7) {
         if (param_1[1] == 0xa000100) {
            if (2 < ( byte )(param_2 - 1)) goto LAB_001062f0;
            uVar1 = param_1[4];
            if (( 1 < uVar1 ) || ( param_2 != *(byte*)( (long)param_1 + 0x1a ) )) {
               LAB_00106160:iVar5 = -0x89;
               mbedtls_zeroize_and_free(0, 0);
               goto LAB_0010616f;
            }
            if (( param_2 == 1 ) && ( (short)param_1[6] == 0 )) {
               param_1[5] = 0;
               if (uVar1 == 0) goto LAB_001061d2;
               LAB_001060c8:iVar6 = ( uint )(param_1[5] != 1) * 3 + 7;
            } else {
               if (param_1[5] != 0) goto LAB_00106160;
               if (uVar1 != 0) goto LAB_001060c8;
               LAB_001061d2:iVar6 = ( -(uint)((char)param_1[6] == '\0') & 0xfffffffd ) + 4;
            }
            iVar5 = psa_crypto_local_input_alloc(param_3, param_4, &local_58);
            uVar3 = local_50;
            uVar2 = local_58;
            if (iVar5 == 0) {
               if (*param_1 != 1) {
                  mbedtls_zeroize_and_free(local_58, local_50);
                  goto LAB_001062d5;
               }
               iVar5 = mbedtls_psa_pake_input(param_1 + 8, iVar6 + -1 + (uint)param_2, local_58, param_4);
               if (iVar5 == 0) {
                  if (param_1[1] != 0xa000100) {
                     mbedtls_zeroize_and_free(uVar2, uVar3);
                     goto LAB_001062b9;
                  }
                  if (*(char*)( (long)param_1 + 0x1a ) != '\x03') {
                     *(char*)( (long)param_1 + 0x1a ) = *(char*)( (long)param_1 + 0x1a ) + '\x01';
                     mbedtls_zeroize_and_free(uVar2, uVar3);
                     goto LAB_00106177;
                  }
                  iVar6 = param_1[4];
                  cVar4 = (char)param_1[6] + '\x01';
                  *(char*)( param_1 + 6 ) = cVar4;
                  if (iVar6 == 2) {
                     if (cVar4 == '\0') goto LAB_0010628c;
                  } else if (iVar6 == 0) {
                     if (cVar4 == '\x02') {
                        LAB_0010628c:param_1[5] = 1;
                        if (*(char*)( (long)param_1 + 0x19 ) == cVar4) {
                           *(undefined2*)( param_1 + 6 ) = 0;
                           param_1[4] = iVar6 + 1;
                        }
                     }
                  } else if (cVar4 == '\x01') goto LAB_0010628c;
                  *(undefined1*)( (long)param_1 + 0x1a ) = 1;
                  mbedtls_zeroize_and_free(uVar2, uVar3);
                  goto LAB_00106177;
               }
               mbedtls_zeroize_and_free(uVar2, uVar3);
            } else {
               mbedtls_zeroize_and_free(local_58, local_50);
            }
         } else {
            mbedtls_zeroize_and_free(0, 0);
            LAB_001062b9:iVar5 = -0x86;
         }
      } else {
         LAB_001062f0:mbedtls_zeroize_and_free(0, 0);
         LAB_001062d5:iVar5 = -0x87;
      }
   }
   LAB_0010616f:psa_pake_abort(param_1);
   LAB_00106177:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar5;
}void psa_crypto_local_input_free(undefined8 *param_1) {
   mbedtls_zeroize_and_free(*param_1, param_1[1]);
   *param_1 = 0;
   param_1[1] = 0;
   return;
}undefined8 psa_crypto_local_output_alloc(undefined8 param_1, size_t param_2, undefined1 (*param_3)[16]) {
   void *pvVar1;
   undefined8 uVar2;
   *(undefined8*)param_3[1] = 0;
   *param_3 = (undefined1[16])0x0;
   if (param_2 == 0) {
      return 0;
   }
   pvVar1 = calloc(param_2, 1);
   *(void**)( *param_3 + 8 ) = pvVar1;
   if (pvVar1 == (void*)0x0) {
      uVar2 = 0xffffff73;
   } else {
      *(size_t*)param_3[1] = param_2;
      uVar2 = 0;
      *(undefined8*)*param_3 = param_1;
   }
   return uVar2;
}undefined8 psa_crypto_local_output_free(undefined8 *param_1) {
   size_t __n;
   void *__src;
   __src = (void*)param_1[1];
   if (__src != (void*)0x0) {
      if ((void*)*param_1 == (void*)0x0) {
         return 0xffffff69;
      }
      __n = param_1[2];
      if (__n != 0) {
         memcpy((void*)*param_1, __src, __n);
         __n = param_1[2];
         __src = (void*)param_1[1];
      }
      mbedtls_zeroize_and_free(__src, __n);
      param_1[1] = 0;
   }
   param_1[2] = 0;
   return 0;
}ulong psa_export_key(undefined8 param_1, undefined8 param_2, size_t param_3, undefined8 *param_4) {
   ushort uVar1;
   ushort *puVar2;
   uint uVar3;
   uint uVar4;
   ulong uVar5;
   void *pvVar6;
   long in_FS_OFFSET;
   ushort *local_60;
   undefined1 local_58[16];
   size_t local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_48 = 0;
   if (param_3 == 0) {
      uVar5 = 0xffffff76;
   } else {
      *param_4 = 0;
      uVar5 = psa_get_and_lock_key_slot(param_1, &local_60);
      puVar2 = local_60;
      if ((int)uVar5 == 0) {
         uVar1 = *local_60;
         if (( ( uVar1 & 0x7000 ) == 0x4000 ) || ( ( local_60[4] & 1 ) != 0 )) {
            pvVar6 = calloc(param_3, 1);
            local_58._8_8_ = pvVar6;
            if (pvVar6 == (void*)0x0) {
               uVar3 = 0xffffff73;
            } else {
               local_58._0_8_ = param_2;
               local_48 = param_3;
               if (*(uint*)( puVar2 + 2 ) >> 8 == 0) {
                  if (( ( ( ( uVar1 & 0x7000 ) - 0x1000 & 0xe000 ) == 0 ) || ( ( uVar1 & 0xcfff ) == 0x4001 ) ) || ( ( ( uVar1 & 0xffffcf00 ) - 0x4100 & 0xfffffe00 ) == 0 )) {
                     uVar3 = psa_export_key_buffer_internal(*(undefined8*)( puVar2 + 0x14 ), *(undefined8*)( puVar2 + 0x18 ), pvVar6, param_3, param_4);
                  } else {
                     uVar3 = 0xffffff7a;
                  }
               } else {
                  uVar3 = 0xffffff79;
               }
            }
            uVar4 = psa_unregister_read_under_mutex(puVar2);
            uVar5 = psa_crypto_local_output_free(local_58);
            if ((int)uVar5 == 0) {
               if (uVar3 != 0) {
                  uVar4 = uVar3;
               }
               uVar5 = (ulong)uVar4;
            }
         } else {
            local_60 = (ushort*)0x0;
            psa_unregister_read_under_mutex(puVar2);
            uVar5 = 0xffffff7b;
         }
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ulong psa_export_public_key(undefined8 param_1, undefined8 param_2, size_t param_3, undefined8 *param_4) {
   uint uVar1;
   uint uVar2;
   ulong uVar3;
   void *pvVar4;
   long in_FS_OFFSET;
   ushort *local_40;
   undefined1 local_38[16];
   size_t local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (undefined1[16])0x0;
   local_28 = 0;
   if (param_3 == 0) {
      uVar3 = 0xffffff76;
   } else {
      *param_4 = 0;
      uVar3 = psa_get_and_lock_key_slot(param_1, &local_40);
      if ((int)uVar3 == 0) {
         pvVar4 = calloc(param_3, 1);
         local_38._8_8_ = pvVar4;
         if (pvVar4 == (void*)0x0) {
            uVar2 = 0xffffff73;
         } else {
            local_38._0_8_ = param_2;
            uVar2 = 0xffffff79;
            local_28 = param_3;
            if (( *local_40 & 0x4000 ) != 0) {
               uVar2 = psa_driver_wrapper_export_public_key(local_40, *(undefined8*)( local_40 + 0x14 ), *(undefined8*)( local_40 + 0x18 ), pvVar4, param_3, param_4);
            }
         }
         uVar1 = psa_unregister_read_under_mutex(local_40);
         uVar3 = psa_crypto_local_output_free(local_38);
         if (( (int)uVar3 == 0 ) && ( uVar3 = uVar2 != 0 )) {
            uVar3 = (ulong)uVar2;
         }
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int psa_hash_finish(int *param_1, undefined8 param_2, size_t param_3, undefined8 *param_4) {
   int iVar1;
   int iVar2;
   void *pvVar3;
   long in_FS_OFFSET;
   undefined1 local_48[16];
   size_t local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (undefined1[16])0x0;
   local_38 = 0;
   if (param_3 == 0) {
      pvVar3 = (void*)0x0;
   } else {
      pvVar3 = calloc(param_3, 1);
      local_48._8_8_ = pvVar3;
      if (pvVar3 == (void*)0x0) {
         iVar1 = -0x8d;
         goto LAB_0010672a;
      }
      local_48._0_8_ = param_2;
      local_38 = param_3;
   }
   iVar1 = *param_1;
   *param_4 = 0;
   if (iVar1 == 0) {
      iVar1 = -0x89;
   } else {
      if (iVar1 == 1) {
         iVar1 = mbedtls_psa_hash_finish(param_1 + 2, pvVar3, param_3, param_4);
         if (*param_1 == 0) goto LAB_0010672a;
         if (*param_1 == 1) {
            mbedtls_psa_hash_abort(param_1 + 2);
         }
      } else {
         iVar1 = -0x89;
      }
      *param_1 = 0;
   }
   LAB_0010672a:iVar2 = psa_crypto_local_output_free(local_48);
   if (iVar2 == 0) {
      iVar2 = iVar1;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int psa_hash_compute(uint param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, size_t param_5, undefined8 *param_6) {
   int iVar1;
   int iVar2;
   void *pvVar3;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   undefined1 local_58[16];
   size_t local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_6 = 0;
   local_58 = (undefined1[16])0x0;
   local_48 = 0;
   if (( param_1 & 0x7f000000 ) != 0x2000000) {
      iVar2 = -0x87;
      goto LAB_00106842;
   }
   iVar1 = psa_crypto_local_input_alloc(param_2, param_3, &local_68);
   if (iVar1 == 0) {
      pvVar3 = (void*)0x0;
      if (param_5 != 0) {
         pvVar3 = calloc(param_5, 1);
         local_58._8_8_ = pvVar3;
         if (pvVar3 == (void*)0x0) {
            iVar1 = -0x8d;
            goto LAB_00106826;
         }
         local_58._0_8_ = param_4;
         local_48 = param_5;
      }
      iVar1 = mbedtls_psa_hash_compute(param_1, local_68, param_3, pvVar3, param_5, param_6);
   }
   LAB_00106826:mbedtls_zeroize_and_free(local_68, local_60);
   iVar2 = psa_crypto_local_output_free(local_58);
   if (iVar2 == 0) {
      iVar2 = iVar1;
   }
   LAB_00106842:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ulong psa_mac_sign_finish(int *param_1, undefined8 param_2, size_t param_3, size_t *param_4) {
   byte bVar1;
   int iVar2;
   uint uVar3;
   ulong uVar4;
   void *__s;
   ulong uVar5;
   uint uVar6;
   long in_FS_OFFSET;
   undefined1 local_48[16];
   size_t local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (undefined1[16])0x0;
   local_38 = 0;
   if (param_3 == 0) {
      if (*param_1 == 0) {
         *param_4 = 0;
         *(undefined1*)( param_1 + 1 ) = 0;
         uVar6 = psa_crypto_local_output_free(local_48);
         uVar4 = (ulong)uVar6;
         if (uVar6 == 0) {
            uVar4 = 0xffffff77;
         }
         goto LAB_001069bb;
      }
      if (( *(byte*)( (long)param_1 + 5 ) & 1 ) != 0) {
         __s = (void*)0x0;
         uVar6 = 0xffffff77 - ( (char)param_1[1] != '\0' );
         goto LAB_0010695a;
      }
      *param_4 = 0;
      uVar6 = 0xffffff77;
      *(undefined1*)( param_1 + 1 ) = 0;
      LAB_0010697c:iVar2 = *param_1;
   } else {
      __s = calloc(param_3, 1);
      local_48._8_8_ = __s;
      if (__s != (void*)0x0) {
         local_48._0_8_ = param_2;
         local_38 = param_3;
         if (( *param_1 == 0 ) || ( ( *(byte*)( (long)param_1 + 5 ) & 1 ) == 0 )) {
            *param_4 = param_3;
            uVar6 = 0xffffff77;
            *(undefined1*)( param_1 + 1 ) = 0;
         } else {
            bVar1 = *(byte*)( param_1 + 1 );
            if (bVar1 == 0) {
               uVar6 = 0xffffff77;
            } else if (param_3 < bVar1) {
               uVar6 = 0xffffff76;
            } else if (*param_1 == 1) {
               uVar6 = mbedtls_psa_mac_sign_finish(param_1 + 2, __s, (ulong)bVar1, param_4);
               if (uVar6 == 0) {
                  param_3 = param_3 - *param_4;
                  __s = (void*)( (long)__s + *param_4 );
                  goto LAB_0010696c;
               }
            } else {
               uVar6 = 0xffffff79;
            }
            LAB_0010695a:*param_4 = param_3;
            *(undefined1*)( param_1 + 1 ) = 0;
            if (( param_3 == 0 ) || ( __s == (void*)0x0 )) goto LAB_0010697c;
         }
         LAB_0010696c:memset(__s, 0x21, param_3);
         goto LAB_0010697c;
      }
      *param_4 = param_3;
      iVar2 = *param_1;
      uVar6 = 0xffffff73;
      *(undefined1*)( param_1 + 1 ) = 0;
   }
   if (iVar2 == 0) {
      uVar5 = 0;
   } else {
      if (iVar2 == 1) {
         uVar3 = mbedtls_psa_mac_abort(param_1 + 2);
         uVar5 = (ulong)uVar3;
      } else {
         uVar5 = 0xffffff79;
      }
      *(ushort*)( param_1 + 1 ) = *(ushort*)( param_1 + 1 ) & 0xfe00;
      *param_1 = 0;
   }
   uVar4 = psa_crypto_local_output_free(local_48);
   if (( (int)uVar4 == 0 ) && ( uVar4 = uVar6 != 0 )) {
      uVar4 = (ulong)uVar6;
   }
   LAB_001069bb:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar4;
}ulong psa_key_derivation_tls12_prf_generate_next_block(undefined1 *param_1, byte param_2) {
   uint uVar1;
   ulong uVar2;
   long lVar3;
   uint uVar4;
   int *piVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   bool bVar7;
   ulong local_1e0;
   int local_1d8[2];
   undefined1 local_1d0[400];
   long local_40;
   uVar2 = 0;
   uVar4 = param_2 | 0x2000000;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar4 + 0xfdfffffd < 0x11) {
      uVar2 = (ulong)(byte)CSWTCH_771[uVar4 + 0xfdfffffd];
   }
   piVar5 = local_1d8;
   for (lVar3 = 0x32; lVar3 != 0; lVar3 = lVar3 + -1) {
      piVar5[0] = 0;
      piVar5[1] = 0;
      piVar5 = piVar5 + 2;
   }
   if (param_1[1] == -1) {
      uVar2 = 0xffffff69;
      goto LAB_00106c55;
   }
   *param_1 = (char)uVar2;
   param_1[1] = param_1[1] + '\x01';
   uVar1 = psa_key_derivation_start_hmac(local_1d8, uVar4, *(undefined8*)( param_1 + 8 ), *(undefined8*)( param_1 + 0x10 ));
   uVar6 = (ulong)uVar1;
   if (uVar1 == 0) {
      if (param_1[1] == '\x01') {
         uVar1 = psa_mac_update(local_1d8, *(undefined8*)( param_1 + 0x28 ), *(undefined8*)( param_1 + 0x30 ));
         uVar6 = (ulong)uVar1;
         if (uVar1 != 0) goto joined_r0x00106c26;
         uVar1 = psa_mac_update(local_1d8, *(undefined8*)( param_1 + 0x18 ), *(undefined8*)( param_1 + 0x20 ));
      } else {
         uVar1 = psa_mac_update(local_1d8, param_1 + 0x48, uVar2);
      }
      uVar6 = (ulong)uVar1;
      if (uVar1 == 0) {
         uVar1 = psa_mac_sign_finish(local_1d8, param_1 + 0x48, uVar2, &local_1e0);
         uVar6 = (ulong)uVar1;
         if (local_1e0 == uVar2) {
            if (uVar1 == 0) {
               uVar4 = psa_key_derivation_start_hmac(local_1d8, uVar4, *(undefined8*)( param_1 + 8 ), *(undefined8*)( param_1 + 0x10 ));
               uVar6 = (ulong)uVar4;
               if (uVar4 == 0) {
                  uVar4 = psa_mac_update(local_1d8, param_1 + 0x48, uVar2);
                  uVar6 = (ulong)uVar4;
                  if (uVar4 == 0) {
                     uVar4 = psa_mac_update(local_1d8, *(undefined8*)( param_1 + 0x28 ), *(undefined8*)( param_1 + 0x30 ));
                     uVar6 = (ulong)uVar4;
                     if (uVar4 == 0) {
                        uVar4 = psa_mac_update(local_1d8, *(undefined8*)( param_1 + 0x18 ), *(undefined8*)( param_1 + 0x20 ));
                        uVar6 = (ulong)uVar4;
                        if (uVar4 == 0) {
                           uVar4 = psa_mac_sign_finish(local_1d8, param_1 + 0x88, uVar2, &local_1e0);
                           uVar6 = (ulong)uVar4;
                        }
                     }
                  }
               }
            }
         } else {
            uVar6 = 0xffffff69;
         }
      }
   }
   joined_r0x00106c26:if (local_1d8[0] != 0) {
      if (local_1d8[0] == 1) {
         uVar2 = mbedtls_psa_mac_abort(local_1d0);
         bVar7 = (int)uVar2 != 0;
      } else {
         bVar7 = true;
         uVar2 = 0xffffff79;
      }
      if (( (int)uVar6 == 0 ) && ( bVar7 )) goto LAB_00106c55;
   }
   uVar2 = uVar6;
   LAB_00106c55:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int psa_key_derivation_input_internal(uint *param_1, ushort param_2, short param_3, char *param_4, ulong param_5) {
   undefined8 uVar1;
   byte bVar2;
   undefined1 uVar3;
   int iVar4;
   ushort *puVar5;
   ulong uVar6;
   long lVar7;
   void *pvVar8;
   uint uVar9;
   ulong uVar10;
   ulong uVar11;
   ulong uVar12;
   ushort *puVar13;
   uint uVar14;
   long in_FS_OFFSET;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar14 = *param_1;
   if (( uVar14 & 0x7f000000 ) == 0x9000000) {
      uVar14 = uVar14 & 0xf600ffff | 0x8000000;
      if (param_2 == 0x103) goto LAB_00106f25;
      LAB_00106dbd:if (0x103 < param_2) {
         if (( ( ushort )(param_2 - 0x201) < 4 ) && ( ( param_3 == 0x1001 || ( param_3 == 0 ) ) )) {
            uVar9 = uVar14 & 0xffffff00;
            if (( ( uVar14 & 0xfffffb00 ) == 0x8000100 ) || ( uVar9 == 0x8000400 )) {
               if (param_2 == 0x202) {
                  local_48 = param_5;
                  if (uVar9 != 0x8000500) {
                     if (( *(byte*)( (long)param_1 + 0x22 ) & 3 ) != 0) goto LAB_00107238;
                     iVar4 = psa_key_derivation_start_hmac(param_1 + 0x2a, uVar14 & 0xff | 0x2000000, param_4, param_5);
                     if (iVar4 == 0) {
                        iVar4 = 0;
                        *(byte*)( (long)param_1 + 0x22 ) = *(byte*)( (long)param_1 + 0x22 ) & 0xfc | 1;
                        goto LAB_00106f50;
                     }
                     goto LAB_00106f48;
                  }
               } else {
                  local_48 = param_5;
                  if (( param_2 == 0x203 ) && ( uVar9 != 0x8000400 )) {
                     bVar2 = *(byte*)( (long)param_1 + 0x22 ) & 3;
                     if (( ( uVar9 != 0x8000500 ) || ( bVar2 != 0 ) ) && ( ( bVar2 != 3 && ( ( *(byte*)( (long)param_1 + 0x22 ) & 4 ) == 0 ) ) )) {
                        *(ulong*)( param_1 + 6 ) = param_5;
                        if (param_5 != 0) {
                           pvVar8 = calloc(1, param_5);
                           *(void**)( param_1 + 4 ) = pvVar8;
                           if (pvVar8 == (void*)0x0) goto LAB_0010743b;
                           __memcpy_chk(pvVar8, param_4, param_5, param_5);
                        }
                        *(byte*)( (long)param_1 + 0x22 ) = *(byte*)( (long)param_1 + 0x22 ) | 4;
                        iVar4 = 0;
                        goto LAB_00106f50;
                     }
                     goto LAB_00107238;
                  }
               }
               goto LAB_00106f40;
            }
            goto LAB_00106e1a;
         }
         goto LAB_00106f40;
      }
      if (param_2 != 0x101) {
         if (( param_2 != 0x102 ) || ( ( param_3 != 0x1200 && param_3 != 0x1203 && ( param_3 != 0 ) ) )) goto LAB_00106f40;
         goto LAB_00106df6;
      }
      if (( param_3 != 0 ) && ( param_3 != 0x1200 )) goto LAB_00106f40;
      uVar9 = uVar14 & 0xffffff00;
      if (( ( uVar14 & 0xfffffb00 ) == 0x8000100 ) || ( uVar9 == 0x8000400 )) {
         uVar14 = uVar14 & 0xff | 0x2000000;
         bVar2 = *(byte*)( (long)param_1 + 0x22 ) & 3;
         if (uVar9 == 0x8000500) {
            local_48 = param_5;
            if (bVar2 != 0) goto LAB_00107238;
            uVar14 = uVar14 + 0xfdfffffd;
            uVar11 = (ulong)uVar14;
            uVar12 = 0;
            if (uVar14 < 0x11) {
               uVar12 = *(ulong*)( CSWTCH_773 + (ulong)uVar14 * 8 );
            }
            if (param_5 != uVar12) goto LAB_00106f40;
            memcpy((void*)( (long)param_1 + 99 ), param_4, param_5);
            *(ushort*)( (long)param_1 + 0x21 ) = *(ushort*)( (long)param_1 + 0x21 ) & 0xfc00 | 0x200;
            LAB_001072a8:uVar3 = 0;
            if ((uint)uVar11 < 0x11) {
               uVar3 = CSWTCH_771[uVar11];
            }
            *(undefined1*)( param_1 + 8 ) = uVar3;
            iVar4 = 0;
            goto LAB_00106f50;
         }
         if (bVar2 != 0) {
            local_48 = param_5;
            if (bVar2 == 1) goto LAB_00107136;
            goto LAB_00107238;
         }
         local_48 = param_5;
         if (uVar9 == 0x8000400) goto LAB_00107238;
         iVar4 = psa_key_derivation_start_hmac(param_1 + 0x2a, uVar14, 0, 0);
         if (iVar4 != 0) goto LAB_00106f48;
         *(byte*)( (long)param_1 + 0x22 ) = *(byte*)( (long)param_1 + 0x22 ) & 0xfc | 1;
         LAB_00107136:iVar4 = psa_mac_update(param_1 + 0x2a, param_4, local_48);
         if (iVar4 == 0) {
            iVar4 = psa_mac_sign_finish(param_1 + 0x2a, (long)param_1 + 99, 0x40, &local_48);
            if (iVar4 == 0) {
               uVar11 = ( ulong )(uVar14 + 0xfdfffffd);
               *(ushort*)( (long)param_1 + 0x21 ) = *(ushort*)( (long)param_1 + 0x21 ) & 0xfc00 | 0x200;
               if (uVar9 == 0x8000400) {
                  uVar12 = 0;
                  if (uVar14 + 0xfdfffffd < 0x11) {
                     uVar12 = *(ulong*)( CSWTCH_773 + uVar11 * 8 );
                  }
                  uVar14 = (uint)uVar12;
                  uVar11 = uVar12 & 0xffffffff;
                  if (uVar14 < 8) {
                     if (( uVar12 & 4 ) == 0) {
                        if (( uVar14 != 0 ) && ( *(undefined1*)( (long)param_1 + 0x23 ) = *(undefined1*)( (long)param_1 + 99 )(uVar12 & 2) != 0 )) {
                           *(undefined2*)( (long)param_1 + uVar11 + 0x21 ) = *(undefined2*)( (long)param_1 + uVar11 + 0x61 );
                        }
                     } else {
                        *(undefined4*)( (long)param_1 + 0x23 ) = *(undefined4*)( (long)param_1 + 99 );
                        *(undefined4*)( (long)param_1 + uVar11 + 0x1f ) = *(undefined4*)( (long)param_1 + uVar11 + 0x5f );
                     }
                  } else {
                     *(undefined8*)( (long)param_1 + 0x23 ) = *(undefined8*)( (long)param_1 + 99 );
                     *(undefined8*)( (long)param_1 + ( uVar12 & 0xffffffff ) + 0x1b ) = *(undefined8*)( (long)param_1 + ( uVar12 & 0xffffffff ) + 0x5b );
                     uVar12 = (long)param_1 + 0x2bU & 0xfffffffffffffff8;
                     lVar7 = (long)param_1 + ( 0x23 - uVar12 );
                     uVar14 = uVar14 + (int)lVar7 & 0xfffffff8;
                     if (7 < uVar14) {
                        uVar11 = 0;
                        do {
                           uVar9 = (int)uVar11 + 8;
                           *(undefined8*)( uVar12 + uVar11 ) = *(undefined8*)( ( ( (long)param_1 + 99 ) - lVar7 ) + uVar11 );
                           uVar11 = (ulong)uVar9;
                        } while ( uVar9 < uVar14 );
                     }
                  }
                  *(undefined1*)( param_1 + 8 ) = 0;
                  iVar4 = 0;
                  goto LAB_00106f50;
               }
               goto LAB_001072a8;
            }
         }
         goto LAB_00106f48;
      }
      if (uVar9 == 0x8000200) {
         param_2 = 0x101;
         goto LAB_00107314;
      }
      if (uVar9 != 0x8000300) goto LAB_00106e35;
      uVar14 = param_1[5];
      uVar12 = param_5 * 2 + 4;
      if (uVar14 == 2) {
         uVar12 = param_5 + 4 + *(long*)( param_1 + 0x14 );
      }
      if (0x80 < param_5) goto LAB_00106f40;
      puVar5 = (ushort*)calloc(1, uVar12);
      if (puVar5 == (ushort*)0x0) goto LAB_0010743b;
      puVar13 = puVar5 + 1;
      uVar11 = 2;
      if (1 < uVar12) {
         uVar11 = uVar12;
      }
      uVar11 = uVar11 - 2;
      uVar10 = uVar11;
      if (uVar11 <= uVar12) {
         uVar10 = uVar12;
      }
      if (uVar14 == 2) {
         lVar7 = *(long*)( param_1 + 0x14 );
         *puVar5 = (ushort)param_1[0x14] << 8 | (ushort)param_1[0x14] >> 8;
         if (lVar7 != 0) {
            uVar1 = *(undefined8*)( param_1 + 0x12 );
            __memcpy_chk(puVar13, uVar1, lVar7, uVar11);
            mbedtls_platform_zeroize(uVar1, lVar7);
            lVar7 = *(long*)( param_1 + 0x14 ) + uVar10;
            uVar6 = lVar7 - uVar11;
            if (uVar6 < uVar10) {
               uVar6 = uVar10;
            }
            puVar13 = (ushort*)( (long)puVar13 + *(long*)( param_1 + 0x14 ) );
            uVar11 = ( uVar11 - lVar7 ) + uVar6;
         }
      } else {
         *(char*)( (long)puVar5 + 1 ) = (char)param_5;
         lVar7 = __memset_chk(puVar13, 0, param_5, uVar11);
         uVar6 = ( param_5 + uVar10 ) - uVar11;
         if (uVar6 < uVar10) {
            uVar6 = uVar10;
         }
         puVar13 = (ushort*)( lVar7 + param_5 );
         uVar11 = ( uVar11 - ( param_5 + uVar10 ) ) + uVar6;
      }
      *(char*)( (long)puVar13 + 1 ) = (char)param_5;
      uVar10 = uVar12;
      if (uVar12 <= uVar11) {
         uVar10 = uVar11;
      }
      *(undefined1*)puVar13 = 0;
      uVar6 = ( uVar10 - uVar11 ) + 2;
      if (uVar6 < uVar10) {
         uVar6 = uVar10;
      }
      lVar7 = __memcpy_chk(puVar13 + 1, param_4, param_5, ( uVar11 - uVar10 ) + -2 + uVar6);
      iVar4 = psa_tls12_prf_set_key(param_1 + 4, puVar5, ( lVar7 + param_5 ) - (long)puVar5);
      mbedtls_zeroize_and_free(puVar5, uVar12);
      LAB_00107326:if (iVar4 == 0) {
         iVar4 = 0;
         goto LAB_00106f50;
      }
   } else {
      if (uVar14 == 0) goto LAB_00107238;
      if (param_2 != 0x103) goto LAB_00106dbd;
      LAB_00106f25:if (( param_3 == 0 ) || ( param_3 == 0x1200 )) {
         LAB_00106df6:uVar9 = uVar14 & 0xffffff00;
         if (( ( uVar14 & 0xfffffb00 ) != 0x8000100 ) && ( uVar9 != 0x8000400 )) {
            LAB_00106e1a:if (uVar9 == 0x8000200) {
               LAB_00107314:iVar4 = psa_tls12_prf_input(param_1 + 4, param_2, param_4, param_5);
               goto LAB_00107326;
            }
            if (uVar9 == 0x8000300) {
               if (param_2 != 0x103) goto LAB_00107314;
               if (param_1[5] == 1) {
                  if (param_5 != 0) {
                     pvVar8 = calloc(1, param_5);
                     *(void**)( param_1 + 0x12 ) = pvVar8;
                     if (pvVar8 == (void*)0x0) {
                        LAB_0010743b:iVar4 = -0x8d;
                        goto LAB_00106f48;
                     }
                     __memcpy_chk(pvVar8, param_4, param_5, param_5);
                  }
                  *(ulong*)( param_1 + 0x14 ) = param_5;
                  iVar4 = 0;
                  param_1[5] = 2;
                  goto LAB_00106f50;
               }
               LAB_00107238:iVar4 = -0x89;
               goto LAB_00106f48;
            }
            LAB_00106e35:if (uVar14 != 0x8000609) {
               iVar4 = -0x89;
               goto LAB_00106f50;
            }
            if (( ( param_5 == 0x41 ) && ( param_2 == 0x101 ) ) && ( *param_4 == '\x04' )) {
               uVar1 = *(undefined8*)( param_4 + 9 );
               iVar4 = 0;
               *(undefined8*)( param_1 + 4 ) = *(undefined8*)( param_4 + 1 );
               *(undefined8*)( param_1 + 6 ) = uVar1;
               uVar1 = *(undefined8*)( param_4 + 0x19 );
               *(undefined8*)( param_1 + 8 ) = *(undefined8*)( param_4 + 0x11 );
               *(undefined8*)( param_1 + 10 ) = uVar1;
               goto LAB_00106f50;
            }
         }
      }
      LAB_00106f40:iVar4 = -0x87;
   }
   LAB_00106f48:psa_key_derivation_abort(param_1);
   LAB_00106f50:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar4;
}int psa_key_derivation_input_bytes(undefined8 param_1, undefined2 param_2, undefined8 param_3, undefined8 param_4) {
   int iVar1;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = psa_crypto_local_input_alloc(param_3, param_4, &local_48);
   if (iVar1 == 0) {
      iVar1 = psa_key_derivation_input_internal(param_1, param_2, 0, local_48, param_4);
   }
   mbedtls_zeroize_and_free(local_48, local_40);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar1;
}int psa_pake_get_implicit_key(int *param_1, undefined8 param_2) {
   int iVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_190;
   undefined1 local_188[344];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_190 = 0;
   if ((char)param_1[3] == '\x02') {
      if (param_1[1] != 0xa000100) {
         psa_pake_abort();
         iVar1 = -0x86;
         goto LAB_001075f3;
      }
      if (param_1[4] == 2) {
         if (*param_1 == 1) {
            iVar1 = mbedtls_psa_pake_get_implicit_key(param_1 + 8, local_188, 0x150, &local_190);
            if (iVar1 == 0) {
               iVar1 = psa_key_derivation_input_bytes(param_2, 0x101, local_188, local_190);
               mbedtls_platform_zeroize(local_188, 0x150);
               iVar2 = psa_pake_abort(param_1);
               if (iVar1 == 0) {
                  iVar1 = iVar2;
               }
            } else {
               psa_pake_abort(param_1);
            }
         } else {
            psa_pake_abort();
            iVar1 = -0x87;
         }
         goto LAB_001075f3;
      }
   }
   psa_pake_abort(param_1);
   iVar1 = -0x89;
   LAB_001075f3:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar1;
}int psa_key_derivation_input_key(undefined4 *param_1, short param_2, undefined4 param_3) {
   undefined4 uVar1;
   int iVar2;
   int iVar3;
   long in_FS_OFFSET;
   undefined2 *local_38;
   long local_30;
   uVar1 = *param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = psa_get_and_lock_key_slot(param_3, &local_38);
   if (iVar2 == 0) {
      iVar2 = psa_get_and_lock_key_slot_with_policy_part_0(&local_38, 0x4000, uVar1);
      if (iVar2 == 0) {
         if (*(uint*)( local_38 + 2 ) >> 8 == 0) {
            if (( ushort )(param_2 - 0x101U) < 2) {
               *(byte*)( param_1 + 1 ) = *(byte*)( param_1 + 1 ) | 1;
            }
            iVar2 = psa_key_derivation_input_internal(param_1, param_2, *local_38, *(undefined8*)( local_38 + 0x14 ), *(undefined8*)( local_38 + 0x18 ));
            iVar3 = psa_unregister_read_under_mutex(local_38);
            if (iVar2 == 0) {
               iVar2 = iVar3;
            }
            goto LAB_00107758;
         }
         psa_unregister_read_under_mutex();
         local_38 = (undefined2*)0x0;
         iVar2 = -0x86;
      }
   }
   psa_key_derivation_abort(param_1);
   LAB_00107758:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int psa_key_derivation_key_agreement(uint *param_1, short param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5) {
   uint uVar1;
   long lVar2;
   undefined8 uVar3;
   int iVar4;
   long in_FS_OFFSET;
   long local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined2 local_48;
   long local_40;
   uVar1 = *param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   local_90 = 0;
   if (( uVar1 & 0x7f000000 ) != 0x9000000) {
      iVar4 = -0x87;
      goto LAB_00107881;
   }
   iVar4 = psa_get_and_lock_key_slot(param_3, &local_a8);
   if (( iVar4 != 0 ) || ( iVar4 = psa_get_and_lock_key_slot_with_policy_part_0(&local_a8, 0x4000, uVar1) ),lVar2 = local_a8,iVar4 != 0) goto LAB_00107881;
   if (*(uint*)( local_a8 + 4 ) >> 8 != 0) {
      iVar4 = -0x86;
      psa_unregister_read_under_mutex(local_a8);
      goto LAB_00107881;
   }
   iVar4 = psa_crypto_local_input_alloc(param_4, param_5, &local_98);
   uVar3 = local_98;
   if (iVar4 == 0) {
      local_a0 = 0;
      local_48 = 0;
      local_88 = (undefined1[16])0x0;
      local_78 = (undefined1[16])0x0;
      local_68 = (undefined1[16])0x0;
      local_58 = (undefined1[16])0x0;
      if (( *param_1 & 0xf6000000 ) == 0) {
         if (( *(uint*)( lVar2 + 4 ) >> 8 != 0 ) || ( ( *param_1 & 0xf6ff0000 | 0x9000000 ) != 0x9020000 )) goto LAB_001079d0;
         iVar4 = mbedtls_psa_key_agreement_ecdh(lVar2, *(undefined8*)( lVar2 + 0x28 ), *(undefined8*)( lVar2 + 0x30 ), 0x9020000, local_98, param_5, local_88, 0x42, &local_a0);
         if (iVar4 == 0) {
            iVar4 = psa_key_derivation_input_internal(param_1, param_2, 0x1200, local_88, local_a0);
            mbedtls_platform_zeroize(local_88, local_a0);
            if (iVar4 == 0) {
               if (param_2 == 0x101) {
                  *(byte*)( param_1 + 1 ) = (byte)param_1[1] | 1;
               }
               iVar4 = psa_unregister_read_under_mutex(local_a8);
               mbedtls_zeroize_and_free(uVar3, local_90);
               goto LAB_00107881;
            }
            goto LAB_00107862;
         }
      } else {
         LAB_001079d0:iVar4 = -0x86;
      }
      mbedtls_platform_zeroize(local_88, local_a0);
   }
   LAB_00107862:psa_key_derivation_abort(param_1);
   psa_unregister_read_under_mutex(local_a8);
   mbedtls_zeroize_and_free(uVar3, local_90);
   LAB_00107881:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar4;
}int psa_mac_compute(undefined4 param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, size_t param_6, undefined8 param_7) {
   int iVar1;
   int iVar2;
   void *pvVar3;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   undefined1 local_58[16];
   size_t local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_48 = 0;
   iVar1 = psa_crypto_local_input_alloc(param_3, param_4, &local_68);
   if (iVar1 == 0) {
      pvVar3 = (void*)0x0;
      if (param_6 != 0) {
         pvVar3 = calloc(param_6, 1);
         local_58._8_8_ = pvVar3;
         if (pvVar3 == (void*)0x0) {
            iVar1 = -0x8d;
            goto LAB_00107a78;
         }
         local_58._0_8_ = param_5;
         local_48 = param_6;
      }
      iVar1 = psa_mac_compute_internal(param_1, param_2, local_68, param_4, pvVar3, param_6, param_7, 1);
   }
   LAB_00107a78:mbedtls_zeroize_and_free(local_68, local_60);
   iVar2 = psa_crypto_local_output_free(local_58);
   if (iVar2 == 0) {
      iVar2 = iVar1;
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}int psa_sign_message(undefined4 param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, size_t param_6, undefined8 *param_7) {
   int iVar1;
   int iVar2;
   void *pvVar3;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   undefined1 local_58[16];
   size_t local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_48 = 0;
   iVar1 = psa_crypto_local_input_alloc(param_3, param_4, &local_68);
   if (iVar1 == 0) {
      if (param_6 == 0) {
         *param_7 = 0;
         iVar1 = psa_sign_verify_check_alg(1, param_2);
         if (iVar1 == 0) {
            iVar1 = -0x8a;
         }
      } else {
         pvVar3 = calloc(param_6, 1);
         local_58._8_8_ = pvVar3;
         if (pvVar3 == (void*)0x0) {
            iVar1 = -0x8d;
         } else {
            *param_7 = 0;
            local_58._0_8_ = param_5;
            local_48 = param_6;
            iVar1 = psa_sign_verify_check_alg(1, param_2);
            if (iVar1 == 0) {
               iVar1 = psa_sign_internal_part_0_constprop_0(param_1, 1, param_2, local_68, param_4);
            }
         }
      }
   }
   mbedtls_zeroize_and_free(local_68, local_60);
   iVar2 = psa_crypto_local_output_free(local_58);
   if (iVar2 == 0) {
      iVar2 = iVar1;
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}int psa_sign_hash(undefined4 param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, size_t param_6, undefined8 *param_7) {
   int iVar1;
   int iVar2;
   void *pvVar3;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   undefined1 local_58[16];
   size_t local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_48 = 0;
   iVar1 = psa_crypto_local_input_alloc(param_3, param_4, &local_68);
   if (iVar1 == 0) {
      if (param_6 == 0) {
         *param_7 = 0;
         iVar1 = psa_sign_verify_check_alg(0, param_2);
         if (iVar1 == 0) {
            iVar1 = -0x8a;
         }
      } else {
         pvVar3 = calloc(param_6, 1);
         local_58._8_8_ = pvVar3;
         if (pvVar3 == (void*)0x0) {
            iVar1 = -0x8d;
         } else {
            *param_7 = 0;
            local_58._0_8_ = param_5;
            local_48 = param_6;
            iVar1 = psa_sign_verify_check_alg(0, param_2);
            if (iVar1 == 0) {
               iVar1 = psa_sign_internal_part_0_constprop_0(param_1, 0, param_2, local_68, param_4);
            }
         }
      }
   }
   mbedtls_zeroize_and_free(local_68, local_60);
   iVar2 = psa_crypto_local_output_free(local_58);
   if (iVar2 == 0) {
      iVar2 = iVar1;
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}ulong psa_asymmetric_encrypt(undefined8 param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, long param_6, undefined8 param_7, size_t param_8, undefined8 *param_9) {
   undefined8 uVar1;
   uint uVar2;
   uint uVar3;
   ulong uVar4;
   void *pvVar5;
   ushort *puVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   ushort *local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined1 local_58[16];
   size_t local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_9 = 0;
   local_58 = (undefined1[16])0x0;
   local_78 = 0;
   local_70 = 0;
   local_68 = 0;
   local_60 = 0;
   local_48 = 0;
   if (( param_2 >> 8 != 0x70003 ) && ( param_6 != 0 )) {
      uVar4 = 0xffffff79;
      goto LAB_00107f3d;
   }
   uVar4 = psa_get_and_lock_key_slot(param_1, &local_80);
   if ((int)uVar4 != 0) goto LAB_00107f3d;
   uVar4 = psa_get_and_lock_key_slot_with_policy_part_0(&local_80, 0x100, param_2);
   puVar6 = local_80;
   if ((int)uVar4 != 0) goto LAB_00107f3d;
   if (( ( *local_80 & 0x7000 ) == 0x4000 ) || ( ( *local_80 & 0x7000 ) == 0x7000 )) {
      uVar3 = psa_crypto_local_input_alloc(param_3, param_4, &local_78);
      uVar1 = local_78;
      if (uVar3 == 0) {
         local_b0 = local_78;
         uVar3 = psa_crypto_local_input_alloc(param_5, param_6, &local_68);
         uVar7 = local_68;
         local_a8 = local_70;
         local_a0 = local_60;
         if (uVar3 == 0) {
            pvVar5 = (void*)0x0;
            if (param_8 != 0) {
               pvVar5 = calloc(param_8, 1);
               local_58._8_8_ = pvVar5;
               if (pvVar5 == (void*)0x0) {
                  uVar3 = 0xffffff73;
                  goto LAB_00107f00;
               }
               local_48 = param_8;
               local_58._0_8_ = param_7;
            }
            if (*(uint*)( puVar6 + 2 ) >> 8 == 0) {
               uVar3 = mbedtls_psa_asymmetric_encrypt(puVar6, *(undefined8*)( puVar6 + 0x14 ), *(undefined8*)( puVar6 + 0x18 ), param_2, uVar1, param_4, uVar7, param_6, pvVar5, param_8, param_9);
               puVar6 = local_80;
            } else {
               uVar3 = 0xffffff79;
            }
         }
      } else {
         local_a8 = local_70;
         uVar7 = 0;
         local_a0 = 0;
         local_b0 = local_78;
      }
   } else {
      local_b0 = 0;
      uVar7 = 0;
      uVar3 = 0xffffff79;
      local_a0 = 0;
      local_a8 = 0;
   }
   LAB_00107f00:uVar2 = psa_unregister_read_under_mutex(puVar6);
   mbedtls_zeroize_and_free(local_b0, local_a8);
   mbedtls_zeroize_and_free(uVar7, local_a0);
   uVar4 = psa_crypto_local_output_free(local_58);
   if (( (int)uVar4 == 0 ) && ( uVar4 = uVar3 != 0 )) {
      uVar4 = (ulong)uVar3;
   }
   LAB_00107f3d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ulong psa_asymmetric_decrypt(undefined8 param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, long param_6, undefined8 param_7, size_t param_8, undefined8 *param_9) {
   undefined8 uVar1;
   uint uVar2;
   uint uVar3;
   ulong uVar4;
   void *pvVar5;
   ushort *puVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   ushort *local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined1 local_58[16];
   size_t local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_9 = 0;
   local_58 = (undefined1[16])0x0;
   local_78 = 0;
   local_70 = 0;
   local_68 = 0;
   local_60 = 0;
   local_48 = 0;
   if (( param_2 >> 8 != 0x70003 ) && ( param_6 != 0 )) {
      uVar4 = 0xffffff79;
      goto LAB_001081f9;
   }
   uVar4 = psa_get_and_lock_key_slot(param_1, &local_80);
   if ((int)uVar4 != 0) goto LAB_001081f9;
   uVar4 = psa_get_and_lock_key_slot_with_policy_part_0(&local_80, 0x200, param_2);
   puVar6 = local_80;
   if ((int)uVar4 != 0) goto LAB_001081f9;
   if (( ~*local_80 & 0x7000 ) == 0) {
      uVar3 = psa_crypto_local_input_alloc(param_3, param_4, &local_78);
      uVar1 = local_78;
      if (uVar3 == 0) {
         local_b0 = local_78;
         uVar3 = psa_crypto_local_input_alloc(param_5, param_6, &local_68);
         uVar7 = local_68;
         local_a8 = local_70;
         local_a0 = local_60;
         if (uVar3 == 0) {
            pvVar5 = (void*)0x0;
            if (param_8 != 0) {
               pvVar5 = calloc(param_8, 1);
               local_58._8_8_ = pvVar5;
               if (pvVar5 == (void*)0x0) {
                  uVar3 = 0xffffff73;
                  goto LAB_001081bc;
               }
               local_48 = param_8;
               local_58._0_8_ = param_7;
            }
            if (*(uint*)( puVar6 + 2 ) >> 8 == 0) {
               uVar3 = mbedtls_psa_asymmetric_decrypt(puVar6, *(undefined8*)( puVar6 + 0x14 ), *(undefined8*)( puVar6 + 0x18 ), param_2, uVar1, param_4, uVar7, param_6, pvVar5, param_8, param_9);
               puVar6 = local_80;
            } else {
               uVar3 = 0xffffff79;
            }
         }
      } else {
         local_a8 = local_70;
         uVar7 = 0;
         local_a0 = 0;
         local_b0 = local_78;
      }
   } else {
      local_b0 = 0;
      uVar7 = 0;
      uVar3 = 0xffffff79;
      local_a0 = 0;
      local_a8 = 0;
   }
   LAB_001081bc:uVar2 = psa_unregister_read_under_mutex(puVar6);
   mbedtls_zeroize_and_free(local_b0, local_a8);
   mbedtls_zeroize_and_free(uVar7, local_a0);
   uVar4 = psa_crypto_local_output_free(local_58);
   if (( (int)uVar4 == 0 ) && ( uVar4 = uVar3 != 0 )) {
      uVar4 = (ulong)uVar3;
   }
   LAB_001081f9:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int psa_cipher_update(int *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, size_t param_5, undefined8 param_6) {
   int iVar1;
   int iVar2;
   void *pvVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   undefined1 local_58[16];
   size_t local_48;
   long local_40;
   iVar2 = *param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_68 = 0;
   local_60 = 0;
   local_48 = 0;
   if (iVar2 == 0) {
      uVar4 = 0;
      iVar1 = -0x89;
      goto LAB_00108478;
   }
   if (( *(byte*)( param_1 + 1 ) & 3 ) == 1) {
      iVar1 = -0x89;
      LAB_00108455:uVar4 = local_68;
      if (iVar2 == 1) {
         mbedtls_psa_cipher_abort(param_1 + 2);
         uVar4 = local_68;
      }
   } else {
      iVar1 = psa_crypto_local_input_alloc(param_2, param_3, &local_68);
      uVar4 = local_68;
      if (iVar1 != 0) goto LAB_00108455;
      pvVar3 = (void*)0x0;
      if (param_5 != 0) {
         pvVar3 = calloc(param_5, 1);
         local_58._8_8_ = pvVar3;
         if (pvVar3 == (void*)0x0) {
            iVar1 = -0x8d;
            goto LAB_00108455;
         }
         local_58._0_8_ = param_4;
         local_48 = param_5;
      }
      if (iVar2 == 1) {
         iVar1 = mbedtls_psa_cipher_update(param_1 + 2, uVar4, param_3, pvVar3, param_5, param_6);
         if (( iVar1 == 0 ) || ( iVar2 = iVar2 == 0 )) goto LAB_00108478;
         goto LAB_00108455;
      }
      iVar1 = -0x87;
   }
   *(byte*)( param_1 + 1 ) = *(byte*)( param_1 + 1 ) & 0xfc;
   *param_1 = 0;
   LAB_00108478:mbedtls_zeroize_and_free(uVar4, local_60);
   iVar2 = psa_crypto_local_output_free(local_58);
   if (iVar2 == 0) {
      iVar2 = iVar1;
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}int psa_cipher_finish(int *param_1, undefined8 param_2, size_t param_3, undefined8 *param_4) {
   int iVar1;
   int iVar2;
   void *pvVar3;
   long in_FS_OFFSET;
   undefined1 local_48[16];
   size_t local_38;
   long local_30;
   iVar2 = *param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (undefined1[16])0x0;
   local_38 = 0;
   if (iVar2 == 0) {
      *param_4 = 0;
      iVar1 = -0x89;
      goto LAB_00108606;
   }
   if (( *(byte*)( param_1 + 1 ) & 3 ) == 1) {
      *param_4 = 0;
      iVar1 = -0x89;
      LAB_001085ed:if (iVar2 == 1) {
         mbedtls_psa_cipher_abort(param_1 + 2);
      }
   } else {
      pvVar3 = (void*)0x0;
      if (param_3 != 0) {
         pvVar3 = calloc(param_3, 1);
         local_48._8_8_ = pvVar3;
         if (pvVar3 == (void*)0x0) {
            iVar1 = -0x8d;
            *param_4 = 0;
            goto LAB_001085ed;
         }
         local_48._0_8_ = param_2;
         local_38 = param_3;
      }
      if (iVar2 == 1) {
         iVar1 = mbedtls_psa_cipher_finish(param_1 + 2, pvVar3, param_3, param_4);
         if (iVar1 != 0) {
            iVar2 = *param_1;
            *param_4 = 0;
            if (iVar2 == 0) goto LAB_00108606;
            goto LAB_001085ed;
         }
         if (*param_1 == 0) goto LAB_00108606;
         if (*param_1 == 1) {
            mbedtls_psa_cipher_abort(param_1 + 2);
         }
      } else {
         *param_4 = 0;
         iVar1 = -0x87;
      }
   }
   *(byte*)( param_1 + 1 ) = *(byte*)( param_1 + 1 ) & 0xfc;
   *param_1 = 0;
   LAB_00108606:iVar2 = psa_crypto_local_output_free(local_48);
   if (iVar2 == 0) {
      iVar2 = iVar1;
   }
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}int psa_cipher_encrypt(undefined8 param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, ulong param_6, long *param_7) {
   ushort uVar1;
   int iVar2;
   int iVar3;
   uint uVar4;
   undefined4 *puVar5;
   undefined1 *puVar6;
   ulong uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   uint uVar10;
   ulong uVar11;
   long lVar12;
   ushort *puVar13;
   long in_FS_OFFSET;
   ushort *local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined1 local_78[16];
   ulong local_68;
   undefined8 uStack_60;
   long local_58[5];
   local_58[3] = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = (undefined1[16])0x0;
   local_90 = (ushort*)0x0;
   local_88 = 0;
   local_80 = 0;
   local_68 = 0;
   if (( param_2 & 0x7f000000 ) == 0x4000000) {
      iVar2 = psa_get_and_lock_key_slot(param_1, &local_90);
      if (( iVar2 == 0 ) && ( iVar2 = psa_get_and_lock_key_slot_with_policy_part_0(&local_90, 0x100, param_2) ),puVar13 = local_90,iVar2 == 0) {
         uVar1 = *local_90;
         if (( ( ( uVar1 & 0x7000 ) == 0x2000 ) && ( ( uVar1 & 0x700 ) != 0 ) ) && ( ( ( ( ( param_2 & 0xfffffeff ) == 0x4c01000 || ( param_2 == 0x4c01200 ) ) || ( param_2 == 0x440ff00 ) ) || ( ( param_2 & 0xfffffeff ) == 0x4404000 ) ) )) {
            uVar10 = 1 << ( ( byte )(uVar1 >> 8) & 7 );
            uVar11 = (ulong)uVar10;
            if (0x10 < uVar10) {
               psa_unregister_read_under_mutex(local_90);
               uVar8 = 0;
               uVar9 = 0;
               iVar2 = -0x84;
               goto LAB_0010870e;
            }
            LAB_001088ae:if (param_6 < uVar11) {
               psa_unregister_read_under_mutex(local_90);
               uVar8 = 0;
               uVar9 = 0;
               iVar2 = -0x8a;
            } else {
               iVar2 = psa_generate_random_internal(local_58, uVar11);
               if (iVar2 != 0) goto LAB_00108890;
               iVar2 = psa_crypto_local_input_alloc(param_3, param_4, &local_88);
               puVar13 = local_90;
               if (iVar2 == 0) {
                  LAB_00108901:uVar8 = local_88;
                  puVar5 = (undefined4*)calloc(param_6, 1);
                  local_78._8_8_ = puVar5;
                  if (puVar5 != (undefined4*)0x0) {
                     local_78._0_8_ = param_5;
                     puVar6 = (undefined1*)( (long)puVar5 + uVar11 );
                     uVar7 = param_6 - uVar11;
                     local_68 = param_6;
                     goto LAB_00108944;
                  }
                  psa_unregister_read_under_mutex(puVar13);
                  uVar8 = local_80;
                  uVar9 = local_88;
                  iVar2 = -0x8d;
               } else {
                  LAB_001087f8:psa_unregister_read_under_mutex(puVar13);
                  uVar8 = local_80;
                  uVar9 = local_88;
               }
            }
         } else {
            if (( uVar1 == 0x2004 ) && ( param_2 == 0x4800100 )) {
               uVar11 = 0xc;
               goto LAB_001088ae;
            }
            uVar11 = 0xd;
            if (param_2 == 0x4c01300) goto LAB_001088ae;
            iVar2 = psa_crypto_local_input_alloc(param_3, param_4, &local_88);
            if (iVar2 != 0) goto LAB_001087f8;
            uVar11 = 0;
            puVar5 = (undefined4*)0x0;
            puVar6 = (undefined1*)0x0;
            uVar7 = param_6;
            uVar8 = local_88;
            if (param_6 != 0) goto LAB_00108901;
            LAB_00108944:if (*(uint*)( puVar13 + 2 ) >> 8 == 0) {
               iVar2 = mbedtls_psa_cipher_encrypt(puVar13, *(undefined8*)( puVar13 + 0x14 ), *(undefined8*)( puVar13 + 0x18 ), param_2, local_58, uVar11, uVar8, param_4, puVar6, uVar7, param_7);
               iVar3 = psa_unregister_read_under_mutex(local_90);
               uVar8 = local_80;
               uVar9 = local_88;
               if (( iVar2 == 0 ) && ( iVar2 = iVar3 == 0 )) {
                  if (uVar11 != 0) {
                     uVar10 = (uint)uVar11;
                     if (uVar10 < 8) {
                        if (( uVar11 & 4 ) == 0) {
                           if (uVar10 != 0) {
                              *(undefined1*)puVar5 = (undefined1)local_58[0];
                              if (( uVar11 & 2 ) != 0) {
                                 *(undefined2*)( (long)puVar5 + ( uVar11 - 2 ) ) = *(undefined2*)( (long)local_58 + ( uVar11 - 2 ) );
                              }
                           }
                        } else {
                           *puVar5 = (undefined4)local_58[0];
                           *(undefined4*)( (long)puVar5 + ( uVar11 - 4 ) ) = *(undefined4*)( (long)local_58 + ( uVar11 - 4 ) );
                        }
                     } else {
                        *(undefined8*)( (long)puVar5 + ( uVar11 - 8 ) ) = *(undefined8*)( (long)&uStack_60 + uVar11 );
                        if (7 < uVar10 - 1) {
                           uVar4 = 0;
                           do {
                              uVar7 = (ulong)uVar4;
                              uVar4 = uVar4 + 8;
                              *(undefined8*)( (long)puVar5 + uVar7 ) = *(undefined8*)( (long)local_58 + uVar7 );
                           } while ( uVar4 < ( uVar10 - 1 & 0xfffffff8 ) );
                        }
                     }
                  }
                  lVar12 = uVar11 + *param_7;
                  goto LAB_00108711;
               }
            } else {
               psa_unregister_read_under_mutex(puVar13, *(undefined8*)( puVar13 + 0x14 ), *(undefined8*)( puVar13 + 0x18 ));
               uVar8 = local_80;
               uVar9 = local_88;
               iVar2 = -0x87;
            }
         }
      } else {
         LAB_00108890:psa_unregister_read_under_mutex(local_90);
         uVar8 = 0;
         uVar9 = 0;
      }
   } else {
      psa_unregister_read_under_mutex(0);
      uVar8 = 0;
      uVar9 = 0;
      iVar2 = -0x87;
   }
   LAB_0010870e:iVar3 = iVar2;
   lVar12 = 0;
   LAB_00108711:*param_7 = lVar12;
   mbedtls_zeroize_and_free(uVar9, uVar8);
   iVar2 = psa_crypto_local_output_free(local_78);
   if (iVar2 == 0) {
      iVar2 = iVar3;
   }
   if (local_58[3] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}int psa_cipher_decrypt(undefined8 param_1, uint param_2, undefined8 param_3, ulong param_4, undefined8 param_5, size_t param_6, undefined8 *param_7) {
   ushort uVar1;
   ushort *puVar2;
   int iVar3;
   int iVar4;
   ulong uVar5;
   void *pvVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   ushort *local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined1 local_58[16];
   size_t local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_70 = (ushort*)0x0;
   local_68 = 0;
   local_60 = 0;
   local_48 = 0;
   if (( param_2 & 0x7f000000 ) == 0x4000000) {
      iVar3 = psa_get_and_lock_key_slot(param_1, &local_70);
      if (( iVar3 == 0 ) && ( iVar3 = psa_get_and_lock_key_slot_with_policy_part_0(&local_70, 0x200, param_2) ),puVar2 = local_70,iVar3 == 0) {
         uVar1 = *local_70;
         if (( ( ( uVar1 & 0x7000 ) == 0x2000 ) && ( ( uVar1 & 0x700 ) != 0 ) ) && ( ( ( param_2 & 0xfffffeff ) == 0x4c01000 || ( ( ( param_2 == 0x4c01200 || ( param_2 == 0x440ff00 ) ) || ( ( param_2 & 0xfffffeff ) == 0x4404000 ) ) ) ) )) {
            uVar5 = ( ulong )(uint)(1 << ( ( byte )(uVar1 >> 8) & 7 ));
            LAB_00108c56:if (param_4 < uVar5) {
               psa_unregister_read_under_mutex(local_70);
               uVar8 = 0;
               uVar7 = 0;
               iVar3 = -0x87;
               goto LAB_00108b1b;
            }
         } else {
            if (( param_2 == 0x4800100 ) && ( uVar1 == 0x2004 )) {
               uVar5 = 0xc;
               goto LAB_00108c56;
            }
            uVar5 = 0xd;
            if (param_2 == 0x4c01300) goto LAB_00108c56;
         }
         iVar3 = psa_crypto_local_input_alloc(param_3, param_4, &local_68);
         uVar8 = local_68;
         if (iVar3 == 0) {
            pvVar6 = (void*)0x0;
            if (param_6 != 0) {
               pvVar6 = calloc(param_6, 1);
               local_58._8_8_ = pvVar6;
               if (pvVar6 == (void*)0x0) {
                  psa_unregister_read_under_mutex(puVar2);
                  uVar7 = local_60;
                  iVar3 = -0x8d;
                  goto LAB_00108b1b;
               }
               local_58._0_8_ = param_5;
               local_48 = param_6;
            }
            if (*(uint*)( puVar2 + 2 ) >> 8 == 0) {
               iVar3 = mbedtls_psa_cipher_decrypt(puVar2, *(undefined8*)( puVar2 + 0x14 ), *(undefined8*)( puVar2 + 0x18 ), param_2, uVar8, param_4, pvVar6, param_6, param_7);
               iVar4 = psa_unregister_read_under_mutex(local_70);
               uVar7 = local_60;
               if (( iVar3 == 0 ) && ( iVar3 = iVar4 == 0 )) goto LAB_00108b22;
            } else {
               psa_unregister_read_under_mutex(puVar2, *(undefined8*)( puVar2 + 0x14 ));
               uVar7 = local_60;
               iVar3 = -0x87;
            }
         } else {
            psa_unregister_read_under_mutex(puVar2);
            uVar7 = local_60;
            uVar8 = local_68;
         }
      } else {
         psa_unregister_read_under_mutex(local_70);
         uVar8 = 0;
         uVar7 = 0;
      }
   } else {
      psa_unregister_read_under_mutex(0);
      uVar7 = 0;
      uVar8 = 0;
      iVar3 = -0x87;
   }
   LAB_00108b1b:iVar4 = iVar3;
   *param_7 = 0;
   LAB_00108b22:mbedtls_zeroize_and_free(uVar8, uVar7);
   iVar3 = psa_crypto_local_output_free(local_58);
   if (iVar3 == 0) {
      iVar3 = iVar4;
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar3;
}int psa_aead_encrypt(uint param_1, ulong param_2, undefined8 param_3, long param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, size_t param_10, undefined8 *param_11) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   int iVar4;
   uint uVar5;
   void *__s;
   ulong uVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   undefined8 local_c0;
   undefined8 local_b0;
   undefined8 local_a8;
   long local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined1 local_58[16];
   size_t local_48;
   long local_40;
   uVar6 = (ulong)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_11 = 0;
   local_88 = 0;
   local_80 = 0;
   local_78 = 0;
   local_70 = 0;
   local_68 = 0;
   local_60 = 0;
   local_48 = 0;
   local_58 = (undefined1[16])0x0;
   iVar3 = psa_aead_check_algorithm(param_2 & 0xffffffff);
   if (iVar3 != 0) goto LAB_00108e5f;
   iVar3 = psa_get_and_lock_key_slot(uVar6 & 0xffffffff, &local_90);
   if (iVar3 != 0) goto LAB_00108e5f;
   iVar3 = psa_get_and_lock_key_slot_with_policy_part_0(&local_90, 0x100, param_2 & 0xffffffff);
   if (iVar3 != 0) goto LAB_00108e5f;
   iVar4 = psa_crypto_local_input_alloc(param_3, param_4, &local_88);
   uVar1 = local_88;
   if (iVar4 == 0) {
      iVar4 = psa_crypto_local_input_alloc(param_5, param_6, &local_78);
      uVar7 = local_78;
      if (iVar4 == 0) {
         iVar4 = psa_crypto_local_input_alloc(param_7, param_8, &local_68);
         uVar2 = local_68;
         local_b0 = local_70;
         local_c0 = local_68;
         local_a8 = local_60;
         if (iVar4 == 0) {
            __s = (void*)0x0;
            if (param_10 != 0) {
               __s = calloc(param_10, 1);
               local_58._8_8_ = __s;
               if (__s == (void*)0x0) {
                  iVar4 = -0x8d;
                  goto LAB_00108f07;
               }
               local_48 = param_10;
               local_58._0_8_ = param_9;
            }
            uVar5 = (uint)param_2 & 0xffc07fff;
            if (uVar5 == 0x5400100) {
               if (param_4 - 7U < 7) goto LAB_001090a5;
               LAB_00109148:iVar4 = -0x87;
            } else if (uVar5 == 0x5400200) {
               if (param_4 == 0) goto LAB_00109148;
               LAB_001090a5:if (*(uint*)( local_90 + 4 ) >> 8 == 0) {
                  iVar4 = mbedtls_psa_aead_encrypt(local_90, *(undefined8*)( local_90 + 0x28 ), *(undefined8*)( local_90 + 0x30 ), param_2 & 0xffffffff, uVar1, param_4, uVar7, param_6, uVar2, param_8, __s, param_10, param_11);
               } else {
                  iVar4 = -0x87;
               }
               if (( iVar4 != 0 ) && ( param_10 != 0 )) {
                  memset(__s, 0, param_10);
               }
            } else {
               iVar4 = -0x86;
               if (uVar5 == 0x5000500) {
                  if (param_4 == 0xc) goto LAB_001090a5;
                  iVar4 = ( param_4 == 8 ) - 0x87;
               }
            }
         }
      } else {
         local_b0 = local_70;
         local_a8 = 0;
         local_c0 = 0;
      }
   } else {
      local_a8 = 0;
      uVar7 = 0;
      local_c0 = 0;
      local_b0 = 0;
   }
   LAB_00108f07:mbedtls_zeroize_and_free(uVar1, local_80);
   mbedtls_zeroize_and_free(uVar7, local_b0);
   mbedtls_zeroize_and_free(local_c0, local_a8);
   iVar3 = psa_crypto_local_output_free(local_58);
   if (iVar3 == 0) {
      iVar3 = iVar4;
   }
   psa_unregister_read_under_mutex(local_90);
   LAB_00108e5f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int psa_aead_decrypt(uint param_1, ulong param_2, undefined8 param_3, long param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, size_t param_10, undefined8 *param_11) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   int iVar4;
   uint uVar5;
   void *__s;
   ulong uVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   undefined8 local_c0;
   undefined8 local_b0;
   undefined8 local_a8;
   long local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined1 local_58[16];
   size_t local_48;
   long local_40;
   uVar6 = (ulong)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_11 = 0;
   local_88 = 0;
   local_80 = 0;
   local_78 = 0;
   local_70 = 0;
   local_68 = 0;
   local_60 = 0;
   local_48 = 0;
   local_58 = (undefined1[16])0x0;
   iVar3 = psa_aead_check_algorithm(param_2 & 0xffffffff);
   if (iVar3 != 0) goto LAB_0010921f;
   iVar3 = psa_get_and_lock_key_slot(uVar6 & 0xffffffff, &local_90);
   if (iVar3 != 0) goto LAB_0010921f;
   iVar3 = psa_get_and_lock_key_slot_with_policy_part_0(&local_90, 0x200, param_2 & 0xffffffff);
   if (iVar3 != 0) goto LAB_0010921f;
   iVar4 = psa_crypto_local_input_alloc(param_3, param_4, &local_88);
   uVar1 = local_88;
   if (iVar4 == 0) {
      iVar4 = psa_crypto_local_input_alloc(param_5, param_6, &local_78);
      uVar7 = local_78;
      if (iVar4 == 0) {
         iVar4 = psa_crypto_local_input_alloc(param_7, param_8, &local_68);
         uVar2 = local_68;
         local_b0 = local_70;
         local_c0 = local_68;
         local_a8 = local_60;
         if (iVar4 == 0) {
            __s = (void*)0x0;
            if (param_10 != 0) {
               __s = calloc(param_10, 1);
               local_58._8_8_ = __s;
               if (__s == (void*)0x0) {
                  iVar4 = -0x8d;
                  goto LAB_001092c7;
               }
               local_48 = param_10;
               local_58._0_8_ = param_9;
            }
            uVar5 = (uint)param_2 & 0xffc07fff;
            if (uVar5 == 0x5400100) {
               if (param_4 - 7U < 7) goto LAB_00109465;
               LAB_00109508:iVar4 = -0x87;
            } else if (uVar5 == 0x5400200) {
               if (param_4 == 0) goto LAB_00109508;
               LAB_00109465:if (*(uint*)( local_90 + 4 ) >> 8 == 0) {
                  iVar4 = mbedtls_psa_aead_decrypt(local_90, *(undefined8*)( local_90 + 0x28 ), *(undefined8*)( local_90 + 0x30 ), param_2 & 0xffffffff, uVar1, param_4, uVar7, param_6, uVar2, param_8, __s, param_10, param_11);
               } else {
                  iVar4 = -0x87;
               }
               if (( iVar4 != 0 ) && ( param_10 != 0 )) {
                  memset(__s, 0, param_10);
               }
            } else {
               iVar4 = -0x86;
               if (uVar5 == 0x5000500) {
                  if (param_4 == 0xc) goto LAB_00109465;
                  iVar4 = ( param_4 == 8 ) - 0x87;
               }
            }
         }
      } else {
         local_b0 = local_70;
         local_a8 = 0;
         local_c0 = 0;
      }
   } else {
      local_a8 = 0;
      uVar7 = 0;
      local_c0 = 0;
      local_b0 = 0;
   }
   LAB_001092c7:mbedtls_zeroize_and_free(uVar1, local_80);
   mbedtls_zeroize_and_free(uVar7, local_b0);
   mbedtls_zeroize_and_free(local_c0, local_a8);
   iVar3 = psa_crypto_local_output_free(local_58);
   if (iVar3 == 0) {
      iVar3 = iVar4;
   }
   psa_unregister_read_under_mutex(local_90);
   LAB_0010921f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Removing unreachable block (ram,0x00109770) */int psa_aead_generate_nonce(int *param_1, undefined8 param_2, size_t param_3, ulong *param_4) {
   ushort uVar1;
   int iVar2;
   int iVar3;
   uint uVar4;
   uint uVar5;
   undefined4 *puVar6;
   ulong uVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   undefined1 local_68[16];
   undefined1 local_58[7];
   undefined4 uStack_51;
   undefined8 local_4d;
   long local_40;
   puVar6 = (undefined4*)0x0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (undefined1[16])0x0;
   _local_58 = 0;
   if (param_3 == 0) {
      LAB_00109578:iVar2 = *param_1;
      *param_4 = 0;
      if (( iVar2 == 0 ) || ( ( *(byte*)( param_1 + 8 ) & 0x11 ) != 0x10 )) {
         iVar2 = -0x89;
      } else {
         uVar1 = *(ushort*)( param_1 + 2 );
         if (( ( uVar1 & 0x7000 ) == 0x2000 ) && ( ( uVar1 & 0x700 ) == 0x400 )) {
            if (( ( param_1[1] ^ 0x5500100U ) & 0xffc07fff ) == 0) {
               uVar8 = 0xd;
            } else {
               uVar5 = param_1[1] ^ 0x5500200;
               joined_r0x00109737:uVar8 = 0;
               if (( uVar5 & 0xffc07fff ) != 0) goto LAB_001095c0;
               uVar8 = 0xc;
            }
            if (param_3 < uVar8) {
               iVar2 = -0x8a;
               goto LAB_00109625;
            }
         } else {
            uVar8 = 0;
            if (uVar1 == 0x2004) {
               uVar5 = param_1[1] ^ 0x5100500;
               goto joined_r0x00109737;
            }
         }
         LAB_001095c0:iVar2 = psa_generate_random_internal(&local_4d, uVar8);
         if (( iVar2 == 0 ) && ( iVar2 = psa_aead_set_nonce_internal(param_1, &local_4d, uVar8) ),iVar2 == 0) {
            uVar5 = (uint)uVar8;
            if (uVar5 < 8) {
               if (( uVar8 & 4 ) == 0) {
                  if (uVar5 != 0) {
                     *(undefined1*)puVar6 = (undefined1)local_4d;
                  }
               } else {
                  *puVar6 = (undefined4)local_4d;
                  *(undefined4*)( (long)puVar6 + ( uVar8 - 4 ) ) = *(undefined4*)( local_58 + uVar8 + 7 );
               }
            } else {
               *(undefined8*)( (long)puVar6 + ( uVar8 - 8 ) ) = *(undefined8*)( local_58 + uVar8 + 3 );
               if (7 < uVar5 - 1) {
                  uVar4 = 0;
                  do {
                     uVar7 = (ulong)uVar4;
                     uVar4 = uVar4 + 8;
                     *(undefined8*)( (long)puVar6 + uVar7 ) = *(undefined8*)( (long)&local_4d + uVar7 );
                  } while ( uVar4 < ( uVar5 - 1 & 0xfffffff8 ) );
               }
            }
            *param_4 = uVar8;
            goto LAB_0010962d;
         }
      }
   } else {
      puVar6 = (undefined4*)calloc(param_3, 1);
      local_68._8_8_ = puVar6;
      if (puVar6 != (undefined4*)0x0) {
         local_68._0_8_ = param_2;
         _local_58 = param_3;
         goto LAB_00109578;
      }
      iVar2 = -0x8d;
   }
   LAB_00109625:psa_aead_abort(param_1);
   LAB_0010962d:iVar3 = psa_crypto_local_output_free(local_68);
   if (iVar3 == 0) {
      iVar3 = iVar2;
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar3;
}int psa_aead_update(int *param_1, undefined8 param_2, ulong param_3, undefined8 param_4, size_t param_5, undefined8 *param_6) {
   int iVar1;
   int iVar2;
   void *pvVar3;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   undefined1 local_58[16];
   size_t local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_48 = 0;
   iVar1 = psa_crypto_local_input_alloc(param_2, param_3, &local_68);
   if (iVar1 == 0) {
      pvVar3 = (void*)0x0;
      if (param_5 != 0) {
         pvVar3 = calloc(param_5, 1);
         local_58._8_8_ = pvVar3;
         if (pvVar3 == (void*)0x0) {
            iVar1 = -0x8d;
            goto LAB_001097f0;
         }
         local_58._0_8_ = param_4;
         local_48 = param_5;
      }
      iVar1 = *param_1;
      *param_6 = 0;
      if (( iVar1 == 0 ) || ( ( *(byte*)( param_1 + 8 ) & 1 ) == 0 )) {
         LAB_001098b0:iVar1 = -0x89;
      } else {
         if (( *(byte*)( param_1 + 8 ) & 2 ) == 0) {
            if (param_1[1] == 0x5500100) goto LAB_001098b0;
            LAB_001098c9:if (iVar1 == 1) {
               iVar1 = mbedtls_psa_aead_update(param_1 + 10, local_68, param_3, pvVar3, param_5, param_6);
               if (iVar1 == 0) {
                  *(byte*)( param_1 + 8 ) = *(byte*)( param_1 + 8 ) | 8;
                  goto LAB_001097f8;
               }
               goto LAB_001097f0;
            }
         } else if (( *(long*)( param_1 + 4 ) == 0 ) && ( param_3 <= *(ulong*)( param_1 + 6 ) )) {
            *(ulong*)( param_1 + 6 ) = *(ulong*)( param_1 + 6 ) - param_3;
            goto LAB_001098c9;
         }
         iVar1 = -0x87;
      }
   }
   LAB_001097f0:psa_aead_abort(param_1);
   LAB_001097f8:mbedtls_zeroize_and_free(local_68, local_60);
   iVar2 = psa_crypto_local_output_free(local_58);
   if (iVar2 == 0) {
      iVar2 = iVar1;
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}int psa_aead_finish(int *param_1, undefined8 param_2, size_t param_3, undefined8 *param_4, undefined8 param_5, size_t param_6, size_t *param_7) {
   byte bVar1;
   int iVar2;
   int iVar3;
   void *pvVar4;
   void *__s;
   long in_FS_OFFSET;
   undefined1 local_78[16];
   size_t local_68;
   undefined1 local_58[16];
   size_t local_48;
   long local_40;
   pvVar4 = (void*)0x0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_48 = 0;
   local_68 = 0;
   local_78 = (undefined1[16])0x0;
   if (param_3 == 0) {
      LAB_0010998b:if (param_6 == 0) {
         iVar2 = *param_1;
         *param_4 = 0;
         *param_7 = 0;
         if (( iVar2 == 0 ) || ( bVar1 = *(byte*)( param_1 + 8 )(bVar1 & 1) == 0 )) {
            LAB_00109b39:iVar2 = -0x89;
            goto LAB_00109ae1;
         }
         __s = (void*)0x0;
         LAB_001099bd:if (( ( bVar1 & 2 ) == 0 ) || ( ( *(long*)( param_1 + 4 ) == 0 && ( *(long*)( param_1 + 6 ) == 0 ) ) )) {
            if (( bVar1 & 0x10 ) == 0) {
               if (param_6 != 0) goto LAB_00109a80;
               goto LAB_00109b39;
            }
            if (iVar2 == 1) {
               iVar2 = mbedtls_psa_aead_finish(param_1 + 10, pvVar4, param_3, param_4, __s, param_6, param_7);
               if (param_6 == 0) goto LAB_00109ae1;
               if (iVar2 == 0) {
                  param_6 = param_6 - *param_7;
                  __s = (void*)( (long)__s + *param_7 );
               }
               goto LAB_00109ad1;
            }
         }
         iVar2 = -0x87;
         if (param_6 == 0) goto LAB_00109ae1;
      } else {
         __s = calloc(param_6, 1);
         local_58._8_8_ = __s;
         if (__s == (void*)0x0) goto LAB_00109ac8;
         iVar2 = *param_1;
         *param_4 = 0;
         local_58._0_8_ = param_5;
         *param_7 = param_6;
         local_48 = param_6;
         if (( iVar2 != 0 ) && ( bVar1 = *(byte*)( param_1 + 8 )(bVar1 & 1) != 0 )) goto LAB_001099bd;
         LAB_00109a80:iVar2 = -0x89;
      }
   } else {
      pvVar4 = calloc(param_3, 1);
      local_78._8_8_ = pvVar4;
      if (pvVar4 != (void*)0x0) {
         local_78._0_8_ = param_2;
         local_68 = param_3;
         goto LAB_0010998b;
      }
      iVar2 = -0x8d;
      if (param_6 == 0) goto LAB_00109ae1;
      LAB_00109ac8:__s = (void*)0x0;
      iVar2 = -0x8d;
   }
   LAB_00109ad1:memset(__s, 0x21, param_6);
   LAB_00109ae1:psa_aead_abort(param_1);
   iVar3 = psa_crypto_local_output_free(local_78);
   if (iVar3 == 0) {
      iVar3 = iVar2;
   }
   iVar2 = psa_crypto_local_output_free(local_58);
   if (iVar2 == 0) {
      iVar2 = iVar3;
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}int psa_aead_verify(int *param_1, undefined8 param_2, size_t param_3, undefined8 *param_4, undefined8 param_5, long param_6) {
   byte bVar1;
   int iVar2;
   int iVar3;
   void *pvVar4;
   undefined8 uVar5;
   undefined8 extraout_RDX;
   undefined8 uVar6;
   long in_FS_OFFSET;
   long local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined1 local_78[16];
   size_t local_68;
   undefined1 local_58[24];
   long local_40;
   pvVar4 = (void*)0x0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = (undefined1[16])0x0;
   local_88 = 0;
   local_80 = 0;
   local_68 = 0;
   if (param_3 != 0) {
      pvVar4 = calloc(param_3, 1);
      local_78._8_8_ = pvVar4;
      if (pvVar4 == (void*)0x0) {
         uVar6 = 0;
         iVar2 = -0x8d;
         goto LAB_00109c2d;
      }
      local_78._0_8_ = param_2;
      local_68 = param_3;
   }
   iVar2 = psa_crypto_local_input_alloc(param_5, param_6, &local_88);
   uVar6 = local_88;
   if (iVar2 != 0) goto LAB_00109c2d;
   iVar3 = *param_1;
   *param_4 = 0;
   if (( iVar3 == 0 ) || ( bVar1 = *(byte*)( param_1 + 8 )(bVar1 & 1) == 0 )) {
      iVar2 = -0x89;
      goto LAB_00109c2d;
   }
   if (( ( bVar1 & 2 ) == 0 ) || ( ( *(long*)( param_1 + 4 ) == 0 && ( *(long*)( param_1 + 6 ) == 0 ) ) )) {
      iVar2 = -0x89;
      if (( bVar1 & 0x10 ) != 0) goto LAB_00109c2d;
      if (iVar3 == 1) {
         iVar2 = mbedtls_psa_aead_finish(param_1 + 10, pvVar4, param_3, param_4, local_58, 0x10, &local_90);
         uVar5 = 0x109bd6;
         if (iVar2 == 0) {
            if (param_6 == local_90) {
               iVar2 = mbedtls_ct_memcmp(uVar6, local_58, param_6);
               uVar5 = extraout_RDX;
               if (iVar2 == 0) {
                  iVar2 = 0;
                  goto LAB_00109cfd;
               }
            }
            iVar2 = -0x95;
         }
         LAB_00109cfd:mbedtls_platform_zeroize(local_58, 0x10, uVar5);
         goto LAB_00109c2d;
      }
   }
   iVar2 = -0x87;
   LAB_00109c2d:psa_aead_abort(param_1);
   iVar3 = psa_crypto_local_output_free(local_78);
   if (iVar3 == 0) {
      iVar3 = iVar2;
   }
   mbedtls_zeroize_and_free(uVar6, local_80);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ulong psa_key_derivation_output_bytes(uint *param_1, undefined8 param_2, size_t param_3) {
   uint *puVar1;
   char cVar2;
   undefined1 auVar3[16];
   uint uVar4;
   uint uVar5;
   ulong uVar6;
   long lVar7;
   long lVar8;
   ulong uVar9;
   byte bVar10;
   uint uVar11;
   size_t sVar12;
   undefined8 *puVar13;
   undefined8 *puVar14;
   undefined8 *puVar15;
   uint uVar16;
   long in_FS_OFFSET;
   byte bVar17;
   undefined8 *local_78;
   char local_6d;
   uint local_6c;
   long local_60;
   undefined1 local_58[16];
   size_t local_48;
   long local_40;
   bVar17 = 0;
   uVar5 = *param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( uVar5 & 0x7f000000 ) != 0x9000000) {
      uVar11 = uVar5;
      if (uVar5 != 0) goto LAB_00109da9;
      LAB_0010a26a:uVar6 = 0xffffff77;
      goto LAB_00109f0e;
   }
   uVar11 = uVar5 & 0xf600ffff | 0x8000000;
   LAB_00109da9:if (param_3 == 0) {
      uVar6 = *(ulong*)( param_1 + 2 );
      if (uVar6 == 0) {
         uVar6 = 0xffffff71;
         goto LAB_00109f0e;
      }
      local_48 = 0;
      local_78 = (undefined8*)0x0;
      local_58 = (undefined1[16])0x0;
      LAB_00109dda:*(ulong*)( param_1 + 2 ) = uVar6 - param_3;
      uVar4 = uVar11 & 0xffffff00;
      if (( uVar4 == 0x8000100 ) || ( uVar4 == 0x8000400 )) {
         cVar2 = '\0';
         local_6c = uVar11 & 0xff | 0x2000000;
         if (local_6c + 0xfdfffffd < 0x11) {
            cVar2 = CSWTCH_771[local_6c + 0xfdfffffd];
         }
         local_6d = -(uVar4 != 0x8000400);
         LAB_00109fca:if (( 1 < ( *(byte*)( (long)param_1 + 0x22 ) & 3 ) ) && ( ( ( *(byte*)( (long)param_1 + 0x22 ) & 4 ) != 0 || ( uVar4 == 0x8000400 ) ) )) {
            *(byte*)( (long)param_1 + 0x22 ) = *(byte*)( (long)param_1 + 0x22 ) | 3;
            if (param_3 != 0) {
               lVar8 = (long)param_1 + 0x23;
               sVar12 = param_3;
               puVar15 = local_78;
               while (true) {
                  bVar10 = cVar2 - (byte)param_1[8];
                  uVar6 = (ulong)bVar10;
                  if (sVar12 < bVar10) {
                     bVar10 = (byte)sVar12;
                     uVar6 = sVar12;
                  }
                  puVar13 = (undefined8*)( (ulong)(byte)param_1[8] + lVar8 );
                  uVar5 = (uint)uVar6;
                  uVar9 = uVar6 & 0xffffffff;
                  if (uVar5 < 8) {
                     if (( uVar6 & 4 ) == 0) {
                        if (( uVar5 != 0 ) && ( *(undefined1*)puVar15 = *(undefined1*)puVar13(uVar6 & 2) != 0 )) {
                           *(undefined2*)( (long)puVar15 + ( uVar9 - 2 ) ) = *(undefined2*)( (long)puVar13 + ( uVar9 - 2 ) );
                        }
                     } else {
                        *(undefined4*)puVar15 = *(undefined4*)puVar13;
                        *(undefined4*)( (long)puVar15 + ( uVar9 - 4 ) ) = *(undefined4*)( (long)puVar13 + ( uVar9 - 4 ) );
                     }
                  } else {
                     *puVar15 = *puVar13;
                     *(undefined8*)( (long)puVar15 + ( ( uVar6 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)puVar13 + ( ( uVar6 & 0xffffffff ) - 8 ) );
                     lVar7 = (long)puVar15 - (long)( ( ulong )(puVar15 + 1) & 0xfffffffffffffff8 );
                     puVar13 = (undefined8*)( (long)puVar13 - lVar7 );
                     puVar14 = (undefined8*)( ( ulong )(puVar15 + 1) & 0xfffffffffffffff8 );
                     for (uVar9 = ( ulong )((int)lVar7 + uVar5 >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
                        *puVar14 = *puVar13;
                        puVar13 = puVar13 + (ulong)bVar17 * -2 + 1;
                        puVar14 = puVar14 + (ulong)bVar17 * -2 + 1;
                     }
                  }
                  *(byte*)( param_1 + 8 ) = (char)param_1[8] + bVar10;
                  puVar15 = (undefined8*)( (long)puVar15 + uVar6 );
                  sVar12 = sVar12 - uVar6;
                  if (sVar12 == 0) goto LAB_0010a230;
                  if (*(char*)( (long)param_1 + 0x21 ) == local_6d) break;
                  *(undefined1*)( param_1 + 8 ) = 0;
                  *(char*)( (long)param_1 + 0x21 ) = *(char*)( (long)param_1 + 0x21 ) + '\x01';
                  puVar1 = param_1 + 0x2a;
                  uVar4 = psa_key_derivation_start_hmac(puVar1, local_6c, (long)param_1 + 99, cVar2);
                  if (( uVar4 != 0 ) || ( ( ( ( *(char*)( (long)param_1 + 0x21 ) != '\x01' && ( uVar4 = psa_mac_update(puVar1, lVar8, cVar2) ),uVar4 != 0 ) ) || ( uVar4 = psa_mac_update(puVar1, *(undefined8*)( param_1 + 4 ), *(undefined8*)( param_1 + 6 )) ),uVar4 != 0 ) ) || ( ( uVar4 = psa_mac_update(puVar1, (long)param_1 + 0x21, 1) ),uVar4 != 0 || ( uVar4 = psa_mac_sign_finish(puVar1, lVar8, 0x40, &local_60) ),uVar4 != 0 )) goto LAB_0010a158;
               };
               uVar4 = 0xffffff77;
               LAB_0010a158:uVar5 = *param_1;
               goto LAB_0010a15b;
            }
            LAB_0010a230:uVar4 = 0;
            goto LAB_00109ef9;
         }
         LAB_0010a2a1:uVar4 = 0xffffff77;
      } else {
         if (uVar4 == 0x8000500) {
            local_6c = uVar11 & 0xff | 0x2000000;
            if (local_6c + 0xfdfffffd < 0x11) {
               local_6d = -1;
               cVar2 = CSWTCH_771[local_6c + 0xfdfffffd];
            } else {
               cVar2 = '\0';
               local_6d = -1;
            }
            goto LAB_00109fca;
         }
         if (( uVar11 & 0xfffffe00 ) == 0x8000200) {
            uVar16 = 0;
            uVar4 = ( uVar11 & 0xff | 0x2000000 ) + 0xfdfffffd;
            if (uVar4 < 0x11) {
               uVar16 = (uint)(byte)CSWTCH_771[uVar4];
            }
            if (param_1[5] == 4) {
               param_1[5] = 5;
               LAB_0010a1b6:sVar12 = param_3;
               puVar15 = local_78;
               if (param_3 != 0) {
                  do {
                     while (true) {
                        bVar10 = (byte)param_1[4];
                        uVar6 = (ulong)bVar10;
                        if (bVar10 != 0) break;
                        uVar4 = psa_key_derivation_tls12_prf_generate_next_block(param_1 + 4, uVar11);
                        if (uVar4 != 0) goto LAB_0010a158;
                     };
                     uVar5 = (uint)bVar10;
                     if (sVar12 < uVar6) {
                        uVar6 = sVar12;
                        bVar10 = (byte)sVar12;
                     }
                     puVar13 = (undefined8*)( (long)param_1 + ( ulong )(uVar16 - uVar5 & 0xff) + 0x98 );
                     uVar5 = (uint)uVar6;
                     uVar9 = uVar6 & 0xffffffff;
                     if (uVar5 < 8) {
                        if (( uVar6 & 4 ) == 0) {
                           if (( uVar5 != 0 ) && ( *(undefined1*)puVar15 = *(undefined1*)puVar13(uVar6 & 2) != 0 )) {
                              *(undefined2*)( (long)puVar15 + ( uVar9 - 2 ) ) = *(undefined2*)( (long)puVar13 + ( uVar9 - 2 ) );
                           }
                        } else {
                           *(undefined4*)puVar15 = *(undefined4*)puVar13;
                           *(undefined4*)( (long)puVar15 + ( uVar9 - 4 ) ) = *(undefined4*)( (long)puVar13 + ( uVar9 - 4 ) );
                        }
                     } else {
                        *puVar15 = *puVar13;
                        *(undefined8*)( (long)puVar15 + ( ( uVar6 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)puVar13 + ( ( uVar6 & 0xffffffff ) - 8 ) );
                        lVar8 = (long)puVar15 - (long)( ( ulong )(puVar15 + 1) & 0xfffffffffffffff8 );
                        puVar13 = (undefined8*)( (long)puVar13 - lVar8 );
                        puVar14 = (undefined8*)( ( ulong )(puVar15 + 1) & 0xfffffffffffffff8 );
                        for (uVar9 = ( ulong )((int)lVar8 + uVar5 >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
                           *puVar14 = *puVar13;
                           puVar13 = puVar13 + (ulong)bVar17 * -2 + 1;
                           puVar14 = puVar14 + (ulong)bVar17 * -2 + 1;
                        }
                     }
                     *(byte*)( param_1 + 4 ) = (char)param_1[4] - bVar10;
                     puVar15 = (undefined8*)( (long)puVar15 + uVar6 );
                     sVar12 = sVar12 - uVar6;
                  } while ( sVar12 != 0 );
               }
               goto LAB_0010a230;
            }
            if (param_1[5] == 5) goto LAB_0010a1b6;
            goto LAB_0010a2a1;
         }
         if (uVar11 != 0x8000609) {
            uVar6 = psa_crypto_local_output_free(local_58);
            if ((int)uVar6 != 0) goto LAB_00109f0e;
            goto LAB_0010a26a;
         }
         local_60 = 0;
         if (param_3 == 0x20) {
            uVar4 = psa_hash_compute(0x2000009, param_1 + 4, 0x20, local_78, 0x20, &local_60);
            if (uVar4 == 0) {
               if (local_60 != 0x20) {
                  uVar5 = *param_1;
                  uVar4 = 0xffffff7c;
                  goto LAB_0010a15b;
               }
               goto LAB_0010a230;
            }
            goto LAB_0010a158;
         }
         uVar4 = 0xffffff79;
      }
      LAB_0010a15b:psa_key_derivation_abort(param_1);
      *param_1 = uVar5;
      if (local_78 != (undefined8*)0x0) {
         LAB_00109ee1:memset(local_78, 0x21, param_3);
      }
   } else {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_58._8_8_;
      local_58 = auVar3 << 0x40;
      local_48 = 0;
      local_78 = (undefined8*)calloc(param_3, 1);
      local_58._8_8_ = local_78;
      if (local_78 != (undefined8*)0x0) {
         uVar6 = *(ulong*)( param_1 + 2 );
         local_58._0_8_ = param_2;
         local_48 = param_3;
         if (param_3 <= uVar6) goto LAB_00109dda;
         param_1[2] = 0;
         param_1[3] = 0;
         psa_key_derivation_abort(param_1);
         *param_1 = uVar5;
         uVar4 = 0xffffff71;
         goto LAB_00109ee1;
      }
      psa_key_derivation_abort(param_1);
      *param_1 = uVar5;
      uVar4 = 0xffffff73;
   }
   LAB_00109ef9:uVar5 = psa_crypto_local_output_free(local_58);
   uVar6 = (ulong)uVar5;
   if (uVar5 == 0) {
      uVar6 = (ulong)uVar4;
   }
   LAB_00109f0e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar6;
}int psa_generate_derived_key_internal(ushort *param_1, ulong param_2, undefined8 param_3) {
   ushort uVar1;
   ulong uVar2;
   int iVar3;
   int iVar4;
   byte *pbVar5;
   void *pvVar6;
   ulong __size;
   undefined1 uVar7;
   size_t __size_00;
   long in_FS_OFFSET;
   ulong local_160;
   ulong local_140;
   int local_134;
   ulong local_130;
   undefined1 local_128[16];
   undefined1 local_118[16];
   undefined1 local_108[104];
   undefined1 local_a0[24];
   ulong local_88;
   long local_40;
   __size = param_2 + 7 >> 3;
   uVar1 = *param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_140 = param_2;
   local_130 = __size;
   if (( uVar1 & 0x7000 ) != 0x4000) {
      if (( uVar1 & 0xcf00 ) == 0x4100) {
         if ((byte)uVar1 < 0x40) {
            local_134 = 1;
            mbedtls_mpi_init(local_128);
            mbedtls_mpi_init(local_118);
            uVar7 = ( undefined1 ) * param_1;
            if (( *param_1 & 0xcf00 ) != 0x4100) {
               uVar7 = 0;
            }
            iVar4 = mbedtls_ecc_group_from_psa(uVar7, param_2);
            if (iVar4 == 0) {
               local_160 = 0;
               pbVar5 = (byte*)0x0;
               iVar4 = -0x68;
            } else {
               mbedtls_ecp_group_init(local_108);
               iVar4 = mbedtls_ecp_group_load(local_108, iVar4);
               if (iVar4 == 0) {
                  pbVar5 = (byte*)0x0;
                  local_160 = local_88 + 7 >> 3;
                  iVar4 = mbedtls_mpi_sub_int(local_118, local_a0, 2);
                  if (iVar4 == 0) {
                     pbVar5 = (byte*)calloc(1, local_160);
                     if (pbVar5 == (byte*)0x0) {
                        iVar4 = -0x6a;
                     } else {
                        iVar3 = -0x97;
                        while (local_134 != 0) {
                           iVar3 = psa_key_derivation_output_bytes(param_3, pbVar5, local_160);
                           if (iVar3 != 0) goto LAB_0010a657;
                           if (( local_88 & 7 ) != 0) {
                              *pbVar5 = *pbVar5 & (char)( 1 << ( (byte)local_88 & 7 ) ) - 1U;
                           }
                           iVar4 = mbedtls_mpi_read_binary(local_128, pbVar5, local_160);
                           if (( iVar4 != 0 ) || ( iVar4 = mbedtls_mpi_lt_mpi_ct(local_118, local_128, &local_134) ),iVar3 = iVar4,iVar4 != 0) goto LAB_0010a631;
                        };
                        iVar4 = mbedtls_mpi_add_int(local_128, local_128, 1);
                        if (( iVar4 == 0 ) && ( iVar4 = mbedtls_mpi_write_binary(local_128, pbVar5, local_160) ),iVar4 == 0) goto LAB_0010a63b;
                     }
                  }
               } else {
                  local_160 = 0;
                  pbVar5 = (byte*)0x0;
               }
            }
            LAB_0010a631:iVar3 = mbedtls_to_psa_error(iVar4);
            LAB_0010a63b:if (iVar3 == 0) {
               mbedtls_mpi_free(local_128);
               mbedtls_mpi_free(local_118);
               LAB_0010a410:param_1[1] = (ushort)local_140;
               if (( *(uint*)( param_1 + 2 ) >> 8 == 0 ) || ( iVar3 = psa_driver_wrapper_get_key_buffer_size(param_1, &local_130) ),iVar3 == 0) {
                  uVar2 = local_130;
                  if (*(long*)( param_1 + 0x14 ) == 0) {
                     pvVar6 = calloc(1, local_130);
                     *(void**)( param_1 + 0x14 ) = pvVar6;
                     if (pvVar6 == (void*)0x0) goto LAB_0010a816;
                     *(ulong*)( param_1 + 0x18 ) = uVar2;
                     if (*(uint*)( param_1 + 2 ) >> 8 == 0) {
                        iVar3 = psa_import_key_into_slot(param_1, pbVar5, __size, pvVar6, uVar2, param_1 + 0x18, &local_140);
                     } else {
                        iVar3 = -0x87;
                     }
                     if (param_1[1] != local_140) {
                        iVar3 = -0x87;
                     }
                  } else {
                     iVar3 = -0x8b;
                  }
               }
            } else {
               LAB_0010a657:mbedtls_zeroize_and_free(pbVar5, local_160);
               mbedtls_mpi_free(local_128);
               mbedtls_mpi_free(local_118);
               pbVar5 = (byte*)0x0;
            }
         } else {
            if (param_2 == 0xff) {
               __size_00 = 0x20;
            } else {
               __size_00 = 0x38;
               if (param_2 != 0x1c0) {
                  iVar3 = -0x87;
                  pbVar5 = (byte*)0x0;
                  goto LAB_0010a498;
               }
            }
            pbVar5 = (byte*)calloc(1, __size_00);
            if (pbVar5 == (byte*)0x0) {
               LAB_0010a816:iVar3 = -0x8d;
            } else {
               iVar3 = psa_key_derivation_output_bytes(param_3, pbVar5, __size_00);
               if (iVar3 == 0) {
                  if (param_2 == 0xff) {
                     *pbVar5 = *pbVar5 & 0xf8;
                     pbVar5[0x1f] = pbVar5[0x1f] & 0x7f | 0x40;
                  } else {
                     *pbVar5 = *pbVar5 & 0xfc;
                     pbVar5[0x37] = pbVar5[0x37] | 0x80;
                  }
                  goto LAB_0010a410;
               }
            }
         }
         LAB_0010a498:mbedtls_zeroize_and_free(pbVar5, __size);
         goto LAB_0010a4a3;
      }
      if (( ( uVar1 & 0x7000 ) - 0x1000 & 0xe000 ) != 0) {
         iVar3 = -0x86;
         goto LAB_0010a4a3;
      }
      if (( param_2 & 7 ) == 0) {
         pbVar5 = (byte*)calloc(1, __size);
         if (pbVar5 == (byte*)0x0) {
            iVar3 = -0x8d;
            goto LAB_0010a4a3;
         }
         iVar3 = psa_key_derivation_output_bytes(param_3, pbVar5, __size);
         if (iVar3 == 0) goto LAB_0010a410;
         goto LAB_0010a498;
      }
   }
   iVar3 = -0x87;
   LAB_0010a4a3:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar3;
}/* WARNING: Type propagation algorithm not settling */int psa_key_derivation_output_key_custom(long param_1, int *param_2, int *param_3, undefined8 param_4, long param_5, undefined4 *param_6) {
   short sVar1;
   long lVar2;
   int iVar3;
   int iVar4;
   long in_FS_OFFSET;
   long local_40[4];
   local_40[2] = *(long*)( in_FS_OFFSET + 0x28 );
   sVar1 = *(short*)( param_1 + 2 );
   *param_6 = 0;
   local_40[0] = 0;
   local_40[1] = 0;
   if (( ( sVar1 == 0 ) || ( *param_3 != 0 ) ) || ( param_5 != 0 )) {
      iVar4 = -0x87;
   } else if (*param_2 == 0) {
      iVar4 = -0x89;
   } else if (( *(byte*)( param_2 + 1 ) & 1 ) == 0) {
      iVar4 = -0x85;
   } else {
      iVar3 = psa_start_key_creation_isra_0(param_1, local_40, local_40 + 1);
      if (( ( iVar3 == 0 ) && ( iVar4 = psa_generate_derived_key_internal(local_40[0], *(undefined2*)( param_1 + 2 ), param_2) ),lVar2 = local_40[0],iVar3 = iVar4,iVar4 == 0 )) &&( ( *(char*)( local_40[0] + 4 ) == '\0' || ( iVar3 = psa_save_persistent_key(local_40[0], *(undefined8*)( local_40[0] + 0x28 ), *(undefined8*)( local_40[0] + 0x30 )) ),iVar3 == 0 ) ) * param_6 = *(undefined4*)( lVar2 + 0x14 );
      if (*(int*)( lVar2 + 0x18 ) == 1) {
         *(undefined4*)( lVar2 + 0x18 ) = 2;
         goto LAB_0010a8c6;
      }
      iVar3 = -0x97;
      *param_6 = 0;
   }
   iVar4 = iVar3;
   if (local_40[0] != 0) {
      psa_wipe_key_slot();
   }
}LAB_0010a8c6:if (local_40[2] != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return iVar4;}void psa_key_derivation_output_key_ext(void) {
   psa_key_derivation_output_key_custom();
   return;
}void psa_key_derivation_output_key(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   psa_key_derivation_output_key_custom(param_1, param_2, &default_custom_production, 0, 0, param_3);
   return;
}ulong psa_raw_key_agreement(uint param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, ulong param_6, ulong *param_7) {
   bool bVar1;
   uint uVar2;
   uint uVar3;
   void *pvVar4;
   ulong uVar5;
   undefined2 *puVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   undefined2 *local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined1 local_58[16];
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_70 = (undefined2*)0x0;
   local_68 = 0;
   local_60 = 0;
   local_48 = 0;
   if (param_6 == 0) {
      if (( param_1 & 0x7f000000 ) == 0x9000000) {
         uVar2 = psa_get_and_lock_key_slot(param_2, &local_70);
         if (uVar2 == 0) {
            bVar1 = false;
            pvVar4 = (void*)0x0;
            LAB_0010aa62:uVar2 = psa_get_and_lock_key_slot_with_policy_part_0(&local_70, 0x4000, param_1);
            puVar6 = local_70;
            if (uVar2 == 0) {
               if (*(uint*)( local_70 + 2 ) >> 8 == 0) {
                  if (( ( ( uint )(byte)(( ushort ) * local_70 >> 8) * 0x100 - 0x7100 & 0xfffffe00 ) == 0 ) && ( param_6<(ushort)local_70[1] + 7> > 3 )) {
                     uVar7 = 0;
                     uVar8 = 0;
                     uVar2 = 0xffffff76;
                  } else {
                     uVar2 = psa_crypto_local_input_alloc(param_3, param_4, &local_68);
                     uVar8 = local_60;
                     uVar7 = local_68;
                     if (uVar2 == 0) {
                        if (( param_1 & 0xff00ffff ) == 0x9000000) {
                           if (param_1 == 0x9020000) {
                              uVar2 = mbedtls_psa_key_agreement_ecdh(puVar6, *(undefined8*)( puVar6 + 0x14 ), *(undefined8*)( puVar6 + 0x18 ), 0x9020000, local_68, param_4, pvVar4, param_6, param_7);
                              bVar1 = (bool)( bVar1 & uVar2 != 0 );
                              goto LAB_0010aaf7;
                           }
                        }
                        uVar2 = 0xffffff7a;
                     }
                  }
               } else {
                  uVar7 = 0;
                  uVar8 = 0;
                  psa_unregister_read_under_mutex(local_70);
                  uVar2 = 0xffffff7a;
                  local_70 = (undefined2*)0x0;
               }
            } else {
               uVar7 = 0;
               uVar8 = 0;
            }
            LAB_0010aaf7:if (bVar1) goto LAB_0010ab59;
            puVar6 = local_70;
            if (pvVar4 != (void*)0x0) goto LAB_0010ab6c;
         } else {
            uVar8 = 0;
            uVar7 = 0;
            puVar6 = local_70;
         }
      } else {
         uVar8 = 0;
         uVar7 = 0;
         uVar2 = 0xffffff79;
         puVar6 = (undefined2*)0x0;
      }
   } else {
      pvVar4 = calloc(param_6, 1);
      local_58._8_8_ = pvVar4;
      if (pvVar4 != (void*)0x0) {
         local_58._0_8_ = param_5;
         local_48 = param_6;
         if (( param_1 & 0x7f000000 ) == 0x9000000) {
            uVar2 = psa_get_and_lock_key_slot(param_2, &local_70);
            if (uVar2 == 0) {
               bVar1 = true;
               goto LAB_0010aa62;
            }
            uVar7 = 0;
            uVar8 = 0;
         } else {
            uVar7 = 0;
            uVar8 = 0;
            uVar2 = 0xffffff79;
         }
         LAB_0010ab59:psa_generate_random_internal(pvVar4, param_6);
         *param_7 = param_6;
         puVar6 = local_70;
         goto LAB_0010ab6c;
      }
      uVar7 = 0;
      uVar8 = 0;
      uVar2 = 0xffffff73;
      puVar6 = (undefined2*)0x0;
   }
   *param_7 = 0;
   LAB_0010ab6c:uVar3 = psa_unregister_read_under_mutex(puVar6);
   mbedtls_zeroize_and_free(uVar7, uVar8);
   uVar5 = psa_crypto_local_output_free(local_58);
   if (( (int)uVar5 == 0 ) && ( uVar5 = uVar2 != 0 )) {
      uVar5 = (ulong)uVar2;
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar5;
}
