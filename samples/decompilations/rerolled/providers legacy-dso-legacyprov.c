undefined1 *legacy_gettable_params(void) {
   return legacy_param_types;
}undefined1 *legacy_query(undefined8 param_1, int param_2, undefined4 *param_3) {
   undefined1 *puVar1;
   *param_3 = 0;
   puVar1 = legacy_ciphers;
   if (( ( param_2 != 2 ) && ( puVar1 = legacy_kdfs ),param_2 != 4 )) {
      puVar1 = (undefined1*)0x0;
   }
   return puVar1;
}bool legacy_get_params(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   undefined4 uVar2;
   long lVar3;
   bool bVar4;
   lVar3 = OSSL_PARAM_locate(param_2, &_LC0);
   if (( lVar3 != 0 ) && ( iVar1 = OSSL_PARAM_set_utf8_ptr(lVar3, "OpenSSL Legacy Provider") ),iVar1 == 0) {
      return false;
   }
   lVar3 = OSSL_PARAM_locate(param_2, "version");
   if (( lVar3 != 0 ) && ( iVar1 = iVar1 == 0 )) {
      return false;
   }
   lVar3 = OSSL_PARAM_locate(param_2, "buildinfo");
   if (( lVar3 != 0 ) && ( iVar1 = iVar1 == 0 )) {
      return false;
   }
   lVar3 = OSSL_PARAM_locate(param_2, "status");
   bVar4 = true;
   if (lVar3 != 0) {
      uVar2 = ossl_prov_is_running();
      iVar1 = OSSL_PARAM_set_int(lVar3, uVar2);
      bVar4 = iVar1 != 0;
   }
   return bVar4;
}void legacy_teardown(undefined8 param_1) {
   undefined8 uVar1;
   uVar1 = ossl_prov_ctx_get0_libctx();
   OSSL_LIB_CTX_free(uVar1);
   ossl_prov_ctx_free(param_1);
   return;
}undefined8 OSSL_provider_init(undefined8 param_1, int *param_2, undefined8 *param_3, long *param_4) {
   bool bVar1;
   bool bVar2;
   bool bVar3;
   bool bVar4;
   bool bVar5;
   bool bVar6;
   int iVar7;
   long lVar8;
   undefined8 uVar9;
   int *piVar10;
   long lVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   long lVar15;
   long lVar16;
   bool bVar17;
   iVar7 = *param_2;
   if (iVar7 != 0) {
      bVar5 = false;
      bVar1 = false;
      bVar6 = false;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      piVar10 = param_2;
      lVar8 = c_pop_error_to_mark;
      lVar11 = c_clear_last_error_mark;
      lVar12 = c_set_error_mark;
      lVar13 = c_vset_error;
      lVar14 = c_set_error_debug;
      lVar15 = c_new_error;
      do {
         lVar16 = lVar15;
         switch (iVar7) {
            case 5:
        lVar16 = *(long *)(piVar10 + 2);
        if (lVar15 == 0) {
          bVar6 = true;
        }
        else {
          bVar17 = lVar16 != lVar15;
          lVar16 = lVar15;
          if (bVar17) {
LAB_001002d0:
            if (bVar1) {
              c_pop_error_to_mark = lVar8;
            }
            if (bVar2) {
              c_clear_last_error_mark = lVar11;
            }
            if (bVar3) {
              c_set_error_mark = lVar12;
            }
            if (bVar4) {
              c_vset_error = lVar13;
            }
            if (bVar5) {
              c_set_error_debug = lVar14;
            }
            if (!bVar6) {
              return 0;
            }
            c_new_error = lVar15;
            return 0;
          }
        }
        break;
            case 6:
        if (lVar14 == 0) {
          bVar5 = true;
          lVar14 = *(long *)(piVar10 + 2);
        }
        else if (*(long *)(piVar10 + 2) != lVar14) goto LAB_001002d0;
        break;
            case 7:
        if (lVar13 == 0) {
          bVar4 = true;
          lVar13 = *(long *)(piVar10 + 2);
        }
        else if (*(long *)(piVar10 + 2) != lVar13) goto LAB_001002d0;
        break;
            case 8:
        if (lVar12 == 0) {
          bVar3 = true;
          lVar12 = *(long *)(piVar10 + 2);
        }
        else if (*(long *)(piVar10 + 2) != lVar12) goto LAB_001002d0;
        break;
            case 9:
        if (lVar11 == 0) {
          bVar2 = true;
          lVar11 = *(long *)(piVar10 + 2);
        }
        else if (*(long *)(piVar10 + 2) != lVar11) goto LAB_001002d0;
        break;
            case 10:
        if (lVar8 == 0) {
          bVar1 = true;
          lVar8 = *(long *)(piVar10 + 2);
        }
        else if (*(long *)(piVar10 + 2) != lVar8) goto LAB_001002d0;
         }
         iVar7 = piVar10[4];
         piVar10 = piVar10 + 4;
         lVar15 = lVar16;
      } while ( iVar7 != 0 );
      if (bVar1) {
         c_pop_error_to_mark = lVar8;
      }
      if (bVar2) {
         c_clear_last_error_mark = lVar11;
      }
      if (bVar3) {
         c_set_error_mark = lVar12;
      }
      if (bVar4) {
         c_vset_error = lVar13;
      }
      if (bVar5) {
         c_set_error_debug = lVar14;
      }
      if (bVar6) {
         c_new_error = lVar16;
      }
   }
   lVar8 = ossl_prov_ctx_new();
   *param_4 = lVar8;
   if (( lVar8 != 0 ) && ( lVar8 = lVar8 != 0 )) {
      ossl_prov_ctx_set0_libctx(*param_4, lVar8);
      ossl_prov_ctx_set0_handle(*param_4, param_1);
      *param_3 = legacy_dispatch_table;
      return 1;
   }
   OSSL_LIB_CTX_free(0);
   lVar8 = *param_4;
   uVar9 = ossl_prov_ctx_get0_libctx(lVar8);
   OSSL_LIB_CTX_free(uVar9);
   ossl_prov_ctx_free(lVar8);
   *param_4 = 0;
   return 0;
}void ERR_new(void) {
   for (int i_1229 = 0; i_1229 < 2; i_1229++) {
      /* WARNING: Could not recover jumptable at 0x00100446. Too many branches */
   }
   ( *c_new_error )(0);
   return;
}void ERR_set_debug(undefined8 param_1, undefined4 param_2, undefined8 param_3) {
   for (int i_1230 = 0; i_1230 < 2; i_1230++) {
      /* WARNING: Could not recover jumptable at 0x0010045e. Too many branches */
   }
   ( *c_set_error_debug )(0, param_1, param_2, param_3);
   return;
}void ERR_set_error(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, uint param_9, uint param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14) {
   char in_AL;
   long in_FS_OFFSET;
   undefined4 local_d8;
   undefined4 local_d4;
   undefined1 *local_d0;
   undefined1 *local_c8;
   long local_c0;
   undefined1 local_b8[24];
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 local_48;
   undefined8 local_38;
   undefined8 local_28;
   undefined8 local_18;
   if (in_AL != '\0') {
      local_88 = param_1;
      local_78 = param_2;
      local_68 = param_3;
      local_58 = param_4;
      local_48 = param_5;
      local_38 = param_6;
      local_28 = param_7;
      local_18 = param_8;
   }
   local_c0 = *(long*)( in_FS_OFFSET + 0x28 );
   local_d0 = &stack0x00000008;
   local_c8 = local_b8;
   local_d8 = 0x18;
   local_d4 = 0x30;
   local_a0 = param_12;
   local_98 = param_13;
   local_90 = param_14;
   ( *c_vset_error )(0, ( param_9 & 0xff ) << 0x17 | param_10 & 0x7fffff, param_11, &local_d8);
   if (local_c0 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}void ERR_vset_error(uint param_1, uint param_2) {
   for (int i_1231 = 0; i_1231 < 2; i_1231++) {
      /* WARNING: Could not recover jumptable at 0x0010055a. Too many branches */
   }
   ( *c_vset_error )(0, ( param_1 & 0xff ) << 0x17 | param_2 & 0x7fffff);
   return;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */int ERR_set_mark(void) {
   int iVar1;
   for (int i_1232 = 0; i_1232 < 2; i_1232++) {
      /* WARNING: Could not recover jumptable at 0x00100566. Too many branches */
   }
   iVar1 = ( *c_set_error_mark )(0);
   return iVar1;
}void ERR_clear_last_mark(void) {
   for (int i_1233 = 0; i_1233 < 2; i_1233++) {
      /* WARNING: Could not recover jumptable at 0x00100576. Too many branches */
   }
   ( *c_clear_last_error_mark )(0);
   return;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */int ERR_pop_to_mark(void) {
   int iVar1;
   for (int i_1234 = 0; i_1234 < 2; i_1234++) {
      /* WARNING: Could not recover jumptable at 0x00100586. Too many branches */
   }
   iVar1 = ( *c_pop_error_to_mark )(0);
   return iVar1;
}
