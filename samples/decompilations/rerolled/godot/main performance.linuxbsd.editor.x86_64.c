/* Performance::get_monitor_modification_time() */undefined8 Performance::get_monitor_modification_time(Performance *this) {
   return *(undefined8*)( this + 0x1c0 );
}
/* Performance::has_custom_monitor(StringName const&) */undefined8 Performance::has_custom_monitor(Performance *this, StringName *param_1) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   int iVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 0x198 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x1bc ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1b8 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1b8 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar15 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x1a0 ) + lVar13 * 4 );
      iVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 0x198 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x1a0 ) + lVar13 * 4 );
            iVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
 else {
         *(undefined8*)this = 0;
      }

   }

   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) {
            return;
         }

         LOCK();
         lVar3 = *plVar1;
         bVar4 = lVar2 == lVar3;
         if (bVar4) {
            *plVar1 = lVar2 + 1;
            lVar3 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* Performance::_get_node_count() const */undefined8 Performance::_get_node_count(void) {
   long *plVar1;
   long lVar2;
   undefined8 uVar3;
   plVar1 = (long*)OS::get_singleton();
   lVar2 = ( **(code**)( *plVar1 + 0x1d0 ) )(plVar1);
   if (lVar2 != 0) {
      lVar2 = __dynamic_cast(lVar2, &Object::typeinfo, &SceneTree::typeinfo, 0);
      if (lVar2 != 0) {
         uVar3 = SceneTree::get_node_count();
         return uVar3;
      }

   }

   return 0;
}
/* Performance::get_monitor(Performance::Monitor) const */double Performance::get_monitor(Performance *this, undefined4 param_2) {
   int iVar1;
   code *UNRECOVERED_JUMPTABLE;
   long *plVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   double dVar4;
   switch (param_2) {
      case 0:
    plVar2 = (long *)Engine::get_singleton();
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x40);
    if (UNRECOVERED_JUMPTABLE == Engine::get_frames_per_second) {
      dVar4 = (double)FUN_00100268(plVar2[7]);
      return dVar4;
    }
    break;
      case 1:
    dVar4 = (double)FUN_00100268(*(undefined8 *)(this + 0x178));
    return dVar4;
      case 2:
    dVar4 = (double)FUN_00100268(*(undefined8 *)(this + 0x180));
    return dVar4;
      case 3:
    dVar4 = (double)FUN_00100268(*(undefined8 *)(this + 0x188));
    return dVar4;
      case 4:
    uVar3 = Memory::get_mem_usage();
    if (-1 < (long)uVar3) {
      dVar4 = (double)FUN_00100268((double)(long)uVar3);
      return dVar4;
    }
    dVar4 = (double)FUN_00100268((double)uVar3);
    return dVar4;
      case 5:
    uVar3 = Memory::get_mem_max_usage();
    if (-1 < (long)uVar3) {
      dVar4 = (double)FUN_00100268((double)(long)uVar3);
      return dVar4;
    }
    dVar4 = (double)FUN_00100268((double)uVar3);
    return dVar4;
      case 6:
    MessageQueue::thread_singleton();
    if (*(long *)(in_FS_OFFSET + lRam0000000000100638) != 0) {
      MessageQueue::thread_singleton();
    }
    iVar1 = CallQueue::get_max_buffer_usage();
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 7:
    iVar1 = ObjectDB::get_object_count();
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 8:
    iVar1 = ResourceCache::get_cached_resource_count();
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 9:
    iVar1 = _get_node_count();
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 10:
    dVar4 = (double)FUN_00100268((double)(int)Node::orphan_node_count);
    return dVar4;
      case 0xb:
    plVar2 = (long *)RenderingServer::get_singleton();
    uVar3 = (**(code **)(*plVar2 + 0x1200))(plVar2,0);
    if (-1 < (long)uVar3) {
      dVar4 = (double)FUN_00100268((double)(long)uVar3);
      return dVar4;
    }
    dVar4 = (double)FUN_00100268((double)uVar3);
    return dVar4;
      case 0xc:
    plVar2 = (long *)RenderingServer::get_singleton();
    uVar3 = (**(code **)(*plVar2 + 0x1200))(plVar2,1);
    if (-1 < (long)uVar3) {
      dVar4 = (double)FUN_00100268((double)(long)uVar3);
      return dVar4;
    }
    dVar4 = (double)FUN_00100268((double)uVar3);
    return dVar4;
      case 0xd:
    plVar2 = (long *)RenderingServer::get_singleton();
    uVar3 = (**(code **)(*plVar2 + 0x1200))(plVar2,2);
    if (-1 < (long)uVar3) {
      dVar4 = (double)FUN_00100268((double)(long)uVar3);
      return dVar4;
    }
    dVar4 = (double)FUN_00100268((double)uVar3);
    return dVar4;
      case 0xe:
    plVar2 = (long *)RenderingServer::get_singleton();
    uVar3 = (**(code **)(*plVar2 + 0x1200))(plVar2,5);
    if (-1 < (long)uVar3) {
      dVar4 = (double)FUN_00100268((double)(long)uVar3);
      return dVar4;
    }
    dVar4 = (double)FUN_00100268((double)uVar3);
    return dVar4;
      case 0xf:
    plVar2 = (long *)RenderingServer::get_singleton();
    uVar3 = (**(code **)(*plVar2 + 0x1200))(plVar2,3);
    if (-1 < (long)uVar3) {
      dVar4 = (double)FUN_00100268((double)(long)uVar3);
      return dVar4;
    }
    dVar4 = (double)FUN_00100268((double)uVar3);
    return dVar4;
      case 0x10:
    plVar2 = (long *)RenderingServer::get_singleton();
    uVar3 = (**(code **)(*plVar2 + 0x1200))(plVar2,4);
    if (-1 < (long)uVar3) {
      dVar4 = (double)FUN_00100268((double)(long)uVar3);
      return dVar4;
    }
    dVar4 = (double)FUN_00100268((double)uVar3);
    return dVar4;
      case 0x11:
    plVar2 = (long *)PhysicsServer2D::get_singleton();
    iVar1 = (**(code **)(*plVar2 + 0x5a0))(plVar2,0);
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 0x12:
    plVar2 = (long *)PhysicsServer2D::get_singleton();
    iVar1 = (**(code **)(*plVar2 + 0x5a0))(plVar2,1);
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 0x13:
    plVar2 = (long *)PhysicsServer2D::get_singleton();
    iVar1 = (**(code **)(*plVar2 + 0x5a0))(plVar2,2);
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 0x14:
    plVar2 = (long *)PhysicsServer3D::get_singleton();
    iVar1 = (**(code **)(*plVar2 + 0x730))(plVar2,0);
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 0x15:
    plVar2 = (long *)PhysicsServer3D::get_singleton();
    iVar1 = (**(code **)(*plVar2 + 0x730))(plVar2,1);
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 0x16:
    plVar2 = (long *)PhysicsServer3D::get_singleton();
    iVar1 = (**(code **)(*plVar2 + 0x730))(plVar2,2);
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 0x17:
    plVar2 = (long *)AudioServer::get_singleton();
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x1a0);
    break;
      case 0x18:
    plVar2 = (long *)NavigationServer3D::get_singleton();
    iVar1 = (**(code **)(*plVar2 + 0x608))(plVar2,0);
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 0x19:
    plVar2 = (long *)NavigationServer3D::get_singleton();
    iVar1 = (**(code **)(*plVar2 + 0x608))(plVar2,1);
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 0x1a:
    plVar2 = (long *)NavigationServer3D::get_singleton();
    iVar1 = (**(code **)(*plVar2 + 0x608))(plVar2,2);
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 0x1b:
    plVar2 = (long *)NavigationServer3D::get_singleton();
    iVar1 = (**(code **)(*plVar2 + 0x608))(plVar2,3);
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 0x1c:
    plVar2 = (long *)NavigationServer3D::get_singleton();
    iVar1 = (**(code **)(*plVar2 + 0x608))(plVar2,4);
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 0x1d:
    plVar2 = (long *)NavigationServer3D::get_singleton();
    iVar1 = (**(code **)(*plVar2 + 0x608))(plVar2,5);
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 0x1e:
    plVar2 = (long *)NavigationServer3D::get_singleton();
    iVar1 = (**(code **)(*plVar2 + 0x608))(plVar2,6);
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 0x1f:
    plVar2 = (long *)NavigationServer3D::get_singleton();
    iVar1 = (**(code **)(*plVar2 + 0x608))(plVar2,7);
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 0x20:
    plVar2 = (long *)NavigationServer3D::get_singleton();
    iVar1 = (**(code **)(*plVar2 + 0x608))(plVar2,8);
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 0x21:
    plVar2 = (long *)NavigationServer3D::get_singleton();
    iVar1 = (**(code **)(*plVar2 + 0x608))(plVar2,9);
    dVar4 = (double)FUN_00100268((double)iVar1);
    return dVar4;
      case 0x22:
    plVar2 = (long *)RenderingServer::get_singleton();
    uVar3 = (**(code **)(*plVar2 + 0x1200))(plVar2,6);
    if (-1 < (long)uVar3) {
      dVar4 = (double)FUN_00100268((double)(long)uVar3);
      return dVar4;
    }
    dVar4 = (double)FUN_00100268((double)uVar3);
    return dVar4;
      case 0x23:
    plVar2 = (long *)RenderingServer::get_singleton();
    uVar3 = (**(code **)(*plVar2 + 0x1200))(plVar2,7);
    if (-1 < (long)uVar3) {
      dVar4 = (double)FUN_00100268((double)(long)uVar3);
      return dVar4;
    }
    dVar4 = (double)FUN_00100268((double)uVar3);
    return dVar4;
      case 0x24:
    plVar2 = (long *)RenderingServer::get_singleton();
    uVar3 = (**(code **)(*plVar2 + 0x1200))(plVar2,8);
    if (-1 < (long)uVar3) {
      dVar4 = (double)FUN_00100268((double)(long)uVar3);
      return dVar4;
    }
    dVar4 = (double)FUN_00100268((double)uVar3);
    return dVar4;
      case 0x25:
    plVar2 = (long *)RenderingServer::get_singleton();
    uVar3 = (**(code **)(*plVar2 + 0x1200))(plVar2,9);
    if (-1 < (long)uVar3) {
      return (double)(long)uVar3;
    }
    dVar4 = (double)FUN_00100268((double)uVar3);
    return dVar4;
      case 0x26:
    plVar2 = (long *)RenderingServer::get_singleton();
    uVar3 = (**(code **)(*plVar2 + 0x1200))(plVar2,10);
    if (-1 < (long)uVar3) {
      dVar4 = (double)FUN_00100268((double)(long)uVar3);
      return dVar4;
    }
    dVar4 = (double)FUN_00100268((double)uVar3);
    return dVar4;
      default:
    dVar4 = (double)FUN_00100268(0);
    return dVar4;
   }

   /* WARNING: Could not recover jumptable at 0x001004a8. Too many branches */
   /* WARNING: Treating indirect jump as call */
   dVar4 = (double)( *UNRECOVERED_JUMPTABLE )(plVar2);
   return dVar4;
}
void FUN_00100268(void) {
   return;
}
void switchD_00100233::caseD_0(void) {
   long *plVar1;
   plVar1 = (long*)Engine::get_singleton();
   if (*(code**)( *plVar1 + 0x40 ) == Engine::get_frames_per_second) {
      FUN_00100268(plVar1[7]);
      return;
   }

   /* WARNING: Could not recover jumptable at 0x001004a8. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x40 ) )();
   return;
}
/* Performance::get_monitor_name(Performance::Monitor) const */StrRange *Performance::get_monitor_name(StrRange *param_1, undefined8 param_2, uint param_3) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 < 0x27) {
      *(undefined8*)param_1 = 0;
      if (*(char**)( get_monitor_name(Performance::Monitor) ) != (char*)0x0) {
         strlen(*(char**)( get_monitor_name(Performance::Monitor) ));
      }

      String::parse_latin1(param_1);
   }
 else {
      _err_print_index_error("get_monitor_name", "main/performance.cpp", 0x71, (ulong)param_3, 0x27, "p_monitor", "MONITOR_MAX", "", false, false);
      *(undefined8*)param_1 = 0;
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Performance::get_monitor_type(Performance::Monitor) const */undefined4 Performance::get_monitor_type(undefined8 param_1, uint param_2) {
   if (param_2 < 0x27) {
      return *(undefined4*)( get_monitor_type(Performance::Monitor) );
   }

   _err_print_index_error("get_monitor_type", "main/performance.cpp", 0x103, (ulong)param_2, 0x27, "p_monitor", "MONITOR_MAX", "", false, false);
   return 0;
}
/* Performance::set_process_time(double) */void Performance::set_process_time(Performance *this, double param_1) {
   *(double*)( this + 0x178 ) = param_1;
   return;
}
/* Performance::set_physics_process_time(double) */void Performance::set_physics_process_time(Performance *this, double param_1) {
   *(double*)( this + 0x180 ) = param_1;
   return;
}
/* Performance::set_navigation_process_time(double) */void Performance::set_navigation_process_time(Performance *this, double param_1) {
   *(double*)( this + 0x188 ) = param_1;
   return;
}
/* Performance::Performance() */void Performance::Performance(Performance *this) {
   Object::Object((Object*)this);
   *(undefined8*)( this + 0x1b8 ) = 2;
   *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1a8 ) = (undefined1[16])0x0;
   *(undefined***)this = &PTR__initialize_classv_0010db78;
   *(undefined8*)( this + 0x188 ) = 0;
   *(undefined8*)( this + 0x1c0 ) = 0;
   singleton = this;
   *(undefined1(*) [16])( this + 0x178 ) = (undefined1[16])0x0;
   return;
}
/* Performance::MonitorCall::MonitorCall() */void Performance::MonitorCall::MonitorCall(MonitorCall *this) {
   *(undefined8*)this = 0;
   *(undefined8*)( this + 8 ) = 0;
   *(undefined8*)( this + 0x18 ) = 0;
   return;
}
/* Performance::_bind_methods() */void Performance::_bind_methods(void) {
   char cVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   MethodBind *pMVar5;
   long *plVar6;
   uint uVar7;
   long lVar8;
   long in_FS_OFFSET;
   undefined8 local_e8;
   undefined8 local_e0;
   long local_d8;
   long local_d0;
   char *local_c8;
   undefined8 local_c0;
   long *local_b8;
   char *local_a8;
   undefined8 local_a0;
   Variant *local_98;
   char *pcStack_90;
   char *local_88;
   undefined8 local_80;
   Variant **local_78;
   undefined1 auStack_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a0 = 0;
   local_a8 = "monitor";
   local_78 = (Variant**)&local_a8;
   uVar7 = (uint)(Variant*)&local_78;
   D_METHODP((char*)&local_c8, (char***)"get_monitor", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar5 = create_method_bind<Performance,double,Performance::Monitor>(get_monitor);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar6 = local_b8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_b8[-1];
         local_b8 = (long*)0x0;
         if (lVar2 != 0) {
            lVar8 = 0;
            plVar6 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   Array::Array((Array*)&local_d0);
   local_88 = "arguments";
   local_98 = (Variant*)&_LC20;
   pcStack_90 = "callable";
   auStack_70._8_8_ = &local_88;
   auStack_70._0_8_ = &pcStack_90;
   local_80 = 0;
   local_78 = &local_98;
   D_METHODP((char*)&local_c8, (char***)"add_custom_monitor", uVar7);
   Variant::Variant((Variant*)&local_78, (Array*)&local_d0);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar5 = create_method_bind<Performance,StringName_const&,Callable_const&,Vector<Variant>const&>(add_custom_monitor);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_c8, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar6 = local_b8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_b8[-1];
         local_b8 = (long*)0x0;
         if (lVar2 != 0) {
            lVar8 = 0;
            plVar6 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   Array::~Array((Array*)&local_d0);
   local_98 = (Variant*)&_LC20;
   pcStack_90 = (char*)0x0;
   local_78 = &local_98;
   D_METHODP((char*)&local_c8, (char***)"remove_custom_monitor", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar5 = create_method_bind<Performance,StringName_const&>(remove_custom_monitor);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar6 = local_b8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_b8[-1];
         local_b8 = (long*)0x0;
         if (lVar2 != 0) {
            lVar8 = 0;
            plVar6 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)&_LC20;
   local_78 = &local_98;
   D_METHODP((char*)&local_c8, (char***)"has_custom_monitor", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar5 = create_method_bind<Performance,bool,StringName_const&>(has_custom_monitor);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar6 = local_b8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_b8[-1];
         local_b8 = (long*)0x0;
         if (lVar2 != 0) {
            lVar8 = 0;
            plVar6 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   pcStack_90 = (char*)0x0;
   local_98 = (Variant*)&_LC20;
   local_78 = &local_98;
   D_METHODP((char*)&local_c8, (char***)"get_custom_monitor", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar5 = create_method_bind<Performance,Variant,StringName_const&>(get_custom_monitor);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar6 = local_b8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_b8[-1];
         local_b8 = (long*)0x0;
         if (lVar2 != 0) {
            lVar8 = 0;
            plVar6 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_c8, (char***)"get_monitor_modification_time", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar5 = create_method_bind<Performance,unsigned_long>(get_monitor_modification_time);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar6 = local_b8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_b8[-1];
         local_b8 = (long*)0x0;
         if (lVar2 != 0) {
            lVar8 = 0;
            plVar6 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_c8, (char***)"get_custom_monitor_names", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar5 = create_method_bind<Performance,TypedArray<StringName>>(get_custom_monitor_names);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar6 = local_b8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_b8[-1];
         local_b8 = (long*)0x0;
         if (lVar2 != 0) {
            lVar8 = 0;
            plVar6 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "TIME_FPS", false);
   local_c8 = "TIME_FPS";
   local_e0 = 0;
   local_c0 = 8;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "TIME_PROCESS", false);
   local_c8 = "TIME_PROCESS";
   local_e0 = 0;
   local_c0 = 0xc;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 1, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "TIME_PHYSICS_PROCESS", false);
   local_c8 = "TIME_PHYSICS_PROCESS";
   local_e0 = 0;
   local_c0 = 0x14;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 2, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "TIME_NAVIGATION_PROCESS", false);
   local_c8 = "TIME_NAVIGATION_PROCESS";
   local_e0 = 0;
   local_c0 = 0x17;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 3, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "MEMORY_STATIC", false);
   local_c8 = "MEMORY_STATIC";
   local_e0 = 0;
   local_c0 = 0xd;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 4, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "MEMORY_STATIC_MAX", false);
   local_c8 = "MEMORY_STATIC_MAX";
   local_e0 = 0;
   local_c0 = 0x11;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 5, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "MEMORY_MESSAGE_BUFFER_MAX", false);
   local_c8 = "MEMORY_MESSAGE_BUFFER_MAX";
   local_e0 = 0;
   local_c0 = 0x19;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 6, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "OBJECT_COUNT", false);
   local_c8 = "OBJECT_COUNT";
   local_e0 = 0;
   local_c0 = 0xc;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 7, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "OBJECT_RESOURCE_COUNT", false);
   local_c8 = "OBJECT_RESOURCE_COUNT";
   local_e0 = 0;
   local_c0 = 0x15;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 8, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "OBJECT_NODE_COUNT", false);
   local_c8 = "OBJECT_NODE_COUNT";
   local_e0 = 0;
   local_c0 = 0x11;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 9, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "OBJECT_ORPHAN_NODE_COUNT", false);
   local_c8 = "OBJECT_ORPHAN_NODE_COUNT";
   local_e0 = 0;
   local_c0 = 0x18;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 10, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "RENDER_TOTAL_OBJECTS_IN_FRAME", false);
   local_c8 = "RENDER_TOTAL_OBJECTS_IN_FRAME";
   local_e0 = 0;
   local_c0 = 0x1d;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0xb, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "RENDER_TOTAL_PRIMITIVES_IN_FRAME", false);
   local_c8 = "RENDER_TOTAL_PRIMITIVES_IN_FRAME";
   local_e0 = 0;
   local_c0 = 0x20;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0xc, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "RENDER_TOTAL_DRAW_CALLS_IN_FRAME", false);
   local_c8 = "RENDER_TOTAL_DRAW_CALLS_IN_FRAME";
   local_e0 = 0;
   local_c0 = 0x20;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0xd, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "RENDER_VIDEO_MEM_USED", false);
   local_c8 = "RENDER_VIDEO_MEM_USED";
   local_e0 = 0;
   local_c0 = 0x15;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0xe, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "RENDER_TEXTURE_MEM_USED", false);
   local_c8 = "RENDER_TEXTURE_MEM_USED";
   local_e0 = 0;
   local_c0 = 0x17;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0xf, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "RENDER_BUFFER_MEM_USED", false);
   local_c8 = "RENDER_BUFFER_MEM_USED";
   local_e0 = 0;
   local_c0 = 0x16;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x10, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "PHYSICS_2D_ACTIVE_OBJECTS", false);
   local_c8 = "PHYSICS_2D_ACTIVE_OBJECTS";
   local_e0 = 0;
   local_c0 = 0x19;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x11, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "PHYSICS_2D_COLLISION_PAIRS", false);
   local_c8 = "PHYSICS_2D_COLLISION_PAIRS";
   local_e0 = 0;
   local_c0 = 0x1a;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x12, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "PHYSICS_2D_ISLAND_COUNT", false);
   local_c8 = "PHYSICS_2D_ISLAND_COUNT";
   local_e0 = 0;
   local_c0 = 0x17;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x13, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "PHYSICS_3D_ACTIVE_OBJECTS", false);
   local_c8 = "PHYSICS_3D_ACTIVE_OBJECTS";
   local_e0 = 0;
   local_c0 = 0x19;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x14, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "PHYSICS_3D_COLLISION_PAIRS", false);
   local_c8 = "PHYSICS_3D_COLLISION_PAIRS";
   local_e0 = 0;
   local_c0 = 0x1a;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x15, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "PHYSICS_3D_ISLAND_COUNT", false);
   local_c8 = "PHYSICS_3D_ISLAND_COUNT";
   local_e0 = 0;
   local_c0 = 0x17;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x16, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "AUDIO_OUTPUT_LATENCY", false);
   local_c8 = "AUDIO_OUTPUT_LATENCY";
   local_e0 = 0;
   local_c0 = 0x14;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x17, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "NAVIGATION_ACTIVE_MAPS", false);
   local_c8 = "NAVIGATION_ACTIVE_MAPS";
   local_e0 = 0;
   local_c0 = 0x16;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x18, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "NAVIGATION_REGION_COUNT", false);
   local_c8 = "NAVIGATION_REGION_COUNT";
   local_e0 = 0;
   local_c0 = 0x17;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x19, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "NAVIGATION_AGENT_COUNT", false);
   local_c8 = "NAVIGATION_AGENT_COUNT";
   local_e0 = 0;
   local_c0 = 0x16;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x1a, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "NAVIGATION_LINK_COUNT", false);
   local_c8 = "NAVIGATION_LINK_COUNT";
   local_e0 = 0;
   local_c0 = 0x15;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x1b, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "NAVIGATION_POLYGON_COUNT", false);
   local_c8 = "NAVIGATION_POLYGON_COUNT";
   local_e0 = 0;
   local_c0 = 0x18;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x1c, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "NAVIGATION_EDGE_COUNT", false);
   local_c8 = "NAVIGATION_EDGE_COUNT";
   local_e0 = 0;
   local_c0 = 0x15;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x1d, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "NAVIGATION_EDGE_MERGE_COUNT", false);
   local_c8 = "NAVIGATION_EDGE_MERGE_COUNT";
   local_e0 = 0;
   local_c0 = 0x1b;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x1e, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "NAVIGATION_EDGE_CONNECTION_COUNT", false);
   local_c8 = "NAVIGATION_EDGE_CONNECTION_COUNT";
   local_e0 = 0;
   local_c0 = 0x20;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x1f, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "NAVIGATION_EDGE_FREE_COUNT", false);
   local_c8 = "NAVIGATION_EDGE_FREE_COUNT";
   local_e0 = 0;
   local_c0 = 0x1a;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x20, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "NAVIGATION_OBSTACLE_COUNT", false);
   local_c8 = "NAVIGATION_OBSTACLE_COUNT";
   local_e0 = 0;
   local_c0 = 0x19;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x21, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "PIPELINE_COMPILATIONS_CANVAS", false);
   local_c8 = "PIPELINE_COMPILATIONS_CANVAS";
   local_e0 = 0;
   local_c0 = 0x1c;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x22, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "PIPELINE_COMPILATIONS_MESH", false);
   local_c8 = "PIPELINE_COMPILATIONS_MESH";
   local_e0 = 0;
   local_c0 = 0x1a;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x23, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "PIPELINE_COMPILATIONS_SURFACE", false);
   local_c8 = "PIPELINE_COMPILATIONS_SURFACE";
   local_e0 = 0;
   local_c0 = 0x1d;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x24, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "PIPELINE_COMPILATIONS_DRAW", false);
   local_c8 = "PIPELINE_COMPILATIONS_DRAW";
   local_e0 = 0;
   local_c0 = 0x1a;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x25, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "PIPELINE_COMPILATIONS_SPECIALIZATION", false);
   local_c8 = "PIPELINE_COMPILATIONS_SPECIALIZATION";
   local_e0 = 0;
   local_c0 = 0x24;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x26, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "MONITOR_MAX", false);
   local_c8 = "MONITOR_MAX";
   local_e0 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<Performance::Monitor>((StringName*)&local_d8);
   local_c8 = "Performance";
   local_e8 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0x27, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<Variant>::_ref(CowData<Variant> const&) [clone .part.0] */void CowData<Variant>::_ref(CowData<Variant> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   _unref(this);
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) {
            return;
         }

         LOCK();
         lVar3 = *plVar1;
         bVar4 = lVar2 == lVar3;
         if (bVar4) {
            *plVar1 = lVar2 + 1;
            lVar3 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* Performance::MonitorCall::MonitorCall(Callable, Vector<Variant>) */void Performance::MonitorCall::MonitorCall(MonitorCall *this, Callable *param_2, long param_3) {
   *(undefined8*)this = 0;
   *(undefined8*)( this + 8 ) = 0;
   *(undefined8*)( this + 0x18 ) = 0;
   Callable::operator =((Callable*)this, param_2);
   if (*(long*)( this + 0x18 ) != *(long*)( param_3 + 8 )) {
      CowData<Variant>::_ref((CowData<Variant>*)( this + 0x18 ), (CowData*)( param_3 + 8 ));
      return;
   }

   return;
}
/* CowData<Variant>::_copy_on_write() [clone .isra.0] */void CowData<Variant>::_copy_on_write(CowData<Variant> *this) {
   Variant *this_00;
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   long lVar4;
   Variant *pVVar5;
   ulong uVar6;
   long lVar7;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar6 = 0x10;
   if (lVar1 * 0x18 != 0) {
      uVar6 = lVar1 * 0x18 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar6, false);
   if (puVar3 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar4 = 0;
   lVar7 = 0;
   *puVar3 = 1;
   puVar3[1] = lVar1;
   if (lVar1 != 0) {
      do {
         this_00 = (Variant*)( (long)( puVar3 + 2 ) + lVar4 );
         lVar7 = lVar7 + 1;
         pVVar5 = (Variant*)( *(long*)this + lVar4 );
         lVar4 = lVar4 + 0x18;
         Variant::Variant(this_00, pVVar5);
      }
 while ( lVar1 != lVar7 );
   }

   _unref(this);
   *(undefined8**)this = puVar3 + 2;
   return;
}
/* Performance::get_custom_monitor_names() */Array *Performance::get_custom_monitor_names(void) {
   long *plVar1;
   uint uVar2;
   long in_RSI;
   uint uVar3;
   Array *in_RDI;
   long in_FS_OFFSET;
   Array local_90[8];
   long local_88;
   Callable local_80[24];
   undefined8 local_68[2];
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( in_RSI + 0x1bc ) == 0) {
      Array::Array(in_RDI);
      local_58[0] = 0;
      local_58[1] = 0;
      local_88 = 0;
      local_50 = (undefined1[16])0x0;
      Array::set_typed((uint)in_RDI, (StringName*)0x15, (Variant*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      Array::Array(local_90);
      local_58[0] = 0;
      local_58[1] = 0;
      local_88 = 0;
      local_50 = (undefined1[16])0x0;
      uVar3 = (uint)local_90;
      Array::set_typed(uVar3, (StringName*)0x15, (Variant*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Array::resize(uVar3);
      plVar1 = *(long**)( in_RSI + 0x1a8 );
      if (plVar1 != (long*)0x0) {
         uVar2 = 0;
         do {
            StringName::StringName((StringName*)&local_88, (StringName*)( plVar1 + 2 ));
            Callable::Callable(local_80, (Callable*)( plVar1 + 3 ));
            local_68[0] = 0;
            if (plVar1[6] != 0) {
               CowData<Variant>::_ref((CowData<Variant>*)local_68, (CowData*)( plVar1 + 6 ));
            }

            Variant::Variant((Variant*)local_58, (StringName*)&local_88);
            Array::set(uVar3, (Variant*)(ulong)uVar2);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            uVar2 = uVar2 + 1;
            CowData<Variant>::_unref((CowData<Variant>*)local_68);
            Callable::~Callable(local_80);
            if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
               StringName::unref();
            }

            plVar1 = (long*)*plVar1;
         }
 while ( plVar1 != (long*)0x0 );
      }

      Array::Array(in_RDI, local_90);
      Array::~Array(local_90);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return in_RDI;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Performance::remove_custom_monitor(StringName const&) */void Performance::remove_custom_monitor(Performance *this, StringName *param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   char *__s;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   ulong uVar35;
   uint uVar36;
   long *plVar37;
   undefined8 uVar38;
   int iVar39;
   uint uVar40;
   long lVar41;
   ulong uVar42;
   ulong uVar43;
   ulong uVar44;
   long lVar45;
   uint uVar46;
   uint uVar47;
   ulong uVar48;
   long *plVar49;
   uint *puVar50;
   long in_FS_OFFSET;
   bool bVar51;
   undefined8 local_70;
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x198 ) != 0 ) && ( *(int*)( this + 0x1bc ) != 0 )) {
      uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1b8 ) * 4 );
      lVar5 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1b8 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar36 = StringName::get_empty_hash();
      }
 else {
         uVar36 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar42 = CONCAT44(0, uVar4);
      lVar45 = *(long*)( this + 0x1a0 );
      if (uVar36 == 0) {
         uVar36 = 1;
      }

      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar36 * lVar5;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar42;
      lVar41 = SUB168(auVar7 * auVar21, 8);
      uVar40 = *(uint*)( lVar45 + lVar41 * 4 );
      iVar39 = SUB164(auVar7 * auVar21, 8);
      if (uVar40 != 0) {
         uVar46 = 0;
         do {
            if (( uVar36 == uVar40 ) && ( lVar41 = *(long*)( *(long*)( *(long*)( this + 0x198 ) + lVar41 * 8 ) + 0x10 ) ),lVar41 == *(long*)param_1) {
               if (( *(long*)( this + 0x198 ) == 0 ) || ( *(int*)( this + 0x1bc ) == 0 )) goto LAB_001042a3;
               uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1b8 ) * 4 );
               uVar42 = CONCAT44(0, uVar4);
               lVar5 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1b8 ) * 8 );
               if (lVar41 == 0) {
                  uVar36 = StringName::get_empty_hash();
                  lVar45 = *(long*)( this + 0x1a0 );
               }
 else {
                  uVar36 = *(uint*)( lVar41 + 0x20 );
               }

               if (uVar36 == 0) {
                  uVar36 = 1;
               }

               auVar11._8_8_ = 0;
               auVar11._0_8_ = (ulong)uVar36 * lVar5;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar42;
               lVar41 = SUB168(auVar11 * auVar25, 8);
               uVar40 = *(uint*)( lVar45 + lVar41 * 4 );
               uVar46 = SUB164(auVar11 * auVar25, 8);
               if (uVar40 == 0) goto LAB_001042a3;
               uVar47 = 0;
               goto LAB_00104111;
            }

            uVar46 = uVar46 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = ( ulong )(iVar39 + 1) * lVar5;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar42;
            lVar41 = SUB168(auVar8 * auVar22, 8);
            uVar40 = *(uint*)( lVar45 + lVar41 * 4 );
            iVar39 = SUB164(auVar8 * auVar22, 8);
         }
 while ( ( uVar40 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar40 * lVar5,auVar23._8_8_ = 0,auVar23._0_8_ = uVar42,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar4 + iVar39 ) - SUB164(auVar9 * auVar23, 8)) * lVar5,auVar24._8_8_ = 0,auVar24._0_8_ = uVar42,uVar46 <= SUB164(auVar10 * auVar24, 8) );
      }

   }

   local_60 = 0;
   local_50 = 0x11;
   local_58 = "\' doesn\'t exists.";
   String::parse_latin1((StrRange*)&local_60);
   lVar5 = *(long*)param_1;
   if (lVar5 != 0) {
      __s = *(char**)( lVar5 + 8 );
      local_70 = 0;
      if (__s != (char*)0x0) {
         local_50 = strlen(__s);
         local_58 = __s;
         String::parse_latin1((StrRange*)&local_70);
         goto LAB_00104358;
      }

      plVar37 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
      if (*(long*)( lVar5 + 0x10 ) != 0) {
         do {
            lVar45 = *plVar37;
            if (lVar45 == 0) goto LAB_00104479;
            LOCK();
            lVar41 = *plVar37;
            bVar51 = lVar45 == lVar41;
            if (bVar51) {
               *plVar37 = lVar45 + 1;
               lVar41 = lVar45;
            }

            UNLOCK();
         }
 while ( !bVar51 );
         if (lVar41 != -1) {
            local_70 = *(undefined8*)( lVar5 + 0x10 );
         }

         goto LAB_00104358;
      }

   }

   LAB_00104479:local_70 = 0;
   LAB_00104358:operator + ( (char*)local_68,(String*)"Custom monitor with id \'" );
   String::operator +((String*)&local_58, (String*)local_68);
   _err_print_error("remove_custom_monitor", "main/performance.cpp", 0x147, "Condition \"!has_custom_monitor(p_id)\" is true.", (String*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref(local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_001042bb:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   LAB_00104111:uVar43 = (ulong)uVar46;
   if (( uVar36 == uVar40 ) && ( lVar6 = *(long*)( this + 0x198 ) * (long*)( *(long*)( lVar6 + lVar41 * 8 ) + 0x10 ) == *(long*)param_1 )) {
      uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1b8 ) * 4 );
      uVar48 = CONCAT44(0, uVar4);
      lVar5 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1b8 ) * 8 );
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(uVar46 + 1) * lVar5;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar48;
      uVar42 = SUB168(auVar15 * auVar29, 8);
      puVar50 = (uint*)( lVar45 + uVar42 * 4 );
      uVar40 = SUB164(auVar15 * auVar29, 8);
      uVar36 = *puVar50;
      if (( uVar36 != 0 ) && ( auVar16._8_8_ = 0 ),auVar16._0_8_ = (ulong)uVar36 * lVar5,auVar30._8_8_ = 0,auVar30._0_8_ = uVar48,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( uVar4 + uVar40 ) - SUB164(auVar16 * auVar30, 8)) * lVar5,auVar31._8_8_ = 0,auVar31._0_8_ = uVar48,uVar35 = (ulong)uVar40,uVar44 = uVar43,SUB164(auVar17 * auVar31, 8) != 0) {
         while (true) {
            uVar43 = uVar35;
            puVar1 = (uint*)( lVar45 + uVar44 * 4 );
            *puVar50 = *puVar1;
            puVar2 = (undefined8*)( lVar6 + uVar42 * 8 );
            *puVar1 = uVar36;
            puVar3 = (undefined8*)( lVar6 + uVar44 * 8 );
            uVar38 = *puVar2;
            *puVar2 = *puVar3;
            *puVar3 = uVar38;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = ( ulong )((int)uVar43 + 1) * lVar5;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar48;
            uVar42 = SUB168(auVar20 * auVar34, 8);
            puVar50 = (uint*)( lVar45 + uVar42 * 4 );
            uVar36 = *puVar50;
            if (( uVar36 == 0 ) || ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar36 * lVar5,auVar32._8_8_ = 0,auVar32._0_8_ = uVar48,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( SUB164(auVar20 * auVar34, 8) + uVar4 ) - SUB164(auVar18 * auVar32, 8)) * lVar5,auVar33._8_8_ = 0,auVar33._0_8_ = uVar48,SUB164(auVar19 * auVar33, 8) == 0) break;
            uVar35 = uVar42 & 0xffffffff;
            uVar44 = uVar43;
         }
;
      }

      plVar37 = (long*)( lVar6 + uVar43 * 8 );
      *(undefined4*)( lVar45 + uVar43 * 4 ) = 0;
      plVar49 = (long*)*plVar37;
      if (*(long**)( this + 0x1a8 ) == plVar49) {
         *(long*)( this + 0x1a8 ) = *plVar49;
         plVar49 = (long*)*plVar37;
      }

      if (*(long**)( this + 0x1b0 ) == plVar49) {
         *(long*)( this + 0x1b0 ) = plVar49[1];
         plVar49 = (long*)*plVar37;
      }

      if ((long*)plVar49[1] != (long*)0x0) {
         *(long*)plVar49[1] = *plVar49;
         plVar49 = (long*)*plVar37;
      }

      if (*plVar49 != 0) {
         *(long*)( *plVar49 + 8 ) = plVar49[1];
         plVar49 = (long*)*plVar37;
      }

      CowData<Variant>::_unref((CowData<Variant>*)( plVar49 + 6 ));
      Callable::~Callable((Callable*)( plVar49 + 3 ));
      if (( StringName::configured != '\0' ) && ( plVar49[2] != 0 )) {
         StringName::unref();
      }

      Memory::free_static(plVar49, false);
      *(undefined8*)( *(long*)( this + 0x198 ) + uVar43 * 8 ) = 0;
      *(int*)( this + 0x1bc ) = *(int*)( this + 0x1bc ) + -1;
      LAB_001042a3:plVar37 = (long*)OS::get_singleton();
      uVar38 = ( **(code**)( *plVar37 + 0x208 ) )(plVar37);
      *(undefined8*)( this + 0x1c0 ) = uVar38;
      goto LAB_001042bb;
   }

   uVar47 = uVar47 + 1;
   auVar12._8_8_ = 0;
   auVar12._0_8_ = ( ulong )(uVar46 + 1) * lVar5;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar42;
   lVar41 = SUB168(auVar12 * auVar26, 8);
   uVar40 = *(uint*)( lVar45 + lVar41 * 4 );
   uVar46 = SUB164(auVar12 * auVar26, 8);
   if (( uVar40 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar40 * lVar5,auVar27._8_8_ = 0,auVar27._0_8_ = uVar42,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar4 + uVar46 ) - SUB164(auVar13 * auVar27, 8)) * lVar5,auVar28._8_8_ = 0,auVar28._0_8_ = uVar42,SUB164(auVar14 * auVar28, 8) < uVar47) goto LAB_001042a3;
   goto LAB_00104111;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Variant>::resize<false>(long) [clone .isra.0] */void CowData<Variant>::resize<false>(CowData<Variant> *this, long param_1) {
   code *pcVar1;
   int iVar2;
   undefined8 *puVar3;
   long lVar4;
   undefined8 *puVar5;
   char *pcVar6;
   undefined4 *puVar7;
   undefined8 uVar8;
   long lVar9;
   ulong uVar10;
   long lVar11;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar4 = 0;
      lVar9 = 0;
   }
 else {
      lVar4 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar4) {
         return;
      }

      if (param_1 == 0) {
         _unref(this);
         return;
      }

      _copy_on_write(this);
      lVar9 = lVar4 * 0x18;
      if (lVar9 != 0) {
         uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
         uVar10 = uVar10 | uVar10 >> 2;
         uVar10 = uVar10 | uVar10 >> 4;
         uVar10 = uVar10 | uVar10 >> 8;
         uVar10 = uVar10 | uVar10 >> 0x10;
         lVar9 = ( uVar10 | uVar10 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x18 != 0) {
      uVar10 = param_1 * 0x18 - 1;
      uVar10 = uVar10 | uVar10 >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      uVar10 = uVar10 | uVar10 >> 0x20;
      lVar11 = uVar10 + 1;
      if (lVar11 != 0) {
         if (param_1 <= lVar4) {
            puVar5 = *(undefined8**)this;
            uVar10 = param_1;
            while (true) {
               if (puVar5 == (undefined8*)0x0) {
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

               if ((ulong)puVar5[-1] <= uVar10) break;
               if (Variant::needs_deinit[*(int*)( puVar5 + uVar10 * 3 )] != '\0') {
                  Variant::_clear_internal();
                  puVar5 = *(undefined8**)this;
               }

               uVar10 = uVar10 + 1;
            }
;
            if (lVar11 != lVar9) {
               iVar2 = _realloc(this, lVar11);
               if (iVar2 != 0) {
                  return;
               }

               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) {
                  FUN_0010637c();
                  return;
               }

            }

            goto LAB_0010461f;
         }

         if (lVar11 == lVar9) {
            LAB_001046c3:puVar5 = *(undefined8**)this;
            if (puVar5 == (undefined8*)0x0) {
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            lVar4 = puVar5[-1];
            if (param_1 <= lVar4) goto LAB_0010461f;
         }
 else {
            if (lVar4 != 0) {
               iVar2 = _realloc(this, lVar11);
               if (iVar2 != 0) {
                  return;
               }

               goto LAB_001046c3;
            }

            puVar3 = (undefined8*)Memory::alloc_static(uVar10 + 0x11, false);
            if (puVar3 == (undefined8*)0x0) {
               uVar8 = 0x171;
               pcVar6 = "Parameter \"mem_new\" is null.";
               goto LAB_00104752;
            }

            puVar5 = puVar3 + 2;
            *puVar3 = 1;
            puVar3[1] = 0;
            *(undefined8**)this = puVar5;
            lVar4 = 0;
         }

         lVar9 = lVar4 + 1;
         *(undefined4*)( puVar5 + lVar4 * 3 ) = 0;
         *(undefined1(*) [16])( puVar5 + lVar4 * 3 + 1 ) = (undefined1[16])0x0;
         if (lVar9 < param_1) {
            lVar4 = lVar9 * 0x18;
            do {
               lVar9 = lVar9 + 1;
               puVar7 = (undefined4*)( *(long*)this + lVar4 );
               lVar4 = lVar4 + 0x18;
               *puVar7 = 0;
               *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
            }
 while ( param_1 != lVar9 );
         }

         puVar5 = *(undefined8**)this;
         if (puVar5 == (undefined8*)0x0) {
            _DAT_00000000 = 0;
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         LAB_0010461f:puVar5[-1] = param_1;
         return;
      }

   }

   uVar8 = 0x16a;
   pcVar6 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00104752:_err_print_error("resize", "./core/templates/cowdata.h", uVar8, pcVar6, 0, 0);
   return;
}
/* Performance::add_custom_monitor(StringName const&, Callable const&, Vector<Variant> const&) */void Performance::add_custom_monitor(Performance *this, StringName *param_1, Callable *param_2, Vector *param_3) {
   uint uVar1;
   char *__s;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   uint uVar10;
   long lVar11;
   long *plVar12;
   undefined8 uVar13;
   long lVar14;
   int iVar15;
   long lVar16;
   uint uVar17;
   ulong uVar18;
   uint uVar19;
   long in_FS_OFFSET;
   bool bVar20;
   undefined8 local_90;
   CowData<char32_t> local_88[16];
   undefined8 local_78;
   long local_70;
   char *local_68;
   size_t local_60;
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x198 ) != 0 ) && ( *(int*)( this + 0x1bc ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1b8 ) * 4 );
      lVar11 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1b8 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar10 = StringName::get_empty_hash();
      }
 else {
         uVar10 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar18 = CONCAT44(0, uVar1);
      if (uVar10 == 0) {
         uVar10 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)uVar10 * lVar11;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar18;
      lVar16 = SUB168(auVar2 * auVar6, 8);
      uVar17 = *(uint*)( *(long*)( this + 0x1a0 ) + lVar16 * 4 );
      iVar15 = SUB164(auVar2 * auVar6, 8);
      if (uVar17 != 0) {
         uVar19 = 0;
         do {
            if (( uVar10 == uVar17 ) && ( *(long*)( *(long*)( *(long*)( this + 0x198 ) + lVar16 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               local_78 = 0;
               local_60 = 0x11;
               local_68 = "\' already exists.";
               String::parse_latin1((StrRange*)&local_78);
               lVar11 = *(long*)param_1;
               if (lVar11 == 0) goto LAB_00104b12;
               __s = *(char**)( lVar11 + 8 );
               local_90 = 0;
               if (__s == (char*)0x0) {
                  plVar12 = (long*)( *(long*)( lVar11 + 0x10 ) + -0x10 );
                  if (*(long*)( lVar11 + 0x10 ) == 0) goto LAB_00104b12;
                  goto LAB_00104ad9;
               }

               local_60 = strlen(__s);
               local_68 = __s;
               String::parse_latin1((StrRange*)&local_90);
               goto LAB_0010493f;
            }

            uVar19 = uVar19 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar15 + 1) * lVar11;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar18;
            lVar16 = SUB168(auVar3 * auVar7, 8);
            uVar17 = *(uint*)( *(long*)( this + 0x1a0 ) + lVar16 * 4 );
            iVar15 = SUB164(auVar3 * auVar7, 8);
         }
 while ( ( uVar17 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar17 * lVar11,auVar8._8_8_ = 0,auVar8._0_8_ = uVar18,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( uVar1 + iVar15 ) - SUB164(auVar4 * auVar8, 8)) * lVar11,auVar9._8_8_ = 0,auVar9._0_8_ = uVar18,uVar19 <= SUB164(auVar5 * auVar9, 8) );
      }

   }

   local_70 = 0;
   lVar11 = *(long*)( param_3 + 8 );
   if (*(long*)( param_3 + 8 ) != 0) {
      CowData<Variant>::_ref((CowData<Variant>*)&local_70, (CowData*)( param_3 + 8 ));
      lVar11 = local_70;
   }

   Callable::Callable((Callable*)local_88, (Callable*)param_2);
   local_68 = (char*)0x0;
   local_60 = 0;
   local_50[0] = 0;
   Callable::operator =((Callable*)&local_68, (Callable*)local_88);
   if (local_50[0] != lVar11) {
      CowData<Variant>::_ref((CowData<Variant>*)local_50, (CowData*)&local_70);
   }

   HashMap<StringName,Performance::MonitorCall,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Performance::MonitorCall>>>::insert((StringName*)&local_90, (MonitorCall*)( this + 400 ), SUB81(param_1, 0));
   CowData<Variant>::_unref((CowData<Variant>*)local_50);
   Callable::~Callable((Callable*)&local_68);
   Callable::~Callable((Callable*)local_88);
   CowData<Variant>::_unref((CowData<Variant>*)&local_70);
   plVar12 = (long*)OS::get_singleton();
   uVar13 = ( **(code**)( *plVar12 + 0x208 ) )(plVar12);
   *(undefined8*)( this + 0x1c0 ) = uVar13;
   goto LAB_00104a97;
   LAB_00104b12:local_90 = 0;
   goto LAB_0010493f;
   while (true) {
      LOCK();
      lVar14 = *plVar12;
      bVar20 = lVar16 == lVar14;
      if (bVar20) {
         *plVar12 = lVar16 + 1;
         lVar14 = lVar16;
      }

      UNLOCK();
      if (bVar20) break;
      LAB_00104ad9:lVar16 = *plVar12;
      if (lVar16 == 0) goto LAB_00104b12;
   }
;
   if (lVar14 != -1) {
      local_90 = *(undefined8*)( lVar11 + 0x10 );
   }

   LAB_0010493f:operator + ( (char*)local_88,(String*)"Custom monitor with id \'" );
   String::operator +((String*)&local_68, (String*)local_88);
   _err_print_error("add_custom_monitor", "main/performance.cpp", 0x141, "Condition \"has_custom_monitor(p_id)\" is true.", (String*)&local_68, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref(local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   LAB_00104a97:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Performance::MonitorCall::call(bool&, String&) */bool *Performance::MonitorCall::call(bool *param_1, String *param_2) {
   long *plVar1;
   code *pcVar2;
   ulong uVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   CowData<char32_t> *in_RCX;
   char *pcVar6;
   undefined8 in_RDX;
   undefined8 uVar7;
   long lVar8;
   undefined8 *__dest;
   size_t __n;
   long lVar9;
   long lVar10;
   Variant *pVVar11;
   long in_FS_OFFSET;
   long local_58;
   int local_50;
   undefined8 local_4c;
   long local_40;
   __dest = *(undefined8**)( param_2 + 0x18 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (__dest == (undefined8*)0x0) {
      LAB_00104cb0:pVVar11 = (Variant*)0x0;
   }
 else {
      lVar10 = __dest[-1];
      if (lVar10 < 0) {
         uVar7 = 0x157;
         pcVar6 = "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER";
         goto LAB_00104e82;
      }

      if (lVar10 == 0) {
         uVar3 = 0;
         __dest = (undefined8*)0x0;
      }
 else {
         if (( lVar10 * 8 == 0 ) || ( uVar3 = lVar10 * 8 - 1 ),uVar3 = uVar3 | uVar3 >> 1,uVar3 = uVar3 | uVar3 >> 2,uVar3 = uVar3 | uVar3 >> 4,uVar3 = uVar3 | uVar3 >> 8,uVar3 = uVar3 | uVar3 >> 0x10,uVar3 = uVar3 | uVar3 >> 0x20,uVar3 == 0xffffffffffffffff) {
            uVar7 = 0x16a;
            pcVar6 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
            LAB_00104e82:__dest = (undefined8*)0x0;
            _err_print_error("resize", "./core/templates/cowdata.h", uVar7, pcVar6, 0, 0);
            lVar10 = *(long*)( param_2 + 0x18 );
         }
 else {
            puVar4 = (undefined8*)Memory::alloc_static(uVar3 + 0x11, false);
            if (puVar4 == (undefined8*)0x0) {
               uVar7 = 0x171;
               pcVar6 = "Parameter \"mem_new\" is null.";
               goto LAB_00104e82;
            }

            __dest = puVar4 + 2;
            *puVar4 = 1;
            puVar4[1] = lVar10;
            lVar10 = *(long*)( param_2 + 0x18 );
         }

         if (lVar10 == 0) goto LAB_00104cb0;
         uVar3 = *(ulong*)( lVar10 + -8 );
         if (0 < (long)uVar3) {
            if (__dest == (undefined8*)0x0) {
               lVar8 = 0;
               lVar9 = 0;
            }
 else {
               lVar8 = 0;
               puVar4 = __dest;
               while (lVar9 = puVar4[-1],lVar8 < lVar9) {
                  plVar1 = puVar4 + -2;
                  __dest = puVar4;
                  if (1 < (ulong)puVar4[-2]) {
                     lVar9 = puVar4[-1];
                     uVar3 = 0x10;
                     __n = lVar9 * 8;
                     if (__n != 0) {
                        uVar3 = __n - 1 | __n - 1 >> 1;
                        uVar3 = uVar3 | uVar3 >> 2;
                        uVar3 = uVar3 | uVar3 >> 4;
                        uVar3 = uVar3 | uVar3 >> 8;
                        uVar3 = uVar3 | uVar3 >> 0x10;
                        uVar3 = ( uVar3 | uVar3 >> 0x20 ) + 0x11;
                     }

                     puVar5 = (undefined8*)Memory::alloc_static(uVar3, false);
                     if (puVar5 == (undefined8*)0x0) {
                        _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
                     }
 else {
                        __dest = puVar5 + 2;
                        *puVar5 = 1;
                        puVar5[1] = lVar9;
                        memcpy(__dest, puVar4, __n);
                        LOCK();
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           Memory::free_static(plVar1, false);
                        }

                     }

                  }

                  __dest[lVar8] = lVar10;
                  lVar10 = *(long*)( param_2 + 0x18 );
                  lVar8 = lVar8 + 1;
                  if (lVar10 == 0) goto LAB_00104cb0;
                  uVar3 = *(ulong*)( lVar10 + -8 );
                  if ((long)uVar3 <= lVar8) goto LAB_00104ea4;
                  lVar10 = lVar10 + lVar8 * 0x18;
                  puVar4 = __dest;
               }
;
            }

            _err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar8, lVar9, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

      }

      LAB_00104ea4:pVVar11 = (Variant*)( uVar3 & 0xffffffff );
   }

   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   for (int i = 0; i < 4; i++) {
      param_1[i] = false;
   }

   local_50 = 0;
   local_4c = 0;
   Callable::callp((Variant**)param_2, (int)__dest, pVVar11, (CallError*)param_1);
   *(bool*)in_RDX = local_50 != 0;
   if (local_50 != 0) {
      Variant::get_callable_error_text((Callable*)&local_58, (Variant**)param_2, (int)__dest, (CallError*)pVVar11);
      if (*(long*)in_RCX != local_58) {
         CowData<char32_t>::_unref(in_RCX);
         lVar10 = local_58;
         local_58 = 0;
         *(long*)in_RCX = lVar10;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   }

   if (__dest != (undefined8*)0x0) {
      plVar1 = __dest + -2;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static(plVar1, false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x00105089) *//* WARNING: Removing unreachable block (ram,0x00105091) *//* Performance::get_custom_monitor(StringName const&) */StringName *Performance::get_custom_monitor(StringName *param_1) {
   uint uVar1;
   long lVar2;
   char *pcVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   uint uVar12;
   String *pSVar13;
   int iVar14;
   StringName *in_RDX;
   long lVar15;
   long in_RSI;
   uint uVar16;
   uint uVar17;
   ulong uVar18;
   long in_FS_OFFSET;
   CowData<char32_t> *local_a0;
   char local_91;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   size_t local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( in_RSI + 0x198 ) != 0 ) && ( *(int*)( in_RSI + 0x1bc ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x1b8 ) * 4 );
      uVar18 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x1b8 ) * 8 );
      if (*(long*)in_RDX == 0) {
         uVar12 = StringName::get_empty_hash();
      }
 else {
         uVar12 = *(uint*)( *(long*)in_RDX + 0x20 );
      }

      if (uVar12 == 0) {
         uVar12 = 1;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar12 * lVar2;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar18;
      lVar15 = SUB168(auVar4 * auVar8, 8);
      uVar16 = *(uint*)( *(long*)( in_RSI + 0x1a0 ) + lVar15 * 4 );
      iVar14 = SUB164(auVar4 * auVar8, 8);
      if (uVar16 != 0) {
         uVar17 = 0;
         do {
            if (( uVar16 == uVar12 ) && ( *(long*)( *(long*)( *(long*)( in_RSI + 0x198 ) + lVar15 * 8 ) + 0x10 ) == *(long*)in_RDX )) {
               pSVar13 = (String*)HashMap<StringName,Performance::MonitorCall,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Performance::MonitorCall>>>::operator []((HashMap<StringName,Performance::MonitorCall,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Performance::MonitorCall>>>*)( in_RSI + 400 ), in_RDX);
               MonitorCall::call((bool*)local_58, pSVar13);
               if (local_91 == '\0') {
                  *(undefined4*)param_1 = local_58[0];
                  *(undefined8*)( param_1 + 8 ) = local_50;
                  *(undefined8*)( param_1 + 0x10 ) = uStack_48;
               }
 else {
                  local_78 = 0;
                  local_60 = 0xf;
                  local_68 = "\' to callable: ";
                  String::parse_latin1((StrRange*)&local_78);
                  lVar2 = *(long*)in_RDX;
                  if (lVar2 == 0) {
                     local_88 = 0;
                  }
 else {
                     pcVar3 = *(char**)( lVar2 + 8 );
                     local_88 = 0;
                     if (pcVar3 == (char*)0x0) {
                        if (*(long*)( lVar2 + 0x10 ) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)( lVar2 + 0x10 ));
                        }

                     }
 else {
                        local_60 = strlen(pcVar3);
                        local_68 = pcVar3;
                        String::parse_latin1((StrRange*)&local_88);
                     }

                  }

                  local_a0 = (CowData<char32_t>*)&local_88;
                  operator+((char *)&
                  local_80,(String*)"Error calling from custom monitor \'";
                  String::operator +((String*)&local_70, (String*)&local_80);
                  String::operator +((String*)&local_68, (String*)&local_70);
                  _err_print_error("get_custom_monitor", "main/performance.cpp", 0x155, "Condition \"error\" is true. Returning: return_value", (String*)&local_68, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                  CowData<char32_t>::_unref(local_a0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                  *(undefined4*)param_1 = local_58[0];
                  *(undefined8*)( param_1 + 8 ) = local_50;
                  *(undefined8*)( param_1 + 0x10 ) = uStack_48;
               }

               goto LAB_001050aa;
            }

            uVar17 = uVar17 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(iVar14 + 1) * lVar2;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar18;
            lVar15 = SUB168(auVar5 * auVar9, 8);
            uVar16 = *(uint*)( *(long*)( in_RSI + 0x1a0 ) + lVar15 * 4 );
            iVar14 = SUB164(auVar5 * auVar9, 8);
         }
 while ( ( uVar16 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar16 * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar18,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar1 + iVar14 ) - SUB164(auVar6 * auVar10, 8)) * lVar2,auVar11._8_8_ = 0,auVar11._0_8_ = uVar18,uVar17 <= SUB164(auVar7 * auVar11, 8) );
      }

   }

   local_70 = 0;
   local_60 = 0x11;
   local_68 = "\' doesn\'t exists.";
   String::parse_latin1((StrRange*)&local_70);
   lVar2 = *(long*)in_RDX;
   if (lVar2 == 0) {
      local_80 = 0;
   }
 else {
      pcVar3 = *(char**)( lVar2 + 8 );
      local_80 = 0;
      if (pcVar3 == (char*)0x0) {
         if (*(long*)( lVar2 + 0x10 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( lVar2 + 0x10 ));
         }

      }
 else {
         local_60 = strlen(pcVar3);
         local_68 = pcVar3;
         String::parse_latin1((StrRange*)&local_80);
      }

   }

   operator+((char *)&
   local_78,(String*)"Custom monitor with id \'";
   String::operator +((String*)&local_68, (String*)&local_78);
   _err_print_error("get_custom_monitor", "main/performance.cpp", 0x151, "Condition \"!has_custom_monitor(p_id)\" is true. Returning: Variant()", (String*)&local_68, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_001050aa:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* Object::get_save_class() const */void Object::get_save_class(void) {
   long lVar1;
   long *in_RSI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x48 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* Performance::is_class_ptr(void*) const */uint Performance::is_class_ptr(Performance *this, void *param_1) {
   return (uint)CONCAT71(0x10e0, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e0, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* Performance::_getv(StringName const&, Variant&) const */undefined8 Performance::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Performance::_setv(StringName const&, Variant const&) */undefined8 Performance::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Performance::_validate_propertyv(PropertyInfo&) const */void Performance::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* Performance::_property_can_revertv(StringName const&) const */undefined8 Performance::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* Performance::_property_get_revertv(StringName const&, Variant&) const */undefined8 Performance::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Performance::_notificationv(int, bool) */void Performance::_notificationv(int param_1, bool param_2) {
   return;
}
/* Engine::get_frames_per_second() const */undefined8 Engine::get_frames_per_second(Engine *this) {
   return *(undefined8*)( this + 0x38 );
}
/* MethodBindTR<TypedArray<StringName>>::_gen_argument_type(int) const */undefined8 MethodBindTR<TypedArray<StringName>>::_gen_argument_type(int param_1) {
   return 0x1c;
}
/* MethodBindTR<TypedArray<StringName>>::get_argument_meta(int) const */undefined8 MethodBindTR<TypedArray<StringName>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<unsigned long>::_gen_argument_type(int) const */undefined8 MethodBindTR<unsigned_long>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTR<unsigned long>::get_argument_meta(int) const */int MethodBindTR<unsigned_long>::get_argument_meta(MethodBindTR<unsigned_long> *this, int param_1) {
   return ( param_1 >> 0x1f ) * -8;
}
/* MethodBindTR<Variant, StringName const&>::_gen_argument_type(int) const */byte MethodBindTR<Variant,StringName_const&>::_gen_argument_type(MethodBindTR<Variant,StringName_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x15;
}
/* MethodBindTR<Variant, StringName const&>::get_argument_meta(int) const */undefined8 MethodBindTR<Variant,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<bool, StringName const&>::_gen_argument_type(int) const */char MethodBindTR<bool,StringName_const&>::_gen_argument_type(MethodBindTR<bool,StringName_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 0x14U ) + 1;
}
/* MethodBindTR<bool, StringName const&>::get_argument_meta(int) const */undefined8 MethodBindTR<bool,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<StringName const&>::_gen_argument_type(int) const */byte MethodBindT<StringName_const&>::_gen_argument_type(MethodBindT<StringName_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x15;
}
/* MethodBindT<StringName const&>::get_argument_meta(int) const */undefined8 MethodBindT<StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<StringName const&, Callable const&, Vector<Variant> const&>::get_argument_meta(int)
   const */undefined8 MethodBindT<StringName_const&,Callable_const&,Vector<Variant>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<double, Performance::Monitor>::_gen_argument_type(int) const */int MethodBindTRC<double,Performance::Monitor>::_gen_argument_type(MethodBindTRC<double,Performance::Monitor> *this, int param_1) {
   return 3 - ( uint )(param_1 == 0);
}
/* MethodBindTRC<double, Performance::Monitor>::get_argument_meta(int) const */uint MethodBindTRC<double,Performance::Monitor>::get_argument_meta(MethodBindTRC<double,Performance::Monitor> *this, int param_1) {
   return param_1 >> 0x1f & 10;
}
/* MethodBindTRC<double, Performance::Monitor>::~MethodBindTRC() */void MethodBindTRC<double,Performance::Monitor>::~MethodBindTRC(MethodBindTRC<double,Performance::Monitor> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010dcd8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<double, Performance::Monitor>::~MethodBindTRC() */void MethodBindTRC<double,Performance::Monitor>::~MethodBindTRC(MethodBindTRC<double,Performance::Monitor> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010dcd8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<StringName const&, Callable const&, Vector<Variant> const&>::~MethodBindT() */void MethodBindT<StringName_const&,Callable_const&,Vector<Variant>const&>::~MethodBindT(MethodBindT<StringName_const&,Callable_const&,Vector<Variant>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010dd38;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<StringName const&, Callable const&, Vector<Variant> const&>::~MethodBindT() */void MethodBindT<StringName_const&,Callable_const&,Vector<Variant>const&>::~MethodBindT(MethodBindT<StringName_const&,Callable_const&,Vector<Variant>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010dd38;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010dd98;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010dd98;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<bool, StringName const&>::~MethodBindTR() */void MethodBindTR<bool,StringName_const&>::~MethodBindTR(MethodBindTR<bool,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ddf8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<bool, StringName const&>::~MethodBindTR() */void MethodBindTR<bool,StringName_const&>::~MethodBindTR(MethodBindTR<bool,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ddf8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Variant, StringName const&>::~MethodBindTR() */void MethodBindTR<Variant,StringName_const&>::~MethodBindTR(MethodBindTR<Variant,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010de58;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Variant, StringName const&>::~MethodBindTR() */void MethodBindTR<Variant,StringName_const&>::~MethodBindTR(MethodBindTR<Variant,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010de58;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<unsigned long>::~MethodBindTR() */void MethodBindTR<unsigned_long>::~MethodBindTR(MethodBindTR<unsigned_long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010deb8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<unsigned long>::~MethodBindTR() */void MethodBindTR<unsigned_long>::~MethodBindTR(MethodBindTR<unsigned_long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010deb8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<TypedArray<StringName>>::~MethodBindTR() */void MethodBindTR<TypedArray<StringName>>::~MethodBindTR(MethodBindTR<TypedArray<StringName>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010df18;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<TypedArray<StringName>>::~MethodBindTR() */void MethodBindTR<TypedArray<StringName>>::~MethodBindTR(MethodBindTR<TypedArray<StringName>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010df18;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<StringName const&, Callable const&, Vector<Variant> const&>::_gen_argument_type(int)
   const */char MethodBindT<StringName_const&,Callable_const&,Vector<Variant>const&>::_gen_argument_type(MethodBindT<StringName_const&,Callable_const&,Vector<Variant>const&> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if (( (uint)param_1 < 3 ) && ( cVar1 = param_1 != 0 )) {
      cVar1 = ( param_1 != 1 ) * '\x03' + '\x19';
   }

   return cVar1;
}
/* Performance::_get_class_namev() const */undefined8 *Performance::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00105833:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00105833;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Performance");
         goto LAB_0010589e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Performance");
   LAB_0010589e:return &_get_class_namev();
}
/* Performance::get_class() const */void Performance::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Performance::is_class(String const&) const */undefined8 Performance::is_class(Performance *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   long lVar5;
   char cVar6;
   undefined8 uVar7;
   long lVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_00105a2f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_00105a2f:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_00105ae3;
   }

   cVar6 = String::operator ==(param_1, "Performance");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_00105b93;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_00105b93:cVar6 = String::operator ==(param_1, (String*)&local_60);
         lVar4 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_00105ae3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00105ae3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<TypedArray<StringName>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<TypedArray<StringName>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   long local_28;
   long local_20;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = 0;
   Variant::get_type_name(&local_38, 0x15);
   *puVar3 = 0x1c;
   puVar3[6] = 0x1f;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_38 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_38);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_28, (String*)( puVar3 + 8 ), false);
         if (*(long*)( puVar3 + 4 ) == local_28) {
            lVar2 = local_38;
            if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
               StringName::unref();
               lVar2 = local_38;
            }

         }
 else {
            StringName::unref();
            *(long*)( puVar3 + 4 ) = local_28;
            lVar2 = local_38;
         }

         goto joined_r0x00105d6c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_30);
   lVar2 = local_38;
   joined_r0x00105d6c:local_38 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_30 != 0 )) {
      StringName::unref();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<unsigned long>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<unsigned_long>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC2;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00105eec;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00105eec:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Performance::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Performance::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   undefined7 in_register_00000031;
   List *pLVar6;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   pLVar6 = (List*)CONCAT71(in_register_00000031, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = 0;
   local_90 = 0;
   local_78 = "Performance";
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Performance";
   local_98 = 0;
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_00106098:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00106098;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x001060b6;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x001060b6:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar6 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)pLVar6;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Performance", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar6, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Performance::get_monitor(Performance::Monitor) const [clone .cold] */void Performance::get_monitor(void) {
   FUN_00100268(0);
   return;
}
/* Performance::_bind_methods() [clone .cold] */void Performance::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Variant>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Variant>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Variant>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<Variant>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0010637c(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }

   lVar2 = *(long*)this;
   *(undefined8*)this = 0;
   Memory::free_static((void*)( lVar2 + -0x10 ), false);
   return;
}
/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   long *plVar2;
   long lVar3;
   code *pcVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   long local_60;
   char local_58[8];
   long *local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x106d0d);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC14;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == (long*)0x0) {
         lVar7 = 0;
         lVar6 = -2;
      }
 else {
         lVar7 = local_50[-1];
         lVar6 = lVar7 + -2;
         if (-1 < lVar6) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar6 ));
            String::operator +((String*)this, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_00106dfd;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   local_60 = 0;
   local_48 = &_LC14;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join(this);
   lVar7 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }

   }

   LAB_00106dfd:plVar1 = local_50;
   if (local_50 != (long*)0x0) {
      LOCK();
      plVar5 = local_50 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_50 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar7 = local_50[-1];
         local_50 = (long*)0x0;
         if (lVar7 != 0) {
            lVar6 = 0;
            plVar5 = plVar1;
            do {
               if (*plVar5 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar5 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar3 = *plVar5;
                     *plVar5 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar7 != lVar6 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<Performance::Monitor, void>::get_class_info() */GetTypeInfo<Performance::Monitor,void> * __thiscall
GetTypeInfo<Performance::Monitor,void>::get_class_info(GetTypeInfo<Performance::Monitor,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "Performance::Monitor";
   local_40 = 0x14;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<double, Performance::Monitor>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<double,Performance::Monitor>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   undefined *local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_78 = 0;
      local_70 = 6;
      local_90 = (undefined1[16])0x0;
      GetTypeInfo<Performance::Monitor,void>::get_class_info((GetTypeInfo<Performance::Monitor,void>*)&local_68);
      local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
      if (local_90._0_8_ != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
         lVar2 = local_60;
         local_60 = 0;
         local_90._0_8_ = lVar2;
      }

      if (local_90._8_8_ != local_58) {
         StringName::unref();
         lVar2 = local_58;
         local_58 = 0;
         local_90._8_8_ = lVar2;
      }

      local_80 = CONCAT44(local_80._4_4_, local_50);
      if (local_78 != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         local_78 = local_48;
         local_48 = 0;
      }

      local_70 = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      *puVar3 = (undefined4)local_98;
      *(undefined8*)( puVar3 + 2 ) = local_90._0_8_;
      *(undefined8*)( puVar3 + 4 ) = local_90._8_8_;
      puVar3[6] = (undefined4)local_80;
      *(long*)( puVar3 + 8 ) = local_78;
      puVar3[10] = local_70;
      goto LAB_001072eb;
   }

   local_a0 = 0;
   local_60 = 0;
   local_68 = &_LC2;
   String::parse_latin1((StrRange*)&local_a0);
   *puVar3 = 3;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar3[10] = 6;
      LAB_00107317:StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_98);
      lVar2 = local_a0;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_a0);
      puVar3[10] = 6;
      if (puVar3[6] != 0x11) goto LAB_00107317;
      StringName::StringName((StringName*)&local_68, (String*)( puVar3 + 8 ), false);
      if (*(undefined**)( puVar3 + 4 ) == local_68) {
         lVar2 = local_a0;
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
            lVar2 = local_a0;
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar3 + 4 ) = local_68;
         lVar2 = local_a0;
      }

   }

   local_a0 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   LAB_001072eb:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<Performance, double, Performance::Monitor>(double
   (Performance::*)(Performance::Monitor) const) */MethodBind *create_method_bind<Performance,double,Performance::Monitor>(_func_double_Monitor *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_double_Monitor**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010dcd8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Performance";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<Performance, StringName const&, Callable const&, Vector<Variant>
   const&>(void (Performance::*)(StringName const&, Callable const&, Vector<Variant> const&)) */MethodBind *create_method_bind<Performance,StringName_const&,Callable_const&,Vector<Variant>const&>(_func_void_StringName_ptr_Callable_ptr_Vector_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_StringName_ptr_Callable_ptr_Vector_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010dd38;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "Performance";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<Performance, StringName const&>(void (Performance::*)(StringName
   const&)) */MethodBind *create_method_bind<Performance,StringName_const&>(_func_void_StringName_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010dd98;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Performance";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<Performance, bool, StringName const&>(bool
   (Performance::*)(StringName const&)) */MethodBind *create_method_bind<Performance,bool,StringName_const&>(_func_bool_StringName_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_bool_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010ddf8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Performance";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<Performance, Variant, StringName const&>(Variant
   (Performance::*)(StringName const&)) */MethodBind *create_method_bind<Performance,Variant,StringName_const&>(_func_Variant_StringName_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Variant_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010de58;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Performance";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<Performance, unsigned long>(unsigned long (Performance::*)()) */MethodBind *create_method_bind<Performance,unsigned_long>(_func_ulong *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_ulong**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010deb8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Performance";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<Performance, TypedArray<StringName>>(TypedArray<StringName>
   (Performance::*)()) */MethodBind *create_method_bind<Performance,TypedArray<StringName>>(_func_TypedArray *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_TypedArray**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010df18;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Performance";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Performance::_initialize_classv() */void Performance::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_48 = 0;
      local_38 = "Object";
      local_30 = 6;
      String::parse_latin1((StrRange*)&local_48);
      StringName::StringName((StringName*)&local_40, (String*)&local_48, false);
      local_38 = "Performance";
      local_50 = 0;
      local_30 = 0xb;
      String::parse_latin1((StrRange*)&local_50);
      StringName::StringName((StringName*)&local_38, (String*)&local_50, false);
      ClassDB::_add_class2((StringName*)&local_38, (StringName*)&local_40);
      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

      lVar2 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_40 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_48;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            _bind_methods();
            initialize_class()::initialized = '\x01';
        goto LAB_00107e85
            ;;
         }

      }

      _bind_methods();
      initialize_class() {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* CowData<Variant>::_unref() */
   void CowData<Variant>::_unref(CowData<Variant> *this) {
      long *plVar1;
      int *piVar2;
      long lVar3;
      code *pcVar4;
      int *piVar5;
      long lVar6;
      if (*(long*)this == 0) {
         return;
      }

      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         piVar2 = *(int**)this;
         if (piVar2 != (int*)0x0) {
            lVar3 = *(long*)( piVar2 + -2 );
            *(undefined8*)this = 0;
            if (lVar3 != 0) {
               lVar6 = 0;
               piVar5 = piVar2;
               do {
                  if (Variant::needs_deinit[*piVar5] != '\0') {
                     Variant::_clear_internal();
                  }

                  lVar6 = lVar6 + 1;
                  piVar5 = piVar5 + 6;
               }
 while ( lVar3 != lVar6 );
            }

            Memory::free_static(piVar2 + -4, false);
            return;
         }

         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      *(undefined8*)this = 0;
      return;
   }

   /* Performance::~Performance() */
   void Performance::~Performance(Performance *this) {
      uint uVar1;
      long lVar2;
      void *pvVar3;
      *(undefined***)this = &PTR__initialize_classv_0010db78;
      pvVar3 = *(void**)( this + 0x198 );
      if (pvVar3 != (void*)0x0) {
         if (*(int*)( this + 0x1bc ) != 0) {
            uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1b8 ) * 4 );
            if (uVar1 == 0) {
               *(undefined4*)( this + 0x1bc ) = 0;
               *(undefined1(*) [16])( this + 0x1a8 ) = (undefined1[16])0x0;
            }
 else {
               lVar2 = 0;
               do {
                  if (*(int*)( *(long*)( this + 0x1a0 ) + lVar2 ) != 0) {
                     pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                     *(int*)( *(long*)( this + 0x1a0 ) + lVar2 ) = 0;
                     CowData<Variant>::_unref((CowData<Variant>*)( (long)pvVar3 + 0x30 ));
                     Callable::~Callable((Callable*)( (long)pvVar3 + 0x18 ));
                     if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                        StringName::unref();
                     }

                     Memory::free_static(pvVar3, false);
                     pvVar3 = *(void**)( this + 0x198 );
                     *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
                  }

                  lVar2 = lVar2 + 4;
               }
 while ( lVar2 != (ulong)uVar1 << 2 );
               *(undefined4*)( this + 0x1bc ) = 0;
               *(undefined1(*) [16])( this + 0x1a8 ) = (undefined1[16])0x0;
               if (pvVar3 == (void*)0x0) goto LAB_00108189;
            }

         }

         Memory::free_static(pvVar3, false);
         Memory::free_static(*(void**)( this + 0x1a0 ), false);
         Object::~Object((Object*)this);
         return;
      }

      LAB_00108189:Object::~Object((Object*)this);
      return;
   }

   /* Performance::~Performance() */
   void Performance::~Performance(Performance *this) {
      uint uVar1;
      long lVar2;
      void *pvVar3;
      *(undefined***)this = &PTR__initialize_classv_0010db78;
      pvVar3 = *(void**)( this + 0x198 );
      if (pvVar3 != (void*)0x0) {
         if (*(int*)( this + 0x1bc ) != 0) {
            uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1b8 ) * 4 );
            if (uVar1 == 0) {
               *(undefined4*)( this + 0x1bc ) = 0;
               *(undefined1(*) [16])( this + 0x1a8 ) = (undefined1[16])0x0;
            }
 else {
               lVar2 = 0;
               do {
                  if (*(int*)( *(long*)( this + 0x1a0 ) + lVar2 ) != 0) {
                     pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                     *(int*)( *(long*)( this + 0x1a0 ) + lVar2 ) = 0;
                     CowData<Variant>::_unref((CowData<Variant>*)( (long)pvVar3 + 0x30 ));
                     Callable::~Callable((Callable*)( (long)pvVar3 + 0x18 ));
                     if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                        StringName::unref();
                     }

                     Memory::free_static(pvVar3, false);
                     pvVar3 = *(void**)( this + 0x198 );
                     *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
                  }

                  lVar2 = lVar2 + 4;
               }
 while ( lVar2 != (ulong)uVar1 << 2 );
               *(undefined4*)( this + 0x1bc ) = 0;
               *(undefined1(*) [16])( this + 0x1a8 ) = (undefined1[16])0x0;
               if (pvVar3 == (void*)0x0) goto LAB_001082c9;
            }

         }

         Memory::free_static(pvVar3, false);
         Memory::free_static(*(void**)( this + 0x1a0 ), false);
      }

      LAB_001082c9:Object::~Object((Object*)this);
      operator_delete(this, 0x1c8);
      return;
   }

   /* CowData<Variant>::_realloc(long) */
   undefined8 CowData<Variant>::_realloc(CowData<Variant> *this, long param_1) {
      undefined8 *puVar1;
      puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
      if (puVar1 != (undefined8*)0x0) {
         *puVar1 = 1;
         *(undefined8**)this = puVar1 + 2;
         return 0;
      }

      _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
      return 6;
   }

   /* HashMap<StringName, Performance::MonitorCall, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Performance::MonitorCall> > >::_resize_and_rehash(unsigned int) */
   void HashMap<StringName,Performance::MonitorCall,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Performance::MonitorCall>>>::_resize_and_rehash(HashMap<StringName,Performance::MonitorCall,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Performance::MonitorCall>>> *this, uint param_1) {
      uint *puVar1;
      undefined8 *puVar2;
      uint uVar3;
      uint uVar4;
      uint uVar5;
      void *pvVar6;
      void *pvVar7;
      void *__s;
      long lVar8;
      long lVar9;
      undefined1 auVar10[16];
      undefined1 auVar11[16];
      undefined1 auVar12[16];
      undefined1 auVar13[16];
      undefined1 auVar14[16];
      undefined1 auVar15[16];
      undefined1 auVar16[16];
      undefined1 auVar17[16];
      undefined8 uVar18;
      void *__s_00;
      int iVar19;
      long lVar20;
      uint uVar21;
      ulong uVar22;
      undefined8 uVar23;
      uint uVar24;
      ulong uVar25;
      ulong uVar26;
      uint local_78;
      *(undefined4*)( this + 0x2c ) = 0;
      uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (param_1 < 2) {
         param_1 = 2;
      }

      *(uint*)( this + 0x28 ) = param_1;
      uVar21 = *(uint*)( hash_table_size_primes + (ulong)param_1 * 4 );
      uVar22 = (ulong)uVar21;
      pvVar6 = *(void**)( this + 8 );
      pvVar7 = *(void**)( this + 0x10 );
      uVar26 = uVar22 * 4;
      uVar25 = uVar22 * 8;
      uVar18 = Memory::alloc_static(uVar26, false);
      *(undefined8*)( this + 0x10 ) = uVar18;
      __s_00 = (void*)Memory::alloc_static(uVar25, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar21 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar25 ) ) && ( __s_00 < (void*)( (long)__s + uVar26 ) )) {
            uVar26 = 0;
            do {
               *(undefined4*)( (long)__s + uVar26 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar26 * 8 ) = 0;
               uVar26 = uVar26 + 1;
            }
 while ( uVar22 != uVar26 );
         }
 else {
            memset(__s, 0, uVar26);
            memset(__s_00, 0, uVar25);
         }

      }

      if (uVar3 != 0) {
         uVar26 = 0;
         do {
            uVar21 = *(uint*)( (long)pvVar7 + uVar26 * 4 );
            if (uVar21 != 0) {
               uVar24 = 0;
               lVar8 = *(long*)( this + 0x10 );
               uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar25 = CONCAT44(0, uVar4);
               lVar9 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar21 * lVar9;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = uVar25;
               lVar20 = SUB168(auVar10 * auVar14, 8);
               puVar1 = (uint*)( lVar8 + lVar20 * 4 );
               iVar19 = SUB164(auVar10 * auVar14, 8);
               uVar5 = *puVar1;
               uVar18 = *(undefined8*)( (long)pvVar6 + uVar26 * 8 );
               while (uVar5 != 0) {
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = (ulong)uVar5 * lVar9;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = uVar25;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(( uVar4 + iVar19 ) - SUB164(auVar11 * auVar15, 8)) * lVar9;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar25;
                  local_78 = SUB164(auVar12 * auVar16, 8);
                  uVar23 = uVar18;
                  if (local_78 < uVar24) {
                     *puVar1 = uVar21;
                     puVar2 = (undefined8*)( (long)__s_00 + lVar20 * 8 );
                     uVar23 = *puVar2;
                     *puVar2 = uVar18;
                     uVar21 = uVar5;
                     uVar24 = local_78;
                  }

                  uVar24 = uVar24 + 1;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = ( ulong )(iVar19 + 1) * lVar9;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar25;
                  lVar20 = SUB168(auVar13 * auVar17, 8);
                  puVar1 = (uint*)( lVar8 + lVar20 * 4 );
                  iVar19 = SUB164(auVar13 * auVar17, 8);
                  uVar18 = uVar23;
                  uVar5 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar20 * 8 ) = uVar18;
               *puVar1 = uVar21;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            uVar26 = uVar26 + 1;
         }
 while ( uVar26 != uVar3 );
         Memory::free_static(pvVar6, false);
         Memory::free_static(pvVar7, false);
         return;
      }

      return;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<StringName, Performance::MonitorCall, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Performance::MonitorCall> > >::insert(StringName const&, Performance::MonitorCall const&, bool)
    */
   StringName *HashMap<StringName,Performance::MonitorCall,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Performance::MonitorCall>>>::insert(StringName *param_1, MonitorCall *param_2, bool param_3) {
      uint *puVar1;
      uint uVar2;
      undefined8 *puVar3;
      long lVar4;
      void *__s;
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      undefined1 auVar11[16];
      undefined1 auVar12[16];
      undefined1 auVar13[16];
      undefined1 auVar14[16];
      undefined1 auVar15[16];
      undefined1 auVar16[16];
      undefined1 auVar17[16];
      undefined1 auVar18[16];
      undefined1 auVar19[16];
      undefined1 auVar20[16];
      long *plVar21;
      uint uVar22;
      uint uVar23;
      long *plVar24;
      long lVar25;
      undefined8 uVar26;
      void *__s_00;
      Callable *in_RCX;
      uint uVar27;
      int iVar28;
      undefined7 in_register_00000011;
      StringName *pSVar29;
      long lVar30;
      long lVar31;
      char in_R8B;
      uint uVar32;
      ulong uVar33;
      uint uVar34;
      ulong uVar35;
      ulong uVar36;
      long *plVar37;
      long in_FS_OFFSET;
      uint local_a8;
      long local_68;
      Callable local_60[24];
      long local_48;
      long local_40;
      pSVar29 = (StringName*)CONCAT71(in_register_00000011, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar22 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
      if (*(long*)( param_2 + 8 ) == 0) {
         uVar36 = (ulong)uVar22;
         uVar35 = uVar36 * 4;
         uVar33 = uVar36 * 8;
         uVar26 = Memory::alloc_static(uVar35, false);
         *(undefined8*)( param_2 + 0x10 ) = uVar26;
         __s_00 = (void*)Memory::alloc_static(uVar33, false);
         *(void**)( param_2 + 8 ) = __s_00;
         if (uVar22 != 0) {
            __s = *(void**)( param_2 + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar33 ) ) && ( __s_00 < (void*)( (long)__s + uVar35 ) )) {
               uVar35 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar35 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar35 * 8 ) = 0;
                  uVar35 = uVar35 + 1;
               }
 while ( uVar36 != uVar35 );
            }
 else {
               memset(__s, 0, uVar35);
               memset(__s_00, 0, uVar33);
            }

            goto LAB_001086ef;
         }

         iVar28 = *(int*)( param_2 + 0x2c );
         if (__s_00 == (void*)0x0) goto LAB_00108807;
         if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_001086fb;
         LAB_00108829:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
            plVar24 = (long*)0x0;
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            goto LAB_00108a27;
         }

         _resize_and_rehash((HashMap<StringName,Performance::MonitorCall,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Performance::MonitorCall>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
      }
 else {
         LAB_001086ef:iVar28 = *(int*)( param_2 + 0x2c );
         if (iVar28 != 0) {
            LAB_001086fb:uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
            uVar35 = CONCAT44(0, uVar2);
            lVar25 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
            if (*(long*)pSVar29 == 0) {
               uVar23 = StringName::get_empty_hash();
            }
 else {
               uVar23 = *(uint*)( *(long*)pSVar29 + 0x20 );
            }

            if (uVar23 == 0) {
               uVar23 = 1;
            }

            uVar34 = 0;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar23 * lVar25;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar35;
            lVar30 = SUB168(auVar5 * auVar13, 8);
            uVar32 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar30 * 4 );
            uVar27 = SUB164(auVar5 * auVar13, 8);
            if (uVar32 != 0) {
               do {
                  if (( uVar32 == uVar23 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 8 ) + lVar30 * 8 ) + 0x10 ) == *(long*)pSVar29 )) {
                     lVar25 = *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 );
                     Callable::operator =((Callable*)( lVar25 + 0x18 ), in_RCX);
                     if (*(long*)( lVar25 + 0x30 ) != *(long*)( in_RCX + 0x18 )) {
                        CowData<Variant>::_ref((CowData<Variant>*)( lVar25 + 0x30 ), (CowData*)( in_RCX + 0x18 ));
                     }

                     plVar24 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 );
                     goto LAB_00108a27;
                  }

                  uVar34 = uVar34 + 1;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( ulong )(uVar27 + 1) * lVar25;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = uVar35;
                  lVar30 = SUB168(auVar6 * auVar14, 8);
                  uVar32 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar30 * 4 );
                  uVar27 = SUB164(auVar6 * auVar14, 8);
               }
 while ( ( uVar32 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar32 * lVar25,auVar15._8_8_ = 0,auVar15._0_8_ = uVar35,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar2 + uVar27 ) - SUB164(auVar7 * auVar15, 8)) * lVar25,auVar16._8_8_ = 0,auVar16._0_8_ = uVar35,uVar34 <= SUB164(auVar8 * auVar16, 8) );
            }

            iVar28 = *(int*)( param_2 + 0x2c );
         }

         LAB_00108807:if ((float)uVar22 * __LC82 < (float)( iVar28 + 1 )) goto LAB_00108829;
      }

      StringName::StringName((StringName*)&local_68, pSVar29);
      Callable::Callable(local_60, in_RCX);
      local_48 = 0;
      if (*(long*)( in_RCX + 0x18 ) != 0) {
         CowData<Variant>::_ref((CowData<Variant>*)&local_48, (CowData*)( in_RCX + 0x18 ));
      }

      plVar24 = (long*)operator_new(0x38, "");
      *plVar24 = 0;
      plVar24[1] = 0;
      StringName::StringName((StringName*)( plVar24 + 2 ), (StringName*)&local_68);
      Callable::Callable((Callable*)( plVar24 + 3 ), local_60);
      plVar24[6] = 0;
      if (local_48 != 0) {
         CowData<Variant>::_ref((CowData<Variant>*)( plVar24 + 6 ), (CowData*)&local_48);
      }

      CowData<Variant>::_unref((CowData<Variant>*)&local_48);
      Callable::~Callable(local_60);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      puVar3 = *(undefined8**)( param_2 + 0x20 );
      if (puVar3 == (undefined8*)0x0) {
         *(long**)( param_2 + 0x18 ) = plVar24;
         *(long**)( param_2 + 0x20 ) = plVar24;
         LAB_0010892f:lVar25 = *(long*)pSVar29;
         if (lVar25 != 0) goto LAB_0010893c;
         LAB_00108a7c:uVar22 = StringName::get_empty_hash();
      }
 else {
         if (in_R8B == '\0') {
            *puVar3 = plVar24;
            plVar24[1] = (long)puVar3;
            *(long**)( param_2 + 0x20 ) = plVar24;
            goto LAB_0010892f;
         }

         lVar25 = *(long*)( param_2 + 0x18 );
         *(long**)( lVar25 + 8 ) = plVar24;
         *plVar24 = lVar25;
         lVar25 = *(long*)pSVar29;
         *(long**)( param_2 + 0x18 ) = plVar24;
         if (lVar25 == 0) goto LAB_00108a7c;
         LAB_0010893c:uVar22 = *(uint*)( lVar25 + 0x20 );
      }

      lVar25 = *(long*)( param_2 + 0x10 );
      if (uVar22 == 0) {
         uVar22 = 1;
      }

      uVar35 = (ulong)uVar22;
      uVar32 = 0;
      lVar30 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
      uVar33 = CONCAT44(0, uVar2);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar35 * lVar30;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar33;
      lVar31 = SUB168(auVar9 * auVar17, 8);
      lVar4 = *(long*)( param_2 + 8 );
      puVar1 = (uint*)( lVar25 + lVar31 * 4 );
      iVar28 = SUB164(auVar9 * auVar17, 8);
      uVar23 = *puVar1;
      plVar21 = plVar24;
      while (uVar23 != 0) {
         auVar10._8_8_ = 0;
         auVar10._0_8_ = (ulong)uVar23 * lVar30;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = uVar33;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = ( ulong )(( uVar2 + iVar28 ) - SUB164(auVar10 * auVar18, 8)) * lVar30;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar33;
         local_a8 = SUB164(auVar11 * auVar19, 8);
         plVar37 = plVar21;
         if (local_a8 < uVar32) {
            *puVar1 = (uint)uVar35;
            uVar35 = (ulong)uVar23;
            puVar3 = (undefined8*)( lVar4 + lVar31 * 8 );
            plVar37 = (long*)*puVar3;
            *puVar3 = plVar21;
            uVar32 = local_a8;
         }

         uVar22 = (uint)uVar35;
         uVar32 = uVar32 + 1;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = ( ulong )(iVar28 + 1) * lVar30;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar33;
         lVar31 = SUB168(auVar12 * auVar20, 8);
         puVar1 = (uint*)( lVar25 + lVar31 * 4 );
         iVar28 = SUB164(auVar12 * auVar20, 8);
         plVar21 = plVar37;
         uVar23 = *puVar1;
      }
;
      *(long**)( lVar4 + lVar31 * 8 ) = plVar21;
      *puVar1 = uVar22;
      *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
      LAB_00108a27:*(long**)param_1 = plVar24;
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<StringName, Performance::MonitorCall, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Performance::MonitorCall> > >::operator[](StringName const&) */
   Callable * __thiscallHashMap<StringName,Performance::MonitorCall,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Performance::MonitorCall>>>::operator [](HashMap<StringName,Performance::MonitorCall,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Performance::MonitorCall>>> * this, StringName * param_1);
   {
      uint *puVar1;
      undefined8 *puVar2;
      void *__s;
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      undefined1 auVar11[16];
      undefined1 auVar12[16];
      undefined1 auVar13[16];
      undefined1 auVar14[16];
      undefined1 auVar15[16];
      undefined1 auVar16[16];
      undefined1 auVar17[16];
      undefined1 auVar18[16];
      undefined1 auVar19[16];
      undefined1 auVar20[16];
      undefined1 auVar21[16];
      undefined1 auVar22[16];
      undefined1 auVar23[16];
      undefined1 auVar24[16];
      undefined1 auVar25[16];
      undefined1 auVar26[16];
      uint uVar27;
      uint uVar28;
      undefined8 *puVar29;
      long lVar30;
      undefined8 uVar31;
      void *__s_00;
      int iVar32;
      long lVar33;
      long lVar34;
      long lVar35;
      uint uVar36;
      uint uVar37;
      uint uVar38;
      ulong uVar39;
      ulong uVar40;
      undefined8 *puVar41;
      long in_FS_OFFSET;
      CowData *local_c8;
      CowData<Variant> *local_b0;
      Callable *local_a8;
      Callable *local_a0;
      undefined8 local_98;
      undefined8 local_90;
      long local_80;
      undefined1 local_78[16];
      long local_68;
      Callable local_60[24];
      long local_48;
      long local_40;
      lVar30 = *(long*)( this + 8 );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar27 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      local_c8 = (CowData*)(ulong)uVar27;
      if (lVar30 == 0) {
         LAB_001090d3:local_80 = 0;
         local_90 = 0;
         local_98 = 0;
         uVar40 = (long)local_c8 * 4;
         uVar39 = (long)local_c8 * 8;
         uVar31 = Memory::alloc_static(uVar40, false);
         *(undefined8*)( this + 0x10 ) = uVar31;
         __s_00 = (void*)Memory::alloc_static(uVar39, false);
         *(void**)( this + 8 ) = __s_00;
         if ((int)local_c8 != 0) {
            __s = *(void**)( this + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar39 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
               uVar40 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
                  uVar40 = uVar40 + 1;
               }
 while ( local_c8 != (CowData*)uVar40 );
            }
 else {
               memset(__s, 0, uVar40);
               memset(__s_00, 0, uVar39);
            }

            goto LAB_00108d33;
         }

         iVar32 = *(int*)( this + 0x2c );
         if (__s_00 == (void*)0x0) goto LAB_00108e58;
         if (*(int*)( this + 0x2c ) != 0) goto LAB_00108d3f;
         LAB_00108e7a:if (*(int*)( this + 0x28 ) == 0x1c) {
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            local_a0 = (Callable*)0x18;
            goto LAB_0010907f;
         }

         _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
      }
 else {
         if (*(int*)( this + 0x2c ) == 0) {
            local_98 = 0;
            local_90 = 0;
            local_80 = 0;
            local_c8 = (CowData*)( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         }
 else {
            lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            if (*(long*)param_1 == 0) {
               uVar28 = StringName::get_empty_hash();
               lVar30 = *(long*)( this + 8 );
            }
 else {
               uVar28 = *(uint*)( *(long*)param_1 + 0x20 );
            }

            uVar40 = CONCAT44(0, uVar27);
            if (uVar28 == 0) {
               uVar28 = 1;
            }

            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)uVar28 * lVar34;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar40;
            lVar33 = SUB168(auVar3 * auVar15, 8);
            uVar36 = *(uint*)( *(long*)( this + 0x10 ) + lVar33 * 4 );
            uVar37 = SUB164(auVar3 * auVar15, 8);
            if (uVar36 != 0) {
               uVar38 = 0;
               do {
                  if (( uVar36 == uVar28 ) && ( *(long*)( *(long*)( lVar30 + lVar33 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                     local_a0 = (Callable*)( *(long*)( lVar30 + (ulong)uVar37 * 8 ) + 0x18 );
                     goto LAB_00108cd3;
                  }

                  uVar38 = uVar38 + 1;
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = ( ulong )(uVar37 + 1) * lVar34;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar40;
                  lVar33 = SUB168(auVar4 * auVar16, 8);
                  uVar36 = *(uint*)( *(long*)( this + 0x10 ) + lVar33 * 4 );
                  uVar37 = SUB164(auVar4 * auVar16, 8);
               }
 while ( ( uVar36 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar36 * lVar34,auVar17._8_8_ = 0,auVar17._0_8_ = uVar40,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar37 + uVar27 ) - SUB164(auVar5 * auVar17, 8)) * lVar34,auVar18._8_8_ = 0,auVar18._0_8_ = uVar40,uVar38 <= SUB164(auVar6 * auVar18, 8) );
            }

            local_98 = 0;
            local_90 = 0;
            local_80 = 0;
            local_c8 = (CowData*)( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            if (lVar30 == 0) goto LAB_001090d3;
         }

         LAB_00108d33:iVar32 = *(int*)( this + 0x2c );
         if (iVar32 != 0) {
            LAB_00108d3f:uVar27 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar40 = CONCAT44(0, uVar27);
            lVar30 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            if (*(long*)param_1 == 0) {
               uVar28 = StringName::get_empty_hash();
            }
 else {
               uVar28 = *(uint*)( *(long*)param_1 + 0x20 );
            }

            if (uVar28 == 0) {
               uVar28 = 1;
            }

            uVar38 = 0;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar28 * lVar30;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar40;
            lVar34 = SUB168(auVar7 * auVar19, 8);
            uVar36 = *(uint*)( *(long*)( this + 0x10 ) + lVar34 * 4 );
            uVar37 = SUB164(auVar7 * auVar19, 8);
            if (uVar36 != 0) {
               do {
                  if (( uVar28 == uVar36 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar34 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                     lVar30 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar37 * 8 );
                     Callable::operator =((Callable*)( lVar30 + 0x18 ), (Callable*)&local_98);
                     if (*(long*)( lVar30 + 0x30 ) != local_80) {
                        CowData<Variant>::_ref((CowData<Variant>*)( lVar30 + 0x30 ), (CowData*)&local_80);
                     }

                     local_a0 = (Callable*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar37 * 8 ) + 0x18 );
                     goto LAB_0010907f;
                  }

                  uVar38 = uVar38 + 1;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = ( ulong )(uVar37 + 1) * lVar30;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar40;
                  lVar34 = SUB168(auVar8 * auVar20, 8);
                  uVar36 = *(uint*)( *(long*)( this + 0x10 ) + lVar34 * 4 );
                  uVar37 = SUB164(auVar8 * auVar20, 8);
               }
 while ( ( uVar36 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar36 * lVar30,auVar21._8_8_ = 0,auVar21._0_8_ = uVar40,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar27 + uVar37 ) - SUB164(auVar9 * auVar21, 8)) * lVar30,auVar22._8_8_ = 0,auVar22._0_8_ = uVar40,uVar38 <= SUB164(auVar10 * auVar22, 8) );
            }

            iVar32 = *(int*)( this + 0x2c );
         }

         LAB_00108e58:if ((float)(long)local_c8 * __LC82 < (float)( iVar32 + 1 )) goto LAB_00108e7a;
      }

      local_78 = (undefined1[16])0x0;
      StringName::StringName((StringName*)&local_68, param_1);
      Callable::Callable(local_60, (Callable*)&local_98);
      local_48 = 0;
      if (local_80 != 0) {
         CowData<Variant>::_ref((CowData<Variant>*)&local_48, (CowData*)&local_80);
      }

      local_c8 = (CowData*)&local_48;
      puVar29 = (undefined8*)operator_new(0x38, "");
      *puVar29 = local_78._0_8_;
      puVar29[1] = local_78._8_8_;
      StringName::StringName((StringName*)( puVar29 + 2 ), (StringName*)&local_68);
      local_a0 = (Callable*)( puVar29 + 3 );
      Callable::Callable(local_a0, local_60);
      puVar29[6] = 0;
      if (local_48 != 0) {
         CowData<Variant>::_ref((CowData<Variant>*)( puVar29 + 6 ), local_c8);
      }

      CowData<Variant>::_unref((CowData<Variant>*)local_c8);
      Callable::~Callable(local_60);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      puVar41 = *(undefined8**)( this + 0x20 );
      if (puVar41 == (undefined8*)0x0) {
         lVar30 = *(long*)param_1;
         *(undefined8**)( this + 0x18 ) = puVar29;
         *(undefined8**)( this + 0x20 ) = puVar29;
         if (lVar30 == 0) goto LAB_001091a4;
         LAB_00108fa3:uVar27 = *(uint*)( lVar30 + 0x20 );
      }
 else {
         *puVar41 = puVar29;
         puVar29[1] = puVar41;
         lVar30 = *(long*)param_1;
         *(undefined8**)( this + 0x20 ) = puVar29;
         if (lVar30 != 0) goto LAB_00108fa3;
         LAB_001091a4:uVar27 = StringName::get_empty_hash();
      }

      lVar30 = *(long*)( this + 0x10 );
      if (uVar27 == 0) {
         uVar27 = 1;
      }

      uVar40 = (ulong)uVar27;
      uVar37 = 0;
      lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar28 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar39 = CONCAT44(0, uVar28);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar40 * lVar34;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar39;
      lVar35 = SUB168(auVar11 * auVar23, 8);
      lVar33 = *(long*)( this + 8 );
      puVar1 = (uint*)( lVar30 + lVar35 * 4 );
      iVar32 = SUB164(auVar11 * auVar23, 8);
      uVar36 = *puVar1;
      while (uVar36 != 0) {
         auVar12._8_8_ = 0;
         auVar12._0_8_ = (ulong)uVar36 * lVar34;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar39;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = ( ulong )(( iVar32 + uVar28 ) - SUB164(auVar12 * auVar24, 8)) * lVar34;
         auVar25._8_8_ = 0;
         auVar25._0_8_ = uVar39;
         uVar27 = SUB164(auVar13 * auVar25, 8);
         puVar41 = puVar29;
         if (uVar27 < uVar37) {
            *puVar1 = (uint)uVar40;
            uVar40 = (ulong)uVar36;
            puVar2 = (undefined8*)( lVar33 + lVar35 * 8 );
            puVar41 = (undefined8*)*puVar2;
            *puVar2 = puVar29;
            uVar37 = uVar27;
         }

         uVar27 = (uint)uVar40;
         uVar37 = uVar37 + 1;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = ( ulong )(iVar32 + 1) * lVar34;
         auVar26._8_8_ = 0;
         auVar26._0_8_ = uVar39;
         lVar35 = SUB168(auVar14 * auVar26, 8);
         puVar1 = (uint*)( lVar30 + lVar35 * 4 );
         iVar32 = SUB164(auVar14 * auVar26, 8);
         puVar29 = puVar41;
         uVar36 = *puVar1;
      }
;
      *(undefined8**)( lVar33 + lVar35 * 8 ) = puVar29;
      *puVar1 = uVar27;
      *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
      LAB_0010907f:local_a8 = (Callable*)&local_98;
      local_b0 = (CowData<Variant>*)&local_80;
      CowData<Variant>::_unref(local_b0);
      Callable::~Callable(local_a8);
      LAB_00108cd3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return local_a0;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* CowData<Variant const*>::_realloc(long) */
   undefined8 CowData<Variant_const*>::_realloc(CowData<Variant_const*> *this, long param_1) {
      undefined8 *puVar1;
      puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
      if (puVar1 != (undefined8*)0x0) {
         *puVar1 = 1;
         *(undefined8**)this = puVar1 + 2;
         return 0;
      }

      _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
      return 6;
   }

   /* WARNING: Removing unreachable block (ram,0x00109468) */
   /* WARNING: Removing unreachable block (ram,0x001095fd) */
   /* WARNING: Removing unreachable block (ram,0x00109609) */
   /* String vformat<StringName>(String const&, StringName const) */
   undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
      Variant *this;
      int iVar1;
      long in_FS_OFFSET;
      Array local_c8[8];
      undefined8 local_c0[9];
      int local_78[6];
      undefined8 local_60;
      undefined1 local_58[16];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      Variant::Variant((Variant*)local_78, param_3);
      local_60 = 0;
      local_58 = (undefined1[16])0x0;
      Array::Array(local_c8);
      iVar1 = (int)local_c8;
      Array::resize(iVar1);
      this(Variant * Array::operator [](iVar1));
      Variant::operator =(this, (Variant*)local_78);
      String::sprintf((Array*)local_c0, param_2);
      *param_1 = local_c0[0];
      Array::~Array(local_c8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   /* MethodBindTR<TypedArray<StringName>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindTR<TypedArray<StringName>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      char *pcVar3;
      Variant *pVVar4;
      long *plVar5;
      undefined4 in_register_00000014;
      long *plVar6;
      int in_R8D;
      undefined4 *in_R9;
      long in_FS_OFFSET;
      long local_68;
      long local_60;
      char *local_58;
      undefined8 local_50;
      undefined4 local_48[2];
      undefined8 local_40;
      undefined8 uStack_38;
      long local_30;
      plVar6 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar6 != (long*)0x0 ) && ( plVar6[1] != 0 ) ) && ( *(char*)( plVar6[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
         if (plVar6[1] == 0) {
            plVar5 = (long*)plVar6[0x23];
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *plVar6 + 0x40 ) )(plVar6);
            }

         }
 else {
            plVar5 = (long*)( plVar6[1] + 0x20 );
         }

         if (local_58 == (char*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC104, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            pcVar3 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar6 = (long*)( local_58 + -0x10 );
               *plVar6 = *plVar6 + -1;
               UNLOCK();
               if (*plVar6 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }

            }

            lVar2 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar6 = (long*)( local_60 + -0x10 );
               *plVar6 = *plVar6 + -1;
               UNLOCK();
               if (*plVar6 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00109810;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar4 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D == 0) {
         if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
            *in_R9 = 0;
            if (( (ulong)pVVar4 & 1 ) != 0) {
               pVVar4 = *(Variant**)( pVVar4 + *(long*)( (long)plVar6 + (long)pVVar1 ) + -1 );
            }

            ( *(code*)pVVar4 )((Array*)&local_58);
            Variant::Variant((Variant*)local_48, (Array*)&local_58);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_1 = local_48[0];
            *(undefined8*)( param_1 + 8 ) = local_40;
            *(undefined8*)( param_1 + 0x10 ) = uStack_38;
            Array::~Array((Array*)&local_58);
         }
 else {
            *in_R9 = 4;
            in_R9[2] = 0;
         }

      }
 else {
         *in_R9 = 3;
         in_R9[2] = 0;
      }

      LAB_00109810:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<unsigned long>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTR<unsigned_long>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      char *pcVar3;
      ulong uVar4;
      long *plVar6;
      undefined4 in_register_00000014;
      long *plVar7;
      int in_R8D;
      undefined4 *in_R9;
      long in_FS_OFFSET;
      long local_68;
      long local_60;
      char *local_58;
      undefined8 local_50;
      undefined4 local_48[2];
      undefined8 local_40;
      undefined8 uStack_38;
      long local_30;
      Variant *pVVar5;
      plVar7 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar7 != (long*)0x0 ) && ( plVar7[1] != 0 ) ) && ( *(char*)( plVar7[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
         if (plVar7[1] == 0) {
            plVar6 = (long*)plVar7[0x23];
            if (plVar6 == (long*)0x0) {
               plVar6 = (long*)( **(code**)( *plVar7 + 0x40 ) )(plVar7);
            }

         }
 else {
            plVar6 = (long*)( plVar7[1] + 0x20 );
         }

         if (local_58 == (char*)*plVar6) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC104, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            pcVar3 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar7 = (long*)( local_58 + -0x10 );
               *plVar7 = *plVar7 + -1;
               UNLOCK();
               if (*plVar7 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }

            }

            lVar2 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar7 = (long*)( local_60 + -0x10 );
               *plVar7 = *plVar7 + -1;
               UNLOCK();
               if (*plVar7 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00109af0;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar5 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D == 0) {
         if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
            *in_R9 = 0;
            if (( (ulong)pVVar5 & 1 ) != 0) {
               pVVar5 = *(Variant**)( pVVar5 + *(long*)( (long)plVar7 + (long)pVVar1 ) + -1 );
            }

            uVar4 = ( *(code*)pVVar5 )();
            Variant::Variant((Variant*)local_48, uVar4);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_1 = local_48[0];
            *(undefined8*)( param_1 + 8 ) = local_40;
            *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         }
 else {
            *in_R9 = 4;
            in_R9[2] = 0;
         }

      }
 else {
         *in_R9 = 3;
         in_R9[2] = 0;
      }

      LAB_00109af0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<unsigned long>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTR<unsigned_long>::validated_call(MethodBindTR<unsigned_long> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      char *pcVar2;
      undefined8 uVar3;
      long *plVar5;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      code *pcVar4;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (char*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar5 = (long*)( local_48 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }

            }

            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar5 = (long*)( local_50 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_00109de2;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar4 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar4 & 1 ) != 0) {
         pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      uVar3 = ( *pcVar4 )(param_1 + *(long*)( this + 0x60 ));
      *(undefined8*)( param_3 + 8 ) = uVar3;
      LAB_00109de2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<unsigned long>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<unsigned_long>::ptrcall(MethodBindTR<unsigned_long> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char *pcVar2;
      undefined8 uVar3;
      long *plVar5;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      code *pcVar4;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (char*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar5 = (long*)( local_48 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }

            }

            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar5 = (long*)( local_50 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_00109fe1;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar4 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar4 & 1 ) != 0) {
         pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      uVar3 = ( *pcVar4 )(param_1 + *(long*)( this + 0x60 ));
      *(undefined8*)param_3 = uVar3;
      LAB_00109fe1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<Variant, StringName const&>::validated_call(Object*, Variant const**, Variant*)
   const */
   void MethodBindTR<Variant,StringName_const&>::validated_call(MethodBindTR<Variant,StringName_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      char *pcVar2;
      code *pcVar3;
      long *plVar4;
      long in_FS_OFFSET;
      long local_68;
      long local_60;
      char *local_58;
      undefined8 local_50;
      int local_48[6];
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar4 = *(long**)( param_1 + 0x118 );
            if (plVar4 == (long*)0x0) {
               plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_58 == (char*)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0);
            pcVar2 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar4 = (long*)( local_58 + -0x10 );
               *plVar4 = *plVar4 + -1;
               UNLOCK();
               if (*plVar4 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }

            }

            lVar1 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar4 = (long*)( local_60 + -0x10 );
               *plVar4 = *plVar4 + -1;
               UNLOCK();
               if (*plVar4 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010a1fd;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar3 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar3 & 1 ) != 0) {
         pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      ( *pcVar3 )((Variant*)local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
      Variant::operator =(param_3, (Variant*)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      LAB_0010a1fd:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<Variant, StringName const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<Variant,StringName_const&>::ptrcall(MethodBindTR<Variant,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char *pcVar2;
      code *pcVar3;
      long *plVar4;
      long in_FS_OFFSET;
      long local_68;
      long local_60;
      char *local_58;
      undefined8 local_50;
      int local_48[6];
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar4 = *(long**)( param_1 + 0x118 );
            if (plVar4 == (long*)0x0) {
               plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_58 == (char*)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0);
            pcVar2 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar4 = (long*)( local_58 + -0x10 );
               *plVar4 = *plVar4 + -1;
               UNLOCK();
               if (*plVar4 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }

            }

            lVar1 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar4 = (long*)( local_60 + -0x10 );
               *plVar4 = *plVar4 + -1;
               UNLOCK();
               if (*plVar4 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010a45b;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar3 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar3 & 1 ) != 0) {
         pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      ( *pcVar3 )((Variant*)local_48, param_1 + *(long*)( this + 0x60 ), *param_2);
      Variant::operator =((Variant*)param_3, (Variant*)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      LAB_0010a45b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<bool, StringName const&>::validated_call(Object*, Variant const**, Variant*) const
    */
   void MethodBindTR<bool,StringName_const&>::validated_call(MethodBindTR<bool,StringName_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      char *pcVar2;
      Variant VVar3;
      code *pcVar4;
      long *plVar5;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (char*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar5 = (long*)( local_48 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }

            }

            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar5 = (long*)( local_50 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010a699;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar4 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar4 & 1 ) != 0) {
         pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      VVar3 = ( Variant )(*pcVar4)(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
      param_3[8] = VVar3;
      LAB_0010a699:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<bool, StringName const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<bool,StringName_const&>::ptrcall(MethodBindTR<bool,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char *pcVar2;
      undefined1 uVar3;
      long *plVar5;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      code *pcVar4;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (char*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar5 = (long*)( local_48 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }

            }

            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar5 = (long*)( local_50 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010a8b5;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar4 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar4 & 1 ) != 0) {
         pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      uVar3 = ( *pcVar4 )(param_1 + *(long*)( this + 0x60 ), *param_2);
      *(undefined1*)param_3 = uVar3;
      LAB_0010a8b5:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<StringName const&>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<StringName_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
      long *plVar1;
      long lVar2;
      char *pcVar3;
      code *UNRECOVERED_JUMPTABLE;
      Variant *pVVar4;
      long in_FS_OFFSET;
      long local_48;
      long local_40;
      char *local_38;
      undefined8 local_30;
      long local_20;
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
         StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
         if (param_2[1] == (Variant*)0x0) {
            pVVar4 = param_2[0x23];
            if (pVVar4 == (Variant*)0x0) {
               pVVar4 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
            }

         }
 else {
            pVVar4 = param_2[1] + 0x20;
         }

         if (local_38 == *(char**)pVVar4) {
            if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_40 = 0;
            local_30 = 0x35;
            String::parse_latin1((StrRange*)&local_40);
            vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
            pcVar3 = local_38;
            if (local_38 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_38 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_38 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }

            }

            lVar2 = local_40;
            if (local_40 != 0) {
               LOCK();
               plVar1 = (long*)( local_40 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_40 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
               StringName::unref();
            }

            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_0010aca5;
         }

         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
      if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x0010aae9. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
         return;
      }

      LAB_0010aca5:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<StringName const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<StringName_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char *pcVar2;
      code *UNRECOVERED_JUMPTABLE;
      long *plVar3;
      long in_FS_OFFSET;
      long local_48;
      long local_40;
      char *local_38;
      undefined8 local_30;
      long local_20;
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
         if (param_2[1] == (void*)0x0) {
            plVar3 = (long*)param_2[0x23];
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
            }

         }
 else {
            plVar3 = (long*)( (long)param_2[1] + 0x20 );
         }

         if (local_38 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_40 = 0;
            local_30 = 0x35;
            String::parse_latin1((StrRange*)&local_40);
            vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
            pcVar2 = local_38;
            if (local_38 != (char*)0x0) {
               LOCK();
               plVar3 = (long*)( local_38 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_38 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }

            }

            lVar1 = local_40;
            if (local_40 != 0) {
               LOCK();
               plVar3 = (long*)( local_40 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_40 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
               StringName::unref();
            }

            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_0010aec5;
         }

         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
      /* WARNING: Load size is inaccurate */
      if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x0010ad05. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
         return;
      }

      LAB_0010aec5:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<StringName const&, Callable const&, Vector<Variant> const&>::validated_call(Object*,
   Variant const**, Variant*) const */
   void MethodBindT<StringName_const&,Callable_const&,Vector<Variant>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      undefined8 uVar2;
      code *pcVar3;
      int iVar4;
      Variant *pVVar5;
      long lVar6;
      long lVar7;
      long in_FS_OFFSET;
      code *local_78;
      long local_68;
      undefined8 local_60;
      char *local_58;
      long local_50[2];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( param_1 + 0x18 ));
         if (param_2[1] == (Variant*)0x0) {
            pVVar5 = param_2[0x23];
            if (pVVar5 == (Variant*)0x0) {
               pVVar5 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
            }

         }
 else {
            pVVar5 = param_2[1] + 0x20;
         }

         if (local_58 == *(char**)pVVar5) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50[0] = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010b038;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      lVar1 = *(long*)( param_1 + 0x60 );
      local_78 = *(code**)( param_1 + 0x58 );
      if (( (ulong)local_78 & 1 ) != 0) {
         local_78 = *(code**)( local_78 + *(long*)( lVar1 + (long)param_2 ) + -1 );
      }

      uVar2 = *(undefined8*)( param_3 + 0x10 );
      local_50[0] = 0;
      iVar4 = Array::size();
      CowData<Variant>::resize<false>((CowData<Variant>*)local_50, (long)iVar4);
      lVar7 = 0;
      if (0 < iVar4) {
         do {
            pVVar5 = (Variant*)Array::get((int)uVar2 + 8);
            if (local_50[0] == 0) {
               lVar6 = 0;
               LAB_0010afb2:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar7, lVar6, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            lVar6 = *(long*)( local_50[0] + -8 );
            if (lVar6 <= lVar7) goto LAB_0010afb2;
            CowData<Variant>::_copy_on_write((CowData<Variant>*)local_50);
            lVar6 = lVar7 + 1;
            Variant::operator =((Variant*)( local_50[0] + lVar7 * 0x18 ), pVVar5);
            lVar7 = lVar6;
         }
 while ( iVar4 != lVar6 );
      }

      ( *local_78 )((long*)( lVar1 + (long)param_2 ), *(long*)param_3 + 8, *(long*)( param_3 + 8 ) + 8, &local_58);
      CowData<Variant>::_unref((CowData<Variant>*)local_50);
      LAB_0010b038:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* MethodBindT<StringName const&, Callable const&, Vector<Variant> const&>::ptrcall(Object*, void
   const**, void*) const */
   void MethodBindT<StringName_const&,Callable_const&,Vector<Variant>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      undefined8 uVar2;
      code *pcVar3;
      int iVar4;
      Variant *pVVar5;
      long *plVar6;
      long lVar7;
      long lVar8;
      long in_FS_OFFSET;
      code *local_78;
      long local_68;
      undefined8 local_60;
      char *local_58;
      long local_50[2];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( param_1 + 0x18 ));
         if (param_2[1] == (void*)0x0) {
            plVar6 = (long*)param_2[0x23];
            if (plVar6 == (long*)0x0) {
               plVar6 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
            }

         }
 else {
            plVar6 = (long*)( (long)param_2[1] + 0x20 );
         }

         if (local_58 == (char*)*plVar6) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50[0] = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010b308;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      lVar1 = *(long*)( param_1 + 0x60 );
      local_78 = *(code**)( param_1 + 0x58 );
      if (( (ulong)local_78 & 1 ) != 0) {
         local_78 = *(code**)( local_78 + *(long*)( lVar1 + (long)param_2 ) + -1 );
      }

      uVar2 = *(undefined8*)( (long)param_3 + 0x10 );
      local_50[0] = 0;
      iVar4 = Array::size();
      CowData<Variant>::resize<false>((CowData<Variant>*)local_50, (long)iVar4);
      lVar8 = 0;
      if (0 < iVar4) {
         do {
            pVVar5 = (Variant*)Array::operator []((int)uVar2);
            if (local_50[0] == 0) {
               lVar7 = 0;
               LAB_0010b289:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar8, lVar7, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            lVar7 = *(long*)( local_50[0] + -8 );
            if (lVar7 <= lVar8) goto LAB_0010b289;
            CowData<Variant>::_copy_on_write((CowData<Variant>*)local_50);
            lVar7 = lVar8 + 1;
            Variant::operator =((Variant*)( local_50[0] + lVar8 * 0x18 ), pVVar5);
            lVar8 = lVar7;
         }
 while ( iVar4 != lVar7 );
      }

      /* WARNING: Load size is inaccurate */
      ( *local_78 )((long*)( lVar1 + (long)param_2 ), *param_3, *(undefined8*)( (long)param_3 + 8 ), &local_58);
      CowData<Variant>::_unref((CowData<Variant>*)local_50);
      LAB_0010b308:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* MethodBindTRC<double, Performance::Monitor>::validated_call(Object*, Variant const**, Variant*)
   const */
   void MethodBindTRC<double,Performance::Monitor>::validated_call(MethodBindTRC<double,Performance::Monitor> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      char *pcVar2;
      code *pcVar3;
      long *plVar4;
      long in_FS_OFFSET;
      undefined8 uVar5;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar4 = *(long**)( param_1 + 0x118 );
            if (plVar4 == (long*)0x0) {
               plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (char*)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar4 = (long*)( local_48 + -0x10 );
               *plVar4 = *plVar4 + -1;
               UNLOCK();
               if (*plVar4 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }

            }

            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar4 = (long*)( local_50 + -0x10 );
               *plVar4 = *plVar4 + -1;
               UNLOCK();
               if (*plVar4 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010b4ba;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar3 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar3 & 1 ) != 0) {
         pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      uVar5 = ( *pcVar3 )(param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
      *(undefined8*)( param_3 + 8 ) = uVar5;
      LAB_0010b4ba:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<double, Performance::Monitor>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<double,Performance::Monitor>::ptrcall(MethodBindTRC<double,Performance::Monitor> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char *pcVar2;
      code *pcVar3;
      long *plVar4;
      long in_FS_OFFSET;
      undefined8 uVar5;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar4 = *(long**)( param_1 + 0x118 );
            if (plVar4 == (long*)0x0) {
               plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (char*)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar4 = (long*)( local_48 + -0x10 );
               *plVar4 = *plVar4 + -1;
               UNLOCK();
               if (*plVar4 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }

            }

            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar4 = (long*)( local_50 + -0x10 );
               *plVar4 = *plVar4 + -1;
               UNLOCK();
               if (*plVar4 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010b6d9;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar3 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar3 & 1 ) != 0) {
         pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      /* WARNING: Load size is inaccurate */
      uVar5 = ( *pcVar3 )(param_1 + *(long*)( this + 0x60 ), **param_2);
      *(undefined8*)param_3 = uVar5;
      LAB_0010b6d9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<TypedArray<StringName>>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTR<TypedArray<StringName>>::validated_call(MethodBindTR<TypedArray<StringName>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      Variant **ppVVar1;
      long lVar2;
      Variant **ppVVar3;
      code *pcVar4;
      long *plVar5;
      Variant **extraout_RDX;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      Variant **local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (Variant**)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = (Variant**)0x109658;
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
            ppVVar3 = local_48;
            if (local_48 != (Variant**)0x0) {
               LOCK();
               ppVVar1 = local_48 + -2;
               *ppVVar1 = *ppVVar1 + -1;
               UNLOCK();
               if (*ppVVar1 == (Variant*)0x0) {
                  local_48 = (Variant**)0x0;
                  Memory::free_static(ppVVar3 + -2, false);
               }

            }

            lVar2 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar5 = (long*)( local_50 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010b909;
         }

         param_2 = local_48;
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
            param_2 = extraout_RDX;
         }

      }

      pcVar4 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar4 & 1 ) != 0) {
         param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar4 = *(code**)( pcVar4 + (long)param_2 + -1 );
      }

      ( *pcVar4 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
      Array::operator =((Array*)( param_3 + 8 ), (Array*)&local_48);
      Array::~Array((Array*)&local_48);
      LAB_0010b909:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<TypedArray<StringName>>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<TypedArray<StringName>>::ptrcall(MethodBindTR<TypedArray<StringName>> *this, Object *param_1, void **param_2, void *param_3) {
      void **ppvVar1;
      long lVar2;
      void **ppvVar3;
      code *pcVar4;
      long *plVar5;
      void **extraout_RDX;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      void **local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (void**)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = (void**)0x109658;
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
            ppvVar3 = local_48;
            if (local_48 != (void**)0x0) {
               LOCK();
               ppvVar1 = local_48 + -2;
               *ppvVar1 = (void*)( (long)*ppvVar1 + -1 );
               UNLOCK();
               if (*ppvVar1 == (void*)0x0) {
                  local_48 = (void**)0x0;
                  Memory::free_static(ppvVar3 + -2, false);
               }

            }

            lVar2 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar5 = (long*)( local_50 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010bb1a;
         }

         param_2 = local_48;
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
            param_2 = extraout_RDX;
         }

      }

      pcVar4 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar4 & 1 ) != 0) {
         param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar4 = *(code**)( pcVar4 + (long)param_2 + -1 );
      }

      ( *pcVar4 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
      Array::operator =((Array*)param_3, (Array*)&local_48);
      Array::~Array((Array*)&local_48);
      LAB_0010bb1a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<StringName const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */
   Object *MethodBindT<StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      code *pcVar3;
      undefined8 uVar4;
      char *pcVar5;
      char cVar6;
      undefined4 uVar7;
      long *plVar8;
      long lVar9;
      undefined4 in_register_00000014;
      long *plVar10;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar11;
      Variant *pVVar12;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
         if (plVar10[1] == 0) {
            plVar8 = (long*)plVar10[0x23];
            if (plVar8 == (long*)0x0) {
               plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
            }

         }
 else {
            plVar8 = (long*)( plVar10[1] + 0x20 );
         }

         if (local_48 == (char*)*plVar8) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error(&_LC104, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0);
            pcVar5 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar10 = (long*)( local_48 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar5 + -0x10, false);
               }

            }

            lVar2 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar10 = (long*)( local_50 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010be70;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar12 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D < 2) {
         pVVar11 = param_2[5];
         if (pVVar11 == (Variant*)0x0) {
            if (in_R8D != 1) goto LAB_0010bec0;
            LAB_0010beb0:pVVar11 = *(Variant**)param_4;
         }
 else {
            lVar2 = *(long*)( pVVar11 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_0010bec0:uVar7 = 4;
               goto LAB_0010be65;
            }

            if (in_R8D == 1) goto LAB_0010beb0;
            lVar9 = (long)( (int)lVar2 + -1 );
            if (lVar2 <= lVar9) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            pVVar11 = pVVar11 + lVar9 * 0x18;
         }

         *in_R9 = 0;
         if (( (ulong)pVVar12 & 1 ) != 0) {
            pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
         }

         cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar11, 0x15);
         uVar4 = _LC109;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_StringName((Variant*)&local_48);
         ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_48);
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         uVar7 = 3;
         LAB_0010be65:*in_R9 = uVar7;
         in_R9[2] = 1;
      }

      LAB_0010be70:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<bool, StringName const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindTR<bool,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      code *pcVar3;
      undefined8 uVar4;
      char *pcVar5;
      char cVar6;
      bool bVar7;
      undefined4 uVar8;
      long *plVar9;
      long lVar10;
      undefined4 in_register_00000014;
      long *plVar11;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar12;
      Variant *pVVar13;
      long in_FS_OFFSET;
      long local_78;
      undefined8 local_70;
      char *local_68;
      undefined8 local_60;
      undefined4 local_58[2];
      undefined8 local_50;
      undefined8 uStack_48;
      long local_40;
      plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
         if (plVar11[1] == 0) {
            plVar9 = (long*)plVar11[0x23];
            if (plVar9 == (long*)0x0) {
               plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
            }

         }
 else {
            plVar9 = (long*)( plVar11[1] + 0x20 );
         }

         if (local_68 == (char*)*plVar9) {
            if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_70 = 0;
            local_60 = 0x35;
            String::parse_latin1((StrRange*)&local_70);
            vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
            _err_print_error(&_LC104, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
            pcVar5 = local_68;
            if (local_68 != (char*)0x0) {
               LOCK();
               plVar11 = (long*)( local_68 + -0x10 );
               *plVar11 = *plVar11 + -1;
               UNLOCK();
               if (*plVar11 == 0) {
                  local_68 = (char*)0x0;
                  Memory::free_static(pcVar5 + -0x10, false);
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010c250;
         }

         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar13 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D < 2) {
         pVVar12 = param_2[5];
         if (pVVar12 == (Variant*)0x0) {
            if (in_R8D != 1) goto LAB_0010c2a0;
            LAB_0010c290:pVVar12 = *(Variant**)param_4;
         }
 else {
            lVar2 = *(long*)( pVVar12 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_0010c2a0:uVar8 = 4;
               goto LAB_0010c245;
            }

            if (in_R8D == 1) goto LAB_0010c290;
            lVar10 = (long)( (int)lVar2 + -1 );
            if (lVar2 <= lVar10) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            pVVar12 = pVVar12 + lVar10 * 0x18;
         }

         *in_R9 = 0;
         if (( (ulong)pVVar13 & 1 ) != 0) {
            pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
         }

         cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12, 0x15);
         uVar4 = _LC109;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_StringName((Variant*)&local_68);
         bVar7 = (bool)( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), (Variant*)&local_68);
         Variant::Variant((Variant*)local_58, bVar7);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         bVar7 = StringName::configured != '\0';
         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         if (( bVar7 ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         uVar8 = 3;
         LAB_0010c245:*in_R9 = uVar8;
         in_R9[2] = 1;
      }

      LAB_0010c250:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   /* MethodBindTR<Variant, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindTR<Variant,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      code *pcVar3;
      undefined8 uVar4;
      char cVar5;
      undefined4 uVar6;
      long *plVar7;
      long lVar8;
      undefined4 in_register_00000014;
      long *plVar9;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar10;
      Variant *pVVar11;
      long in_FS_OFFSET;
      bool bVar12;
      long local_78;
      long local_70;
      char *local_68;
      undefined8 local_60;
      undefined4 local_58[2];
      undefined8 local_50;
      undefined8 uStack_48;
      long local_40;
      plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
         if (plVar9[1] == 0) {
            plVar7 = (long*)plVar9[0x23];
            if (plVar7 == (long*)0x0) {
               plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
            }

         }
 else {
            plVar7 = (long*)( plVar9[1] + 0x20 );
         }

         if (local_68 == (char*)*plVar7) {
            if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_70 = 0;
            local_60 = 0x35;
            String::parse_latin1((StrRange*)&local_70);
            vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
            _err_print_error(&_LC104, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            lVar2 = local_70;
            if (local_70 != 0) {
               LOCK();
               plVar9 = (long*)( local_70 + -0x10 );
               *plVar9 = *plVar9 + -1;
               UNLOCK();
               if (*plVar9 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010c618;
         }

         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar11 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D < 2) {
         pVVar10 = param_2[5];
         if (pVVar10 == (Variant*)0x0) {
            if (in_R8D != 1) goto LAB_0010c660;
            LAB_0010c650:pVVar10 = *(Variant**)param_4;
         }
 else {
            lVar2 = *(long*)( pVVar10 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_0010c660:uVar6 = 4;
               goto LAB_0010c60d;
            }

            if (in_R8D == 1) goto LAB_0010c650;
            lVar8 = (long)( (int)lVar2 + -1 );
            if (lVar2 <= lVar8) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            pVVar10 = pVVar10 + lVar8 * 0x18;
         }

         *in_R9 = 0;
         if (( (ulong)pVVar11 & 1 ) != 0) {
            pVVar11 = *(Variant**)( pVVar11 + *(long*)( (long)plVar9 + (long)pVVar1 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x15);
         uVar4 = _LC109;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_StringName((Variant*)&local_68);
         ( *(code*)pVVar11 )(local_58, (Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_68);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         bVar12 = StringName::configured != '\0';
         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         if (( bVar12 ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         uVar6 = 3;
         LAB_0010c60d:*in_R9 = uVar6;
         in_R9[2] = 1;
      }

      LAB_0010c618:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   /* MethodBindT<StringName const&, Callable const&, Vector<Variant> const&>::call(Object*, Variant
   const**, int, Callable::CallError&) const */
   Object *MethodBindT<StringName_const&,Callable_const&,Vector<Variant>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      Variant *pVVar2;
      code *pcVar3;
      undefined8 uVar4;
      char cVar5;
      undefined4 uVar6;
      long lVar7;
      long *plVar8;
      int iVar9;
      uint uVar10;
      Variant *pVVar11;
      undefined4 in_register_00000014;
      long *plVar12;
      long lVar13;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar14;
      long in_FS_OFFSET;
      long local_80;
      undefined8 local_78;
      CowData<Variant> local_70[8];
      char *local_68;
      undefined8 local_60;
      undefined4 *local_58[3];
      long local_40;
      plVar12 = (long*)CONCAT44(in_register_00000014, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( plVar12 != (long*)0x0 ) && ( plVar12[1] != 0 ) ) && ( *(char*)( plVar12[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
         if (plVar12[1] == 0) {
            plVar8 = (long*)plVar12[0x23];
            if (plVar8 == (long*)0x0) {
               plVar8 = (long*)( **(code**)( *plVar12 + 0x40 ) )();
            }

         }
 else {
            plVar8 = (long*)( plVar12[1] + 0x20 );
         }

         if (local_68 == (char*)*plVar8) {
            if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_78 = 0;
            local_60 = 0x35;
            String::parse_latin1((StrRange*)&local_78);
            vformat<StringName>((StringName*)&local_68, (StrRange*)&local_78, &local_80);
            _err_print_error(&_LC104, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010ca4a;
         }

         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar14 = param_2[0xb];
      pVVar1 = param_2[0xc];
      uVar6 = 3;
      if (in_R8D < 4) {
         pVVar2 = param_2[5];
         if (pVVar2 == (Variant*)0x0) {
            iVar9 = 0;
            lVar13 = 0;
         }
 else {
            lVar13 = *(long*)( pVVar2 + -8 );
            iVar9 = (int)lVar13;
         }

         if ((int)( 3 - in_R8D ) <= iVar9) {
            lVar7 = 0;
            do {
               if ((int)lVar7 < (int)in_R8D) {
                  pVVar11 = *(Variant**)( param_4 + lVar7 * 8 );
               }
 else {
                  uVar10 = iVar9 + -3 + (int)lVar7;
                  if (lVar13 <= (int)uVar10) {
                     _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar10, lVar13, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }

                  pVVar11 = pVVar2 + (ulong)uVar10 * 0x18;
               }

               local_58[lVar7] = (undefined4*)pVVar11;
               lVar7 = lVar7 + 1;
            }
 while ( lVar7 != 3 );
            *in_R9 = 0;
            if (( (ulong)pVVar14 & 1 ) != 0) {
               pVVar14 = *(Variant**)( pVVar14 + *(long*)( (long)plVar12 + (long)pVVar1 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*local_58[2], 0x1c);
            uVar4 = _LC111;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            Variant::operator_cast_to_Vector((Variant*)&local_78);
            cVar5 = Variant::can_convert_strict(*local_58[1], 0x19);
            uVar4 = _LC112;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            Variant::operator_cast_to_Callable((Variant*)&local_68);
            cVar5 = Variant::can_convert_strict(*local_58[0], 0x15);
            uVar4 = _LC109;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            Variant::operator_cast_to_StringName((Variant*)&local_80);
            ( *(code*)pVVar14 )((Variant*)( (long)plVar12 + (long)pVVar1 ), (Variant*)&local_80, (Variant*)&local_68, (Variant*)&local_78);
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

            Callable::~Callable((Callable*)&local_68);
            CowData<Variant>::_unref(local_70);
            goto LAB_0010ca4a;
         }

         uVar6 = 4;
      }

      *in_R9 = uVar6;
      in_R9[2] = 3;
      LAB_0010ca4a:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<double, Performance::Monitor>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindTRC<double,Performance::Monitor>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      code *pcVar3;
      undefined8 uVar4;
      char *pcVar5;
      char cVar6;
      undefined4 uVar7;
      ulong uVar8;
      long *plVar9;
      long lVar10;
      undefined4 in_register_00000014;
      long *plVar11;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar12;
      Variant *pVVar13;
      long in_FS_OFFSET;
      double dVar14;
      long local_68;
      long local_60;
      char *local_58;
      undefined8 local_50;
      undefined4 local_48[2];
      undefined8 local_40;
      undefined8 uStack_38;
      long local_30;
      plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
         if (plVar11[1] == 0) {
            plVar9 = (long*)plVar11[0x23];
            if (plVar9 == (long*)0x0) {
               plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
            }

         }
 else {
            plVar9 = (long*)( plVar11[1] + 0x20 );
         }

         if (local_58 == (char*)*plVar9) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC104, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0);
            pcVar5 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar11 = (long*)( local_58 + -0x10 );
               *plVar11 = *plVar11 + -1;
               UNLOCK();
               if (*plVar11 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar5 + -0x10, false);
               }

            }

            lVar2 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar11 = (long*)( local_60 + -0x10 );
               *plVar11 = *plVar11 + -1;
               UNLOCK();
               if (*plVar11 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010cda8;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar13 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D < 2) {
         pVVar12 = param_2[5];
         if (pVVar12 == (Variant*)0x0) {
            if (in_R8D != 1) goto LAB_0010cdf0;
            LAB_0010cde0:pVVar12 = *(Variant**)param_4;
         }
 else {
            lVar2 = *(long*)( pVVar12 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_0010cdf0:uVar7 = 4;
               goto LAB_0010cd9d;
            }

            if (in_R8D == 1) goto LAB_0010cde0;
            lVar10 = (long)( (int)lVar2 + -1 );
            if (lVar2 <= lVar10) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            pVVar12 = pVVar12 + lVar10 * 0x18;
         }

         *in_R9 = 0;
         if (( (ulong)pVVar13 & 1 ) != 0) {
            pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
         }

         cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12, 2);
         uVar4 = _LC113;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         uVar8 = Variant::operator_cast_to_long(pVVar12);
         dVar14 = (double)( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), uVar8 & 0xffffffff);
         Variant::Variant((Variant*)local_48, dVar14);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      }
 else {
         uVar7 = 3;
         LAB_0010cd9d:*in_R9 = uVar7;
         in_R9[2] = 1;
      }

      LAB_0010cda8:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   /* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */
   void call_get_argument_type_info_helper<StringName_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
      undefined1 auVar1[16];
      undefined1 auVar2[16];
      undefined8 uVar3;
      long lVar4;
      int iVar5;
      long in_FS_OFFSET;
      undefined8 local_88;
      long local_80;
      long local_78;
      long local_70;
      undefined *local_68;
      undefined1 local_60[16];
      int local_50;
      long local_48;
      undefined4 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      iVar5 = *param_2;
      if (iVar5 != param_1) goto LAB_0010d067;
      local_78 = 0;
      local_68 = &_LC2;
      local_80 = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x15);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_0010d165:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_0010d165;
         StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
         if (local_60._8_8_ == local_70) {
            if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_60._8_8_ = local_70;
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_3 = local_68._0_4_;
      if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         uVar3 = local_60._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         *(undefined8*)( param_3 + 8 ) = uVar3;
      }

      if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
         StringName::unref();
         uVar3 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( param_3 + 0x10 ) = uVar3;
      }

      *(int*)( param_3 + 0x18 ) = local_50;
      if (*(long*)( param_3 + 0x20 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         lVar4 = local_48;
         local_48 = 0;
         *(long*)( param_3 + 0x20 ) = lVar4;
      }

      *(undefined4*)( param_3 + 0x28 ) = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      iVar5 = *param_2;
      LAB_0010d067:*param_2 = iVar5 + 1;
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* MethodBindT<StringName const&>::_gen_argument_type_info(int) const */
   PropertyInfo *MethodBindT<StringName_const&>::_gen_argument_type_info(int param_1) {
      int in_EDX;
      undefined4 in_register_0000003c;
      PropertyInfo *pPVar1;
      long in_FS_OFFSET;
      int local_14;
      long local_10;
      pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
      local_10 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)pPVar1 = 0;
      *(undefined4*)( pPVar1 + 0x18 ) = 0;
      *(undefined8*)( pPVar1 + 0x20 ) = 0;
      *(undefined4*)( pPVar1 + 0x28 ) = 6;
      *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
      local_14 = 0;
      call_get_argument_type_info_helper<StringName_const&>(in_EDX, &local_14, pPVar1);
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return pPVar1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<bool, StringName const&>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTR<bool,StringName_const&>::_gen_argument_type_info(int param_1) {
      long *plVar1;
      undefined1 auVar2[16];
      long lVar3;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar4;
      long in_FS_OFFSET;
      long local_78;
      ulong local_70;
      undefined *local_68;
      undefined1 local_60[16];
      undefined8 local_50;
      undefined8 local_48;
      undefined4 local_40;
      long local_30;
      puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (in_EDX == 0) {
         local_68 = (undefined*)0x0;
         local_50 = 0;
         local_48 = 0;
         local_40 = 6;
         local_70 = local_70 & 0xffffffff00000000;
         local_60 = (undefined1[16])0x0;
         call_get_argument_type_info_helper<StringName_const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
         *puVar4 = local_68._0_4_;
         *(undefined8*)( puVar4 + 2 ) = local_60._0_8_;
         *(undefined8*)( puVar4 + 4 ) = local_60._8_8_;
         puVar4[6] = (undefined4)local_50;
         *(undefined8*)( puVar4 + 8 ) = local_48;
         puVar4[10] = local_40;
         goto LAB_0010d3a5;
      }

      local_70 = 0;
      local_68 = &_LC2;
      local_78 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._0_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_78);
      *puVar4 = 1;
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      if (local_78 == 0) {
         puVar4[10] = 6;
         LAB_0010d4b7:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
         lVar3 = local_78;
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
         puVar4[10] = 6;
         if (puVar4[6] != 0x11) goto LAB_0010d4b7;
         StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
         if (*(undefined**)( puVar4 + 4 ) == local_68) {
            lVar3 = local_78;
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
               lVar3 = local_78;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar4 + 4 ) = local_68;
            lVar3 = local_78;
         }

      }

      local_78 = lVar3;
      if (lVar3 != 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      LAB_0010d3a5:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar4;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<Variant, StringName const&>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTR<Variant,StringName_const&>::_gen_argument_type_info(int param_1) {
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar1;
      long in_FS_OFFSET;
      int local_5c;
      long local_58;
      undefined1 local_50[16];
      undefined8 local_40;
      undefined8 local_38;
      undefined4 local_30;
      long local_20;
      puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      local_58 = 0;
      if (in_EDX == 0) {
         local_40 = 0;
         local_38 = 0;
         local_30 = 6;
         local_5c = 0;
         local_50 = (undefined1[16])0x0;
         call_get_argument_type_info_helper<StringName_const&>(0, &local_5c, (PropertyInfo*)&local_58);
         *puVar1 = (undefined4)local_58;
         *(undefined8*)( puVar1 + 2 ) = local_50._0_8_;
         *(undefined8*)( puVar1 + 4 ) = local_50._8_8_;
         puVar1[6] = (undefined4)local_40;
         *(undefined8*)( puVar1 + 8 ) = local_38;
         puVar1[10] = local_30;
      }
 else {
         *puVar1 = 0;
         puVar1[6] = 0;
         *(undefined8*)( puVar1 + 8 ) = 0;
         puVar1[10] = 0x20006;
         *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
         StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void call_get_argument_type_info<StringName const&, Callable const&, Vector<Variant> const&>(int,
   PropertyInfo&) */
   void call_get_argument_type_info<StringName_const&,Callable_const&,Vector<Variant>const&>(int param_1, PropertyInfo *param_2) {
      undefined1 auVar1[16];
      undefined1 auVar2[16];
      undefined1 auVar3[16];
      undefined8 uVar4;
      long lVar5;
      long in_FS_OFFSET;
      int local_8c;
      undefined8 local_88;
      long local_80;
      long local_78;
      long local_70;
      undefined *local_68;
      undefined1 local_60[16];
      int local_50;
      long local_48;
      undefined4 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      local_8c = 0;
      call_get_argument_type_info_helper<StringName_const&>(param_1, &local_8c, param_2);
      if (param_1 == local_8c) {
         local_78 = 0;
         local_68 = &_LC2;
         local_80 = 0;
         auVar1._8_8_ = 0;
         auVar1._0_8_ = local_60._8_8_;
         local_60 = auVar1 << 0x40;
         String::parse_latin1((StrRange*)&local_80);
         local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x19);
      }
 else {
         local_8c = local_8c + 1;
         if (param_1 != local_8c) goto LAB_0010d66f;
         local_78 = 0;
         local_68 = &_LC2;
         local_80 = 0;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_60._8_8_;
         local_60 = auVar3 << 0x40;
         String::parse_latin1((StrRange*)&local_80);
         local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x1c);
      }

      local_88 = 0;
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_0010d765:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_0010d765;
         StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
         if (local_60._8_8_ == local_70) {
            if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_60._8_8_ = local_70;
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_2 = local_68._0_4_;
      if (*(long*)( param_2 + 8 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
         uVar4 = local_60._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         *(undefined8*)( param_2 + 8 ) = uVar4;
      }

      if (*(long*)( param_2 + 0x10 ) != local_60._8_8_) {
         StringName::unref();
         uVar4 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( param_2 + 0x10 ) = uVar4;
      }

      *(int*)( param_2 + 0x18 ) = local_50;
      if (*(long*)( param_2 + 0x20 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x20 ));
         lVar5 = local_48;
         local_48 = 0;
         *(long*)( param_2 + 0x20 ) = lVar5;
      }

      *(undefined4*)( param_2 + 0x28 ) = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      LAB_0010d66f:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* MethodBindT<StringName const&, Callable const&, Vector<Variant>
   const&>::_gen_argument_type_info(int) const */
   PropertyInfo *MethodBindT<StringName_const&,Callable_const&,Vector<Variant>const&>::_gen_argument_type_info(int param_1) {
      int in_EDX;
      undefined4 in_register_0000003c;
      PropertyInfo *pPVar1;
      pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
      *(undefined4*)pPVar1 = 0;
      *(undefined4*)( pPVar1 + 0x18 ) = 0;
      *(undefined8*)( pPVar1 + 0x20 ) = 0;
      *(undefined4*)( pPVar1 + 0x28 ) = 6;
      *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
      call_get_argument_type_info<StringName_const&,Callable_const&,Vector<Variant>const&>(in_EDX, pPVar1);
      return pPVar1;
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* StringName::~StringName() */
   void StringName::~StringName(StringName *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* Performance::~Performance() */
   void Performance::~Performance(Performance *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<TypedArray<StringName>>::~MethodBindTR() */
   void MethodBindTR<TypedArray<StringName>>::~MethodBindTR(MethodBindTR<TypedArray<StringName>> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<unsigned long>::~MethodBindTR() */
   void MethodBindTR<unsigned_long>::~MethodBindTR(MethodBindTR<unsigned_long> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<Variant, StringName const&>::~MethodBindTR() */
   void MethodBindTR<Variant,StringName_const&>::~MethodBindTR(MethodBindTR<Variant,StringName_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<bool, StringName const&>::~MethodBindTR() */
   void MethodBindTR<bool,StringName_const&>::~MethodBindTR(MethodBindTR<bool,StringName_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<StringName const&>::~MethodBindT() */
   void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<StringName const&, Callable const&, Vector<Variant> const&>::~MethodBindT() */
   void MethodBindT<StringName_const&,Callable_const&,Vector<Variant>const&>::~MethodBindT(MethodBindT<StringName_const&,Callable_const&,Vector<Variant>const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<double, Performance::Monitor>::~MethodBindTRC() */
   void MethodBindTRC<double,Performance::Monitor>::~MethodBindTRC(MethodBindTRC<double,Performance::Monitor> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

}

