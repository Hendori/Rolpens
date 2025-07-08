void print_bio(void *param_1, int param_2, BIO *param_3) {
   BIO_write(param_3, param_1, param_2);
   return;
}
void ERR_print_errors_cb(cb *cb, void *u) {
   int iVar1;
   char *ptr;
   size_t sVar2;
   size_t sVar3;
   long lVar4;
   long lVar5;
   char *pcVar6;
   long in_FS_OFFSET;
   byte bVar7;
   uint local_1070;
   byte local_106c[4];
   undefined8 local_1068;
   undefined8 local_1060;
   undefined *local_1058;
   undefined8 local_1050;
   char local_1048[4104];
   long local_40;
   bVar7 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1068 = CRYPTO_THREAD_get_current_id();
   do {
      lVar4 = ERR_get_error_all(&local_1060, &local_1070, &local_1050, &local_1058, local_106c);
      if (lVar4 == 0) break;
      pcVar6 = local_1048;
      for (lVar5 = 0x200; lVar5 != 0; lVar5 = lVar5 + -1) {
         for (int i = 0; i < 8; i++) {
            pcVar6[i] = '\0';
         }

         pcVar6 = pcVar6 + (ulong)bVar7 * -0x10 + 8;
      }

      if (( local_106c[0] & 2 ) == 0) {
         local_1058 = &_LC1;
      }

      ptr = (char*)ossl_buf2hexstr_sep(&local_1068, 8, 0);
      pcVar6 = "<null>";
      if (ptr != (char*)0x0) {
         pcVar6 = ptr;
      }

      BIO_snprintf(local_1048, 0x1000, "%s:", pcVar6);
      sVar2 = strlen(local_1048);
      pcVar6 = local_1048 + sVar2;
      ossl_err_string_int(lVar4, local_1050, pcVar6, 0x1000 - sVar2);
      sVar3 = strlen(pcVar6);
      lVar4 = (long)( (int)sVar3 + (int)sVar2 );
      BIO_snprintf(local_1048 + lVar4, 0x1000 - lVar4, ":%s:%d:%s\n", local_1060, (ulong)local_1070, local_1058);
      CRYPTO_free(ptr);
      sVar2 = strlen(local_1048);
      iVar1 = ( *cb )(local_1048, sVar2, u);
   }
 while ( 0 < iVar1 );
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ERR_add_error_txt(char *param_1, char *param_2) {
   bool bVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   ulong uVar5;
   size_t sVar6;
   size_t sVar7;
   char *pcVar8;
   ulong uVar9;
   void *pvVar10;
   uint uVar11;
   char *__haystack;
   ulong uVar12;
   char *pcVar13;
   long in_FS_OFFSET;
   undefined4 local_60;
   byte local_5c[4];
   undefined8 local_58;
   undefined8 local_50;
   char *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_50 = 0;
   local_48 = (char*)0x0;
   uVar5 = ERR_peek_last_error();
   if (param_1 == (char*)0x0) {
      param_1 = "";
   }

   if (uVar5 == 0) {
      ERR_new();
      ERR_set_debug(&_LC1, 0, 0);
      ERR_set_error(1, 0, 0);
   }

   uVar11 = 2;
   if (( uVar5 & 0x80000000 ) == 0) {
      uVar11 = ( uint )(uVar5 >> 0x17) & 0xff;
   }

   LAB_00100329:do {
      ERR_peek_last_error_all(&local_58, &local_60, &local_50, &local_48, local_5c);
      if (( local_5c[0] & 2 ) != 0) {
         sVar7 = strlen(local_48);
         pcVar13 = param_1;
         if (sVar7 < 0xf9c) {
            uVar9 = 0xf9c - sVar7;
            goto LAB_001002c7;
         }

         uVar12 = 0;
         if (*param_1 != '\0') goto LAB_0010037b;
         LAB_001002f1:__haystack = param_2 + uVar12;
         sVar7 = strlen(param_2);
         pcVar8 = param_2 + sVar7;
         if (uVar12 < sVar7) goto LAB_00100478;
         LAB_0010030a:__haystack = pcVar8;
         ERR_add_error_data(2, pcVar13, param_2);
         goto LAB_00100320;
      }

      uVar9 = 0xf9c;
      sVar7 = 0;
      local_48 = "";
      pcVar13 = "";
      LAB_001002c7:sVar6 = strlen(param_1);
      uVar12 = 0xf9b - ( sVar7 + sVar6 );
      if (uVar9 <= sVar6) {
         uVar12 = 0;
      }

      if (*param_1 == '\0') goto LAB_001002f1;
      LAB_0010037b:pcVar8 = param_2;
      if (*param_2 == '\0') goto LAB_0010030a;
      do {
         __haystack = pcVar8;
         pcVar8 = strstr(__haystack, param_1);
         if (pcVar8 == (char*)0x0) {
            sVar7 = strlen(__haystack);
            bVar1 = false;
            pcVar8 = __haystack + sVar7;
            uVar9 = (long)pcVar8 - (long)param_2;
            LAB_001003df:if (uVar9 <= uVar12) {
               if (!bVar1) goto LAB_0010030a;
               sVar7 = strlen(param_1);
               pvVar10 = (void*)CRYPTO_strndup(param_2, pcVar8 + ( -(long)param_2 - sVar7 ), "crypto/err/err_prn.c", 0x85);
               if (pvVar10 == (void*)0x0) goto LAB_00100450;
               ERR_add_error_data(2, pcVar13, pvVar10);
               CRYPTO_free(pvVar10);
               param_2 = pcVar8;
               if (*pcVar8 == '\0') goto LAB_00100450;
               goto LAB_00100329;
            }

            break;
         }

         sVar7 = strlen(param_1);
         pcVar8 = pcVar8 + sVar7;
         uVar9 = (long)pcVar8 - (long)param_2;
         if (*pcVar8 == '\0') {
            bVar1 = true;
            goto LAB_001003df;
         }

      }
 while ( uVar9 <= uVar12 );
      LAB_00100478:if (param_2 != __haystack) {
         pvVar10 = (void*)CRYPTO_strndup(param_2, (long)__haystack - (long)param_2, "crypto/err/err_prn.c", 0x7b);
         if (pvVar10 == (void*)0x0) break;
         ERR_add_error_data(2, param_1, pvVar10);
         CRYPTO_free(pvVar10);
      }

      uVar4 = local_50;
      uVar3 = local_58;
      uVar2 = local_60;
      ERR_new();
      ERR_set_debug(uVar3, uVar2, uVar4);
      ERR_set_error(uVar11, uVar5 & 0xffffffff, 0);
      LAB_00100320:param_2 = __haystack;
   }
 while ( *__haystack != '\0' );
   LAB_00100450:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void ERR_add_error_mem_bio(undefined8 param_1, BIO *param_2) {
   int iVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != (BIO*)0x0 ) && ( lVar2= BIO_ctrl(param_2,3,0,&local_28),0 < lVar2 )) {
      if (*(char*)( local_28 + -1 + lVar2 ) != '\0') {
         iVar1 = BIO_write(param_2, &_LC1, 1);
         if (iVar1 < 1) goto LAB_001005a8;
         lVar2 = BIO_ctrl(param_2, 3, 0, &local_28);
      }

      if (1 < lVar2) {
         ERR_add_error_txt(param_1, local_28);
      }

   }

   LAB_001005a8:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void ERR_print_errors(BIO *bp) {
   ERR_print_errors_cb(print_bio, bp);
   return;
}
void ERR_print_errors_fp(FILE *fp) {
   BIO *a;
   a = BIO_new_fp(fp, 0);
   if (a != (BIO*)0x0) {
      ERR_print_errors_cb(print_bio, a);
      BIO_free(a);
      return;
   }

   return;
}

