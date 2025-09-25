/* WARNING: Unknown calling convention -- yet parameter storage is locked */void *default_malloc(size_t __size) {
   void *pvVar1;
   pvVar1 = malloc(__size);
   return pvVar1;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked */void default_free(void *__ptr) {
   free(__ptr);
   return;
}
void pcre2_general_context_create_32(code *param_1, code *param_2, undefined8 param_3) {
   undefined8 *puVar1;
   if (param_1 == (code*)0x0) {
      param_1 = default_malloc;
   }

   if (param_2 == (code*)0x0) {
      param_2 = default_free;
   }

   puVar1 = (undefined8*)( *param_1 )(0x18, param_3);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
   }

   return;
}
void pcre2_compile_context_create_32(undefined8 *param_1) {
   undefined8 uVar1;
   undefined8 *puVar2;
   puVar2 = (undefined8*)_pcre2_memctl_malloc_32(0x48, param_1);
   if (puVar2 != (undefined8*)0x0) {
      puVar2[2] = 0;
      puVar2[5] = &_pcre2_default_tables_32;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[6] = 0xffffffffffffffff;
      puVar2[7] = 0xfa00020001;
      puVar2[8] = 0xff00000000;
      *puVar2 = 0x100000;
      puVar2[1] = default_free;
      if (param_1 != (undefined8*)0x0) {
         uVar1 = param_1[1];
         *puVar2 = *param_1;
         puVar2[1] = uVar1;
         puVar2[2] = param_1[2];
      }

   }

   return;
}
void pcre2_match_context_create_32(undefined8 *param_1) {
   undefined8 uVar1;
   undefined8 *puVar2;
   puVar2 = (undefined8*)_pcre2_memctl_malloc_32(0x60, param_1);
   if (puVar2 != (undefined8*)0x0) {
      puVar2[2] = 0;
      uVar1 = _LC0;
      for (int i = 0; i < 3; i++) {
         puVar2[( 2*i + 3 )] = 0;
         puVar2[( 2*i + 4 )] = 0;
      }

      puVar2[9] = 0xffffffffffffffff;
      puVar2[10] = uVar1;
      *(undefined4*)( puVar2 + 0xb ) = 10000000;
      *puVar2 = 0x100000;
      puVar2[1] = default_free;
      if (param_1 != (undefined8*)0x0) {
         uVar1 = param_1[1];
         *puVar2 = *param_1;
         puVar2[1] = uVar1;
         puVar2[2] = param_1[2];
      }

   }

   return;
}
void pcre2_convert_context_create_32(undefined8 *param_1) {
   undefined8 uVar1;
   undefined8 *puVar2;
   puVar2 = (undefined8*)_pcre2_memctl_malloc_32(0x20, param_1);
   if (puVar2 != (undefined8*)0x0) {
      puVar2[2] = 0;
      puVar2[3] = _LC1;
      *puVar2 = 0x100000;
      puVar2[1] = default_free;
      if (param_1 != (undefined8*)0x0) {
         uVar1 = param_1[1];
         *puVar2 = *param_1;
         puVar2[1] = uVar1;
         puVar2[2] = param_1[2];
      }

   }

   return;
}
void pcre2_general_context_copy_32(undefined8 *param_1) {
   undefined8 uVar1;
   undefined8 *puVar2;
   puVar2 = (undefined8*)( *(code*)*param_1 )(0x18, param_1[2]);
   if (puVar2 != (undefined8*)0x0) {
      uVar1 = param_1[1];
      *puVar2 = *param_1;
      puVar2[1] = uVar1;
      puVar2[2] = param_1[2];
   }

   return;
}
void pcre2_compile_context_copy_32(undefined8 *param_1) {
   undefined8 uVar1;
   undefined8 *puVar2;
   puVar2 = (undefined8*)( *(code*)*param_1 )(0x48, param_1[2]);
   if (puVar2 != (undefined8*)0x0) {
      uVar1 = param_1[1];
      *puVar2 = *param_1;
      puVar2[1] = uVar1;
      for (int i = 0; i < 3; i++) {
         uVar1 = param_1[( 2*i + 3 )];
         puVar2[( 2*i + 2 )] = param_1[( 2*i + 2 )];
         puVar2[( 2*i + 3 )] = uVar1;
      }

      puVar2[8] = param_1[8];
   }

   return;
}
void pcre2_match_context_copy_32(undefined8 *param_1) {
   undefined8 uVar1;
   undefined8 *puVar2;
   puVar2 = (undefined8*)( *(code*)*param_1 )(0x60, param_1[2]);
   if (puVar2 != (undefined8*)0x0) {
      uVar1 = param_1[1];
      *puVar2 = *param_1;
      puVar2[1] = uVar1;
      for (int i = 0; i < 5; i++) {
         uVar1 = param_1[( 2*i + 3 )];
         puVar2[( 2*i + 2 )] = param_1[( 2*i + 2 )];
         puVar2[( 2*i + 3 )] = uVar1;
      }

   }

   return;
}
void pcre2_convert_context_copy_32(undefined8 *param_1) {
   undefined8 uVar1;
   undefined8 *puVar2;
   puVar2 = (undefined8*)( *(code*)*param_1 )(0x20, param_1[2]);
   if (puVar2 != (undefined8*)0x0) {
      uVar1 = param_1[1];
      *puVar2 = *param_1;
      puVar2[1] = uVar1;
      uVar1 = param_1[3];
      puVar2[2] = param_1[2];
      puVar2[3] = uVar1;
   }

   return;
}
void pcre2_general_context_free_32(long param_1) {
   if (param_1 != 0) {
      /* WARNING: Could not recover jumptable at 0x001003ad. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( param_1 + 8 ) )(param_1, *(undefined8*)( param_1 + 0x10 ));
      return;
   }

   return;
}
void pcre2_compile_context_free_32(long param_1) {
   if (param_1 != 0) {
      /* WARNING: Could not recover jumptable at 0x001003cd. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( param_1 + 8 ) )(param_1, *(undefined8*)( param_1 + 0x10 ));
      return;
   }

   return;
}
void pcre2_match_context_free_32(long param_1) {
   if (param_1 != 0) {
      /* WARNING: Could not recover jumptable at 0x001003ed. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( param_1 + 8 ) )(param_1, *(undefined8*)( param_1 + 0x10 ));
      return;
   }

   return;
}
void pcre2_convert_context_free_32(long param_1) {
   if (param_1 != 0) {
      /* WARNING: Could not recover jumptable at 0x0010040d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( param_1 + 8 ) )(param_1, *(undefined8*)( param_1 + 0x10 ));
      return;
   }

   return;
}
undefined8 pcre2_set_character_tables_32(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x28 ) = param_2;
   return 0;
}
undefined8 pcre2_set_bsr_32(long param_1, int param_2) {
   if (param_2 - 1U < 2) {
      *(short*)( param_1 + 0x38 ) = (short)param_2;
      return 0;
   }

   return 0xffffffe3;
}
undefined8 pcre2_set_max_pattern_length_32(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x30 ) = param_2;
   return 0;
}
undefined8 pcre2_set_newline_32(long param_1, int param_2) {
   if (param_2 - 1U < 6) {
      *(short*)( param_1 + 0x3a ) = (short)param_2;
      return 0;
   }

   return 0xffffffe3;
}
undefined8 pcre2_set_max_varlookbehind_32(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x44 ) = param_2;
   return 0;
}
undefined8 pcre2_set_parens_nest_limit_32(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x3c ) = param_2;
   return 0;
}
undefined8 pcre2_set_compile_extra_options_32(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x40 ) = param_2;
   return 0;
}
undefined8 pcre2_set_compile_recursion_guard_32(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x18 ) = param_2;
   *(undefined8*)( param_1 + 0x20 ) = param_3;
   return 0;
}
undefined8 pcre2_set_callout_32(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x28 ) = param_2;
   *(undefined8*)( param_1 + 0x30 ) = param_3;
   return 0;
}
undefined8 pcre2_set_substitute_callout_32(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x38 ) = param_2;
   *(undefined8*)( param_1 + 0x40 ) = param_3;
   return 0;
}
undefined8 pcre2_set_heap_limit_32(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x50 ) = param_2;
   return 0;
}
undefined8 pcre2_set_match_limit_32(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x54 ) = param_2;
   return 0;
}
undefined8 pcre2_set_depth_limit_32(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x58 ) = param_2;
   return 0;
}
undefined8 pcre2_set_offset_limit_32(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x48 ) = param_2;
   return 0;
}
undefined8 pcre2_set_recursion_limit_32(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x58 ) = param_2;
   return 0;
}
undefined8 pcre2_set_recursion_memory_management_32(void) {
   return 0;
}
undefined8 pcre2_set_glob_separator_32(long param_1, int param_2) {
   if (( 1 < param_2 - 0x2eU ) && ( param_2 != 0x5c )) {
      return 0xffffffe3;
   }

   *(int*)( param_1 + 0x18 ) = param_2;
   return 0;
}
undefined8 pcre2_set_glob_escape_32(long param_1, uint param_2) {
   ushort **ppuVar1;
   if (0xff < param_2) {
      return 0xffffffe3;
   }

   if (( param_2 != 0 ) && ( ppuVar1 = __ctype_b_loc()(( *ppuVar1 )[param_2] & 4) == 0 )) {
      return 0xffffffe3;
   }

   *(uint*)( param_1 + 0x1c ) = param_2;
   return 0;
}

