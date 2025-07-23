long *build_absolute_url(char *param_1, char *param_2, char *param_3, uint param_4) {
   uint uVar1;
   ulong uVar2;
   size_t sVar3;
   long *plVar4;
   char *pcVar5;
   size_t sVar6;
   size_t sVar7;
   ulong uVar8;
   uint uVar9;
   undefined1 *puVar10;
   char cVar11;
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined4 local_58;
   undefined4 uStack_54;
   long local_40;
   cVar11 = *param_3;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( ( cVar11 == 'h' ) && ( param_3[1] == 't' ) ) && ( param_3[2] == 't' ) ) && ( ( param_3[3] == 'p' && ( param_3[4] == ':' ) ) ) ) && ( ( param_3[5] == '/' && ( param_3[6] == '/' ) ) )) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         plVar4 = (long*)strdup(param_3);
         return plVar4;
      }

      goto LAB_00100327;
   }

   if (*param_1 == '\0') {
      param_1 = param_2;
   }

   uVar2 = strlen(param_1);
   if (7 < uVar2) {
      pcVar5 = strchr(param_1 + 7, 0x2f);
      if (pcVar5 != (char*)0x0) {
         uVar2 = (long)pcVar5 - (long)param_1;
      }

   }

   sVar3 = strlen(param_3);
   sVar3 = sVar3 + uVar2 + 1 + ( ulong )(cVar11 != '/');
   if (param_4 == 0) {
      plVar4 = (long*)malloc(sVar3);
      if (plVar4 == (long*)0x0) goto LAB_00100200;
      __memcpy_chk(plVar4, param_1, uVar2, sVar3);
      puVar10 = (undefined1*)( (long)plVar4 + uVar2 );
      LAB_0010009f:if (cVar11 != '/') {
         uVar2 = uVar2 + 1;
         *puVar10 = 0x2f;
         puVar10 = (undefined1*)( (long)plVar4 + uVar2 );
      }

      uVar8 = sVar3;
      if (sVar3 <= uVar2) {
         uVar8 = uVar2;
      }

      __memcpy_chk(puVar10, param_3, sVar3 - uVar2, uVar8 - uVar2);
   }
 else {
      pcVar5 = if_indextoname(param_4, (char*)&local_58);
      if (pcVar5 != (char*)0x0) {
         sVar6 = strlen((char*)&local_58);
         sVar3 = sVar3 + 3 + sVar6;
      }

      plVar4 = (long*)malloc(sVar3);
      if (plVar4 != (long*)0x0) {
         __memcpy_chk(plVar4, param_1, uVar2, sVar3);
         puVar10 = (undefined1*)( (long)plVar4 + uVar2 );
         *puVar10 = 0;
         if (( ( uVar2 < 0xe ) || ( *plVar4 != 0x5b2f2f3a70747468 ) ) || ( ( *(long*)( (long)plVar4 + 5 ) != 0x3a303865665b2f2f || ( pcVar5 = strchr((char*)plVar4, 0x5d) ),pcVar5 == (char*)0x0 ) )) {
            cVar11 = *param_3;
         }
 else {
            local_60 = pcVar5;
            sVar6 = strlen(pcVar5);
            sVar7 = strlen((char*)&local_58);
            pcVar5 = local_60;
            memmove(local_60 + sVar7 + 3, local_60, sVar6 + 1);
            pcVar5[0] = '%';
            pcVar5[1] = '2';
            pcVar5[2] = '5';
            uVar1 = (uint)sVar7;
            if (uVar1 < 8) {
               if (( sVar7 & 4 ) == 0) {
                  if (uVar1 != 0) {
                     pcVar5[3] = (char)local_58;
                     if (( sVar7 & 2 ) != 0) {
                        *(undefined2*)( pcVar5 + ( sVar7 & 0xffffffff ) + 1 ) = *(undefined2*)( (long)&local_60 + ( sVar7 & 0xffffffff ) + 6 );
                     }

                  }

               }
 else {
                  *(undefined4*)( pcVar5 + 3 ) = local_58;
                  *(undefined4*)( pcVar5 + ( ( sVar7 & 0xffffffff ) - 1 ) ) = *(undefined4*)( (long)&local_60 + ( sVar7 & 0xffffffff ) + 4 );
               }

            }
 else {
               *(ulong*)( pcVar5 + 3 ) = CONCAT44(uStack_54, local_58);
               *(undefined8*)( pcVar5 + ( ( sVar7 & 0xffffffff ) - 5 ) ) = *(undefined8*)( (long)&local_60 + ( sVar7 & 0xffffffff ) );
               uVar1 = (int)( pcVar5 + ( 3 - ( ( ulong )(pcVar5 + 0xb) & 0xfffffffffffffff8 ) ) ) + uVar1 & 0xfffffff8;
               if (7 < uVar1) {
                  uVar9 = 0;
                  do {
                     uVar8 = (ulong)uVar9;
                     uVar9 = uVar9 + 8;
                     *(undefined8*)( ( ( ulong )(pcVar5 + 0xb) & 0xfffffffffffffff8 ) + uVar8 ) = *(undefined8*)( (long)&local_58 + ( uVar8 - (long)( pcVar5 + ( 3 - ( ( ulong )(pcVar5 + 0xb) & 0xfffffffffffffff8 ) ) ) ) );
                  }
 while ( uVar9 < uVar1 );
               }

            }

            uVar2 = uVar2 + 3 + sVar7;
            cVar11 = *param_3;
            puVar10 = (undefined1*)( (long)plVar4 + uVar2 );
         }

         goto LAB_0010009f;
      }

      LAB_00100200:plVar4 = (long*)0x0;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return plVar4;
   }

   LAB_00100327:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
void parserootdesc(undefined8 param_1, undefined4 param_2, undefined8 param_3) {
   long in_FS_OFFSET;
   undefined8 local_58[3];
   undefined4 local_40;
   undefined8 local_38;
   undefined *local_30;
   undefined *puStack_28;
   undefined *local_20;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_20 = &IGDdata;
   local_18 = 0;
   local_30 = _GLOBAL_OFFSET_TABLE_;
   puStack_28 = PTR_IGDendelt_00103008;
   local_58[0] = param_1;
   local_40 = param_2;
   local_38 = param_3;
   parsexml(local_58);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 simpleUPnPcommand(int param_1, undefined8 param_2, undefined8 param_3, char *param_4, undefined8 *param_5, undefined4 *param_6) {
   char cVar1;
   uint uVar2;
   int iVar3;
   ulong uVar4;
   ulong uVar5;
   char *pcVar6;
   ulong uVar7;
   char *pcVar8;
   char *pcVar9;
   char *pcVar10;
   long in_FS_OFFSET;
   undefined8 uVar11;
   undefined2 local_926;
   undefined1 local_924[4];
   undefined8 local_920;
   undefined1 local_918[80];
   undefined1 local_8c8[128];
   char local_848[2047];
   char local_49;
   char local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_926 = 0;
   *param_6 = 0;
   __snprintf_chk(local_8c8, 0x80, 2, 0x80, "%s#%s", param_3, param_4);
   if (param_5 == (undefined8*)0x0) {
      uVar2 = __snprintf_chk(local_848, 0x800, 2, 0x800, "<?xml version=\"1.0\"?>\r\n<s:Envelope xmlns:s=\"http://schemas.xmlsoap.org/soap/envelope/\" s:encodingStyle=\"http://schemas.xmlsoap.org/soap/encoding/\"><s:Body><u:%s xmlns:u=\"%s\"></u:%s></s:Body></s:Envelope>\r\n", param_4, param_3, param_4);
      if (uVar2 < 0x800) {
         LAB_001006da:uVar11 = 0x1006f8;
         iVar3 = parseURL(param_2, local_918, &local_926, &local_920, 0);
         if (iVar3 != 0) {
            if (param_1 < 0) {
               uVar11 = 0x10078d;
               param_1 = connecthostport(local_918, local_926, 0);
               if (param_1 < 0) {
                  uVar11 = 0;
                  goto LAB_00100754;
               }

            }

            iVar3 = soapPostSubmit(param_1, local_920, local_918, local_926, local_8c8, local_848, &_LC7);
            if (iVar3 < 1) {
               uVar11 = 0;
               close(param_1);
            }
 else {
               uVar11 = getHTTPResponse(param_1, param_6, local_924, uVar11);
               close(param_1);
            }

            goto LAB_00100754;
         }

      }

   }
 else {
      uVar2 = __snprintf_chk(local_848, 0x800, 2, 0x800, "<?xml version=\"1.0\"?>\r\n<s:Envelope xmlns:s=\"http://schemas.xmlsoap.org/soap/envelope/\" s:encodingStyle=\"http://schemas.xmlsoap.org/soap/encoding/\"><s:Body><u:%s xmlns:u=\"%s\">", param_4, param_3);
      if (uVar2 < 0x800) {
         pcVar9 = (char*)*param_5;
         uVar5 = 0x800 - (long)(int)uVar2;
         pcVar10 = local_848 + (int)uVar2;
         if (pcVar9 == (char*)0x0) {
            LAB_001007a0:pcVar9 = pcVar10 + 4;
            uVar7 = 0x800;
            if (0x7ff < uVar5) {
               uVar7 = uVar5;
            }

            uVar4 = ( uVar7 - uVar5 ) + 4;
            if (uVar4 < uVar7) {
               uVar4 = uVar7;
            }

            uVar4 = ( uVar5 - uVar7 ) + -4 + uVar4;
            if (pcVar9 <= local_48) {
               builtin_strncpy(pcVar10, "</u:", 4);
               pcVar10 = pcVar9;
               if (pcVar9 < local_48) {
                  do {
                     cVar1 = *param_4;
                     pcVar9 = pcVar10;
                     if (cVar1 == '\0') break;
                     param_4 = param_4 + 1;
                     uVar5 = 0x800;
                     if (0x7ff < uVar4) {
                        uVar5 = uVar4;
                     }

                     uVar7 = ( uVar5 - uVar4 ) + 1;
                     if (uVar7 < uVar5) {
                        uVar7 = uVar5;
                     }

                     pcVar9 = pcVar10 + 1;
                     uVar4 = ( ( uVar4 - 1 ) - uVar5 ) + uVar7;
                     *pcVar10 = cVar1;
                     pcVar10 = pcVar9;
                  }
 while ( pcVar9 != local_48 );
               }

               __strncpy_chk(pcVar9, "></s:Body></s:Envelope>\r\n", (long)local_48 - (long)pcVar9);
               if (local_49 != '\0') {
                  uVar11 = 0;
                  goto LAB_00100754;
               }

               goto LAB_001006da;
            }

         }
 else if (pcVar10 < local_48) {
            while (true) {
               pcVar8 = pcVar10 + 1;
               *pcVar10 = '<';
               uVar7 = 0x800;
               if (0x7ff < uVar5) {
                  uVar7 = uVar5;
               }

               uVar4 = ( uVar7 - uVar5 ) + 1;
               if (uVar4 < uVar7) {
                  uVar4 = uVar7;
               }

               uVar4 = uVar4 + ( ( uVar5 - 1 ) - uVar7 );
               pcVar10 = pcVar9;
               if (local_48 <= pcVar8) break;
               while (*pcVar10 != '\0') {
                  uVar5 = 0x800;
                  if (0x7ff < uVar4) {
                     uVar5 = uVar4;
                  }

                  uVar7 = ( uVar5 - uVar4 ) + 1;
                  if (uVar7 < uVar5) {
                     uVar7 = uVar5;
                  }

                  pcVar6 = pcVar8 + 1;
                  uVar4 = ( ( uVar4 - 1 ) - uVar5 ) + uVar7;
                  *pcVar8 = *pcVar10;
                  pcVar8 = pcVar6;
                  pcVar10 = pcVar10 + 1;
                  if (pcVar6 == local_48) goto LAB_0010063e;
               }
;
               if (local_48 <= pcVar8) break;
               pcVar10 = (char*)param_5[1];
               *pcVar8 = '>';
               uVar5 = 0x800;
               if (0x7ff < uVar4) {
                  uVar5 = uVar4;
               }

               uVar7 = ( uVar5 - uVar4 ) + 1;
               if (uVar7 < uVar5) {
                  uVar7 = uVar5;
               }

               pcVar8 = pcVar8 + 1;
               uVar7 = ( ( uVar4 - 1 ) - uVar5 ) + uVar7;
               if (( pcVar10 != (char*)0x0 ) && ( pcVar8 < local_48 )) {
                  while (true) {
                     cVar1 = *pcVar10;
                     uVar5 = 0x800;
                     if (0x7ff < uVar7) {
                        uVar5 = uVar7;
                     }

                     if (cVar1 == '\0') break;
                     uVar4 = ( uVar5 - uVar7 ) + 1;
                     pcVar10 = pcVar10 + 1;
                     if (uVar4 < uVar5) {
                        uVar4 = uVar5;
                     }

                     pcVar6 = pcVar8 + 1;
                     uVar7 = ( ( uVar7 - 1 ) - uVar5 ) + uVar4;
                     *pcVar8 = cVar1;
                     pcVar8 = pcVar6;
                     if (pcVar6 == local_48) {
                        uVar11 = 0;
                        goto LAB_00100754;
                     }

                  }
;
               }

               uVar5 = 0x800;
               if (0x7ff < uVar7) {
                  uVar5 = uVar7;
               }

               uVar4 = ( uVar5 - uVar7 ) + 2;
               if (uVar4 < uVar5) {
                  uVar4 = uVar5;
               }

               pcVar10 = pcVar8 + 2;
               uVar4 = ( uVar7 - uVar5 ) + -2 + uVar4;
               if (( local_48 < pcVar10 ) || ( *(undefined2*)pcVar8 = local_48 <= pcVar10 )) break;
               while (cVar1 = *pcVar9,cVar1 != '\0') {
                  pcVar9 = pcVar9 + 1;
                  uVar5 = 0x800;
                  if (0x7ff < uVar4) {
                     uVar5 = uVar4;
                  }

                  uVar7 = ( uVar5 - uVar4 ) + 1;
                  if (uVar7 < uVar5) {
                     uVar7 = uVar5;
                  }

                  pcVar8 = pcVar10 + 1;
                  uVar4 = ( ( uVar4 - 1 ) - uVar5 ) + uVar7;
                  *pcVar10 = cVar1;
                  pcVar10 = pcVar8;
                  if (pcVar8 == local_48) goto LAB_0010063e;
               }
;
               if (local_48 <= pcVar10) break;
               *pcVar10 = '>';
               pcVar10 = pcVar10 + 1;
               uVar7 = 0x800;
               if (0x7ff < uVar4) {
                  uVar7 = uVar4;
               }

               uVar5 = ( uVar7 - uVar4 ) + 1;
               if (uVar5 < uVar7) {
                  uVar5 = uVar7;
               }

               pcVar9 = (char*)param_5[2];
               param_5 = param_5 + 2;
               uVar5 = uVar5 + ( ( uVar4 - 1 ) - uVar7 );
               if (pcVar9 == (char*)0x0) goto LAB_001007a0;
               if (local_48 <= pcVar10) break;
            }
;
         }

      }

   }

   LAB_0010063e:uVar11 = 0;
   LAB_00100754:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar11;
}
long *upnpDiscoverDevices(long *param_1, undefined4 param_2, undefined8 param_3, char *param_4, undefined4 param_5, undefined4 param_6, undefined1 param_7, undefined4 *param_8, int param_9) {
   long *plVar1;
   long *plVar2;
   long *plVar3;
   char *pcVar4;
   long lVar5;
   long *plVar6;
   bool bVar7;
   long *local_78;
   if (param_8 != (undefined4*)0x0) {
      *param_8 = 0xffffffff;
   }

   if (param_4 == (char*)0x0) {
      param_4 = "/var/run/minissdpd.sock";
   }
 else if (*param_4 == '\0') goto LAB_001008ab;
   lVar5 = *param_1;
   if (lVar5 != 0) {
      plVar2 = param_1 + 1;
      local_78 = (long*)0x0;
      do {
         while (plVar3 = (long*)getDevicesFromMiniSSDPD(lVar5, param_4, 0),plVar3 == (long*)0x0) {
            lVar5 = *plVar2;
            plVar2 = plVar2 + 1;
            if (lVar5 == 0) goto LAB_001009d2;
         }
;
         pcVar4 = strstr((char*)plVar3[2], "rootdevice");
         plVar6 = (long*)*plVar3;
         bVar7 = pcVar4 != (char*)0x0;
         if (plVar6 == (long*)0x0) {
            *plVar3 = (long)local_78;
            local_78 = plVar3;
            if (!bVar7 && param_9 == 0) goto LAB_00100a38;
         }
 else {
            while (true) {
               plVar1 = (long*)*plVar6;
               if (pcVar4 == (char*)0x0) {
                  bVar7 = false;
               }

               if (plVar1 == (long*)0x0) break;
               pcVar4 = strstr((char*)plVar6[2], "rootdevice");
               plVar6 = plVar1;
            }
;
            *plVar6 = (long)local_78;
            local_78 = plVar3;
            if (!bVar7 && param_9 == 0) goto LAB_00100a38;
         }

         lVar5 = *plVar2;
         plVar2 = plVar2 + 1;
         local_78 = plVar3;
      }
 while ( lVar5 != 0 );
      LAB_001009d2:plVar3 = local_78;
      if (local_78 != (long*)0x0) {
         LAB_00100a38:do {
            pcVar4 = strstr((char*)local_78[2], "rootdevice");
            if (pcVar4 == (char*)0x0) {
               if (param_8 == (undefined4*)0x0) {
                  return plVar3;
               }

               *param_8 = 0;
               return plVar3;
            }

            local_78 = (long*)*local_78;
         }
 while ( local_78 != (long*)0x0 );
         lVar5 = ssdpDiscoverDevices(param_1, param_2, param_3, param_5, param_6, param_7, param_8, param_9);
         plVar2 = plVar3;
         do {
            plVar6 = plVar2;
            plVar2 = (long*)*plVar6;
         }
 while ( plVar2 != (long*)0x0 );
         *plVar6 = lVar5;
         return plVar3;
      }

   }

   LAB_001008ab:plVar2 = (long*)ssdpDiscoverDevices(param_1, param_2, param_3, param_5, param_6, param_7);
   return plVar2;
}
void upnpDiscover(undefined4 param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4, undefined4 param_5, undefined1 param_6, undefined8 param_7) {
   upnpDiscoverDevices(deviceList_1, param_1, param_2, param_3, param_4, param_5, param_6, param_7, 0);
   return;
}
void upnpDiscoverAll(undefined4 param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4, undefined4 param_5, undefined1 param_6, undefined8 param_7) {
   upnpDiscoverDevices(deviceList_0, param_1, param_2, param_3, param_4, param_5, param_6, param_7, 0);
   return;
}
void upnpDiscoverDevice(undefined8 param_1) {
   long in_FS_OFFSET;
   undefined8 local_28;
   undefined8 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_20 = 0;
   local_28 = param_1;
   upnpDiscoverDevices(&local_28);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void GetUPNPUrls(undefined8 *param_1, long param_2, char *param_3, undefined4 param_4) {
   long lVar1;
   char *pcVar2;
   undefined8 uVar3;
   lVar1 = param_2 + 0x80;
   pcVar2 = strdup(param_3);
   param_1[4] = pcVar2;
   uVar3 = build_absolute_url(lVar1, param_3, param_2 + 0x484, param_4);
   param_1[1] = uVar3;
   uVar3 = build_absolute_url(lVar1, param_3, param_2 + 900, param_4);
   *param_1 = uVar3;
   uVar3 = build_absolute_url(lVar1, param_3, param_2 + 0x184, param_4);
   param_1[2] = uVar3;
   uVar3 = build_absolute_url(lVar1, param_3, param_2 + 0x784, param_4);
   param_1[3] = uVar3;
   return;
}
void FreeUPNPUrls(undefined8 *param_1) {
   if (param_1 != (undefined8*)0x0) {
      free((void*)*param_1);
      *param_1 = 0;
      for (int i = 0; i < 4; i++) {
         free((void*)param_1[( i + 1 )]);
         param_1[( i + 1 )] = 0;
      }

      return;
   }

   return;
}
bool UPNPIGD_IsConnected(undefined8 *param_1, long param_2) {
   int iVar1;
   long in_FS_OFFSET;
   bool bVar2;
   undefined1 local_5c[4];
   byte local_58;
   byte local_57;
   byte local_56;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   UPNP_GetStatusInfo(*param_1, param_2 + 0x504, &local_58, local_5c, 0);
   iVar1 = strcmp("Connected", (char*)&local_58);
   bVar2 = true;
   if (iVar1 != 0) {
      iVar1 = 0x55 - (uint)local_58;
      if (( iVar1 == 0 ) && ( iVar1 = iVar1 == 0 )) {
         iVar1 = -(uint)local_56;
      }

      bVar2 = iVar1 == 0;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int UPNP_GetValidIGD(long *param_1, undefined1 (*param_2)[16], undefined8 *param_3, char *param_4, int param_5, char *param_6, int param_7) {
   void *__ptr;
   int iVar1;
   undefined *puVar2;
   undefined *puVar3;
   int iVar4;
   int iVar5;
   long *plVar6;
   void *__ptr_00;
   long lVar7;
   ulong uVar8;
   long lVar9;
   char *__src;
   undefined8 *puVar10;
   undefined8 *puVar11;
   undefined4 *puVar12;
   int iVar13;
   int iVar14;
   long in_FS_OFFSET;
   byte bVar15;
   int local_d0;
   undefined4 local_8c;
   long local_88[3];
   undefined4 local_70;
   undefined8 *local_68;
   undefined *local_60;
   undefined *puStack_58;
   undefined *local_50;
   undefined8 local_48;
   long local_40;
   puVar3 = PTR_IGDendelt_00103008;
   puVar2 = _GLOBAL_OFFSET_TABLE_;
   bVar15 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_8c = 0xffffffff;
   if (param_1 == (long*)0x0) {
      local_d0 = 0;
   }
 else {
      plVar6 = param_1;
      iVar14 = 0;
      do {
         iVar13 = iVar14;
         plVar6 = (long*)*plVar6;
         iVar14 = iVar13 + 1;
      }
 while ( plVar6 != (long*)0x0 );
      __ptr_00 = calloc((long)iVar14, 0x60);
      if (__ptr_00 == (void*)0x0) {
         local_d0 = -1;
      }
 else {
         puVar12 = (undefined4*)( (long)__ptr_00 + 0x58 );
         plVar6 = param_1;
         do {
            lVar7 = miniwget_getaddr(plVar6[1], puVar12, puVar12 + -0x16, 0x28, (int)plVar6[4], &local_8c);
            *(long*)( puVar12 + -2 ) = lVar7;
            iVar1 = (int)param_3;
            if (lVar7 != 0) {
               *param_3 = 0;
               *(undefined8*)( (long)param_3 + 0xb7c ) = 0;
               puVar10 = (undefined8*)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
               for (uVar8 = ( ulong )(( iVar1 - (int)(undefined8*)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 ) ) + 0xb84U >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
                  *puVar10 = 0;
                  puVar10 = puVar10 + (ulong)bVar15 * -2 + 1;
               }

               *(undefined8*)param_2[2] = 0;
               *param_2 = (undefined1[16])0x0;
               local_70 = *puVar12;
               param_2[1] = (undefined1[16])0x0;
               local_50 = &IGDdata;
               local_48 = 0;
               local_60 = puVar2;
               puStack_58 = puVar3;
               local_88[0] = lVar7;
               local_68 = param_3;
               parsexml(local_88);
               iVar4 = strncmp((char*)( (long)param_3 + 0x304 ), "urn:schemas-upnp-org:service:WANCommonInterfaceConfig:", 0x36);
               if (iVar4 == 0) {
                  puVar12[1] = 1;
               }

            }

            plVar6 = (long*)*plVar6;
            puVar12 = puVar12 + 0x18;
         }
 while ( plVar6 != (long*)0x0 );
         local_d0 = 1;
         do {
            iVar4 = 0;
            lVar7 = (long)__ptr_00 + 0x28;
            plVar6 = param_1;
            do {
               lVar9 = *(long*)( lVar7 + 0x28 );
               if (lVar9 != 0) {
                  *param_3 = 0;
                  *(undefined8*)( (long)param_3 + 0xb7c ) = 0;
                  puVar10 = (undefined8*)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
                  uVar8 = ( ulong )(( iVar1 - (int)puVar10 ) + 0xb84U >> 3);
                  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                     *puVar10 = 0;
                     puVar10 = puVar10 + (ulong)bVar15 * -2 + 1;
                  }

                  *(undefined8*)param_2[2] = 0;
                  *param_2 = (undefined1[16])0x0;
                  local_70 = *(undefined4*)( lVar7 + 0x30 );
                  param_2[1] = (undefined1[16])0x0;
                  local_50 = &IGDdata;
                  local_48 = 0;
                  local_60 = puVar2;
                  puStack_58 = puVar3;
                  local_88[0] = lVar9;
                  local_68 = param_3;
                  parsexml(local_88);
                  if (*(int*)( lVar7 + 0x34 ) == 0) {
                     if (local_d0 == 4) {
                        GetUPNPUrls(param_2, param_3, plVar6[1], (int)plVar6[4]);
                        LAB_001012e6:if (iVar4 < iVar14) goto LAB_001013dd;
                        goto LAB_001012ee;
                     }

                  }
 else {
                     GetUPNPUrls(param_2, param_3, plVar6[1], (int)plVar6[4]);
                     if (2 < local_d0) {
                        if (iVar14 <= iVar4) goto LAB_001012ee;
                        LAB_001013dd:if (param_4 == (char*)0x0) {
                           if (param_6 == (char*)0x0) goto LAB_001012ee;
                           __src = (char*)( (long)iVar4 * 0x60 + (long)__ptr_00 );
                        }
 else {
                           __src = (char*)( (long)iVar4 * 0x60 + (long)__ptr_00 );
                           strncpy(param_4, __src, (long)param_5);
                           if (param_6 == (char*)0x0) goto LAB_001012ee;
                        }

                        strncpy(param_6, __src + 0x28, (long)param_7);
                        goto LAB_001012ee;
                     }

                     iVar5 = UPNPIGD_IsConnected(param_2, param_3);
                     if (iVar5 != 0) {
                        if (local_d0 == 2) goto LAB_001012e6;
                        iVar5 = UPNP_GetExternalIPAddress(*(undefined8*)*param_2, (long)param_3 + 0x504, lVar7);
                        if (( iVar5 != 0 ) || ( iVar5 = iVar5 != 0 )) goto LAB_001010eb;
                        LAB_00101370:local_d0 = 1;
                        goto LAB_001012e6;
                     }

                     LAB_001010eb:free(*(void**)*param_2);
                     *(undefined8*)*param_2 = 0;
                     free(*(void**)( *param_2 + 8 ));
                     *(undefined8*)( *param_2 + 8 ) = 0;
                     free(*(void**)param_2[1]);
                     *(undefined8*)param_2[1] = 0;
                     free(*(void**)( param_2[1] + 8 ));
                     *(undefined8*)( param_2[1] + 8 ) = 0;
                     free(*(void**)param_2[2]);
                     *(undefined8*)param_2[2] = 0;
                     if (*(char*)( (long)param_3 + 0x704 ) != '\0') {
                        puVar11 = (undefined8*)( (long)param_3 + 0x98cU & 0xfffffffffffffff8 );
                        *(undefined8*)( (long)param_3 + 0x984 ) = *(undefined8*)( (long)param_3 + 900 );
                        *(undefined8*)( (long)param_3 + 0xb7c ) = *(undefined8*)( (long)param_3 + 0x57c );
                        lVar9 = (long)param_3 + ( 0x984 - (long)puVar11 );
                        puVar10 = (undefined8*)( (long)param_3 + ( 900 - lVar9 ) );
                        for (uVar8 = ( ulong )((int)lVar9 + 0x200U >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
                           *puVar11 = *puVar10;
                           puVar10 = puVar10 + (ulong)bVar15 * -2 + 1;
                           puVar11 = puVar11 + (ulong)bVar15 * -2 + 1;
                        }

                        puVar11 = (undefined8*)( (long)param_3 + 0x38cU & 0xfffffffffffffff8 );
                        lVar9 = (long)param_3 + ( 900 - (long)puVar11 );
                        *(undefined8*)( (long)param_3 + 900 ) = *(undefined8*)( (long)param_3 + 0x584 );
                        *(undefined8*)( (long)param_3 + 0x57c ) = *(undefined8*)( (long)param_3 + 0x77c );
                        puVar10 = (undefined8*)( (long)param_3 + ( 0x584 - lVar9 ) );
                        for (uVar8 = ( ulong )((int)lVar9 + 0x200U >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
                           *puVar11 = *puVar10;
                           puVar10 = puVar10 + (ulong)bVar15 * -2 + 1;
                           puVar11 = puVar11 + (ulong)bVar15 * -2 + 1;
                        }

                        puVar11 = (undefined8*)( (long)param_3 + 0x58cU & 0xfffffffffffffff8 );
                        lVar9 = (long)param_3 + ( 0x584 - (long)puVar11 );
                        *(undefined8*)( (long)param_3 + 0x584 ) = *(undefined8*)( (long)param_3 + 0x984 );
                        *(undefined8*)( (long)param_3 + 0x77c ) = *(undefined8*)( (long)param_3 + 0xb7c );
                        puVar10 = (undefined8*)( (long)param_3 + ( 0x984 - lVar9 ) );
                        for (uVar8 = ( ulong )((int)lVar9 + 0x200U >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
                           *puVar11 = *puVar10;
                           puVar10 = puVar10 + (ulong)bVar15 * -2 + 1;
                           puVar11 = puVar11 + (ulong)bVar15 * -2 + 1;
                        }

                        GetUPNPUrls(param_2, param_3, plVar6[1], (int)plVar6[4]);
                        iVar5 = UPNPIGD_IsConnected(param_2, param_3);
                        if (iVar5 != 0) {
                           if (local_d0 == 2) goto LAB_001012e6;
                           iVar5 = UPNP_GetExternalIPAddress(*(undefined8*)*param_2, (long)param_3 + 0x504, lVar7);
                           if (( iVar5 == 0 ) && ( iVar5 = iVar5 == 0 )) goto LAB_00101370;
                        }

                        free(*(void**)*param_2);
                        *(undefined8*)*param_2 = 0;
                        free(*(void**)( *param_2 + 8 ));
                        *(undefined8*)( *param_2 + 8 ) = 0;
                        free(*(void**)param_2[1]);
                        *(undefined8*)param_2[1] = 0;
                        free(*(void**)( param_2[1] + 8 ));
                        *(undefined8*)( param_2[1] + 8 ) = 0;
                        free(*(void**)param_2[2]);
                        *(undefined8*)param_2[2] = 0;
                     }

                  }

                  *param_3 = 0;
                  *(undefined8*)( (long)param_3 + 0xb7c ) = 0;
                  puVar10 = (undefined8*)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
                  uVar8 = ( ulong )(( iVar1 - (int)puVar10 ) + 0xb84U >> 3);
                  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                     *puVar10 = 0;
                     puVar10 = puVar10 + (ulong)bVar15 * -2 + 1;
                  }

               }

               plVar6 = (long*)*plVar6;
               iVar4 = iVar4 + 1;
               lVar7 = lVar7 + 0x60;
            }
 while ( plVar6 != (long*)0x0 );
            local_d0 = local_d0 + 1;
         }
 while ( local_d0 != 5 );
         local_d0 = 0;
         LAB_001012ee:puVar10 = (undefined8*)( (long)__ptr_00 + 0x50 );
         do {
            __ptr = (void*)*puVar10;
            puVar10 = puVar10 + 0xc;
            free(__ptr);
         }
 while ( puVar10 != (undefined8*)( (long)__ptr_00 + (long)iVar13 * 0x60 + 0xb0 ) );
         free(__ptr_00);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_d0;
}
undefined8 UPNP_GetIGDFromUrl(undefined8 param_1, undefined1 (*param_2)[16], undefined8 *param_3, undefined8 param_4, undefined4 param_5) {
   void *__ptr;
   undefined8 uVar1;
   ulong uVar2;
   undefined8 *puVar3;
   long in_FS_OFFSET;
   byte bVar4;
   undefined4 local_7c;
   void *local_78[3];
   undefined4 local_60;
   undefined8 *local_58;
   undefined *local_50;
   undefined *puStack_48;
   undefined *local_40;
   undefined8 local_38;
   long local_30;
   bVar4 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_7c = 0;
   __ptr = (void*)miniwget_getaddr(param_1, &local_7c, param_4, param_5, 0, 0);
   uVar1 = 0;
   if (__ptr != (void*)0x0) {
      *param_3 = 0;
      *(undefined8*)( (long)param_3 + 0xb7c ) = 0;
      puVar3 = (undefined8*)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
      for (uVar2 = ( ulong )(( (int)param_3 - (int)(undefined8*)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 ) ) + 0xb84U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
         *puVar3 = 0;
         puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
      }

      *param_2 = (undefined1[16])0x0;
      param_2[1] = (undefined1[16])0x0;
      local_50 = _GLOBAL_OFFSET_TABLE_;
      *(undefined8*)param_2[2] = 0;
      local_60 = local_7c;
      puStack_48 = PTR_IGDendelt_00103008;
      local_40 = &IGDdata;
      local_38 = 0;
      local_78[0] = __ptr;
      local_58 = param_3;
      parsexml(local_78);
      free(__ptr);
      GetUPNPUrls(param_2, param_3, param_1, 0);
      uVar1 = 1;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

