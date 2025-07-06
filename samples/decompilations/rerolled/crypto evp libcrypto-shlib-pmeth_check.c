undefined8 EVP_PKEY_public_check(long param_1) {
   int *piVar1;
   long lVar2;
   undefined8 uVar3;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   piVar1 = *(int**)( param_1 + 0x88 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (piVar1 == (int*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_check.c", 0x35, "evp_pkey_public_check_combined");
      ERR_set_error(6, 0x9a, 0);
      uVar3 = 0;
   } else if (*(long*)( param_1 + 0x20 ) == 0) {
      LAB_0010006e:if (( *piVar1 != 0 ) && ( ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x78 ) + 0xe8 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0 || ( ( *(long*)( piVar1 + 2 ) != 0 && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( piVar1 + 2 ) + 0xe8 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0 ) ) )) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            for (int i_1627 = 0; i_1627 < 2; i_1627++) {
               /* WARNING: Could not recover jumptable at 0x001000a6. Too many branches */
            }
            uVar3 = ( *UNRECOVERED_JUMPTABLE )(piVar1);
            return uVar3;
         }
         goto LAB_00100187;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_check.c", 0x4d, "evp_pkey_public_check_combined");
      ERR_set_error(6, 0x96, 0);
      uVar3 = 0xfffffffe;
   } else {
      local_28 = *(long*)( param_1 + 0x20 );
      lVar2 = evp_pkey_export_to_provider(piVar1, *(undefined8*)( param_1 + 8 ), &local_28, *(undefined8*)( param_1 + 0x10 ));
      if (lVar2 == 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/pmeth_check.c", 0x28, "try_provided_check");
         ERR_set_error(6, 0x86, 0);
         uVar3 = 0;
      } else {
         uVar3 = evp_keymgmt_validate(local_28, lVar2, 2, 0);
         if ((int)uVar3 == -1) goto LAB_0010006e;
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   LAB_00100187:/* WARNING: Subroutine does not return */__stack_chk_fail();
}undefined8 EVP_PKEY_public_check_quick(long param_1) {
   int *piVar1;
   long lVar2;
   undefined8 uVar3;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   piVar1 = *(int**)( param_1 + 0x88 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (piVar1 == (int*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_check.c", 0x35, "evp_pkey_public_check_combined");
      ERR_set_error(6, 0x9a, 0);
      uVar3 = 0;
   } else if (*(long*)( param_1 + 0x20 ) == 0) {
      LAB_00100201:if (( *piVar1 != 0 ) && ( ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x78 ) + 0xe8 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0 || ( ( *(long*)( piVar1 + 2 ) != 0 && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( piVar1 + 2 ) + 0xe8 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0 ) ) )) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            for (int i_1628 = 0; i_1628 < 2; i_1628++) {
               /* WARNING: Could not recover jumptable at 0x00100239. Too many branches */
            }
            uVar3 = ( *UNRECOVERED_JUMPTABLE )(piVar1);
            return uVar3;
         }
         goto LAB_00100317;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_check.c", 0x4d, "evp_pkey_public_check_combined");
      ERR_set_error(6, 0x96, 0);
      uVar3 = 0xfffffffe;
   } else {
      local_28 = *(long*)( param_1 + 0x20 );
      lVar2 = evp_pkey_export_to_provider(piVar1, *(undefined8*)( param_1 + 8 ), &local_28, *(undefined8*)( param_1 + 0x10 ));
      if (lVar2 == 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/pmeth_check.c", 0x28, "try_provided_check");
         ERR_set_error(6, 0x86, 0);
         uVar3 = 0;
      } else {
         uVar3 = evp_keymgmt_validate(local_28, lVar2, 2, 1);
         if ((int)uVar3 == -1) goto LAB_00100201;
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   LAB_00100317:/* WARNING: Subroutine does not return */__stack_chk_fail();
}undefined8 EVP_PKEY_param_check(long param_1) {
   int *piVar1;
   long lVar2;
   undefined8 uVar3;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   piVar1 = *(int**)( param_1 + 0x88 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (piVar1 == (int*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_check.c", 0x61, "evp_pkey_param_check_combined");
      ERR_set_error(6, 0x9a, 0);
      uVar3 = 0;
   } else if (*(long*)( param_1 + 0x20 ) == 0) {
      LAB_0010038e:if (( *piVar1 != 0 ) && ( ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x78 ) + 0xf0 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0 || ( ( *(long*)( piVar1 + 2 ) != 0 && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( piVar1 + 2 ) + 0xf0 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0 ) ) )) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            for (int i_1629 = 0; i_1629 < 2; i_1629++) {
               /* WARNING: Could not recover jumptable at 0x001003c6. Too many branches */
            }
            uVar3 = ( *UNRECOVERED_JUMPTABLE )(piVar1);
            return uVar3;
         }
         goto LAB_001004a7;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_check.c", 0x7a, "evp_pkey_param_check_combined");
      ERR_set_error(6, 0x96, 0);
      uVar3 = 0xfffffffe;
   } else {
      local_28 = *(long*)( param_1 + 0x20 );
      lVar2 = evp_pkey_export_to_provider(piVar1, *(undefined8*)( param_1 + 8 ), &local_28, *(undefined8*)( param_1 + 0x10 ));
      if (lVar2 == 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/pmeth_check.c", 0x28, "try_provided_check");
         ERR_set_error(6, 0x86, 0);
         uVar3 = 0;
      } else {
         uVar3 = evp_keymgmt_validate(local_28, lVar2, 0x84, 0);
         if ((int)uVar3 == -1) goto LAB_0010038e;
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   LAB_001004a7:/* WARNING: Subroutine does not return */__stack_chk_fail();
}undefined8 EVP_PKEY_param_check_quick(long param_1) {
   int *piVar1;
   long lVar2;
   undefined8 uVar3;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   piVar1 = *(int**)( param_1 + 0x88 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (piVar1 == (int*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_check.c", 0x61, "evp_pkey_param_check_combined");
      ERR_set_error(6, 0x9a, 0);
      uVar3 = 0;
   } else if (*(long*)( param_1 + 0x20 ) == 0) {
      LAB_00100521:if (( *piVar1 != 0 ) && ( ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x78 ) + 0xf0 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0 || ( ( *(long*)( piVar1 + 2 ) != 0 && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( piVar1 + 2 ) + 0xf0 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0 ) ) )) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            for (int i_1630 = 0; i_1630 < 2; i_1630++) {
               /* WARNING: Could not recover jumptable at 0x00100559. Too many branches */
            }
            uVar3 = ( *UNRECOVERED_JUMPTABLE )(piVar1);
            return uVar3;
         }
         goto LAB_00100637;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_check.c", 0x7a, "evp_pkey_param_check_combined");
      ERR_set_error(6, 0x96, 0);
      uVar3 = 0xfffffffe;
   } else {
      local_28 = *(long*)( param_1 + 0x20 );
      lVar2 = evp_pkey_export_to_provider(piVar1, *(undefined8*)( param_1 + 8 ), &local_28, *(undefined8*)( param_1 + 0x10 ));
      if (lVar2 == 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/pmeth_check.c", 0x28, "try_provided_check");
         ERR_set_error(6, 0x86, 0);
         uVar3 = 0;
      } else {
         uVar3 = evp_keymgmt_validate(local_28, lVar2, 0x84, 1);
         if ((int)uVar3 == -1) goto LAB_00100521;
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   LAB_00100637:/* WARNING: Subroutine does not return */__stack_chk_fail();
}undefined8 EVP_PKEY_private_check(long param_1) {
   long lVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_1 + 0x88 ) == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_check.c", 0x8e, "EVP_PKEY_private_check");
      ERR_set_error(6, 0x9a, 0);
      uVar2 = 0;
      goto LAB_001006a7;
   }
   if (*(long*)( param_1 + 0x20 ) != 0) {
      local_18 = *(long*)( param_1 + 0x20 );
      lVar1 = evp_pkey_export_to_provider(*(long*)( param_1 + 0x88 ), *(undefined8*)( param_1 + 8 ), &local_18, *(undefined8*)( param_1 + 0x10 ));
      if (lVar1 == 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/pmeth_check.c", 0x28, "try_provided_check");
         ERR_set_error(6, 0x86, 0);
         uVar2 = 0;
         goto LAB_001006a7;
      }
      uVar2 = evp_keymgmt_validate(local_18, lVar1, 1, 0);
      if ((int)uVar2 != -1) goto LAB_001006a7;
   }
   ERR_new();
   ERR_set_debug("crypto/evp/pmeth_check.c", 0x97, "EVP_PKEY_private_check");
   ERR_set_error(6, 0x96, 0);
   uVar2 = 0xfffffffe;
   LAB_001006a7:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 EVP_PKEY_pairwise_check(long param_1) {
   int *piVar1;
   long lVar2;
   undefined8 uVar3;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   piVar1 = *(int**)( param_1 + 0x88 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (piVar1 == (int*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_check.c", 0xa6, "EVP_PKEY_pairwise_check");
      ERR_set_error(6, 0x9a, 0);
      uVar3 = 0;
   } else if (*(long*)( param_1 + 0x20 ) == 0) {
      LAB_001007de:if (( *piVar1 != 0 ) && ( ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( param_1 + 0x78 ) + 0xe0 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0 || ( ( *(long*)( piVar1 + 2 ) != 0 && ( UNRECOVERED_JUMPTABLE = *(code**)( *(long*)( piVar1 + 2 ) + 0xe0 ) ),UNRECOVERED_JUMPTABLE != (code*)0x0 ) ) )) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            for (int i_1631 = 0; i_1631 < 2; i_1631++) {
               /* WARNING: Could not recover jumptable at 0x00100816. Too many branches */
            }
            uVar3 = ( *UNRECOVERED_JUMPTABLE )(piVar1);
            return uVar3;
         }
         goto LAB_001008f7;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/pmeth_check.c", 0xbe, "EVP_PKEY_pairwise_check");
      ERR_set_error(6, 0x96, 0);
      uVar3 = 0xfffffffe;
   } else {
      local_28 = *(long*)( param_1 + 0x20 );
      lVar2 = evp_pkey_export_to_provider(piVar1, *(undefined8*)( param_1 + 8 ), &local_28, *(undefined8*)( param_1 + 0x10 ));
      if (lVar2 == 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/pmeth_check.c", 0x28, "try_provided_check");
         ERR_set_error(6, 0x86, 0);
         uVar3 = 0;
      } else {
         uVar3 = evp_keymgmt_validate(local_28, lVar2, 3, 0);
         if ((int)uVar3 == -1) goto LAB_001007de;
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   LAB_001008f7:/* WARNING: Subroutine does not return */__stack_chk_fail();
}void EVP_PKEY_check(void) {
   EVP_PKEY_pairwise_check();
   return;
}
