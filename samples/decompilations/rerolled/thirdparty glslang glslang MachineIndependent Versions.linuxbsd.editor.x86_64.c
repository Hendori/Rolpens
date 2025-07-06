/* glslang::TParseVersions::unimplemented(glslang::TSourceLoc const&, char const*) */void glslang::TParseVersions::unimplemented(TParseVersions *this, TSourceLoc *param_1, char *param_2) {
   /* WARNING: Could not recover jumptable at 0x00100021. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "feature not yet implemented", param_2, &_LC0, *(code**)( *(long*)this + 0x158 ));
   return;
}
/* glslang::TParseVersions::extensionTurnedOn(char const*) */undefined4 glslang::TParseVersions::extensionTurnedOn(char *param_1) {
   int iVar1;
   iVar1 = ( **(code**)( *(long*)param_1 + 0x38 ) )();
   return CONCAT31(( int3 )(iVar1 - 1U >> 8), iVar1 - 1U < 3);
}
/* glslang::TParseVersions::requireNotRemoved(glslang::TSourceLoc const&, int, int, char const*) */void glslang::TParseVersions::requireNotRemoved(TParseVersions *this, TSourceLoc *param_1, int param_2, int param_3, char *param_4) {
   uint uVar1;
   undefined4 in_register_0000000c;
   char *pcVar2;
   long in_FS_OFFSET;
   undefined1 auStack_78[72];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(uint*)( this + 0xc );
   if (( ( param_2 & uVar1 ) != 0 ) && ( param_3 <= *(int*)( this + 0x18 ) )) {
      pcVar2 = "compatibility";
      if (uVar1 != 4) {
         if (uVar1 < 5) {
            pcVar2 = "none";
            if (( uVar1 != 1 ) && ( pcVar2 = uVar1 == 2 )) {
               pcVar2 = "core";
            }

         }
 else {
            pcVar2 = "unknown profile";
            if (uVar1 == 8) {
               pcVar2 = "es";
            }

         }

      }

      __snprintf_chk(auStack_78, 0x3c, 2, 0x3c, "%s profile; removed in version %d", pcVar2, CONCAT44(in_register_0000000c, param_3));
      ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "no longer supported in", param_4, auStack_78);
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* glslang::TParseVersions::float16Check(glslang::TSourceLoc const&, char const*, bool) */void glslang::TParseVersions::float16Check(TParseVersions *this, TSourceLoc *param_1, char *param_2, bool param_3) {
   long in_FS_OFFSET;
   char *local_28;
   char *pcStack_20;
   char *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_3) {
      local_18 = "GL_EXT_shader_explicit_arithmetic_types_float16";
      local_28 = "GL_AMD_gpu_shader_half_float";
      pcStack_20 = "GL_EXT_shader_explicit_arithmetic_types";
      ( **(code**)( *(long*)this + 0x28 ) )(this, param_1, 3, &local_28, param_2);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TParseVersions::float16ScalarVectorCheck(glslang::TSourceLoc const&, char const*, bool)
    */void glslang::TParseVersions::float16ScalarVectorCheck(TParseVersions *this, TSourceLoc *param_1, char *param_2, bool param_3) {
   long in_FS_OFFSET;
   char *local_38;
   char *pcStack_30;
   char *local_28;
   char *pcStack_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_3) {
      local_38 = "GL_AMD_gpu_shader_half_float";
      pcStack_30 = "GL_EXT_shader_16bit_storage";
      local_28 = "GL_EXT_shader_explicit_arithmetic_types";
      pcStack_20 = "GL_EXT_shader_explicit_arithmetic_types_float16";
      ( **(code**)( *(long*)this + 0x28 ) )(this, param_1, 4, &local_38, param_2);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TParseVersions::explicitFloat32Check(glslang::TSourceLoc const&, char const*, bool) */void glslang::TParseVersions::explicitFloat32Check(TParseVersions *this, TSourceLoc *param_1, char *param_2, bool param_3) {
   long in_FS_OFFSET;
   char *local_28;
   char *pcStack_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_3) {
      local_28 = "GL_EXT_shader_explicit_arithmetic_types";
      pcStack_20 = "GL_EXT_shader_explicit_arithmetic_types_float32";
      ( **(code**)( *(long*)this + 0x28 ) )(this, param_1, 2, &local_28, param_2);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TParseVersions::explicitInt8Check(glslang::TSourceLoc const&, char const*, bool) */void glslang::TParseVersions::explicitInt8Check(TParseVersions *this, TSourceLoc *param_1, char *param_2, bool param_3) {
   long in_FS_OFFSET;
   char *local_28;
   char *pcStack_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_3) {
      local_28 = "GL_EXT_shader_explicit_arithmetic_types";
      pcStack_20 = "GL_EXT_shader_explicit_arithmetic_types_int8";
      ( **(code**)( *(long*)this + 0x28 ) )(this, param_1, 2, &local_28, param_2);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TParseVersions::explicitInt16Check(glslang::TSourceLoc const&, char const*, bool) */void glslang::TParseVersions::explicitInt16Check(TParseVersions *this, TSourceLoc *param_1, char *param_2, bool param_3) {
   long in_FS_OFFSET;
   char *local_28;
   char *pcStack_20;
   char *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_3) {
      local_18 = "GL_EXT_shader_explicit_arithmetic_types_int16";
      local_28 = "GL_AMD_gpu_shader_int16";
      pcStack_20 = "GL_EXT_shader_explicit_arithmetic_types";
      ( **(code**)( *(long*)this + 0x28 ) )(this, param_1, 3, &local_28, param_2);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TParseVersions::int16ScalarVectorCheck(glslang::TSourceLoc const&, char const*, bool) */void glslang::TParseVersions::int16ScalarVectorCheck(TParseVersions *this, TSourceLoc *param_1, char *param_2, bool param_3) {
   long in_FS_OFFSET;
   char *local_38;
   char *pcStack_30;
   char *local_28;
   char *pcStack_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_3) {
      local_38 = "GL_AMD_gpu_shader_int16";
      pcStack_30 = "GL_EXT_shader_16bit_storage";
      local_28 = "GL_EXT_shader_explicit_arithmetic_types";
      pcStack_20 = "GL_EXT_shader_explicit_arithmetic_types_int16";
      ( **(code**)( *(long*)this + 0x28 ) )(this, param_1, 4, &local_38, param_2);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TParseVersions::int8ScalarVectorCheck(glslang::TSourceLoc const&, char const*, bool) */void glslang::TParseVersions::int8ScalarVectorCheck(TParseVersions *this, TSourceLoc *param_1, char *param_2, bool param_3) {
   long in_FS_OFFSET;
   char *local_28;
   char *pcStack_20;
   char *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_3) {
      local_18 = "GL_EXT_shader_explicit_arithmetic_types_int8";
      local_28 = "GL_EXT_shader_8bit_storage";
      pcStack_20 = "GL_EXT_shader_explicit_arithmetic_types";
      ( **(code**)( *(long*)this + 0x28 ) )(this, param_1, 3, &local_28, param_2);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TParseVersions::explicitInt32Check(glslang::TSourceLoc const&, char const*, bool) */void glslang::TParseVersions::explicitInt32Check(TParseVersions *this, TSourceLoc *param_1, char *param_2, bool param_3) {
   long in_FS_OFFSET;
   char *local_28;
   char *pcStack_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_3) {
      local_28 = "GL_EXT_shader_explicit_arithmetic_types";
      pcStack_20 = "GL_EXT_shader_explicit_arithmetic_types_int32";
      ( **(code**)( *(long*)this + 0x28 ) )(this, param_1, 2, &local_28, param_2);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TParseVersions::fcoopmatCheckNV(glslang::TSourceLoc const&, char const*, bool) */void glslang::TParseVersions::fcoopmatCheckNV(TParseVersions *this, TSourceLoc *param_1, char *param_2, bool param_3) {
   long in_FS_OFFSET;
   char *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_3) {
      local_18 = "GL_NV_cooperative_matrix";
      ( **(code**)( *(long*)this + 0x28 ) )(this, param_1, 1, &local_18, param_2);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TParseVersions::intcoopmatCheckNV(glslang::TSourceLoc const&, char const*, bool) */void glslang::TParseVersions::intcoopmatCheckNV(TParseVersions *this, TSourceLoc *param_1, char *param_2, bool param_3) {
   long in_FS_OFFSET;
   char *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_3) {
      local_18 = "GL_NV_integer_cooperative_matrix";
      ( **(code**)( *(long*)this + 0x28 ) )(this, param_1, 1, &local_18, param_2);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TParseVersions::coopmatCheck(glslang::TSourceLoc const&, char const*, bool) */void glslang::TParseVersions::coopmatCheck(TParseVersions *this, TSourceLoc *param_1, char *param_2, bool param_3) {
   long in_FS_OFFSET;
   char *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_3) {
      local_18 = "GL_KHR_cooperative_matrix";
      ( **(code**)( *(long*)this + 0x28 ) )(this, param_1, 1, &local_18, param_2);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TParseVersions::spvRemoved(glslang::TSourceLoc const&, char const*) */void glslang::TParseVersions::spvRemoved(TParseVersions *this, TSourceLoc *param_1, char *param_2) {
   if (*(int*)( this + 0x20 ) != 0) {
      /* WARNING: Could not recover jumptable at 0x00100688. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "not allowed when generating SPIR-V", param_2, &_LC0, *(code**)( *(long*)this + 0x158 ));
      return;
   }

   return;
}
/* glslang::TParseVersions::vulkanRemoved(glslang::TSourceLoc const&, char const*) */void glslang::TParseVersions::vulkanRemoved(TParseVersions *this, TSourceLoc *param_1, char *param_2) {
   if (( 0 < *(int*)( this + 0x28 ) ) && ( this[0x30] == (TParseVersions)0x0 )) {
      /* WARNING: Could not recover jumptable at 0x001006ce. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "not allowed when using GLSL for Vulkan", param_2, &_LC0, *(code**)( *(long*)this + 0x158 ));
      return;
   }

   return;
}
/* glslang::TParseVersions::requireVulkan(glslang::TSourceLoc const&, char const*) */void glslang::TParseVersions::requireVulkan(TParseVersions *this, TSourceLoc *param_1, char *param_2) {
   if (*(int*)( this + 0x28 ) == 0) {
      /* WARNING: Could not recover jumptable at 0x00100708. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "only allowed when using GLSL for Vulkan", param_2, &_LC0, *(code**)( *(long*)this + 0x158 ));
      return;
   }

   return;
}
/* glslang::TParseVersions::requireSpv(glslang::TSourceLoc const&, char const*) */void glslang::TParseVersions::requireSpv(TParseVersions *this, TSourceLoc *param_1, char *param_2) {
   if (*(int*)( this + 0x20 ) == 0) {
      /* WARNING: Could not recover jumptable at 0x00100748. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "only allowed when generating SPIR-V", param_2, &_LC0, *(code**)( *(long*)this + 0x158 ));
      return;
   }

   return;
}
/* glslang::TParseVersions::requireSpv(glslang::TSourceLoc const&, char const*, unsigned int) */void glslang::TParseVersions::requireSpv(TParseVersions *this, TSourceLoc *param_1, char *param_2, uint param_3) {
   if (*(uint*)( this + 0x20 ) < param_3) {
      /* WARNING: Could not recover jumptable at 0x00100786. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "not supported for current targeted SPIR-V version", param_2, &_LC0, *(code**)( *(long*)this + 0x158 ));
      return;
   }

   return;
}
/* glslang::TParseVersions::requireExtensions(glslang::TSourceLoc const&, int, char const* const*,
   char const*) */void glslang::TParseVersions::requireExtensions(TParseVersions *this, TSourceLoc *param_1, int param_2, char **param_3, char *param_4) {
   char **ppcVar1;
   char *pcVar2;
   char cVar3;
   cVar3 = ( **(code**)( *(long*)this + 0x60 ) )(this, param_1, param_2);
   if (cVar3 == '\0') {
      if (param_2 == 1) {
         /* WARNING: Could not recover jumptable at 0x00100855. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "required extension not requested:", param_4, *param_3);
         return;
      }

      ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "required extension not requested:", param_4, "Possible extensions include:");
      if (0 < param_2) {
         ppcVar1 = param_3 + param_2;
         do {
            pcVar2 = *(char**)( this + 0x10 );
            param_3 = param_3 + 1;
            glslang::TInfoSinkBase::append(pcVar2);
            glslang::TInfoSinkBase::append(pcVar2);
         }
 while ( param_3 != ppcVar1 );
      }

   }

   return;
}
/* glslang::TParseVersions::ppRequireExtensions(glslang::TSourceLoc const&, int, char const* const*,
   char const*) */void glslang::TParseVersions::ppRequireExtensions(TParseVersions *this, TSourceLoc *param_1, int param_2, char **param_3, char *param_4) {
   char **ppcVar1;
   char *pcVar2;
   char cVar3;
   cVar3 = ( **(code**)( *(long*)this + 0x60 ) )(this, param_1, param_2);
   if (cVar3 == '\0') {
      if (param_2 == 1) {
         /* WARNING: Could not recover jumptable at 0x00100915. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *(long*)this + 0x168 ) )(this, param_1, "required extension not requested:", param_4, *param_3);
         return;
      }

      ( **(code**)( *(long*)this + 0x168 ) )(this, param_1, "required extension not requested:", param_4, "Possible extensions include:");
      if (0 < param_2) {
         ppcVar1 = param_3 + param_2;
         do {
            pcVar2 = *(char**)( this + 0x10 );
            param_3 = param_3 + 1;
            glslang::TInfoSinkBase::append(pcVar2);
            glslang::TInfoSinkBase::append(pcVar2);
         }
 while ( param_3 != ppcVar1 );
      }

   }

   return;
}
/* glslang::TParseVersions::extensionsTurnedOn(int, char const* const*) */undefined8 glslang::TParseVersions::extensionsTurnedOn(TParseVersions *this, int param_1, char **param_2) {
   char **ppcVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   if (param_1 < 1) {
      return 0;
   }

   ppcVar1 = param_2 + param_1;
   do {
      pcVar2 = *(code**)( *(long*)this + 0x40 );
      if (pcVar2 == extensionTurnedOn) {
         iVar4 = ( **(code**)( *(long*)this + 0x38 ) )();
         if (iVar4 - 1U < 3) {
            return 1;
         }

      }
 else {
         cVar3 = ( *pcVar2 )(this, *param_2);
         if (cVar3 != '\0') {
            return 1;
         }

      }

      param_2 = param_2 + 1;
   }
 while ( param_2 != ppcVar1 );
   return 0;
}
/* glslang::TParseVersions::updateExtensionBehavior(int, char const*, char const*) */void glslang::TParseVersions::updateExtensionBehavior(TParseVersions *this, int param_1, char *param_2, char *param_3) {
   char cVar1;
   uint uVar2;
   int iVar3;
   int iVar4;
   uint uVar5;
   code *UNRECOVERED_JUMPTABLE;
   char *pcVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   iVar3 = strcmp("require", param_3);
   lVar8 = *(long*)( this + 0xd8 );
   lVar7 = *(long*)this;
   cVar1 = *(char*)( lVar8 + 0x58 );
   if (iVar3 == 0) {
      iVar3 = 1;
      LAB_00100bb7:UNRECOVERED_JUMPTABLE = *(code**)( lVar7 + 0x68 );
   }
 else {
      iVar3 = strcmp("enable", param_3);
      if (iVar3 != 0) {
         iVar3 = strcmp("disable", param_3);
         if (iVar3 == 0) {
            iVar3 = 4;
         }
 else {
            iVar4 = strcmp("warn", param_3);
            iVar3 = 3;
            if (iVar4 != 0) {
               lVar9 = lVar8 + 0x40;
               if (cVar1 == '\0') {
                  lVar9 = *(long*)( lVar8 + 0x30 );
                  iVar3 = ( *(int*)( lVar8 + 8 ) - *(int*)( lVar8 + 0x3c ) ) + -1;
                  if (*(int*)( lVar8 + 0x20 ) < iVar3) {
                     iVar3 = *(int*)( lVar8 + 0x20 );
                  }

                  if (0 < iVar3) {
                     lVar9 = lVar9 + (long)iVar3 * 0x18;
                  }

               }

               /* WARNING: Could not recover jumptable at 0x00100e82. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( **(code**)( lVar7 + 0x158 ) )(this, lVar9, "behavior not supported:", "#extension", param_3, *(code**)( lVar7 + 0x158 ));
               return;
            }

         }

         goto LAB_00100bb7;
      }

      iVar3 = 2;
      UNRECOVERED_JUMPTABLE = *(code**)( lVar7 + 0x68 );
   }

   lVar7 = lVar8 + 0x40;
   if (cVar1 == '\0') {
      lVar7 = *(long*)( lVar8 + 0x30 );
      iVar4 = ( *(int*)( lVar8 + 8 ) - *(int*)( lVar8 + 0x3c ) ) + -1;
      if (*(int*)( lVar8 + 0x20 ) < iVar4) {
         iVar4 = *(int*)( lVar8 + 0x20 );
      }

      if (0 < iVar4) {
         lVar7 = lVar7 + (long)iVar4 * 0x18;
      }

   }

   ( *UNRECOVERED_JUMPTABLE )(this, lVar7, param_2);
   lVar7 = *(long*)( this + 0xd8 );
   lVar8 = lVar7 + 0x40;
   if (*(char*)( lVar7 + 0x58 ) == '\0') {
      lVar8 = *(long*)( lVar7 + 0x30 );
      iVar4 = ( *(int*)( lVar7 + 8 ) - *(int*)( lVar7 + 0x3c ) ) + -1;
      if (*(int*)( lVar7 + 0x20 ) < iVar4) {
         iVar4 = *(int*)( lVar7 + 0x20 );
      }

      if (0 < iVar4) {
         lVar8 = lVar8 + (long)iVar4 * 0x18;
      }

   }

   ( **(code**)( *(long*)this + 0x70 ) )(this, lVar8, param_2, param_3);
   ( **(code**)( *(long*)this + 0x58 ) )(this, param_2, iVar3);
   iVar4 = strcmp(param_2, "GL_ANDROID_extension_pack_es31a");
   if (iVar4 == 0) {
      ( **(code**)( *(long*)this + 0x50 ) )(this, param_1, "GL_KHR_blend_equation_advanced", param_3);
      ( **(code**)( *(long*)this + 0x50 ) )(this, param_1, "GL_OES_sample_variables", param_3);
      ( **(code**)( *(long*)this + 0x50 ) )(this, param_1, "GL_OES_shader_image_atomic", param_3);
      ( **(code**)( *(long*)this + 0x50 ) )(this, param_1, "GL_OES_shader_multisample_interpolation", param_3);
      ( **(code**)( *(long*)this + 0x50 ) )(this, param_1, "GL_OES_texture_storage_multisample_2d_array", param_3);
      ( **(code**)( *(long*)this + 0x50 ) )(this, param_1, "GL_EXT_geometry_shader", param_3);
      ( **(code**)( *(long*)this + 0x50 ) )(this, param_1, "GL_EXT_gpu_shader5", param_3);
      ( **(code**)( *(long*)this + 0x50 ) )(this, param_1, "GL_EXT_primitive_bounding_box", param_3);
      ( **(code**)( *(long*)this + 0x50 ) )(this, param_1, "GL_EXT_shader_io_blocks", param_3);
      ( **(code**)( *(long*)this + 0x50 ) )(this, param_1, "GL_EXT_tessellation_shader", param_3);
      ( **(code**)( *(long*)this + 0x50 ) )(this, param_1, "GL_EXT_texture_buffer", param_3);
      pcVar6 = "GL_EXT_texture_cube_map_array";
      UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x50 );
      goto LAB_00100b92;
   }

   iVar4 = strcmp(param_2, "GL_EXT_geometry_shader");
   if (iVar4 == 0) {
      LAB_00100de0:pcVar6 = "GL_EXT_shader_io_blocks";
      UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x50 );
   }
 else {
      iVar4 = strcmp(param_2, "GL_OES_geometry_shader");
      if (iVar4 != 0) {
         iVar4 = strcmp(param_2, "GL_EXT_tessellation_shader");
         if (iVar4 == 0) goto LAB_00100de0;
         iVar4 = strcmp(param_2, "GL_OES_tessellation_shader");
         if (iVar4 != 0) {
            iVar4 = strcmp(param_2, "GL_GOOGLE_include_directive");
            if (( iVar4 == 0 ) || ( iVar4 = strcmp(param_2, "GL_ARB_shading_language_include") ),iVar4 == 0) {
               pcVar6 = "GL_GOOGLE_cpp_style_line_directive";
               UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x50 );
            }
 else {
               iVar4 = strcmp(param_2, "GL_KHR_shader_subgroup_vote");
               if (( ( ( ( iVar4 == 0 ) || ( iVar4 = strcmp(param_2, "GL_KHR_shader_subgroup_arithmetic") ),iVar4 == 0 ) ) || ( iVar4 = strcmp(param_2, "GL_KHR_shader_subgroup_ballot") ),iVar4 == 0 )) {
                  pcVar6 = "GL_KHR_shader_subgroup_basic";
                  UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x50 );
               }
 else {
                  iVar4 = strcmp(param_2, "GL_EXT_buffer_reference2");
                  if (( iVar4 == 0 ) || ( iVar4 = strcmp(param_2, "GL_EXT_buffer_reference_uvec2") ),iVar4 == 0) {
                     pcVar6 = "GL_EXT_buffer_reference";
                     UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x50 );
                  }
 else {
                     iVar4 = strcmp(param_2, "GL_NV_integer_cooperative_matrix");
                     if (iVar4 == 0) {
                        pcVar6 = "GL_NV_cooperative_matrix";
                        UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x50 );
                     }
 else {
                        iVar4 = strcmp(param_2, "GL_EXT_shader_subgroup_extended_types_int8");
                        if (iVar4 == 0) {
                           pcVar6 = "GL_EXT_shader_explicit_arithmetic_types_int8";
                           UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x50 );
                        }
 else {
                           iVar4 = strcmp(param_2, "GL_EXT_shader_subgroup_extended_types_int16");
                           if (iVar4 == 0) {
                              pcVar6 = "GL_EXT_shader_explicit_arithmetic_types_int16";
                              UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x50 );
                           }
 else {
                              iVar4 = strcmp(param_2, "GL_EXT_shader_subgroup_extended_types_int64");
                              if (iVar4 == 0) {
                                 pcVar6 = "GL_EXT_shader_explicit_arithmetic_types_int64";
                                 UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x50 );
                              }
 else {
                                 iVar4 = strcmp(param_2, "GL_EXT_shader_subgroup_extended_types_float16");
                                 if (iVar4 != 0) {
                                    iVar4 = strcmp(param_2, "GL_EXT_shader_explicit_arithmetic_types");
                                    if (iVar4 == 0) {
                                       uVar2 = *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 );
                                       uVar5 = uVar2 | 1;
                                       if (iVar3 == 4) {
                                          uVar5 = uVar2 & 0xfffffffe;
                                       }

                                       *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 ) = uVar5;
                                    }
 else {
                                       iVar4 = strcmp(param_2, "GL_EXT_shader_explicit_arithmetic_types_int8");
                                       if (iVar4 == 0) {
                                          uVar2 = *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 );
                                          uVar5 = uVar2 | 2;
                                          if (iVar3 == 4) {
                                             uVar5 = uVar2 & 0xfffffffd;
                                          }

                                          *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 ) = uVar5;
                                       }
 else {
                                          iVar4 = strcmp(param_2, "GL_EXT_shader_explicit_arithmetic_types_int16");
                                          if (iVar4 == 0) {
                                             uVar2 = *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 );
                                             uVar5 = uVar2 | 4;
                                             if (iVar3 == 4) {
                                                uVar5 = uVar2 & 0xfffffffb;
                                             }

                                             *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 ) = uVar5;
                                          }
 else {
                                             iVar4 = strcmp(param_2, "GL_EXT_shader_explicit_arithmetic_types_int32");
                                             if (iVar4 == 0) {
                                                uVar2 = *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 );
                                                uVar5 = uVar2 | 8;
                                                if (iVar3 == 4) {
                                                   uVar5 = uVar2 & 0xfffffff7;
                                                }

                                                *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 ) = uVar5;
                                             }
 else {
                                                iVar4 = strcmp(param_2, "GL_EXT_shader_explicit_arithmetic_types_int64");
                                                if (iVar4 == 0) {
                                                   uVar2 = *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 );
                                                   uVar5 = uVar2 | 0x10;
                                                   if (iVar3 == 4) {
                                                      uVar5 = uVar2 & 0xffffffef;
                                                   }

                                                   *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 ) = uVar5;
                                                }
 else {
                                                   iVar4 = strcmp(param_2, "GL_EXT_shader_explicit_arithmetic_types_float16");
                                                   if (iVar4 == 0) {
                                                      uVar2 = *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 );
                                                      uVar5 = uVar2 | 0x20;
                                                      if (iVar3 == 4) {
                                                         uVar5 = uVar2 & 0xffffffdf;
                                                      }

                                                      *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 ) = uVar5;
                                                   }
 else {
                                                      iVar4 = strcmp(param_2, "GL_EXT_shader_explicit_arithmetic_types_float32");
                                                      if (iVar4 == 0) {
                                                         uVar2 = *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 );
                                                         uVar5 = uVar2 | 0x40;
                                                         if (iVar3 == 4) {
                                                            uVar5 = uVar2 & 0xffffffbf;
                                                         }

                                                         *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 ) = uVar5;
                                                      }
 else {
                                                         iVar4 = strcmp(param_2, "GL_EXT_shader_explicit_arithmetic_types_float64");
                                                         if (iVar4 == 0) {
                                                            uVar2 = *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 );
                                                            uVar5 = uVar2 | 0x80;
                                                            if (iVar3 == 4) {
                                                               uVar5 = uVar2 & 0xffffff7f;
                                                            }

                                                            *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 ) = uVar5;
                                                         }
 else {
                                                            iVar4 = strcmp(param_2, "GL_EXT_shader_implicit_conversions");
                                                            if (iVar4 == 0) {
                                                               uVar2 = *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 );
                                                               uVar5 = uVar2 | 0x100;
                                                               if (iVar3 == 4) {
                                                                  uVar5 = uVar2 & 0xfffffeff;
                                                               }

                                                               *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 ) = uVar5;
                                                            }
 else {
                                                               iVar4 = strcmp(param_2, "GL_ARB_gpu_shader_fp64");
                                                               if (iVar4 == 0) {
                                                                  uVar2 = *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 );
                                                                  uVar5 = uVar2 | 0x200;
                                                                  if (iVar3 == 4) {
                                                                     uVar5 = uVar2 & 0xfffffdff;
                                                                  }

                                                                  *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 ) = uVar5;
                                                               }
 else {
                                                                  iVar4 = strcmp(param_2, "GL_AMD_gpu_shader_int16");
                                                                  if (iVar4 == 0) {
                                                                     uVar2 = *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 );
                                                                     uVar5 = uVar2 | 0x400;
                                                                     if (iVar3 == 4) {
                                                                        uVar5 = uVar2 & 0xfffffbff;
                                                                     }

                                                                     *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 ) = uVar5;
                                                                  }
 else {
                                                                     iVar4 = strcmp(param_2, "GL_AMD_gpu_shader_half_float");
                                                                     if (iVar4 == 0) {
                                                                        uVar2 = *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 );
                                                                        uVar5 = uVar2 | 0x800;
                                                                        if (iVar3 == 4) {
                                                                           uVar5 = uVar2 & 0xfffff7ff;
                                                                        }

                                                                        *(uint*)( *(long*)( this + 0x38 ) + 0x5c8 ) = uVar5;
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

                                    }

                                    return;
                                 }

                                 pcVar6 = "GL_EXT_shader_explicit_arithmetic_types_float16";
                                 UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x50 );
                              }

                           }

                        }

                     }

                  }

               }

            }

            goto LAB_00100b92;
         }

      }

      pcVar6 = "GL_OES_shader_io_blocks";
      UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x50 );
   }

   LAB_00100b92:/* WARNING: Could not recover jumptable at 0x00100ba6. Too many branches *//* WARNING: Treating indirect jump as call */( *UNRECOVERED_JUMPTABLE )(this, param_1, pcVar6, param_3);
   return;
}
/* glslang::TParseVersions::int8Arithmetic() */undefined8 glslang::TParseVersions::int8Arithmetic(TParseVersions *this) {
   char cVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   char **ppcVar5;
   long in_FS_OFFSET;
   char *local_48;
   char *pcStack_40;
   undefined8 local_38;
   long local_30;
   ppcVar5 = &local_48;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)this;
   local_48 = "GL_EXT_shader_explicit_arithmetic_types";
   pcStack_40 = "GL_EXT_shader_explicit_arithmetic_types_int8";
   if (*(code**)( lVar3 + 0x48 ) == extensionsTurnedOn) {
      do {
         if (*(code**)( lVar3 + 0x40 ) != extensionTurnedOn) {
            cVar1 = ( **(code**)( lVar3 + 0x40 ) )(this, *ppcVar5);
            if (cVar1 == '\0') goto LAB_001012de;
            LAB_001012b2:uVar4 = 1;
            goto LAB_001012b7;
         }

         iVar2 = ( **(code**)( lVar3 + 0x38 ) )();
         if (iVar2 - 1U < 3) goto LAB_001012b2;
         LAB_001012de:ppcVar5 = ppcVar5 + 1;
         if (ppcVar5 == (char**)&local_38) goto LAB_001012f0;
         lVar3 = *(long*)this;
      }
 while ( true );
   }

   uVar4 = ( **(code**)( lVar3 + 0x48 ) )(this, 2, &local_48);
   LAB_001012b7:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_001012f0:uVar4 = 0;
   goto LAB_001012b7;
}
/* glslang::TParseVersions::int16Arithmetic() */undefined8 glslang::TParseVersions::int16Arithmetic(TParseVersions *this) {
   char cVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   char **ppcVar5;
   long in_FS_OFFSET;
   char *local_48[3];
   long local_30[2];
   ppcVar5 = local_48;
   local_30[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_48[2] = "GL_EXT_shader_explicit_arithmetic_types_int16";
   lVar3 = *(long*)this;
   local_48[0] = "GL_AMD_gpu_shader_int16";
   local_48[1] = "GL_EXT_shader_explicit_arithmetic_types";
   if (*(code**)( lVar3 + 0x48 ) == extensionsTurnedOn) {
      do {
         if (*(code**)( lVar3 + 0x40 ) != extensionTurnedOn) {
            cVar1 = ( **(code**)( lVar3 + 0x40 ) )(this, *ppcVar5);
            if (cVar1 == '\0') goto LAB_001013c6;
            LAB_0010139a:uVar4 = 1;
            goto LAB_0010139f;
         }

         iVar2 = ( **(code**)( lVar3 + 0x38 ) )();
         if (iVar2 - 1U < 3) goto LAB_0010139a;
         LAB_001013c6:ppcVar5 = (char**)( (long*)ppcVar5 + 1 );
         if (ppcVar5 == (char**)local_30) goto LAB_001013d8;
         lVar3 = *(long*)this;
      }
 while ( true );
   }

   uVar4 = ( **(code**)( lVar3 + 0x48 ) )(this, 3, local_48);
   LAB_0010139f:if (local_30[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_001013d8:uVar4 = 0;
   goto LAB_0010139f;
}
/* glslang::TParseVersions::float16Arithmetic() */undefined8 glslang::TParseVersions::float16Arithmetic(TParseVersions *this) {
   char cVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   char **ppcVar5;
   long in_FS_OFFSET;
   char *local_48[3];
   long local_30[2];
   ppcVar5 = local_48;
   local_30[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_48[2] = "GL_EXT_shader_explicit_arithmetic_types_float16";
   lVar3 = *(long*)this;
   local_48[0] = "GL_AMD_gpu_shader_half_float";
   local_48[1] = "GL_EXT_shader_explicit_arithmetic_types";
   if (*(code**)( lVar3 + 0x48 ) == extensionsTurnedOn) {
      do {
         if (*(code**)( lVar3 + 0x40 ) != extensionTurnedOn) {
            cVar1 = ( **(code**)( lVar3 + 0x40 ) )(this, *ppcVar5);
            if (cVar1 == '\0') goto LAB_001014b6;
            LAB_0010148a:uVar4 = 1;
            goto LAB_0010148f;
         }

         iVar2 = ( **(code**)( lVar3 + 0x38 ) )();
         if (iVar2 - 1U < 3) goto LAB_0010148a;
         LAB_001014b6:ppcVar5 = (char**)( (long*)ppcVar5 + 1 );
         if (ppcVar5 == (char**)local_30) goto LAB_001014c8;
         lVar3 = *(long*)this;
      }
 while ( true );
   }

   uVar4 = ( **(code**)( lVar3 + 0x48 ) )(this, 3, local_48);
   LAB_0010148f:if (local_30[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_001014c8:uVar4 = 0;
   goto LAB_0010148f;
}
/* void std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_construct<char const*>(char const*, char const*, std::forward_iterator_tag) [clone .isra.0]
    */void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(ulong *param_1, undefined1 *param_2, long param_3) {
   undefined1 *__dest;
   ulong __n;
   __n = param_3 - (long)param_2;
   if (__n < 0x10) {
      __dest = (undefined1*)param_1[1];
      if (__n == 1) {
         *__dest = *param_2;
         param_1[2] = 1;
         *(undefined1*)( param_1[1] + 1 ) = 0;
         return;
      }

      if (__n == 0) {
         param_1[2] = 0;
         *__dest = 0;
         return;
      }

   }
 else {
      if ((long)__n < 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("basic_string::_M_create");
      }

      __dest = (undefined1*)glslang::TPoolAllocator::allocate(*param_1);
      param_1[3] = __n;
      param_1[1] = (ulong)__dest;
   }

   memcpy(__dest, param_2, __n);
   param_1[2] = __n;
   *(undefined1*)( param_1[1] + __n ) = 0;
   return;
}
/* glslang::TParseVersions::extensionRequires(glslang::TSourceLoc const&, char const*, char const*)
    */void glslang::TParseVersions::extensionRequires(TParseVersions *this, TSourceLoc *param_1, char *param_2, char *param_3) {
   TParseVersions *pTVar1;
   uint uVar2;
   ulong uVar3;
   long lVar4;
   ulong uVar5;
   undefined1 *__src;
   ulong *__s2;
   int iVar6;
   size_t sVar7;
   code *pcVar8;
   uint uVar9;
   long lVar10;
   ulong uVar11;
   TParseVersions *pTVar12;
   TParseVersions *pTVar13;
   long in_FS_OFFSET;
   ulong local_68;
   ulong *local_60;
   ulong local_58;
   ulong local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar6 = strcmp("require", param_3);
   if (( iVar6 == 0 ) || ( iVar6 = iVar6 == 0 )) {
      local_68 = glslang::GetThreadPoolAllocator();
      local_60 = local_50;
      if (param_2 == (char*)0x0) {
         /* WARNING: Subroutine does not return */
         std::__throw_logic_error("basic_string: construction from null is not valid");
      }

      sVar7 = strlen(param_2);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_68, param_2, param_2 + sVar7);
      uVar5 = local_58;
      __s2 = local_60;
      pTVar13 = *(TParseVersions**)( this + 0x90 );
      pTVar12 = this + 0x88;
      if (pTVar13 == (TParseVersions*)0x0) {
         LAB_00101840:pcVar8 = *(code**)( *(long*)this + 0x150 );
         if (pcVar8 == requireSpv) goto LAB_00101857;
         uVar9 = 0;
      }
 else {
         do {
            while (true) {
               uVar3 = *(ulong*)( pTVar13 + 0x30 );
               uVar11 = uVar5;
               if (uVar3 <= uVar5) {
                  uVar11 = uVar3;
               }

               if (( uVar11 != 0 ) && ( iVar6 = memcmp(*(void**)( pTVar13 + 0x28 ), __s2, uVar11) ),iVar6 != 0) break;
               lVar10 = uVar3 - uVar5;
               if (lVar10 < 0x80000000) {
                  if (-0x80000001 < lVar10) {
                     iVar6 = (int)lVar10;
                     break;
                  }

                  goto LAB_00101650;
               }

               LAB_001016a3:pTVar1 = pTVar13 + 0x10;
               pTVar12 = pTVar13;
               pTVar13 = *(TParseVersions**)pTVar1;
               if (*(TParseVersions**)pTVar1 == (TParseVersions*)0x0) goto LAB_001016af;
            }
;
            if (-1 < iVar6) goto LAB_001016a3;
            LAB_00101650:pTVar13 = *(TParseVersions**)( pTVar13 + 0x18 );
         }
 while ( pTVar13 != (TParseVersions*)0x0 );
         LAB_001016af:if (this + 0x88 == pTVar12) goto LAB_00101840;
         uVar3 = *(ulong*)( pTVar12 + 0x30 );
         uVar11 = uVar5;
         if (uVar3 <= uVar5) {
            uVar11 = uVar3;
         }

         if (( uVar11 == 0 ) || ( iVar6 = memcmp(__s2, *(void**)( pTVar12 + 0x28 ), uVar11) ),iVar6 == 0) {
            lVar10 = uVar5 - uVar3;
            if (lVar10 < 0x80000000) {
               if (lVar10 < -0x80000000) goto LAB_00101840;
               iVar6 = (int)lVar10;
               goto LAB_001016e9;
            }

         }
 else {
            LAB_001016e9:if (iVar6 < 0) goto LAB_00101840;
         }

         uVar9 = *(uint*)( pTVar12 + 0x48 );
         pcVar8 = *(code**)( *(long*)this + 0x150 );
         if (pcVar8 == requireSpv) {
            uVar2 = *(uint*)( this + 0x20 );
            if (uVar2 < uVar9) {
               ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "not supported for current targeted SPIR-V version", param_2, &_LC0);
               uVar2 = *(uint*)( this + 0x20 );
            }

            goto joined_r0x0010185c;
         }

      }

      ( *pcVar8 )(this, param_1, param_2, uVar9);
   }

   LAB_00101857:uVar2 = *(uint*)( this + 0x20 );
   joined_r0x0010185c:if (uVar2 != 0) {
      lVar4 = *(long*)( this + 0xc0 );
      for (lVar10 = *(long*)( this + 0xb8 ); lVar4 != lVar10; lVar10 = lVar10 + 0x28) {
         local_68 = glslang::GetThreadPoolAllocator();
         uVar5 = *(ulong*)( lVar10 + 0x10 );
         __src = *(undefined1**)( lVar10 + 8 );
         local_60 = local_50;
         if (uVar5 < 0x10) {
            if (uVar5 == 1) {
               local_50[0] = CONCAT71(local_50[0]._1_7_, *__src);
            }
 else if (uVar5 != 0) goto LAB_00101821;
         }
 else {
            if ((long)uVar5 < 0) {
               /* WARNING: Subroutine does not return */
               std::__throw_length_error("basic_string::_M_create");
            }

            local_60 = (ulong*)glslang::TPoolAllocator::allocate(local_68);
            local_50[0] = uVar5;
            LAB_00101821:memcpy(local_60, __src, uVar5);
         }

         *(undefined1*)( (long)local_60 + uVar5 ) = 0;
         local_58 = uVar5;
         iVar6 = strcmp(param_2, (char*)local_60);
         if (iVar6 == 0) {
            ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "not allowed when using generating SPIR-V codes", param_2, &_LC0);
         }

      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* glslang::TParseVersions::getPreamble(std::__cxx11::string&) */void glslang::TParseVersions::getPreamble(TParseVersions *this, string *param_1) {
   int iVar1;
   int iVar2;
   size_t sVar3;
   long lVar4;
   long in_FS_OFFSET;
   char local_3c[12];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0xc ) == 8) {
      std::__cxx11::string::_M_replace((ulong)param_1, 0, *(char**)( param_1 + 8 ), 0x1082f0);
      iVar2 = *(int*)( this + 0x18 );
      if (299 < iVar2) {
         if (0x3fffffffffffffffU - *(long*)( param_1 + 8 ) < 0x33) goto LAB_0010217b;
         std::__cxx11::string::_M_append((char*)param_1, 0x1088b0);
         iVar2 = *(int*)( this + 0x18 );
         if (0x135 < iVar2) {
            if (( ( 0x3fffffffffffffffU - *(long*)( param_1 + 8 ) < 0x22 ) || ( std::__cxx11::string::_M_append((char*)param_1, 0x1088e8),0x3fffffffffffffffU - *(long*)( param_1 + 8 ) < 0x2f ) ) || ( std::__cxx11::string::_M_append((char*)param_1, 0x108910),0x3fffffffffffffffU - *(long*)( param_1 + 8 ) < 0x27 )) goto LAB_0010217b;
            std::__cxx11::string::_M_append((char*)param_1, 0x108940);
            iVar1 = *(int*)( this + 0xc );
            iVar2 = *(int*)( this + 0x18 );
            goto joined_r0x00101e70;
         }

         if (*(int*)( this + 0xc ) != 8) goto LAB_00101b40;
         goto LAB_00101b7a;
      }

      if (*(int*)( this + 0xc ) == 8) goto LAB_0010198c;
      LAB_00101b40:if (0x8b < iVar2) goto LAB_00101b4b;
   }
 else {
      std::__cxx11::string::_M_replace((ulong)param_1, 0, *(char**)( param_1 + 8 ), 0x108968);
      if (*(int*)( this + 0x20 ) == 0) {
         if (0x3fffffffffffffffU - *(long*)( param_1 + 8 ) < 0x22) goto LAB_0010217b;
         std::__cxx11::string::_M_append((char*)param_1, 0x109c88);
         iVar2 = *(int*)( this + 0x18 );
         lVar4 = *(long*)( param_1 + 8 );
         if (0x95 < iVar2) goto LAB_00101a70;
         LAB_00101976:if (iVar2 < 0x8c) goto LAB_00101981;
         LAB_00101bc0:if (( ( 0x3fffffffffffffffU - lVar4 < 0x22 ) || ( std::__cxx11::string::_M_append((char*)param_1, 0x1088e8),0x3fffffffffffffffU - *(long*)( param_1 + 8 ) < 0x2f ) ) || ( std::__cxx11::string::_M_append((char*)param_1, 0x108910),0x3fffffffffffffffU - *(long*)( param_1 + 8 ) < 0x27 )) goto LAB_0010217b;
         std::__cxx11::string::_M_append((char*)param_1, 0x108940);
         lVar4 = *(long*)( param_1 + 8 );
         if (*(int*)( this + 0x18 ) < 0x82) goto LAB_0010198c;
         LAB_00101b08:if (0x3fffffffffffffffU - lVar4 < 0x25) goto LAB_0010217b;
         std::__cxx11::string::_M_append((char*)param_1, 0x109cd8);
         iVar1 = *(int*)( this + 0xc );
         iVar2 = *(int*)( this + 0x18 );
         joined_r0x00101e70:if (iVar1 != 8) goto LAB_00101b40;
         if (iVar2 < 0x136) goto LAB_00101b7a;
         LAB_00101b4b:if (0x3fffffffffffffffU - *(long*)( param_1 + 8 ) < 0x5c) goto LAB_0010217b;
         std::__cxx11::string::_M_append((char*)param_1, 0x109d00);
         iVar2 = *(int*)( this + 0x18 );
         LAB_00101b7a:if (299 < iVar2) {
            if (0x3fffffffffffffffU - *(long*)( param_1 + 8 ) < 0x37) goto LAB_0010217b;
            std::__cxx11::string::_M_append((char*)param_1, 0x109d60);
         }

      }
 else {
         iVar2 = *(int*)( this + 0x18 );
         lVar4 = *(long*)( param_1 + 8 );
         if (iVar2 < 0x96) goto LAB_00101976;
         LAB_00101a70:if (0x3fffffffffffffffU - lVar4 < 0x1a) goto LAB_0010217b;
         std::__cxx11::string::_M_append((char*)param_1, 0x107242);
         if (*(int*)( this + 0xc ) == 4) {
            if (0x3fffffffffffffffU - *(long*)( param_1 + 8 ) < 0x23) goto LAB_0010217b;
            std::__cxx11::string::_M_append((char*)param_1, 0x109cb0);
         }

         iVar2 = *(int*)( this + 0x18 );
         lVar4 = *(long*)( param_1 + 8 );
         if (0x8b < iVar2) goto LAB_00101bc0;
         LAB_00101981:if (0x81 < iVar2) goto LAB_00101b08;
      }

   }

   LAB_0010198c:if (( 0x3fffffffffffffffU - *(long*)( param_1 + 8 ) < 0x7c ) || ( std::__cxx11::string::_M_append((char*)param_1, 0x109d98),0x3fffffffffffffffU - *(long*)( param_1 + 8 ) < 0x26 )) goto LAB_0010217b;
   std::__cxx11::string::_M_append((char*)param_1, 0x109e18);
   if (*(int*)( this + 0x24 ) < 1) {
      iVar2 = *(int*)( this + 0x2c );
   }
 else {
      if (0x3fffffffffffffffU - *(long*)( param_1 + 8 ) < 0xf) goto LAB_0010217b;
      std::__cxx11::string::_M_append((char*)param_1, 0x10725d);
      __snprintf_chk(local_3c, 0xc, 2, 0xc, &_LC94, *(undefined4*)( this + 0x24 ));
      sVar3 = strlen(local_3c);
      if (( 0x3fffffffffffffffU - *(long*)( param_1 + 8 ) < sVar3 ) || ( std::__cxx11::string::_M_append((char*)param_1, (ulong)local_3c),*(long*)( param_1 + 8 ) == 0x3fffffffffffffff )) goto LAB_0010217b;
      std::__cxx11::string::_M_append((char*)param_1, 0x106fb3);
      iVar2 = *(int*)( this + 0x2c );
   }

   if (0 < iVar2) {
      if (0x3fffffffffffffffU - *(long*)( param_1 + 8 ) < 0x11) goto LAB_0010217b;
      std::__cxx11::string::_M_append((char*)param_1, 0x107270);
      __snprintf_chk(local_3c, 0xc, 2, 0xc, &_LC94, *(undefined4*)( this + 0x2c ));
      sVar3 = strlen(local_3c);
      if (( 0x3fffffffffffffffU - *(long*)( param_1 + 8 ) < sVar3 ) || ( std::__cxx11::string::_M_append((char*)param_1, (ulong)local_3c),*(long*)( param_1 + 8 ) == 0x3fffffffffffffff )) goto LAB_0010217b;
      std::__cxx11::string::_M_append((char*)param_1, 0x106fb3);
   }

   if (*(int*)( this + 0xc ) != 8) {
      switch (*(undefined4*)( this + 0x1c )) {
         case 0:
      if (0x3fffffffffffffffU - *(long *)(param_1 + 8) < 0x1c) {
LAB_0010217b:
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::append");
      }
      std::__cxx11::string::_M_append((char *)param_1,0x107282);
      break;
         case 1:
      if (0x3fffffffffffffffU - *(long *)(param_1 + 8) < 0x2a) goto LAB_0010217b;
      std::__cxx11::string::_M_append((char *)param_1,0x109e40);
      break;
         case 2:
      if (0x3fffffffffffffffU - *(long *)(param_1 + 8) < 0x2d) goto LAB_0010217b;
      std::__cxx11::string::_M_append((char *)param_1,0x109e70);
      break;
         case 3:
      if (0x3fffffffffffffffU - *(long *)(param_1 + 8) < 0x1e) goto LAB_0010217b;
      std::__cxx11::string::_M_append((char *)param_1,0x109ea0);
      break;
         case 4:
      if (0x3fffffffffffffffU - *(long *)(param_1 + 8) < 0x1e) goto LAB_0010217b;
      std::__cxx11::string::_M_append((char *)param_1,0x109ec0);
      break;
         case 5:
      if (0x3fffffffffffffffU - *(long *)(param_1 + 8) < 0x1d) goto LAB_0010217b;
      std::__cxx11::string::_M_append((char *)param_1,0x10729f);
      break;
         case 6:
      if (0x3fffffffffffffffU - *(long *)(param_1 + 8) < 0x28) goto LAB_0010217b;
      std::__cxx11::string::_M_append((char *)param_1,0x109ee0);
      break;
         case 7:
      if (0x3fffffffffffffffU - *(long *)(param_1 + 8) < 0x26) goto LAB_0010217b;
      std::__cxx11::string::_M_append((char *)param_1,0x109f10);
      break;
         case 8:
      if (0x3fffffffffffffffU - *(long *)(param_1 + 8) < 0x21) goto LAB_0010217b;
      std::__cxx11::string::_M_append((char *)param_1,0x109f38);
      break;
         case 9:
      if (0x3fffffffffffffffU - *(long *)(param_1 + 8) < 0x25) goto LAB_0010217b;
      std::__cxx11::string::_M_append((char *)param_1,0x109f60);
      break;
         case 10:
      if (0x3fffffffffffffffU - *(long *)(param_1 + 8) < 0x1e) goto LAB_0010217b;
      std::__cxx11::string::_M_append((char *)param_1,0x109f88);
      break;
         case 0xb:
      if (0x3fffffffffffffffU - *(long *)(param_1 + 8) < 0x22) goto LAB_0010217b;
      std::__cxx11::string::_M_append((char *)param_1,0x109fa8);
      break;
         case 0xc:
      if (0x3fffffffffffffffU - *(long *)(param_1 + 8) < 0x1d) goto LAB_0010217b;
      std::__cxx11::string::_M_append((char *)param_1,0x1072bd);
      break;
         case 0xd:
      if (0x3fffffffffffffffU - *(long *)(param_1 + 8) < 0x1d) goto LAB_0010217b;
      std::__cxx11::string::_M_append((char *)param_1,0x1072db);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
char *StageName(undefined4 param_1) {
   switch (param_1) {
      case 0:
    return "vertex";
      case 1:
    return "tessellation control";
      case 2:
    return "tessellation evaluation";
      case 3:
    return "geometry";
      case 4:
    return "fragment";
      case 5:
    return "compute";
      case 6:
    return "ray-generation";
      case 7:
    return "intersection";
      case 8:
    return "any-hit";
      case 9:
    return "closest-hit";
      case 10:
    return "miss";
      case 0xb:
    return "callable";
      case 0xc:
    return "task";
      case 0xd:
    return "mesh";
      default:
    return "unknown stage";
   }

}
/* glslang::TParseVersions::requireStage(glslang::TSourceLoc const&, EShLanguageMask, char const*)
    */void glslang::TParseVersions::requireStage(TParseVersions *this, undefined8 param_1, uint param_3, undefined8 param_4) {
   undefined8 uVar1;
   code *UNRECOVERED_JUMPTABLE;
   if (( param_3 >> ( *(uint*)( this + 0x1c ) & 0x1f ) & 1 ) == 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x158 );
      uVar1 = StageName();
      /* WARNING: Could not recover jumptable at 0x001022d5. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(this, param_1, "not supported in this stage:", param_4, uVar1);
      return;
   }

   return;
}
/* glslang::TParseVersions::requireStage(glslang::TSourceLoc const&, EShLanguage, char const*) */void glslang::TParseVersions::requireStage(TParseVersions *this, undefined8 param_1, undefined8 param_3, undefined8 param_4) {
   code *UNRECOVERED_JUMPTABLE;
   if (( 1 << ( (byte)param_3 & 0x1f ) & 1 << ( ( byte ) * (undefined4*)( this + 0x1c ) & 0x1f ) ) == 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x158 );
      StageName(*(undefined4*)( this + 0x1c ), param_1, param_3, param_4);
      /* WARNING: Could not recover jumptable at 0x00102342. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(this);
      return;
   }

   return;
}
/* glslang::TParseVersions::requireProfile(glslang::TSourceLoc const&, int, char const*) */void glslang::TParseVersions::requireProfile(TParseVersions *this, TSourceLoc *param_1, int param_2, char *param_3) {
   uint uVar1;
   char *pcVar2;
   uVar1 = *(uint*)( this + 0xc );
   if (( param_2 & uVar1 ) != 0) {
      return;
   }

   pcVar2 = "compatibility";
   if (uVar1 != 4) {
      if (4 < uVar1) {
         pcVar2 = "unknown profile";
         if (uVar1 == 8) {
            pcVar2 = "es";
         }

         /* WARNING: Could not recover jumptable at 0x001023c6. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "not supported with this profile:", param_3, pcVar2);
         return;
      }

      pcVar2 = "none";
      if (( uVar1 != 1 ) && ( pcVar2 = uVar1 == 2 )) {
         pcVar2 = "core";
      }

   }

   /* WARNING: Could not recover jumptable at 0x0010239d. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "not supported with this profile:", param_3, pcVar2);
   return;
}
/* glslang::TParseVersions::getExtensionBehavior(char const*) */undefined4 glslang::TParseVersions::getExtensionBehavior(TParseVersions *this, char *param_1) {
   undefined4 uVar1;
   size_t sVar2;
   TParseVersions *pTVar3;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined1 *local_40;
   undefined1 local_30[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = glslang::GetThreadPoolAllocator();
   local_40 = local_30;
   if (param_1 == (char*)0x0) {
      /* WARNING: Subroutine does not return */
      std::__throw_logic_error("basic_string: construction from null is not valid");
   }

   sVar2 = strlen(param_1);
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_48, param_1, param_1 + sVar2);
   pTVar3 = (TParseVersions*)std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::find((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>*)( this + 0x40 ), (basic_string*)&local_48);
   if (pTVar3 == this + 0x50) {
      uVar1 = 0;
   }
 else {
      uVar1 = *(undefined4*)( pTVar3 + 0x48 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TParseVersions::updateExtensionBehavior(char const*, glslang::TExtensionBehavior) */void glslang::TParseVersions::updateExtensionBehavior(TParseVersions *this, char *param_1, int param_3) {
   long lVar1;
   int iVar2;
   _Rb_tree_node_base *p_Var3;
   size_t sVar4;
   TParseVersions *pTVar5;
   char *pcVar6;
   long lVar7;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined1 *local_50;
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = strcmp(param_1, "all");
   if (iVar2 == 0) {
      if (param_3 - 1U < 2) {
         lVar1 = *(long*)( this + 0xd8 );
         UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x158 );
         lVar7 = lVar1 + 0x40;
         if (*(char*)( lVar1 + 0x58 ) == '\0') {
            lVar7 = *(long*)( lVar1 + 0x30 );
            iVar2 = ( *(int*)( lVar1 + 8 ) - *(int*)( lVar1 + 0x3c ) ) + -1;
            if (*(int*)( lVar1 + 0x20 ) < iVar2) {
               iVar2 = *(int*)( lVar1 + 0x20 );
            }

            if (0 < iVar2) {
               lVar7 = lVar7 + (long)iVar2 * 0x18;
            }

         }

         if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00102737;
         param_1 = "";
         pcVar6 = "extension \'all\' cannot have \'require\' or \'enable\' behavior";
         goto LAB_001025d7;
      }

      for (p_Var3 = *(_Rb_tree_node_base**)( this + 0x60 ); p_Var3 != (_Rb_tree_node_base*)( this + 0x50 ); p_Var3 = (_Rb_tree_node_base*)std::_Rb_tree_increment(p_Var3)) {
         *(int*)( p_Var3 + 0x48 ) = param_3;
      }

   }
 else {
      local_58 = glslang::GetThreadPoolAllocator();
      local_50 = local_40;
      sVar4 = strlen(param_1);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_58, param_1, param_1 + sVar4);
      pTVar5 = (TParseVersions*)std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::find((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>*)( this + 0x40 ), (basic_string*)&local_58);
      if (pTVar5 == this + 0x50) {
         if (param_3 == 1) {
            lVar1 = *(long*)( this + 0xd8 );
            UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x158 );
            lVar7 = lVar1 + 0x40;
            if (*(char*)( lVar1 + 0x58 ) == '\0') {
               lVar7 = *(long*)( lVar1 + 0x30 );
               iVar2 = ( *(int*)( lVar1 + 8 ) - *(int*)( lVar1 + 0x3c ) ) + -1;
               if (*(int*)( lVar1 + 0x20 ) < iVar2) {
                  iVar2 = *(int*)( lVar1 + 0x20 );
               }

               if (0 < iVar2) {
                  lVar7 = lVar7 + (long)iVar2 * 0x18;
               }

            }

            if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00102737;
         }
 else {
            if (2 < param_3 - 2U) goto LAB_001024d8;
            lVar1 = *(long*)( this + 0xd8 );
            lVar7 = lVar1 + 0x40;
            if (*(char*)( lVar1 + 0x58 ) == '\0') {
               lVar7 = *(long*)( lVar1 + 0x30 );
               iVar2 = ( *(int*)( lVar1 + 8 ) - *(int*)( lVar1 + 0x3c ) ) + -1;
               if (*(int*)( lVar1 + 0x20 ) < iVar2) {
                  iVar2 = *(int*)( lVar1 + 0x20 );
               }

               if (0 < iVar2) {
                  lVar7 = lVar7 + (long)iVar2 * 0x18;
               }

            }

            if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00102737;
            UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x160 );
         }

         pcVar6 = "extension not supported:";
         LAB_001025d7:/* WARNING: Could not recover jumptable at 0x001025e6. Too many branches *//* WARNING: Treating indirect jump as call */( *UNRECOVERED_JUMPTABLE )(this, lVar7, pcVar6, "#extension", param_1, UNRECOVERED_JUMPTABLE);
         return;
      }

      if (*(int*)( pTVar5 + 0x48 ) == 5) {
         lVar1 = *(long*)( this + 0xd8 );
         lVar7 = lVar1 + 0x40;
         if (*(char*)( lVar1 + 0x58 ) == '\0') {
            lVar7 = *(long*)( lVar1 + 0x30 );
            iVar2 = ( *(int*)( lVar1 + 8 ) - *(int*)( lVar1 + 0x3c ) ) + -1;
            if (*(int*)( lVar1 + 0x20 ) < iVar2) {
               iVar2 = *(int*)( lVar1 + 0x20 );
            }

            if (0 < iVar2) {
               lVar7 = lVar7 + (long)iVar2 * 0x18;
            }

         }

         ( **(code**)( *(long*)this + 0x160 ) )(this, lVar7, "extension is only partially supported:", "#extension", param_1);
      }

      if (param_3 == 4) {
         *(undefined4*)( pTVar5 + 0x48 ) = 4;
      }
 else {
         TIntermediate::addRequestedExtension(*(TIntermediate**)( this + 0x38 ), param_1);
         *(int*)( pTVar5 + 0x48 ) = param_3;
      }

   }

   LAB_001024d8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00102737:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* glslang::TParseVersions::checkDeprecated(glslang::TSourceLoc const&, int, int, char const*) */void glslang::TParseVersions::checkDeprecated(TParseVersions *this, TSourceLoc *param_1, int param_2, int param_3, char *param_4) {
   TInfoSinkBase *pTVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   size_t sVar4;
   undefined8 *puVar5;
   uint uVar6;
   ulong *puVar7;
   ulong uVar8;
   ulong uVar9;
   uint uVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   undefined8 local_138;
   ulong local_130[3];
   undefined8 local_118;
   ulong *local_110;
   undefined8 local_108;
   ulong local_100[4];
   char *local_e0;
   ulong local_d8;
   char local_d0[24];
   undefined8 local_b8;
   uint *local_b0;
   undefined8 local_a8;
   undefined8 local_a0[3];
   undefined8 local_88;
   uint *local_80;
   undefined8 local_78;
   uint local_70;
   undefined4 uStack_6c;
   char local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 & *(uint*)( this + 0xc ) ) != 0 ) && ( param_3 <= *(int*)( this + 0x18 ) )) {
      if (this[8] != (TParseVersions)0x0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x001027f1. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)this + 0x158 ) )(this, param_1, "deprecated, may be removed in future release", param_4, &_LC0, *(code**)( *(long*)this + 0x158 ));
            return;
         }

         goto LAB_00102cb7;
      }

      if (( (byte)this[0xd0] & 2 ) != 0) goto LAB_00102772;
      pTVar1 = *(TInfoSinkBase**)( this + 0x10 );
      __snprintf_chk(local_58, 0x10, 2, 0x10, &_LC94, param_3);
      local_100[3] = glslang::GetThreadPoolAllocator();
      local_e0 = local_d0;
      sVar4 = strlen(local_58);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(local_100 + 3, local_58, local_58 + sVar4);
      local_88 = glslang::GetThreadPoolAllocator();
      local_80 = &local_70;
      if (param_4 == (char*)0x0) {
         /* WARNING: Subroutine does not return */
         std::__throw_logic_error("basic_string: construction from null is not valid");
      }

      sVar4 = strlen(param_4);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_88, param_4, param_4 + sVar4);
      uVar11 = local_78;
      uVar2 = _UNK_0010cdc8;
      if (0x7fffffffffffffff - local_78 < 0x17) goto LAB_00102d01;
      uVar9 = local_78 + 0x17;
      if (local_80 == &local_70) {
         uVar8 = 0xf;
      }
 else {
         uVar8 = CONCAT44(uStack_6c, local_70);
      }

      if (uVar8 < uVar9) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_88, local_78, 0, " deprecated in version ", 0x17);
      }
 else {
         puVar5 = (undefined8*)( (long)local_80 + local_78 );
         *puVar5 = __LC155;
         puVar5[1] = uVar2;
         *(undefined8*)( (long)puVar5 + 0xf ) = 0x206e6f6973726576;
      }

      local_78 = uVar9;
      *(undefined1*)( (long)local_80 + uVar11 + 0x17 ) = 0;
      local_b0 = (uint*)local_a0;
      local_b8 = local_88;
      if (local_80 == &local_70) {
         uVar11 = uVar11 + 0x18;
         uVar6 = (uint)uVar11;
         if (uVar6 < 8) {
            if (( uVar11 & 4 ) == 0) {
               if (uVar6 != 0) {
                  local_a0[0] = CONCAT71(local_a0[0]._1_7_, (undefined1)local_70);
                  if (( uVar11 & 2 ) != 0) {
                     *(undefined2*)( (long)local_a0 + ( ( uVar11 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)&local_78 + ( uVar11 & 0xffffffff ) + 6 );
                  }

               }

            }
 else {
               local_a0[0] = CONCAT44(local_a0[0]._4_4_, local_70);
               *(undefined4*)( (long)local_a0 + ( ( uVar11 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)&local_78 + ( uVar11 & 0xffffffff ) + 4 );
            }

         }
 else {
            *(undefined8*)( (long)local_a0 + ( ( uVar11 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)&local_78 + ( uVar11 & 0xffffffff ) );
            if (7 < uVar6 - 1) {
               uVar10 = 0;
               do {
                  uVar11 = (ulong)uVar10;
                  uVar10 = uVar10 + 8;
                  *(undefined8*)( (long)local_a0 + uVar11 ) = *(undefined8*)( (long)local_80 + uVar11 );
               }
 while ( uVar10 < ( uVar6 - 1 & 0xfffffff8 ) );
            }

         }

      }
 else {
         local_b0 = local_80;
         local_a0[0] = CONCAT44(uStack_6c, local_70);
      }

      local_78 = 0;
      local_70 = local_70 & 0xffffff00;
      local_a8 = uVar9;
      local_80 = &local_70;
      if (0x7fffffffffffffff - uVar9 < local_d8) goto LAB_00102d01;
      puVar5 = (undefined8*)std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_b8, local_e0, local_d8);
      local_118 = *puVar5;
      puVar7 = puVar5 + 3;
      local_110 = local_100;
      if ((ulong*)puVar5[1] == puVar7) {
         uVar9 = puVar5[2];
         uVar11 = uVar9 + 1;
         uVar6 = (uint)uVar11;
         if (7 < uVar6) {
            *(undefined8*)( (long)local_100 + ( ( uVar11 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)puVar5 + ( uVar11 & 0xffffffff ) + 0x10 );
            if (7 < uVar6 - 1) {
               uVar10 = 0;
               do {
                  uVar11 = (ulong)uVar10;
                  uVar10 = uVar10 + 8;
                  *(undefined8*)( (long)local_100 + uVar11 ) = *(undefined8*)( (long)puVar7 + uVar11 );
               }
 while ( uVar10 < ( uVar6 - 1 & 0xfffffff8 ) );
            }

            goto LAB_001029f3;
         }

         if (( uVar11 & 4 ) == 0) {
            if (uVar6 != 0) {
               local_100[0] = CONCAT71(local_100[0]._1_7_, *(undefined1*)( puVar5 + 3 ));
               if (( uVar11 & 2 ) == 0) goto LAB_001029f3;
               *(undefined2*)( (long)local_100 + ( ( uVar11 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)puVar5 + ( uVar11 & 0xffffffff ) + 0x16 );
               uVar9 = puVar5[2];
            }

         }
 else {
            local_100[0] = CONCAT44(local_100[0]._4_4_, *(undefined4*)( puVar5 + 3 ));
            *(undefined4*)( (long)local_100 + ( ( uVar11 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)puVar5 + ( uVar11 & 0xffffffff ) + 0x14 );
            uVar9 = puVar5[2];
         }

      }
 else {
         local_100[0] = puVar5[3];
         local_110 = (ulong*)puVar5[1];
         LAB_001029f3:uVar9 = puVar5[2];
      }

      puVar5[1] = puVar7;
      puVar5[2] = 0;
      *(undefined1*)( puVar5 + 3 ) = 0;
      uVar3 = _UNK_0010cdd8;
      uVar2 = __LC156;
      local_108 = uVar9;
      if (0x7fffffffffffffff - uVar9 < 0x22) {
         LAB_00102d01:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
      }

      uVar11 = uVar9 + 0x22;
      uVar8 = local_100[0];
      if (local_110 == local_100) {
         uVar8 = 0xf;
      }

      if (uVar8 < uVar11) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_118, uVar9, 0, "; may be removed in future release", 0x22);
      }
 else {
         puVar5 = (undefined8*)( (long)local_110 + uVar9 );
         *(undefined2*)( puVar5 + 4 ) = 0x6573;
         *puVar5 = uVar2;
         puVar5[1] = uVar3;
         uVar2 = _UNK_0010cde8;
         puVar5[2] = __LC157;
         puVar5[3] = uVar2;
      }

      local_108 = uVar11;
      *(undefined1*)( (long)local_110 + uVar9 + 0x22 ) = 0;
      puVar7 = local_130;
      if (local_110 == local_100) {
         uVar9 = uVar9 + 0x23;
         uVar6 = (uint)uVar9;
         if (uVar6 < 8) {
            if (( uVar9 & 4 ) == 0) {
               if (uVar6 != 0) {
                  local_130[0] = CONCAT71(local_130[0]._1_7_, (undefined1)local_100[0]);
                  if (( uVar9 & 2 ) != 0) {
                     *(undefined2*)( (long)local_130 + ( ( uVar9 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)local_100 + ( ( uVar9 & 0xffffffff ) - 2 ) );
                  }

               }

            }
 else {
               local_130[0] = CONCAT44(local_130[0]._4_4_, (undefined4)local_100[0]);
               *(undefined4*)( (long)local_130 + ( ( uVar9 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)local_100 + ( ( uVar9 & 0xffffffff ) - 4 ) );
            }

         }
 else {
            *(undefined8*)( (long)local_130 + ( ( uVar9 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)local_100 + ( ( uVar9 & 0xffffffff ) - 8 ) );
            if (7 < uVar6 - 1) {
               uVar10 = 0;
               do {
                  uVar9 = (ulong)uVar10;
                  uVar10 = uVar10 + 8;
                  *(undefined8*)( (long)puVar7 + uVar9 ) = *(undefined8*)( (long)local_110 + uVar9 );
               }
 while ( uVar10 < ( uVar6 - 1 & 0xfffffff8 ) );
            }

         }

      }
 else {
         local_130[0] = local_100[0];
         puVar7 = local_110;
      }

      local_108 = 0;
      local_100[0] = local_100[0] & 0xffffffffffffff00;
      local_138 = uVar11;
      local_110 = local_100;
      TInfoSinkBase::message(pTVar1, 1, puVar7, param_1);
   }

   LAB_00102772:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00102cb7:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* glslang::TParseVersions::profileRequires(glslang::TSourceLoc const&, int, int, int, char const*
   const*, char const*) [clone .part.0] */void glslang::TParseVersions::profileRequires(TSourceLoc *param_1, int param_2, int param_3, int param_4, char **param_5, char *param_6) {
   ulong *puVar1;
   TInfoSinkBase *pTVar2;
   char *__s;
   undefined8 uVar3;
   uint uVar4;
   size_t sVar5;
   undefined8 *puVar6;
   ulong uVar7;
   long lVar8;
   undefined4 in_register_00000034;
   ulong uVar9;
   uint uVar10;
   ulong uVar11;
   bool bVar12;
   long in_FS_OFFSET;
   undefined8 local_f8;
   undefined1 *local_f0;
   undefined1 local_e0[24];
   undefined8 local_c8;
   ulong *local_c0;
   undefined8 local_b8;
   ulong local_b0[3];
   undefined8 local_98;
   ulong *local_90;
   undefined8 local_88;
   ulong local_80[4];
   ulong *local_60;
   undefined8 local_58;
   ulong local_50[4];
   local_50[2] = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 < 1) {
      bVar12 = false;
      if (0 < param_4) goto LAB_00102d6e;
   }
 else {
      bVar12 = param_3 <= *(int*)( param_1 + 0x18 );
      if (0 < param_4) {
         LAB_00102d6e:lVar8 = 0;
         do {
            uVar4 = ( **(code**)( *(long*)param_1 + 0x38 ) )(param_1, param_5[lVar8]);
            if (uVar4 < 3) {
               if (uVar4 == 0) goto LAB_00102d8a;
               LAB_00102d84:bVar12 = true;
            }
 else if (uVar4 == 3) {
               pTVar2 = *(TInfoSinkBase**)( param_1 + 0x10 );
               local_f8 = glslang::GetThreadPoolAllocator();
               __s = param_5[lVar8];
               local_f0 = local_e0;
               if (__s == (char*)0x0) {
                  /* WARNING: Subroutine does not return */
                  std::__throw_logic_error("basic_string: construction from null is not valid");
               }

               sVar5 = strlen(__s);
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_f8, __s, __s + sVar5);
               puVar6 = (undefined8*)std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_f8, 0, 0, "extension ", 10);
               local_c8 = *puVar6;
               puVar1 = puVar6 + 3;
               local_c0 = local_b0;
               if ((ulong*)puVar6[1] == puVar1) {
                  uVar9 = puVar6[2];
                  uVar11 = uVar9 + 1;
                  uVar4 = (uint)uVar11;
                  if (7 < uVar4) {
                     *(undefined8*)( (long)local_b0 + ( ( uVar11 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)puVar6 + ( uVar11 & 0xffffffff ) + 0x10 );
                     if (7 < uVar4 - 1) {
                        uVar10 = 0;
                        do {
                           uVar9 = (ulong)uVar10;
                           uVar10 = uVar10 + 8;
                           *(undefined8*)( (long)local_b0 + uVar9 ) = *(undefined8*)( (long)puVar1 + uVar9 );
                        }
 while ( uVar10 < ( uVar4 - 1 & 0xfffffff8 ) );
                     }

                     goto LAB_00102e3f;
                  }

                  if (( uVar11 & 4 ) == 0) {
                     if (uVar4 != 0) {
                        local_b0[0] = CONCAT71(local_b0[0]._1_7_, *(undefined1*)( puVar6 + 3 ));
                        if (( uVar11 & 2 ) == 0) goto LAB_00102e3f;
                        *(undefined2*)( (long)local_b0 + ( ( uVar11 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)puVar6 + ( uVar11 & 0xffffffff ) + 0x16 );
                        uVar9 = puVar6[2];
                     }

                  }
 else {
                     local_b0[0] = CONCAT44(local_b0[0]._4_4_, *(undefined4*)( puVar6 + 3 ));
                     *(undefined4*)( (long)local_b0 + ( ( uVar11 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)puVar6 + ( uVar11 & 0xffffffff ) + 0x14 );
                     uVar9 = puVar6[2];
                  }

               }
 else {
                  local_b0[0] = puVar6[3];
                  local_c0 = (ulong*)puVar6[1];
                  LAB_00102e3f:uVar9 = puVar6[2];
               }

               puVar6[1] = puVar1;
               puVar6[2] = 0;
               *(undefined1*)( puVar6 + 3 ) = 0;
               uVar3 = _UNK_0010cdf8;
               local_b8 = uVar9;
               if (0x7fffffffffffffff - uVar9 < 0x13) {
                  LAB_00103380:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
               }

               uVar11 = uVar9 + 0x13;
               uVar7 = local_b0[0];
               if (local_c0 == local_b0) {
                  uVar7 = 0xf;
               }

               if (uVar7 < uVar11) {
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8, uVar9, 0, " is being used for ", 0x13);
               }
 else {
                  puVar6 = (undefined8*)( (long)local_c0 + uVar9 );
                  *puVar6 = __LC163;
                  puVar6[1] = uVar3;
                  *(undefined4*)( (long)puVar6 + 0xf ) = 0x20726f66;
               }

               local_b8 = uVar11;
               *(undefined1*)( (long)local_c0 + uVar11 ) = 0;
               local_90 = local_80;
               local_98 = local_c8;
               if (local_c0 == local_b0) {
                  uVar9 = uVar9 + 0x14;
                  uVar4 = (uint)uVar9;
                  if (uVar4 < 8) {
                     if (( uVar9 & 4 ) == 0) {
                        if (uVar4 != 0) {
                           local_80[0] = CONCAT71(local_80[0]._1_7_, (undefined1)local_b0[0]);
                           if (( uVar9 & 2 ) != 0) {
                              *(undefined2*)( (long)local_80 + ( ( uVar9 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)local_b0 + ( ( uVar9 & 0xffffffff ) - 2 ) );
                           }

                        }

                     }
 else {
                        local_80[0] = CONCAT44(local_80[0]._4_4_, (undefined4)local_b0[0]);
                        *(undefined4*)( (long)local_80 + ( ( uVar9 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)local_b0 + ( ( uVar9 & 0xffffffff ) - 4 ) );
                     }

                  }
 else {
                     *(undefined8*)( (long)local_80 + ( ( uVar9 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)local_b0 + ( ( uVar9 & 0xffffffff ) - 8 ) );
                     if (7 < uVar4 - 1) {
                        uVar10 = 0;
                        do {
                           uVar9 = (ulong)uVar10;
                           uVar10 = uVar10 + 8;
                           *(undefined8*)( (long)local_80 + uVar9 ) = *(undefined8*)( (long)local_c0 + uVar9 );
                        }
 while ( uVar10 < ( uVar4 - 1 & 0xfffffff8 ) );
                     }

                  }

               }
 else {
                  local_90 = local_c0;
                  local_80[0] = local_b0[0];
               }

               local_b8 = 0;
               local_b0[0] = local_b0[0] & 0xffffffffffffff00;
               local_c0 = local_b0;
               local_88 = uVar11;
               sVar5 = strlen(param_6);
               if (0x7fffffffffffffff - uVar11 < sVar5) goto LAB_00103380;
               uVar9 = uVar11 + sVar5;
               uVar7 = local_80[0];
               if (local_90 == local_80) {
                  uVar7 = 0xf;
               }

               if (uVar7 < uVar9) {
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, uVar11, 0, param_6, sVar5);
               }
 else if (sVar5 != 0) {
                  if (sVar5 == 1) {
                     *(char*)( (long)local_90 + uVar11 ) = *param_6;
                  }
 else {
                     memcpy((char*)( (long)local_90 + uVar11 ), param_6, sVar5);
                  }

               }

               local_88 = uVar9;
               *(undefined1*)( (long)local_90 + uVar9 ) = 0;
               local_80[3] = local_98;
               local_60 = local_50;
               if (local_90 == local_80) {
                  uVar11 = uVar9 + 1;
                  uVar4 = (uint)uVar11;
                  if (uVar4 < 8) {
                     if (( uVar11 & 4 ) == 0) {
                        if (uVar4 != 0) {
                           local_50[0] = CONCAT71(local_50[0]._1_7_, (undefined1)local_80[0]);
                           if (( uVar11 & 2 ) != 0) {
                              *(undefined2*)( (long)local_50 + ( ( uVar11 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)local_80 + ( ( uVar11 & 0xffffffff ) - 2 ) );
                           }

                        }

                     }
 else {
                        local_50[0] = CONCAT44(local_50[0]._4_4_, (undefined4)local_80[0]);
                        *(undefined4*)( (long)local_50 + ( ( uVar11 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)local_80 + ( ( uVar11 & 0xffffffff ) - 4 ) );
                     }

                  }
 else {
                     *(undefined8*)( (long)local_50 + ( ( uVar11 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)local_80 + ( ( uVar11 & 0xffffffff ) - 8 ) );
                     if (7 < uVar4 - 1) {
                        uVar10 = 0;
                        do {
                           uVar11 = (ulong)uVar10;
                           uVar10 = uVar10 + 8;
                           *(undefined8*)( (long)local_50 + uVar11 ) = *(undefined8*)( (long)local_90 + uVar11 );
                        }
 while ( uVar10 < ( uVar4 - 1 & 0xfffffff8 ) );
                     }

                  }

               }
 else {
                  local_60 = local_90;
                  local_50[0] = local_80[0];
               }

               local_88 = 0;
               local_80[0] = local_80[0] & 0xffffffffffffff00;
               local_90 = local_80;
               local_58 = uVar9;
               TInfoSinkBase::message(pTVar2, 1, local_60, CONCAT44(in_register_00000034, param_2));
               goto LAB_00102d84;
            }

            LAB_00102d8a:lVar8 = lVar8 + 1;
         }
 while ( (int)lVar8 < param_4 );
      }

      if (bVar12) {
         if (local_50[2] == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00103398;
      }

   }

   if (local_50[2] == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00103130. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)param_1 + 0x158 ) )(param_1, CONCAT44(in_register_00000034, param_2), "not supported for this version or the enabled extensions", param_6, &_LC0, *(code**)( *(long*)param_1 + 0x158 ));
      return;
   }

   LAB_00103398:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* glslang::TParseVersions::profileRequires(glslang::TSourceLoc const&, int, int, int, char const*
   const*, char const*) */void glslang::TParseVersions::profileRequires(TParseVersions *this, TSourceLoc *param_1, int param_2, int param_3, int param_4, char **param_5, char *param_6) {
   if (( param_2 & *(uint*)( this + 0xc ) ) != 0) {
      profileRequires((TSourceLoc*)this, (int)param_1, param_3, param_4, param_5, param_6);
      return;
   }

   return;
}
/* glslang::TParseVersions::profileRequires(glslang::TSourceLoc const&, int, int, char const*, char
   const*) */void glslang::TParseVersions::profileRequires(TParseVersions *this, TSourceLoc *param_1, int param_2, int param_3, char *param_4, char *param_5) {
   char *local_10[2];
   if (( param_2 & *(uint*)( this + 0xc ) ) != 0) {
      local_10[0] = param_4;
      profileRequires((TSourceLoc*)this, (int)param_1, param_3, ( uint )(param_4 != (char*)0x0), local_10, param_5);
   }

   return;
}
/* glslang::TParseVersions::fullIntegerCheck(glslang::TSourceLoc const&, char const*) */void glslang::TParseVersions::fullIntegerCheck(TParseVersions *this, TSourceLoc *param_1, char *param_2) {
   uint uVar1;
   long in_FS_OFFSET;
   char *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(uint*)( this + 0xc );
   local_28 = (char*)0x0;
   if (( uVar1 & 1 ) != 0) {
      profileRequires((TSourceLoc*)this, (int)param_1, 0x82, 0, &local_28, param_2);
      uVar1 = *(uint*)( this + 0xc );
   }

   local_28 = (char*)0x0;
   if (( uVar1 & 8 ) != 0) {
      profileRequires((TSourceLoc*)this, (int)param_1, 300, 0, &local_28, param_2);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TParseVersions::float16OpaqueCheck(glslang::TSourceLoc const&, char const*, bool) */void glslang::TParseVersions::float16OpaqueCheck(TParseVersions *this, TSourceLoc *param_1, char *param_2, bool param_3) {
   long in_FS_OFFSET;
   char *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_3) {
      ( **(code**)( *(long*)this + 0x28 ) )(this, param_1, 1, &E_GL_AMD_gpu_shader_half_float_fetch, param_2);
      requireProfile(this, param_1, 6, param_2);
      local_28 = (char*)0x0;
      if (( (byte)this[0xc] & 6 ) != 0) {
         profileRequires((TSourceLoc*)this, (int)param_1, 400, 0, &local_28, param_2);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TParseVersions::explicitFloat64Check(glslang::TSourceLoc const&, char const*, bool) */void glslang::TParseVersions::explicitFloat64Check(TParseVersions *this, TSourceLoc *param_1, char *param_2, bool param_3) {
   long in_FS_OFFSET;
   char *local_40;
   char *local_38;
   char *pcStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_3) {
      local_38 = "GL_EXT_shader_explicit_arithmetic_types";
      pcStack_30 = "GL_EXT_shader_explicit_arithmetic_types_float64";
      ( **(code**)( *(long*)this + 0x28 ) )(this, param_1, 2, &local_38, param_2);
      requireProfile(this, param_1, 6, param_2);
      local_40 = (char*)0x0;
      if (( (byte)this[0xc] & 6 ) != 0) {
         profileRequires((TSourceLoc*)this, (int)param_1, 400, 0, &local_40, param_2);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TParseVersions::int64Check(glslang::TSourceLoc const&, char const*, bool) */void glslang::TParseVersions::int64Check(TParseVersions *this, TSourceLoc *param_1, char *param_2, bool param_3) {
   long in_FS_OFFSET;
   char *local_40;
   char *local_38;
   char *pcStack_30;
   char *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_3) {
      local_28 = "GL_EXT_shader_explicit_arithmetic_types_int64";
      local_38 = "GL_ARB_gpu_shader_int64";
      pcStack_30 = "GL_EXT_shader_explicit_arithmetic_types";
      ( **(code**)( *(long*)this + 0x28 ) )(this, param_1, 3, &local_38, param_2);
      requireProfile(this, param_1, 6, param_2);
      local_40 = (char*)0x0;
      if (( (byte)this[0xc] & 6 ) != 0) {
         profileRequires((TSourceLoc*)this, (int)param_1, 400, 0, &local_40, param_2);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TParseVersions::doubleCheck(glslang::TSourceLoc const&, char const*) */void glslang::TParseVersions::doubleCheck(TParseVersions *this, TSourceLoc *param_1, char *param_2) {
   long in_FS_OFFSET;
   char *local_30;
   char *local_28;
   char *pcStack_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x1c ) == 0) {
      local_28 = "GL_ARB_gpu_shader_fp64";
      pcStack_20 = "GL_ARB_vertex_attrib_64bit";
      if (( *(uint*)( this + 0xc ) & 6 ) != 0) {
         profileRequires((TSourceLoc*)this, (int)param_1, 400, 2, &local_28, param_2);
      }

   }
 else {
      local_30 = "GL_ARB_gpu_shader_fp64";
      if (( *(uint*)( this + 0xc ) & 6 ) != 0) {
         profileRequires((TSourceLoc*)this, (int)param_1, 400, 1, &local_30, param_2);
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TParseVersions::checkExtensionStage(glslang::TSourceLoc const&, char const*) */void glslang::TParseVersions::checkExtensionStage(TParseVersions *this, TSourceLoc *param_1, char *param_2) {
   char cVar1;
   int iVar2;
   uint uVar3;
   char *pcVar4;
   int iVar5;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   char *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = strcmp(param_2, "GL_NV_mesh_shader");
   iVar5 = (int)param_1;
   if (iVar2 == 0) {
      if (( 1 << ( ( byte ) * (undefined4*)( this + 0x1c ) & 0x1f ) & 0x3010U ) == 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x158 );
         StageName(*(undefined4*)( this + 0x1c ), param_1);
         ( *UNRECOVERED_JUMPTABLE )(this);
      }

      uVar3 = *(uint*)( this + 0xc );
      local_38 = (char*)0x0;
      if (( uVar3 & 2 ) != 0) {
         profileRequires((TSourceLoc*)this, iVar5, 0x1c2, 0, &local_38, "#extension GL_NV_mesh_shader");
         uVar3 = *(uint*)( this + 0xc );
      }

      local_38 = (char*)0x0;
      if (( uVar3 & 8 ) != 0) {
         profileRequires((TSourceLoc*)this, iVar5, 0x140, 0, &local_38, "#extension GL_NV_mesh_shader");
      }

      UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x40 );
      if (UNRECOVERED_JUMPTABLE == extensionTurnedOn) {
         iVar2 = ( **(code**)( *(long*)this + 0x38 ) )();
         if (iVar2 - 1U < 3) {
            LAB_001039a4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               pcVar4 = "GL_EXT_mesh_shader is already turned on, and not allowed with";
               UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x158 );
               LAB_001038e7:/* WARNING: Could not recover jumptable at 0x001038f9. Too many branches *//* WARNING: Treating indirect jump as call */( *UNRECOVERED_JUMPTABLE )(this, param_1, pcVar4, "#extension", param_2, UNRECOVERED_JUMPTABLE);
               return;
            }

            goto LAB_00103a1f;
         }

      }
 else {
         cVar1 = ( *UNRECOVERED_JUMPTABLE )(this, "GL_EXT_mesh_shader");
         if (cVar1 != '\0') goto LAB_001039a4;
      }

   }
 else {
      iVar2 = strcmp(param_2, "GL_EXT_mesh_shader");
      if (iVar2 == 0) {
         if (( 1 << ( ( byte ) * (undefined4*)( this + 0x1c ) & 0x1f ) & 0x3010U ) == 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x158 );
            StageName(*(undefined4*)( this + 0x1c ), param_1);
            ( *UNRECOVERED_JUMPTABLE )(this);
         }

         uVar3 = *(uint*)( this + 0xc );
         local_38 = (char*)0x0;
         if (( uVar3 & 2 ) != 0) {
            profileRequires((TSourceLoc*)this, iVar5, 0x1c2, 0, &local_38, "#extension GL_EXT_mesh_shader");
            uVar3 = *(uint*)( this + 0xc );
         }

         local_38 = (char*)0x0;
         if (( uVar3 & 8 ) != 0) {
            profileRequires((TSourceLoc*)this, iVar5, 0x140, 0, &local_38, "#extension GL_EXT_mesh_shader");
         }

         UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x40 );
         if (UNRECOVERED_JUMPTABLE == extensionTurnedOn) {
            iVar2 = ( **(code**)( *(long*)this + 0x38 ) )();
            if (iVar2 - 1U < 3) {
               LAB_001038b8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  pcVar4 = "GL_NV_mesh_shader is already turned on, and not allowed with";
                  UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x158 );
                  goto LAB_001038e7;
               }

               goto LAB_00103a1f;
            }

         }
 else {
            cVar1 = ( *UNRECOVERED_JUMPTABLE )(this, "GL_NV_mesh_shader");
            if (cVar1 != '\0') goto LAB_001038b8;
         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00103a1f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* glslang::TParseVersions::requireFloat16Arithmetic(glslang::TSourceLoc const&, char const*, char
   const*) */void glslang::TParseVersions::requireFloat16Arithmetic(TParseVersions *this, TSourceLoc *param_1, char *param_2, char *param_3) {
   ulong uVar1;
   size_t sVar2;
   ulong uVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   char *local_88;
   char *pcStack_80;
   char *local_78;
   undefined8 local_68;
   undefined1 *local_60;
   ulong local_58;
   undefined1 local_50;
   undefined7 uStack_4f;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = glslang::GetThreadPoolAllocator();
   local_58 = 0;
   local_50 = 0;
   local_60 = &local_50;
   sVar2 = strlen(param_2);
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, 0, 0, param_2, sVar2);
   uVar1 = local_58;
   if (1 < 0x7fffffffffffffff - local_58) {
      uVar3 = local_58 + 2;
      if (local_60 == &local_50) {
         uVar4 = 0xf;
      }
 else {
         uVar4 = CONCAT71(uStack_4f, local_50);
      }

      if (uVar4 < uVar3) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, local_58, 0, ": ", 2);
      }
 else {
         *(undefined2*)( local_60 + local_58 ) = 0x203a;
      }

      local_60[uVar1 + 2] = 0;
      local_58 = uVar3;
      sVar2 = strlen(param_3);
      if (sVar2 <= 0x7fffffffffffffff - local_58) {
         uVar1 = sVar2 + local_58;
         if (local_60 == &local_50) {
            uVar3 = 0xf;
         }
 else {
            uVar3 = CONCAT71(uStack_4f, local_50);
         }

         if (uVar3 < uVar1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, local_58, 0, param_3, sVar2);
         }
 else if (sVar2 != 0) {
            if (sVar2 == 1) {
               local_60[local_58] = *param_3;
            }
 else {
               memcpy(local_60 + local_58, param_3, sVar2);
            }

         }

         local_60[uVar1] = 0;
         local_78 = "GL_EXT_shader_explicit_arithmetic_types_float16";
         local_88 = "GL_AMD_gpu_shader_half_float";
         pcStack_80 = "GL_EXT_shader_explicit_arithmetic_types";
         local_58 = uVar1;
         ( **(code**)( *(long*)this + 0x28 ) )(this, param_1, 3, &local_88, local_60);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

   }

   /* WARNING: Subroutine does not return */
   std::__throw_length_error("basic_string::append");
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* glslang::TParseVersions::checkExtensionsRequested(glslang::TSourceLoc const&, int, char const*
   const*, char const*) */undefined8 glslang::TParseVersions::checkExtensionsRequested(TParseVersions *this, TSourceLoc *param_1, int param_2, char **param_3, char *param_4) {
   ulong *puVar1;
   char **ppcVar2;
   TInfoSinkBase *pTVar3;
   char *__s;
   int iVar4;
   size_t sVar5;
   undefined8 *puVar6;
   ulong uVar7;
   uint uVar8;
   ulong uVar9;
   uint uVar10;
   ulong uVar11;
   char **ppcVar12;
   undefined8 uVar13;
   long in_FS_OFFSET;
   undefined8 local_f8;
   undefined1 *local_f0;
   undefined1 local_e0[24];
   undefined8 local_c8;
   ulong *local_c0;
   undefined8 local_b8;
   ulong local_b0[3];
   undefined8 local_98;
   ulong *local_90;
   undefined8 local_88;
   ulong local_80[4];
   ulong *local_60;
   undefined8 local_58;
   ulong local_50[4];
   local_50[2] = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 < 1) {
      uVar13 = 0;
   }
 else {
      ppcVar2 = param_3 + param_2;
      ppcVar12 = param_3;
      do {
         iVar4 = ( **(code**)( *(long*)this + 0x38 ) )(this, *ppcVar12);
         if (iVar4 - 1U < 2) {
            uVar13 = 1;
            goto LAB_00103ce5;
         }

         ppcVar12 = ppcVar12 + 1;
      }
 while ( ppcVar12 != ppcVar2 );
      uVar13 = 0;
      do {
         iVar4 = ( **(code**)( *(long*)this + 0x38 ) )(this, *param_3);
         if (iVar4 == 4) {
            if (( (byte)this[0xd0] & 1 ) != 0) {
               TInfoSinkBase::message(*(TInfoSinkBase**)( this + 0x10 ), 1, "The following extension must be enabled to use this feature:", param_1);
               LAB_00103d39:pTVar3 = *(TInfoSinkBase**)( this + 0x10 );
               local_f8 = glslang::GetThreadPoolAllocator();
               __s = *param_3;
               local_f0 = local_e0;
               if (__s == (char*)0x0) {
                  /* WARNING: Subroutine does not return */
                  std::__throw_logic_error("basic_string: construction from null is not valid");
               }

               sVar5 = strlen(__s);
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_f8, __s, __s + sVar5);
               puVar6 = (undefined8*)std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_f8, 0, 0, "extension ", 10);
               local_c8 = *puVar6;
               puVar1 = puVar6 + 3;
               local_c0 = local_b0;
               if ((ulong*)puVar6[1] == puVar1) {
                  uVar9 = puVar6[2];
                  uVar11 = uVar9 + 1;
                  uVar8 = (uint)uVar11;
                  if (7 < uVar8) {
                     *(undefined8*)( (long)local_b0 + ( ( uVar11 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)puVar6 + ( uVar11 & 0xffffffff ) + 0x10 );
                     if (7 < uVar8 - 1) {
                        uVar10 = 0;
                        do {
                           uVar11 = (ulong)uVar10;
                           uVar10 = uVar10 + 8;
                           *(undefined8*)( (long)local_b0 + uVar11 ) = *(undefined8*)( (long)puVar1 + uVar11 );
                        }
 while ( uVar10 < ( uVar8 - 1 & 0xfffffff8 ) );
                     }

                     goto LAB_00103dc9;
                  }

                  if (( uVar11 & 4 ) == 0) {
                     if (uVar8 != 0) {
                        local_b0[0] = CONCAT71(local_b0[0]._1_7_, *(undefined1*)( puVar6 + 3 ));
                        if (( uVar11 & 2 ) == 0) goto LAB_00103dc9;
                        *(undefined2*)( (long)local_b0 + ( ( uVar11 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)puVar6 + ( uVar11 & 0xffffffff ) + 0x16 );
                        uVar9 = puVar6[2];
                     }

                  }
 else {
                     local_b0[0] = CONCAT44(local_b0[0]._4_4_, *(undefined4*)( puVar6 + 3 ));
                     *(undefined4*)( (long)local_b0 + ( ( uVar11 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)puVar6 + ( uVar11 & 0xffffffff ) + 0x14 );
                     uVar9 = puVar6[2];
                  }

               }
 else {
                  local_b0[0] = puVar6[3];
                  local_c0 = (ulong*)puVar6[1];
                  LAB_00103dc9:uVar9 = puVar6[2];
               }

               puVar6[1] = puVar1;
               puVar6[2] = 0;
               *(undefined1*)( puVar6 + 3 ) = 0;
               uVar13 = _UNK_0010cdf8;
               local_b8 = uVar9;
               if (0x7fffffffffffffff - uVar9 < 0x13) {
                  LAB_0010429a:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
               }

               uVar11 = uVar9 + 0x13;
               uVar7 = local_b0[0];
               if (local_c0 == local_b0) {
                  uVar7 = 0xf;
               }

               if (uVar7 < uVar11) {
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_c8, uVar9, 0, " is being used for ", 0x13);
               }
 else {
                  puVar6 = (undefined8*)( (long)local_c0 + uVar9 );
                  *puVar6 = __LC163;
                  puVar6[1] = uVar13;
                  *(undefined4*)( (long)puVar6 + 0xf ) = 0x20726f66;
               }

               local_b8 = uVar11;
               *(undefined1*)( (long)local_c0 + uVar11 ) = 0;
               local_90 = local_80;
               local_98 = local_c8;
               if (local_c0 == local_b0) {
                  uVar9 = uVar9 + 0x14;
                  uVar8 = (uint)uVar9;
                  if (uVar8 < 8) {
                     if (( uVar9 & 4 ) == 0) {
                        if (uVar8 != 0) {
                           local_80[0] = CONCAT71(local_80[0]._1_7_, (undefined1)local_b0[0]);
                           if (( uVar9 & 2 ) != 0) {
                              *(undefined2*)( (long)local_80 + ( ( uVar9 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)local_b0 + ( ( uVar9 & 0xffffffff ) - 2 ) );
                           }

                        }

                     }
 else {
                        local_80[0] = CONCAT44(local_80[0]._4_4_, (undefined4)local_b0[0]);
                        *(undefined4*)( (long)local_80 + ( ( uVar9 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)local_b0 + ( ( uVar9 & 0xffffffff ) - 4 ) );
                     }

                  }
 else {
                     *(undefined8*)( (long)local_80 + ( ( uVar9 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)local_b0 + ( ( uVar9 & 0xffffffff ) - 8 ) );
                     if (7 < uVar8 - 1) {
                        uVar10 = 0;
                        do {
                           uVar9 = (ulong)uVar10;
                           uVar10 = uVar10 + 8;
                           *(undefined8*)( (long)local_80 + uVar9 ) = *(undefined8*)( (long)local_c0 + uVar9 );
                        }
 while ( uVar10 < ( uVar8 - 1 & 0xfffffff8 ) );
                     }

                  }

               }
 else {
                  local_90 = local_c0;
                  local_80[0] = local_b0[0];
               }

               local_b8 = 0;
               local_b0[0] = local_b0[0] & 0xffffffffffffff00;
               local_c0 = local_b0;
               local_88 = uVar11;
               sVar5 = strlen(param_4);
               if (0x7fffffffffffffff - uVar11 < sVar5) goto LAB_0010429a;
               uVar9 = uVar11 + sVar5;
               uVar7 = local_80[0];
               if (local_90 == local_80) {
                  uVar7 = 0xf;
               }

               if (uVar7 < uVar9) {
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_98, uVar11, 0, param_4, sVar5);
               }
 else if (sVar5 != 0) {
                  if (sVar5 == 1) {
                     *(char*)( (long)local_90 + uVar11 ) = *param_4;
                  }
 else {
                     memcpy((char*)( (long)local_90 + uVar11 ), param_4, sVar5);
                  }

               }

               local_88 = uVar9;
               *(undefined1*)( (long)local_90 + uVar9 ) = 0;
               local_80[3] = local_98;
               local_60 = local_50;
               if (local_90 == local_80) {
                  uVar11 = uVar9 + 1;
                  uVar8 = (uint)uVar11;
                  if (uVar8 < 8) {
                     if (( uVar11 & 4 ) == 0) {
                        if (uVar8 != 0) {
                           local_50[0] = CONCAT71(local_50[0]._1_7_, (undefined1)local_80[0]);
                           if (( uVar11 & 2 ) != 0) {
                              *(undefined2*)( (long)local_50 + ( ( uVar11 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)local_80 + ( ( uVar11 & 0xffffffff ) - 2 ) );
                           }

                        }

                     }
 else {
                        local_50[0] = CONCAT44(local_50[0]._4_4_, (undefined4)local_80[0]);
                        *(undefined4*)( (long)local_50 + ( ( uVar11 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)local_80 + ( ( uVar11 & 0xffffffff ) - 4 ) );
                     }

                  }
 else {
                     *(undefined8*)( (long)local_50 + ( ( uVar11 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)local_80 + ( ( uVar11 & 0xffffffff ) - 8 ) );
                     if (7 < uVar8 - 1) {
                        uVar10 = 0;
                        do {
                           uVar11 = (ulong)uVar10;
                           uVar10 = uVar10 + 8;
                           *(undefined8*)( (long)local_60 + uVar11 ) = *(undefined8*)( (long)local_90 + uVar11 );
                        }
 while ( uVar10 < ( uVar8 - 1 & 0xfffffff8 ) );
                     }

                  }

               }
 else {
                  local_50[0] = local_80[0];
                  local_60 = local_90;
               }

               uVar13 = 1;
               local_88 = 0;
               local_80[0] = local_80[0] & 0xffffffffffffff00;
               local_90 = local_80;
               local_58 = uVar9;
               TInfoSinkBase::message(pTVar3, 1, local_60, param_1);
            }

         }
 else if (iVar4 == 3) goto LAB_00103d39;
         param_3 = param_3 + 1;
      }
 while ( param_3 != ppcVar2 );
   }

   LAB_00103ce5:if (local_50[2] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar13;
}
/* glslang::TParseVersions::requireInt8Arithmetic(glslang::TSourceLoc const&, char const*, char
   const*) */void glslang::TParseVersions::requireInt8Arithmetic(TParseVersions *this, TSourceLoc *param_1, char *param_2, char *param_3) {
   ulong uVar1;
   size_t sVar2;
   ulong uVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   char *local_78;
   char *pcStack_70;
   undefined8 local_68;
   undefined1 *local_60;
   ulong local_58;
   undefined1 local_50;
   undefined7 uStack_4f;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = glslang::GetThreadPoolAllocator();
   local_58 = 0;
   local_50 = 0;
   local_60 = &local_50;
   sVar2 = strlen(param_2);
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, 0, 0, param_2, sVar2);
   uVar1 = local_58;
   if (1 < 0x7fffffffffffffff - local_58) {
      uVar3 = local_58 + 2;
      if (local_60 == &local_50) {
         uVar4 = 0xf;
      }
 else {
         uVar4 = CONCAT71(uStack_4f, local_50);
      }

      if (uVar4 < uVar3) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, local_58, 0, ": ", 2);
      }
 else {
         *(undefined2*)( local_60 + local_58 ) = 0x203a;
      }

      local_60[uVar1 + 2] = 0;
      local_58 = uVar3;
      sVar2 = strlen(param_3);
      if (sVar2 <= 0x7fffffffffffffff - local_58) {
         uVar1 = sVar2 + local_58;
         if (local_60 == &local_50) {
            uVar3 = 0xf;
         }
 else {
            uVar3 = CONCAT71(uStack_4f, local_50);
         }

         if (uVar3 < uVar1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, local_58, 0, param_3, sVar2);
         }
 else if (sVar2 != 0) {
            if (sVar2 == 1) {
               local_60[local_58] = *param_3;
            }
 else {
               memcpy(local_60 + local_58, param_3, sVar2);
            }

         }

         local_60[uVar1] = 0;
         local_78 = "GL_EXT_shader_explicit_arithmetic_types";
         pcStack_70 = "GL_EXT_shader_explicit_arithmetic_types_int8";
         local_58 = uVar1;
         ( **(code**)( *(long*)this + 0x28 ) )(this, param_1, 2, &local_78, local_60);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

   }

   /* WARNING: Subroutine does not return */
   std::__throw_length_error("basic_string::append");
}
/* glslang::TParseVersions::requireInt16Arithmetic(glslang::TSourceLoc const&, char const*, char
   const*) */void glslang::TParseVersions::requireInt16Arithmetic(TParseVersions *this, TSourceLoc *param_1, char *param_2, char *param_3) {
   ulong uVar1;
   size_t sVar2;
   ulong uVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   char *local_88;
   char *pcStack_80;
   char *local_78;
   undefined8 local_68;
   undefined1 *local_60;
   ulong local_58;
   undefined1 local_50;
   undefined7 uStack_4f;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = glslang::GetThreadPoolAllocator();
   local_58 = 0;
   local_50 = 0;
   local_60 = &local_50;
   sVar2 = strlen(param_2);
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, 0, 0, param_2, sVar2);
   uVar1 = local_58;
   if (1 < 0x7fffffffffffffff - local_58) {
      uVar3 = local_58 + 2;
      if (local_60 == &local_50) {
         uVar4 = 0xf;
      }
 else {
         uVar4 = CONCAT71(uStack_4f, local_50);
      }

      if (uVar4 < uVar3) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, local_58, 0, ": ", 2);
      }
 else {
         *(undefined2*)( local_60 + local_58 ) = 0x203a;
      }

      local_60[uVar1 + 2] = 0;
      local_58 = uVar3;
      sVar2 = strlen(param_3);
      if (sVar2 <= 0x7fffffffffffffff - local_58) {
         uVar1 = sVar2 + local_58;
         if (local_60 == &local_50) {
            uVar3 = 0xf;
         }
 else {
            uVar3 = CONCAT71(uStack_4f, local_50);
         }

         if (uVar3 < uVar1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, local_58, 0, param_3, sVar2);
         }
 else if (sVar2 != 0) {
            if (sVar2 == 1) {
               local_60[local_58] = *param_3;
            }
 else {
               memcpy(local_60 + local_58, param_3, sVar2);
            }

         }

         local_60[uVar1] = 0;
         local_78 = "GL_EXT_shader_explicit_arithmetic_types_int16";
         local_88 = "GL_AMD_gpu_shader_int16";
         pcStack_80 = "GL_EXT_shader_explicit_arithmetic_types";
         local_58 = uVar1;
         ( **(code**)( *(long*)this + 0x28 ) )(this, param_1, 3, &local_88, local_60);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

   }

   /* WARNING: Subroutine does not return */
   std::__throw_length_error("basic_string::append");
}
/* glslang::TParseVersions::initializeExtensionBehavior() */void glslang::TParseVersions::initializeExtensionBehavior(TParseVersions *this) {
   map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>> *this_00;
   int iVar1;
   ulong *puVar2;
   char *__s;
   undefined1 *__src;
   undefined4 *puVar3;
   ulong uVar4;
   size_t sVar5;
   int *piVar6;
   ulong *__dest;
   char **ppcVar7;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined1 *local_a0;
   ulong local_98;
   undefined1 local_90[24];
   char *local_78;
   undefined4 local_70[2];
   char *local_68;
   undefined4 local_60;
   char *local_58;
   undefined4 local_50;
   char *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ppcVar7 = &local_78;
   local_70[0] = 0x10400;
   local_60 = 0x10400;
   local_50 = 0x10400;
   local_78 = "GL_EXT_ray_tracing";
   local_68 = "GL_NV_ray_tracing_motion_blur";
   local_58 = "GL_EXT_mesh_shader";
   do {
      iVar1 = *(int*)( ppcVar7 + 1 );
      if (0x10000 < iVar1) {
         local_a8 = glslang::GetThreadPoolAllocator();
         __s = *ppcVar7;
         if (__s == (char*)0x0) {
            local_a0 = local_90;
            /* WARNING: Subroutine does not return */
            std::__throw_logic_error("basic_string: construction from null is not valid");
         }

         local_a0 = local_90;
         sVar5 = strlen(__s);
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, __s, __s + sVar5);
         piVar6 = (int*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,unsigned_int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>>::operator []((map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,unsigned_int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>>*)( this + 0x78 ), (basic_string*)&local_a8);
         *piVar6 = iVar1;
      }

      ppcVar7 = ppcVar7 + 2;
   }
 while ( &local_48 != ppcVar7 );
   local_a8 = glslang::GetThreadPoolAllocator();
   this_00 = (map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>*)( this + 0x40 );
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OES_texture_3D");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OES_standard_derivatives");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_frag_depth");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OES_EGL_image_external");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OES_EGL_image_external_essl3");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_YUV_target");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_texture_lod");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shadow_samplers");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_texture_rectangle");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_3DL_array_objects");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_shading_language_420pack");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_texture_gather");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_gpu_shader5");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 5;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_separate_shader_objects");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_compute_shader");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_tessellation_shader");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_enhanced_layouts");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_texture_cube_map_array");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_texture_multisample");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_shader_texture_lod");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_explicit_attrib_location");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_explicit_uniform_location");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_shader_image_load_store");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_shader_atomic_counters");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_shader_atomic_counter_ops");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_shader_draw_parameters");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_shader_group_vote");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_derivative_control");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_shader_texture_image_samples");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_viewport_array");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_gpu_shader_int64");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_gpu_shader_fp64");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_shader_ballot");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_sparse_texture2");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_sparse_texture_clamp");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_shader_stencil_export");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_post_depth_coverage");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_shader_viewport_layer_array");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_fragment_shader_interlock");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_shader_clock");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_uniform_buffer_object");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_sample_shading");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_shader_bit_encoding");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_shader_image_size");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_shader_storage_buffer_object");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_shading_language_packing");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_texture_query_lod");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_vertex_attrib_64bit");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_draw_instanced");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_bindless_texture", "");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_fragment_coord_conventions");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_KHR_shader_subgroup_basic");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_KHR_shader_subgroup_vote");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_KHR_shader_subgroup_arithmetic");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_KHR_shader_subgroup_ballot");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_KHR_shader_subgroup_shuffle");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_KHR_shader_subgroup_shuffle_relative");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_KHR_shader_subgroup_rotate");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_KHR_shader_subgroup_clustered");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_KHR_shader_subgroup_quad");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_KHR_memory_scope_semantics");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_atomic_int64");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_non_constant_global_initializers");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_image_load_formatted");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_post_depth_coverage");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_control_flow_attributes");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_nonuniform_qualifier");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_samplerless_texture_functions");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_scalar_block_layout");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_fragment_invocation_density");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_buffer_reference");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_buffer_reference2");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_buffer_reference_uvec2");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_demote_to_helper_invocation");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_debug_printf");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_16bit_storage");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_8bit_storage");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_subgroup_uniform_control_flow");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_maximal_reconvergence");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_fragment_shader_barycentric");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_expect_assume");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_control_flow_attributes2");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_KHR_cooperative_matrix");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_GOOGLE_cpp_style_line_directive");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_GOOGLE_include_directive");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_shading_language_include");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_AMD_shader_ballot");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_AMD_shader_trinary_minmax");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_AMD_shader_explicit_vertex_parameter");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_AMD_gcn_shader");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_AMD_gpu_shader_half_float");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_AMD_texture_gather_bias_lod");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_AMD_gpu_shader_int16");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_AMD_shader_image_load_store_lod");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_AMD_shader_fragment_mask");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_AMD_gpu_shader_half_float_fetch");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_AMD_shader_early_and_late_fragment_tests");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_INTEL_shader_integer_functions2");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_sample_mask_override_coverage");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_geometry_shader_passthrough");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_viewport_array2");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_stereo_view_rendering");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NVX_multiview_per_view_attributes");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_shader_atomic_int64");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_conservative_raster_underestimation");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_shader_noperspective_interpolation");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_shader_subgroup_partitioned");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_shading_rate_image");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_ray_tracing");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_ray_tracing_motion_blur");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_fragment_shader_barycentric");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_compute_shader_derivatives");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_shader_texture_footprint");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_mesh_shader");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_cooperative_matrix");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_shader_sm_builtins");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_integer_cooperative_matrix");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_shader_invocation_reorder");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_displacement_micromap");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_NV_shader_atomic_fp16_vector");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARM_shader_core_builtins");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_QCOM_image_processing");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_QCOM_image_processing2");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ANDROID_extension_pack_es31a");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_KHR_blend_equation_advanced");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OES_sample_variables");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OES_shader_image_atomic");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OES_shader_multisample_interpolation");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OES_texture_storage_multisample_2d_array");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_geometry_shader");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_geometry_point_size");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_gpu_shader5");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_primitive_bounding_box");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_io_blocks");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_tessellation_shader");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_tessellation_point_size");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_texture_buffer");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_texture_cube_map_array");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_null_initializer");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OES_geometry_shader");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OES_geometry_point_size");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OES_gpu_shader5");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OES_primitive_bounding_box");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OES_shader_io_blocks");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OES_tessellation_shader");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OES_tessellation_point_size");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OES_texture_buffer");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OES_texture_cube_map_array");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_integer_mix");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_device_group");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_multiview");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_realtime_clock");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_ray_tracing");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_ray_query");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_ray_flags_primitive_culling");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_ray_cull_mask");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_blend_func_extended");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_implicit_conversions");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_fragment_shading_rate");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_image_int64");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_terminate_invocation");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shared_memory_block");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_spirv_intrinsics");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_mesh_shader");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_opacity_micromap");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_quad_control");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_ray_tracing_position_fetch");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_tile_image");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_texture_shadow_lod");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_draw_instanced");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_texture_array");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OVR_multiview");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_OVR_multiview2");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_explicit_arithmetic_types");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_explicit_arithmetic_types_int8");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_explicit_arithmetic_types_int16");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_explicit_arithmetic_types_int32");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_explicit_arithmetic_types_int64");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_explicit_arithmetic_types_float16");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_explicit_arithmetic_types_float32");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_explicit_arithmetic_types_float64");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_subgroup_extended_types_int8");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_subgroup_extended_types_int16");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_subgroup_extended_types_int64");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_subgroup_extended_types_float16");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_atomic_float");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_EXT_shader_atomic_float2");
   puVar3 = (undefined4*)std::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](this_00, (basic_string*)&local_a8);
   *puVar3 = 4;
   local_a8 = glslang::GetThreadPoolAllocator();
   local_a0 = local_90;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string*)&local_a8, "GL_ARB_bindless_texture", "");
   puVar2 = *(ulong**)( this + 0xc0 );
   if (puVar2 == *(ulong**)( this + 200 )) {
      std::vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>::_M_realloc_insert<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>((vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>*)( this + 0xb0 ), puVar2, &local_a8);
      goto LAB_00106d96;
   }

   uVar4 = glslang::GetThreadPoolAllocator();
   __src = local_a0;
   __dest = puVar2 + 3;
   puVar2[1] = (ulong)__dest;
   *puVar2 = uVar4;
   if (local_98 < 0x10) {
      if (local_98 == 1) {
         *(undefined1*)( puVar2 + 3 ) = *local_a0;
      }
 else if (local_98 != 0) goto LAB_00106e34;
   }
 else {
      if ((long)local_98 < 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("basic_string::_M_create");
      }

      __dest = (ulong*)glslang::TPoolAllocator::allocate(uVar4);
      puVar2[3] = local_98;
      puVar2[1] = (ulong)__dest;
      LAB_00106e34:memcpy(__dest, __src, local_98);
      __dest = (ulong*)puVar2[1];
   }

   puVar2[2] = local_98;
   *(undefined1*)( (long)__dest + local_98 ) = 0;
   *(long*)( this + 0xc0 ) = *(long*)( this + 0xc0 ) + 0x28;
   LAB_00106d96:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* glslang::TIntermediate::addRequestedExtension(char const*) */void glslang::TIntermediate::addRequestedExtension(TIntermediate *this, char *param_1) {
   bool bVar1;
   uint uVar2;
   int iVar3;
   size_t __n;
   _Rb_tree_node_base *p_Var4;
   ulong uVar5;
   _Rb_tree_node_base *p_Var6;
   ulong uVar7;
   long lVar8;
   uint uVar9;
   size_t *psVar10;
   _Rb_tree_node_base *p_Var11;
   ulong uVar12;
   ulong uVar13;
   void *__s2;
   _Rb_tree_node_base *p_Var14;
   long in_FS_OFFSET;
   size_t *local_88;
   ulong local_70;
   size_t *local_68;
   undefined8 local_60;
   size_t local_58[5];
   local_58[3] = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = local_58;
   if (param_1 == (char*)0x0) {
      /* WARNING: Subroutine does not return */
      std::__throw_logic_error("basic_string: construction from null is not valid");
   }

   __n = strlen(param_1);
   local_70 = __n;
   if (__n < 0x10) {
      psVar10 = local_58;
      if (__n == 1) {
         local_58[0] = CONCAT71(local_58[0]._1_7_, *param_1);
      }
 else if (__n != 0) goto LAB_0010aaa6;
   }
 else {
      local_68 = (size_t*)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_70);
      local_58[0] = local_70;
      psVar10 = local_68;
      LAB_0010aaa6:memcpy(psVar10, param_1, __n);
      psVar10 = local_68;
   }

   local_88 = local_68;
   uVar12 = local_70;
   *(undefined1*)( (long)psVar10 + local_70 ) = 0;
   p_Var4 = (_Rb_tree_node_base*)( this + 0x90 );
   p_Var11 = *(_Rb_tree_node_base**)( this + 0x98 );
   local_60 = local_70;
   if (*(_Rb_tree_node_base**)( this + 0x98 ) == (_Rb_tree_node_base*)0x0) {
      p_Var14 = p_Var4;
      if (p_Var4 != *(_Rb_tree_node_base**)( this + 0xa0 )) {
         LAB_0010aa52:lVar8 = std::_Rb_tree_decrement(p_Var14);
         uVar13 = *(ulong*)( lVar8 + 0x28 );
         __s2 = *(void**)( lVar8 + 0x20 );
         uVar7 = uVar12;
         if (uVar13 <= uVar12) {
            uVar7 = uVar13;
         }

         LAB_0010a921:if (( uVar7 == 0 ) || ( iVar3 = iVar3 == 0 )) {
            lVar8 = uVar13 - uVar12;
            if (0x7fffffff < lVar8) goto LAB_0010a9e8;
            if (lVar8 < -0x80000000) goto LAB_0010a95e;
            iVar3 = (int)lVar8;
         }

         if (-1 < iVar3) goto LAB_0010a9e8;
         goto LAB_0010a95e;
      }

      LAB_0010a969:p_Var6 = (_Rb_tree_node_base*)operator_new(0x40);
      p_Var11 = p_Var6 + 0x30;
      *(_Rb_tree_node_base**)( p_Var6 + 0x20 ) = p_Var11;
      if (local_68 != local_58) {
         bVar1 = true;
         goto LAB_0010a995;
      }

      bVar1 = true;
      LAB_0010ab30:uVar12 = local_60 + 1;
      uVar2 = (uint)uVar12;
      if (uVar2 < 8) {
         if (( uVar12 & 4 ) == 0) {
            if (uVar2 != 0) {
               *p_Var11 = local_58[0]._0_1_;
               if (( uVar12 & 2 ) != 0) {
                  *(undefined2*)( p_Var11 + ( ( uVar12 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)local_58 + ( ( uVar12 & 0xffffffff ) - 2 ) );
               }

            }

         }
 else {
            *(undefined4*)p_Var11 = (undefined4)local_58[0];
            *(undefined4*)( p_Var11 + ( ( uVar12 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)local_58 + ( ( uVar12 & 0xffffffff ) - 4 ) );
         }

      }
 else {
         *(size_t*)p_Var11 = local_58[0];
         *(undefined8*)( p_Var11 + ( ( uVar12 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)local_58 + ( ( uVar12 & 0xffffffff ) - 8 ) );
         lVar8 = (long)p_Var11 - ( ( ulong )(p_Var11 + 8) & 0xfffffffffffffff8 );
         uVar2 = uVar2 + (int)lVar8 & 0xfffffff8;
         if (7 < uVar2) {
            uVar12 = 0;
            do {
               uVar9 = (int)uVar12 + 8;
               *(undefined8*)( ( ( ulong )(p_Var11 + 8) & 0xfffffffffffffff8 ) + uVar12 ) = *(undefined8*)( (long)local_58 + ( uVar12 - lVar8 ) );
               uVar12 = (ulong)uVar9;
            }
 while ( uVar9 < uVar2 );
         }

      }

   }
 else {
      do {
         p_Var14 = p_Var11;
         uVar13 = *(ulong*)( p_Var14 + 0x28 );
         __s2 = *(void**)( p_Var14 + 0x20 );
         uVar7 = uVar13;
         if (uVar12 <= uVar13) {
            uVar7 = uVar12;
         }

         if (uVar7 == 0) {
            LAB_0010a8ea:uVar5 = uVar12 - uVar13;
            if ((long)uVar5 < 0x80000000) {
               if (-0x80000001 < (long)uVar5) goto LAB_0010a909;
               goto LAB_0010a8b0;
            }

            LAB_0010a90d:p_Var11 = *(_Rb_tree_node_base**)( p_Var14 + 0x18 );
            bVar1 = false;
         }
 else {
            uVar2 = memcmp(local_88, __s2, uVar7);
            uVar5 = (ulong)uVar2;
            if (uVar2 == 0) goto LAB_0010a8ea;
            LAB_0010a909:if (-1 < (int)uVar5) goto LAB_0010a90d;
            LAB_0010a8b0:p_Var11 = *(_Rb_tree_node_base**)( p_Var14 + 0x10 );
            bVar1 = true;
         }

      }
 while ( p_Var11 != (_Rb_tree_node_base*)0x0 );
      if (!bVar1) goto LAB_0010a921;
      if (*(_Rb_tree_node_base**)( this + 0xa0 ) != p_Var14) goto LAB_0010aa52;
      LAB_0010a95e:if (p_Var4 == p_Var14) goto LAB_0010a969;
      uVar13 = *(ulong*)( p_Var14 + 0x28 );
      uVar7 = uVar13;
      if (uVar12 <= uVar13) {
         uVar7 = uVar12;
      }

      if (uVar7 == 0) {
         LAB_0010aae3:bVar1 = false;
         uVar7 = uVar12 - uVar13;
         if ((long)uVar7 < 0x80000000) {
            if (-0x80000001 < (long)uVar7) goto LAB_0010aaff;
            bVar1 = true;
         }

      }
 else {
         uVar2 = memcmp(local_88, *(void**)( p_Var14 + 0x20 ), uVar7);
         uVar7 = (ulong)uVar2;
         if (uVar2 == 0) goto LAB_0010aae3;
         LAB_0010aaff:bVar1 = (bool)( ( byte )(uVar7 >> 0x1f) & 1 );
      }

      p_Var6 = (_Rb_tree_node_base*)operator_new(0x40);
      p_Var11 = p_Var6 + 0x30;
      *(_Rb_tree_node_base**)( p_Var6 + 0x20 ) = p_Var11;
      if (local_68 == local_58) goto LAB_0010ab30;
      LAB_0010a995:*(size_t**)( p_Var6 + 0x20 ) = local_68;
      *(size_t*)( p_Var6 + 0x30 ) = local_58[0];
   }

   *(ulong*)( p_Var6 + 0x28 ) = local_60;
   local_58[0] = local_58[0] & 0xffffffffffffff00;
   local_60 = 0;
   local_68 = local_58;
   std::_Rb_tree_insert_and_rebalance(bVar1, p_Var6, p_Var14, p_Var4);
   *(long*)( this + 0xb0 ) = *(long*)( this + 0xb0 ) + 1;
   local_88 = local_68;
   LAB_0010a9e8:if (local_88 != local_58) {
      operator_delete(local_88, local_58[0] + 1);
   }

   if (local_58[3] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TExtensionBehavior>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TExtensionBehavior> >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TExtensionBehavior> >
   >::find(std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> >
   const&) */_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>> * __thiscallstd::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::find(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>> * this, basic_string * param_1) < std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> < glslang::TExtensionBehavior > std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>> < std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> > glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>> > *p_Var1 ;_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>> *p_Var2void *__s2ulong uVar3ulong uVar4int iVar5ulong uVar6long lVar7_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>> *p_Var8_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>> *p_Var9p_Var1 = this + 0x10;p_Var8 = p_Var1;if (*(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>**)( this + 0x18 ) != (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>*)0x0) {
   __s2 = *(void**)( param_1 + 8 );
   uVar3 = *(ulong*)( param_1 + 0x10 );
   p_Var9 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>**)( this + 0x18 );
   do {
      while (true) {
         uVar4 = *(ulong*)( p_Var9 + 0x30 );
         uVar6 = uVar3;
         if (uVar4 <= uVar3) {
            uVar6 = uVar4;
         }

         if (( uVar6 != 0 ) && ( iVar5 = memcmp(*(void**)( p_Var9 + 0x28 ), __s2, uVar6) ),iVar5 != 0) break;
         lVar7 = uVar4 - uVar3;
         if (lVar7 < 0x80000000) {
            if (-0x80000001 < lVar7) {
               iVar5 = (int)lVar7;
               break;
            }

            goto LAB_0010acf0;
         }

         LAB_0010ad39:p_Var2 = p_Var9 + 0x10;
         p_Var8 = p_Var9;
         p_Var9 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>**)p_Var2;
         if (*(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>**)p_Var2 == (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>*)0x0) goto LAB_0010ad45;
      }
;
      if (-1 < iVar5) goto LAB_0010ad39;
      LAB_0010acf0:p_Var9 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>**)( p_Var9 + 0x18 );
   }
 while ( p_Var9 != (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>*)0x0 );
   LAB_0010ad45:if (p_Var1 != p_Var8) {
      uVar4 = *(ulong*)( p_Var8 + 0x30 );
      uVar6 = uVar3;
      if (uVar4 <= uVar3) {
         uVar6 = uVar4;
      }

      if (( uVar6 == 0 ) || ( iVar5 = memcmp(__s2, *(void**)( p_Var8 + 0x28 ), uVar6) ),iVar5 == 0) {
         lVar7 = uVar3 - uVar4;
         if (0x7fffffff < lVar7) {
            return p_Var8;
         }

         if (lVar7 < -0x80000000) {
            return p_Var1;
         }

         iVar5 = (int)lVar7;
      }

      if (iVar5 < 0) {
         p_Var8 = p_Var1;
      }

   }

}
return p_Var8;}/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_mutate(unsigned long, unsigned long, char const*, unsigned long) */void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this, ulong param_1, ulong param_2, char *param_3, ulong param_4) {
   undefined1 *__dest;
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   size_t __n;
   undefined1 *__src;
   uVar3 = ( param_4 - param_2 ) + *(long*)( this + 0x10 );
   __n = *(long*)( this + 0x10 ) - ( param_1 + param_2 );
   if (*(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 ) == this + 0x18) {
      uVar1 = 0xf;
   }
 else {
      uVar1 = *(ulong*)( this + 0x18 );
   }

   if (-1 < (long)uVar3) {
      if (uVar1 < uVar3) {
         uVar1 = uVar1 * 2;
         uVar2 = 0x7fffffffffffffff;
         if (uVar1 < 0x8000000000000000) {
            uVar2 = uVar1;
         }

         if (uVar3 < uVar1) {
            uVar3 = uVar2;
         }

      }

      __dest = (undefined1*)glslang::TPoolAllocator::allocate(*(ulong*)this);
      if (param_1 != 0) {
         if (param_1 == 1) {
            *__dest = **(undefined1**)( this + 8 );
         }
 else {
            __dest = (undefined1*)memcpy(__dest, *(undefined1**)( this + 8 ), param_1);
         }

      }

      if (( param_3 != (char*)0x0 ) && ( param_4 != 0 )) {
         if (param_4 == 1) {
            __dest[param_1] = *param_3;
         }
 else {
            memcpy(__dest + param_1, param_3, param_4);
         }

      }

      if (__n != 0) {
         __src = (undefined1*)( param_1 + param_2 + *(long*)( this + 8 ) );
         if (__n == 1) {
            __dest[param_1 + param_4] = *__src;
         }
 else {
            memcpy(__dest + param_1 + param_4, __src, __n);
         }

      }

      *(undefined1**)( this + 8 ) = __dest;
      *(ulong*)( this + 0x18 ) = uVar3;
      return;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_length_error("basic_string::_M_create");
}
/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_append(char const*, unsigned long) */basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> * __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          char *param_1,ulong param_2){
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar4;
   uVar2 = *(ulong*)( this + 0x10 );
   pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
   uVar1 = param_2 + uVar2;
   if (pbVar4 == this + 0x18) {
      uVar3 = 0xf;
   }
 else {
      uVar3 = *(ulong*)( this + 0x18 );
   }

   if (uVar3 < uVar1) {
      _M_mutate(this, uVar2, 0, param_1, param_2);
      pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
   }
 else if (param_2 != 0) {
      if (param_2 == 1) {
         pbVar4[uVar2] = ( basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> ) * param_1;
         pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
      }
 else {
         memcpy(pbVar4 + uVar2, param_1, param_2);
         pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
      }

   }

   *(ulong*)( this + 0x10 ) = uVar1;
   pbVar4[uVar1] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
   return this;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* glslang::TInfoSinkBase::message(glslang::TPrefixType, char const*, glslang::TSourceLoc const&) */void glslang::TInfoSinkBase::message(TInfoSinkBase *this, undefined4 param_2, undefined8 param_3, long *param_4) {
   uint uVar1;
   undefined1 *__src;
   undefined1 auVar2[16];
   ulong *__src_00;
   int iVar3;
   size_t __n;
   uint uVar4;
   size_t *psVar5;
   ulong uVar6;
   size_t *psVar8;
   long lVar9;
   ulong uVar10;
   char cVar11;
   char *pcVar12;
   long in_FS_OFFSET;
   size_t local_1b0;
   size_t *local_1a8;
   size_t local_1a0;
   size_t local_198[2];
   size_t *local_188;
   size_t local_180;
   size_t local_178[2];
   ulong local_168;
   ulong *local_160;
   ulong local_158;
   ulong local_150[3];
   undefined1 local_138[32];
   undefined8 local_118;
   undefined8 uStack_110;
   undefined8 local_108;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined1 uStack_60;
   undefined7 uStack_5f;
   char cStack_58;
   char acStack_57[23];
   long local_40;
   ulong uVar7;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (param_2) {
      case 0:
    break;
      case 1:
    glslang::TInfoSinkBase::append((char *)this);
    break;
      case 2:
    glslang::TInfoSinkBase::append((char *)this);
    break;
      case 3:
    glslang::TInfoSinkBase::append((char *)this);
    break;
      case 4:
    glslang::TInfoSinkBase::append((char *)this);
    break;
      case 5:
    glslang::TInfoSinkBase::append((char *)this);
    break;
      default:
    glslang::TInfoSinkBase::append((char *)this);
   }

   __snprintf_chk(local_138, 0x18, 2, 0x18, &_LC137, *(undefined4*)( (long)param_4 + 0xc ), param_3);
   lVar9 = *param_4;
   if (lVar9 != 0) {
      local_168 = glslang::GetThreadPoolAllocator();
      uVar10 = *(ulong*)( lVar9 + 0x10 );
      local_160 = local_150;
      __src = *(undefined1**)( lVar9 + 8 );
      if (uVar10 < 0x10) {
         if (uVar10 == 1) {
            local_150[0] = CONCAT71(local_150[0]._1_7_, *__src);
         }
 else if (uVar10 != 0) goto LAB_0010b232;
      }
 else {
         if ((long)uVar10 < 0) {
            /* WARNING: Subroutine does not return */
            std::__throw_length_error("basic_string::_M_create");
         }

         local_160 = (ulong*)glslang::TPoolAllocator::allocate(local_168);
         local_150[0] = uVar10;
         LAB_0010b232:memcpy(local_160, __src, uVar10);
      }

      __src_00 = local_160;
      psVar8 = local_178;
      *(undefined1*)( (long)local_160 + uVar10 ) = 0;
      local_188 = psVar8;
      local_158 = uVar10;
      if (local_160 == (ulong*)0x0) {
         /* WARNING: Subroutine does not return */
         std::__throw_logic_error("basic_string: construction from null is not valid");
      }

      __n = strlen((char*)local_160);
      local_1b0 = __n;
      if (__n < 0x10) {
         psVar5 = psVar8;
         if (__n == 1) {
            local_178[0] = CONCAT71(local_178[0]._1_7_, (char)*__src_00);
         }
 else if (__n != 0) goto LAB_0010b271;
      }
 else {
         local_188 = (size_t*)std::__cxx11::string::_M_create((ulong*)&local_188, ( ulong ) & local_1b0);
         local_178[0] = local_1b0;
         psVar5 = local_188;
         LAB_0010b271:memcpy(psVar5, __src_00, __n);
         psVar5 = local_188;
      }

      local_1a8 = local_198;
      *(undefined1*)( (long)psVar5 + local_1b0 ) = 0;
      local_1a0 = local_1b0;
      local_180 = local_1b0;
      if (local_188 == psVar8) {
         uVar10 = local_1b0 + 1;
         psVar5 = local_1a8;
         if (7 < (uint)uVar10) {
            uVar6 = 0;
            do {
               uVar4 = (int)uVar6 + 8;
               uVar7 = (ulong)uVar4;
               *(undefined8*)( (long)local_1a8 + uVar6 ) = *(undefined8*)( (long)psVar8 + uVar6 );
               uVar6 = uVar7;
            }
 while ( uVar4 < ( (uint)uVar10 & 0xfffffff8 ) );
            psVar5 = (size_t*)( (long)local_1a8 + uVar7 );
            psVar8 = (size_t*)( uVar7 + (long)psVar8 );
         }

         lVar9 = 0;
         if (( uVar10 & 4 ) != 0) {
            *(int*)psVar5 = (int)*psVar8;
            lVar9 = 4;
         }

         if (( uVar10 & 2 ) != 0) {
            *(undefined2*)( (long)psVar5 + lVar9 ) = *(undefined2*)( (long)psVar8 + lVar9 );
            lVar9 = lVar9 + 2;
         }

         if (( uVar10 & 1 ) != 0) {
            *(undefined1*)( (long)psVar5 + lVar9 ) = *(undefined1*)( (long)psVar8 + lVar9 );
         }

      }
 else {
         local_1a8 = local_188;
         local_198[0] = local_178[0];
      }

      goto LAB_0010b168;
   }

   uVar4 = *(uint*)( param_4 + 1 );
   uVar10 = (long)(int)uVar4;
   if ((int)uVar4 < 0) {
      uVar10 = -(long)(int)uVar4;
   }

   uVar6 = ( ulong )(uVar4 >> 0x1f);
   cVar11 = (char)( (int)uVar4 >> 0x1f );
   if (uVar10 < 10) {
      local_1a8 = local_198;
      std::__cxx11::string::_M_construct(( ulong ) & local_1a8, '\x01' - cVar11);
      pcVar12 = (char*)( uVar6 + (long)local_1a8 );
      LAB_0010b524:cVar11 = (char)uVar10 + '0';
   }
 else {
      if (uVar10 < 100) {
         local_1a8 = local_198;
         std::__cxx11::string::_M_construct(( ulong ) & local_1a8, '\x02' - cVar11);
         pcVar12 = (char*)( uVar6 + (long)local_1a8 );
         local_118 = __LC139;
         uStack_110 = _UNK_0010ccf8;
         local_108 = __LC140;
         uStack_100 = _UNK_0010cd08;
         local_f8 = __LC141;
         uStack_f0 = _UNK_0010cd18;
         local_e8 = __LC142;
         uStack_e0 = _UNK_0010cd28;
         local_d8 = __LC143;
         uStack_d0 = _UNK_0010cd38;
         local_c8 = __LC144;
         uStack_c0 = _UNK_0010cd48;
         local_b8 = __LC145;
         uStack_b0 = _UNK_0010cd58;
         local_a8 = __LC146;
         uStack_a0 = _UNK_0010cd68;
         local_98 = __LC147;
         uStack_90 = _UNK_0010cd78;
         local_88 = __LC148;
         uStack_80 = _UNK_0010cd88;
         local_78 = __LC149;
         uStack_70 = _UNK_0010cd98;
         local_68 = __LC150;
         uStack_60 = (undefined1)_UNK_0010cda8;
         uStack_5f = (undefined7)_LC151._0_8_;
         cStack_58 = SUB81(_LC151._0_8_, 7);
         for (int i = 0; i < 8; i++) {
            acStack_57[i] = _LC151[( i + 8 )];
         }

      }
 else {
         if (uVar10 < 1000) {
            uVar4 = 2;
            iVar3 = 3;
            LAB_0010b591:cVar11 = (char)iVar3 - cVar11;
         }
 else {
            if (uVar10 < 10000) {
               uVar4 = 3;
               iVar3 = 4;
               goto LAB_0010b591;
            }

            iVar3 = 5;
            if (uVar10 < 100000) {
               LAB_0010b58d:uVar4 = iVar3 - 1;
               goto LAB_0010b591;
            }

            if (999999 < uVar10) {
               uVar4 = 6;
               iVar3 = 7;
               if (9999999 < uVar10) {
                  if (99999999 < uVar10) {
                     if (uVar10 < 1000000000) {
                        iVar3 = 9;
                        goto LAB_0010b58d;
                     }

                     uVar4 = 9;
                     goto LAB_0010b3ac;
                  }

                  uVar4 = 7;
                  iVar3 = 8;
               }

               goto LAB_0010b591;
            }

            uVar4 = 5;
            LAB_0010b3ac:cVar11 = ( '\x01' - cVar11 ) + (char)uVar4;
         }

         local_1a8 = local_198;
         std::__cxx11::string::_M_construct(( ulong ) & local_1a8, cVar11);
         pcVar12 = (char*)( uVar6 + (long)local_1a8 );
         local_118 = __LC139;
         uStack_110 = _UNK_0010ccf8;
         local_108 = __LC140;
         uStack_100 = _UNK_0010cd08;
         local_f8 = __LC141;
         uStack_f0 = _UNK_0010cd18;
         local_e8 = __LC142;
         uStack_e0 = _UNK_0010cd28;
         local_d8 = __LC143;
         uStack_d0 = _UNK_0010cd38;
         local_c8 = __LC144;
         uStack_c0 = _UNK_0010cd48;
         local_b8 = __LC145;
         uStack_b0 = _UNK_0010cd58;
         local_a8 = __LC146;
         uStack_a0 = _UNK_0010cd68;
         local_98 = __LC147;
         uStack_90 = _UNK_0010cd78;
         local_88 = __LC148;
         uStack_80 = _UNK_0010cd88;
         local_78 = __LC149;
         uStack_70 = _UNK_0010cd98;
         local_68 = __LC150;
         uStack_60 = (undefined1)_UNK_0010cda8;
         uStack_5f = (undefined7)_LC151._0_8_;
         cStack_58 = SUB81(_LC151._0_8_, 7);
         for (int i = 0; i < 8; i++) {
            acStack_57[i] = _LC151[( i + 8 )];
         }

         do {
            uVar6 = uVar10;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar6 >> 2;
            uVar10 = ( uVar6 >> 2 ) / 0x19;
            lVar9 = ( uVar6 + ( ( SUB168(auVar2 * ZEXT816(0x28f5c28f5c28f5c3), 8) & 0xfffffffffffffffc ) + uVar10 ) * -0x14 ) * 2;
            cVar11 = *(char*)( (long)&local_118 + lVar9 );
            pcVar12[uVar4] = *(char*)( (long)&local_118 + lVar9 + 1 );
            uVar1 = uVar4 - 1;
            uVar4 = uVar4 - 2;
            pcVar12[uVar1] = cVar11;
         }
 while ( 9999 < uVar6 );
         if (uVar6 < 1000) goto LAB_0010b524;
      }

      cVar11 = *(char*)( (long)&local_118 + uVar10 * 2 );
      pcVar12[1] = *(char*)( (long)&local_118 + uVar10 * 2 + 1 );
   }

   *pcVar12 = cVar11;
   LAB_0010b168:glslang::TInfoSinkBase::append((string*)this);
   if (local_1a8 != local_198) {
      operator_delete(local_1a8, local_198[0] + 1);
   }

   for (int i = 0; i < 3; i++) {
      glslang::TInfoSinkBase::append((char*)this);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   glslang::TInfoSinkBase::append((char*)this);
   return;
}
/* void std::vector<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, glslang::pool_allocator<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >
   >::_M_realloc_insert<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >(__gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >*,
   std::vector<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, glslang::pool_allocator<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > > > >, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >&&) */void std::vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>::_M_realloc_insert<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>(vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>> *this, long param_2, long param_3) {
   long lVar1;
   undefined1 *puVar2;
   long lVar3;
   ulong uVar4;
   ulong uVar5;
   ulong *puVar6;
   ulong *puVar7;
   long lVar8;
   ulong *local_58;
   ulong local_48;
   lVar1 = *(long*)( this + 0x10 );
   lVar8 = *(long*)( this + 8 );
   lVar3 = lVar1 - lVar8 >> 3;
   uVar4 = lVar3 * -0x3333333333333333;
   if (uVar4 == 0x333333333333333) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   if (lVar8 == lVar1) {
      if (0xfffffffffffffffe < uVar4) goto LAB_0010b950;
      local_48 = 0x333333333333333;
      if (uVar4 + 1 < 0x333333333333334) {
         local_48 = uVar4 + 1;
      }

      LAB_0010b95f:local_58 = (ulong*)glslang::TPoolAllocator::allocate(*(ulong*)this);
   }
 else {
      uVar5 = lVar3 * -0x6666666666666666;
      if (uVar5 < uVar4) {
         LAB_0010b950:local_48 = 0x333333333333333;
         goto LAB_0010b95f;
      }

      if (uVar5 != 0) {
         local_48 = 0x333333333333333;
         if (uVar5 < 0x333333333333334) {
            local_48 = uVar5;
         }

         goto LAB_0010b95f;
      }

      local_58 = (ulong*)0x0;
      local_48 = uVar5;
   }

   puVar7 = (ulong*)( ( param_2 - lVar8 ) + (long)local_58 );
   uVar5 = glslang::GetThreadPoolAllocator();
   puVar6 = puVar7 + 3;
   *puVar7 = uVar5;
   puVar7[1] = (ulong)puVar6;
   puVar2 = *(undefined1**)( param_3 + 8 );
   uVar4 = *(ulong*)( param_3 + 0x10 );
   if (uVar4 < 0x10) {
      if (uVar4 == 1) {
         *(undefined1*)( puVar7 + 3 ) = *puVar2;
         goto LAB_0010b8ad;
      }

      if (uVar4 == 0) goto LAB_0010b8ad;
   }
 else {
      if ((long)uVar4 < 0) {
         LAB_0010bb09:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::_M_create");
      }

      puVar6 = (ulong*)glslang::TPoolAllocator::allocate(uVar5);
      puVar7[1] = (ulong)puVar6;
      puVar7[3] = uVar4;
   }

   memcpy(puVar6, puVar2, uVar4);
   puVar6 = (ulong*)puVar7[1];
   LAB_0010b8ad:puVar7[2] = uVar4;
   *(undefined1*)( (long)puVar6 + uVar4 ) = 0;
   puVar6 = local_58;
   for (; param_2 != lVar8; lVar8 = lVar8 + 0x28) {
      uVar5 = glslang::GetThreadPoolAllocator();
      uVar4 = *(ulong*)( lVar8 + 0x10 );
      puVar7 = puVar6 + 3;
      puVar6[1] = (ulong)puVar7;
      puVar2 = *(undefined1**)( lVar8 + 8 );
      *puVar6 = uVar5;
      if (uVar4 < 0x10) {
         if (uVar4 == 1) {
            *(undefined1*)( puVar6 + 3 ) = *puVar2;
         }
 else if (uVar4 != 0) goto LAB_0010b939;
      }
 else {
         if ((long)uVar4 < 0) goto LAB_0010bb09;
         puVar7 = (ulong*)glslang::TPoolAllocator::allocate(uVar5);
         puVar6[3] = uVar4;
         puVar6[1] = (ulong)puVar7;
         LAB_0010b939:memcpy(puVar7, puVar2, uVar4);
         puVar7 = (ulong*)puVar6[1];
      }

      puVar6[2] = uVar4;
      puVar6 = puVar6 + 5;
      *(undefined1*)( (long)puVar7 + uVar4 ) = 0;
   }

   puVar6 = puVar6 + 5;
   if (param_2 != lVar1) {
      do {
         uVar5 = glslang::GetThreadPoolAllocator();
         uVar4 = *(ulong*)( param_2 + 0x10 );
         puVar7 = puVar6 + 3;
         puVar6[1] = (ulong)puVar7;
         puVar2 = *(undefined1**)( param_2 + 8 );
         *puVar6 = uVar5;
         if (uVar4 < 0x10) {
            if (uVar4 == 1) {
               *(undefined1*)( puVar6 + 3 ) = *puVar2;
            }
 else if (uVar4 != 0) goto LAB_0010b9fe;
         }
 else {
            if ((long)uVar4 < 0) goto LAB_0010bb09;
            puVar7 = (ulong*)glslang::TPoolAllocator::allocate(uVar5);
            puVar6[3] = uVar4;
            puVar6[1] = (ulong)puVar7;
            LAB_0010b9fe:memcpy(puVar7, puVar2, uVar4);
            puVar7 = (ulong*)puVar6[1];
         }

         param_2 = param_2 + 0x28;
         puVar6[2] = uVar4;
         puVar6 = puVar6 + 5;
         *(undefined1*)( (long)puVar7 + uVar4 ) = 0;
      }
 while ( param_2 != lVar1 );
   }

   *(ulong**)( this + 8 ) = local_58;
   *(ulong**)( this + 0x10 ) = puVar6;
   *(ulong**)( this + 0x18 ) = local_58 + local_48 * 5;
   return;
}
/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_replace_cold(char*, unsigned long, char const*, unsigned long, unsigned long) */void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace_cold(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this, char *param_1, ulong param_2, char *param_3, ulong param_4, ulong param_5) {
   long lVar1;
   char *pcVar2;
   size_t __n;
   byte bVar3;
   bVar3 = 0;
   if (param_4 - 1 < param_2) {
      if (param_4 == 1) {
         *param_1 = *param_3;
      }
 else {
         memmove(param_1, param_3, param_4);
      }

   }

   if (( param_5 != 0 ) && ( param_4 != param_2 )) {
      if (param_5 == 1) {
         param_1[param_4] = param_1[param_2];
      }
 else {
         memmove(param_1 + param_4, param_1 + param_2, param_5);
      }

   }

   if (param_2 < param_4) {
      pcVar2 = param_1 + param_2;
      if (pcVar2 < param_3 + param_4) {
         if (param_3 < pcVar2) {
            __n = (long)pcVar2 - (long)param_3;
            if (__n == 1) {
               *param_1 = *param_3;
            }
 else {
               memmove(param_1, param_3, __n);
            }

            pcVar2 = param_1 + param_4;
            param_1 = param_1 + __n;
            lVar1 = param_4 - __n;
            if (lVar1 != 1) {
               if (lVar1 == 0) {
                  return;
               }

               for (; lVar1 != 0; lVar1 = lVar1 + -1) {
                  *param_1 = *pcVar2;
                  pcVar2 = pcVar2 + (ulong)bVar3 * -2 + 1;
                  param_1 = param_1 + (ulong)bVar3 * -2 + 1;
               }

               return;
            }

         }
 else {
            pcVar2 = param_3 + ( param_4 - param_2 );
            if (param_4 != 1) {
               for (; param_4 != 0; param_4 = param_4 - 1) {
                  *param_1 = *pcVar2;
                  pcVar2 = pcVar2 + (ulong)bVar3 * -2 + 1;
                  param_1 = param_1 + (ulong)bVar3 * -2 + 1;
               }

               return;
            }

         }

         *param_1 = *pcVar2;
      }
 else {
         if (param_4 != 1) {
            memmove(param_1, param_3, param_4);
            return;
         }

         *param_1 = *param_3;
      }

   }

   return;
}
/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_replace(unsigned long, unsigned long, char const*, unsigned long) */basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> * __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__dest;long lVar1basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar2ulong uVar3ulong uVar4lVar1 = *(long*)( this + 0x10 );if (param_4 <= ( param_2 + 0x7fffffffffffffff ) - lVar1) {
   pbVar2 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
   uVar3 = ( param_4 - param_2 ) + lVar1;
   if (pbVar2 == this + 0x18) {
      uVar4 = 0xf;
   }
 else {
      uVar4 = *(ulong*)( this + 0x18 );
   }

   if (uVar4 < uVar3) {
      _M_mutate(this, param_1, param_2, param_3, param_4);
   }
 else {
      __dest = pbVar2 + param_1;
      uVar4 = lVar1 - ( param_1 + param_2 );
      if (( param_3 < pbVar2 ) || ( pbVar2 + lVar1 < param_3 )) {
         if (( uVar4 != 0 ) && ( param_2 != param_4 )) {
            if (uVar4 == 1) {
               __dest[param_4] = __dest[param_2];
            }
 else {
               memmove(__dest + param_4, __dest + param_2, uVar4);
            }

         }

         if (param_4 != 0) {
            if (param_4 == 1) {
               *__dest = ( basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> ) * param_3;
            }
 else {
               memcpy(__dest, param_3, param_4);
            }

         }

      }
 else {
         _M_replace_cold(this, (char*)__dest, param_2, param_3, param_4, uVar4);
      }

   }

   *(ulong*)( this + 0x10 ) = uVar3;
   *(undefined1*)( *(long*)( this + 8 ) + uVar3 ) = 0;
   return this;
}
/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::_M_replace");}/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, unsigned int>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, unsigned int> >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, unsigned int> >
   >::_M_get_insert_unique_pos(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */undefined1[16];std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>>::_M_get_insert_unique_pos (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>>
           *this,basic_string *param_1) {
   bool bVar1;
   uint uVar2;
   int iVar3;
   ulong uVar4;
   _Rb_tree_node_base *p_Var5;
   long lVar6;
   size_t __n;
   _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>> *p_Var7;
   _Rb_tree_node_base *p_Var8;
   ulong uVar9;
   void *__s2;
   ulong uVar10;
   undefined1 auVar11[16];
   void *local_50;
   if (*(_Rb_tree_node_base**)( this + 0x18 ) == (_Rb_tree_node_base*)0x0) {
      p_Var7 = this + 0x10;
      LAB_0010bea4:if (*(_Rb_tree_node_base**)( this + 0x20 ) == (_Rb_tree_node_base*)p_Var7) {
         p_Var5 = (_Rb_tree_node_base*)0x0;
         p_Var8 = (_Rb_tree_node_base*)p_Var7;
         goto LAB_0010be6a;
      }

      p_Var5 = (_Rb_tree_node_base*)std::_Rb_tree_decrement((_Rb_tree_node_base*)p_Var7);
      uVar9 = *(ulong*)( p_Var5 + 0x30 );
      __s2 = *(void**)( p_Var5 + 0x28 );
      uVar10 = *(ulong*)( param_1 + 0x10 );
      local_50 = *(void**)( param_1 + 8 );
      __n = uVar9;
      if (uVar10 <= uVar9) {
         __n = uVar10;
      }

   }
 else {
      local_50 = *(void**)( param_1 + 8 );
      uVar10 = *(ulong*)( param_1 + 0x10 );
      p_Var5 = *(_Rb_tree_node_base**)( this + 0x18 );
      do {
         p_Var7 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>>*)p_Var5;
         uVar9 = *(ulong*)( (_Rb_tree_node_base*)p_Var7 + 0x30 );
         __s2 = *(void**)( (_Rb_tree_node_base*)p_Var7 + 0x28 );
         __n = uVar9;
         if (uVar10 <= uVar9) {
            __n = uVar10;
         }

         if (__n == 0) {
            LAB_0010be14:uVar4 = uVar10 - uVar9;
            if (0x7fffffff < (long)uVar4) goto LAB_0010be32;
            if (-0x80000001 < (long)uVar4) goto LAB_0010be2e;
            LAB_0010bdd8:p_Var5 = *(_Rb_tree_node_base**)( (_Rb_tree_node_base*)p_Var7 + 0x10 );
            bVar1 = true;
         }
 else {
            uVar2 = memcmp(local_50, __s2, __n);
            uVar4 = (ulong)uVar2;
            if (uVar2 == 0) goto LAB_0010be14;
            LAB_0010be2e:if ((int)uVar4 < 0) goto LAB_0010bdd8;
            LAB_0010be32:p_Var5 = *(_Rb_tree_node_base**)( (_Rb_tree_node_base*)p_Var7 + 0x18 );
            bVar1 = false;
         }

      }
 while ( p_Var5 != (_Rb_tree_node_base*)0x0 );
      p_Var5 = (_Rb_tree_node_base*)p_Var7;
      if (bVar1) goto LAB_0010bea4;
   }

   if (( __n == 0 ) || ( iVar3 = iVar3 == 0 )) {
      lVar6 = uVar9 - uVar10;
      if (0x7fffffff < lVar6) {
         p_Var8 = (_Rb_tree_node_base*)0x0;
         goto LAB_0010be6a;
      }

      if (lVar6 < -0x80000000) {
         p_Var5 = (_Rb_tree_node_base*)0x0;
         p_Var8 = (_Rb_tree_node_base*)p_Var7;
         goto LAB_0010be6a;
      }

      iVar3 = (int)lVar6;
   }

   p_Var8 = (_Rb_tree_node_base*)0x0;
   if (iVar3 < 0) {
      p_Var8 = (_Rb_tree_node_base*)p_Var7;
      p_Var5 = (_Rb_tree_node_base*)0x0;
   }

   LAB_0010be6a:auVar11._8_8_ = p_Var8;
   auVar11._0_8_ = p_Var5;
   return auVar11;
}
/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, unsigned int>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, unsigned int> >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, unsigned int> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, unsigned int> >,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const&)
    */undefined1[16];std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>>::_M_get_insert_hint_unique_pos (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>>
           *this,_Rb_tree_node_base *param_2,basic_string *param_3) {
   ulong uVar1;
   ulong uVar2;
   void *__s1;
   void *__s2;
   int iVar3;
   uint uVar4;
   long lVar5;
   ulong uVar6;
   _Rb_tree_node_base *p_Var7;
   _Rb_tree_node_base *p_Var8;
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   if (param_2 == (_Rb_tree_node_base*)( this + 0x10 )) {
      if (*(long*)( this + 0x30 ) != 0) {
         param_2 = *(_Rb_tree_node_base**)( this + 0x28 );
         uVar1 = *(ulong*)( param_3 + 0x10 );
         uVar2 = *(ulong*)( param_2 + 0x30 );
         uVar6 = uVar1;
         if (uVar2 <= uVar1) {
            uVar6 = uVar2;
         }

         if (( uVar6 == 0 ) || ( iVar3 = memcmp(*(void**)( param_2 + 0x28 ), *(void**)( param_3 + 8 ), uVar6) ),iVar3 == 0) {
            lVar5 = uVar2 - uVar1;
            if (0x7fffffff < lVar5) goto LAB_0010c146;
            if (lVar5 < -0x80000000) goto LAB_0010c0d7;
            iVar3 = (int)lVar5;
         }

         if (-1 < iVar3) goto LAB_0010c146;
         goto LAB_0010c0d7;
      }

      goto LAB_0010c146;
   }

   uVar1 = *(ulong*)( param_3 + 0x10 );
   uVar2 = *(ulong*)( param_2 + 0x30 );
   __s1 = *(void**)( param_3 + 8 );
   __s2 = *(void**)( param_2 + 0x28 );
   uVar6 = uVar2;
   if (uVar1 <= uVar2) {
      uVar6 = uVar1;
   }

   p_Var7 = param_2;
   if (uVar6 == 0) {
      lVar5 = uVar1 - uVar2;
      if (( lVar5 < 0x80000000 ) && ( ( lVar5 < -0x80000000 || ( (int)lVar5 < 0 ) ) )) {
         LAB_0010bffa:if (*(_Rb_tree_node_base**)( this + 0x20 ) == param_2) goto LAB_0010bfcc;
         p_Var8 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(param_2);
         uVar2 = *(ulong*)( p_Var8 + 0x30 );
         uVar6 = uVar1;
         if (uVar2 <= uVar1) {
            uVar6 = uVar2;
         }

         if (( uVar6 == 0 ) || ( iVar3 = memcmp(*(void**)( p_Var8 + 0x28 ), __s1, uVar6) ),iVar3 == 0) {
            lVar5 = uVar2 - uVar1;
            if (0x7fffffff < lVar5) goto LAB_0010c146;
            if (-0x80000001 < lVar5) {
               iVar3 = (int)lVar5;
               goto LAB_0010c058;
            }

         }
 else {
            LAB_0010c058:if (-1 < iVar3) goto LAB_0010c146;
         }

         if (*(long*)( p_Var8 + 0x18 ) == 0) {
            p_Var7 = (_Rb_tree_node_base*)0x0;
            param_2 = p_Var8;
         }

         goto LAB_0010bfcc;
      }

      LAB_0010bfa5:uVar6 = uVar2 - uVar1;
      if ((long)uVar6 < 0x80000000) {
         if (-0x80000001 < (long)uVar6) goto LAB_0010bfbf;
         goto LAB_0010c0f0;
      }

   }
 else {
      iVar3 = memcmp(__s1, __s2, uVar6);
      if (iVar3 == 0) {
         lVar5 = uVar1 - uVar2;
         if (lVar5 < 0x80000000) {
            if (lVar5 < -0x80000000) goto LAB_0010bffa;
            iVar3 = (int)lVar5;
            goto LAB_0010bf94;
         }

      }
 else {
         LAB_0010bf94:if (iVar3 < 0) goto LAB_0010bffa;
      }

      uVar4 = memcmp(__s2, __s1, uVar6);
      uVar6 = (ulong)uVar4;
      if (uVar4 == 0) goto LAB_0010bfa5;
      LAB_0010bfbf:if ((int)uVar6 < 0) {
         LAB_0010c0f0:if (*(_Rb_tree_node_base**)( this + 0x28 ) == param_2) {
            LAB_0010c0d7:auVar10._8_8_ = 0;
            auVar10._0_8_ = param_2;
            return auVar10 << 0x40;
         }

         p_Var8 = (_Rb_tree_node_base*)std::_Rb_tree_increment(param_2);
         uVar2 = *(ulong*)( p_Var8 + 0x30 );
         uVar6 = uVar1;
         if (uVar2 <= uVar1) {
            uVar6 = uVar2;
         }

         if (uVar6 == 0) {
            LAB_0010c12c:uVar6 = uVar1 - uVar2;
            if (0x7fffffff < (long)uVar6) goto LAB_0010c146;
            if (-0x80000001 < (long)uVar6) goto LAB_0010c142;
         }
 else {
            uVar4 = memcmp(__s1, *(void**)( p_Var8 + 0x28 ), uVar6);
            uVar6 = (ulong)uVar4;
            if (uVar4 == 0) goto LAB_0010c12c;
            LAB_0010c142:if (-1 < (int)uVar6) {
               LAB_0010c146:auVar10 = _M_get_insert_unique_pos(this, param_3);
               return auVar10;
            }

         }

         p_Var7 = (_Rb_tree_node_base*)0x0;
         if (*(long*)( param_2 + 0x18 ) != 0) {
            p_Var7 = p_Var8;
            param_2 = p_Var8;
         }

         goto LAB_0010bfcc;
      }

   }

   param_2 = (_Rb_tree_node_base*)0x0;
   LAB_0010bfcc:auVar9._8_8_ = param_2;
   auVar9._0_8_ = p_Var7;
   return auVar9;
}
/* std::map<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >, unsigned int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, unsigned int> >
   >::operator[](std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >&&) */_Rb_tree_node_base * __thiscallstd::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,unsigned_int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>>::operator [](map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,unsigned_int,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>> * this, basic_string * param_1) * p_Var1 ;basic_string *pbVar2void *__s2ulong uVar3int iVar4uint uVar5_Rb_tree_node_base *p_Var6long lVar7_Rb_tree_node_base *p_Var8ulong uVar9ulong uVar10_Rb_tree_node_base *p_Var11bool bVar12uint uVar13undefined1 auVar14[16]p_Var1 = (_Rb_tree_node_base*)( this + 0x10 );p_Var11 = p_Var1;if (*(_Rb_tree_node_base**)( this + 0x18 ) != (_Rb_tree_node_base*)0x0) {
   __s2 = *(void**)( param_1 + 8 );
   uVar10 = *(ulong*)( param_1 + 0x10 );
   p_Var6 = *(_Rb_tree_node_base**)( this + 0x18 );
   do {
      while (true) {
         uVar3 = *(ulong*)( p_Var6 + 0x30 );
         uVar9 = uVar10;
         if (uVar3 <= uVar10) {
            uVar9 = uVar3;
         }

         if (( uVar9 != 0 ) && ( iVar4 = memcmp(*(void**)( p_Var6 + 0x28 ), __s2, uVar9) ),iVar4 != 0) break;
         lVar7 = uVar3 - uVar10;
         if (lVar7 < 0x80000000) {
            if (-0x80000001 < lVar7) {
               iVar4 = (int)lVar7;
               break;
            }

            goto LAB_0010c1c0;
         }

         LAB_0010c211:p_Var8 = p_Var6 + 0x10;
         p_Var11 = p_Var6;
         p_Var6 = *(_Rb_tree_node_base**)p_Var8;
         if (*(_Rb_tree_node_base**)p_Var8 == (_Rb_tree_node_base*)0x0) goto LAB_0010c21d;
      }
;
      if (-1 < iVar4) goto LAB_0010c211;
      LAB_0010c1c0:p_Var6 = *(_Rb_tree_node_base**)( p_Var6 + 0x18 );
   }
 while ( p_Var6 != (_Rb_tree_node_base*)0x0 );
   LAB_0010c21d:if (p_Var1 != p_Var11) {
      uVar3 = *(ulong*)( p_Var11 + 0x30 );
      uVar9 = uVar10;
      if (uVar3 <= uVar10) {
         uVar9 = uVar3;
      }

      if (( uVar9 == 0 ) || ( iVar4 = memcmp(__s2, *(void**)( p_Var11 + 0x28 ), uVar9) ),iVar4 == 0) {
         lVar7 = uVar10 - uVar3;
         if (0x7fffffff < lVar7) goto LAB_0010c265;
         if (lVar7 < -0x80000000) goto LAB_0010c284;
         iVar4 = (int)lVar7;
      }

      if (-1 < iVar4) goto LAB_0010c265;
   }

}
LAB_0010c284:p_Var6 = (_Rb_tree_node_base*)glslang::TPoolAllocator::allocate(*(ulong*)this);pbVar2 = param_1 + 0x18;*(undefined8*)( p_Var6 + 0x20 ) = *(undefined8*)param_1;*(_Rb_tree_node_base**)( p_Var6 + 0x28 ) = p_Var6 + 0x38;if (*(basic_string**)( param_1 + 8 ) == pbVar2) {
   lVar7 = *(long*)( param_1 + 0x10 );
   uVar10 = lVar7 + 1;
   uVar13 = (uint)uVar10;
   if (7 < uVar13) {
      *(undefined8*)( p_Var6 + 0x38 ) = *(undefined8*)( param_1 + 0x18 );
      *(undefined8*)( p_Var6 + ( uVar10 & 0xffffffff ) + 0x30 ) = *(undefined8*)( param_1 + ( uVar10 & 0xffffffff ) + 0x10 );
      lVar7 = (long)( p_Var6 + 0x38 ) - ( ( ulong )(p_Var6 + 0x40) & 0xfffffffffffffff8 );
      uVar13 = uVar13 + (int)lVar7 & 0xfffffff8;
      if (7 < uVar13) {
         uVar5 = 0;
         do {
            uVar10 = (ulong)uVar5;
            uVar5 = uVar5 + 8;
            *(undefined8*)( ( ( ulong )(p_Var6 + 0x40) & 0xfffffffffffffff8 ) + uVar10 ) = *(undefined8*)( pbVar2 + ( uVar10 - lVar7 ) );
         }
 while ( uVar5 < uVar13 );
      }

      goto LAB_0010c2d2;
   }

   if (( uVar10 & 4 ) == 0) {
      if (uVar13 != 0) {
         p_Var6[0x38] = *(_Rb_tree_node_base*)( param_1 + 0x18 );
         if (( uVar10 & 2 ) == 0) goto LAB_0010c2d2;
         *(undefined2*)( p_Var6 + ( uVar10 & 0xffffffff ) + 0x36 ) = *(undefined2*)( param_1 + ( uVar10 & 0xffffffff ) + 0x16 );
         lVar7 = *(long*)( param_1 + 0x10 );
      }

   }
 else {
      *(undefined4*)( p_Var6 + 0x38 ) = *(undefined4*)( param_1 + 0x18 );
      *(undefined4*)( p_Var6 + ( uVar10 & 0xffffffff ) + 0x34 ) = *(undefined4*)( param_1 + ( uVar10 & 0xffffffff ) + 0x14 );
      lVar7 = *(long*)( param_1 + 0x10 );
   }

}
 else {
   *(basic_string**)( p_Var6 + 0x28 ) = *(basic_string**)( param_1 + 8 );
   *(undefined8*)( p_Var6 + 0x38 ) = *(undefined8*)( param_1 + 0x18 );
   LAB_0010c2d2:lVar7 = *(long*)( param_1 + 0x10 );
}
*(basic_string**)( param_1 + 8 ) = pbVar2;*(undefined8*)( param_1 + 0x10 ) = 0;*(long*)( p_Var6 + 0x30 ) = lVar7;param_1[0x18] = (basic_string)0x0;*(undefined4*)( p_Var6 + 0x48 ) = 0;auVar14 = _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>>::_M_get_insert_hint_unique_pos((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,unsigned_int>>>*)this, p_Var11, p_Var6 + 0x20);p_Var8 = auVar14._8_8_;p_Var11 = auVar14._0_8_;if (p_Var8 == (_Rb_tree_node_base*)0x0) goto LAB_0010c265;if (( auVar14._0_8_ == (_Rb_tree_node_base*)0x0 ) && ( p_Var1 != p_Var8 )) {
   uVar10 = *(ulong*)( p_Var6 + 0x30 );
   uVar3 = *(ulong*)( p_Var8 + 0x30 );
   uVar9 = uVar3;
   if (uVar10 <= uVar3) {
      uVar9 = uVar10;
   }

   if (( uVar9 == 0 ) || ( iVar4 = memcmp(*(void**)( p_Var6 + 0x28 ), *(void**)( p_Var8 + 0x28 ), uVar9) ),iVar4 == 0) {
      lVar7 = uVar10 - uVar3;
      bVar12 = false;
      if (0x7fffffff < lVar7) goto LAB_0010c375;
      if (lVar7 < -0x80000000) goto LAB_0010c370;
      iVar4 = (int)lVar7;
   }

   bVar12 = SUB41((uint)iVar4 >> 0x1f, 0);
}
 else {
   LAB_0010c370:bVar12 = true;
}
LAB_0010c375:std::_Rb_tree_insert_and_rebalance(bVar12, p_Var6, p_Var8, p_Var1);*(long*)( this + 0x30 ) = *(long*)( this + 0x30 ) + 1;p_Var11 = p_Var6;LAB_0010c265:return p_Var11 + 0x48;}/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TExtensionBehavior>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TExtensionBehavior> >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TExtensionBehavior> >
   >::_M_get_insert_unique_pos(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */undefined1[16];std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::_M_get_insert_unique_pos (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>
           *this,basic_string *param_1) {
   bool bVar1;
   uint uVar2;
   int iVar3;
   ulong uVar4;
   _Rb_tree_node_base *p_Var5;
   long lVar6;
   size_t __n;
   _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>> *p_Var7;
   _Rb_tree_node_base *p_Var8;
   ulong uVar9;
   void *__s2;
   ulong uVar10;
   undefined1 auVar11[16];
   void *local_50;
   if (*(_Rb_tree_node_base**)( this + 0x18 ) == (_Rb_tree_node_base*)0x0) {
      p_Var7 = this + 0x10;
      LAB_0010c574:if (*(_Rb_tree_node_base**)( this + 0x20 ) == (_Rb_tree_node_base*)p_Var7) {
         p_Var5 = (_Rb_tree_node_base*)0x0;
         p_Var8 = (_Rb_tree_node_base*)p_Var7;
         goto LAB_0010c53a;
      }

      p_Var5 = (_Rb_tree_node_base*)std::_Rb_tree_decrement((_Rb_tree_node_base*)p_Var7);
      uVar9 = *(ulong*)( p_Var5 + 0x30 );
      __s2 = *(void**)( p_Var5 + 0x28 );
      uVar10 = *(ulong*)( param_1 + 0x10 );
      local_50 = *(void**)( param_1 + 8 );
      __n = uVar9;
      if (uVar10 <= uVar9) {
         __n = uVar10;
      }

   }
 else {
      local_50 = *(void**)( param_1 + 8 );
      uVar10 = *(ulong*)( param_1 + 0x10 );
      p_Var5 = *(_Rb_tree_node_base**)( this + 0x18 );
      do {
         p_Var7 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>*)p_Var5;
         uVar9 = *(ulong*)( (_Rb_tree_node_base*)p_Var7 + 0x30 );
         __s2 = *(void**)( (_Rb_tree_node_base*)p_Var7 + 0x28 );
         __n = uVar9;
         if (uVar10 <= uVar9) {
            __n = uVar10;
         }

         if (__n == 0) {
            LAB_0010c4e4:uVar4 = uVar10 - uVar9;
            if (0x7fffffff < (long)uVar4) goto LAB_0010c502;
            if (-0x80000001 < (long)uVar4) goto LAB_0010c4fe;
            LAB_0010c4a8:p_Var5 = *(_Rb_tree_node_base**)( (_Rb_tree_node_base*)p_Var7 + 0x10 );
            bVar1 = true;
         }
 else {
            uVar2 = memcmp(local_50, __s2, __n);
            uVar4 = (ulong)uVar2;
            if (uVar2 == 0) goto LAB_0010c4e4;
            LAB_0010c4fe:if ((int)uVar4 < 0) goto LAB_0010c4a8;
            LAB_0010c502:p_Var5 = *(_Rb_tree_node_base**)( (_Rb_tree_node_base*)p_Var7 + 0x18 );
            bVar1 = false;
         }

      }
 while ( p_Var5 != (_Rb_tree_node_base*)0x0 );
      p_Var5 = (_Rb_tree_node_base*)p_Var7;
      if (bVar1) goto LAB_0010c574;
   }

   if (( __n == 0 ) || ( iVar3 = iVar3 == 0 )) {
      lVar6 = uVar9 - uVar10;
      if (0x7fffffff < lVar6) {
         p_Var8 = (_Rb_tree_node_base*)0x0;
         goto LAB_0010c53a;
      }

      if (lVar6 < -0x80000000) {
         p_Var5 = (_Rb_tree_node_base*)0x0;
         p_Var8 = (_Rb_tree_node_base*)p_Var7;
         goto LAB_0010c53a;
      }

      iVar3 = (int)lVar6;
   }

   p_Var8 = (_Rb_tree_node_base*)0x0;
   if (iVar3 < 0) {
      p_Var8 = (_Rb_tree_node_base*)p_Var7;
      p_Var5 = (_Rb_tree_node_base*)0x0;
   }

   LAB_0010c53a:auVar11._8_8_ = p_Var8;
   auVar11._0_8_ = p_Var5;
   return auVar11;
}
/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TExtensionBehavior>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TExtensionBehavior> >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TExtensionBehavior> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TExtensionBehavior> >,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const&)
    */undefined1[16];std::_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::_M_get_insert_hint_unique_pos (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>
           *this,_Rb_tree_node_base *param_2,basic_string *param_3) {
   ulong uVar1;
   ulong uVar2;
   void *__s1;
   void *__s2;
   int iVar3;
   uint uVar4;
   long lVar5;
   ulong uVar6;
   _Rb_tree_node_base *p_Var7;
   _Rb_tree_node_base *p_Var8;
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   if (param_2 == (_Rb_tree_node_base*)( this + 0x10 )) {
      if (*(long*)( this + 0x30 ) != 0) {
         param_2 = *(_Rb_tree_node_base**)( this + 0x28 );
         uVar1 = *(ulong*)( param_3 + 0x10 );
         uVar2 = *(ulong*)( param_2 + 0x30 );
         uVar6 = uVar1;
         if (uVar2 <= uVar1) {
            uVar6 = uVar2;
         }

         if (( uVar6 == 0 ) || ( iVar3 = memcmp(*(void**)( param_2 + 0x28 ), *(void**)( param_3 + 8 ), uVar6) ),iVar3 == 0) {
            lVar5 = uVar2 - uVar1;
            if (0x7fffffff < lVar5) goto LAB_0010c816;
            if (lVar5 < -0x80000000) goto LAB_0010c7a7;
            iVar3 = (int)lVar5;
         }

         if (-1 < iVar3) goto LAB_0010c816;
         goto LAB_0010c7a7;
      }

      goto LAB_0010c816;
   }

   uVar1 = *(ulong*)( param_3 + 0x10 );
   uVar2 = *(ulong*)( param_2 + 0x30 );
   __s1 = *(void**)( param_3 + 8 );
   __s2 = *(void**)( param_2 + 0x28 );
   uVar6 = uVar2;
   if (uVar1 <= uVar2) {
      uVar6 = uVar1;
   }

   p_Var7 = param_2;
   if (uVar6 == 0) {
      lVar5 = uVar1 - uVar2;
      if (( lVar5 < 0x80000000 ) && ( ( lVar5 < -0x80000000 || ( (int)lVar5 < 0 ) ) )) {
         LAB_0010c6ca:if (*(_Rb_tree_node_base**)( this + 0x20 ) == param_2) goto LAB_0010c69c;
         p_Var8 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(param_2);
         uVar2 = *(ulong*)( p_Var8 + 0x30 );
         uVar6 = uVar1;
         if (uVar2 <= uVar1) {
            uVar6 = uVar2;
         }

         if (( uVar6 == 0 ) || ( iVar3 = memcmp(*(void**)( p_Var8 + 0x28 ), __s1, uVar6) ),iVar3 == 0) {
            lVar5 = uVar2 - uVar1;
            if (0x7fffffff < lVar5) goto LAB_0010c816;
            if (-0x80000001 < lVar5) {
               iVar3 = (int)lVar5;
               goto LAB_0010c728;
            }

         }
 else {
            LAB_0010c728:if (-1 < iVar3) goto LAB_0010c816;
         }

         if (*(long*)( p_Var8 + 0x18 ) == 0) {
            p_Var7 = (_Rb_tree_node_base*)0x0;
            param_2 = p_Var8;
         }

         goto LAB_0010c69c;
      }

      LAB_0010c675:uVar6 = uVar2 - uVar1;
      if ((long)uVar6 < 0x80000000) {
         if (-0x80000001 < (long)uVar6) goto LAB_0010c68f;
         goto LAB_0010c7c0;
      }

   }
 else {
      iVar3 = memcmp(__s1, __s2, uVar6);
      if (iVar3 == 0) {
         lVar5 = uVar1 - uVar2;
         if (lVar5 < 0x80000000) {
            if (lVar5 < -0x80000000) goto LAB_0010c6ca;
            iVar3 = (int)lVar5;
            goto LAB_0010c664;
         }

      }
 else {
         LAB_0010c664:if (iVar3 < 0) goto LAB_0010c6ca;
      }

      uVar4 = memcmp(__s2, __s1, uVar6);
      uVar6 = (ulong)uVar4;
      if (uVar4 == 0) goto LAB_0010c675;
      LAB_0010c68f:if ((int)uVar6 < 0) {
         LAB_0010c7c0:if (*(_Rb_tree_node_base**)( this + 0x28 ) == param_2) {
            LAB_0010c7a7:auVar10._8_8_ = 0;
            auVar10._0_8_ = param_2;
            return auVar10 << 0x40;
         }

         p_Var8 = (_Rb_tree_node_base*)std::_Rb_tree_increment(param_2);
         uVar2 = *(ulong*)( p_Var8 + 0x30 );
         uVar6 = uVar1;
         if (uVar2 <= uVar1) {
            uVar6 = uVar2;
         }

         if (uVar6 == 0) {
            LAB_0010c7fc:uVar6 = uVar1 - uVar2;
            if (0x7fffffff < (long)uVar6) goto LAB_0010c816;
            if (-0x80000001 < (long)uVar6) goto LAB_0010c812;
         }
 else {
            uVar4 = memcmp(__s1, *(void**)( p_Var8 + 0x28 ), uVar6);
            uVar6 = (ulong)uVar4;
            if (uVar4 == 0) goto LAB_0010c7fc;
            LAB_0010c812:if (-1 < (int)uVar6) {
               LAB_0010c816:auVar10 = _M_get_insert_unique_pos(this, param_3);
               return auVar10;
            }

         }

         p_Var7 = (_Rb_tree_node_base*)0x0;
         if (*(long*)( param_2 + 0x18 ) != 0) {
            p_Var7 = p_Var8;
            param_2 = p_Var8;
         }

         goto LAB_0010c69c;
      }

   }

   param_2 = (_Rb_tree_node_base*)0x0;
   LAB_0010c69c:auVar9._8_8_ = param_2;
   auVar9._0_8_ = p_Var7;
   return auVar9;
}
/* std::map<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >, glslang::TExtensionBehavior, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TExtensionBehavior> >
   >::operator[](std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >&&) */_Rb_tree_node_base * __thiscallstd::map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::operator [](map<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::TExtensionBehavior,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>> * this, basic_string * param_1) * p_Var1 ;basic_string *pbVar2void *__s2ulong uVar3int iVar4uint uVar5_Rb_tree_node_base *p_Var6long lVar7_Rb_tree_node_base *p_Var8ulong uVar9ulong uVar10_Rb_tree_node_base *p_Var11bool bVar12uint uVar13undefined1 auVar14[16]p_Var1 = (_Rb_tree_node_base*)( this + 0x10 );p_Var11 = p_Var1;if (*(_Rb_tree_node_base**)( this + 0x18 ) != (_Rb_tree_node_base*)0x0) {
   __s2 = *(void**)( param_1 + 8 );
   uVar10 = *(ulong*)( param_1 + 0x10 );
   p_Var6 = *(_Rb_tree_node_base**)( this + 0x18 );
   do {
      while (true) {
         uVar3 = *(ulong*)( p_Var6 + 0x30 );
         uVar9 = uVar10;
         if (uVar3 <= uVar10) {
            uVar9 = uVar3;
         }

         if (( uVar9 != 0 ) && ( iVar4 = memcmp(*(void**)( p_Var6 + 0x28 ), __s2, uVar9) ),iVar4 != 0) break;
         lVar7 = uVar3 - uVar10;
         if (lVar7 < 0x80000000) {
            if (-0x80000001 < lVar7) {
               iVar4 = (int)lVar7;
               break;
            }

            goto LAB_0010c890;
         }

         LAB_0010c8e1:p_Var8 = p_Var6 + 0x10;
         p_Var11 = p_Var6;
         p_Var6 = *(_Rb_tree_node_base**)p_Var8;
         if (*(_Rb_tree_node_base**)p_Var8 == (_Rb_tree_node_base*)0x0) goto LAB_0010c8ed;
      }
;
      if (-1 < iVar4) goto LAB_0010c8e1;
      LAB_0010c890:p_Var6 = *(_Rb_tree_node_base**)( p_Var6 + 0x18 );
   }
 while ( p_Var6 != (_Rb_tree_node_base*)0x0 );
   LAB_0010c8ed:if (p_Var1 != p_Var11) {
      uVar3 = *(ulong*)( p_Var11 + 0x30 );
      uVar9 = uVar10;
      if (uVar3 <= uVar10) {
         uVar9 = uVar3;
      }

      if (( uVar9 == 0 ) || ( iVar4 = memcmp(__s2, *(void**)( p_Var11 + 0x28 ), uVar9) ),iVar4 == 0) {
         lVar7 = uVar10 - uVar3;
         if (0x7fffffff < lVar7) goto LAB_0010c935;
         if (lVar7 < -0x80000000) goto LAB_0010c954;
         iVar4 = (int)lVar7;
      }

      if (-1 < iVar4) goto LAB_0010c935;
   }

}
LAB_0010c954:p_Var6 = (_Rb_tree_node_base*)glslang::TPoolAllocator::allocate(*(ulong*)this);pbVar2 = param_1 + 0x18;*(undefined8*)( p_Var6 + 0x20 ) = *(undefined8*)param_1;*(_Rb_tree_node_base**)( p_Var6 + 0x28 ) = p_Var6 + 0x38;if (*(basic_string**)( param_1 + 8 ) == pbVar2) {
   lVar7 = *(long*)( param_1 + 0x10 );
   uVar10 = lVar7 + 1;
   uVar13 = (uint)uVar10;
   if (7 < uVar13) {
      *(undefined8*)( p_Var6 + 0x38 ) = *(undefined8*)( param_1 + 0x18 );
      *(undefined8*)( p_Var6 + ( uVar10 & 0xffffffff ) + 0x30 ) = *(undefined8*)( param_1 + ( uVar10 & 0xffffffff ) + 0x10 );
      lVar7 = (long)( p_Var6 + 0x38 ) - ( ( ulong )(p_Var6 + 0x40) & 0xfffffffffffffff8 );
      uVar13 = uVar13 + (int)lVar7 & 0xfffffff8;
      if (7 < uVar13) {
         uVar5 = 0;
         do {
            uVar10 = (ulong)uVar5;
            uVar5 = uVar5 + 8;
            *(undefined8*)( ( ( ulong )(p_Var6 + 0x40) & 0xfffffffffffffff8 ) + uVar10 ) = *(undefined8*)( pbVar2 + ( uVar10 - lVar7 ) );
         }
 while ( uVar5 < uVar13 );
      }

      goto LAB_0010c9a2;
   }

   if (( uVar10 & 4 ) == 0) {
      if (uVar13 != 0) {
         p_Var6[0x38] = *(_Rb_tree_node_base*)( param_1 + 0x18 );
         if (( uVar10 & 2 ) == 0) goto LAB_0010c9a2;
         *(undefined2*)( p_Var6 + ( uVar10 & 0xffffffff ) + 0x36 ) = *(undefined2*)( param_1 + ( uVar10 & 0xffffffff ) + 0x16 );
         lVar7 = *(long*)( param_1 + 0x10 );
      }

   }
 else {
      *(undefined4*)( p_Var6 + 0x38 ) = *(undefined4*)( param_1 + 0x18 );
      *(undefined4*)( p_Var6 + ( uVar10 & 0xffffffff ) + 0x34 ) = *(undefined4*)( param_1 + ( uVar10 & 0xffffffff ) + 0x14 );
      lVar7 = *(long*)( param_1 + 0x10 );
   }

}
 else {
   *(basic_string**)( p_Var6 + 0x28 ) = *(basic_string**)( param_1 + 8 );
   *(undefined8*)( p_Var6 + 0x38 ) = *(undefined8*)( param_1 + 0x18 );
   LAB_0010c9a2:lVar7 = *(long*)( param_1 + 0x10 );
}
*(basic_string**)( param_1 + 8 ) = pbVar2;*(undefined8*)( param_1 + 0x10 ) = 0;*(long*)( p_Var6 + 0x30 ) = lVar7;param_1[0x18] = (basic_string)0x0;*(undefined4*)( p_Var6 + 0x48 ) = 0;auVar14 = _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>::_M_get_insert_hint_unique_pos((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TExtensionBehavior>>>*)this, p_Var11, p_Var6 + 0x20);p_Var8 = auVar14._8_8_;p_Var11 = auVar14._0_8_;if (p_Var8 == (_Rb_tree_node_base*)0x0) goto LAB_0010c935;if (( auVar14._0_8_ == (_Rb_tree_node_base*)0x0 ) && ( p_Var1 != p_Var8 )) {
   uVar10 = *(ulong*)( p_Var6 + 0x30 );
   uVar3 = *(ulong*)( p_Var8 + 0x30 );
   uVar9 = uVar3;
   if (uVar10 <= uVar3) {
      uVar9 = uVar10;
   }

   if (( uVar9 == 0 ) || ( iVar4 = memcmp(*(void**)( p_Var6 + 0x28 ), *(void**)( p_Var8 + 0x28 ), uVar9) ),iVar4 == 0) {
      lVar7 = uVar10 - uVar3;
      bVar12 = false;
      if (0x7fffffff < lVar7) goto LAB_0010ca45;
      if (lVar7 < -0x80000000) goto LAB_0010ca40;
      iVar4 = (int)lVar7;
   }

   bVar12 = SUB41((uint)iVar4 >> 0x1f, 0);
}
 else {
   LAB_0010ca40:bVar12 = true;
}
LAB_0010ca45:std::_Rb_tree_insert_and_rebalance(bVar12, p_Var6, p_Var8, p_Var1);*(long*)( this + 0x30 ) = *(long*)( this + 0x30 ) + 1;p_Var11 = p_Var6;LAB_0010c935:return p_Var11 + 0x48;}
