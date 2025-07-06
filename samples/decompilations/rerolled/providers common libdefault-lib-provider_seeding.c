undefined8 ossl_prov_seeding_from_dispatch(int *param_1) {
   bool bVar1;
   bool bVar2;
   bool bVar3;
   bool bVar4;
   bool bVar5;
   bool bVar6;
   bool bVar7;
   bool bVar8;
   int iVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   long lVar15;
   long lVar16;
   long lVar17;
   long lVar18;
   bool bVar19;
   iVar9 = *param_1;
   if (iVar9 == 0) {
      return 1;
   }
   bVar4 = false;
   bVar3 = false;
   bVar2 = false;
   bVar1 = false;
   bVar5 = false;
   bVar6 = false;
   bVar7 = false;
   bVar8 = false;
   lVar10 = c_get_user_entropy;
   lVar11 = c_cleanup_entropy;
   lVar12 = c_cleanup_user_nonce;
   lVar13 = c_cleanup_nonce;
   lVar14 = c_get_user_nonce;
   lVar15 = c_get_nonce;
   lVar16 = c_cleanup_user_entropy;
   lVar18 = c_get_entropy;
   do {
      lVar17 = lVar16;
      switch (iVar9) {
         case 0x60:
      lVar17 = *(long *)(param_1 + 2);
      if (lVar16 == 0) {
        bVar5 = true;
      }
      else {
        bVar19 = lVar17 != lVar16;
        lVar17 = lVar16;
        if (bVar19) {
LAB_00100150:
          if (bVar1) {
            c_cleanup_user_nonce = lVar12;
          }
          if (bVar2) {
            c_cleanup_nonce = lVar13;
          }
          if (bVar3) {
            c_get_user_nonce = lVar14;
          }
          if (bVar4) {
            c_get_nonce = lVar15;
          }
          if (bVar5) {
            c_cleanup_user_entropy = lVar16;
          }
          if (bVar6) {
            c_cleanup_entropy = lVar11;
          }
          if (bVar7) {
            c_get_user_entropy = lVar10;
          }
          if (bVar8) {
            c_get_entropy = lVar18;
          }
          return 0;
        }
      }
      break;
         case 0x61:
      if (lVar12 == 0) {
        bVar1 = true;
        lVar12 = *(long *)(param_1 + 2);
      }
      else if (*(long *)(param_1 + 2) != lVar12) goto LAB_00100150;
      break;
         case 0x62:
      if (lVar10 == 0) {
        bVar7 = true;
        lVar10 = *(long *)(param_1 + 2);
      }
      else if (*(long *)(param_1 + 2) != lVar10) goto LAB_00100150;
      break;
         case 99:
      if (lVar14 == 0) {
        bVar3 = true;
        lVar14 = *(long *)(param_1 + 2);
      }
      else if (*(long *)(param_1 + 2) != lVar14) goto LAB_00100150;
      break;
         case 0x65:
      if (lVar18 == 0) {
        bVar8 = true;
        lVar18 = *(long *)(param_1 + 2);
      }
      else if (*(long *)(param_1 + 2) != lVar18) goto LAB_00100150;
      break;
         case 0x66:
      if (lVar11 == 0) {
        bVar6 = true;
        lVar11 = *(long *)(param_1 + 2);
      }
      else if (*(long *)(param_1 + 2) != lVar11) goto LAB_00100150;
      break;
         case 0x67:
      if (lVar15 == 0) {
        bVar4 = true;
        lVar15 = *(long *)(param_1 + 2);
      }
      else if (*(long *)(param_1 + 2) != lVar15) goto LAB_00100150;
      break;
         case 0x68:
      if (lVar13 == 0) {
        bVar2 = true;
        lVar13 = *(long *)(param_1 + 2);
      }
      else if (*(long *)(param_1 + 2) != lVar13) goto LAB_00100150;
      }
      iVar9 = param_1[4];
      param_1 = param_1 + 4;
      lVar16 = lVar17;
      if (iVar9 == 0) {
         if (bVar1) {
            c_cleanup_user_nonce = lVar12;
         }
         if (bVar2) {
            c_cleanup_nonce = lVar13;
         }
         if (bVar3) {
            c_get_user_nonce = lVar14;
         }
         if (bVar4) {
            c_get_nonce = lVar15;
         }
         if (bVar5) {
            c_cleanup_user_entropy = lVar17;
         }
         if (bVar6) {
            c_cleanup_entropy = lVar11;
         }
         if (bVar7) {
            c_get_user_entropy = lVar10;
         }
         if (bVar8) {
            c_get_entropy = lVar18;
         }
         return 1;
      }
   } while ( true );
}undefined8 ossl_prov_get_entropy(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5) {
   undefined8 uVar1;
   code *UNRECOVERED_JUMPTABLE;
   uVar1 = ossl_prov_ctx_get0_handle();
   UNRECOVERED_JUMPTABLE = c_get_user_entropy;
   if (( c_get_user_entropy == (code*)0x0 ) && ( UNRECOVERED_JUMPTABLE = c_get_entropy ),c_get_entropy == (code*)0x0) {
      return 0;
   }
   for (int i_790 = 0; i_790 < 2; i_790++) {
      /* WARNING: Could not recover jumptable at 0x00100352. Too many branches */
   }
   uVar1 = ( *UNRECOVERED_JUMPTABLE )(uVar1, param_2, param_3, param_4, param_5);
   return uVar1;
}void ossl_prov_cleanup_entropy(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   code *UNRECOVERED_JUMPTABLE;
   uVar1 = ossl_prov_ctx_get0_handle();
   UNRECOVERED_JUMPTABLE = c_cleanup_user_entropy;
   if (( c_cleanup_user_entropy == (code*)0x0 ) && ( UNRECOVERED_JUMPTABLE = c_cleanup_entropy ),c_cleanup_entropy == (code*)0x0) {
      return;
   }
   for (int i_791 = 0; i_791 < 2; i_791++) {
      /* WARNING: Could not recover jumptable at 0x001003b0. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )(uVar1, param_2, param_3);
   return;
}undefined8 ossl_prov_get_nonce(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   undefined8 uVar1;
   code *UNRECOVERED_JUMPTABLE;
   uVar1 = ossl_prov_ctx_get0_handle();
   UNRECOVERED_JUMPTABLE = c_get_user_nonce;
   if (( c_get_user_nonce == (code*)0x0 ) && ( UNRECOVERED_JUMPTABLE = c_get_nonce ),c_get_nonce == (code*)0x0) {
      return 0;
   }
   for (int i_792 = 0; i_792 < 2; i_792++) {
      /* WARNING: Could not recover jumptable at 0x00100416. Too many branches */
   }
   uVar1 = ( *UNRECOVERED_JUMPTABLE )(uVar1, param_2, param_3, param_4, param_5, param_6);
   return uVar1;
}void ossl_prov_cleanup_nonce(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   code *UNRECOVERED_JUMPTABLE;
   uVar1 = ossl_prov_ctx_get0_handle();
   UNRECOVERED_JUMPTABLE = c_cleanup_user_nonce;
   if (( c_cleanup_user_nonce == (code*)0x0 ) && ( UNRECOVERED_JUMPTABLE = c_cleanup_nonce ),c_cleanup_nonce == (code*)0x0) {
      return;
   }
   for (int i_793 = 0; i_793 < 2; i_793++) {
      /* WARNING: Could not recover jumptable at 0x00100470. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )(uVar1, param_2, param_3);
   return;
}
