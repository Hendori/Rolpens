/* NavAgent::_update_rvo_agent_properties() */void NavAgent::_update_rvo_agent_properties(NavAgent *this) {
   NavAgent *pNVar1;
   SelfList *pSVar2;
   if (this[0x1b0] == (NavAgent)0x0) {
      *(long*)( this + 0x88 ) = (long)*(int*)( this + 0x4c );
      *(undefined8*)( this + 0xfc ) = *(undefined8*)( this + 0x1b4 );
      *(undefined4*)( this + 0xe4 ) = *(undefined4*)( this + 0x44 );
      *(undefined4*)( this + 0xe8 ) = *(undefined4*)( this + 0x48 );
      *(undefined4*)( this + 0xe0 ) = *(undefined4*)( this + 0x3c );
      *(ulong*)( this + 0x90 ) = CONCAT44(*(undefined4*)( this + 0x50 ), *(undefined4*)( this + 0x40 ));
      *(undefined4*)( this + 0xd0 ) = *(undefined4*)( this + 8 );
      *(undefined4*)( this + 0xd4 ) = *(undefined4*)( this + 0x10 );
      *(undefined4*)( this + 0xd8 ) = *(undefined4*)( this + 0x20 );
      *(undefined4*)( this + 0xdc ) = *(undefined4*)( this + 0x28 );
      *(ulong*)( this + 0xf4 ) = CONCAT44((int)( ( ulong ) * (undefined8*)( this + 8 ) >> 0x20 ), (int)*(undefined8*)( this + 0x38 ));
      *(undefined4*)( this + 0x104 ) = *(undefined4*)( this + 0x1bc );
      pNVar1 = *(NavAgent**)( this + 0x68 );
   }
 else {
      *(long*)( this + 0x150 ) = (long)*(int*)( this + 0x4c );
      *(undefined8*)( this + 0x1a4 ) = *(undefined8*)( this + 0x1b4 );
      *(undefined4*)( this + 0x158 ) = *(undefined4*)( this + 0x40 );
      *(undefined4*)( this + 0x15c ) = *(undefined4*)( this + 0x50 );
      *(undefined4*)( this + 0x160 ) = *(undefined4*)( this + 0x3c );
      *(undefined4*)( this + 0x164 ) = *(undefined4*)( this + 0x44 );
      *(undefined4*)( this + 0x168 ) = *(undefined4*)( this + 0x48 );
      *(undefined4*)( this + 0x11c ) = *(undefined4*)( this + 8 );
      *(undefined4*)( this + 0x120 ) = *(undefined4*)( this + 0xc );
      *(undefined4*)( this + 0x124 ) = *(undefined4*)( this + 0x10 );
      *(undefined4*)( this + 0x128 ) = *(undefined4*)( this + 0x20 );
      *(ulong*)( this + 300 ) = CONCAT44(*(undefined4*)( this + 0x28 ), *(undefined4*)( this + 0x24 ));
      *(int*)( this + 0x1a0 ) = (int)*(undefined8*)( this + 0x38 );
      *(undefined4*)( this + 0x1ac ) = *(undefined4*)( this + 0x1bc );
      pNVar1 = *(NavAgent**)( this + 0x68 );
   }

   if (pNVar1 == (NavAgent*)0x0) {
      this[0x1d0] = (NavAgent)0x1;
      return;
   }

   if (this[0x1b1] == (NavAgent)0x0) {
      NavMap::remove_agent_as_controlled(pNVar1);
      pSVar2 = *(SelfList**)( this + 0x68 );
   }
 else {
      NavMap::set_agent_as_controlled(pNVar1);
      pSVar2 = *(SelfList**)( this + 0x68 );
   }

   this[0x1d0] = (NavAgent)0x1;
   if (( pSVar2 != (SelfList*)0x0 ) && ( *(long*)( this + 0x1e0 ) == 0 )) {
      NavMap::add_agent_sync_dirty_request(pSVar2);
      return;
   }

   return;
}
/* NavAgent::set_avoidance_enabled(bool) */void NavAgent::set_avoidance_enabled(NavAgent *this, bool param_1) {
   this[0x1b1] = (NavAgent)param_1;
   _update_rvo_agent_properties(this);
   return;
}
/* NavAgent::set_use_3d_avoidance(bool) */void NavAgent::set_use_3d_avoidance(NavAgent *this, bool param_1) {
   this[0x1b0] = (NavAgent)param_1;
   _update_rvo_agent_properties(this);
   return;
}
/* NavAgent::set_map(NavMap*) */void NavAgent::set_map(NavAgent *this, NavMap *param_1) {
   SelfList *pSVar1;
   pSVar1 = *(SelfList**)( this + 0x68 );
   if (pSVar1 == (SelfList*)param_1) {
      return;
   }

   if (pSVar1 != (SelfList*)0x0) {
      if (*(long*)( this + 0x1e0 ) != 0) {
         NavMap::remove_agent_sync_dirty_request(pSVar1);
         pSVar1 = *(SelfList**)( this + 0x68 );
         if (pSVar1 == (SelfList*)0x0) goto LAB_00100205;
      }

      NavMap::remove_agent((NavAgent*)pSVar1);
   }

   LAB_00100205:*(NavMap**)( this + 0x68 ) = param_1;
   this[0x1d0] = (NavAgent)0x1;
   if (param_1 != (NavMap*)0x0) {
      NavMap::add_agent((NavAgent*)param_1);
      if (this[0x1b1] != (NavAgent)0x0) {
         NavMap::set_agent_as_controlled(*(NavAgent**)( this + 0x68 ));
      }

      if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x1e0 ) == 0 )) {
         NavMap::add_agent_sync_dirty_request(*(SelfList**)( this + 0x68 ));
         return;
      }

   }

   return;
}
/* NavAgent::is_map_changed() */bool NavAgent::is_map_changed(NavAgent *this) {
   int iVar1;
   bool bVar2;
   bVar2 = false;
   if (*(long*)( this + 0x68 ) != 0) {
      iVar1 = *(int*)( *(long*)( this + 0x68 ) + 0x130 );
      bVar2 = *(int*)( this + 0x1d4 ) != iVar1;
      *(int*)( this + 0x1d4 ) = iVar1;
   }

   return bVar2;
}
/* NavAgent::set_avoidance_callback(Callable) */void NavAgent::set_avoidance_callback(NavAgent *this, Callable *param_2) {
   Callable::operator =((Callable*)( this + 0x1c0 ), param_2);
   return;
}
/* NavAgent::has_avoidance_callback() const */void NavAgent::has_avoidance_callback(void) {
   Callable::is_valid();
   return;
}
/* NavAgent::dispatch_avoidance_callback() */void NavAgent::dispatch_avoidance_callback(NavAgent *this) {
   undefined4 uVar1;
   char cVar2;
   long in_FS_OFFSET;
   undefined8 local_b0;
   undefined4 local_a8;
   undefined8 local_a4;
   undefined4 local_9c;
   Variant *local_98[2];
   int local_88[2];
   undefined1 local_80[16];
   int local_68[6];
   int local_50[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar2 = Callable::is_valid();
   if (cVar2 != '\0') {
      local_b0._4_4_ = 0;
      if (this[0x1b0] == (NavAgent)0x0) {
         local_a8 = *(undefined4*)( this + 0xf0 );
         uVar1 = *(undefined4*)( this + 0xec );
      }
 else {
         local_b0._4_4_ = *(undefined4*)( this + 0x138 );
         local_a8 = *(undefined4*)( this + 0x13c );
         uVar1 = *(undefined4*)( this + 0x134 );
      }

      local_b0 = CONCAT44(local_b0._4_4_, uVar1);
      if (this[0x60] != (NavAgent)0x0) {
         local_b0 = Vector3::limit_length(*(float*)( this + 0x40 ));
      }

      local_a4 = local_b0;
      local_9c = local_a8;
      Variant::Variant((Variant*)local_68, (Vector3*)&local_a4);
      Variant::Variant((Variant*)local_50, 0);
      local_88[0] = 0;
      local_80 = (undefined1[16])0x0;
      local_98[0] = (Variant*)local_68;
      Callable::callp((Variant**)( this + 0x1c0 ), (int)local_98, (Variant*)0x1, (CallError*)local_88);
      if (Variant::needs_deinit[local_50[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_68[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_88[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* NavAgent::set_neighbor_distance(float) */void NavAgent::set_neighbor_distance(NavAgent *this, float param_1) {
   *(float*)( this + 0x50 ) = param_1;
   if (this[0x1b0] == (NavAgent)0x0) {
      *(float*)( this + 0x94 ) = param_1;
   }
 else {
      *(float*)( this + 0x15c ) = param_1;
   }

   this[0x1d0] = (NavAgent)0x1;
   if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x1e0 ) == 0 )) {
      NavMap::add_agent_sync_dirty_request(*(SelfList**)( this + 0x68 ));
      return;
   }

   return;
}
/* NavAgent::set_max_neighbors(int) */void NavAgent::set_max_neighbors(NavAgent *this, int param_1) {
   *(int*)( this + 0x4c ) = param_1;
   if (this[0x1b0] == (NavAgent)0x0) {
      *(long*)( this + 0x88 ) = (long)param_1;
   }
 else {
      *(long*)( this + 0x150 ) = (long)param_1;
   }

   this[0x1d0] = (NavAgent)0x1;
   if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x1e0 ) == 0 )) {
      NavMap::add_agent_sync_dirty_request(*(SelfList**)( this + 0x68 ));
      return;
   }

   return;
}
/* NavAgent::set_time_horizon_agents(float) */void NavAgent::set_time_horizon_agents(NavAgent *this, float param_1) {
   *(float*)( this + 0x44 ) = param_1;
   if (this[0x1b0] == (NavAgent)0x0) {
      *(float*)( this + 0xe4 ) = param_1;
   }
 else {
      *(float*)( this + 0x164 ) = param_1;
   }

   this[0x1d0] = (NavAgent)0x1;
   if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x1e0 ) == 0 )) {
      NavMap::add_agent_sync_dirty_request(*(SelfList**)( this + 0x68 ));
      return;
   }

   return;
}
/* NavAgent::set_time_horizon_obstacles(float) */void NavAgent::set_time_horizon_obstacles(NavAgent *this, float param_1) {
   *(float*)( this + 0x48 ) = param_1;
   if (this[0x1b0] == (NavAgent)0x0) {
      *(float*)( this + 0xe8 ) = param_1;
   }
 else {
      *(float*)( this + 0x168 ) = param_1;
   }

   this[0x1d0] = (NavAgent)0x1;
   if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x1e0 ) == 0 )) {
      NavMap::add_agent_sync_dirty_request(*(SelfList**)( this + 0x68 ));
      return;
   }

   return;
}
/* NavAgent::set_radius(float) */void NavAgent::set_radius(NavAgent *this, float param_1) {
   *(float*)( this + 0x3c ) = param_1;
   if (this[0x1b0] == (NavAgent)0x0) {
      *(float*)( this + 0xe0 ) = param_1;
   }
 else {
      *(float*)( this + 0x160 ) = param_1;
   }

   this[0x1d0] = (NavAgent)0x1;
   if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x1e0 ) == 0 )) {
      NavMap::add_agent_sync_dirty_request(*(SelfList**)( this + 0x68 ));
      return;
   }

   return;
}
/* NavAgent::set_height(float) */void NavAgent::set_height(NavAgent *this, float param_1) {
   *(float*)( this + 0x38 ) = param_1;
   if (this[0x1b0] == (NavAgent)0x0) {
      *(float*)( this + 0xf4 ) = param_1;
   }
 else {
      *(float*)( this + 0x1a0 ) = param_1;
   }

   this[0x1d0] = (NavAgent)0x1;
   if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x1e0 ) == 0 )) {
      NavMap::add_agent_sync_dirty_request(*(SelfList**)( this + 0x68 ));
      return;
   }

   return;
}
/* NavAgent::set_max_speed(float) */void NavAgent::set_max_speed(NavAgent *this, float param_1) {
   *(float*)( this + 0x40 ) = param_1;
   if (this[0x1b1] != (NavAgent)0x0) {
      if (this[0x1b0] == (NavAgent)0x0) {
         *(float*)( this + 0x90 ) = param_1;
      }
 else {
         *(float*)( this + 0x158 ) = param_1;
      }

   }

   this[0x1d0] = (NavAgent)0x1;
   if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x1e0 ) == 0 )) {
      NavMap::add_agent_sync_dirty_request(*(SelfList**)( this + 0x68 ));
      return;
   }

   return;
}
/* NavAgent::set_position(Vector3) */void NavAgent::set_position(undefined8 param_1, undefined4 param_2, long param_3) {
   *(undefined8*)( param_3 + 8 ) = param_1;
   *(undefined4*)( param_3 + 0x10 ) = param_2;
   if (*(char*)( param_3 + 0x1b1 ) != '\0') {
      if (*(char*)( param_3 + 0x1b0 ) == '\0') {
         *(int*)( param_3 + 0xf8 ) = (int)( (ulong)param_1 >> 0x20 );
         *(ulong*)( param_3 + 0xd0 ) = CONCAT44(param_2, (int)param_1);
      }
 else {
         *(undefined8*)( param_3 + 0x11c ) = param_1;
         *(undefined4*)( param_3 + 0x124 ) = param_2;
      }

   }

   *(undefined1*)( param_3 + 0x1d0 ) = 1;
   if (( *(SelfList**)( param_3 + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( param_3 + 0x1e0 ) == 0 )) {
      NavMap::add_agent_sync_dirty_request(*(SelfList**)( param_3 + 0x68 ));
      return;
   }

   return;
}
/* NavAgent::set_target_position(Vector3) */void NavAgent::set_target_position(undefined8 param_1, undefined4 param_2, long param_3) {
   *(undefined8*)( param_3 + 0x14 ) = param_1;
   *(undefined4*)( param_3 + 0x1c ) = param_2;
   return;
}
/* NavAgent::set_velocity(Vector3) */void NavAgent::set_velocity(undefined8 param_1, undefined4 param_2, long param_3) {
   *(undefined8*)( param_3 + 0x20 ) = param_1;
   *(undefined4*)( param_3 + 0x28 ) = param_2;
   if (*(char*)( param_3 + 0x1b1 ) != '\0') {
      if (*(char*)( param_3 + 0x1b0 ) == '\0') {
         *(ulong*)( param_3 + 0xd8 ) = CONCAT44(*(undefined4*)( param_3 + 0x28 ), *(undefined4*)( param_3 + 0x20 ));
      }
 else {
         *(undefined4*)( param_3 + 0x130 ) = *(undefined4*)( param_3 + 0x28 );
         *(ulong*)( param_3 + 0x128 ) = CONCAT44(*(undefined4*)( param_3 + 0x24 ), *(undefined4*)( param_3 + 0x20 ));
      }

   }

   *(undefined1*)( param_3 + 0x1d0 ) = 1;
   if (( *(SelfList**)( param_3 + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( param_3 + 0x1e0 ) == 0 )) {
      NavMap::add_agent_sync_dirty_request(*(SelfList**)( param_3 + 0x68 ));
      return;
   }

   return;
}
/* NavAgent::set_velocity_forced(Vector3) */void NavAgent::set_velocity_forced(undefined8 param_1, undefined4 param_2, long param_3) {
   *(undefined8*)( param_3 + 0x2c ) = param_1;
   *(undefined4*)( param_3 + 0x34 ) = param_2;
   if (*(char*)( param_3 + 0x1b1 ) != '\0') {
      if (*(char*)( param_3 + 0x1b0 ) == '\0') {
         *(ulong*)( param_3 + 0xec ) = CONCAT44(param_2, (int)param_1);
      }
 else {
         *(undefined4*)( param_3 + 0x13c ) = param_2;
         *(undefined8*)( param_3 + 0x134 ) = param_1;
      }

   }

   *(undefined1*)( param_3 + 0x1d0 ) = 1;
   if (( *(SelfList**)( param_3 + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( param_3 + 0x1e0 ) == 0 )) {
      NavMap::add_agent_sync_dirty_request(*(SelfList**)( param_3 + 0x68 ));
      return;
   }

   return;
}
/* NavAgent::update() */void NavAgent::update(NavAgent *this) {
   if (this[0x1b1] != (NavAgent)0x0) {
      if (this[0x1b0] != (NavAgent)0x0) {
         *(undefined4*)( this + 0x28 ) = *(undefined4*)( this + 0x13c );
         *(undefined8*)( this + 0x20 ) = *(undefined8*)( this + 0x134 );
         return;
      }

      *(undefined4*)( this + 0x24 ) = 0;
      *(undefined4*)( this + 0x20 ) = *(undefined4*)( this + 0xec );
      *(undefined4*)( this + 0x28 ) = *(undefined4*)( this + 0xf0 );
   }

   return;
}
/* NavAgent::set_avoidance_mask(unsigned int) */void NavAgent::set_avoidance_mask(NavAgent *this, uint param_1) {
   *(uint*)( this + 0x1b8 ) = param_1;
   if (this[0x1b0] == (NavAgent)0x0) {
      *(uint*)( this + 0x100 ) = param_1;
   }
 else {
      *(uint*)( this + 0x1a8 ) = param_1;
   }

   this[0x1d0] = (NavAgent)0x1;
   if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x1e0 ) == 0 )) {
      NavMap::add_agent_sync_dirty_request(*(SelfList**)( this + 0x68 ));
      return;
   }

   return;
}
/* NavAgent::set_avoidance_layers(unsigned int) */void NavAgent::set_avoidance_layers(NavAgent *this, uint param_1) {
   *(uint*)( this + 0x1b4 ) = param_1;
   if (this[0x1b0] == (NavAgent)0x0) {
      *(uint*)( this + 0xfc ) = param_1;
   }
 else {
      *(uint*)( this + 0x1a4 ) = param_1;
   }

   this[0x1d0] = (NavAgent)0x1;
   if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x1e0 ) == 0 )) {
      NavMap::add_agent_sync_dirty_request(*(SelfList**)( this + 0x68 ));
      return;
   }

   return;
}
/* NavAgent::set_avoidance_priority(float) */SelfList *NavAgent::set_avoidance_priority(float param_1) {
   SelfList *pSVar1;
   long in_RDI;
   if (param_1 < 0.0) {
      pSVar1 = (SelfList*)_err_print_error("set_avoidance_priority", "modules/navigation/nav_agent.cpp", 0x149, "Condition \"p_priority < 0.0\" is true.", "Avoidance priority must be between 0.0 and 1.0 inclusive.", 0, 0);
      return pSVar1;
   }

   if (_LC5 < param_1) {
      pSVar1 = (SelfList*)0x0;
      _err_print_error("set_avoidance_priority", "modules/navigation/nav_agent.cpp", 0x14a, "Condition \"p_priority > 1.0\" is true.", "Avoidance priority must be between 0.0 and 1.0 inclusive.", 0);
   }
 else {
      *(float*)( in_RDI + 0x1bc ) = param_1;
      if (*(char*)( in_RDI + 0x1b0 ) == '\0') {
         *(float*)( in_RDI + 0x104 ) = param_1;
      }
 else {
         *(float*)( in_RDI + 0x1ac ) = param_1;
      }

      pSVar1 = *(SelfList**)( in_RDI + 0x68 );
      *(undefined1*)( in_RDI + 0x1d0 ) = 1;
      if (( pSVar1 != (SelfList*)0x0 ) && ( *(long*)( in_RDI + 0x1e0 ) == 0 )) {
         pSVar1 = (SelfList*)NavMap::add_agent_sync_dirty_request(pSVar1);
         return pSVar1;
      }

   }

   return pSVar1;
}
/* NavAgent::is_dirty() const */NavAgent NavAgent::is_dirty(NavAgent *this) {
   return this[0x1d0];
}
/* NavAgent::sync() */void NavAgent::sync(NavAgent *this) {
   this[0x1d0] = (NavAgent)0x0;
   return;
}
/* NavAgent::get_avoidance_data() const */void NavAgent::get_avoidance_data(void) {
   char cVar1;
   Variant *pVVar2;
   long in_RSI;
   Dictionary *in_RDI;
   long in_FS_OFFSET;
   ulong local_88;
   undefined4 local_80;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(in_RDI);
   if (*(char*)( in_RSI + 0x1b0 ) == '\0') {
      Variant::Variant((Variant*)local_58, *(int*)( in_RSI + 0x88 ));
      Variant::Variant((Variant*)local_78, "max_neighbors");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 0x90 ));
      Variant::Variant((Variant*)local_78, "max_speed");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 0x94 ));
      Variant::Variant((Variant*)local_78, "neighbor_distance");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      local_80 = *(undefined4*)( in_RSI + 0x9c );
      local_88 = ( ulong ) * (uint*)( in_RSI + 0x98 );
      Variant::Variant((Variant*)local_58, (Vector3*)&local_88);
      Variant::Variant((Variant*)local_78, "new_velocity");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      local_80 = *(undefined4*)( in_RSI + 0xf0 );
      local_88 = ( ulong ) * (uint*)( in_RSI + 0xec );
      Variant::Variant((Variant*)local_58, (Vector3*)&local_88);
      Variant::Variant((Variant*)local_78, "velocity");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      local_80 = *(undefined4*)( in_RSI + 0xd4 );
      local_88 = ( ulong ) * (uint*)( in_RSI + 0xd0 );
      Variant::Variant((Variant*)local_58, (Vector3*)&local_88);
      Variant::Variant((Variant*)local_78, "position");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      local_80 = *(undefined4*)( in_RSI + 0xdc );
      local_88 = ( ulong ) * (uint*)( in_RSI + 0xd8 );
      Variant::Variant((Variant*)local_58, (Vector3*)&local_88);
      Variant::Variant((Variant*)local_78, "preferred_velocity");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 0xe0 ));
      Variant::Variant((Variant*)local_78, "radius");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 0xe4 ));
      Variant::Variant((Variant*)local_78, "time_horizon_agents");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 0xe8 ));
      Variant::Variant((Variant*)local_78, "time_horizon_obstacles");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 0xf4 ));
      Variant::Variant((Variant*)local_78, "height");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, *(int*)( in_RSI + 0xfc ));
      Variant::Variant((Variant*)local_78, "avoidance_layers");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, *(int*)( in_RSI + 0x100 ));
      Variant::Variant((Variant*)local_78, "avoidance_mask");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 0x104 ));
      Variant::Variant((Variant*)local_78, "avoidance_priority");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
         cVar1 = Variant::needs_deinit[local_78[0]];
         goto joined_r0x00101a44;
      }

   }
 else {
      Variant::Variant((Variant*)local_58, *(int*)( in_RSI + 0x150 ));
      Variant::Variant((Variant*)local_78, "max_neighbors");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 0x158 ));
      Variant::Variant((Variant*)local_78, "max_speed");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 0x15c ));
      Variant::Variant((Variant*)local_78, "neighbor_distance");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      local_88 = *(ulong*)( in_RSI + 0x110 );
      local_80 = *(undefined4*)( in_RSI + 0x118 );
      Variant::Variant((Variant*)local_58, (Vector3*)&local_88);
      Variant::Variant((Variant*)local_78, "new_velocity");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      local_80 = *(undefined4*)( in_RSI + 0x13c );
      local_88 = *(ulong*)( in_RSI + 0x134 );
      Variant::Variant((Variant*)local_58, (Vector3*)&local_88);
      Variant::Variant((Variant*)local_78, "velocity");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      local_80 = *(undefined4*)( in_RSI + 0x124 );
      local_88 = *(ulong*)( in_RSI + 0x11c );
      Variant::Variant((Variant*)local_58, (Vector3*)&local_88);
      Variant::Variant((Variant*)local_78, "position");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      local_80 = *(undefined4*)( in_RSI + 0x130 );
      local_88 = *(ulong*)( in_RSI + 0x128 );
      Variant::Variant((Variant*)local_58, (Vector3*)&local_88);
      Variant::Variant((Variant*)local_78, "preferred_velocity");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 0x160 ));
      Variant::Variant((Variant*)local_78, "radius");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 0x164 ));
      Variant::Variant((Variant*)local_78, "time_horizon_agents");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, 0.0);
      Variant::Variant((Variant*)local_78, "time_horizon_obstacles");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 0x1a0 ));
      Variant::Variant((Variant*)local_78, "height");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, *(int*)( in_RSI + 0x1a4 ));
      Variant::Variant((Variant*)local_78, "avoidance_layers");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, *(int*)( in_RSI + 0x1a8 ));
      Variant::Variant((Variant*)local_78, "avoidance_mask");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 0x1ac ));
      Variant::Variant((Variant*)local_78, "avoidance_priority");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar2 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_58[0];
         *(undefined8*)( pVVar2 + 8 ) = local_50;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

   }

   cVar1 = Variant::needs_deinit[local_78[0]];
   joined_r0x00101a44:if (cVar1 == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* NavAgent::set_paused(bool) */void NavAgent::set_paused(NavAgent *this, bool param_1) {
   NavAgent *pNVar1;
   if (this[0x1d8] != (NavAgent)param_1) {
      pNVar1 = *(NavAgent**)( this + 0x68 );
      this[0x1d8] = (NavAgent)param_1;
      if (pNVar1 != (NavAgent*)0x0) {
         if (param_1) {
            NavMap::remove_agent_as_controlled(pNVar1);
            return;
         }

         NavMap::set_agent_as_controlled(pNVar1);
         return;
      }

   }

   return;
}
/* NavAgent::get_paused() const */NavAgent NavAgent::get_paused(NavAgent *this) {
   return this[0x1d8];
}
/* NavAgent::request_sync() */void NavAgent::request_sync(NavAgent *this) {
   if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x1e0 ) == 0 )) {
      NavMap::add_agent_sync_dirty_request(*(SelfList**)( this + 0x68 ));
      return;
   }

   return;
}
/* NavAgent::cancel_sync_request() */void NavAgent::cancel_sync_request(NavAgent *this) {
   if (( *(SelfList**)( this + 0x68 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x1e0 ) != 0 )) {
      NavMap::remove_agent_sync_dirty_request(*(SelfList**)( this + 0x68 ));
      return;
   }

   return;
}
/* NavAgent::NavAgent() */void NavAgent::NavAgent(NavAgent *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   uVar1 = _LC5;
   *(undefined8*)( this + 0x48 ) = 0x500000000;
   *(undefined8*)this = 0;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 12*i + 8 ) ) = 0;
      *(undefined4*)( this + ( 12*i + 16 ) ) = 0;
   }

   *(undefined8*)( this + 0x50 ) = 0x40a00000;
   *(undefined8*)( this + 0x58 ) = 0;
   this[0x60] = (NavAgent)0x1;
   *(undefined8*)( this + 0x68 ) = 0;
   for (int i = 0; i < 4; i++) {
      *(undefined4*)( this + ( 4*i + 56 ) ) = uVar1;
   }

   RVO2D::Agent2D::Agent2D((Agent2D*)( this + 0x70 ));
   RVO3D::Agent3D::Agent3D((Agent3D*)( this + 0x110 ));
   *(undefined4*)( this + 0x1bc ) = 0x3f800000;
   *(undefined2*)( this + 0x1b0 ) = 0;
   uVar2 = _LC23;
   *(undefined8*)( this + 0x1c0 ) = 0;
   *(undefined8*)( this + 0x1b4 ) = uVar2;
   *(undefined8*)( this + 0x1c8 ) = 0;
   this[0x1d0] = (NavAgent)0x1;
   *(undefined4*)( this + 0x1d4 ) = 0;
   this[0x1d8] = (NavAgent)0x0;
   *(undefined8*)( this + 0x1e0 ) = 0;
   *(undefined8*)( this + 0x1f0 ) = 0;
   *(undefined8*)( this + 0x1f8 ) = 0;
   *(NavAgent**)( this + 0x1e8 ) = this;
   return;
}
/* NavAgent::~NavAgent() */void NavAgent::~NavAgent(NavAgent *this) {
   long lVar1;
   long lVar2;
   void *pvVar3;
   long *plVar4;
   plVar4 = *(long**)( this + 0x1e0 );
   if (*(SelfList**)( this + 0x68 ) != (SelfList*)0x0) {
      if (plVar4 == (long*)0x0) goto LAB_00102226;
      NavMap::remove_agent_sync_dirty_request(*(SelfList**)( this + 0x68 ));
      plVar4 = *(long**)( this + 0x1e0 );
   }

   if (plVar4 != (long*)0x0) {
      lVar1 = *(long*)( this + 0x1f0 );
      if (lVar1 != 0) {
         *(undefined8*)( lVar1 + 0x18 ) = *(undefined8*)( this + 0x1f8 );
      }

      lVar2 = *(long*)( this + 0x1f8 );
      if (lVar2 != 0) {
         *(long*)( lVar2 + 0x10 ) = lVar1;
      }

      if (this + 0x1e0 == (NavAgent*)*plVar4) {
         *plVar4 = *(long*)( this + 0x1f0 );
      }

      if (this + 0x1e0 == (NavAgent*)plVar4[1]) {
         plVar4[1] = lVar2;
      }

   }

   LAB_00102226:Callable::~Callable((Callable*)( this + 0x1c0 ));
   pvVar3 = *(void**)( this + 0x188 );
   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0x198 ) - (long)pvVar3);
   }

   pvVar3 = *(void**)( this + 0x170 );
   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0x180 ) - (long)pvVar3);
   }

   pvVar3 = *(void**)( this + 0xb8 );
   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 200 ) - (long)pvVar3);
   }

   pvVar3 = *(void**)( this + 0xa0 );
   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0xb0 ) - (long)pvVar3);
   }

   pvVar3 = *(void**)( this + 0x70 );
   if (pvVar3 != (void*)0x0) {
      operator_delete(pvVar3, *(long*)( this + 0x80 ) - (long)pvVar3);
      return;
   }

   return;
}

