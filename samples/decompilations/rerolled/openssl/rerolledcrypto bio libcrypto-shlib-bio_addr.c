void BIO_ADDR_new(void) {
   undefined2 *puVar1;
   puVar1 = (undefined2*)CRYPTO_zalloc(0x70, "crypto/bio/bio_addr.c", 0x36);
   if (puVar1 != (undefined2*)0x0) {
      *puVar1 = 0;
   }

   return;
}
void BIO_ADDR_free(void *param_1) {
   CRYPTO_free(param_1);
   return;
}
void BIO_ADDR_clear(undefined8 *param_1) {
   ulong uVar1;
   undefined8 *puVar2;
   *param_1 = 0;
   param_1[0xd] = 0;
   puVar2 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar1 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x70U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
   }

   return;
}
undefined8 BIO_ADDR_make(undefined8 *param_1, short *param_2) {
   short sVar1;
   undefined8 uVar2;
   ulong uVar3;
   undefined8 *puVar4;
   *param_1 = 0;
   param_1[0xd] = 0;
   puVar4 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar3 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x70U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
   }

   sVar1 = *param_2;
   if (sVar1 == 2) {
      uVar2 = *(undefined8*)( param_2 + 4 );
      *param_1 = *(undefined8*)param_2;
      param_1[1] = uVar2;
   }
 else if (sVar1 == 10) {
      uVar2 = *(undefined8*)( param_2 + 4 );
      *param_1 = *(undefined8*)param_2;
      param_1[1] = uVar2;
      uVar2 = *(undefined8*)( param_2 + 10 );
      *(undefined8*)( (long)param_1 + 0xc ) = *(undefined8*)( param_2 + 6 );
      *(undefined8*)( (long)param_1 + 0x14 ) = uVar2;
   }
 else {
      if (sVar1 != 1) {
         return 0;
      }

      uVar2 = *(undefined8*)( param_2 + 4 );
      *param_1 = *(undefined8*)param_2;
      param_1[1] = uVar2;
      for (int i = 0; i < 5; i++) {
         uVar2 = *(undefined8*)( param_2 + ( 8*i + 12 ) );
         param_1[( 2*i + 2 )] = *(undefined8*)( param_2 + ( 8*i + 8 ) );
         param_1[( 2*i + 3 )] = uVar2;
      }

      uVar2 = *(undefined8*)( param_2 + 0x33 );
      *(undefined8*)( (long)param_1 + 0x5e ) = *(undefined8*)( param_2 + 0x2f );
      *(undefined8*)( (long)param_1 + 0x66 ) = uVar2;
   }

   return 1;
}
undefined8 BIO_ADDR_copy(long param_1, short *param_2) {
   undefined8 uVar1;
   if (( param_1 != 0 ) && ( param_2 != (short*)0x0 )) {
      if (*param_2 != 0) {
         uVar1 = BIO_ADDR_make();
         return uVar1;
      }

      BIO_ADDR_clear();
      return 1;
   }

   return 0;
}
long BIO_ADDR_dup(long param_1) {
   int iVar1;
   long lVar2;
   if (( param_1 != 0 ) && ( lVar2 = lVar2 != 0 )) {
      iVar1 = BIO_ADDR_copy(lVar2, param_1);
      if (iVar1 != 0) {
         return lVar2;
      }

      BIO_ADDR_free(lVar2);
   }

   return 0;
}
undefined8 BIO_ADDR_rawmake(undefined2 *param_1, int param_2, char *param_3, long param_4, undefined2 param_5) {
   undefined8 uVar1;
   ulong uVar2;
   undefined8 *puVar3;
   if (param_2 == 1) {
      if (0x6c < param_4 + 1U) {
         return 0;
      }

      *(undefined8*)( param_1 + 1 ) = 0;
      *(undefined8*)( param_1 + 0x33 ) = 0;
      puVar3 = (undefined8*)( ( ulong )(param_1 + 5) & 0xfffffffffffffff8 );
      for (uVar2 = ( ulong )(( (int)( param_1 + 1 ) - (int)(undefined8*)( ( ulong )(param_1 + 5) & 0xfffffffffffffff8 ) ) + 0x6cU >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
         *puVar3 = 0;
         puVar3 = puVar3 + 1;
      }

      *param_1 = 1;
      strncpy((char*)( param_1 + 1 ), param_3, 0x6b);
      return 1;
   }

   if (param_2 == 2) {
      if (param_4 != 4) {
         return 0;
      }

      *(undefined8*)( param_1 + 2 ) = 0;
      *(undefined4*)( param_1 + 6 ) = 0;
      *param_1 = 2;
      param_1[1] = param_5;
      *(undefined4*)( param_1 + 2 ) = *(undefined4*)param_3;
   }
 else {
      if (( param_2 != 10 ) || ( param_4 != 0x10 )) {
         return 0;
      }

      param_1[1] = param_5;
      *(undefined8*)( param_1 + 10 ) = 0;
      *(undefined1(*) [16])( param_1 + 2 ) = (undefined1[16])0x0;
      *param_1 = 10;
      uVar1 = *(undefined8*)( param_3 + 8 );
      *(undefined8*)( param_1 + 4 ) = *(undefined8*)param_3;
      *(undefined8*)( param_1 + 8 ) = uVar1;
   }

   return 1;
}
undefined2 BIO_ADDR_family(undefined2 *param_1) {
   return *param_1;
}
undefined8 BIO_ADDR_rawaddress(short *param_1, void *param_2, size_t *param_3) {
   short sVar1;
   short *__s;
   size_t __n;
   __n = 4;
   __s = param_1 + 2;
   sVar1 = *param_1;
   if (sVar1 != 2) {
      __s = param_1 + 4;
      __n = 0x10;
      if (sVar1 != 10) {
         if (sVar1 != 1) {
            return 0;
         }

         __s = param_1 + 1;
         __n = strlen((char*)__s);
      }

   }

   if (param_2 != (void*)0x0) {
      memcpy(param_2, __s, __n);
   }

   if (param_3 != (size_t*)0x0) {
      *param_3 = __n;
   }

   return 1;
}
short BIO_ADDR_rawport(short *param_1) {
   if (( *param_1 != 2 ) && ( *param_1 != 10 )) {
      return 0;
   }

   return param_1[1];
}
char *BIO_ADDR_path_string(short *param_1) {
   char *pcVar1;
   if (*param_1 != 1) {
      return (char*)0x0;
   }

   pcVar1 = CRYPTO_strdup((char*)( param_1 + 1 ), "crypto/bio/bio_addr.c", 0x146);
   return pcVar1;
}
undefined8 BIO_ADDR_sockaddr(undefined8 param_1) {
   return param_1;
}
undefined8 BIO_ADDR_sockaddr_noconst(undefined8 param_1) {
   return param_1;
}
int BIO_ADDR_sockaddr_size(short *param_1) {
   short sVar1;
   int iVar2;
   sVar1 = *param_1;
   iVar2 = 0x10;
   if (( sVar1 != 2 ) && ( iVar2 = sVar1 != 10 )) {
      iVar2 = ( sVar1 != 1 ) + 0x6e + ( uint )(sVar1 != 1);
   }

   return iVar2;
}
undefined8 addr_strings(undefined8 param_1, int param_2, undefined8 *param_3, undefined8 *param_4) {
   ushort uVar1;
   int iVar2;
   socklen_t __salen;
   sockaddr *__sa;
   char *pcVar3;
   void *ptr;
   int *piVar4;
   long lVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   byte bVar7;
   undefined1 local_468[16];
   undefined1 local_458[16];
   char local_448[1032];
   long local_40;
   bVar7 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = BIO_sock_init();
   if (iVar2 == 1) {
      uVar6 = 1;
      pcVar3 = local_448;
      for (lVar5 = 0x80; lVar5 != 0; lVar5 = lVar5 + -1) {
         for (int i = 0; i < 8; i++) {
            pcVar3[i] = '\0';
         }

         pcVar3 = pcVar3 + (ulong)bVar7 * -0x10 + 8;
      }

      local_468 = (undefined1[16])0x0;
      local_458 = (undefined1[16])0x0;
      *pcVar3 = '\0';
      __salen = BIO_ADDR_sockaddr_size(param_1);
      __sa = (sockaddr*)BIO_ADDR_sockaddr(param_1);
      iVar2 = getnameinfo(__sa, __salen, local_448, 0x401, local_468, 0x20, -(uint)(param_2 != 0) & 3);
      if (iVar2 == 0) {
         if (local_468[0] == '\0') {
            uVar1 = BIO_ADDR_rawport(param_1);
            BIO_snprintf(local_468, 0x20, "%d", ( ulong )(ushort)(uVar1 << 8 | uVar1 >> 8));
         }

         if (param_3 == (undefined8*)0x0) {
            if (param_4 == (undefined8*)0x0) goto LAB_0010045c;
            pcVar3 = CRYPTO_strdup(local_468, "crypto/bio/bio_addr.c", 0x112);
            *param_4 = pcVar3;
            if (pcVar3 != (char*)0x0) goto LAB_0010045c;
            ptr = (void*)0x0;
         }
 else {
            pcVar3 = CRYPTO_strdup(local_448, "crypto/bio/bio_addr.c", 0x110);
            *param_3 = pcVar3;
            if (param_4 == (undefined8*)0x0) {
               if (pcVar3 != (char*)0x0) goto LAB_0010045c;
               CRYPTO_free((void*)0x0);
               *param_3 = 0;
               goto LAB_00100459;
            }

            pcVar3 = CRYPTO_strdup(local_468, "crypto/bio/bio_addr.c", 0x112);
            *param_4 = pcVar3;
            if ((void*)*param_3 == (void*)0x0) {
               CRYPTO_free((void*)0x0);
               *param_3 = 0;
               ptr = (void*)*param_4;
            }
 else {
               if (pcVar3 != (char*)0x0) goto LAB_0010045c;
               CRYPTO_free((void*)*param_3);
               *param_3 = 0;
               ptr = (void*)*param_4;
            }

         }

         CRYPTO_free(ptr);
         *param_4 = 0;
      }
 else if (iVar2 == -0xb) {
         ERR_new();
         ERR_set_debug("crypto/bio/bio_addr.c", 0xfa, "addr_strings");
         piVar4 = __errno_location();
         ERR_set_error(2, *piVar4, "calling getnameinfo()");
      }
 else {
         ERR_new();
         ERR_set_debug("crypto/bio/bio_addr.c", 0xff, "addr_strings");
         pcVar3 = gai_strerror(iVar2);
         ERR_set_error(0x20, 0x80002, pcVar3);
      }

   }

   LAB_00100459:uVar6 = 0;
   LAB_0010045c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 BIO_ADDR_hostname_string(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = 0;
   iVar1 = addr_strings(param_1, param_2, &local_18, 0);
   uVar2 = local_18;
   if (iVar1 == 0) {
      uVar2 = 0;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 BIO_ADDR_service_string(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = 0;
   iVar1 = addr_strings(param_1, param_2, 0, &local_18);
   uVar2 = local_18;
   if (iVar1 == 0) {
      uVar2 = 0;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 BIO_ADDRINFO_next(long param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (param_1 != 0) {
      uVar1 = *(undefined8*)( param_1 + 0x28 );
   }

   return uVar1;
}
undefined4 BIO_ADDRINFO_family(long param_1) {
   undefined4 uVar1;
   uVar1 = 0;
   if (param_1 != 0) {
      uVar1 = *(undefined4*)( param_1 + 4 );
   }

   return uVar1;
}
undefined4 BIO_ADDRINFO_socktype(long param_1) {
   undefined4 uVar1;
   uVar1 = 0;
   if (param_1 != 0) {
      uVar1 = *(undefined4*)( param_1 + 8 );
   }

   return uVar1;
}
int BIO_ADDRINFO_protocol(long param_1) {
   int iVar1;
   iVar1 = 0;
   if (( ( param_1 != 0 ) && ( iVar1 = *(int*)( param_1 + 0xc ) ),iVar1 == 0 )) {
      if (*(int*)( param_1 + 8 ) != 1) {
         iVar1 = 0;
         if (*(int*)( param_1 + 8 ) == 2) {
            iVar1 = 0x11;
         }

         return iVar1;
      }

      iVar1 = 6;
   }

   return iVar1;
}
undefined4 BIO_ADDRINFO_sockaddr_size(long param_1) {
   undefined4 uVar1;
   uVar1 = 0;
   if (param_1 != 0) {
      uVar1 = *(undefined4*)( param_1 + 0x10 );
   }

   return uVar1;
}
undefined8 BIO_ADDRINFO_sockaddr(long param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (param_1 != 0) {
      uVar1 = *(undefined8*)( param_1 + 0x18 );
   }

   return uVar1;
}
undefined8 BIO_ADDRINFO_address(long param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (param_1 != 0) {
      uVar1 = *(undefined8*)( param_1 + 0x18 );
   }

   return uVar1;
}
void BIO_ADDRINFO_free(addrinfo *param_1) {
   addrinfo *paVar1;
   if (param_1 == (addrinfo*)0x0) {
      return;
   }

   if (param_1->ai_family == 1) {
      do {
         paVar1 = param_1->ai_next;
         CRYPTO_free(param_1->ai_addr);
         CRYPTO_free(param_1);
         param_1 = paVar1;
      }
 while ( paVar1 != (addrinfo*)0x0 );
      return;
   }

   freeaddrinfo(param_1);
   return;
}
undefined8 BIO_parse_hostserv(char *param_1, long *param_2, long *param_3, int param_4) {
   bool bVar1;
   char *pcVar2;
   char *pcVar3;
   size_t sVar4;
   size_t sVar5;
   long lVar6;
   undefined8 uVar7;
   size_t sVar8;
   if (*param_1 == '[') {
      pcVar2 = strchr(param_1, 0x5d);
      if (pcVar2 != (char*)0x0) {
         param_1 = param_1 + 1;
         sVar4 = (long)pcVar2 - (long)param_1;
         if (pcVar2[1] == '\0') goto LAB_001009c8;
         if (pcVar2[1] == ':') {
            sVar5 = strlen(pcVar2 + 2);
            pcVar3 = param_1;
            param_1 = pcVar2 + 2;
            sVar8 = sVar4;
            sVar4 = sVar5;
            goto LAB_001008f4;
         }

      }

      LAB_0010090a:ERR_new();
      ERR_set_debug("crypto/bio/bio_addr.c", 0x24e, "BIO_parse_hostserv");
      ERR_set_error(0x20, 0x82, 0);
      LAB_0010093a:uVar7 = 0;
   }
 else {
      pcVar2 = strrchr(param_1, 0x3a);
      pcVar3 = strchr(param_1, 0x3a);
      if (pcVar2 != pcVar3) {
         ERR_new();
         ERR_set_debug("crypto/bio/bio_addr.c", 0x24b, "BIO_parse_hostserv");
         ERR_set_error(0x20, 0x81, 0);
         return 0;
      }

      if (pcVar2 == (char*)0x0) {
         sVar4 = strlen(param_1);
         if (param_4 != 0) {
            LAB_00100a9c:bVar1 = false;
            goto LAB_00100a1e;
         }

         LAB_001009c8:if (param_2 != (long*)0x0) {
            pcVar3 = param_1;
            param_1 = (char*)0x0;
            sVar8 = sVar4;
            sVar4 = 0;
            goto LAB_001009d6;
         }

      }
 else {
         sVar8 = (long)pcVar2 - (long)param_1;
         sVar4 = strlen(pcVar2 + 1);
         pcVar3 = param_1;
         param_1 = pcVar2 + 1;
         LAB_001008f4:pcVar2 = strchr(param_1, 0x3a);
         if (pcVar2 != (char*)0x0) goto LAB_0010090a;
         if (param_2 == (long*)0x0) goto LAB_00100a9c;
         LAB_001009d6:if (( sVar8 == 0 ) || ( ( sVar8 == 1 && ( *pcVar3 == '*' ) ) )) {
            *param_2 = 0;
         }
 else {
            lVar6 = CRYPTO_strndup(pcVar3, sVar8, "crypto/bio/bio_addr.c", 0x234);
            *param_2 = lVar6;
            if (lVar6 == 0) goto LAB_0010093a;
         }

         bVar1 = true;
         LAB_00100a1e:if (( param_1 != (char*)0x0 ) && ( param_3 != (long*)0x0 )) {
            if (( sVar4 == 0 ) || ( ( sVar4 == 1 && ( *param_1 == '*' ) ) )) {
               *param_3 = 0;
            }
 else {
               lVar6 = CRYPTO_strndup(param_1, sVar4, "crypto/bio/bio_addr.c", 0x23e);
               *param_3 = lVar6;
               if (lVar6 == 0) {
                  if (bVar1) {
                     CRYPTO_free((void*)*param_2);
                     *param_2 = 0;
                     return 0;
                  }

                  goto LAB_0010093a;
               }

            }

         }

      }

      uVar7 = 1;
   }

   return uVar7;
}
undefined8 BIO_lookup_ex(char *param_1, char *param_2, int param_3, int param_4, int param_5, undefined4 param_6, addrinfo **param_7) {
   undefined1 auVar1[12];
   undefined1 auVar2[16];
   int __ecode;
   int iVar3;
   undefined4 uVar4;
   size_t sVar5;
   addrinfo *paVar6;
   long lVar7;
   sockaddr *psVar8;
   undefined8 uVar9;
   int *piVar10;
   char *pcVar11;
   long in_FS_OFFSET;
   undefined1 local_78[8];
   int iStack_70;
   undefined4 uStack_6c;
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 < 3) {
      if (param_4 < 0) {
         LAB_00100c18:ERR_new();
         ERR_set_debug("crypto/bio/bio_addr.c", 0x2b7, "BIO_lookup_ex");
         ERR_set_error(0x20, 0x83, 0);
         uVar9 = 0;
         goto LAB_00100bcf;
      }

      if (param_4 == 1) {
         sVar5 = strlen(param_1);
         paVar6 = (addrinfo*)CRYPTO_zalloc(0x30, "crypto/bio/bio_addr.c", 0x260);
         *param_7 = paVar6;
         if (paVar6 != (addrinfo*)0x0) {
            paVar6->ai_family = 1;
            paVar6->ai_socktype = param_5;
            paVar6->ai_protocol = 0;
            lVar7 = BIO_ADDR_new();
            if (lVar7 != 0) {
               BIO_ADDR_rawmake(lVar7, 1, param_1, sVar5, 0);
               paVar6 = *param_7;
               psVar8 = (sockaddr*)BIO_ADDR_sockaddr_noconst(lVar7);
               paVar6->ai_addr = psVar8;
            }

            (*param_7)->ai_next = (addrinfo*)0x0;
            uVar9 = 1;
            if ((*param_7)->ai_addr != (sockaddr*)0x0) goto LAB_00100bcf;
            BIO_ADDRINFO_free();
            *param_7 = (addrinfo*)0x0;
         }

         ERR_new();
         ERR_set_debug("crypto/bio/bio_addr.c", 0x2c0, "BIO_lookup_ex");
         ERR_set_error(0x20, 0x80020, 0);
         uVar9 = 0;
         goto LAB_00100bcf;
      }

      iVar3 = BIO_sock_init();
      if (iVar3 != 1) goto LAB_00100c0f;
      auVar1._4_4_ = param_5;
      auVar1._0_4_ = param_4;
      auVar1._8_4_ = param_6;
      auVar2._12_4_ = 0;
      auVar2._0_12_ = auVar1;
      _local_78 = auVar2 << 0x20;
      if (( param_1 == (char*)0x0 ) || ( param_4 != 0 )) goto LAB_00100c75;
      stack0xffffffffffffff8c = auVar1;
      local_78._0_4_ = 0x20;
      uVar4 = 0x21;
   }
 else {
      if (param_4 != 10) goto LAB_00100c18;
      iVar3 = BIO_sock_init();
      if (iVar3 != 1) {
         LAB_00100c0f:uVar9 = 0;
         goto LAB_00100bcf;
      }

      iStack_70 = param_5;
      local_78 = (undefined1[8])0xa00000000;
      uStack_6c = param_6;
      LAB_00100c75:uVar4 = 1;
   }

   local_58 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   if (param_3 == 1) {
      local_78._0_4_ = uVar4;
   }

   iVar3 = 0;
   while (true) {
      __ecode = getaddrinfo(param_1, param_2, (addrinfo*)local_78, param_7);
      if (__ecode == -10) break;
      if (__ecode == 0) {
         uVar9 = 1;
         goto LAB_00100bcf;
      }

      if (__ecode == -0xb) {
         ERR_new();
         ERR_set_debug("crypto/bio/bio_addr.c", 0x2e5, "BIO_lookup_ex");
         piVar10 = __errno_location();
         ERR_set_error(2, *piVar10, "calling getaddrinfo()");
         ERR_new();
         ERR_set_debug("crypto/bio/bio_addr.c", 0x2e7, "BIO_lookup_ex");
         ERR_set_error(0x20, 0x80002, 0);
         uVar9 = 0;
         goto LAB_00100bcf;
      }

      if (( _local_78 & (undefined1[16])0x20 ) == (undefined1[16])0x0) {
         ERR_new();
         uVar9 = 0x2fc;
         goto LAB_00100e21;
      }

      local_78._0_4_ = local_78._0_4_ & 0xffffffdf | 4;
      iVar3 = __ecode;
   }
;
   ERR_new();
   uVar9 = 0x2ec;
   LAB_00100e21:ERR_set_debug("crypto/bio/bio_addr.c", uVar9, "BIO_lookup_ex");
   if (iVar3 != 0) {
      __ecode = iVar3;
   }

   pcVar11 = gai_strerror(__ecode);
   ERR_set_error(0x20, 0x80002, pcVar11);
   uVar9 = 0;
   LAB_00100bcf:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void BIO_lookup(void) {
   BIO_lookup_ex();
   return;
}

