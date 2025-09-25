/* UPNPMiniUPNP::get_device_count() const */undefined4 UPNPMiniUPNP::get_device_count(UPNPMiniUPNP *this) {
   if (*(long*)( this + 0x198 ) != 0) {
      return *(undefined4*)( *(long*)( this + 0x198 ) + -8 );
   }

   return 0;
}
/* UPNPMiniUPNP::set_discover_local_port(int) */void UPNPMiniUPNP::set_discover_local_port(UPNPMiniUPNP *this, int param_1) {
   *(int*)( this + 0x188 ) = param_1;
   return;
}
/* UPNPMiniUPNP::get_discover_local_port() const */undefined4 UPNPMiniUPNP::get_discover_local_port(UPNPMiniUPNP *this) {
   return *(undefined4*)( this + 0x188 );
}
/* UPNPMiniUPNP::set_discover_ipv6(bool) */void UPNPMiniUPNP::set_discover_ipv6(UPNPMiniUPNP *this, bool param_1) {
   this[0x18c] = (UPNPMiniUPNP)param_1;
   return;
}
/* UPNPMiniUPNP::is_discover_ipv6() const */UPNPMiniUPNP UPNPMiniUPNP::is_discover_ipv6(UPNPMiniUPNP *this) {
   return this[0x18c];
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
/* UPNPMiniUPNP::set_discover_multicast_if(String const&) */void UPNPMiniUPNP::set_discover_multicast_if(UPNPMiniUPNP *this, String *param_1) {
   if (*(long*)( this + 0x180 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x180 ), (CowData*)param_1);
      return;
   }

   return;
}
/* UPNPMiniUPNP::get_discover_multicast_if() const */void UPNPMiniUPNP::get_discover_multicast_if(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x180 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x180 ));
   }

   return;
}
/* UPNPMiniUPNP::make_default() */void UPNPMiniUPNP::make_default(void) {
   UPNP::_create = _create;
   return;
}
/* UPNPMiniUPNP::is_common_device(String const&) const */bool UPNPMiniUPNP::is_common_device(UPNPMiniUPNP *this, String *param_1) {
   int iVar1;
   if (( *(long*)param_1 != 0 ) && ( 1 < *(uint*)( *(long*)param_1 + -8 ) )) {
      iVar1 = String::find((char*)param_1, 0x103f3a);
      if (iVar1 == -1) {
         iVar1 = String::find((char*)param_1, 0x103f50);
         if (iVar1 == -1) {
            iVar1 = String::find((char*)param_1, 0x103f60);
            if (iVar1 == -1) {
               iVar1 = String::find((char*)param_1, 0x103f71);
               return iVar1 != -1;
            }

         }

      }

      return true;
   }

   return true;
}
/* UPNPMiniUPNP::load_description(String const&, int*, int*) const */undefined8 UPNPMiniUPNP::load_description(UPNPMiniUPNP *this, String *param_1, int *param_2, int *param_3) {
   long *plVar1;
   long lVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_28;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   String::utf8();
   uVar3 = CharString::get_data();
   uVar3 = miniwget(uVar3, param_2, 0, param_3);
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_28 + -0x10 ), false);
      }

   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* UPNPMiniUPNP::parse_igd(Ref<UPNPDevice>, UPNPDev*) */void UPNPMiniUPNP::parse_igd(undefined8 param_1, undefined8 *param_2, undefined8 param_3) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   undefined1 auVar4[16];
   char *pcVar5;
   int iVar6;
   undefined8 uVar7;
   void *__ptr;
   long in_FS_OFFSET;
   int local_c38;
   int local_c34;
   long local_c30;
   char *local_c28;
   size_t local_c20;
   undefined1 local_c18[16];
   undefined1 local_c08[16];
   undefined8 local_bf8;
   undefined1 local_be8[1284];
   char local_6e4[1676];
   char local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c38 = 0;
   local_c34 = -1;
   ( **(code**)( *(long*)*param_2 + 0x158 ) )(&local_c28);
   String::utf8();
   uVar7 = CharString::get_data();
   __ptr = (void*)miniwget(uVar7, &local_c38, 0, &local_c34);
   uVar7 = local_c18._0_8_;
   if (local_c18._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_c18._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_c18._8_8_;
         local_c18 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar7 + -0x10 ), false);
      }

   }

   pcVar5 = local_c28;
   if (local_c28 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_c28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c28 = (char*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
      }

   }

   if (local_c34 == 200) {
      if (( __ptr == (void*)0x0 ) || ( local_c38 < 1 )) {
         ( **(code**)( *(long*)*param_2 + 0x1a0 ) )((long*)*param_2, 2);
      }
 else {
         local_bf8 = 0;
         local_c18 = (undefined1[16])0x0;
         local_c08 = (undefined1[16])0x0;
         parserootdesc(__ptr, local_c38, local_be8);
         free(__ptr);
         ( **(code**)( *(long*)*param_2 + 0x158 ) )((StrRange*)&local_c30);
         String::utf8();
         uVar7 = CharString::get_data();
         GetUPNPUrls(local_c18, local_be8, uVar7, 0);
         pcVar5 = local_c28;
         if (local_c28 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_c28 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_c28 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar3 = local_c30;
         if (local_c30 != 0) {
            LOCK();
            plVar1 = (long*)( local_c30 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_c30 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         iVar6 = UPNP_GetValidIGD(param_3, local_c18, local_be8, local_58, 0x10, 0, 0);
         if (iVar6 == 1) {
            uVar7 = local_c18._0_8_;
            if (*(char*)local_c18._0_8_ == '\0') {
               FreeUPNPUrls(local_c18);
               ( **(code**)( *(long*)*param_2 + 0x1a0 ) )((long*)*param_2, 7);
            }
 else {
               plVar1 = (long*)*param_2;
               pcVar2 = *(code**)( *plVar1 + 0x170 );
               local_c30 = 0;
               local_c20 = strlen((char*)local_c18._0_8_);
               local_c28 = (char*)uVar7;
               String::parse_latin1((StrRange*)&local_c30);
               ( *pcVar2 )(plVar1);
               lVar3 = local_c30;
               if (local_c30 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_c30 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_c30 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               plVar1 = (long*)*param_2;
               pcVar2 = *(code**)( *plVar1 + 0x180 );
               local_c30 = 0;
               local_c20 = strlen(local_6e4);
               local_c28 = local_6e4;
               String::parse_latin1((StrRange*)&local_c30);
               ( *pcVar2 )(plVar1);
               lVar3 = local_c30;
               if (local_c30 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_c30 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_c30 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               plVar1 = (long*)*param_2;
               pcVar2 = *(code**)( *plVar1 + 400 );
               local_c30 = 0;
               local_c20 = strlen(local_58);
               local_c28 = local_58;
               String::parse_latin1((StrRange*)&local_c30);
               ( *pcVar2 )(plVar1);
               lVar3 = local_c30;
               if (local_c30 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_c30 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_c30 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               ( **(code**)( *(long*)*param_2 + 0x1a0 ) )((long*)*param_2, 0);
               FreeUPNPUrls(local_c18);
            }

         }
 else {
            FreeUPNPUrls(local_c18);
            plVar1 = (long*)*param_2;
            lVar3 = *plVar1;
            if (iVar6 == 2) {
               ( **(code**)( lVar3 + 0x1a0 ) )(plVar1, 5);
            }
 else if (iVar6 == 3) {
               ( **(code**)( lVar3 + 0x1a0 ) )(plVar1, 6);
            }
 else if (iVar6 == 0) {
               ( **(code**)( lVar3 + 0x1a0 ) )(plVar1, 4);
            }
 else {
               ( **(code**)( lVar3 + 0x1a0 ) )(plVar1, 9);
            }

         }

      }

   }
 else {
      ( **(code**)( *(long*)*param_2 + 0x1a0 ) )((long*)*param_2, 1);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* UPNPMiniUPNP::upnp_result(int) */int UPNPMiniUPNP::upnp_result(int param_1) {
   int iVar1;
   if (param_1 < 0x2de) {
      if (param_1 < 0x2ca) {
         if (0 < param_1) {
            iVar1 = 5;
            if (param_1 != 0x1f5) {
               if (0x1f5 < param_1) {
                  iVar1 = 0x1c;
                  if (param_1 == 0x25e) {
                     iVar1 = 1;
                  }

                  return iVar1;
               }

               iVar1 = 0x14;
               if (param_1 != 0x192) {
                  iVar1 = 0x1c;
                  if (param_1 == 0x193) {
                     iVar1 = 1;
                  }

                  return iVar1;
               }

            }

            return iVar1;
         }

         if (-6 < param_1) {
            switch (param_1) {
               case 0:
          return param_1;
               case -5:
          return 0x19;
               case -4:
          return 0x15;
               case -3:
          return 0x17;
               case -2:
          return 0x14;
            }

         }

      }
 else {
         switch (param_1) {
            case 0x2ca:
        return 4;
            case 0x2cb:
        return 6;
            case 0x2cc:
        return 7;
            case 0x2ce:
        return 0xd;
            case 0x2d4:
        return 0xe;
            case 0x2d5:
        return 0xf;
            case 0x2d6:
        return 9;
            case 0x2d7:
        return 10;
            case 0x2d8:
        return 0xb;
            case 0x2d9:
        return 0xc;
            case 0x2dc:
        return 8;
            case 0x2dd:
        return 3;
         }

      }

   }

   return 0x1c;
}
/* UPNPMiniUPNP::clear_devices() */void UPNPMiniUPNP::clear_devices(UPNPMiniUPNP *this) {
   if (( *(long*)( this + 0x198 ) != 0 ) && ( *(long*)( *(long*)( this + 0x198 ) + -8 ) != 0 )) {
      CowData<Ref<UPNPDevice>>::_unref((CowData<Ref<UPNPDevice>>*)( this + 0x198 ));
      return;
   }

   return;
}
/* UPNPMiniUPNP::query_external_address() const */void UPNPMiniUPNP::query_external_address(void) {
   char cVar1;
   long *in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   UPNPDevice *local_30;
   undefined *local_28;
   undefined8 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x180 ) )(&local_30);
   if (local_30 == (UPNPDevice*)0x0) {
      *(undefined8*)in_RDI = 0;
      local_28 = &_LC2;
      local_20 = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      ( **(code**)( *(long*)local_30 + 0x1b8 ) )();
   }

   if (local_30 != (UPNPDevice*)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         memdelete<UPNPDevice>(local_30);
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* UPNPMiniUPNP::delete_port_mapping(int, String) const */undefined4 UPNPMiniUPNP::delete_port_mapping(UPNPMiniUPNP *this, undefined4 param_1, long *param_3) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   char cVar4;
   undefined4 uVar5;
   long lVar6;
   long in_FS_OFFSET;
   bool bVar7;
   UPNPDevice *local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)this + 0x180 ) )(&local_30, this);
   if (local_30 == (UPNPDevice*)0x0) {
      uVar5 = 0x1a;
   }
 else {
      local_28 = 0;
      pcVar2 = *(code**)( *(long*)local_30 + 0x1c8 );
      plVar1 = (long*)( *param_3 + -0x10 );
      if (*param_3 != 0) {
         do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00100a71;
            LOCK();
            lVar6 = *plVar1;
            bVar7 = lVar3 == lVar6;
            if (bVar7) {
               *plVar1 = lVar3 + 1;
               lVar6 = lVar3;
            }

            UNLOCK();
         }
 while ( !bVar7 );
         if (lVar6 != -1) {
            local_28 = *param_3;
         }

      }

      LAB_00100a71:uVar5 = ( *pcVar2 )(local_30, param_1, &local_28);
      lVar3 = local_28;
      if (local_28 != 0) {
         LOCK();
         plVar1 = (long*)( local_28 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_28 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (( local_30 != (UPNPDevice*)0x0 ) && ( cVar4 = cVar4 != '\0' )) {
         memdelete<UPNPDevice>(local_30);
      }

   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
/* UPNPMiniUPNP::add_port_mapping(int, int, String, String, int) const */undefined4 UPNPMiniUPNP::add_port_mapping(UPNPMiniUPNP *this, undefined4 param_1, undefined4 param_2, long *param_4, long *param_5, undefined4 param_6) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   char cVar4;
   undefined4 uVar5;
   long lVar6;
   long in_FS_OFFSET;
   bool bVar7;
   UPNPDevice *local_48;
   long local_40;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)this + 0x180 ) )(&local_48, this);
   if (local_48 == (UPNPDevice*)0x0) {
      uVar5 = 0x1a;
   }
 else {
      local_38 = 0;
      pcVar2 = *(code**)( *(long*)local_48 + 0x1c0 );
      plVar1 = (long*)( *param_5 + -0x10 );
      if (*param_5 != 0) {
         do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00100b90;
            LOCK();
            lVar6 = *plVar1;
            bVar7 = lVar3 == lVar6;
            if (bVar7) {
               *plVar1 = lVar3 + 1;
               lVar6 = lVar3;
            }

            UNLOCK();
         }
 while ( !bVar7 );
         if (lVar6 != -1) {
            local_38 = *param_5;
         }

      }

      LAB_00100b90:local_40 = 0;
      plVar1 = (long*)( *param_4 + -0x10 );
      if (*param_4 != 0) {
         do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00100bc6;
            LOCK();
            lVar6 = *plVar1;
            bVar7 = lVar3 == lVar6;
            if (bVar7) {
               *plVar1 = lVar3 + 1;
               lVar6 = lVar3;
            }

            UNLOCK();
         }
 while ( !bVar7 );
         if (lVar6 != -1) {
            local_40 = *param_4;
         }

      }

      LAB_00100bc6:uVar5 = ( *pcVar2 )(local_48, param_1, param_2, &local_40, &local_38, param_6);
      lVar3 = local_40;
      if (local_40 != 0) {
         LOCK();
         plVar1 = (long*)( local_40 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_40 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      lVar3 = local_38;
      if (local_38 != 0) {
         LOCK();
         plVar1 = (long*)( local_38 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (( local_48 != (UPNPDevice*)0x0 ) && ( cVar4 = cVar4 != '\0' )) {
         memdelete<UPNPDevice>(local_48);
      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
/* CowData<Ref<UPNPDevice> >::_copy_on_write() [clone .isra.0] */void CowData<Ref<UPNPDevice>>::_copy_on_write(CowData<Ref<UPNPDevice>> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   undefined8 *puVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar1 * 8 != 0) {
      uVar7 = lVar1 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar8 = 0;
   *puVar5 = 1;
   puVar5[1] = lVar1;
   plVar6 = puVar5 + 2;
   if (lVar1 != 0) {
      do {
         lVar2 = *(long*)this;
         *plVar6 = 0;
         lVar2 = *(long*)( lVar2 + lVar8 * 8 );
         if (lVar2 != 0) {
            *plVar6 = lVar2;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               *plVar6 = 0;
            }

         }

         lVar8 = lVar8 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar1 != lVar8 );
   }

   _unref(this);
   *(undefined8**)this = puVar5 + 2;
   return;
}
/* UPNPMiniUPNP::set_device(int, Ref<UPNPDevice>) */void UPNPMiniUPNP::set_device(UPNPMiniUPNP *this, int param_1, long *param_3) {
   long *plVar1;
   UPNPDevice *pUVar2;
   UPNPDevice *pUVar3;
   char cVar4;
   long lVar5;
   long lVar6;
   lVar6 = (long)param_1;
   lVar5 = *(long*)( this + 0x198 );
   if (param_1 < 0) {
      if (lVar5 != 0) {
         lVar5 = *(long*)( lVar5 + -8 );
         goto LAB_00100e79;
      }

   }
 else if (lVar5 != 0) {
      lVar5 = *(long*)( lVar5 + -8 );
      if (lVar6 < lVar5) {
         if (*param_3 == 0) {
            _err_print_error("set_device", "modules/upnp/upnp_miniupnp.cpp", 0xfb, "Condition \"device.is_null()\" is true.", 0, 0);
            return;
         }

         CowData<Ref<UPNPDevice>>::_copy_on_write((CowData<Ref<UPNPDevice>>*)( this + 0x198 ));
         pUVar2 = (UPNPDevice*)*param_3;
         plVar1 = (long*)( *(long*)( this + 0x198 ) + lVar6 * 8 );
         pUVar3 = (UPNPDevice*)*plVar1;
         if (pUVar2 != pUVar3) {
            *plVar1 = (long)pUVar2;
            if (pUVar2 != (UPNPDevice*)0x0) {
               cVar4 = RefCounted::reference();
               if (cVar4 == '\0') {
                  *plVar1 = 0;
               }

            }

            if (pUVar3 != (UPNPDevice*)0x0) {
               cVar4 = RefCounted::unreference();
               if (cVar4 != '\0') {
                  memdelete<UPNPDevice>(pUVar3);
                  return;
               }

            }

         }

         return;
      }

      goto LAB_00100e79;
   }

   lVar5 = 0;
   LAB_00100e79:_err_print_index_error("set_device", "modules/upnp/upnp_miniupnp.cpp", 0xfa, lVar6, lVar5, "index", "devices.size()", "", false, false);
   return;
}
/* UPNPMiniUPNP::get_gateway() const */void UPNPMiniUPNP::get_gateway(void) {
   long *plVar1;
   Object *this;
   char cVar2;
   long lVar3;
   long lVar4;
   long *in_RSI;
   undefined8 *in_RDI;
   long in_FS_OFFSET;
   Object *local_38;
   long local_30;
   lVar4 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = in_RSI[0x33];
   if (lVar3 == 0) {
      _err_print_error("get_gateway", "modules/upnp/upnp_miniupnp.cpp", 0x10b, "Condition \"devices.is_empty()\" is true. Returning: nullptr", "Couldn\'t find any UPNPDevices.", 0, 0);
      *in_RDI = 0;
   }
 else {
      LAB_00100f54:do {
         if (*(long*)( lVar3 + -8 ) <= lVar4) break;
         ( **(code**)( *in_RSI + 0x158 ) )(&local_38);
         if (local_38 != (Object*)0x0) {
            cVar2 = ( **(code**)( *(long*)local_38 + 0x1b0 ) )();
            if (cVar2 != '\0') {
               *in_RDI = 0;
               if (local_38 != (Object*)0x0) {
                  *in_RDI = local_38;
                  cVar2 = RefCounted::reference();
                  if (cVar2 == '\0') {
                     *in_RDI = 0;
                  }

                  if (local_38 != (Object*)0x0) {
                     cVar2 = RefCounted::unreference();
                     if (cVar2 != '\0') {
                        memdelete<UPNPDevice>((UPNPDevice*)local_38);
                     }

                  }

               }

               goto LAB_00101078;
            }

            if (local_38 != (Object*)0x0) {
               cVar2 = RefCounted::unreference();
               this =
               local_38;
               if (cVar2 != '\0') {
                  cVar2 = predelete_handler(local_38);
                  if (cVar2 != '\0') {
                     if (*(code**)( *(long*)this + 0x140 ) == UPNPDeviceMiniUPNP::~UPNPDeviceMiniUPNP) {
                        *(code**)this = StringName::StringName;
                        for (int i = 0; i < 5; i++) {
                           if (*(long*)( this + ( -8*i + 416 ) ) != 0) {
                              LOCK();
                              plVar1 = (long*)( *(long*)( this + ( -8*i + 416 ) ) + -16 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 lVar3 = *(long*)( this + ( -8*i + 416 ) );
                                 *(undefined8*)( this + ( -8*i + 416 ) ) = 0;
                                 Memory::free_static((void*)( lVar3 + -16 ), false);
                              }

                           }

                        }

                        *(undefined***)this = &PTR__initialize_classv_00104d00;
                        Object::~Object(this);
                     }
 else {
                        ( **(code**)( *(long*)this + 0x140 ) )(this);
                     }

                     lVar4 = lVar4 + 1;
                     Memory::free_static(this, false);
                     lVar3 = in_RSI[0x33];
                     if (lVar3 == 0) break;
                     goto LAB_00100f54;
                  }

               }

            }

         }

         lVar3 = in_RSI[0x33];
         lVar4 = lVar4 + 1;
      }
 while ( lVar3 != 0 );
      *in_RDI = 0;
   }

   LAB_00101078:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* UPNPMiniUPNP::get_device(int) const */long *UPNPMiniUPNP::get_device(int param_1) {
   long lVar1;
   char cVar2;
   long lVar3;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   long *plVar4;
   long lVar5;
   plVar4 = (long*)CONCAT44(in_register_0000003c, param_1);
   lVar3 = (long)in_EDX;
   lVar1 = *(long*)( in_RSI + 0x198 );
   if (in_EDX < 0) {
      if (lVar1 != 0) {
         lVar5 = *(long*)( lVar1 + -8 );
         goto LAB_00101279;
      }

   }
 else if (lVar1 != 0) {
      lVar5 = *(long*)( lVar1 + -8 );
      if (lVar3 < lVar5) {
         *plVar4 = 0;
         lVar1 = *(long*)( lVar1 + lVar3 * 8 );
         if (lVar1 != 0) {
            *plVar4 = lVar1;
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
               *plVar4 = 0;
            }

         }

         return plVar4;
      }

      goto LAB_00101279;
   }

   lVar5 = 0;
   LAB_00101279:_err_print_index_error("get_device", "modules/upnp/upnp_miniupnp.cpp", 0xee, lVar3, lVar5, "index", "devices.size()", "", false, false);
   *plVar4 = 0;
   return plVar4;
}
/* UPNPMiniUPNP::remove_device(int) */void UPNPMiniUPNP::remove_device(UPNPMiniUPNP *this, int param_1) {
   UPNPDevice *pUVar1;
   UPNPDevice *pUVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   lVar4 = (long)param_1;
   lVar5 = *(long*)( this + 0x198 );
   if (param_1 < 0) {
      if (lVar5 != 0) {
         lVar5 = *(long*)( lVar5 + -8 );
         goto LAB_001013b1;
      }

   }
 else if (lVar5 != 0) {
      lVar5 = *(long*)( lVar5 + -8 );
      if (lVar4 < lVar5) {
         CowData<Ref<UPNPDevice>>::_copy_on_write((CowData<Ref<UPNPDevice>>*)( this + 0x198 ));
         lVar5 = *(long*)( this + 0x198 );
         if (lVar5 == 0) {
            lVar6 = -1;
         }
 else {
            lVar6 = *(long*)( lVar5 + -8 ) + -1;
            if (lVar4 < lVar6) {
               do {
                  while (true) {
                     pUVar1 = *(UPNPDevice**)( lVar5 + 8 + lVar4 * 8 );
                     pUVar2 = *(UPNPDevice**)( lVar5 + lVar4 * 8 );
                     if (pUVar1 != pUVar2) break;
                     LAB_00101338:lVar4 = lVar4 + 1;
                     if (lVar4 == lVar6) goto LAB_0010138e;
                  }
;
                  *(UPNPDevice**)( lVar5 + lVar4 * 8 ) = pUVar1;
                  if (( pUVar1 != (UPNPDevice*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
                     *(undefined8*)( lVar5 + lVar4 * 8 ) = 0;
                  }

                  if (( pUVar2 == (UPNPDevice*)0x0 ) || ( cVar3 = cVar3 == '\0' )) goto LAB_00101338;
                  lVar4 = lVar4 + 1;
                  memdelete<UPNPDevice>(pUVar2);
               }
 while ( lVar4 != lVar6 );
            }

         }

         LAB_0010138e:CowData<Ref<UPNPDevice>>::resize<false>((CowData<Ref<UPNPDevice>>*)( this + 0x198 ), lVar6);
         return;
      }

      goto LAB_001013b1;
   }

   lVar5 = 0;
   LAB_001013b1:_err_print_index_error("remove_device", "modules/upnp/upnp_miniupnp.cpp", 0x101, lVar4, lVar5, "index", "devices.size()", "", false, false);
   return;
}
/* Vector<Ref<UPNPDevice> >::push_back(Ref<UPNPDevice>) [clone .isra.0] */void Vector<Ref<UPNPDevice>>::push_back(Vector<Ref<UPNPDevice>> *this, long *param_2) {
   long *plVar1;
   UPNPDevice *pUVar2;
   UPNPDevice *pUVar3;
   char cVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   if (*(long*)( this + 8 ) == 0) {
      lVar6 = 1;
   }
 else {
      lVar6 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar5 = CowData<Ref<UPNPDevice>>::resize<false>((CowData<Ref<UPNPDevice>>*)( this + 8 ), lVar6);
   if (iVar5 != 0) {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      return;
   }

   if (*(long*)( this + 8 ) == 0) {
      lVar7 = -1;
      lVar6 = 0;
   }
 else {
      lVar6 = *(long*)( *(long*)( this + 8 ) + -8 );
      lVar7 = lVar6 + -1;
      if (-1 < lVar7) {
         CowData<Ref<UPNPDevice>>::_copy_on_write((CowData<Ref<UPNPDevice>>*)( this + 8 ));
         pUVar2 = (UPNPDevice*)*param_2;
         plVar1 = (long*)( *(long*)( this + 8 ) + lVar7 * 8 );
         pUVar3 = (UPNPDevice*)*plVar1;
         if (pUVar2 == pUVar3) {
            return;
         }

         *plVar1 = (long)pUVar2;
         if (( pUVar2 != (UPNPDevice*)0x0 ) && ( cVar4 = cVar4 == '\0' )) {
            *plVar1 = 0;
         }

         if (pUVar3 == (UPNPDevice*)0x0) {
            return;
         }

         cVar4 = RefCounted::unreference();
         if (cVar4 == '\0') {
            return;
         }

         memdelete<UPNPDevice>(pUVar3);
         return;
      }

   }

   _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar6, "p_index", "size()", "", false, false);
   return;
}
/* UPNPMiniUPNP::add_device(Ref<UPNPDevice>) */void UPNPMiniUPNP::add_device(UPNPMiniUPNP *this, undefined8 *param_2) {
   UPNPDevice *pUVar1;
   char cVar2;
   long in_FS_OFFSET;
   UPNPDevice *local_28;
   long local_20;
   pUVar1 = (UPNPDevice*)*param_2;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pUVar1 == (UPNPDevice*)0x0) {
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("add_device", "modules/upnp/upnp_miniupnp.cpp", 0xf4, "Condition \"device.is_null()\" is true.", 0, 0);
         return;
      }

   }
 else {
      local_28 = pUVar1;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         local_28 = (UPNPDevice*)0x0;
         Vector<Ref<UPNPDevice>>::push_back((Vector<Ref<UPNPDevice>>*)( this + 400 ), &local_28);
      }
 else {
         Vector<Ref<UPNPDevice>>::push_back((Vector<Ref<UPNPDevice>>*)( this + 400 ), &local_28);
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               memdelete<UPNPDevice>(pUVar1);
               return;
            }

            goto LAB_0010164b;
         }

      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   LAB_0010164b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* UPNPMiniUPNP::add_device_to_list(UPNPDev*, UPNPDev*) */void UPNPMiniUPNP::add_device_to_list(UPNPMiniUPNP *this, UPNPDev *param_1, UPNPDev *param_2) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   char cVar4;
   RefCounted *this_00;
   size_t sVar5;
   UPNPDevice *pUVar6;
   UPNPDevice *pUVar7;
   UPNPDeviceMiniUPNP *pUVar8;
   Vector<Ref<UPNPDevice>> *pVVar9;
   long in_FS_OFFSET;
   long local_60;
   UPNPDevice *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (RefCounted*)operator_new(0x1b0, "");
   RefCounted::RefCounted(this_00);
   *(code**)this_00 = StringName::StringName;
   *(undefined8*)( this_00 + 0x1a0 ) = 0;
   *(undefined4*)( this_00 + 0x1a8 ) = 9;
   *(undefined1(*) [16])( this_00 + 0x180 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 400 ) = (undefined1[16])0x0;
   postinitialize_handler((Object*)this_00);
   cVar4 = RefCounted::init_ref();
   if (cVar4 == '\0') {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   cVar4 = RefCounted::reference();
   pUVar8 = (UPNPDeviceMiniUPNP*)0x0;
   if (cVar4 != '\0') {
      pUVar8 = (UPNPDeviceMiniUPNP*)this_00;
   }

   cVar4 = RefCounted::unreference();
   if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler((Object*)this_00) ),cVar4 != '\0') {
      if (*(code**)( *(long*)this_00 + 0x140 ) == UPNPDeviceMiniUPNP::~UPNPDeviceMiniUPNP) {
         *(code**)this_00 = StringName::StringName;
         for (int i = 0; i < 5; i++) {
            if (*(long*)( this_00 + ( -8*i + 416 ) ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( this_00 + ( -8*i + 416 ) ) + -16 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( this_00 + ( -8*i + 416 ) );
                  *(undefined8*)( this_00 + ( -8*i + 416 ) ) = 0;
                  Memory::free_static((void*)( lVar3 + -16 ), false);
               }

            }

         }

         *(undefined***)this_00 = &PTR__initialize_classv_00104d00;
         Object::~Object((Object*)this_00);
      }
 else {
         ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
      }

      Memory::free_static(this_00, false);
   }

   pUVar6 = *(UPNPDevice**)( param_1 + 8 );
   pcVar2 = *(code**)( *(long*)pUVar8 + 0x150 );
   local_50 = 0;
   local_60 = 0;
   if (pUVar6 != (UPNPDevice*)0x0) {
      local_50 = strlen((char*)pUVar6);
   }

   local_58 = pUVar6;
   String::parse_latin1((StrRange*)&local_60);
   ( *pcVar2 )(pUVar8);
   lVar3 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   pUVar6 = *(UPNPDevice**)( param_1 + 0x10 );
   pcVar2 = *(code**)( *(long*)pUVar8 + 0x160 );
   sVar5 = 0;
   local_60 = 0;
   if (pUVar6 != (UPNPDevice*)0x0) {
      sVar5 = strlen((char*)pUVar6);
   }

   local_58 = pUVar6;
   local_50 = sVar5;
   String::parse_latin1((StrRange*)&local_60);
   ( *pcVar2 )(pUVar8);
   lVar3 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   local_58 = (UPNPDevice*)0x0;
   pUVar6 = (UPNPDevice*)__dynamic_cast(pUVar8, &Object::typeinfo, &UPNPDevice::typeinfo, 0);
   pUVar7 = local_58;
   if (pUVar6 == (UPNPDevice*)0x0) {
      parse_igd(this, &local_58, param_2);
      if (pUVar7 != (UPNPDevice*)0x0) {
         cVar4 = RefCounted::unreference();
         pUVar6 = pUVar7;
         goto joined_r0x001019b5;
      }

   }
 else {
      local_58 = pUVar6;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
         local_58 = (UPNPDevice*)0x0;
         parse_igd(this, &local_58, param_2);
      }
 else {
         parse_igd(this, &local_58, param_2);
         cVar4 = RefCounted::unreference();
         joined_r0x001019b5:if (cVar4 != '\0') {
            memdelete<UPNPDevice>(pUVar6);
         }

      }

   }

   local_58 = (UPNPDevice*)0x0;
   pVVar9 = (Vector<Ref<UPNPDevice>>*)( this + 400 );
   pUVar7 = (UPNPDevice*)__dynamic_cast(pUVar8, &Object::typeinfo, &UPNPDevice::typeinfo, 0);
   pUVar6 = local_58;
   if (pUVar7 == (UPNPDevice*)0x0) {
      Vector<Ref<UPNPDevice>>::push_back(pVVar9, &local_58);
      if (pUVar6 != (UPNPDevice*)0x0) goto LAB_0010193b;
   }
 else {
      local_58 = pUVar7;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
         local_58 = (UPNPDevice*)0x0;
         Vector<Ref<UPNPDevice>>::push_back(pVVar9, &local_58);
      }
 else {
         Vector<Ref<UPNPDevice>>::push_back(pVVar9, &local_58);
         pUVar6 = pUVar7;
         LAB_0010193b:cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            memdelete<UPNPDevice>(pUVar6);
            cVar4 = RefCounted::unreference();
            goto joined_r0x0010195d;
         }

      }

   }

   cVar4 = RefCounted::unreference();
   joined_r0x0010195d:if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      memdelete<UPNPDeviceMiniUPNP>(pUVar8);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* UPNPMiniUPNP::discover(int, int, String const&) */int UPNPMiniUPNP::discover(UPNPMiniUPNP *this, int param_1, int param_2, String *param_3) {
   long *plVar1;
   char cVar2;
   UPNPDev *pUVar3;
   char *pcVar4;
   long lVar5;
   undefined8 uVar6;
   UPNPDev *pUVar7;
   char *pcVar8;
   int iVar9;
   long in_FS_OFFSET;
   int local_54;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 < 0) {
      pcVar8 = "The response\'s wait time can\'t be negative.";
      uVar6 = 0x37;
      pcVar4 = "Condition \"timeout < 0\" is true. Returning: UPNP_RESULT_INVALID_PARAM";
   }
 else {
      if ((uint)param_2 < 0x100) {
         if (( *(long*)( this + 0x198 ) != 0 ) && ( *(long*)( *(long*)( this + 0x198 ) + -8 ) != 0 )) {
            CowData<Ref<UPNPDevice>>::_unref((CowData<Ref<UPNPDevice>>*)( this + 0x198 ));
         }

         local_54 = 0;
         String::utf8();
         lVar5 = local_50;
         if (( local_50 != 0 ) && ( lVar5 = 0 ),1 < ( uint ) * (undefined8*)( local_50 + -8 )) {
            lVar5 = CharString::get_data();
         }

         cVar2 = is_common_device(this, param_3);
         if (cVar2 == '\0') {
            pUVar3 = (UPNPDev*)upnpDiscoverAll(param_1, lVar5, 0, *(undefined4*)( this + 0x188 ), this[0x18c], param_2);
            if (local_54 == 0) goto LAB_00101d3c;
            LAB_00101c93:if (local_54 == -0x66) {
               iVar9 = 0x19;
            }
 else {
               iVar9 = ( uint )(local_54 != -0x65) * 4 + 0x18;
            }

         }
 else {
            pUVar3 = (UPNPDev*)upnpDiscover(param_1, lVar5, 0, *(undefined4*)( this + 0x188 ), this[0x18c], param_2, &local_54);
            if (local_54 != 0) goto LAB_00101c93;
            LAB_00101d3c:iVar9 = local_54;
            pUVar7 = pUVar3;
            if (pUVar3 == (UPNPDev*)0x0) {
               iVar9 = 0x1b;
            }
 else {
               do {
                  if (( *(long*)param_3 == 0 ) || ( *(uint*)( *(long*)param_3 + -8 ) < 2 )) {
                     LAB_00101db0:add_device_to_list(this, pUVar7, pUVar3);
                  }
 else {
                     String::utf8();
                     pcVar4 = (char*)CharString::get_data();
                     pcVar4 = strstr(*(char**)( pUVar7 + 0x10 ), pcVar4);
                     lVar5 = local_48;
                     if (pcVar4 != (char*)0x0) {
                        if (local_48 != 0) {
                           LOCK();
                           plVar1 = (long*)( local_48 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              local_48 = 0;
                              Memory::free_static((void*)( lVar5 + -0x10 ), false);
                           }

                        }

                        goto LAB_00101db0;
                     }

                     if (local_48 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_48 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_48 = 0;
                           Memory::free_static((void*)( lVar5 + -0x10 ), false);
                        }

                     }

                  }

                  pUVar7 = *(UPNPDev**)pUVar7;
               }
 while ( pUVar7 != (UPNPDev*)0x0 );
               freeUPNPDevlist(pUVar3);
            }

         }

         lVar5 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar1 = (long*)( local_50 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

         goto LAB_00101cdc;
      }

      pcVar8 = "The time-to-live must be set between 0 and 255 (inclusive).";
      uVar6 = 0x38;
      pcVar4 = "Condition \"ttl < 0 || ttl > 255\" is true. Returning: UPNP_RESULT_INVALID_PARAM";
   }

   iVar9 = 0x16;
   _err_print_error("discover", "modules/upnp/upnp_miniupnp.cpp", uVar6, pcVar4, pcVar8, 0, 0);
   LAB_00101cdc:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar9;
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
   return (uint)CONCAT71(0x1050, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1050, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* UPNPMiniUPNP::is_class_ptr(void*) const */uint UPNPMiniUPNP::is_class_ptr(UPNPMiniUPNP *this, void *param_1) {
   return (uint)CONCAT71(0x1050, (undefined4*)param_1 == &UPNP::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1050, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1050, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1050, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* UPNPMiniUPNP::_getv(StringName const&, Variant&) const */undefined8 UPNPMiniUPNP::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* UPNPMiniUPNP::_setv(StringName const&, Variant const&) */undefined8 UPNPMiniUPNP::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* UPNPMiniUPNP::_validate_propertyv(PropertyInfo&) const */void UPNPMiniUPNP::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* UPNPMiniUPNP::_property_can_revertv(StringName const&) const */undefined8 UPNPMiniUPNP::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* UPNPMiniUPNP::_property_get_revertv(StringName const&, Variant&) const */undefined8 UPNPMiniUPNP::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* UPNPMiniUPNP::_notificationv(int, bool) */void UPNPMiniUPNP::_notificationv(int param_1, bool param_2) {
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00104d00;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00104d00;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* UPNPMiniUPNP::_get_class_namev() const */undefined8 *UPNPMiniUPNP::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001020e3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001020e3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "UPNPMiniUPNP");
         goto LAB_0010214e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "UPNPMiniUPNP");
   LAB_0010214e:return &_get_class_namev();
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
         LAB_001021c3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001021c3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010222e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010222e:return &_get_class_namev();
}
/* UPNPMiniUPNP::_create(bool) */RefCounted *UPNPMiniUPNP::_create(bool param_1) {
   long lVar1;
   RefCounted *this;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   this(RefCounted * operator_new(0x1a0, ""));
   RefCounted::RefCounted(this);
   *(undefined***)this = &PTR__initialize_classv_00104e60;
   *(undefined8*)( this + 0x180 ) = 0;
   String::parse_latin1((StrRange*)( this + 0x180 ));
   this[0x18c] = (RefCounted)0x0;
   *(undefined4*)( this + 0x188 ) = 0;
   *(undefined8*)( this + 0x198 ) = 0;
   Object::_initialize();
   if (param_1) {
      Object::_postinitialize();
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* UPNPMiniUPNP::get_class() const */void UPNPMiniUPNP::get_class(void) {
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
                  if (lVar5 == 0) goto LAB_0010255f;
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

      LAB_0010255f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00102613;
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
                     if (lVar5 == 0) goto LAB_001026c3;
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

         LAB_001026c3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00102613;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00102613:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* UPNPMiniUPNP::is_class(String const&) const */undefined8 UPNPMiniUPNP::is_class(UPNPMiniUPNP *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_001027ef;
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

      LAB_001027ef:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_001028a3;
   }

   cVar6 = String::operator ==(param_1, "UPNPMiniUPNP");
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
                     if (lVar5 == 0) goto LAB_00102963;
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

         LAB_00102963:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_001028a3;
      }

      cVar6 = String::operator ==(param_1, "UPNP");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar7;
         }

         goto LAB_00102a0c;
      }

   }

   LAB_001028a3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00102a0c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* UPNPDeviceMiniUPNP::~UPNPDeviceMiniUPNP() */void UPNPDeviceMiniUPNP::~UPNPDeviceMiniUPNP(UPNPDeviceMiniUPNP *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = StringName::StringName;
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

   *(undefined***)this = &PTR__initialize_classv_00104d00;
   Object::~Object((Object*)this);
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
      LAB_00102e88:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00102e88;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00102ea6;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00102ea6:if (lVar2 == 0) {
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
/* UPNPMiniUPNP::_initialize_classv() */void UPNPMiniUPNP::_initialize_classv(void) {
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
      if (UPNP::initialize_class() == '\0') {
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

            if ((code*)PTR__bind_methods_00107010 != RefCounted::_bind_methods) {
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
         local_58 = "UPNP";
         local_70 = 0;
         local_50 = 4;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
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

         if ((code*)PTR__bind_methods_00107008 != RefCounted::_bind_methods) {
            UPNP::_bind_methods();
         }

         UPNP::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "UPNP";
      local_68 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "UPNPMiniUPNP";
      local_70 = 0;
      local_50 = 0xc;
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
/* UPNP::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void UPNP::_get_property_listv(UPNP *this, List *param_1, bool param_2) {
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
   undefined *local_78;
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
   local_78 = &_LC4;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC4;
   local_98 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (undefined*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_001036a8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001036a8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001036c5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001036c5:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "UPNP", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
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
/* UPNPMiniUPNP::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void UPNPMiniUPNP::_get_property_listv(UPNPMiniUPNP *this, List *param_1, bool param_2) {
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
      UPNP::_get_property_listv((UPNP*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "UPNPMiniUPNP";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "UPNPMiniUPNP";
   local_98 = 0;
   local_70 = 0xc;
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
      LAB_00103af8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00103af8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00103b15;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00103b15:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "UPNPMiniUPNP", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         UPNP::_get_property_listv((UPNP*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* UPNPDeviceMiniUPNP::~UPNPDeviceMiniUPNP() */void UPNPDeviceMiniUPNP::~UPNPDeviceMiniUPNP(UPNPDeviceMiniUPNP *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = StringName::StringName;
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

   *(undefined***)this = &PTR__initialize_classv_00104d00;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1b0);
   return;
}
/* void memdelete<UPNPDeviceMiniUPNP>(UPNPDeviceMiniUPNP*) */void memdelete<UPNPDeviceMiniUPNP>(UPNPDeviceMiniUPNP *param_1) {
   long *plVar1;
   char cVar2;
   long lVar3;
   cVar2 = predelete_handler((Object*)param_1);
   if (cVar2 == '\0') {
      return;
   }

   if (*(code**)( *(long*)param_1 + 0x140 ) != UPNPDeviceMiniUPNP::~UPNPDeviceMiniUPNP) {
      ( **(code**)( *(long*)param_1 + 0x140 ) )(param_1);
      Memory::free_static(param_1, false);
      return;
   }

   *(code**)param_1 = StringName::StringName;
   if (*(long*)( param_1 + 0x1a0 ) == 0) {
      LAB_00104111:lVar3 = *(long*)( param_1 + 0x198 );
      if (lVar3 == 0) goto LAB_00104129;
      LAB_0010411d:LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00104129;
      lVar3 = *(long*)( param_1 + 0x198 );
      *(undefined8*)( param_1 + 0x198 ) = 0;
      Memory::free_static((void*)( lVar3 + -0x10 ), false);
      lVar3 = *(long*)( param_1 + 400 );
      if (lVar3 != 0) goto LAB_00104135;
      LAB_00104141:lVar3 = *(long*)( param_1 + 0x188 );
   }
 else {
      LOCK();
      plVar1 = (long*)( *(long*)( param_1 + 0x1a0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00104111;
      lVar3 = *(long*)( param_1 + 0x1a0 );
      *(undefined8*)( param_1 + 0x1a0 ) = 0;
      Memory::free_static((void*)( lVar3 + -0x10 ), false);
      lVar3 = *(long*)( param_1 + 0x198 );
      if (lVar3 != 0) goto LAB_0010411d;
      LAB_00104129:lVar3 = *(long*)( param_1 + 400 );
      if (lVar3 == 0) goto LAB_00104141;
      LAB_00104135:LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00104141;
      lVar3 = *(long*)( param_1 + 400 );
      *(undefined8*)( param_1 + 400 ) = 0;
      Memory::free_static((void*)( lVar3 + -0x10 ), false);
      lVar3 = *(long*)( param_1 + 0x188 );
   }

   if (lVar3 != 0) {
      LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( param_1 + 0x188 );
         *(undefined8*)( param_1 + 0x188 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         lVar3 = *(long*)( param_1 + 0x180 );
         goto joined_r0x00104267;
      }

   }

   lVar3 = *(long*)( param_1 + 0x180 );
   joined_r0x00104267:if (lVar3 != 0) {
      LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( param_1 + 0x180 );
         *(undefined8*)( param_1 + 0x180 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   *(undefined***)param_1 = &PTR__initialize_classv_00104d00;
   Object::~Object((Object*)param_1);
   Memory::free_static(param_1, false);
   return;
}
/* void memdelete<UPNPDevice>(UPNPDevice*) */void memdelete<UPNPDevice>(UPNPDevice *param_1) {
   long *plVar1;
   char cVar2;
   long lVar3;
   cVar2 = predelete_handler((Object*)param_1);
   if (cVar2 == '\0') {
      return;
   }

   if (*(code**)( *(long*)param_1 + 0x140 ) != UPNPDeviceMiniUPNP::~UPNPDeviceMiniUPNP) {
      ( **(code**)( *(long*)param_1 + 0x140 ) )(param_1);
      Memory::free_static(param_1, false);
      return;
   }

   *(code**)param_1 = StringName::StringName;
   if (*(long*)( param_1 + 0x1a0 ) == 0) {
      LAB_00104301:lVar3 = *(long*)( param_1 + 0x198 );
      if (lVar3 == 0) goto LAB_00104319;
      LAB_0010430d:LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00104319;
      lVar3 = *(long*)( param_1 + 0x198 );
      *(undefined8*)( param_1 + 0x198 ) = 0;
      Memory::free_static((void*)( lVar3 + -0x10 ), false);
      lVar3 = *(long*)( param_1 + 400 );
      if (lVar3 != 0) goto LAB_00104325;
      LAB_00104331:lVar3 = *(long*)( param_1 + 0x188 );
   }
 else {
      LOCK();
      plVar1 = (long*)( *(long*)( param_1 + 0x1a0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00104301;
      lVar3 = *(long*)( param_1 + 0x1a0 );
      *(undefined8*)( param_1 + 0x1a0 ) = 0;
      Memory::free_static((void*)( lVar3 + -0x10 ), false);
      lVar3 = *(long*)( param_1 + 0x198 );
      if (lVar3 != 0) goto LAB_0010430d;
      LAB_00104319:lVar3 = *(long*)( param_1 + 400 );
      if (lVar3 == 0) goto LAB_00104331;
      LAB_00104325:LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00104331;
      lVar3 = *(long*)( param_1 + 400 );
      *(undefined8*)( param_1 + 400 ) = 0;
      Memory::free_static((void*)( lVar3 + -0x10 ), false);
      lVar3 = *(long*)( param_1 + 0x188 );
   }

   if (lVar3 != 0) {
      LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( param_1 + 0x188 );
         *(undefined8*)( param_1 + 0x188 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         lVar3 = *(long*)( param_1 + 0x180 );
         goto joined_r0x00104457;
      }

   }

   lVar3 = *(long*)( param_1 + 0x180 );
   joined_r0x00104457:if (lVar3 != 0) {
      LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( param_1 + 0x180 );
         *(undefined8*)( param_1 + 0x180 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   *(undefined***)param_1 = &PTR__initialize_classv_00104d00;
   Object::~Object((Object*)param_1);
   Memory::free_static(param_1, false);
   return;
}
/* CowData<Ref<UPNPDevice> >::_unref() */void CowData<Ref<UPNPDevice>>::_unref(CowData<Ref<UPNPDevice>> *this) {
   long *plVar1;
   long lVar2;
   UPNPDevice *pUVar3;
   code *pcVar4;
   char cVar5;
   long *plVar6;
   long lVar7;
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

   plVar1 = *(long**)this;
   if (plVar1 == (long*)0x0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = plVar1[-1];
   *(undefined8*)this = 0;
   if (lVar2 != 0) {
      lVar7 = 0;
      plVar6 = plVar1;
      LAB_001044f5:do {
         if (*plVar6 != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               pUVar3 = (UPNPDevice*)*plVar6;
               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
               memdelete<UPNPDevice>(pUVar3);
               if (lVar2 == lVar7) break;
               goto LAB_001044f5;
            }

         }

         lVar7 = lVar7 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar2 != lVar7 );
   }

   Memory::free_static(plVar1 + -2, false);
   return;
}
/* UPNPMiniUPNP::~UPNPMiniUPNP() */void UPNPMiniUPNP::~UPNPMiniUPNP(UPNPMiniUPNP *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_00104e60;
   CowData<Ref<UPNPDevice>>::_unref((CowData<Ref<UPNPDevice>>*)( this + 0x198 ));
   if (*(long*)( this + 0x180 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x180 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x180 );
         *(undefined8*)( this + 0x180 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   *(undefined***)this = &PTR__initialize_classv_00104d00;
   Object::~Object((Object*)this);
   return;
}
/* UPNPMiniUPNP::~UPNPMiniUPNP() */void UPNPMiniUPNP::~UPNPMiniUPNP(UPNPMiniUPNP *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_00104e60;
   CowData<Ref<UPNPDevice>>::_unref((CowData<Ref<UPNPDevice>>*)( this + 0x198 ));
   if (*(long*)( this + 0x180 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x180 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x180 );
         *(undefined8*)( this + 0x180 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   *(undefined***)this = &PTR__initialize_classv_00104d00;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1a0);
   return;
}
/* CowData<Ref<UPNPDevice> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Ref<UPNPDevice>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* UPNPMiniUPNP::add_device_to_list(UPNPDev*, UPNPDev*) [clone .cold] */void UPNPMiniUPNP::add_device_to_list(UPNPDev *param_1, UPNPDev *param_2) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Ref<UPNPDevice> >::_realloc(long) */undefined8 CowData<Ref<UPNPDevice>>::_realloc(CowData<Ref<UPNPDevice>> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Ref<UPNPDevice> >::resize<false>(long) */undefined8 CowData<Ref<UPNPDevice>>::resize<false>(CowData<Ref<UPNPDevice>> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   char cVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar6 = 0;
      lVar7 = 0;
   }
 else {
      lVar6 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar6) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar7 = lVar6 * 8;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00104c00:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar8 = param_1 * 8 - 1;
   uVar8 = uVar8 >> 1 | uVar8;
   uVar8 = uVar8 | uVar8 >> 2;
   uVar8 = uVar8 | uVar8 >> 4;
   uVar8 = uVar8 | uVar8 >> 8;
   uVar8 = uVar8 | uVar8 >> 0x10;
   uVar8 = uVar8 | uVar8 >> 0x20;
   lVar10 = uVar8 + 1;
   if (lVar10 == 0) goto LAB_00104c00;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_00104aca:if (lVar10 != lVar7) {
               uVar4 = _realloc(this, lVar10);
               if ((int)uVar4 != 0) {
                  return uVar4;
               }

               lVar6 = *(long*)this;
               if (lVar6 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }

            *(long*)( lVar6 + -8 ) = param_1;
            return 0;
         }

         while (plVar1 = (long*)( lVar6 + uVar8 * 8 ),*plVar1 == 0) {
            uVar8 = uVar8 + 1;
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_00104aca;
         }
;
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            memdelete<UPNPDevice>((UPNPDevice*)*plVar1);
         }

         uVar8 = uVar8 + 1;
         lVar6 = *(long*)this;
      }
;
      goto LAB_00104a90;
   }

   if (lVar10 == lVar7) {
      LAB_00104b7b:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00104a90:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_00104b5b;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_00104b7b;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar6 = 0;
   }

   memset(puVar9 + lVar6, 0, ( param_1 - lVar6 ) * 8);
   LAB_00104b5b:puVar9[-1] = param_1;
   return 0;
}
/* WARNING: Control flow encountered bad instruction data *//* UPNPMiniUPNP::~UPNPMiniUPNP() */void UPNPMiniUPNP::~UPNPMiniUPNP(UPNPMiniUPNP *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
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

