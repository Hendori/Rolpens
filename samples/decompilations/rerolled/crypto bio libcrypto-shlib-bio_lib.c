undefined8 *BIO_new_ex(undefined8 param_1, long param_2) {
   int iVar1;
   undefined8 *obj;
   obj = (undefined8*)CRYPTO_zalloc(0x80, "crypto/bio/bio_lib.c", 0x53);
   if (obj != (undefined8*)0x0) {
      *obj = param_1;
      obj[1] = param_2;
      *(undefined4*)( (long)obj + 0x2c ) = 1;
      LOCK();
      *(undefined4*)( obj + 0xb ) = 1;
      UNLOCK();
      iVar1 = CRYPTO_new_ex_data(0xc, obj, (CRYPTO_EX_DATA*)( obj + 0xe ));
      if (iVar1 != 0) {
         if (*(code**)( param_2 + 0x48 ) == (code*)0x0) {
            LAB_00100090:*(undefined4*)( obj + 5 ) = 1;
            return obj;
         }
         iVar1 = ( **(code**)( param_2 + 0x48 ) )(obj);
         if (iVar1 != 0) {
            if (*(long*)( param_2 + 0x48 ) != 0) {
               return obj;
            }
            goto LAB_00100090;
         }
         ERR_new();
         ERR_set_debug("crypto/bio/bio_lib.c", 99, "BIO_new_ex");
         ERR_set_error(0x20, 0xc0105, 0);
         CRYPTO_free_ex_data(0xc, obj, (CRYPTO_EX_DATA*)( obj + 0xe ));
      }
      CRYPTO_free(obj);
   }
   return (undefined8*)0x0;
}BIO *BIO_new(BIO_METHOD *type) {
   BIO *pBVar1;
   pBVar1 = (BIO*)BIO_new_ex(0, type);
   return pBVar1;
}int BIO_free(BIO *a) {
   ulong *puVar1;
   code *pcVar2;
   ulong uVar3;
   int iVar4;
   if (a == (BIO*)0x0) {
      return 0;
   }
   LOCK();
   puVar1 = &a->num_write;
   uVar3 = *puVar1;
   *(int*)puVar1 = (int)*puVar1 + -1;
   UNLOCK();
   if (( (int)uVar3 != 1 ) && ( 0 < (int)uVar3 + -1 )) {
      return 1;
   }
   pcVar2 = *(code**)&a->init;
   if ((code*)a->cb_arg == (code*)0x0) {
      if (pcVar2 == (code*)0x0) goto LAB_0010017e;
      LAB_001001c5:iVar4 = ( *pcVar2 )(a, 1, 0, 0, 0, 0, 1, 0);
   } else {
      if (pcVar2 != (code*)0x0) goto LAB_001001c5;
      iVar4 = ( *(code*)a->cb_arg )(a, 1, 0, 0, 0, 1);
   }
   if (iVar4 < 1) {
      return 0;
   }
   LAB_0010017e:if (( a->callback != (_func_603*)0x0 ) && ( pcVar2 = *(code**)( a->callback + 0x50 ) ),pcVar2 != (code*)0x0) {
      ( *pcVar2 )(a);
   }
   CRYPTO_free_ex_data(0xc, a, (CRYPTO_EX_DATA*)( a + 1 ));
   CRYPTO_free(a);
   return 1;
}void BIO_set_data(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x40 ) = param_2;
   return;
}undefined8 BIO_get_data(long param_1) {
   return *(undefined8*)( param_1 + 0x40 );
}void BIO_set_init(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x28 ) = param_2;
   return;
}undefined4 BIO_get_init(long param_1) {
   return *(undefined4*)( param_1 + 0x28 );
}void BIO_set_shutdown(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x2c ) = param_2;
   return;
}undefined4 BIO_get_shutdown(long param_1) {
   return *(undefined4*)( param_1 + 0x2c );
}int BIO_vfree(BIO *a) {
   int iVar1;
   iVar1 = BIO_free(a);
   return iVar1;
}bool BIO_up_ref(long param_1) {
   int *piVar1;
   int iVar2;
   LOCK();
   piVar1 = (int*)( param_1 + 0x58 );
   iVar2 = *piVar1;
   *piVar1 = *piVar1 + 1;
   UNLOCK();
   return 1 < iVar2 + 1;
}void BIO_clear_flags(BIO *b, int flags) {
   *(uint*)&b->ptr = *(uint*)&b->ptr & ~flags;
   return;
}int BIO_test_flags(BIO *b, int flags) {
   return *(uint*)&b->ptr & flags;
}void BIO_set_flags(BIO *b, int flags) {
   *(uint*)&b->ptr = *(uint*)&b->ptr | flags;
   return;
}long BIO_get_callback(bio_st *param_1, int param_2, char *param_3, int param_4, long param_5, long param_6) {
   return (long)param_1->cb_arg;
}void BIO_set_callback(BIO *b, callback *callback) {
   b->cb_arg = (char*)callback;
   return;
}undefined8 BIO_get_callback_ex(long param_1) {
   return *(undefined8*)( param_1 + 0x18 );
}void BIO_set_callback_ex(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x18 ) = param_2;
   return;
}void BIO_set_callback_arg(BIO *b, char *arg) {
   *(char**)&b->flags = arg;
   return;
}char *BIO_get_callback_arg(BIO *b) {
   return *(char**)&b->flags;
}char *BIO_method_name(BIO *b) {
   return *(char**)( b->callback + 8 );
}int BIO_method_type(BIO *b) {
   return *(int*)b->callback;
}int BIO_read(BIO *b, void *data, int len) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   code *pcVar4;
   code *pcVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   ulong local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = 0;
   if (len < 0) goto LAB_00100453;
   uVar6 = (ulong)len;
   if (b == (BIO*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x10b, "bio_read_intern");
      ERR_set_error(0x20, 0xc0102, 0);
   } else {
      if (( b->callback == (_func_603*)0x0 ) || ( *(long*)( b->callback + 0x20 ) == 0 )) {
         ERR_new();
         ERR_set_debug("crypto/bio/bio_lib.c", 0x10f, "bio_read_intern");
         ERR_set_error(0x20, 0x79, 0);
         uVar2 = 0xfffffffe;
         goto LAB_00100453;
      }
      pcVar4 = *(code**)&b->init;
      if ((code*)b->cb_arg == (code*)0x0) {
         if (pcVar4 != (code*)0x0) goto LAB_00100481;
      } else {
         if (pcVar4 == (code*)0x0) {
            uVar1 = ( *(code*)b->cb_arg )(b, 2, data, len, 0, 1);
         } else {
            LAB_00100481:uVar1 = ( *pcVar4 )(b, 2, data, uVar6, 0, 0, 1, 0);
         }
         uVar2 = uVar1 & 0xffffffff;
         if ((int)uVar1 < 1) goto LAB_00100453;
      }
      if (b->num == 0) {
         ERR_new();
         ERR_set_debug("crypto/bio/bio_lib.c", 0x119, "bio_read_intern");
         ERR_set_error(0x20, 0x78, 0);
      } else {
         uVar2 = ( **(code**)( b->callback + 0x20 ) )(b, data, uVar6, &local_38);
         if ((int)uVar2 < 1) {
            pcVar4 = (code*)b->cb_arg;
            pcVar5 = *(code**)&b->init;
            if (pcVar4 == (code*)0x0) {
               if (pcVar5 == (code*)0x0) goto LAB_00100453;
               goto LAB_0010041c;
            }
            if (pcVar5 != (code*)0x0) goto LAB_0010041c;
            LAB_001004d1:uVar3 = ( *pcVar4 )(b, 0x82, data, len, 0);
            uVar1 = uVar3;
            if (0 < (long)uVar3) goto LAB_00100447;
            LAB_0010043b:uVar2 = uVar3 & 0xffffffff;
            uVar1 = local_38;
            if ((int)uVar3 < 1) goto LAB_00100453;
         } else {
            pcVar4 = (code*)b->cb_arg;
            pcVar5 = *(code**)&b->init;
            (b->ex_data).sk = (stack_st_void*)( (long)&(((b->ex_data).sk)->stack).num + local_38 );
            if (pcVar4 != (code*)0x0) {
               if (pcVar5 == (code*)0x0) {
                  if (local_38 < 0x80000000) goto LAB_001004d1;
                  goto LAB_00100519;
               }
               LAB_0010041c:uVar3 = ( *pcVar5 )(b, 0x82, data, uVar6, 0, 0, uVar2);
               goto LAB_0010043b;
            }
            uVar1 = local_38;
            if (pcVar5 != (code*)0x0) goto LAB_0010041c;
         }
         LAB_00100447:local_38 = uVar1;
         if (local_38 <= uVar6) {
            uVar2 = local_38 & 0xffffffff;
            goto LAB_00100453;
         }
         ERR_new();
         ERR_set_debug("crypto/bio/bio_lib.c", 0x128, "bio_read_intern");
         ERR_set_error(0x20, 0xc0103, 0);
      }
   }
   LAB_00100519:uVar2 = 0xffffffff;
   LAB_00100453:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return (int)uVar2;
}bool BIO_read_ex(long param_1, undefined8 param_2, ulong param_3, ulong *param_4) {
   int iVar1;
   undefined8 uVar2;
   ulong uVar3;
   code *pcVar4;
   code *pcVar5;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x10b, "bio_read_intern");
      ERR_set_error(0x20, 0xc0102, 0);
      return false;
   }
   if (( *(long*)( param_1 + 8 ) == 0 ) || ( *(long*)( *(long*)( param_1 + 8 ) + 0x20 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x10f, "bio_read_intern");
      ERR_set_error(0x20, 0x79, 0);
      return false;
   }
   pcVar4 = *(code**)( param_1 + 0x18 );
   if (*(code**)( param_1 + 0x10 ) == (code*)0x0) {
      if (pcVar4 != (code*)0x0) {
         LAB_00100685:iVar1 = ( *pcVar4 )(param_1, 2, param_2, param_3, 0, 0, 1, 0);
         goto joined_r0x001006a4;
      }
   } else {
      if (pcVar4 != (code*)0x0) goto LAB_00100685;
      if (0x7fffffff < param_3) {
         return false;
      }
      iVar1 = ( **(code**)( param_1 + 0x10 ) )(param_1, 2, param_2, param_3 & 0xffffffff, 0, 1);
      joined_r0x001006a4:if (iVar1 < 1) {
         return false;
      }
   }
   if (*(int*)( param_1 + 0x28 ) == 0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x119, "bio_read_intern");
      ERR_set_error(0x20, 0x78, 0);
      return false;
   }
   uVar2 = ( **(code**)( *(long*)( param_1 + 8 ) + 0x20 ) )(param_1, param_2, param_3, param_4);
   if ((int)uVar2 < 1) {
      pcVar5 = *(code**)( param_1 + 0x10 );
      pcVar4 = *(code**)( param_1 + 0x18 );
      if (pcVar5 == (code*)0x0) {
         if (pcVar4 == (code*)0x0) {
            return false;
         }
      } else if (pcVar4 == (code*)0x0) {
         if (0x7fffffff < param_3) {
            return false;
         }
         uVar3 = (ulong)(int)uVar2;
         goto LAB_00100702;
      }
      LAB_00100725:uVar3 = ( *pcVar4 )(param_1, 0x82, param_2, param_3, 0, 0, uVar2, param_4);
      LAB_00100741:if ((int)uVar3 < 1) {
         return false;
      }
   } else {
      pcVar5 = *(code**)( param_1 + 0x10 );
      pcVar4 = *(code**)( param_1 + 0x18 );
      *(long*)( param_1 + 0x60 ) = *(long*)( param_1 + 0x60 ) + *param_4;
      if (pcVar5 != (code*)0x0) {
         if (pcVar4 != (code*)0x0) goto LAB_00100725;
         if (0x7fffffff < param_3) {
            return false;
         }
         uVar3 = *param_4;
         if (0x7fffffff < uVar3) {
            return false;
         }
         LAB_00100702:uVar3 = ( *pcVar5 )(param_1, 0x82, param_2, param_3 & 0xffffffff, 0, uVar3);
         if (0 < (long)uVar3) {
            *param_4 = uVar3;
            goto LAB_0010074d;
         }
         goto LAB_00100741;
      }
      if (pcVar4 != (code*)0x0) goto LAB_00100725;
   }
   uVar3 = *param_4;
   LAB_0010074d:if (param_3 < uVar3) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x128, "bio_read_intern");
      ERR_set_error(0x20, 0xc0103, 0);
   }
   return param_3 >= uVar3;
}int BIO_write(BIO *b, void *data, int len) {
   int *piVar1;
   ulong uVar2;
   ulong uVar3;
   ulong uVar4;
   code *pcVar5;
   code *pcVar6;
   long lVar7;
   long in_FS_OFFSET;
   ulong local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( len < 1 ) || ( lVar7 = (long)len ),b == (BIO*)0x0) {
      uVar3 = 0;
      goto LAB_00100912;
   }
   if (( b->callback == (_func_603*)0x0 ) || ( *(long*)( b->callback + 0x10 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x156, "bio_write_intern");
      ERR_set_error(0x20, 0x79, 0);
      uVar3 = 0xfffffffe;
      goto LAB_00100912;
   }
   pcVar5 = *(code**)&b->init;
   if ((code*)b->cb_arg == (code*)0x0) {
      if (pcVar5 != (code*)0x0) goto LAB_0010093d;
   } else {
      if (pcVar5 == (code*)0x0) {
         uVar2 = ( *(code*)b->cb_arg )(b, 3, data, len, 0, 1);
      } else {
         LAB_0010093d:uVar2 = ( *pcVar5 )(b, 3, data, lVar7, 0, 0, 1, 0);
      }
      uVar3 = uVar2 & 0xffffffff;
      if ((int)uVar2 < 1) goto LAB_00100912;
   }
   if (b->num == 0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x160, "bio_write_intern");
      ERR_set_error(0x20, 0x78, 0);
      LAB_00100a49:uVar3 = 0xffffffff;
      goto LAB_00100912;
   }
   uVar3 = ( **(code**)( b->callback + 0x10 ) )(b, data, lVar7, &local_38);
   if ((int)uVar3 < 1) {
      pcVar5 = (code*)b->cb_arg;
      pcVar6 = *(code**)&b->init;
      if (pcVar5 == (code*)0x0) {
         if (pcVar6 == (code*)0x0) goto LAB_00100912;
         goto LAB_001009a6;
      }
      if (pcVar6 != (code*)0x0) goto LAB_001009a6;
      LAB_00100a05:uVar4 = ( *pcVar5 )(b, 0x83, data, len, 0);
      uVar2 = uVar4;
      if (0 < (long)uVar4) goto LAB_001009d3;
      LAB_001009c5:uVar3 = uVar4 & 0xffffffff;
      uVar2 = local_38;
      if ((int)uVar4 < 1) goto LAB_00100912;
   } else {
      pcVar5 = (code*)b->cb_arg;
      pcVar6 = *(code**)&b->init;
      piVar1 = &(b->ex_data).dummy;
      *(ulong*)piVar1 = *(long*)piVar1 + local_38;
      if (pcVar5 != (code*)0x0) {
         if (pcVar6 == (code*)0x0) {
            if (local_38 < 0x80000000) goto LAB_00100a05;
            goto LAB_00100a49;
         }
         LAB_001009a6:uVar4 = ( *pcVar6 )(b, 0x83, data, lVar7, 0, 0, uVar3, &local_38);
         goto LAB_001009c5;
      }
      uVar2 = local_38;
      if (pcVar6 != (code*)0x0) goto LAB_001009a6;
   }
   LAB_001009d3:uVar3 = uVar2 & 0xffffffff;
   LAB_00100912:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return (int)uVar3;
}bool BIO_write_ex(long param_1, undefined8 param_2, ulong param_3, ulong *param_4) {
   code *pcVar1;
   int iVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   bool bVar4;
   ulong local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 != (ulong*)0x0) {
      *param_4 = 0;
   }
   bVar4 = false;
   if (param_1 == 0) goto LAB_00100b67;
   if (( *(long*)( param_1 + 8 ) == 0 ) || ( *(long*)( *(long*)( param_1 + 8 ) + 0x10 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x156, "bio_write_intern");
      ERR_set_error(0x20, 0x79, 0);
   } else {
      pcVar1 = *(code**)( param_1 + 0x18 );
      if (*(code**)( param_1 + 0x10 ) == (code*)0x0) {
         if (pcVar1 != (code*)0x0) goto LAB_00100b95;
      } else {
         if (pcVar1 == (code*)0x0) {
            if (0x7fffffff < param_3) goto LAB_00100b5f;
            iVar2 = ( **(code**)( param_1 + 0x10 ) )(param_1, 3, param_2, param_3 & 0xffffffff, 0, 1);
         } else {
            LAB_00100b95:iVar2 = ( *pcVar1 )(param_1, 3, param_2, param_3, 0, 0, 1, 0);
         }
         if (iVar2 < 1) goto LAB_00100b5f;
      }
      if (*(int*)( param_1 + 0x28 ) != 0) {
         uVar3 = ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(param_1, param_2, param_3, &local_38);
         iVar2 = (int)uVar3;
         if (0 < iVar2) {
            *(long*)( param_1 + 0x68 ) = *(long*)( param_1 + 0x68 ) + local_38;
         }
         pcVar1 = *(code**)( param_1 + 0x18 );
         if (*(code**)( param_1 + 0x10 ) == (code*)0x0) {
            if (pcVar1 != (code*)0x0) goto LAB_00100c45;
            LAB_00100c61:if (param_4 != (ulong*)0x0) {
               *param_4 = local_38;
            }
            if ((int)uVar3 < 1) goto LAB_00100b5f;
         } else {
            if (pcVar1 != (code*)0x0) {
               LAB_00100c45:uVar3 = ( *pcVar1 )(param_1, 0x83, param_2, param_3, 0, 0, uVar3, &local_38);
               goto LAB_00100c61;
            }
            if (0x7fffffff < param_3) {
               if (param_4 != (ulong*)0x0) {
                  *param_4 = local_38;
               }
               goto LAB_00100b5f;
            }
            uVar3 = (long)iVar2;
            if (( 0 < (long)iVar2 ) && ( uVar3 = 0x7fffffff < local_38 )) {
               if (param_4 != (ulong*)0x0) {
                  *param_4 = local_38;
               }
               goto LAB_00100b5f;
            }
            uVar3 = ( **(code**)( param_1 + 0x10 ) )(param_1, 0x83, param_2, param_3 & 0xffffffff, 0, uVar3);
            if ((long)uVar3 < 1) goto LAB_00100c61;
            if (param_4 != (ulong*)0x0) {
               *param_4 = uVar3;
            }
         }
         bVar4 = true;
         goto LAB_00100b67;
      }
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x160, "bio_write_intern");
      ERR_set_error(0x20, 0x78, 0);
   }
   LAB_00100b5f:bVar4 = param_3 == 0;
   LAB_00100b67:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */long BIO_sendmmsg(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 *param_6) {
   code *pcVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      *param_6 = 0;
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x193, "BIO_sendmmsg");
      ERR_set_error(0x20, 0xc0102, 0);
   } else if (( *(long*)( param_1 + 8 ) == 0 ) || ( *(long*)( *(long*)( param_1 + 8 ) + 0x60 ) == 0 )) {
      *param_6 = 0;
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x199, "BIO_sendmmsg");
      ERR_set_error(0x20, 0x79, 0);
   } else {
      pcVar1 = *(code**)( param_1 + 0x18 );
      if (*(code**)( param_1 + 0x10 ) == (code*)0x0) {
         if (pcVar1 != (code*)0x0) goto LAB_00100e3d;
      } else {
         if (pcVar1 == (code*)0x0) {
            local_68 = param_2;
            local_60 = param_3;
            local_58 = param_4;
            local_50 = param_5;
            local_48 = param_6;
            lVar2 = ( **(code**)( param_1 + 0x10 ) )(param_1, 8, &local_68, 0, 0, 1);
         } else {
            LAB_00100e3d:local_68 = param_2;
            local_60 = param_3;
            local_58 = param_4;
            local_50 = param_5;
            local_48 = param_6;
            lVar2 = ( *pcVar1 )(param_1, 8, &local_68, 0, 0, 0, 1, 0);
         }
         if (lVar2 == 0) goto LAB_00100e68;
      }
      if (*(int*)( param_1 + 0x28 ) != 0) {
         lVar2 = ( **(code**)( *(long*)( param_1 + 8 ) + 0x60 ) )(param_1, param_2, param_3, param_4, param_5, param_6);
         pcVar1 = *(code**)( param_1 + 0x18 );
         if (*(code**)( param_1 + 0x10 ) == (code*)0x0) {
            if (pcVar1 == (code*)0x0) goto LAB_00100e6a;
         } else if (pcVar1 == (code*)0x0) {
            if (0 < (int)lVar2) {
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }
            lVar2 = ( **(code**)( param_1 + 0x10 ) )(param_1, 0x88, &local_68, 0, 0);
            if (0 < lVar2) {
               _DAT_00000000 = 0;
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }
            goto LAB_00100e6a;
         }
         lVar2 = ( *pcVar1 )(param_1, 0x88, &local_68, (long)(int)lVar2, 0, 0, lVar2, 0);
         goto LAB_00100e6a;
      }
      *param_6 = 0;
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x1ac, "BIO_sendmmsg");
      ERR_set_error(0x20, 0x78, 0);
   }
   LAB_00100e68:lVar2 = 0;
   LAB_00100e6a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */long BIO_recvmmsg(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 *param_6) {
   code *pcVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      *param_6 = 0;
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x1c2, "BIO_recvmmsg");
      ERR_set_error(0x20, 0xc0102, 0);
   } else if (( *(long*)( param_1 + 8 ) == 0 ) || ( *(long*)( *(long*)( param_1 + 8 ) + 0x68 ) == 0 )) {
      *param_6 = 0;
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x1c8, "BIO_recvmmsg");
      ERR_set_error(0x20, 0x79, 0);
   } else {
      pcVar1 = *(code**)( param_1 + 0x18 );
      if (*(code**)( param_1 + 0x10 ) == (code*)0x0) {
         if (pcVar1 != (code*)0x0) goto LAB_001010dd;
      } else {
         if (pcVar1 == (code*)0x0) {
            local_68 = param_2;
            local_60 = param_3;
            local_58 = param_4;
            local_50 = param_5;
            local_48 = param_6;
            lVar2 = ( **(code**)( param_1 + 0x10 ) )(param_1, 7, &local_68, 0, 0, 1);
         } else {
            LAB_001010dd:local_68 = param_2;
            local_60 = param_3;
            local_58 = param_4;
            local_50 = param_5;
            local_48 = param_6;
            lVar2 = ( *pcVar1 )(param_1, 7, &local_68, 0, 0, 0, 1, 0);
         }
         if (lVar2 == 0) goto LAB_00101108;
      }
      if (*(int*)( param_1 + 0x28 ) != 0) {
         lVar2 = ( **(code**)( *(long*)( param_1 + 8 ) + 0x68 ) )(param_1, param_2, param_3, param_4, param_5, param_6);
         pcVar1 = *(code**)( param_1 + 0x18 );
         if (*(code**)( param_1 + 0x10 ) == (code*)0x0) {
            if (pcVar1 == (code*)0x0) goto LAB_0010110a;
         } else if (pcVar1 == (code*)0x0) {
            if (0 < (int)lVar2) {
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }
            lVar2 = ( **(code**)( param_1 + 0x10 ) )(param_1, 0x87, &local_68, 0, 0);
            if (0 < lVar2) {
               _DAT_00000000 = 0;
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }
            goto LAB_0010110a;
         }
         lVar2 = ( *pcVar1 )(param_1, 0x87, &local_68, (long)(int)lVar2, 0, 0, lVar2, 0);
         goto LAB_0010110a;
      }
      *param_6 = 0;
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x1db, "BIO_recvmmsg");
      ERR_set_error(0x20, 0x78, 0);
   }
   LAB_00101108:lVar2 = 0;
   LAB_0010110a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int BIO_puts(BIO *bp, char *buf) {
   int *piVar1;
   ulong uVar2;
   int iVar3;
   ulong uVar4;
   ulong uVar5;
   code *pcVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   ulong local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0;
   if (bp == (BIO*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x1f8, "BIO_puts");
      ERR_set_error(0x20, 0xc0102, 0);
   } else {
      if (( bp->callback == (_func_603*)0x0 ) || ( *(long*)( bp->callback + 0x30 ) == 0 )) {
         ERR_new();
         ERR_set_debug("crypto/bio/bio_lib.c", 0x1fc, "BIO_puts");
         ERR_set_error(0x20, 0x79, 0);
         uVar5 = 0xfffffffe;
         goto LAB_00101368;
      }
      pcVar7 = *(code**)&bp->init;
      if ((code*)bp->cb_arg == (code*)0x0) {
         if (pcVar7 != (code*)0x0) goto LAB_00101391;
      } else {
         if (pcVar7 == (code*)0x0) {
            uVar4 = ( *(code*)bp->cb_arg )(bp, 4, buf, 0, 0, 1);
         } else {
            LAB_00101391:uVar4 = ( *pcVar7 )(bp, 4, buf, 0, 0, 0, 1, 0);
         }
         uVar5 = uVar4 & 0xffffffff;
         if ((int)uVar4 < 1) goto LAB_00101368;
      }
      if (bp->num == 0) {
         ERR_new();
         ERR_set_debug("crypto/bio/bio_lib.c", 0x207, "BIO_puts");
         ERR_set_error(0x20, 0x78, 0);
      } else {
         uVar5 = ( **(code**)( bp->callback + 0x30 ) )(bp, buf);
         iVar3 = (int)uVar5;
         if (iVar3 < 1) {
            pcVar7 = (code*)bp->cb_arg;
            pcVar6 = *(code**)&bp->init;
            if (pcVar7 == (code*)0x0) {
               if (pcVar6 == (code*)0x0) goto LAB_00101368;
            } else if (pcVar6 == (code*)0x0) goto LAB_001013d1;
            LAB_00101332:uVar4 = ( *pcVar6 )(bp, 0x84, buf, 0, 0, 0, uVar5, &local_28);
            LAB_00101352:uVar5 = uVar4 & 0xffffffff;
            uVar2 = local_28;
            if ((int)uVar4 < 1) goto LAB_00101368;
         } else {
            pcVar7 = (code*)bp->cb_arg;
            local_28 = (ulong)iVar3;
            pcVar6 = *(code**)&bp->init;
            piVar1 = &(bp->ex_data).dummy;
            *(ulong*)piVar1 = *(long*)piVar1 + local_28;
            if (pcVar7 == (code*)0x0) {
               if (pcVar6 == (code*)0x0) goto LAB_00101368;
               uVar5 = 1;
               goto LAB_00101332;
            }
            uVar5 = 1;
            if (pcVar6 != (code*)0x0) goto LAB_00101332;
            LAB_001013d1:uVar4 = ( *pcVar7 )(bp, 0x84, buf, 0, 0, (long)iVar3);
            uVar2 = uVar4;
            if ((long)uVar4 < 1) goto LAB_00101352;
         }
         local_28 = uVar2;
         uVar5 = local_28;
         if (local_28 < 0x80000000) goto LAB_00101368;
         ERR_new();
         ERR_set_debug("crypto/bio/bio_lib.c", 0x219, "BIO_puts");
         ERR_set_error(0x20, 0x66, 0);
      }
   }
   uVar5 = 0xffffffff;
   LAB_00101368:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return (int)uVar5;
}int BIO_gets(BIO *bp, char *buf, int size) {
   int iVar1;
   ulong uVar2;
   ulong uVar3;
   ulong uVar4;
   code *pcVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   ulong local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   if (bp == (BIO*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x229, "BIO_gets");
      ERR_set_error(0x20, 0xc0102, 0);
      goto LAB_0010173f;
   }
   if (( bp->callback == (_func_603*)0x0 ) || ( *(long*)( bp->callback + 0x38 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x22d, "BIO_gets");
      ERR_set_error(0x20, 0x79, 0);
      uVar3 = 0xfffffffe;
      goto LAB_00101624;
   }
   if (size < 0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x232, "BIO_gets");
      ERR_set_error(0x20, 0x7d, 0);
   } else {
      pcVar6 = *(code**)&bp->init;
      if ((code*)bp->cb_arg == (code*)0x0) {
         if (pcVar6 != (code*)0x0) goto LAB_0010168c;
      } else {
         if (pcVar6 == (code*)0x0) {
            uVar2 = ( *(code*)bp->cb_arg )(bp, 5, buf, size, 0, 1);
         } else {
            LAB_0010168c:uVar2 = ( *pcVar6 )(bp, 5, buf, (long)size, 0, 0, 1, 0);
         }
         uVar3 = uVar2 & 0xffffffff;
         if ((int)uVar2 < 1) goto LAB_00101624;
      }
      if (bp->num == 0) {
         ERR_new();
         ERR_set_debug("crypto/bio/bio_lib.c", 0x23d, "BIO_gets");
         ERR_set_error(0x20, 0x78, 0);
      } else {
         uVar3 = ( **(code**)( bp->callback + 0x38 ) )(bp, buf, size);
         iVar1 = (int)uVar3;
         if (iVar1 < 1) {
            pcVar6 = (code*)bp->cb_arg;
            pcVar5 = *(code**)&bp->init;
            if (pcVar6 == (code*)0x0) {
               if (pcVar5 == (code*)0x0) goto LAB_00101624;
            } else if (pcVar5 == (code*)0x0) goto LAB_00101660;
            LAB_001015eb:uVar4 = ( *pcVar5 )(bp, 0x85, buf, (long)size, 0, 0, uVar3, &local_38);
            LAB_0010160c:uVar3 = uVar4 & 0xffffffff;
            uVar2 = local_38;
            if ((int)uVar4 < 1) goto LAB_00101624;
         } else {
            pcVar6 = (code*)bp->cb_arg;
            uVar2 = (ulong)iVar1;
            pcVar5 = *(code**)&bp->init;
            uVar3 = 1;
            local_38 = uVar2;
            if (pcVar6 != (code*)0x0) {
               if (pcVar5 != (code*)0x0) goto LAB_001015eb;
               LAB_00101660:uVar4 = ( *pcVar6 )(bp, 0x85, buf, size, 0, (long)iVar1);
               uVar2 = uVar4;
               if (0 < (long)uVar4) goto LAB_00101618;
               goto LAB_0010160c;
            }
            if (pcVar5 != (code*)0x0) goto LAB_001015eb;
         }
         LAB_00101618:if (uVar2 <= (ulong)(long)size) {
            uVar3 = uVar2 & 0xffffffff;
            goto LAB_00101624;
         }
      }
   }
   LAB_0010173f:uVar3 = 0xffffffff;
   LAB_00101624:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return (int)uVar3;
}int BIO_indent(BIO *b, int indent, int max) {
   int iVar1;
   if (indent < 0) {
      indent = 0;
   }
   if (indent <= max) {
      max = indent;
   }
   do {
      if (max == 0) {
         return 1;
      }
      max = max + -1;
      iVar1 = BIO_puts(b, " ");
   } while ( iVar1 == 1 );
   return 0;
}long BIO_ctrl(BIO *bp, int cmd, long larg, void *parg) {
   code *pcVar1;
   long lVar2;
   code *pcVar3;
   if (bp == (BIO*)0x0) {
      return -1;
   }
   if (( bp->callback == (_func_603*)0x0 ) || ( pcVar3 = *(code**)( bp->callback + 0x40 ) ),pcVar3 == (code*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x29b, "BIO_ctrl");
      ERR_set_error(0x20, 0x79, 0);
      return -2;
   }
   pcVar1 = *(code**)&bp->init;
   if ((code*)bp->cb_arg == (code*)0x0) {
      if (pcVar1 == (code*)0x0) goto LAB_00101892;
      LAB_001018dd:lVar2 = ( *pcVar1 )(bp, 6, parg, 0, cmd, larg, 1, 0);
   } else {
      if (pcVar1 != (code*)0x0) goto LAB_001018dd;
      lVar2 = ( *(code*)bp->cb_arg )(bp, 6, parg, cmd, larg, 1);
   }
   if (lVar2 < 1) {
      return lVar2;
   }
   pcVar3 = *(code**)( bp->callback + 0x40 );
   LAB_00101892:lVar2 = ( *pcVar3 )(bp, cmd, larg, parg);
   pcVar3 = *(code**)&bp->init;
   if ((code*)bp->cb_arg == (code*)0x0) {
      if (pcVar3 == (code*)0x0) {
         return lVar2;
      }
   } else if (pcVar3 == (code*)0x0) {
      for (int i_2066 = 0; i_2066 < 2; i_2066++) {
         /* WARNING: Could not recover jumptable at 0x001018d0. Too many branches */
      }
      lVar2 = ( *(code*)bp->cb_arg )(bp, 0x86, parg, cmd, larg, lVar2);
      return lVar2;
   }
   lVar2 = ( *pcVar3 )(bp, 0x86, parg, 0, cmd, larg, lVar2, 0);
   return lVar2;
}void BIO_get_rpoll_descriptor(BIO *param_1, void *param_2) {
   BIO_ctrl(param_1, 0x5b, 0, param_2);
   return;
}void BIO_get_wpoll_descriptor(BIO *param_1, void *param_2) {
   BIO_ctrl(param_1, 0x5c, 0, param_2);
   return;
}int BIO_get_line(BIO *param_1, char *param_2, int param_3) {
   char cVar1;
   int iVar2;
   long lVar3;
   char *pcVar4;
   char *data;
   undefined8 uVar5;
   char *pcVar6;
   if (param_2 == (char*)0x0) {
      ERR_new();
      uVar5 = 0x25d;
   } else {
      if (param_3 < 1) {
         ERR_new();
         ERR_set_debug("crypto/bio/bio_lib.c", 0x261, "BIO_get_line");
         ERR_set_error(0x20, 0x7d, 0);
         return -1;
      }
      *param_2 = '\0';
      if (param_1 != (BIO*)0x0) {
         if (param_1->num == 0) {
            ERR_new();
            ERR_set_debug("crypto/bio/bio_lib.c", 0x26b, "BIO_get_line");
            ERR_set_error(0x20, 0x78, 0);
            return -1;
         }
         iVar2 = 0;
         pcVar6 = param_2 + ( param_3 - 1 );
         data = param_2;
         do {
            if (data == pcVar6) {
               *pcVar6 = '\0';
               pcVar4 = pcVar6;
               if (iVar2 == 0) {
                  LAB_00101a66:lVar3 = BIO_ctrl(param_1, 2, 0, (void*)0x0);
                  if ((int)lVar3 == 0) {
                     return iVar2;
                  }
               }
               goto LAB_00101a3e;
            }
            iVar2 = BIO_read(param_1, data, 1);
            if (iVar2 < 1) {
               *data = '\0';
               pcVar4 = data;
               goto LAB_00101a66;
            }
            pcVar4 = data + 1;
            cVar1 = *data;
            data = pcVar4;
         } while ( cVar1 != '\n' );
         *pcVar4 = '\0';
         LAB_00101a3e:return (int)pcVar4 - (int)param_2;
      }
      ERR_new();
      uVar5 = 0x267;
   }
   ERR_set_debug("crypto/bio/bio_lib.c", uVar5, "BIO_get_line");
   ERR_set_error(0x20, 0xc0102, 0);
   return -1;
}long BIO_int_ctrl(BIO *bp, int cmd, long larg, int iarg) {
   long lVar1;
   long in_FS_OFFSET;
   int local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_14 = iarg;
   lVar1 = BIO_ctrl(bp, cmd, larg, &local_14);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}char *BIO_ptr_ctrl(BIO *bp, int cmd, long larg) {
   long lVar1;
   char *pcVar2;
   long in_FS_OFFSET;
   char *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = (char*)0x0;
   lVar1 = BIO_ctrl(bp, cmd, larg, &local_18);
   pcVar2 = (char*)0x0;
   if (0 < lVar1) {
      pcVar2 = local_18;
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pcVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}long BIO_callback_ctrl(BIO *b, int cmd, fp *fp) {
   code *pcVar1;
   long lVar2;
   code *pcVar3;
   fp *local_10;
   if (b == (BIO*)0x0) {
      return -2;
   }
   local_10 = fp;
   if (( ( b->callback == (_func_603*)0x0 ) || ( pcVar3 = *(code**)( b->callback + 0x58 ) ),cmd != 0xe )) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x2b6, "BIO_callback_ctrl");
      ERR_set_error(0x20, 0x79, 0);
      return -2;
   }
   pcVar1 = *(code**)&b->init;
   if ((code*)b->cb_arg == (code*)0x0) {
      if (pcVar1 == (code*)0x0) goto LAB_00101c47;
      LAB_00101c95:lVar2 = ( *pcVar1 )(b, 6, &local_10, 0, 0xe, 0, 1, 0);
   } else {
      if (pcVar1 != (code*)0x0) goto LAB_00101c95;
      lVar2 = ( *(code*)b->cb_arg )(b, 6, &local_10, 0xe, 0, 1);
   }
   if (lVar2 < 1) {
      return lVar2;
   }
   pcVar3 = *(code**)( b->callback + 0x58 );
   LAB_00101c47:lVar2 = ( *pcVar3 )(b, 0xe, local_10);
   pcVar3 = *(code**)&b->init;
   if ((code*)b->cb_arg == (code*)0x0) {
      if (pcVar3 == (code*)0x0) {
         return lVar2;
      }
   } else if (pcVar3 == (code*)0x0) {
      lVar2 = ( *(code*)b->cb_arg )(b, 0x86, &local_10, 0xe, 0, lVar2);
      return lVar2;
   }
   lVar2 = ( *pcVar3 )(b, 0x86, &local_10, 0, 0xe, 0, lVar2, 0);
   return lVar2;
}size_t BIO_ctrl_pending(BIO *b) {
   size_t sVar1;
   sVar1 = BIO_ctrl(b, 10, 0, (void*)0x0);
   if ((long)sVar1 < 0) {
      sVar1 = 0;
   }
   return sVar1;
}size_t BIO_ctrl_wpending(BIO *b) {
   size_t sVar1;
   sVar1 = BIO_ctrl(b, 0xd, 0, (void*)0x0);
   if ((long)sVar1 < 0) {
      sVar1 = 0;
   }
   return sVar1;
}BIO *BIO_push(BIO *b, BIO *append) {
   BIO *pBVar1;
   BIO *parg;
   pBVar1 = b;
   if (b == (BIO*)0x0) {
      return append;
   }
   do {
      parg = pBVar1;
      pBVar1 = *(BIO**)&parg->references;
   } while ( *(BIO**)&parg->references != (BIO*)0x0 );
   *(BIO**)&parg->references = append;
   if (append != (BIO*)0x0) {
      append->num_read = (ulong)parg;
   }
   BIO_ctrl(b, 6, 0, parg);
   return b;
}BIO *BIO_pop(BIO *b) {
   BIO *pBVar1;
   ulong uVar2;
   if (b != (BIO*)0x0) {
      pBVar1 = *(BIO**)&b->references;
      BIO_ctrl(b, 7, 0, b);
      uVar2 = b->num_read;
      if (uVar2 != 0) {
         *(undefined8*)( uVar2 + 0x48 ) = *(undefined8*)&b->references;
      }
      if (*(long*)&b->references != 0) {
         *(ulong*)( *(long*)&b->references + 0x50 ) = uVar2;
      }
      b->references = 0;
      *(undefined4*)&b->field_0x4c = 0;
      b->num_read = 0;
      return pBVar1;
   }
   return (BIO*)0x0;
}BIO *BIO_get_retry_BIO(BIO *bio, int *reason) {
   int iVar1;
   BIO *b;
   BIO *pBVar2;
   pBVar2 = bio;
   do {
      b = bio;
      iVar1 = BIO_test_flags(b, 8);
      if (iVar1 == 0) break;
      bio = *(BIO**)&b->references;
      pBVar2 = b;
   } while ( *(BIO**)&b->references != (BIO*)0x0 );
   if (reason != (int*)0x0) {
      *reason = *(int*)( (long)&pBVar2->ptr + 4 );
   }
   return pBVar2;
}int BIO_get_retry_reason(BIO *bio) {
   return *(int*)( (long)&bio->ptr + 4 );
}void BIO_set_retry_reason(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x34 ) = param_2;
   return;
}BIO *BIO_find_type(BIO *b, int bio_type) {
   if (b == (BIO*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x331, "BIO_find_type");
      ERR_set_error(0x20, 0xc0102, 0);
      return (BIO*)0x0;
   }
   if ((char)bio_type == '\0') {
      while (( b->callback == (_func_603*)0x0 || ( ( bio_type & *(uint*)b->callback ) == 0 ) )) {
         b = *(BIO**)&b->references;
         if (b == (BIO*)0x0) {
            return (BIO*)0x0;
         }
      };
   } else {
      while (( b->callback == (_func_603*)0x0 || ( bio_type != *(int*)b->callback ) )) {
         b = *(BIO**)&b->references;
         if (b == (BIO*)0x0) {
            return (BIO*)0x0;
         }
      };
   }
   return b;
}BIO *BIO_next(BIO *b) {
   if (b != (BIO*)0x0) {
      return *(BIO**)&b->references;
   }
   return (BIO*)0x0;
}void BIO_set_next(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x48 ) = param_2;
   return;
}void BIO_free_all(BIO *a) {
   BIO *pBVar1;
   ulong uVar2;
   if (a == (BIO*)0x0) {
      return;
   }
   do {
      uVar2 = a->num_write;
      pBVar1 = *(BIO**)&a->references;
      BIO_free(a);
      if (1 < (int)uVar2) {
         return;
      }
      a = pBVar1;
   } while ( pBVar1 != (BIO*)0x0 );
   return;
}BIO *BIO_dup_chain(BIO *in) {
   int iVar1;
   undefined4 uVar2;
   int iVar3;
   BIO *a;
   long lVar4;
   BIO *a_00;
   BIO *b;
   if (in != (BIO*)0x0) {
      a_00 = (BIO*)0x0;
      b = (BIO*)0x0;
      while (a = BIO_new((BIO_METHOD*)in->callback),a != (BIO*)0x0) {
         iVar3 = in->init;
         iVar1 = in->shutdown;
         a->cb_arg = in->cb_arg;
         a->init = iVar3;
         a->shutdown = iVar1;
         iVar3 = in->retry_reason;
         a->flags = in->flags;
         a->retry_reason = iVar3;
         uVar2 = *(undefined4*)&in->field_0x2c;
         a->num = in->num;
         *(undefined4*)&a->field_0x2c = uVar2;
         *(undefined4*)&a->ptr = *(undefined4*)&in->ptr;
         *(undefined4*)&a->next_bio = *(undefined4*)&in->next_bio;
         lVar4 = BIO_ctrl(in, 0xc, 0, a);
         if (( lVar4 < 1 ) || ( iVar3 = CRYPTO_dup_ex_data(0xc, (CRYPTO_EX_DATA*)( a + 1 ), (CRYPTO_EX_DATA*)( in + 1 )) ),iVar3 == 0) {
            BIO_free(a);
            break;
         }
         if (a_00 == (BIO*)0x0) {
            in = *(BIO**)&in->references;
            a_00 = a;
         } else {
            BIO_push(b, a);
            in = *(BIO**)&in->references;
         }
         b = a;
         if (in == (BIO*)0x0) {
            return a_00;
         }
      };
      BIO_free_all(a_00);
   }
   return (BIO*)0x0;
}void BIO_copy_next_retry(BIO *b) {
   int flags;
   flags = BIO_test_flags(*(BIO**)&b->references, 0xf);
   BIO_set_flags(b, flags);
   *(undefined4*)( (long)&b->ptr + 4 ) = *(undefined4*)( *(long*)&b->references + 0x34 );
   return;
}int BIO_set_ex_data(BIO *bio, int idx, void *data) {
   int iVar1;
   iVar1 = CRYPTO_set_ex_data((CRYPTO_EX_DATA*)( bio + 1 ), idx, data);
   return iVar1;
}void *BIO_get_ex_data(BIO *bio, int idx) {
   void *pvVar1;
   pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA*)( bio + 1 ), idx);
   return pvVar1;
}ulong BIO_number_read(BIO *bio) {
   stack_st_void *psVar1;
   psVar1 = (stack_st_void*)0x0;
   if (bio != (BIO*)0x0) {
      psVar1 = (bio->ex_data).sk;
   }
   return (ulong)psVar1;
}ulong BIO_number_written(BIO *bio) {
   ulong uVar1;
   uVar1 = 0;
   if (bio != (BIO*)0x0) {
      uVar1 = *(ulong*)&(bio->ex_data).dummy;
   }
   return uVar1;
}void bio_free_ex_data(void *param_1) {
   CRYPTO_free_ex_data(0xc, param_1, (CRYPTO_EX_DATA*)( (long)param_1 + 0x70 ));
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void bio_cleanup(void) {
   bio_sock_cleanup_int();
   CRYPTO_THREAD_lock_free(_bio_lookup_lock);
   _bio_lookup_lock = 0;
   return;
}int BIO_wait(BIO *param_1, long param_2, uint param_3) {
   int iVar1;
   uint uVar2;
   long lVar3;
   time_t tVar4;
   char cVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   undefined4 local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 0) {
      LAB_001021a1:iVar1 = 1;
   } else {
      uVar6 = (ulong)param_3;
      lVar3 = BIO_ctrl(param_1, 0x69, 0, &local_24);
      if (lVar3 < 1) {
         LAB_00102250:tVar4 = time((time_t*)0x0);
         param_2 = param_2 - tVar4;
         if (-1 < param_2) {
            if (param_2 == 0) {
               uVar2 = 1000;
               if (param_3 < 0x3e9) {
                  uVar2 = param_3;
               }
               uVar6 = (ulong)uVar2;
            } else if (( ulong )(param_2 * 1000) < uVar6) {
               uVar6 = ( ulong )(uint)((int)param_2 * 1000);
            }
            OSSL_sleep(uVar6);
            goto LAB_001021a1;
         }
         ERR_new();
         iVar1 = 0;
         ERR_set_debug("crypto/bio/bio_lib.c", 0x3ee, "BIO_wait");
         cVar5 = 'i';
      } else {
         iVar1 = BIO_test_flags(param_1, 1);
         iVar1 = BIO_socket_wait(local_24, iVar1, param_2);
         if (iVar1 == -1) goto LAB_00102250;
         if (0 < iVar1) goto LAB_001021a6;
         ERR_new();
         ERR_set_debug("crypto/bio/bio_lib.c", 0x3ee, "BIO_wait");
         cVar5 = ( iVar1 == 0 ) + 'h';
      }
      ERR_set_error(0x20, cVar5, 0);
   }
   LAB_001021a6:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}ulong BIO_do_connect_retry(BIO *param_1, int param_2, uint param_3) {
   int iVar1;
   uint uVar2;
   time_t tVar3;
   ulong uVar4;
   long lVar5;
   uint uVar6;
   ulong uVar7;
   char cVar8;
   long lVar9;
   long in_FS_OFFSET;
   bool bVar10;
   undefined4 local_44;
   long local_40;
   lVar9 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0 < param_2) {
      tVar3 = time((time_t*)0x0);
      lVar9 = param_2 + tVar3;
   }
   if (param_1 == (BIO*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x402, "BIO_do_connect_retry");
      ERR_set_error(0x20, 0xc0102, 0);
      LAB_0010246d:uVar7 = 0xffffffff;
   } else {
      if ((int)param_3 < 0) {
         param_3 = 100;
      }
      BIO_ctrl(param_1, 0x66, ( ulong )(0 < param_2), (void*)0x0);
      LAB_00102330:do {
         do {
            ERR_set_mark();
            uVar4 = BIO_ctrl(param_1, 0x65, 0, (void*)0x0);
            uVar7 = uVar4 & 0xffffffff;
            if (0 < (int)uVar4) {
               ERR_clear_last_mark();
               goto LAB_00102512;
            }
            uVar4 = ERR_peek_last_error();
            uVar2 = (uint)uVar4;
            if ((int)uVar2 < 0) {
               iVar1 = BIO_test_flags(param_1, 8);
               bVar10 = iVar1 != 0;
               if (-1 < param_2) goto LAB_0010238c;
               LAB_00102460:ERR_clear_last_mark();
               if (uVar2 == 0) {
                  ERR_new();
                  ERR_set_debug("crypto/bio/bio_lib.c", 0x433, "BIO_do_connect_retry");
                  ERR_set_error(0x20, 0x67, 0);
               }
               goto LAB_0010246d;
            }
            iVar1 = BIO_test_flags(param_1, 8);
            if (( (ulong)(long)(int)uVar2 >> 0x17 == 0x20 ) && ( ( ( uVar6 = uVar2 & 0x7fffff ),uVar6 == 0x6e || ( uVar6 == 0x80002 ) ) || ( uVar6 == 0x67 ) )) {
               BIO_ctrl(param_1, 1, 0, (void*)0x0);
               bVar10 = true;
            } else {
               bVar10 = iVar1 != 0;
            }
            if (param_2 < 0) goto LAB_00102460;
            LAB_0010238c:if (!bVar10) goto LAB_00102460;
            ERR_pop_to_mark();
         } while ( lVar9 == 0 );
         lVar5 = BIO_ctrl(param_1, 0x69, 0, &local_44);
         if (lVar5 < 1) {
            LAB_001023d9:tVar3 = time((time_t*)0x0);
            lVar5 = lVar9 - tVar3;
            if (lVar5 < 0) {
               ERR_new();
               uVar7 = 0;
               ERR_set_debug("crypto/bio/bio_lib.c", 0x42c, "BIO_do_connect_retry");
               cVar8 = -0x6d;
               goto LAB_00102504;
            }
            if (lVar5 == 0) {
               uVar2 = 1000;
               if (param_3 < 0x3e9) {
                  uVar2 = param_3;
               }
            } else {
               uVar2 = param_3;
               if (( ulong )(lVar5 * 1000) < (ulong)(long)(int)param_3) {
                  uVar2 = (int)lVar5 * 1000;
               }
            }
            OSSL_sleep(uVar2);
            goto LAB_00102330;
         }
         iVar1 = BIO_test_flags(param_1, 1);
         uVar2 = BIO_socket_wait(local_44, iVar1, lVar9);
         uVar7 = (ulong)uVar2;
         if (uVar2 == 0xffffffff) goto LAB_001023d9;
      } while ( 0 < (int)uVar2 );
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c", 0x42c, "BIO_do_connect_retry");
      cVar8 = ( -(uVar2 == 0) & 0x2cU ) + 0x67;
      LAB_00102504:ERR_set_error(0x20, cVar8, 0);
   }
   LAB_00102512:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar7;
}
