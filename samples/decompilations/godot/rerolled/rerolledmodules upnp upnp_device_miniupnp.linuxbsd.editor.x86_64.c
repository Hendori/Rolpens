/* UPNPDeviceMiniUPNP::set_igd_status(UPNPDevice::IGDStatus) */void UPNPDeviceMiniUPNP::set_igd_status(UPNPDeviceMiniUPNP *this, undefined4 param_2) {
   *(undefined4*)( this + 0x1a8 ) = param_2;
   return;
}
/* UPNPDeviceMiniUPNP::get_igd_status() const */undefined4 UPNPDeviceMiniUPNP::get_igd_status(UPNPDeviceMiniUPNP *this) {
   return *(undefined4*)( this + 0x1a8 );
}
/* UPNPDeviceMiniUPNP::is_valid_gateway() const */undefined4 UPNPDeviceMiniUPNP::is_valid_gateway(UPNPDeviceMiniUPNP *this) {
   return CONCAT31(( int3 )(( uint ) * (int*)( this + 0x1a8 ) >> 8), *(int*)( this + 0x1a8 ) == 0);
}
/* UPNPDeviceMiniUPNP::query_external_address() const */void UPNPDeviceMiniUPNP::query_external_address(void) {
   long *plVar1;
   char cVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long *in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   char local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *in_RSI + 0x1b0 ) == is_valid_gateway) {
      if ((int)in_RSI[0x35] != 0) {
         LAB_0010019d:_err_print_error("query_external_address", "modules/upnp/upnp_device_miniupnp.cpp", 0x2c, "Condition \"!is_valid_gateway()\" is true. Returning: \"\"", "The Internet Gateway Device must be valid.", 0, 0);
         *(undefined8*)in_RDI = 0;
         String::parse_latin1(in_RDI);
         goto LAB_00100121;
      }

   }
 else {
      cVar2 = ( **(code**)( *in_RSI + 0x1b0 ) )();
      if (cVar2 == '\0') goto LAB_0010019d;
   }

   String::utf8();
   uVar4 = CharString::get_data();
   String::utf8();
   uVar5 = CharString::get_data();
   iVar3 = UPNP_GetExternalIPAddress(uVar5, uVar4, local_48);
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_60 + -0x10 ), false);
      }

   }

   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_58 + -0x10 ), false);
      }

   }

   if (iVar3 == 0) {
      *(undefined8*)in_RDI = 0;
      strlen(local_48);
      String::parse_latin1(in_RDI);
   }
 else {
      _err_print_error("query_external_address", "modules/upnp/upnp_device_miniupnp.cpp", 0x34, "Condition \"i != (0)\" is true. Returning: \"\"", "Couldn\'t get external IP address.", 0, 0);
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }

   LAB_00100121:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* UPNPDeviceMiniUPNP::set_service_type(String const&) */void UPNPDeviceMiniUPNP::set_service_type(UPNPDeviceMiniUPNP *this, String *param_1) {
   if (*(long*)( this + 0x188 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x188 ), (CowData*)param_1);
      return;
   }

   return;
}
/* UPNPDeviceMiniUPNP::set_igd_control_url(String const&) */void UPNPDeviceMiniUPNP::set_igd_control_url(UPNPDeviceMiniUPNP *this, String *param_1) {
   if (*(long*)( this + 400 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 400 ), (CowData*)param_1);
      return;
   }

   return;
}
/* UPNPDeviceMiniUPNP::set_igd_service_type(String const&) */void UPNPDeviceMiniUPNP::set_igd_service_type(UPNPDeviceMiniUPNP *this, String *param_1) {
   if (*(long*)( this + 0x198 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x198 ), (CowData*)param_1);
      return;
   }

   return;
}
/* UPNPDeviceMiniUPNP::set_igd_our_addr(String const&) */void UPNPDeviceMiniUPNP::set_igd_our_addr(UPNPDeviceMiniUPNP *this, String *param_1) {
   if (*(long*)( this + 0x1a0 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x1a0 ), (CowData*)param_1);
      return;
   }

   return;
}
/* UPNPDeviceMiniUPNP::set_description_url(String const&) */void UPNPDeviceMiniUPNP::set_description_url(UPNPDeviceMiniUPNP *this, String *param_1) {
   if (*(long*)( this + 0x180 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x180 ), (CowData*)param_1);
      return;
   }

   return;
}
/* UPNPDeviceMiniUPNP::get_description_url() const */void UPNPDeviceMiniUPNP::get_description_url(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x180 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x180 ));
   }

   return;
}
/* UPNPDeviceMiniUPNP::get_igd_service_type() const */void UPNPDeviceMiniUPNP::get_igd_service_type(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x198 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x198 ));
   }

   return;
}
/* UPNPDeviceMiniUPNP::get_igd_our_addr() const */void UPNPDeviceMiniUPNP::get_igd_our_addr(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x1a0 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x1a0 ));
   }

   return;
}
/* UPNPDeviceMiniUPNP::get_service_type() const */void UPNPDeviceMiniUPNP::get_service_type(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x188 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x188 ));
   }

   return;
}
/* UPNPDeviceMiniUPNP::get_igd_control_url() const */void UPNPDeviceMiniUPNP::get_igd_control_url(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 400 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 400 ));
   }

   return;
}
/* UPNPDeviceMiniUPNP::delete_port_mapping(int, String) const */ulong UPNPDeviceMiniUPNP::delete_port_mapping(undefined8 param_1_00, int param_1, String *param_3) {
   long *plVar1;
   long lVar2;
   char cVar3;
   uint uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   long local_48;
   long local_40;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 - 1U < 0xffff) {
      cVar3 = String::operator !=(param_3, "UDP");
      if (cVar3 != '\0') {
         cVar3 = String::operator !=(param_3, "TCP");
         if (cVar3 != '\0') {
            uVar9 = 0x12;
            _err_print_error("delete_port_mapping", "modules/upnp/upnp_device_miniupnp.cpp", 0x56, "Condition \"proto != \"UDP\" && proto != \"TCP\"\" is true. Returning: UPNP::UPNP_RESULT_INVALID_PROTOCOL", "The protocol must be either TCP or UDP.", 0, 0);
            goto LAB_00100621;
         }

      }

      String::utf8();
      uVar5 = CharString::get_data();
      itos((long)&local_48);
      String::utf8();
      uVar6 = CharString::get_data();
      String::utf8();
      uVar7 = CharString::get_data();
      String::utf8();
      uVar8 = CharString::get_data();
      uVar4 = UPNP_DeletePortMapping(uVar8, uVar7, uVar6, uVar5, 0);
      uVar9 = (ulong)uVar4;
      if (local_58 != 0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_58 + -0x10 ), false);
         }

      }

      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_50 + -0x10 ), false);
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

      lVar2 = local_48;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      lVar2 = local_38;
      if (local_38 != 0) {
         LOCK();
         plVar1 = (long*)( local_38 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (uVar4 != 0) {
         _err_print_error("delete_port_mapping", "modules/upnp/upnp_device_miniupnp.cpp", 0x60, "Condition \"i != (0)\" is true. Returning: UPNPMiniUPNP::upnp_result(i)", "Couldn\'t delete port mapping.", 0, 0);
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar9 = UPNPMiniUPNP::upnp_result(uVar4);
            return uVar9;
         }

         goto LAB_001007dc;
      }

   }
 else {
      uVar9 = 0x11;
      _err_print_error("delete_port_mapping", "modules/upnp/upnp_device_miniupnp.cpp", 0x55, "Condition \"port < 1 || port > 65535\" is true. Returning: UPNP::UPNP_RESULT_INVALID_PORT", "The port number must be set between 1 and 65535 (inclusive).", 0, 0);
   }

   LAB_00100621:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }

   LAB_001007dc:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* UPNPDeviceMiniUPNP::add_port_mapping(int, int, String, String, int) const */ulong UPNPDeviceMiniUPNP::add_port_mapping(UPNPDeviceMiniUPNP *this, int param_1, uint param_2, long *param_4, String *param_5, int param_6) {
   long *plVar1;
   bool bVar2;
   long lVar3;
   char cVar4;
   uint uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   ulong uVar13;
   long in_FS_OFFSET;
   undefined8 local_c8;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   long local_58;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)this + 0x1b0 ) == is_valid_gateway) {
      if (*(int*)( this + 0x1a8 ) == 0) goto LAB_0010084f;
      LAB_00100c5a:uVar13 = 0x10;
      _err_print_error("add_port_mapping", "modules/upnp/upnp_device_miniupnp.cpp", 0x3a, "Condition \"!is_valid_gateway()\" is true. Returning: UPNP::UPNP_RESULT_INVALID_GATEWAY", "The Internet Gateway Device must be valid.", 0, 0);
   }
 else {
      cVar4 = ( **(code**)( *(long*)this + 0x1b0 ) )();
      if (cVar4 == '\0') goto LAB_00100c5a;
      LAB_0010084f:if (param_1 - 1U < 0xffff) {
         if (param_2 < 0x10000) {
            cVar4 = String::operator !=(param_5, "UDP");
            if (( cVar4 == '\0' ) || ( cVar4 = String::operator !=(param_5, "TCP") ),cVar4 == '\0') {
               if (param_6 < 0) {
                  uVar13 = 0x13;
                  _err_print_error("add_port_mapping", "modules/upnp/upnp_device_miniupnp.cpp", 0x3e, "Condition \"duration < 0\" is true. Returning: UPNP::UPNP_RESULT_INVALID_DURATION", "The port mapping\'s lease duration can\'t be negative.", 0, 0);
               }
 else {
                  local_c8 = 0;
                  if (param_6 != 0) {
                     itos((long)&local_50);
                     String::utf8();
                     local_c8 = CharString::get_data();
                  }

                  String::utf8();
                  uVar6 = CharString::get_data();
                  if (*param_4 == 0) {
                     bVar2 = false;
                     uVar12 = 0;
                  }
 else {
                     bVar2 = false;
                     uVar12 = 0;
                     if (1 < ( uint ) * (undefined8*)( *param_4 + -8 )) {
                        String::utf8();
                        bVar2 = true;
                        uVar12 = CharString::get_data();
                     }

                  }

                  String::utf8();
                  uVar7 = CharString::get_data();
                  itos((long)&local_78);
                  String::utf8();
                  uVar8 = CharString::get_data();
                  itos((long)&local_88);
                  String::utf8();
                  uVar9 = CharString::get_data();
                  String::utf8();
                  uVar10 = CharString::get_data();
                  String::utf8();
                  uVar11 = CharString::get_data();
                  uVar5 = UPNP_AddPortMapping(uVar11, uVar10, uVar9, uVar8, uVar7, uVar12, uVar6, 0, local_c8);
                  uVar13 = (ulong)uVar5;
                  if (local_98 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_98 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_98 + -0x10 ), false);
                     }

                  }

                  if (local_90 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_90 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_90 + -0x10 ), false);
                     }

                  }

                  lVar3 = local_80;
                  if (local_80 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_80 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_80 = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  lVar3 = local_88;
                  if (local_88 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_88 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_88 = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  lVar3 = local_70;
                  if (local_70 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_70 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_70 = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  lVar3 = local_78;
                  if (local_78 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_78 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_78 = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  lVar3 = local_68;
                  if (local_68 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_68 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_68 = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  lVar3 = local_60;
                  if (( bVar2 ) && ( local_60 != 0 )) {
                     LOCK();
                     plVar1 = (long*)( local_60 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_60 = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  lVar3 = local_58;
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

                  lVar3 = local_48;
                  if (param_6 != 0) {
                     if (local_48 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_48 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_48 = 0;
                           Memory::free_static((void*)( lVar3 + -0x10 ), false);
                        }

                     }

                     lVar3 = local_50;
                     if (local_50 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_50 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_50 = 0;
                           Memory::free_static((void*)( lVar3 + -0x10 ), false);
                        }

                     }

                  }

                  if (uVar5 != 0) {
                     _err_print_error("add_port_mapping", "modules/upnp/upnp_device_miniupnp.cpp", 0x4f, "Condition \"i != (0)\" is true. Returning: UPNPMiniUPNP::upnp_result(i)", "Couldn\'t add port mapping.", 0, 0);
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        uVar13 = UPNPMiniUPNP::upnp_result(uVar5);
                        return uVar13;
                     }

                     goto LAB_00100e48;
                  }

               }

            }
 else {
               uVar13 = 0x12;
               _err_print_error("add_port_mapping", "modules/upnp/upnp_device_miniupnp.cpp", 0x3d, "Condition \"proto != \"UDP\" && proto != \"TCP\"\" is true. Returning: UPNP::UPNP_RESULT_INVALID_PROTOCOL", "The protocol must be either TCP or UDP.", 0, 0);
            }

            goto LAB_00100b41;
         }

         _err_print_error("add_port_mapping", "modules/upnp/upnp_device_miniupnp.cpp", 0x3c, "Condition \"port_internal < 0 || port_internal > 65535\" is true. Returning: UPNP::UPNP_RESULT_INVALID_PORT", "The port number must be set between 0 and 65535 (inclusive).", 0, 0);
      }
 else {
         _err_print_error("add_port_mapping", "modules/upnp/upnp_device_miniupnp.cpp", 0x3b, "Condition \"port < 1 || port > 65535\" is true. Returning: UPNP::UPNP_RESULT_INVALID_PORT", "The port number must be set between 1 and 65535 (inclusive).", 0, 0);
      }

      uVar13 = 0x11;
   }

   LAB_00100b41:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }

   LAB_00100e48:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* UPNPDeviceMiniUPNP::make_default() */void UPNPDeviceMiniUPNP::make_default(void) {
   UPNPDevice::_create = _create;
   return;
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
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x1037, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1037, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
}
/* UPNPDeviceMiniUPNP::is_class_ptr(void*) const */uint UPNPDeviceMiniUPNP::is_class_ptr(UPNPDeviceMiniUPNP *this, void *param_1) {
   return (uint)CONCAT71(0x1037, (undefined4*)param_1 == &UPNPDevice::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1036, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1037, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1037, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* UPNPDeviceMiniUPNP::_getv(StringName const&, Variant&) const */undefined8 UPNPDeviceMiniUPNP::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* UPNPDeviceMiniUPNP::_setv(StringName const&, Variant const&) */undefined8 UPNPDeviceMiniUPNP::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* UPNPDeviceMiniUPNP::_validate_propertyv(PropertyInfo&) const */void UPNPDeviceMiniUPNP::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* UPNPDeviceMiniUPNP::_property_can_revertv(StringName const&) const */undefined8 UPNPDeviceMiniUPNP::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* UPNPDeviceMiniUPNP::_property_get_revertv(StringName const&, Variant&) const */undefined8 UPNPDeviceMiniUPNP::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* UPNPDeviceMiniUPNP::_notificationv(int, bool) */void UPNPDeviceMiniUPNP::_notificationv(int param_1, bool param_2) {
   return;
}
/* UPNPDeviceMiniUPNP::_create(bool) */RefCounted *UPNPDeviceMiniUPNP::_create(bool param_1) {
   RefCounted *this;
   this(RefCounted * operator_new(0x1b0, ""));
   RefCounted::RefCounted(this);
   *(undefined***)this = &PTR__initialize_classv_00103520;
   *(undefined8*)( this + 0x1a0 ) = 0;
   *(undefined4*)( this + 0x1a8 ) = 9;
   *(undefined1(*) [16])( this + 0x180 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 400 ) = (undefined1[16])0x0;
   Object::_initialize();
   if (!param_1) {
      return this;
   }

   Object::_postinitialize();
   return this;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_001033c0;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_001033c0;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* UPNPDeviceMiniUPNP::_get_class_namev() const */undefined8 *UPNPDeviceMiniUPNP::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00101143:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101143;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "UPNPDeviceMiniUPNP");
         goto LAB_001011ae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "UPNPDeviceMiniUPNP");
   LAB_001011ae:return &_get_class_namev();
}
/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00101223:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101223;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010128e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010128e:return &_get_class_namev();
}
/* UPNPDeviceMiniUPNP::get_class() const */void UPNPDeviceMiniUPNP::get_class(void) {
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
/* RefCounted::get_class() const */void RefCounted::get_class(void) {
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
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0010194f;
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

      LAB_0010194f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00101a03;
   }

   cVar6 = String::operator ==(param_1, "RefCounted");
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
                     if (lVar5 == 0) goto LAB_00101ab3;
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

         LAB_00101ab3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00101a03;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00101a03:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* UPNPDeviceMiniUPNP::is_class(String const&) const */undefined8 UPNPDeviceMiniUPNP::is_class(UPNPDeviceMiniUPNP *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_00101bdf;
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

      LAB_00101bdf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00101c93;
   }

   cVar6 = String::operator ==(param_1, "UPNPDeviceMiniUPNP");
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
                     if (lVar5 == 0) goto LAB_00101d53;
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

         LAB_00101d53:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00101c93;
      }

      cVar6 = String::operator ==(param_1, "UPNPDevice");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar7;
         }

         goto LAB_00101dfc;
      }

   }

   LAB_00101c93:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00101dfc:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* UPNPDeviceMiniUPNP::~UPNPDeviceMiniUPNP() */void UPNPDeviceMiniUPNP::~UPNPDeviceMiniUPNP(UPNPDeviceMiniUPNP *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_00103520;
   for (int i = 0; i < 5; i++) {
      if (*(long*)( this + ( -8*i + 416 ) ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + ( -8*i + 416 ) ) + -16 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + ( -8*i + 416 ) );
            *(undefined8*)( this + ( -8*i + 416 ) ) = 0;
            Memory::free_static((void*)( lVar2 + -16 ), false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_001033c0;
   Object::~Object((Object*)this);
   return;
}
/* UPNPDeviceMiniUPNP::~UPNPDeviceMiniUPNP() */void UPNPDeviceMiniUPNP::~UPNPDeviceMiniUPNP(UPNPDeviceMiniUPNP *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_00103520;
   for (int i = 0; i < 5; i++) {
      if (*(long*)( this + ( -8*i + 416 ) ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + ( -8*i + 416 ) ) + -16 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + ( -8*i + 416 ) );
            *(undefined8*)( this + ( -8*i + 416 ) ) = 0;
            Memory::free_static((void*)( lVar2 + -16 ), false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_001033c0;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1b0);
   return;
}
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
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
      local_38 = "RefCounted";
      local_50 = 0;
      local_30 = 10;
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
         }

      }

      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
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
   local_78 = "RefCounted";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "RefCounted";
   local_98 = 0;
   local_70 = 10;
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
      LAB_001023e8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001023e8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00102406;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00102406:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "RefCounted", false);
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
/* UPNPDeviceMiniUPNP::_initialize_classv() */void UPNPDeviceMiniUPNP::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (UPNPDevice::initialize_class() == '\0') {
         if (RefCounted::initialize_class() == '\0') {
            Object::initialize_class();
            local_68 = 0;
            local_50 = 6;
            local_58 = "Object";
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "RefCounted";
            local_70 = 0;
            local_50 = 10;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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

            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            lVar2 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            if ((code*)PTR__bind_methods_00105010 != RefCounted::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "RefCounted";
         local_68 = 0;
         local_50 = 10;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "UPNPDevice";
         local_70 = 0;
         local_50 = 10;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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

         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         lVar2 = local_68;
         if (local_68 != 0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if ((code*)PTR__bind_methods_00105008 != RefCounted::_bind_methods) {
            UPNPDevice::_bind_methods();
         }

         UPNPDevice::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "UPNPDevice";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "UPNPDeviceMiniUPNP";
      local_70 = 0;
      local_50 = 0x12;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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

      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* UPNPDevice::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void UPNPDevice::_get_property_listv(UPNPDevice *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "UPNPDevice";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "UPNPDevice";
   local_98 = 0;
   local_70 = 10;
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
      LAB_00102c08:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00102c08;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00102c25;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00102c25:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
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
   plVar1 = *(long**)param_1;
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

   StringName::StringName((StringName*)&local_78, "UPNPDevice", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* UPNPDeviceMiniUPNP::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void UPNPDeviceMiniUPNP::_get_property_listv(UPNPDeviceMiniUPNP *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      UPNPDevice::_get_property_listv((UPNPDevice*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "UPNPDeviceMiniUPNP";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "UPNPDeviceMiniUPNP";
   local_98 = 0;
   local_70 = 0x12;
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
      LAB_00103058:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00103058;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00103075;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00103075:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
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
   plVar1 = *(long**)param_1;
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

   StringName::StringName((StringName*)&local_78, "UPNPDeviceMiniUPNP", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         UPNPDevice::_get_property_listv((UPNPDevice*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* UPNPDeviceMiniUPNP::~UPNPDeviceMiniUPNP() */void UPNPDeviceMiniUPNP::~UPNPDeviceMiniUPNP(UPNPDeviceMiniUPNP *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

