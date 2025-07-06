/* WARNING: Removing unreachable block (ram,0x0010004b) */void test_trace_categories(void) {
   OSSL_trace_get_category_name(0xffffffff);
   FUN_001000e7();
   return;
}undefined8 FUN_001000e7(void) {
   int iVar1;
   undefined8 uVar2;
   uint uVar3;
   int unaff_EBX;
   long unaff_RBP;
   iVar1 = test_str_eq();
   if (iVar1 == 0) {
      return 0;
   }
   OSSL_trace_get_category_num();
   if (unaff_EBX < 0x15) {
      iVar1 = test_int_eq();
      if (iVar1 == 0) {
         return 0;
      }
      uVar3 = unaff_EBX + 1;
   } else {
      if (unaff_EBX == 0x16) {
         return 1;
      }
      uVar3 = 0x16;
   }
   OSSL_trace_get_category_name(uVar3);
   if (0x14 < uVar3) {
      uVar2 = FUN_001000e7();
      return uVar2;
   }
   for (int i_1668 = 0; i_1668 < 2; i_1668++) {
      /* WARNING: Could not recover jumptable at 0x00100055. Too many branches */
   }
   uVar2 = ( *(code*)( *(int*)( unaff_RBP + (ulong)uVar3 * 4 ) + unaff_RBP ) )();
   return uVar2;
}undefined1 *test_get_options(void) {
   return options_0;
}undefined8 setup_tests(void) {
   int iVar1;
   iVar1 = test_skip_common_options();
   if (iVar1 != 0) {
      add_test("test_trace_categories", 0x100000);
      return 1;
   }
   test_error("test/trace_api_test.c", 0xc5, "Error parsing test options\n");
   return 0;
}void cleanup_tests(void) {
   return;
}void test_trace_categories_cold(void) {
   FUN_001000e7();
   return;
}
