void eat_alpha_numeric(long param_1, char *param_2) {
   char cVar1;
   ushort uVar2;
   long lVar3;
   lVar3 = (long)*param_2;
   if (-1 < *param_2) {
      LAB_00100010:do {
         uVar2 = *(ushort*)( *(long*)( param_1 + 8 ) + lVar3 * 2 );
         if (( uVar2 & 0x20 ) == 0) {
            if (( uVar2 & 0x307 ) == 0) {
               if (*(int*)( param_1 + 0x18 ) == 0) {
                  return;
               }
               if (( uVar2 & 0x1000 ) == 0) {
                  return;
               }
            }
            cVar1 = param_2[1];
            param_2 = param_2 + 1;
         } else {
            lVar3 = (long)param_2[1];
            if (( -1 < param_2[1] ) && ( ( *(byte*)( *(long*)( param_1 + 8 ) + lVar3 * 2 ) & 8 ) != 0 )) {
               param_2 = param_2 + 1;
               goto LAB_00100010;
            }
            cVar1 = param_2[2];
            param_2 = param_2 + 2;
         }
         lVar3 = (long)cVar1;
      } while ( -1 < cVar1 );
   }
   return;
}void lh_CONF_VALUE_doall_BIO_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_1813 = 0; i_1813 < 2; i_1813++) {
      /* WARNING: Could not recover jumptable at 0x00100074. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}ushort def_is_number(long param_1, char param_2) {
   ushort uVar1;
   uVar1 = 0;
   if (-1 < param_2) {
      uVar1 = *(ushort*)( *(long*)( param_1 + 8 ) + (long)param_2 * 2 ) & 1;
   }
   return uVar1;
}int def_to_int(undefined8 param_1, char param_2) {
   return param_2 + -0x30;
}undefined8 def_dump(long param_1, undefined8 param_2) {
   OPENSSL_LH_doall_arg_thunk(*(undefined8*)( param_1 + 0x10 ), lh_CONF_VALUE_doall_BIO_thunk, dump_value_doall_arg, param_2);
   return 1;
}void *def_create(long param_1) {
   int iVar1;
   void *ptr;
   ptr = CRYPTO_malloc(0x30, "crypto/conf/conf_def.c", 0x73);
   if (ptr != (void*)0x0) {
      iVar1 = ( **(code**)( param_1 + 0x10 ) )(ptr);
      if (iVar1 != 0) {
         return ptr;
      }
      CRYPTO_free(ptr);
   }
   return (void*)0x0;
}BIO *get_next_file(char *param_1, undefined8 *param_2) {
   long lVar1;
   int iVar2;
   size_t sVar3;
   char *__s;
   size_t sVar4;
   char *filename;
   BIO *pBVar5;
   sVar3 = strlen(param_1);
   LAB_00100188:do {
      __s = (char*)OPENSSL_DIR_read(param_2, param_1);
      if (__s == (char*)0x0) goto LAB_00100298;
      sVar4 = strlen(__s);
      if (sVar4 < 6) {
         if (sVar4 != 5) goto LAB_00100188;
         LAB_001001b6:iVar2 = OPENSSL_strcasecmp(__s + ( sVar4 - 4 ), &_LC2);
         if (iVar2 != 0) goto LAB_00100188;
      } else {
         iVar2 = OPENSSL_strcasecmp(__s + ( sVar4 - 5 ), ".conf");
         if (iVar2 != 0) goto LAB_001001b6;
      }
      lVar1 = sVar3 + 2 + sVar4;
      filename = (char*)CRYPTO_zalloc(lVar1, "crypto/conf/conf_def.c", 0x35b);
      if (filename == (char*)0x0) {
         LAB_00100298:OPENSSL_DIR_end(param_2);
         *param_2 = 0;
         return (BIO*)0x0;
      }
      if (*filename == '\0') {
         OPENSSL_strlcpy(filename, param_1, lVar1);
         OPENSSL_strlcat(filename, &_LC3, lVar1);
      }
      OPENSSL_strlcat(filename, __s, lVar1);
      pBVar5 = BIO_new_file(filename, "r");
      CRYPTO_free(filename);
      if (pBVar5 != (BIO*)0x0) {
         return pBVar5;
      }
   } while ( true );
}undefined8 str_copy(lhash_st_CONF_VALUE *param_1, char *param_2, undefined8 *param_3, char *param_4) {
   char *pcVar1;
   ushort uVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   BUF_MEM *str;
   size_t sVar6;
   undefined4 extraout_var;
   char *__s;
   undefined4 extraout_var_00;
   long lVar7;
   char *name;
   long lVar8;
   char *pcVar9;
   char cVar10;
   char *pcVar11;
   char cVar12;
   bool bVar13;
   char *local_60;
   str = BUF_MEM_new();
   if (str == (BUF_MEM*)0x0) {
      return 0;
   }
   sVar6 = strlen(param_4);
   iVar4 = BUF_MEM_grow(str, (long)( (int)sVar6 + 1 ));
   if (CONCAT44(extraout_var, iVar4) != 0) {
      cVar10 = '\0';
      cVar3 = *param_4;
      iVar4 = 0;
      lVar7 = *(long*)( param_1 + 2 );
      joined_r0x0010031b:do {
         if (-1 < cVar3) {
            LAB_00100321:uVar2 = *(ushort*)( lVar7 + (long)cVar3 * 2 );
            if (( uVar2 & 0x40 ) != 0) {
               lVar8 = (long)iVar4;
               pcVar9 = param_4;
               do {
                  param_4 = pcVar9 + 1;
                  cVar12 = *param_4;
                  if (-1 < cVar12) {
                     uVar2 = *(ushort*)( lVar7 + (long)cVar12 * 2 );
                     if (( ( uVar2 & 8 ) != 0 ) || ( cVar12 == cVar3 )) goto LAB_001005f8;
                     if (( uVar2 & 0x20 ) != 0) {
                        cVar12 = pcVar9[2];
                        param_4 = pcVar9 + 2;
                        if (( -1 < cVar12 ) && ( ( *(byte*)( lVar7 + (long)cVar12 * 2 ) & 8 ) != 0 )) goto LAB_001005f8;
                     }
                  }
                  str->data[lVar8] = cVar12;
                  lVar7 = *(long*)( param_1 + 2 );
                  lVar8 = lVar8 + 1;
                  pcVar9 = param_4;
               } while ( true );
            }
            if (( uVar2 & 0x400 ) != 0) {
               lVar8 = (long)iVar4;
               pcVar9 = param_4;
               do {
                  param_4 = pcVar9 + 1;
                  cVar12 = *param_4;
                  if (-1 < cVar12) {
                     iVar4 = (int)lVar8;
                     if (( *(byte*)( lVar7 + (long)cVar12 * 2 ) & 8 ) != 0) goto code_r0x00100669;
                     if (cVar12 == cVar3) {
                        if (pcVar9[2] != cVar3) goto LAB_00100690;
                        param_4 = pcVar9 + 2;
                     }
                  }
                  str->data[lVar8] = cVar12;
                  lVar7 = *(long*)( param_1 + 2 );
                  lVar8 = lVar8 + 1;
                  pcVar9 = param_4;
               } while ( true );
            }
            if (( uVar2 & 0x20 ) != 0) {
               cVar3 = param_4[1];
               if (-1 < cVar3) {
                  if (( *(byte*)( lVar7 + (long)cVar3 * 2 ) & 8 ) != 0) goto LAB_00100810;
                  if (cVar3 == 'r') {
                     cVar3 = '\r';
                  } else if (cVar3 == 'n') {
                     cVar3 = '\n';
                  } else if (cVar3 == 'b') {
                     cVar3 = '\b';
                  } else if (cVar3 == 't') {
                     cVar3 = '\t';
                  }
               }
               lVar7 = (long)iVar4;
               iVar4 = iVar4 + 1;
               str->data[lVar7] = cVar3;
               cVar3 = param_4[2];
               lVar7 = *(long*)( param_1 + 2 );
               param_4 = param_4 + 2;
               goto joined_r0x0010031b;
            }
            if (( uVar2 & 8 ) != 0) {
               LAB_00100810:str->data[iVar4] = '\0';
               CRYPTO_free((void*)*param_3);
               *param_3 = str->data;
               CRYPTO_free(str);
               return 1;
            }
            if (cVar3 != '$') goto LAB_001003a0;
            cVar12 = param_4[1];
            if (param_1[6].dummy == 0) {
               if (cVar12 == '{') {
                  cVar3 = '}';
               } else {
                  if (cVar12 != '(') {
                     name = param_4 + 1;
                     cVar3 = '\0';
                     pcVar11 = name;
                     if (-1 < cVar12) goto LAB_001006d4;
                     param_4[1] = '\0';
                     pcVar9 = name;
                     goto LAB_001007a2;
                  }
                  cVar3 = ')';
               }
               cVar12 = param_4[2];
               name = param_4 + 2;
               pcVar11 = name;
               if (-1 < cVar12) goto LAB_001006d4;
            } else {
               if (( cVar12 != '{' ) && ( cVar12 != '(' )) goto LAB_001003a0;
               bVar13 = cVar12 != '{';
               cVar12 = param_4[2];
               cVar3 = '}';
               if (bVar13) {
                  cVar3 = ')';
               }
               pcVar9 = param_4 + 2;
               pcVar11 = pcVar9;
               if (-1 < cVar12) goto LAB_00100470;
            }
            param_4[2] = '\0';
            goto LAB_001007d9;
         }
         LAB_001003a0:lVar7 = (long)iVar4;
         param_4 = param_4 + 1;
         iVar4 = iVar4 + 1;
         str->data[lVar7] = cVar3;
         cVar3 = *param_4;
         lVar7 = *(long*)( param_1 + 2 );
      } while ( true );
   }
   goto LAB_001003f0;
   LAB_001005f8:iVar4 = (int)lVar8;
   bVar13 = cVar3 == cVar12;
   cVar3 = cVar12;
   if (bVar13) goto LAB_00100610;
   goto LAB_00100321;
   LAB_00100610:cVar3 = param_4[1];
   param_4 = param_4 + 1;
   goto joined_r0x0010031b;
   code_r0x00100669:bVar13 = cVar12 == cVar3;
   cVar3 = cVar12;
   if (bVar13) {
      LAB_00100690:cVar3 = pcVar9[2];
      param_4 = pcVar9 + 2;
      goto joined_r0x0010031b;
   }
   goto LAB_00100321;
   while (true) {
      cVar12 = pcVar11[1];
      name = pcVar9;
      local_60 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
      if (cVar12 < '\0') break;
      LAB_00100470:if (( *(ushort*)( lVar7 + (long)cVar12 * 2 ) & 0x1107 ) == 0) goto LAB_001006e4;
   };
   goto LAB_0010048e;
   LAB_001006e4:name = pcVar9;
   local_60 = pcVar11;
   if (( cVar12 != ':' ) || ( pcVar11[1] != ':' )) goto LAB_0010048e;
   cVar12 = pcVar11[2];
   *pcVar11 = '\0';
   name = pcVar11 + 2;
   local_60 = name;
   if (-1 < cVar12) {
      do {
         uVar2 = *(ushort*)( *(long*)( param_1 + 2 ) + (long)cVar12 * 2 );
         if (( ( uVar2 & 0x107 ) == 0 ) && ( ( param_1[6].dummy == 0 || ( ( uVar2 & 0x1000 ) == 0 ) ) )) break;
         local_60 = local_60 + 1;
         cVar12 = *local_60;
      } while ( -1 < cVar12 );
      *local_60 = '\0';
      if (cVar3 == '\0') {
         __s = _CONF_get_string(param_1, pcVar9, name);
         cVar10 = ':';
         pcVar9 = local_60;
         goto LAB_001004e1;
      }
      cVar10 = ':';
      goto LAB_001004aa;
   }
   pcVar11[2] = '\0';
   if (cVar3 != '\0') goto LAB_001007d9;
   __s = _CONF_get_string(param_1, pcVar9, name);
   cVar10 = ':';
   pcVar9 = name;
   goto LAB_001004e1;
   while (true) {
      cVar12 = pcVar11[1];
      local_60 = pcVar11 + 1;
      pcVar11 = local_60;
      if (cVar12 < '\0') break;
      LAB_001006d4:pcVar9 = name;
      if (( *(ushort*)( lVar7 + (long)cVar12 * 2 ) & 0x107 ) == 0) goto LAB_001006e4;
   };
   LAB_0010048e:cVar12 = *local_60;
   *local_60 = '\0';
   pcVar9 = local_60;
   if (cVar3 == '\0') {
      LAB_001007a2:__s = _CONF_get_string(param_1, param_2, name);
      local_60 = pcVar9;
   } else {
      pcVar11 = (char*)0x0;
      pcVar9 = param_2;
      LAB_001004aa:if (cVar12 != cVar3) {
         LAB_001007d9:ERR_new();
         ERR_set_debug("crypto/conf/conf_def.c", 0x2e3, "str_copy");
         ERR_set_error(0xe, 0x66, 0);
         goto LAB_001003f0;
      }
      pcVar1 = local_60 + 1;
      __s = _CONF_get_string(param_1, pcVar9, name);
      pcVar9 = local_60;
      local_60 = pcVar1;
      if (pcVar11 != (char*)0x0) {
         LAB_001004e1:*pcVar11 = cVar10;
      }
   }
   *pcVar9 = cVar12;
   if (__s == (char*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/conf/conf_def.c", 0x2f7, "str_copy");
      ERR_set_error(0xe, 0x68, 0);
      goto LAB_001003f0;
   }
   sVar6 = strlen(__s);
   if ((char*)0x10000 < param_4 + sVar6 + ( str->length - (long)local_60 )) {
      ERR_new();
      ERR_set_debug("crypto/conf/conf_def.c", 0x2fc, "str_copy");
      ERR_set_error(0xe, 0x74, 0);
      goto LAB_001003f0;
   }
   iVar5 = BUF_MEM_grow_clean(str, (size_t)( param_4 + sVar6 + ( str->length - (long)local_60 ) ));
   if (CONCAT44(extraout_var_00, iVar5) != 0) {
      cVar3 = *__s;
      lVar7 = (long)iVar4;
      if (cVar3 != '\0') {
         do {
            lVar8 = lVar7;
            str->data[lVar8] = cVar3;
            cVar3 = __s[( lVar8 + 1 ) - (long)iVar4];
            lVar7 = lVar8 + 1;
         } while ( cVar3 != '\0' );
         iVar4 = (int)lVar8 + 1;
      }
      *pcVar9 = cVar12;
      lVar7 = *(long*)( param_1 + 2 );
      cVar3 = *local_60;
      param_4 = local_60;
      goto joined_r0x0010031b;
   }
   ERR_new();
   ERR_set_debug("crypto/conf/conf_def.c", 0x300, "str_copy");
   ERR_set_error(0xe, 0x80007, 0);
   LAB_001003f0:BUF_MEM_free(str);
   return 0;
}undefined8 def_destroy_data(CONF *param_1) {
   if (param_1 != (CONF*)0x0) {
      _CONF_free_data(param_1);
      return 1;
   }
   return 0;
}bool def_init_default(undefined8 *param_1) {
   if (param_1 != (undefined8*)0x0) {
      *(undefined1(*) [16])( param_1 + 2 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( param_1 + 4 ) = (undefined1[16])0x0;
      *param_1 = default_method;
      param_1[1] = CONF_type_default;
   }
   return param_1 != (undefined8*)0x0;
}bool def_init_WIN32(undefined8 *param_1) {
   if (param_1 != (undefined8*)0x0) {
      *(undefined1(*) [16])( param_1 + 2 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( param_1 + 4 ) = (undefined1[16])0x0;
      *param_1 = WIN32_method;
      param_1[1] = CONF_type_win32;
   }
   return param_1 != (undefined8*)0x0;
}undefined8 parsebool(undefined8 param_1, undefined4 *param_2) {
   int iVar1;
   iVar1 = OPENSSL_strcasecmp(param_1, &_LC5);
   if (( iVar1 == 0 ) || ( iVar1 = iVar1 == 0 )) {
      *param_2 = 1;
   } else {
      iVar1 = OPENSSL_strcasecmp(param_1, &_LC7);
      if (( iVar1 != 0 ) && ( iVar1 = iVar1 != 0 )) {
         ERR_new();
         ERR_set_debug("crypto/conf/conf_def.c", 0xca, "parsebool");
         ERR_set_error(0xe, 0x7a, 0);
         return 0;
      }
      *param_2 = 0;
   }
   return 1;
}undefined8 def_destroy(CONF *param_1) {
   if (param_1 != (CONF*)0x0) {
      _CONF_free_data(param_1);
      CRYPTO_free(param_1);
      return 1;
   }
   return 0;
}void dump_value_doall_arg(undefined8 *param_1, BIO *param_2) {
   if (param_1[1] != 0) {
      BIO_printf(param_2, "[%s] %s=%s\n", *param_1, param_1[1], param_1[2]);
      return;
   }
   BIO_printf(param_2, "[[%s]]\n", *param_1);
   return;
}undefined8 def_load_bio(CONF *param_1, BIO *param_2, long *param_3) {
   long lVar1;
   byte bVar2;
   ushort uVar3;
   lhash_st_CONF_VALUE *plVar4;
   bool bVar5;
   char *__s;
   int iVar6;
   int iVar7;
   uint uVar8;
   BUF_MEM *str;
   byte *pbVar9;
   undefined4 extraout_var;
   ulong uVar10;
   BIO *pBVar11;
   char *pcVar12;
   size_t sVar13;
   size_t sVar14;
   char *__s_00;
   byte *pbVar15;
   CONF_VALUE *value;
   CONF_VALUE *section;
   BIO *a;
   int *piVar16;
   byte bVar17;
   uint uVar18;
   byte *pbVar19;
   byte *pbVar20;
   short *__s_01;
   void *pvVar21;
   byte bVar22;
   undefined8 uVar23;
   ulong uVar24;
   CONF *pCVar25;
   byte *pbVar26;
   char *pcVar27;
   long in_FS_OFFSET;
   bool bVar28;
   long local_160;
   long local_138;
   CONF_VALUE *local_120;
   byte *local_100;
   long local_f8;
   char *local_f0;
   stat local_e8;
   undefined2 local_58;
   undefined1 local_56;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar4 = param_1->data;
   local_100 = (byte*)0x0;
   local_f8 = 0;
   str = BUF_MEM_new();
   if (str == (BUF_MEM*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/conf/conf_def.c", 0xea, "def_load_bio");
      ERR_set_error(0xe, 0x80007, 0);
      LAB_00101458:pbVar9 = (byte*)0x0;
   } else {
      pbVar9 = (byte*)CRYPTO_strdup("default", "crypto/conf/conf_def.c", 0xee);
      local_100 = pbVar9;
      if (pbVar9 == (byte*)0x0) goto LAB_00101458;
      iVar6 = _CONF_new_data(param_1);
      if (iVar6 == 0) {
         ERR_new();
         ERR_set_debug("crypto/conf/conf_def.c", 0xf3, "def_load_bio");
         ERR_set_error(0xe, 0x8000e, 0);
      } else {
         local_120 = _CONF_new_section(param_1, (char*)pbVar9);
         if (local_120 != (CONF_VALUE*)0x0) {
            bVar28 = true;
            bVar5 = false;
            local_138 = 0;
            iVar6 = 0;
            local_160 = 0;
            pBVar11 = param_2;
            pcVar12 = (char*)0x0;
            while (iVar7 = BUF_MEM_grow(str, (long)( iVar6 + 0x200 )),param_2 = pBVar11,pcVar27 = pcVar12,CONCAT44(extraout_var, iVar7) != 0) {
               __s_01 = (short*)( str->data + iVar6 );
               *(undefined1*)__s_01 = 0;
               if (pBVar11 != (BIO*)0x0) goto LAB_00100d5b;
               while (true) {
                  *(undefined1*)( (long)__s_01 + 0x1ff ) = 0;
                  uVar10 = strlen((char*)__s_01);
                  if (bVar28) {
                     local_56 = 0xbf;
                     local_58 = 0xbbef;
                     iVar7 = (int)uVar10;
                     if (2 < iVar7) {
                        if (( *__s_01 != -0x4411 ) || ( (char)__s_01[1] != -0x41 )) goto LAB_00100ca4;
                        memmove(__s_01, (void*)( (long)__s_01 + 3 ), (long)(int)( iVar7 - 3U ));
                        uVar10 = ( ulong )(iVar7 - 3U);
                        *(undefined1*)( (long)__s_01 + (long)iVar7 + -3 ) = 0;
                     }
                  }
                  uVar8 = (uint)uVar10;
                  if (uVar8 != 0 || bVar5) break;
                  pcVar12 = pcVar27;
                  if (local_f8 == 0) {
                     LAB_00100ed5:pBVar11 = (BIO*)OPENSSL_sk_pop(local_160);
                     if (pBVar11 == (BIO*)0x0) {
                        BUF_MEM_free(str);
                        CRYPTO_free(local_100);
                        OPENSSL_sk_free(local_160);
                        uVar23 = 1;
                        goto LAB_00100e94;
                     }
                  } else {
                     pBVar11 = (BIO*)get_next_file(pcVar27, &local_f8);
                     if (pBVar11 == (BIO*)0x0) {
                        pcVar12 = (char*)0x0;
                        CRYPTO_free(pcVar27);
                        goto LAB_00100ed5;
                     }
                  }
                  BIO_vfree(param_2);
                  bVar28 = false;
                  LAB_00100d5b:iVar7 = BIO_gets(pBVar11, (char*)__s_01, 0x1ff);
                  param_2 = pBVar11;
                  pcVar27 = pcVar12;
                  if (iVar7 < 0) goto LAB_00100d73;
               };
               if ((int)uVar8 < 1) {
                  bVar28 = true;
                  uVar18 = uVar8;
                  LAB_00100cd1:iVar6 = iVar6 + uVar18;
                  if (( uVar8 == 0 ) || ( bVar5 = !bVar28 )) goto LAB_00100f98;
               } else {
                  LAB_00100ca4:uVar8 = (uint)uVar10;
                  pcVar12 = (char*)( (long)__s_01 + (long)(int)uVar8 + -1 );
                  uVar10 = uVar10 & 0xffffffff;
                  do {
                     uVar18 = (uint)uVar10;
                     if (( *pcVar12 != '\r' ) && ( *pcVar12 != '\n' )) {
                        bVar28 = uVar18 == uVar8;
                        goto LAB_00100cd1;
                     }
                     pcVar12 = pcVar12 + -1;
                     uVar18 = uVar18 - 1;
                     uVar10 = (ulong)uVar18;
                  } while ( uVar18 != 0 );
                  LAB_00100f98:*(undefined1*)( (long)__s_01 + (long)(int)uVar18 ) = 0;
                  local_138 = local_138 + 1;
                  pbVar26 = (byte*)str->data;
                  if (iVar6 < 1) {
                     pvVar21 = param_1->meth_data;
                  } else {
                     bVar17 = pbVar26[(long)iVar6 + -1];
                     pvVar21 = param_1->meth_data;
                     if (( ( -1 < (char)bVar17 ) && ( ( *(byte*)( (long)pvVar21 + (long)(char)bVar17 * 2 ) & 0x20 ) != 0 ) ) && ( ( iVar6 == 1 || ( ( bVar17 = ( pbVar26 + (long)iVar6 + -1 )[-1] ),(char)bVar17 < '\0' || ( ( *(byte*)( (long)pvVar21 + (long)(char)bVar17 * 2 ) & 0x20 ) == 0 ) ) ) )) {
                        iVar6 = iVar6 + -1;
                        bVar5 = true;
                        goto LAB_00100ceb;
                     }
                  }
                  bVar2 = *pbVar26;
                  pbVar9 = pbVar26;
                  bVar17 = bVar2;
                  while (true) {
                     pbVar20 = pbVar9;
                     if ((char)bVar17 < '\0') goto LAB_00100ffc;
                     uVar3 = *(ushort*)( (long)pvVar21 + (long)(char)bVar17 * 2 );
                     if (( uVar3 & 0x800 ) != 0) break;
                     if (( uVar3 & 0x10 ) == 0) {
                        uVar10 = ( ulong ) * pbVar9;
                        LAB_00101004:do {
                           pbVar20 = pbVar9;
                           if (-1 < (char)uVar10) {
                              uVar24 = (long)(char)uVar10;
                              LAB_0010100c:do {
                                 uVar3 = *(ushort*)( (long)pvVar21 + uVar24 * 2 );
                                 if (( uVar3 & 0x80 ) != 0) goto LAB_00101499;
                                 bVar17 = (byte)uVar10;
                                 if (( uVar3 & 0x400 ) != 0) {
                                    do {
                                       do {
                                          bVar22 = pbVar20[1];
                                          pbVar20 = pbVar20 + 1;
                                       } while ( (char)bVar22 < '\0' );
                                       do {
                                          uVar10 = (ulong)bVar22;
                                          uVar24 = (ulong)(char)bVar22;
                                          if (( *(byte*)( (long)pvVar21 + uVar24 * 2 ) & 8 ) != 0) {
                                             if (bVar22 != bVar17) goto LAB_0010100c;
                                             goto LAB_00100ffc;
                                          }
                                          if (bVar22 != bVar17) break;
                                          if (bVar17 != pbVar20[1]) goto LAB_00100ffc;
                                          bVar22 = pbVar20[2];
                                          pbVar20 = pbVar20 + 2;
                                       } while ( -1 < (char)bVar22 );
                                    } while ( true );
                                 }
                                 if (( uVar3 & 0x40 ) != 0) {
                                    do {
                                       do {
                                          bVar22 = pbVar20[1];
                                          pbVar20 = pbVar20 + 1;
                                       } while ( (char)bVar22 < '\0' );
                                       do {
                                          uVar3 = *(ushort*)( (long)pvVar21 + (long)(char)bVar22 * 2 );
                                          if (( uVar3 & 8 ) != 0) {
                                             if (bVar22 == bVar17) goto LAB_00100ffc;
                                             uVar10 = (ulong)(char)bVar22;
                                             uVar24 = uVar10;
                                             goto LAB_0010100c;
                                          }
                                          if (bVar22 == bVar17) goto LAB_00100ffc;
                                          if (( uVar3 & 0x20 ) == 0) break;
                                          pbVar9 = pbVar20 + 1;
                                          bVar22 = pbVar20[1];
                                          if (( -1 < (char)bVar22 ) && ( ( *(byte*)( (long)pvVar21 + (long)(char)bVar22 * 2 ) & 8 ) != 0 )) {
                                             uVar10 = (ulong)bVar22;
                                             goto LAB_00101004;
                                          }
                                          bVar22 = pbVar20[2];
                                          pbVar20 = pbVar20 + 2;
                                       } while ( -1 < (char)bVar22 );
                                    } while ( true );
                                 }
                                 if (( uVar3 & 0x20 ) == 0) {
                                    if (( uVar3 & 8 ) != 0) goto joined_r0x00101041;
                                    break;
                                 }
                                 bVar17 = pbVar20[1];
                                 uVar10 = (ulong)bVar17;
                                 if (( (char)bVar17 < '\0' ) || ( ( *(byte*)( (long)pvVar21 + (long)(char)bVar17 * 2 ) & 8 ) == 0 )) {
                                    uVar10 = (ulong)pbVar20[2];
                                    pbVar9 = pbVar20 + 2;
                                    goto LAB_00101004;
                                 }
                                 pbVar20 = pbVar20 + 1;
                                 uVar24 = (long)(char)bVar17;
                              } while ( true );
                           }
                           LAB_00100ffc:uVar10 = (ulong)pbVar20[1];
                           pbVar9 = pbVar20 + 1;
                        } while ( true );
                     }
                     bVar17 = pbVar9[1];
                     pbVar9 = pbVar9 + 1;
                  };
                  LAB_00101499:*pbVar20 = 0;
                  bVar2 = *pbVar26;
                  pvVar21 = param_1->meth_data;
                  joined_r0x00101041:pBVar11 = param_2;
                  if (-1 < (char)bVar2) {
                     uVar3 = *(ushort*)( (long)pvVar21 + (long)(char)bVar2 * 2 );
                     if (( ( uVar3 & 0x10 ) != 0 ) && ( ( uVar3 & 8 ) == 0 )) goto code_r0x0010105c;
                     if (( *(byte*)( (long)pvVar21 + (long)(char)bVar2 * 2 ) & 8 ) != 0) goto LAB_0010155c;
                     if (bVar2 == 0x5b) {
                        bVar17 = pbVar26[1];
                        while (( ( pbVar9 = pbVar26 + 1 ),pbVar20 = pbVar9,pCVar25 = param_1,-1 < (char)bVar17 && ( uVar3 = *(ushort*)( (long)pvVar21 + (long)(char)bVar17 * 2 )(uVar3 & 0x10) != 0 ) ) && ( ( uVar3 & 8 ) == 0 )) {
                           bVar17 = pbVar26[2];
                           pbVar26 = pbVar9;
                        };
                        do {
                           pbVar15 = (byte*)eat_alpha_numeric(pCVar25, pbVar20);
                           bVar17 = *pbVar15;
                           pbVar26 = pbVar15;
                           while (-1 < (char)bVar17) {
                              uVar3 = *(ushort*)( (long)pvVar21 + (long)(char)bVar17 * 2 );
                              if (( ( uVar3 & 0x10 ) == 0 ) || ( ( uVar3 & 8 ) != 0 )) {
                                 if (bVar17 == 0x5d) {
                                    *pbVar15 = 0;
                                    iVar6 = str_copy(param_1, 0, &local_100, pbVar9);
                                    pbVar9 = local_100;
                                    if (iVar6 == 0) goto LAB_00100d73;
                                    bVar5 = false;
                                    local_120 = _CONF_get_section(param_1, (char*)local_100);
                                    iVar6 = 0;
                                    if (( local_120 != (CONF_VALUE*)0x0 ) || ( local_120 = _CONF_new_section(param_1, (char*)pbVar9) ),local_120 != (CONF_VALUE*)0x0) goto LAB_00100ceb;
                                    value = (CONF_VALUE*)0x0;
                                    ERR_new();
                                    ERR_set_debug("crypto/conf/conf_def.c", 0x178, "def_load_bio");
                                    ERR_set_error(0xe, 0x67, 0);
                                    goto LAB_00100d80;
                                 }
                                 break;
                              }
                              bVar17 = pbVar26[1];
                              pbVar26 = pbVar26 + 1;
                           };
                        } while ( ( pbVar26 != pbVar20 ) && ( pbVar20 = bVar17 != 0 ) );
                        ERR_new();
                        ERR_set_debug("crypto/conf/conf_def.c", 0x16f, "def_load_bio");
                        uVar23 = 100;
                        goto LAB_00101654;
                     }
                  }
                  pbVar9 = (byte*)eat_alpha_numeric(param_1, pbVar26);
                  bVar17 = *pbVar9;
                  pbVar20 = pbVar9;
                  pbVar15 = local_100;
                  if (bVar17 == 0x3a) {
                     if (pbVar9[1] != 0x3a) goto LAB_00101094;
                     *pbVar9 = 0;
                     pbVar19 = pbVar9 + 2;
                     pCVar25 = param_1;
                     pbVar9 = (byte*)eat_alpha_numeric(param_1, pbVar19);
                     pvVar21 = pCVar25->meth_data;
                     bVar17 = *pbVar9;
                     pbVar20 = pbVar9;
                     pbVar15 = pbVar26;
                     pbVar26 = pbVar19;
                  }
                  while (-1 < (char)bVar17) {
                     LAB_00101094:uVar3 = *(ushort*)( (long)pvVar21 + (long)(char)bVar17 * 2 );
                     if (( ( uVar3 & 0x10 ) == 0 ) || ( ( uVar3 & 8 ) != 0 )) break;
                     pbVar19 = pbVar9 + 1;
                     pbVar9 = pbVar9 + 1;
                     bVar17 = *pbVar19;
                  };
                  iVar6 = strncmp((char*)pbVar26, ".pragma", 7);
                  if (iVar6 == 0) {
                     pbVar26 = pbVar26 + 7;
                     if (pbVar9 == pbVar26) {
                        if (bVar17 != 0x3d) {
                           iVar6 = strncmp((char*)pbVar9, ".include", 8);
                           if (iVar6 != 0) goto LAB_00101abc;
                           goto LAB_00101120;
                        }
                        LAB_00101bc5:bVar17 = pbVar9[1];
                        while (( ( pbVar9 = pbVar9 + 1 ),pbVar26 = pbVar9,-1 < (char)bVar17 && ( uVar3 = *(ushort*)( (long)pvVar21 + (long)(char)bVar17 * 2 )(uVar3 & 0x10) != 0 ) ) && ( ( uVar3 & 8 ) == 0 )) {
                           bVar17 = pbVar9[1];
                        };
                     } else {
                        pbVar26 = pbVar9;
                        if (bVar17 == 0x3d) goto LAB_00101bc5;
                     }
                     while (( (char)*pbVar9 < '\0' || ( ( *(byte*)( (long)pvVar21 + (long)(char)*pbVar9 * 2 ) & 8 ) == 0 ) )) {
                        pbVar9 = pbVar9 + 1;
                     };
                     pbVar9 = pbVar9 + -1;
                     if (pbVar26 <= pbVar9) {
                        do {
                           if (( (char)*pbVar9 < '\0' ) || ( ( *(byte*)( (long)pvVar21 + (long)(char)*pbVar9 * 2 ) & 0x10 ) == 0 )) break;
                           pbVar9 = pbVar9 + -1;
                        } while ( pbVar26 + -1 != pbVar9 );
                     }
                     pbVar9[1] = 0;
                     pbVar9 = (byte*)strchr((char*)pbVar26, 0x3a);
                     if (( ( pbVar9 == (byte*)0x0 ) || ( pbVar26 == pbVar9 ) ) || ( pbVar9[1] == 0 )) {
                        ERR_new();
                        ERR_set_debug("crypto/conf/conf_def.c", 0x196, "def_load_bio");
                        uVar23 = 0x7a;
                        goto LAB_00101654;
                     }
                     *pbVar9 = 0;
                     pbVar20 = pbVar26;
                     while (( (char)*pbVar20 < '\0' || ( ( *(byte*)( (long)param_1->meth_data + (long)(char)*pbVar20 * 2 ) & 8 ) == 0 ) )) {
                        pbVar20 = pbVar20 + 1;
                     };
                     pbVar20 = pbVar20 + -1;
                     if (pbVar26 <= pbVar20) {
                        do {
                           if (( (char)*pbVar20 < '\0' ) || ( ( *(byte*)( (long)param_1->meth_data + (long)(char)*pbVar20 * 2 ) & 0x10 ) == 0 )) break;
                           pbVar20 = pbVar20 + -1;
                        } while ( pbVar26 + -1 != pbVar20 );
                     }
                     pbVar20[1] = 0;
                     bVar17 = pbVar9[1];
                     while (( ( pbVar20 = pbVar9 + 1 ),-1 < (char)bVar17 && ( uVar3 = *(ushort*)( (long)param_1->meth_data + (long)(char)bVar17 * 2 )(uVar3 & 0x10) != 0 ) ) && ( ( uVar3 & 8 ) == 0 )) {
                        bVar17 = pbVar9[2];
                        pbVar9 = pbVar20;
                     };
                     iVar6 = strcmp((char*)pbVar26, "dollarid");
                     if (iVar6 != 0) {
                        iVar6 = strcmp((char*)pbVar26, "abspath");
                        if (iVar6 == 0) {
                           iVar6 = parsebool(pbVar20, (undefined1*)( (long)&param_1[1].meth + 4 ));
                           if (iVar6 == 0) goto LAB_00100d73;
                        } else {
                           iVar6 = strcmp((char*)pbVar26, "includedir");
                           if (iVar6 == 0) {
                              CRYPTO_free(param_1[1].meth_data);
                              pcVar12 = CRYPTO_strdup((char*)pbVar20, "crypto/conf/conf_def.c", 0x1ad);
                              param_1[1].meth_data = pcVar12;
                              if (pcVar12 == (char*)0x0) {
                                 value = (CONF_VALUE*)0x0;
                                 pbVar9 = local_100;
                                 goto LAB_00100d80;
                              }
                           }
                        }
                        bVar5 = false;
                        iVar6 = 0;
                        goto LAB_00100ceb;
                     }
                     iVar6 = parsebool(pbVar20, param_1 + 1);
                     if (iVar6 == 0) {
                        LAB_00100d73:value = (CONF_VALUE*)0x0;
                        param_2 = pBVar11;
                        pbVar9 = local_100;
                        goto LAB_00100d80;
                     }
                  } else {
                     iVar6 = strncmp((char*)pbVar26, ".include", 8);
                     if (iVar6 == 0) {
                        LAB_00101120:if (( pbVar9 == pbVar26 + 8 ) && ( bVar17 != 0x3d )) {
                           LAB_00101abc:ERR_new();
                           ERR_set_debug("crypto/conf/conf_def.c", 0x20d, "def_load_bio");
                           ERR_set_error(0xe, 0x65, "HERE-->%s", pbVar9);
                        } else {
                           local_f0 = (char*)0x0;
                           pcVar12 = (char*)ossl_safe_getenv("OPENSSL_CONF_INCLUDE");
                           if (pcVar12 == (char*)0x0) {
                              pcVar12 = (char*)param_1[1].meth_data;
                           }
                           if (*pbVar9 == 0x3d) {
                              bVar17 = pbVar9[1];
                              pbVar9 = pbVar9 + 1;
                              if (-1 < (char)bVar17) {
                                 do {
                                    uVar3 = *(ushort*)( (long)param_1->meth_data + (long)(char)bVar17 * 2 );
                                    if (( ( uVar3 & 0x10 ) == 0 ) || ( ( uVar3 & 8 ) != 0 )) break;
                                    bVar17 = pbVar9[1];
                                    pbVar9 = pbVar9 + 1;
                                 } while ( -1 < (char)bVar17 );
                              }
                           }
                           pbVar26 = pbVar9;
                           while (( (char)*pbVar26 < '\0' || ( ( *(byte*)( (long)param_1->meth_data + (long)(char)*pbVar26 * 2 ) & 8 ) == 0 ) )) {
                              pbVar26 = pbVar26 + 1;
                           };
                           pbVar26 = pbVar26 + -1;
                           if (pbVar9 <= pbVar26) {
                              do {
                                 if (( (char)*pbVar26 < '\0' ) || ( ( *(byte*)( (long)param_1->meth_data + (long)(char)*pbVar26 * 2 ) & 0x10 ) == 0 )) break;
                                 pbVar26 = pbVar26 + -1;
                              } while ( pbVar9 + -1 != pbVar26 );
                           }
                           pbVar26[1] = 0;
                           iVar6 = str_copy(param_1, pbVar15, &local_f0, pbVar9);
                           __s = local_f0;
                           if (iVar6 != 0) {
                              __s_00 = local_f0;
                              if (( pcVar12 != (char*)0x0 ) && ( *local_f0 != '/' )) {
                                 sVar13 = strlen(pcVar12);
                                 sVar14 = strlen(__s);
                                 lVar1 = sVar13 + 2 + sVar14;
                                 __s_00 = (char*)CRYPTO_malloc((int)lVar1, "crypto/conf/conf_def.c", 0x1d8);
                                 if (__s_00 == (char*)0x0) {
                                    CRYPTO_free(__s);
                                    goto LAB_00101a97;
                                 }
                                 OPENSSL_strlcpy(__s_00, pcVar12, lVar1);
                                 if (( *__s_00 == '\0' ) || ( sVar13 = strlen(__s_00) ),__s_00[sVar13 - 1] != '/') {
                                    OPENSSL_strlcat(__s_00, &_LC3, lVar1);
                                 }
                                 OPENSSL_strlcat(__s_00, __s, lVar1);
                                 CRYPTO_free(__s);
                              }
                              if (( *(int*)( (long)&param_1[1].meth + 4 ) == 0 ) || ( *__s_00 == '/' )) {
                                 iVar6 = stat(__s_00, &local_e8);
                                 if (iVar6 < 0) {
                                    ERR_new();
                                    ERR_set_debug("crypto/conf/conf_def.c", 0x32d, "process_include");
                                    piVar16 = __errno_location();
                                    ERR_set_error(2, *piVar16, "calling stat(%s)", __s_00);
                                    joined_r0x00101c3b:if (__s_00 != pcVar27) {
                                       CRYPTO_free(__s_00);
                                    }
                                 } else if (( local_e8.st_mode & 0xf000 ) == 0x4000) {
                                    if (local_f8 != 0) {
                                       ERR_new();
                                       ERR_set_debug("crypto/conf/conf_def.c", 0x334, "process_include");
                                       ERR_set_error(0xe, 0x6f, &_LC19, __s_00);
                                       goto joined_r0x00101c3b;
                                    }
                                    a = (BIO*)get_next_file(__s_00, &local_f8);
                                    if (a != (BIO*)0x0) goto LAB_00101a3b;
                                    if (__s_00 != pcVar27) {
                                       CRYPTO_free(__s_00);
                                    }
                                 } else {
                                    a = BIO_new_file(__s_00, "r");
                                    if (__s_00 != pcVar27) {
                                       CRYPTO_free(__s_00);
                                    }
                                    __s_00 = pcVar27;
                                    if (a != (BIO*)0x0) {
                                       LAB_00101a3b:pcVar27 = __s_00;
                                       if (( local_160 == 0 ) && ( local_160 = local_160 == 0 )) {
                                          ERR_new();
                                          uVar23 = 0x1fe;
                                       } else {
                                          iVar6 = OPENSSL_sk_push(local_160, param_2);
                                          pBVar11 = a;
                                          if (iVar6 != 0) goto LAB_00101314;
                                          ERR_new();
                                          uVar23 = 0x204;
                                       }
                                       ERR_set_debug("crypto/conf/conf_def.c", uVar23, "def_load_bio");
                                       ERR_set_error(0xe, 0x8000f, 0);
                                       BIO_free(a);
                                       goto LAB_00101a97;
                                    }
                                 }
                                 LAB_00101314:param_2 = pBVar11;
                                 iVar6 = 0;
                                 bVar5 = false;
                                 goto LAB_00100ceb;
                              }
                              ERR_new();
                              ERR_set_debug("crypto/conf/conf_def.c", 0x1e9, "def_load_bio");
                              ERR_set_error(0xe, 0x7d, 0);
                              CRYPTO_free(__s_00);
                           }
                        }
                        LAB_00101a97:value = (CONF_VALUE*)0x0;
                        pbVar9 = local_100;
                        goto LAB_00100d80;
                     }
                     if (bVar17 != 0x3d) goto LAB_00101abc;
                     *pbVar20 = 0;
                     bVar17 = pbVar9[1];
                     pvVar21 = param_1->meth_data;
                     while (( ( pbVar20 = pbVar9 + 1 ),pbVar19 = pbVar20,-1 < (char)bVar17 && ( uVar3 = *(ushort*)( (long)pvVar21 + (long)(char)bVar17 * 2 )(uVar3 & 0x10) != 0 ) ) && ( ( uVar3 & 8 ) == 0 )) {
                        bVar17 = pbVar9[2];
                        pbVar9 = pbVar20;
                     };
                     while (( (char)*pbVar19 < '\0' || ( ( *(byte*)( (long)pvVar21 + (long)(char)*pbVar19 * 2 ) & 8 ) == 0 ) )) {
                        pbVar19 = pbVar19 + 1;
                     };
                     pbVar19 = pbVar19 + -1;
                     if (pbVar20 <= pbVar19) {
                        do {
                           if (( (char)*pbVar19 < '\0' ) || ( ( *(byte*)( (long)pvVar21 + (long)(char)*pbVar19 * 2 ) & 0x10 ) == 0 )) break;
                           pbVar19 = pbVar19 + -1;
                        } while ( pbVar9 != pbVar19 );
                     }
                     pbVar19[1] = 0;
                     value = (CONF_VALUE*)CRYPTO_malloc(0x18, "crypto/conf/conf_def.c", 0x216);
                     pbVar9 = local_100;
                     if (value == (CONF_VALUE*)0x0) goto LAB_00100d80;
                     pcVar12 = CRYPTO_strdup((char*)pbVar26, "crypto/conf/conf_def.c", 0x218);
                     value->value = (char*)0x0;
                     value->name = pcVar12;
                     if (( pcVar12 == (char*)0x0 ) || ( iVar6 = str_copy(param_1, pbVar15, &value->value, pbVar20) ),iVar6 == 0) goto LAB_00100d80;
                     iVar6 = strcmp((char*)pbVar15, (char*)pbVar9);
                     section = local_120;
                     if (( iVar6 != 0 ) && ( ( section = _CONF_get_section(param_1, (char*)pbVar15) ),section == (CONF_VALUE*)0x0 && ( section = _CONF_new_section(param_1, (char*)pbVar15) ),section == (CONF_VALUE*)0x0 )) {
                        ERR_new();
                        ERR_set_debug("crypto/conf/conf_def.c", 0x224, "def_load_bio");
                        ERR_set_error(0xe, 0x67, 0);
                        goto LAB_00100d80;
                     }
                     iVar6 = _CONF_add_string(param_1, section, value);
                     if (iVar6 == 0) {
                        ERR_new();
                        ERR_set_debug("crypto/conf/conf_def.c", 0x22b, "def_load_bio");
                        ERR_set_error(0xe, 0x8000e, 0);
                        goto LAB_00100d80;
                     }
                  }
                  LAB_0010155c:iVar6 = 0;
                  bVar5 = false;
               }
               LAB_00100ceb:bVar28 = false;
               pBVar11 = param_2;
               pcVar12 = pcVar27;
            };
            ERR_new();
            ERR_set_debug("crypto/conf/conf_def.c", 0x101, "def_load_bio");
            uVar23 = 0x80007;
            LAB_00101654:value = (CONF_VALUE*)0x0;
            ERR_set_error(0xe, uVar23, 0);
            pbVar9 = local_100;
            goto LAB_00100d80;
         }
         ERR_new();
         ERR_set_debug("crypto/conf/conf_def.c", 0xf9, "def_load_bio");
         ERR_set_error(0xe, 0x67, 0);
      }
   }
   local_138 = 0;
   pcVar27 = (char*)0x0;
   local_160 = 0;
   value = (CONF_VALUE*)0x0;
   LAB_00100d80:BUF_MEM_free(str);
   CRYPTO_free(pbVar9);
   while (iVar6 = OPENSSL_sk_num(local_160),0 < iVar6) {
      pBVar11 = (BIO*)OPENSSL_sk_pop(local_160);
      BIO_vfree(param_2);
      param_2 = pBVar11;
   };
   OPENSSL_sk_free();
   CRYPTO_free(pcVar27);
   if (local_f8 != 0) {
      OPENSSL_DIR_end(&local_f8);
   }
   if (param_3 != (long*)0x0) {
      *param_3 = local_138;
   }
   BIO_snprintf((char*)&local_58, 0x18, "%ld", local_138);
   ERR_add_error_data(2, "line ", &local_58);
   if (param_1->data != plVar4) {
      CONF_free(param_1->data);
      param_1->data = (lhash_st_CONF_VALUE*)0x0;
   }
   if (value != (CONF_VALUE*)0x0) {
      CRYPTO_free(value->name);
      CRYPTO_free(value->value);
      CRYPTO_free(value);
   }
   uVar23 = 0;
   LAB_00100e94:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar23;
   code_r0x0010105c:bVar2 = pbVar26[1];
   pbVar26 = pbVar26 + 1;
   goto joined_r0x00101041;
}undefined4 def_load(undefined8 param_1, char *param_2, undefined8 param_3) {
   undefined4 uVar1;
   uint uVar2;
   BIO *a;
   ulong uVar3;
   a = BIO_new_file(param_2, "rb");
   if (a != (BIO*)0x0) {
      uVar1 = def_load_bio(param_1, a, param_3);
      BIO_free(a);
      return uVar1;
   }
   uVar3 = ERR_peek_last_error();
   uVar2 = (uint)uVar3 & 0x7fffffff;
   if (( uVar3 & 0x80000000 ) == 0) {
      uVar2 = (uint)uVar3 & 0x7fffff;
   }
   if (uVar2 == 0x80) {
      ERR_new();
      ERR_set_debug("crypto/conf/conf_def.c", 0xb3, "def_load");
      ERR_set_error(0xe, 0x72, 0);
   } else {
      ERR_new();
      ERR_set_debug("crypto/conf/conf_def.c", 0xb5, "def_load");
      ERR_set_error(0xe, 0x80002, 0);
   }
   return 0;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */CONF_METHOD *NCONF_default(void) {
   return (CONF_METHOD*)default_method;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */CONF_METHOD *NCONF_WIN32(void) {
   return (CONF_METHOD*)WIN32_method;
}
