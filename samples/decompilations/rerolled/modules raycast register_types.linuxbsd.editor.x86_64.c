/* initialize_raycast_module(ModuleInitializationLevel) */void initialize_raycast_module(int param_1) {
   RaycastOcclusionCull *this;
   if (param_1 != 2) {
      return;
   }
   for (int i_146 = 0; i_146 < 2; i_146++) {
      LightmapRaycasterEmbree::make_default_raycaster();
   }
   this(RaycastOcclusionCull * operator_new(0xd0, ""));
   RaycastOcclusionCull::RaycastOcclusionCull(this);
   raycast_occlusion_cull = this;
   return;
}/* uninitialize_raycast_module(ModuleInitializationLevel) */void uninitialize_raycast_module(int param_1) {
   long *plVar1;
   plVar1 = raycast_occlusion_cull;
   if (param_1 == 2) {
      if (raycast_occlusion_cull != (long*)0x0) {
         ( **(code**)( *raycast_occlusion_cull + 0x88 ) )(raycast_occlusion_cull);
         Memory::free_static(plVar1, false);
      }
      StaticRaycasterEmbree::free();
      return;
   }
   return;
}
