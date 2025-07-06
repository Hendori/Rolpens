int DSO_free(DSO *dso) {
   int *piVar1;
   int iVar2;
   DSO_METHOD *pDVar3;
   if (dso == (DSO*)0x0) {
      return 1;
   }
   LOCK();
   piVar1 = &dso->references;
   iVar2 = *piVar1;
   *piVar1 = *piVar1 + -1;
   UNLOCK();
   if (( iVar2 == 1 ) || ( iVar2 + -1 < 1 )) {
      pDVar3 = dso->meth;
      if (( ( dso->flags & 4 ) == 0 ) && ( pDVar3->dso_unload != (_func_3875*)0x0 )) {
         iVar2 = ( *pDVar3->dso_unload )(dso);
         if (iVar2 == 0) {
            ERR_new();
            ERR_set_debug("crypto/dso/dso_lib.c", 0x40, "DSO_free");
            ERR_set_error(0x25, 0x6b, 0);
            return 0;
         }
         pDVar3 = dso->meth;
      }
      if (( pDVar3->init != (_func_3879*)0x0 ) && ( iVar2 = iVar2 == 0 )) {
         ERR_new();
         ERR_set_debug("crypto/dso/dso_lib.c", 0x46, "DSO_free");
         ERR_set_error(0x25, 0x66, 0);
         return 0;
      }
      OPENSSL_sk_free(dso->meth_data);
      CRYPTO_free(dso->filename);
      CRYPTO_free(dso->loaded_filename);
      CRYPTO_free(dso);
   }
   return 1;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */DSO *DSO_new(void) {
   DSO_MERGER_FUNC pDVar1;
   DSO *dso;
   stack_st_void *psVar2;
   DSO_METHOD *pDVar3;
   char *extraout_RDX;
   char *pcVar4;
   pcVar4 = "crypto/dso/dso_lib.c";
   dso = (DSO*)CRYPTO_zalloc(0x48, "crypto/dso/dso_lib.c", 0x11);
   if (dso != (DSO*)0x0) {
      psVar2 = (stack_st_void*)OPENSSL_sk_new_null();
      dso->meth_data = psVar2;
      if (psVar2 == (stack_st_void*)0x0) {
         ERR_new();
         ERR_set_debug("crypto/dso/dso_lib.c", 0x17, "DSO_new_method");
         ERR_set_error(0x25, 0x8000f, 0);
         CRYPTO_free(dso);
         return (DSO*)0x0;
      }
      pDVar3 = DSO_METHOD_openssl();
      dso->meth = pDVar3;
      LOCK();
      dso->references = 1;
      UNLOCK();
      pDVar1 = dso->meth->dso_merger;
      if (pDVar1 == (DSO_MERGER_FUNC)0x0) {
         return dso;
      }
      pcVar4 = ( *pDVar1 )(dso, pcVar4, extraout_RDX);
      if ((int)pcVar4 != 0) {
         return dso;
      }
      DSO_free(dso);
   }
   return (DSO*)0x0;
}int DSO_flags(DSO *dso) {
   int iVar1;
   iVar1 = 0;
   if (dso != (DSO*)0x0) {
      iVar1 = dso->flags;
   }
   return iVar1;
}int DSO_up_ref(DSO *dso) {
   int *piVar1;
   int iVar2;
   if (dso != (DSO*)0x0) {
      LOCK();
      piVar1 = &dso->references;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      return (int)( 1 < iVar2 + 1 );
   }
   ERR_new();
   ERR_set_debug("crypto/dso/dso_lib.c", 0x5c, "DSO_up_ref");
   ERR_set_error(0x25, 0xc0102, 0);
   return 0;
}DSO_FUNC_TYPE DSO_bind_func(DSO *dso, char *symname) {
   _func_3876 *p_Var1;
   DSO_FUNC_TYPE pDVar2;
   if (( dso == (DSO*)0x0 ) || ( symname == (char*)0x0 )) {
      ERR_new();
      pDVar2 = (DSO_FUNC_TYPE)0x0;
      ERR_set_debug("crypto/dso/dso_lib.c", 0xa3, "DSO_bind_func");
      ERR_set_error(0x25, 0xc0102, 0);
   } else {
      p_Var1 = dso->meth->dso_bind_var;
      if (p_Var1 == (_func_3876*)0x0) {
         ERR_new();
         pDVar2 = (DSO_FUNC_TYPE)0x0;
         ERR_set_debug("crypto/dso/dso_lib.c", 0xa7, "DSO_bind_func");
         ERR_set_error(0x25, 0x6c, 0);
      } else {
         pDVar2 = ( DSO_FUNC_TYPE )(*p_Var1)(dso, symname);
         if (pDVar2 == (DSO_FUNC_TYPE)0x0) {
            ERR_new();
            ERR_set_debug("crypto/dso/dso_lib.c", 0xab, "DSO_bind_func");
            ERR_set_error(0x25, 0x6a, 0);
         }
      }
   }
   return pDVar2;
}long DSO_ctrl(DSO *dso, int cmd, long larg, void *parg) {
   _func_3877 *UNRECOVERED_JUMPTABLE;
   DSO_FUNC_TYPE pDVar1;
   undefined4 in_register_00000034;
   if (dso == (DSO*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/dso/dso_lib.c", 0xbe, "DSO_ctrl");
      ERR_set_error(0x25, 0xc0102, 0);
   } else {
      if (cmd == 2) {
         dso->flags = (uint)larg;
         return 0;
      }
      if (cmd == 3) {
         dso->flags = dso->flags | (uint)larg;
         return 0;
      }
      if (cmd == 1) {
         return (long)dso->flags;
      }
      if (( dso->meth != (DSO_METHOD*)0x0 ) && ( UNRECOVERED_JUMPTABLE = dso->meth->dso_bind_func ),UNRECOVERED_JUMPTABLE != (_func_3877*)0x0) {
         for (int i_1695 = 0; i_1695 < 2; i_1695++) {
            /* WARNING: Could not recover jumptable at 0x001003a5. Too many branches */
         }
         pDVar1 = ( *UNRECOVERED_JUMPTABLE )(dso, (char*)CONCAT44(in_register_00000034, cmd));
         return (long)pDVar1;
      }
      ERR_new();
      ERR_set_debug("crypto/dso/dso_lib.c", 0xd2, "DSO_ctrl");
      ERR_set_error(0x25, 0x6c, 0);
   }
   return -1;
}char *DSO_get_filename(DSO *dso) {
   if (dso != (DSO*)0x0) {
      return dso->filename;
   }
   ERR_new();
   ERR_set_debug("crypto/dso/dso_lib.c", 0xdb, "DSO_get_filename");
   ERR_set_error(0x25, 0xc0102, 0);
   return (char*)0x0;
}int DSO_set_filename(DSO *dso, char *filename) {
   char *pcVar1;
   if (( dso == (DSO*)0x0 ) || ( filename == (char*)0x0 )) {
      ERR_new();
      ERR_set_debug("crypto/dso/dso_lib.c", 0xe6, "DSO_set_filename");
      ERR_set_error(0x25, 0xc0102, 0);
   } else if (dso->loaded_filename == (char*)0x0) {
      pcVar1 = CRYPTO_strdup(filename, "crypto/dso/dso_lib.c", 0xee);
      if (pcVar1 != (char*)0x0) {
         CRYPTO_free(dso->filename);
         dso->filename = pcVar1;
         return 1;
      }
   } else {
      ERR_new();
      ERR_set_debug("crypto/dso/dso_lib.c", 0xea, "DSO_set_filename");
      ERR_set_error(0x25, 0x6e, 0);
   }
   return 0;
}DSO *DSO_load(DSO *dso, char *filename, DSO_METHOD *meth, int flags) {
   _func_3874 *p_Var1;
   DSO_MERGER_FUNC pDVar2;
   bool bVar3;
   int iVar4;
   stack_st_void *psVar5;
   DSO_METHOD *pDVar6;
   long lVar7;
   char *extraout_RDX;
   char *pcVar8;
   bVar3 = false;
   if (dso == (DSO*)0x0) {
      pcVar8 = "crypto/dso/dso_lib.c";
      dso = (DSO*)CRYPTO_zalloc(0x48, "crypto/dso/dso_lib.c", 0x11);
      if (dso != (DSO*)0x0) {
         psVar5 = (stack_st_void*)OPENSSL_sk_new_null();
         dso->meth_data = psVar5;
         if (psVar5 == (stack_st_void*)0x0) {
            ERR_new();
            ERR_set_debug("crypto/dso/dso_lib.c", 0x17, "DSO_new_method");
            ERR_set_error(0x25, 0x8000f, 0);
            CRYPTO_free(dso);
         } else {
            pDVar6 = DSO_METHOD_openssl();
            dso->meth = pDVar6;
            LOCK();
            dso->references = 1;
            UNLOCK();
            pDVar2 = dso->meth->dso_merger;
            if (( pDVar2 == (DSO_MERGER_FUNC)0x0 ) || ( pcVar8 = ( *pDVar2 )(dso, pcVar8, extraout_RDX) ),(int)pcVar8 != 0) {
               lVar7 = DSO_ctrl(dso, 2, (long)flags, (void*)0x0);
               bVar3 = true;
               if (-1 < lVar7) goto LAB_0010056e;
               ERR_new();
               ERR_set_debug("crypto/dso/dso_lib.c", 0x76, "DSO_load");
               ERR_set_error(0x25, 100, 0);
               goto LAB_001005fd;
            }
            DSO_free(dso);
         }
      }
      ERR_new();
      ERR_set_debug("crypto/dso/dso_lib.c", 0x70, "DSO_load");
      ERR_set_error(0x25, 0x80025, 0);
   } else {
      LAB_0010056e:if (dso->filename == (char*)0x0) {
         if (filename == (char*)0x0) {
            LAB_001005c8:ERR_new();
            ERR_set_debug("crypto/dso/dso_lib.c", 0x8b, "DSO_load");
            ERR_set_error(0x25, 0x6f, 0);
         } else {
            iVar4 = DSO_set_filename(dso, filename);
            if (iVar4 == 0) {
               ERR_new();
               ERR_set_debug("crypto/dso/dso_lib.c", 0x86, "DSO_load");
               ERR_set_error(0x25, 0x70, 0);
            } else {
               if (dso->filename == (char*)0x0) goto LAB_001005c8;
               p_Var1 = dso->meth->dso_load;
               if (p_Var1 == (_func_3874*)0x0) {
                  ERR_new();
                  ERR_set_debug("crypto/dso/dso_lib.c", 0x8f, "DSO_load");
                  ERR_set_error(0x25, 0x6c, 0);
               } else {
                  iVar4 = ( *p_Var1 )(dso);
                  if (iVar4 != 0) {
                     return dso;
                  }
                  ERR_new();
                  ERR_set_debug("crypto/dso/dso_lib.c", 0x93, "DSO_load");
                  ERR_set_error(0x25, 0x67, 0);
               }
            }
         }
      } else {
         ERR_new();
         ERR_set_debug("crypto/dso/dso_lib.c", 0x7d, "DSO_load");
         ERR_set_error(0x25, 0x6e, 0);
      }
      if (!bVar3) {
         return (DSO*)0x0;
      }
      LAB_001005fd:DSO_free(dso);
   }
   return (DSO*)0x0;
}char *DSO_merge(DSO *dso, char *filespec1, char *filespec2) {
   char *pcVar1;
   DSO_MERGER_FUNC UNRECOVERED_JUMPTABLE;
   if (( dso == (DSO*)0x0 ) || ( filespec1 == (char*)0x0 )) {
      ERR_new();
      ERR_set_debug("crypto/dso/dso_lib.c", 0xfb, "DSO_merge");
      ERR_set_error(0x25, 0xc0102, 0);
      return (char*)0x0;
   }
   if (( ( dso->flags & 1 ) == 0 ) && ( ( UNRECOVERED_JUMPTABLE = dso->merger ),UNRECOVERED_JUMPTABLE != (DSO_MERGER_FUNC)0x0 || ( UNRECOVERED_JUMPTABLE = (DSO_MERGER_FUNC)dso->meth->dso_name_converter ),UNRECOVERED_JUMPTABLE != (DSO_MERGER_FUNC)0x0 )) {
      for (int i_1696 = 0; i_1696 < 2; i_1696++) {
         /* WARNING: Could not recover jumptable at 0x0010085d. Too many branches */
      }
      pcVar1 = ( *UNRECOVERED_JUMPTABLE )(dso, filespec1, filespec2);
      return pcVar1;
   }
   return (char*)0x0;
}char *DSO_convert_filename(DSO *dso, char *filename) {
   _func_3878 *p_Var1;
   char *pcVar2;
   if (dso == (DSO*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/dso/dso_lib.c", 0x10c, "DSO_convert_filename");
      ERR_set_error(0x25, 0xc0102, 0);
   } else {
      if (( filename != (char*)0x0 ) || ( filename = dso->filename ),filename != (char*)0x0) {
         if (( ( dso->flags & 1 ) == 0 ) && ( ( p_Var1 = (_func_3878*)dso->name_converter ),p_Var1 != (_func_3878*)0x0 || ( p_Var1 = dso->meth->dso_ctrl ),p_Var1 != (_func_3878*)0x0 )) {
            pcVar2 = ( *p_Var1 )(dso, filename);
            if (pcVar2 != (char*)0x0) {
               return pcVar2;
            }
         }
         pcVar2 = CRYPTO_strdup(filename, "crypto/dso/dso_lib.c", 0x11c);
         return pcVar2;
      }
      ERR_new();
      ERR_set_debug("crypto/dso/dso_lib.c", 0x112, "DSO_convert_filename");
      ERR_set_error(0x25, 0x6f, 0);
   }
   return (char*)0x0;
}int DSO_pathbyaddr(void *addr, char *path, int sz) {
   int iVar1;
   DSO_METHOD *pDVar2;
   pDVar2 = DSO_METHOD_openssl();
   if (pDVar2->finish != (_func_3880*)0x0) {
      for (int i_1697 = 0; i_1697 < 2; i_1697++) {
         /* WARNING: Could not recover jumptable at 0x001009bc. Too many branches */
      }
      iVar1 = ( *pDVar2->finish )((DSO*)addr);
      return iVar1;
   }
   ERR_new();
   ERR_set_debug("crypto/dso/dso_lib.c", 0x128, "DSO_pathbyaddr");
   ERR_set_error(0x25, 0x6c, 0);
   return -1;
}DSO *DSO_dsobyaddr(void *param_1, int param_2) {
   int num;
   int iVar1;
   char *path;
   DSO *pDVar2;
   num = DSO_pathbyaddr(param_1, (char*)0x0, 0);
   if (-1 < num) {
      path = (char*)CRYPTO_malloc(num, "crypto/dso/dso_lib.c", 0x137);
      if (( path == (char*)0x0 ) || ( iVar1 = iVar1 != num )) {
         pDVar2 = (DSO*)0x0;
      } else {
         pDVar2 = DSO_load((DSO*)0x0, path, (DSO_METHOD*)0x0, param_2);
      }
      CRYPTO_free(path);
      return pDVar2;
   }
   return (DSO*)0x0;
}void *DSO_global_lookup(char *name) {
   int iVar1;
   DSO_METHOD *pDVar2;
   undefined4 extraout_var;
   int sz;
   char *in_RSI;
   pDVar2 = DSO_METHOD_openssl();
   if (pDVar2->pathbyaddr != (_func_3881*)0x0) {
      for (int i_1698 = 0; i_1698 < 2; i_1698++) {
         /* WARNING: Could not recover jumptable at 0x00100aba. Too many branches */
      }
      iVar1 = ( *pDVar2->pathbyaddr )(name, in_RSI, sz);
      return (void*)CONCAT44(extraout_var, iVar1);
   }
   ERR_new();
   ERR_set_debug("crypto/dso/dso_lib.c", 0x145, "DSO_global_lookup");
   ERR_set_error(0x25, 0x6c, 0);
   return (void*)0x0;
}
