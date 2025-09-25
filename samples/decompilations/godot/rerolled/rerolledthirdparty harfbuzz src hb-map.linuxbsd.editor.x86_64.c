/* void hb_object_fini<hb_hashmap_t<unsigned int, unsigned int, true> >(hb_hashmap_t<unsigned int,
   unsigned int, true>*) */void hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>(hb_hashmap_t *param_1) {
   long lVar1;
   int iVar2;
   pthread_mutex_t *__mutex;
   code *pcVar3;
   undefined8 uVar4;
   *(undefined4*)param_1 = 0xffff2153;
   __mutex = *(pthread_mutex_t**)( param_1 + 8 );
   if (__mutex == (pthread_mutex_t*)0x0) {
      return;
   }

   if (*(int*)( (long)__mutex + 0x2c ) != 0) {
      do {
         pthread_mutex_lock(__mutex);
         iVar2 = *(int*)( (long)__mutex + 0x2c );
         while (true) {
            if (iVar2 == 0) {
               if (__mutex[1].__data.__lock != 0) {
                  free(*(void**)( (long)__mutex + 0x30 ));
               }

               __mutex[1].__align = 0;
               *(undefined8*)( (long)__mutex + 0x30 ) = 0;
               pthread_mutex_unlock(__mutex);
               goto LAB_001000a3;
            }

            lVar1 = *(long*)( (long)__mutex + 0x30 ) + ( ulong )(iVar2 - 1U) * 0x18;
            pcVar3 = *(code**)( lVar1 + 0x10 );
            uVar4 = *(undefined8*)( lVar1 + 8 );
            *(uint*)( (long)__mutex + 0x2c ) = iVar2 - 1U;
            pthread_mutex_unlock(__mutex);
            if (pcVar3 == (code*)0x0) break;
            ( *pcVar3 )(uVar4);
            pthread_mutex_lock(__mutex);
            iVar2 = *(int*)( (long)__mutex + 0x2c );
         }
;
      }
 while ( true );
   }

   if (__mutex[1].__data.__lock != 0) {
      free(*(void**)( (long)__mutex + 0x30 ));
   }

   __mutex[1].__align = 0;
   *(undefined8*)( (long)__mutex + 0x30 ) = 0;
   LAB_001000a3:pthread_mutex_destroy(__mutex);
   free(__mutex);
   *(undefined8*)( param_1 + 8 ) = 0;
   return;
}
undefined1[16];hb_map_create(void) {
   undefined8 extraout_RDX;
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   auVar1._0_8_ = (undefined4*)calloc(1, 0x30);
   if (auVar1._0_8_ != (undefined4*)0x0) {
      *auVar1._0_8_ = 1;
      auVar1._0_8_[1] = 1;
      *(undefined8*)( auVar1._0_8_ + 2 ) = 0;
      *(undefined1*)( auVar1._0_8_ + 4 ) = 1;
      *(undefined2*)( (long)auVar1._0_8_ + 0x12 ) = 0;
      *(undefined8*)( auVar1._0_8_ + 10 ) = 0;
      *(undefined1(*) [16])( auVar1._0_8_ + 5 ) = (undefined1[16])0x0;
      *auVar1._0_8_ = 1;
      auVar1._0_8_[1] = 1;
      *(undefined8*)( auVar1._0_8_ + 2 ) = 0;
      auVar1._8_4_ = *auVar1._0_8_;
      auVar1._12_4_ = 0;
      return auVar1;
   }

   auVar2._8_8_ = extraout_RDX;
   auVar2._0_8_ = &_hb_NullPool;
   return auVar2;
}
undefined *hb_map_get_empty(void) {
   return &_hb_NullPool;
}
int *hb_map_reference(int *param_1) {
   if (( param_1 != (int*)0x0 ) && ( *param_1 != 0 )) {
      LOCK();
      *param_1 = *param_1 + 1;
      UNLOCK();
   }

   return param_1;
}
void hb_map_destroy(hb_hashmap_t *param_1) {
   if (param_1 == (hb_hashmap_t*)0x0) {
      return;
   }

   if (*(int*)param_1 != 0) {
      LOCK();
      *(int*)param_1 = *(int*)param_1 + -1;
      UNLOCK();
      if (*(int*)param_1 == 0) {
         hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>(param_1);
         hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>(param_1);
         if (*(void**)( param_1 + 0x28 ) != (void*)0x0) {
            free(*(void**)( param_1 + 0x28 ));
         }

         free(param_1);
         return;
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */bool hb_map_set_user_data(int *param_1, long param_2, long param_3, long param_4, int param_5) {
   uint uVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   long lVar5;
   uint uVar6;
   pthread_mutex_t *__mutex;
   long *plVar7;
   ulong uVar8;
   uint uVar9;
   ulong uVar10;
   long *plVar11;
   if (( param_1 == (int*)0x0 ) || ( *param_1 == 0 )) {
      return false;
   }

   plVar7 = (long*)( param_1 + 2 );
   while (__mutex = (pthread_mutex_t*)*plVar7,__mutex == (pthread_mutex_t*)0x0) {
      __mutex = (pthread_mutex_t*)calloc(1, 0x38);
      if (__mutex == (pthread_mutex_t*)0x0) {
         return false;
      }

      pthread_mutex_init(__mutex, (pthread_mutexattr_t*)0x0);
      __mutex[1].__align = 0;
      *(undefined8*)( (long)__mutex + 0x30 ) = 0;
      LOCK();
      lVar2 = *plVar7;
      if (lVar2 == 0) {
         *plVar7 = (long)__mutex;
      }

      UNLOCK();
      if (lVar2 == 0) break;
      if (*(int*)( (long)__mutex + 0x2c ) == 0) {
         if (__mutex[1].__data.__lock != 0) {
            free(*(void**)( (long)__mutex + 0x30 ));
         }

         __mutex[1].__align = 0;
         *(undefined8*)( (long)__mutex + 0x30 ) = 0;
      }
 else {
         while (true) {
            pthread_mutex_lock(__mutex);
            if (*(int*)( (long)__mutex + 0x2c ) == 0) break;
            uVar9 = *(int*)( (long)__mutex + 0x2c ) - 1;
            lVar2 = *(long*)( (long)__mutex + 0x30 ) + (ulong)uVar9 * 0x18;
            uVar4 = *(undefined8*)( lVar2 + 8 );
            pcVar3 = *(code**)( lVar2 + 0x10 );
            *(uint*)( (long)__mutex + 0x2c ) = uVar9;
            pthread_mutex_unlock(__mutex);
            if (pcVar3 != (code*)0x0) {
               ( *pcVar3 )(uVar4);
            }

         }
;
         if (__mutex[1].__data.__lock != 0) {
            free(*(void**)( (long)__mutex + 0x30 ));
         }

         __mutex[1].__align = 0;
         *(undefined8*)( (long)__mutex + 0x30 ) = 0;
         pthread_mutex_unlock(__mutex);
      }

      pthread_mutex_destroy(__mutex);
      free(__mutex);
   }
;
   if (param_2 == 0) {
      return false;
   }

   if (( param_5 != 0 ) && ( param_3 == 0 && param_4 == 0 )) {
      pthread_mutex_lock(__mutex);
      uVar9 = *(uint*)( (long)__mutex + 0x2c );
      plVar7 = *(long**)( (long)__mutex + 0x30 );
      if (uVar9 != 0) {
         uVar6 = 0;
         plVar11 = plVar7;
         do {
            if (param_2 == *plVar11) {
               plVar11 = plVar7 + (ulong)uVar6 * 3;
               if (plVar11 != (long*)0x0) {
                  lVar2 = plVar11[1];
                  pcVar3 = (code*)plVar11[2];
                  plVar7 = plVar7 + ( ulong )(uVar9 - 1) * 3;
                  lVar5 = plVar7[1];
                  *plVar11 = *plVar7;
                  plVar11[1] = lVar5;
                  plVar11[2] = plVar7[2];
                  *(uint*)( (long)__mutex + 0x2c ) = uVar9 - 1;
                  pthread_mutex_unlock(__mutex);
                  if (pcVar3 == (code*)0x0) {
                     return true;
                  }

                  ( *pcVar3 )(lVar2);
                  return true;
               }

               break;
            }

            uVar6 = uVar6 + 1;
            plVar11 = plVar11 + 3;
         }
 while ( uVar9 != uVar6 );
      }

      pthread_mutex_unlock(__mutex);
      return true;
   }

   pthread_mutex_lock(__mutex);
   uVar9 = *(uint*)( (long)__mutex + 0x2c );
   uVar8 = (ulong)uVar9;
   plVar7 = *(long**)( (long)__mutex + 0x30 );
   if (uVar9 == 0) {
      uVar6 = 1;
      if (__mutex[1].__data.__lock < 1) {
         if (__mutex[1].__data.__lock != 0) goto LAB_001006a8;
         uVar10 = 8;
         LAB_0010063c:plVar7 = (long*)realloc(plVar7, uVar10 * 0x18);
         if (plVar7 == (long*)0x0) {
            if ((uint)__mutex[1].__data.__lock < (uint)uVar10) {
               __mutex[1].__data.__lock = ~__mutex[1].__data.__lock;
               goto LAB_001006a8;
            }

            uVar8 = ( ulong ) * (uint*)( (long)__mutex + 0x2c );
            plVar7 = *(long**)( (long)__mutex + 0x30 );
            uVar6 = *(uint*)( (long)__mutex + 0x2c ) + 1;
         }
 else {
            uVar6 = *(uint*)( (long)__mutex + 0x2c );
            uVar8 = (ulong)uVar6;
            *(long**)( (long)__mutex + 0x30 ) = plVar7;
            __mutex[1].__data.__lock = (uint)uVar10;
            uVar6 = uVar6 + 1;
         }

      }

   }
 else {
      uVar6 = 0;
      plVar11 = plVar7;
      do {
         if (param_2 == *plVar11) {
            plVar11 = plVar7 + (ulong)uVar6 * 3;
            if (plVar11 != (long*)0x0) {
               if (param_5 == 0) {
                  plVar11 = (long*)0x0;
                  pthread_mutex_unlock(__mutex);
               }
 else {
                  lVar2 = plVar11[1];
                  pcVar3 = (code*)plVar11[2];
                  *plVar11 = param_2;
                  plVar11[1] = param_3;
                  plVar11[2] = param_4;
                  pthread_mutex_unlock(__mutex);
                  if (pcVar3 != (code*)0x0) {
                     ( *pcVar3 )(lVar2);
                  }

               }

               goto LAB_00100455;
            }

            break;
         }

         uVar6 = uVar6 + 1;
         plVar11 = plVar11 + 3;
      }
 while ( uVar9 != uVar6 );
      uVar1 = __mutex[1].__data.__lock;
      uVar6 = uVar9 + 1;
      if ((int)uVar1 <= (int)uVar9) {
         if (-1 < (int)uVar1) {
            uVar10 = (ulong)uVar1;
            if (uVar6 <= uVar1) goto LAB_00100603;
            do {
               uVar9 = (int)( uVar10 >> 1 ) + 8 + (int)uVar10;
               uVar10 = (ulong)uVar9;
            }
 while ( uVar9 < uVar6 );
            if (uVar9 < 0xaaaaaab) goto LAB_0010063c;
            __mutex[1].__data.__lock = ~uVar1;
         }

         LAB_001006a8:_minus_1 = _pthread_mutex_init;
         ___stack_chk_fail = __hb_CrapPool;
         plVar11 = (long*)&_hb_CrapPool;
         __hb_CrapPool = __hb_NullPool;
         goto LAB_0010061a;
      }

   }

   LAB_00100603:*(uint*)( (long)__mutex + 0x2c ) = uVar6;
   plVar11 = plVar7 + uVar8 * 3;
   *plVar11 = param_2;
   plVar11[1] = param_3;
   plVar11[2] = param_4;
   LAB_0010061a:pthread_mutex_unlock(__mutex);
   LAB_00100455:return -1 < __mutex[1].__data.__lock && plVar11 != (long*)0x0;
}
long hb_map_get_user_data(int *param_1, long param_2) {
   pthread_mutex_t *__mutex;
   long lVar1;
   uint uVar2;
   long *plVar3;
   if (( ( param_1 != (int*)0x0 ) && ( *param_1 != 0 ) ) && ( __mutex = *(pthread_mutex_t**)( param_1 + 2 ) ),__mutex != (pthread_mutex_t*)0x0) {
      pthread_mutex_lock(__mutex);
      if (*(uint*)( (long)__mutex + 0x2c ) != 0) {
         uVar2 = 0;
         plVar3 = *(long**)( (long)__mutex + 0x30 );
         do {
            if (param_2 == *plVar3) {
               plVar3 = *(long**)( (long)__mutex + 0x30 ) + (ulong)uVar2 * 3;
               if (plVar3 != (long*)0x0) {
                  lVar1 = plVar3[1];
                  pthread_mutex_unlock(__mutex);
                  return lVar1;
               }

               break;
            }

            uVar2 = uVar2 + 1;
            plVar3 = plVar3 + 3;
         }
 while ( *(uint*)( (long)__mutex + 0x2c ) != uVar2 );
      }

      pthread_mutex_unlock(__mutex);
   }

   return 0;
}
undefined1 hb_map_allocation_successful(long param_1) {
   return *(undefined1*)( param_1 + 0x10 );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int hb_map_get(long param_1, int param_2) {
   byte bVar1;
   long lVar2;
   int *piVar3;
   int iVar4;
   ulong uVar5;
   int *piVar6;
   lVar2 = *(long*)( param_1 + 0x28 );
   piVar6 = (int*)&minus_1;
   if (lVar2 != 0) {
      uVar5 = ( ulong )(param_2 * -0x61c8864f & 0x3fffffff) % ( ulong ) * (uint*)( param_1 + 0x20 );
      piVar3 = (int*)( lVar2 + uVar5 * 0xc );
      bVar1 = *(byte*)( piVar3 + 1 );
      if (( bVar1 & 2 ) != 0) {
         iVar4 = 0;
         while (*piVar3 != param_2) {
            iVar4 = iVar4 + 1;
            uVar5 = ( ulong )((int)uVar5 + iVar4 & *(uint*)( param_1 + 0x1c ));
            piVar3 = (int*)( lVar2 + uVar5 * 0xc );
            bVar1 = *(byte*)( piVar3 + 1 );
            if (( bVar1 & 2 ) == 0) {
               return _minus_1;
            }

         }
;
         piVar6 = (int*)&minus_1;
         if (( bVar1 & 1 ) != 0) {
            piVar6 = piVar3 + 2;
         }

      }

   }

   return *piVar6;
}
void hb_map_del(long param_1, int param_2) {
   byte bVar1;
   long lVar2;
   int *piVar3;
   int iVar4;
   ulong uVar5;
   lVar2 = *(long*)( param_1 + 0x28 );
   if (lVar2 != 0) {
      uVar5 = ( ulong )(param_2 * -0x61c8864f & 0x3fffffff) % ( ulong ) * (uint*)( param_1 + 0x20 );
      piVar3 = (int*)( lVar2 + uVar5 * 0xc );
      bVar1 = *(byte*)( piVar3 + 1 );
      if (( bVar1 & 2 ) != 0) {
         iVar4 = 0;
         do {
            if (*piVar3 == param_2) {
               if (( bVar1 & 1 ) == 0) {
                  return;
               }

               *(byte*)( piVar3 + 1 ) = *(byte*)( piVar3 + 1 ) & 0xfe;
               *(int*)( param_1 + 0x14 ) = *(int*)( param_1 + 0x14 ) + -1;
               return;
            }

            iVar4 = iVar4 + 1;
            uVar5 = ( ulong )((int)uVar5 + iVar4 & *(uint*)( param_1 + 0x1c ));
            piVar3 = (int*)( lVar2 + uVar5 * 0xc );
            bVar1 = *(byte*)( piVar3 + 1 );
         }
 while ( ( bVar1 & 2 ) != 0 );
      }

   }

   return;
}
byte hb_map_has(long param_1, int param_2) {
   byte bVar1;
   long lVar2;
   int *piVar3;
   ulong uVar4;
   int iVar5;
   lVar2 = *(long*)( param_1 + 0x28 );
   if (lVar2 != 0) {
      uVar4 = ( ulong )(param_2 * -0x61c8864f & 0x3fffffff) % ( ulong ) * (uint*)( param_1 + 0x20 );
      piVar3 = (int*)( lVar2 + uVar4 * 0xc );
      bVar1 = *(byte*)( piVar3 + 1 );
      if (( bVar1 & 2 ) != 0) {
         iVar5 = 0;
         do {
            if (*piVar3 == param_2) {
               return bVar1 & 1;
            }

            iVar5 = iVar5 + 1;
            uVar4 = ( ulong )((int)uVar4 + iVar5 & *(uint*)( param_1 + 0x1c ));
            piVar3 = (int*)( lVar2 + uVar4 * 0xc );
            bVar1 = *(byte*)( piVar3 + 1 );
         }
 while ( ( bVar1 & 2 ) != 0 );
      }

   }

   return 0;
}
void hb_map_clear(long param_1) {
   undefined4 *puVar1;
   undefined4 *puVar2;
   if (*(char*)( param_1 + 0x10 ) != '\0') {
      if (*(int*)( param_1 + 0x1c ) != 0) {
         puVar2 = *(undefined4**)( param_1 + 0x28 );
         puVar1 = puVar2 + ( ulong )(*(int*)( param_1 + 0x1c ) + 1) * 3;
         for (; puVar2 != puVar1; puVar2 = puVar2 + 3) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
         }

      }

      *(undefined8*)( param_1 + 0x14 ) = 0;
   }

   return;
}
bool hb_map_is_empty(long param_1) {
   return *(int*)( param_1 + 0x14 ) == 0;
}
undefined4 hb_map_get_population(long param_1) {
   return *(undefined4*)( param_1 + 0x14 );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 hb_map_is_equal(long param_1, long param_2) {
   byte bVar1;
   int iVar2;
   char cVar3;
   undefined8 uVar4;
   int *piVar5;
   ulong uVar6;
   uint uVar7;
   item_t *this;
   item_t *this_00;
   int iVar8;
   int *piVar9;
   uint uVar10;
   long lVar11;
   item_t *local_48;
   uint local_3c;
   if (*(int*)( param_1 + 0x14 ) != *(int*)( param_2 + 0x14 )) {
      return 0;
   }

   this * (item_t**)( param_1 + 0x28 );
   uVar7 = *(int*)( param_1 + 0x1c ) + 1;
   if (*(int*)( param_1 + 0x1c ) - 1U < 0xfffffffe) {
      do {
         cVar3 = hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::is_real(this);
         if (cVar3 != '\0') {
            local_48 = this + (ulong)uVar7 * 0xc;
            break;
         }

         this =
         this + 0xc;
         uVar7 = uVar7 - 1;
         local_48 = this;
      }
 while ( uVar7 != 0 );
   }
 else {
      uVar7 = 0;
      local_48 = this;
   }

   joined_r0x00100a58:if (local_48 == this) {
      if (uVar7 == 0) {
         return 1;
      }

      local_3c = *(uint*)( param_2 + 0x20 );
      lVar11 = *(long*)( param_2 + 0x28 );
      uVar10 = *(uint*)( param_2 + 0x1c );
      this_00 = local_48;
   }
 else {
      if (uVar7 == 0) {
         local_3c = *(uint*)( param_2 + 0x20 );
         lVar11 = *(long*)( param_2 + 0x28 );
         uVar10 = *(uint*)( param_2 + 0x1c );
         goto LAB_00100b89;
      }

      local_3c = *(uint*)( param_2 + 0x20 );
      lVar11 = *(long*)( param_2 + 0x28 );
      uVar10 = *(uint*)( param_2 + 0x1c );
      this_00 = this;
   }

   do {
      uVar4 = hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::get_pair(this_00);
      piVar9 = (int*)&minus_1;
      if (lVar11 == 0) {
         LAB_00100af6:iVar2 = *piVar9;
      }
 else {
         uVar6 = ( ulong )((int)uVar4 * -0x61c8864f & 0x3fffffff) % (ulong)local_3c;
         piVar5 = (int*)( lVar11 + uVar6 * 0xc );
         bVar1 = *(byte*)( piVar5 + 1 );
         if (( bVar1 & 2 ) == 0) goto LAB_00100af6;
         iVar8 = 0;
         do {
            if ((int)uVar4 == *piVar5) {
               piVar9 = piVar5 + 2;
               if (( bVar1 & 1 ) == 0) {
                  piVar9 = (int*)&minus_1;
               }

               goto LAB_00100af6;
            }

            iVar8 = iVar8 + 1;
            uVar6 = ( ulong )((int)uVar6 + iVar8 & uVar10);
            piVar5 = (int*)( lVar11 + uVar6 * 0xc );
            bVar1 = *(byte*)( piVar5 + 1 );
            iVar2 = _minus_1;
         }
 while ( ( bVar1 & 2 ) != 0 );
      }

      if (iVar2 != (int)( (ulong)uVar4 >> 0x20 )) {
         return 0;
      }

      if (uVar7 != 0) break;
      if (this == local_48) {
         return 1;
      }

      LAB_00100b89:__hb_CrapPool = __hb_NullPool;
      uVar7 = 0;
      this_00 = (item_t*)&_hb_CrapPool;
      _minus_1 = _pthread_mutex_init;
   }
 while ( true );
   while (cVar3 = hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::is_real(this),cVar3 == '\0') {
      this =
      this + 0xc;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) break;
   }
;
   goto joined_r0x00100a58;
}
uint hb_map_hash(long param_1) {
   char cVar1;
   int iVar2;
   item_t *this;
   uint uVar3;
   if (*(int*)( param_1 + 0x1c ) == 0) {
      return 0;
   }

   iVar2 = *(int*)( param_1 + 0x1c ) + 1;
   if (iVar2 != 0) {
      this * (item_t**)( param_1 + 0x28 );
      do {
         cVar1 = hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::is_real(this);
         if (cVar1 != '\0') {
            uVar3 = 0;
            do {
               uVar3 = uVar3 ^ ( *(uint*)( this + 4 ) >> 2 ) * 0x1f + *(int*)( this + 8 ) * -0x61c8864f;
               do {
                  iVar2 = iVar2 + -1;
                  if (iVar2 == 0) {
                     return uVar3;
                  }

                  this =
                  this + 0xc;
                  cVar1 = hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::is_real(this);
               }
 while ( cVar1 == '\0' );
            }
 while ( true );
         }

         this =
         this + 0xc;
         iVar2 = iVar2 + -1;
      }
 while ( iVar2 != 0 );
   }

   return 0;
}
undefined8 hb_map_next(long param_1, uint *param_2, undefined4 *param_3, undefined4 *param_4) {
   undefined4 *puVar1;
   uint uVar2;
   uint uVar3;
   long lVar4;
   if (*(int*)( param_1 + 0x1c ) != 0) {
      uVar3 = *(int*)( param_1 + 0x1c ) + 1;
      uVar2 = *param_2 + 1;
      if (uVar2 < uVar3) {
         lVar4 = *(long*)( param_1 + 0x28 ) + (ulong)uVar2 * 0xc;
         do {
            if (( *(byte*)( lVar4 + 4 ) & 1 ) != 0) {
               if (uVar2 < uVar3) {
                  puVar1 = (undefined4*)( *(long*)( param_1 + 0x28 ) + (ulong)uVar2 * 0xc );
                  *param_3 = *puVar1;
                  *param_4 = puVar1[2];
                  *param_2 = uVar2;
                  return 1;
               }

               break;
            }

            uVar2 = uVar2 + 1;
            lVar4 = lVar4 + 0xc;
         }
 while ( uVar2 < uVar3 );
      }

   }

   *param_2 = 0xffffffff;
   return 0;
}
void hb_map_keys(long param_1, undefined8 param_2) {
   char cVar1;
   int iVar2;
   item_t *this;
   int iVar3;
   long in_FS_OFFSET;
   item_t *local_78;
   int local_70;
   int local_6c;
   code *local_68;
   undefined8 local_60;
   undefined1 *local_58;
   code *local_50;
   undefined8 local_48;
   undefined1 *local_40;
   long local_30;
   iVar3 = 0;
   iVar2 = *(int*)( param_1 + 0x1c );
   this * (item_t**)( param_1 + 0x28 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (iVar2 != 0) {
      iVar2 = iVar2 + 1;
      iVar3 = 0;
      while (( iVar2 != 0 && ( cVar1 = hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::is_real(this) ),cVar1 == '\0' )) {
         iVar3 = iVar3 + 1;
         this =
         this + 0xc;
         iVar2 = iVar2 + -1;
      }
;
   }

   local_68 = hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::is_real;
   local_58 = &hb_identity;
   local_50 = hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::get_key;
   local_40 = &hb_ridentity;
   local_60 = 0;
   local_48 = 0;
   local_78 = this;
   local_70 = iVar2;
   local_6c = iVar3;
   _Z7hb_copyI13hb_map_iter_tIS0_I16hb_filter_iter_tI10hb_array_tIN12hb_hashmap_tIjjLb1EE6item_tEEMS5_KFbvERK10__anon_117LPv0EEMS5_FRjvEL24hb_function_sortedness_t0ELSC_0EERK10__anon_119LSH_0ELSC_0EER8hb_set_tEvOT_OT0_(&local_78, param_2);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void hb_map_values(long param_1, undefined8 param_2) {
   char cVar1;
   int iVar2;
   item_t *this;
   int iVar3;
   long in_FS_OFFSET;
   item_t *local_78;
   int local_70;
   int local_6c;
   code *local_68;
   undefined8 local_60;
   undefined1 *local_58;
   code *local_50;
   undefined8 local_48;
   undefined1 *local_40;
   long local_30;
   iVar3 = 0;
   iVar2 = *(int*)( param_1 + 0x1c );
   this * (item_t**)( param_1 + 0x28 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (iVar2 != 0) {
      iVar2 = iVar2 + 1;
      iVar3 = 0;
      while (( iVar2 != 0 && ( cVar1 = hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::is_real(this) ),cVar1 == '\0' )) {
         iVar3 = iVar3 + 1;
         this =
         this + 0xc;
         iVar2 = iVar2 + -1;
      }
;
   }

   local_68 = hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::is_real;
   local_58 = &hb_identity;
   local_50 = hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::get_value;
   local_40 = &hb_ridentity;
   local_60 = 0;
   local_48 = 0;
   local_78 = this;
   local_70 = iVar2;
   local_6c = iVar3;
   _Z7hb_copyI13hb_map_iter_tIS0_I16hb_filter_iter_tI10hb_array_tIN12hb_hashmap_tIjjLb1EE6item_tEEMS5_KFbvERK10__anon_117LPv0EEMS5_FRjvEL24hb_function_sortedness_t0ELSC_0EERK10__anon_119LSH_0ELSC_0EER8hb_set_tEvOT_OT0_(&local_78, param_2);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void hb_map_update(long param_1, long param_2) {
   char cVar1;
   int iVar2;
   item_t *this;
   int iVar3;
   long in_FS_OFFSET;
   long local_60;
   item_t *local_58;
   int iStack_50;
   int iStack_4c;
   code *local_48;
   undefined8 uStack_40;
   undefined1 *local_38;
   code *pcStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(char*)( param_1 + 0x10 ) != '\0') {
      iVar2 = *(int*)( param_2 + 0x1c );
      this * (item_t**)( param_2 + 0x28 );
      iVar3 = 0;
      local_60 = param_1;
      if (iVar2 != 0) {
         iVar2 = iVar2 + 1;
         iVar3 = 0;
         while (( iVar2 != 0 && ( cVar1 = hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::is_real(this) ),cVar1 == '\0' )) {
            iVar3 = iVar3 + 1;
            this =
            this + 0xc;
            iVar2 = iVar2 + -1;
         }
;
      }

      local_48 = hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::is_real;
      local_38 = &hb_identity;
      uStack_40 = 0;
      pcStack_30 = hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::get_pair;
      local_58 = this;
      iStack_50 = iVar2;
      iStack_4c = iVar3;
      _ZN9hb_sink_tIR12hb_hashmap_tIjjLb1EEEclI13hb_map_iter_tI16hb_filter_iter_tI10hb_array_tINS1_6item_tEEMS8_KFbvERK10__anon_117LPv0EEMS8_KF9hb_pair_tIjjEvEL24hb_function_sortedness_t0ELSF_0EELSF_0EEEvT_(&local_60);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void hb_map_set(hb_hashmap_t<unsigned_int,unsigned_int,true> *param_1, int param_2, int param_3) {
   byte bVar1;
   ushort uVar2;
   long lVar3;
   char cVar4;
   long lVar5;
   int *piVar6;
   ulong uVar7;
   uint uVar8;
   uint uVar9;
   int iVar10;
   uint uVar11;
   if (param_1[0x10] == (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0) {
      return;
   }

   uVar8 = *(uint*)( param_1 + 0x18 );
   if (*(uint*)( param_1 + 0x1c ) <= ( uVar8 >> 1 ) + uVar8) {
      cVar4 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc(param_1, 0);
      if (cVar4 == '\0') {
         return;
      }

      uVar8 = *(uint*)( param_1 + 0x18 );
   }

   lVar3 = *(long*)( param_1 + 0x28 );
   iVar10 = *(int*)( param_1 + 0x14 );
   uVar7 = ( ulong )(param_2 * -0x61c8864f & 0x3fffffff) % ( ulong ) * (uint*)( param_1 + 0x20 );
   lVar5 = uVar7 * 0xc;
   piVar6 = (int*)( lVar3 + lVar5 );
   bVar1 = *(byte*)( piVar6 + 1 );
   if (( bVar1 & 2 ) == 0) {
      *piVar6 = param_2;
      piVar6[2] = param_3;
      piVar6[1] = param_2 * 0x78dde6c4 + 3;
      *(uint*)( param_1 + 0x18 ) = uVar8 + 1;
      *(int*)( param_1 + 0x14 ) = iVar10 + 1;
      return;
   }

   uVar9 = 0;
   uVar11 = 0xffffffff;
   do {
      if (*piVar6 == param_2) {
         if (uVar11 == 0xffffffff) goto LAB_0010129d;
         goto LAB_00101292;
      }

      if (( uVar11 == 0xffffffff ) && ( ( bVar1 & 1 ) == 0 )) {
         uVar11 = (uint)uVar7;
      }

      uVar9 = uVar9 + 1;
      uVar7 = ( ulong )((uint)uVar7 + uVar9 & *(uint*)( param_1 + 0x1c ));
      lVar5 = uVar7 * 0xc;
      piVar6 = (int*)( lVar3 + lVar5 );
      bVar1 = *(byte*)( piVar6 + 1 );
   }
 while ( ( bVar1 & 2 ) != 0 );
   if (uVar11 != 0xffffffff) {
      LAB_00101292:lVar5 = (ulong)uVar11 * 0xc;
      LAB_0010129d:piVar6 = (int*)( lVar3 + lVar5 );
      if (( *(byte*)( piVar6 + 1 ) & 2 ) != 0) {
         iVar10 = iVar10 - ( *(byte*)( piVar6 + 1 ) & 1 );
         goto LAB_001012af;
      }

   }

   uVar8 = uVar8 + 1;
   LAB_001012af:uVar2 = *(ushort*)( param_1 + 0x12 );
   *piVar6 = param_2;
   piVar6[2] = param_3;
   piVar6[1] = param_2 * 0x78dde6c4 + 3;
   *(uint*)( param_1 + 0x18 ) = uVar8;
   *(int*)( param_1 + 0x14 ) = iVar10 + 1;
   if (( uVar2 < uVar9 ) && ( *(uint*)( param_1 + 0x1c ) < uVar8 << 3 )) {
      hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc(param_1, *(uint*)( param_1 + 0x1c ) - 8);
      return;
   }

   return;
}
hb_hashmap_t<unsigned_int,unsigned_int,true> *hb_map_copy(long param_1) {
   undefined4 *puVar1;
   char cVar2;
   hb_hashmap_t<unsigned_int,unsigned_int,true> *phVar3;
   undefined4 *puVar4;
   hb_hashmap_t<unsigned_int,unsigned_int,true> *this;
   int iVar5;
   long in_FS_OFFSET;
   hb_hashmap_t<unsigned_int,unsigned_int,true> *local_70;
   item_t *local_68;
   int iStack_60;
   int iStack_5c;
   code *local_58;
   undefined8 uStack_50;
   undefined1 *local_48;
   code *pcStack_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   phVar3 = (hb_hashmap_t<unsigned_int,unsigned_int,true>*)calloc(1, 0x30);
   this(hb_hashmap_t<unsigned_int,unsigned_int,true> * ) & _hb_NullPool;
   if (phVar3 != (hb_hashmap_t<unsigned_int,unsigned_int,true>*)0x0) {
      *(undefined4*)phVar3 = 1;
      *(undefined4*)( phVar3 + 4 ) = 1;
      *(undefined8*)( phVar3 + 8 ) = 0;
      phVar3[0x10] = (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x1;
      *(undefined2*)( phVar3 + 0x12 ) = 0;
      *(undefined8*)( phVar3 + 0x28 ) = 0;
      *(undefined1(*) [16])( phVar3 + 0x14 ) = (undefined1[16])0x0;
      *(undefined4*)phVar3 = 1;
      *(undefined4*)( phVar3 + 4 ) = 1;
      *(undefined8*)( phVar3 + 8 ) = 0;
      this =
      phVar3;
   }

   if (this[0x10] == (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0) {
      this(hb_hashmap_t<unsigned_int,unsigned_int,true> * ) & _hb_NullPool;
   }
 else {
      if (*(int*)( this + 0x1c ) != 0) {
         puVar4 = *(undefined4**)( this + 0x28 );
         puVar1 = puVar4 + ( ulong )(*(int*)( this + 0x1c ) + 1) * 3;
         for (; puVar4 != puVar1; puVar4 = puVar4 + 3) {
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
         }

      }

      *(undefined8*)( this + 0x14 ) = 0;
      iVar5 = 0;
      hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc(this, *(uint*)( param_1 + 0x14 ));
      iStack_60 = *(int*)( param_1 + 0x1c );
      local_68 = *(item_t**)( param_1 + 0x28 );
      local_70 = this;
      if (iStack_60 != 0) {
         iStack_60 = iStack_60 + 1;
         iVar5 = 0;
         while (( iStack_60 != 0 && ( cVar2 = hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::is_real(local_68) ),cVar2 == '\0' )) {
            iVar5 = iVar5 + 1;
            local_68 = local_68 + 0xc;
            iStack_60 = iStack_60 + -1;
         }
;
      }

      local_58 = hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::is_real;
      local_48 = &hb_identity;
      uStack_50 = 0;
      pcStack_40 = hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::get_pair;
      iStack_5c = iVar5;
      _ZN9hb_sink_tIR12hb_hashmap_tIjjLb1EEEclI13hb_map_iter_tI16hb_filter_iter_tI10hb_array_tINS1_6item_tEEMS8_KFbvERK10__anon_117LPv0EEMS8_KF9hb_pair_tIjjEvEL24hb_function_sortedness_t0ELSF_0EELSF_0EEEvT_(&local_70);
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* hb_hashmap_t<unsigned int, unsigned int, true>::item_t::is_real() const */byte hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::is_real(item_t *this) {
   return (byte)this[4] & 1;
}
/* hb_hashmap_t<unsigned int, unsigned int, true>::item_t::get_pair() const */undefined8 hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::get_pair(item_t *this) {
   return CONCAT44(*(undefined4*)( this + 8 ), *(undefined4*)this);
}
/* hb_hashmap_t<unsigned int, unsigned int, true>::item_t::get_key() */item_t * __thiscall hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::get_key(item_t *this){
   return this;
}
/* hb_hashmap_t<unsigned int, unsigned int, true>::item_t::get_value() */item_t * __thiscall hb_hashmap_t<unsigned_int,unsigned_int,true>::item_t::get_value(item_t *this){
   return this + 8;
}
/* hb_bit_set_t::resize(unsigned int, bool, bool) */hb_bit_set_t hb_bit_set_t::resize(hb_bit_set_t *this, uint param_1, bool param_2, bool param_3) {
   hb_bit_set_t hVar1;
   void *pvVar2;
   hb_bit_set_t hVar3;
   uint uVar4;
   uint uVar5;
   ulong uVar6;
   ulong uVar7;
   uint uVar8;
   uint uVar9;
   hVar1 = *this;
   if (hVar1 == (hb_bit_set_t)0x0) {
      return (hb_bit_set_t)0x0;
   }

   uVar4 = *(uint*)( this + 0x24 );
   uVar7 = (ulong)uVar4;
   uVar5 = *(uint*)( this + 0x20 );
   hVar3 = ( hb_bit_set_t )(param_1 == 1 && uVar4 == 0);
   if (param_1 != 1 || uVar4 != 0) {
      if ((int)param_1 < 0) {
         param_1 = 0;
      }

      if ((int)uVar5 < 0) goto LAB_0010169c;
      hVar3 = (hb_bit_set_t)param_3;
      if (param_3) {
         uVar8 = param_1;
         if (param_1 <= uVar4) {
            uVar8 = uVar4;
         }

         if (uVar5 < uVar8) {
            if (uVar8 < 0x38e38e4) goto LAB_00101829;
         }
 else {
            if (uVar5 >> 2 <= uVar8) goto LAB_001015e3;
            if (uVar8 < 0x38e38e4) {
               pvVar2 = *(void**)( this + 0x28 );
               if (uVar8 != 0) goto LAB_00101830;
               free(pvVar2);
               uVar8 = 0;
               pvVar2 = (void*)0x0;
               goto LAB_0010184c;
            }

         }

      }
 else {
         uVar8 = uVar5;
         if (param_1 <= uVar5) goto LAB_001015e3;
         do {
            uVar8 = ( uVar8 >> 1 ) + 8 + uVar8;
         }
 while ( uVar8 < param_1 );
         if (uVar8 < 0x38e38e4) {
            pvVar2 = *(void**)( this + 0x28 );
            goto LAB_00101830;
         }

      }

      LAB_00101697:*(uint*)( this + 0x20 ) = ~uVar5;
      goto LAB_0010169c;
   }

   if ((int)uVar5 < 0) goto LAB_0010169c;
   if (uVar5 == 0) {
      param_1 = 1;
      uVar8 = 1;
      LAB_00101829:pvVar2 = *(void**)( this + 0x28 );
      param_3 = (bool)hVar1;
      LAB_00101830:pvVar2 = realloc(pvVar2, (ulong)uVar8 * 0x48);
      if (pvVar2 == (void*)0x0) {
         uVar5 = *(uint*)( this + 0x20 );
         if (uVar5 < uVar8) goto LAB_00101697;
      }
 else {
         LAB_0010184c:*(void**)( this + 0x28 ) = pvVar2;
         *(uint*)( this + 0x20 ) = uVar8;
      }

      uVar7 = ( ulong ) * (uint*)( this + 0x24 );
      hVar3 = (hb_bit_set_t)param_3;
   }
 else {
      if (7 < uVar5) {
         pvVar2 = *(void**)( this + 0x28 );
         uVar8 = 1;
         param_1 = 1;
         param_3 = (bool)hVar3;
         goto LAB_00101830;
      }

      uVar7 = 0;
      param_1 = 1;
   }

   LAB_001015e3:if (( (uint)uVar7 < param_1 ) && ( param_2 )) {
      uVar4 = ( param_1 - (uint)uVar7 ) * 0x48;
      if (uVar4 != 0) {
         memset((void*)( *(long*)( this + 0x28 ) + uVar7 * 0x48 ), 0, (ulong)uVar4);
      }

   }

   uVar4 = *(uint*)( this + 0x10 );
   *(uint*)( this + 0x24 ) = param_1;
   if (-1 < (int)uVar4) {
      if (hVar3 == (hb_bit_set_t)0x0) {
         uVar5 = uVar4;
         if (uVar4 < param_1) {
            do {
               uVar5 = ( uVar5 >> 1 ) + 8 + uVar5;
            }
 while ( uVar5 < param_1 );
            if (uVar5 < 0x20000000) {
               pvVar2 = *(void**)( this + 0x18 );
               uVar7 = (ulong)uVar5;
               goto LAB_00101894;
            }

            *(uint*)( this + 0x10 ) = ~uVar4;
            uVar5 = *(uint*)( this + 0x20 );
            if ((int)uVar5 < 0) goto LAB_0010169c;
            uVar7 = (ulong)uVar5;
            uVar4 = 0;
            if (-1 < (int)*(uint*)( this + 0x14 )) {
               uVar4 = *(uint*)( this + 0x14 );
            }

            goto LAB_0010170b;
         }

      }
 else {
         uVar8 = *(uint*)( this + 0x14 );
         uVar6 = (ulong)uVar8;
         uVar5 = param_1;
         if (param_1 <= uVar8) {
            uVar5 = uVar8;
         }

         uVar7 = (ulong)uVar5;
         if (uVar4 < uVar5) {
            if (0x1fffffff < uVar5) {
               *(uint*)( this + 0x10 ) = ~uVar4;
               uVar5 = *(uint*)( this + 0x20 );
               if ((int)uVar5 < 0) goto LAB_0010169c;
               uVar6 = 0;
               if (-1 < (int)uVar8) {
                  uVar6 = (ulong)uVar8;
               }

               goto LAB_00101796;
            }

            pvVar2 = *(void**)( this + 0x18 );
            LAB_00101894:uVar4 = (uint)uVar7;
            pvVar2 = realloc(pvVar2, uVar7 << 3);
            if (pvVar2 == (void*)0x0) {
               uVar5 = *(uint*)( this + 0x14 );
               uVar6 = (ulong)uVar5;
               if (uVar4 <= *(uint*)( this + 0x10 )) goto LAB_001016af;
               *(uint*)( this + 0x10 ) = ~*(uint *)(this + 0x10);
               goto LAB_001018f3;
            }

         }
 else {
            if (uVar4 >> 2 <= uVar5) goto LAB_001016af;
            pvVar2 = *(void**)( this + 0x18 );
            if (uVar5 != 0) goto LAB_00101894;
            free(pvVar2);
            uVar4 = 0;
            pvVar2 = (void*)0x0;
         }

         *(void**)( this + 0x18 ) = pvVar2;
         *(uint*)( this + 0x10 ) = uVar4;
      }

      uVar6 = ( ulong ) * (uint*)( this + 0x14 );
      LAB_001016af:if (( (uint)uVar6 < param_1 ) && ( param_2 )) {
         uVar4 = ( param_1 - (uint)uVar6 ) * 8;
         if (uVar4 != 0) {
            memset((void*)( *(long*)( this + 0x18 ) + uVar6 * 8 ), 0, (ulong)uVar4);
         }

      }

      *(uint*)( this + 0x14 ) = param_1;
      return hVar1;
   }

   uVar5 = *(uint*)( this + 0x14 );
   LAB_001018f3:uVar4 = 0;
   if (-1 < (int)uVar5) {
      uVar4 = uVar5;
   }

   uVar6 = (ulong)uVar4;
   uVar5 = *(uint*)( this + 0x20 );
   if ((int)uVar5 < 0) goto LAB_0010169c;
   uVar7 = (ulong)uVar5;
   if (hVar3 == (hb_bit_set_t)0x0) {
      LAB_0010170b:uVar6 = uVar7;
      if (uVar5 < uVar4) {
         do {
            uVar8 = (int)uVar6 + 8 + (int)( uVar6 >> 1 );
            uVar6 = (ulong)uVar8;
         }
 while ( uVar8 < uVar4 );
         goto LAB_00101720;
      }

      LAB_00101754:uVar8 = *(uint*)( this + 0x24 );
   }
 else {
      LAB_00101796:uVar8 = *(uint*)( this + 0x24 );
      uVar4 = (uint)uVar6;
      if (uVar4 <= uVar8) {
         uVar6 = (ulong)uVar8;
      }

      uVar9 = (uint)uVar6;
      if (uVar5 < uVar9) {
         LAB_00101720:if (0x38e38e3 < (uint)uVar6) goto LAB_00101697;
         pvVar2 = *(void**)( this + 0x28 );
         LAB_00101731:uVar8 = (uint)uVar6;
         pvVar2 = realloc(pvVar2, uVar6 * 0x48);
         if (pvVar2 == (void*)0x0) {
            uVar5 = *(uint*)( this + 0x20 );
            if (uVar5 < uVar8) goto LAB_00101697;
         }
 else {
            LAB_0010174d:*(void**)( this + 0x28 ) = pvVar2;
            *(uint*)( this + 0x20 ) = uVar8;
         }

         goto LAB_00101754;
      }

      if (uVar9<uVar5> > 2) {
         if (0x38e38e3 < uVar9) goto LAB_00101697;
         pvVar2 = *(void**)( this + 0x28 );
         if (uVar9 != 0) goto LAB_00101731;
         free(pvVar2);
         uVar8 = 0;
         pvVar2 = (void*)0x0;
         goto LAB_0010174d;
      }

   }

   if (( uVar8 < uVar4 ) && ( param_2 )) {
      uVar5 = ( uVar4 - uVar8 ) * 0x48;
      if (uVar5 != 0) {
         memset((void*)( *(long*)( this + 0x28 ) + (ulong)uVar8 * 0x48 ), 0, (ulong)uVar5);
      }

   }

   *(uint*)( this + 0x24 ) = uVar4;
   LAB_0010169c:*this = (hb_bit_set_t)0x0;
   return (hb_bit_set_t)0x0;
}
/* hb_bit_set_t::page_for(unsigned int, bool) */long hb_bit_set_t::page_for(hb_bit_set_t *this, uint param_1, bool param_2) {
   uint *puVar1;
   undefined4 *puVar2;
   uint uVar3;
   uint uVar4;
   long lVar5;
   char cVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   int iVar10;
   long lVar11;
   uVar9 = param_1 >> 9;
   if (( *(uint*)( this + 8 ) < *(uint*)( this + 0x14 ) ) && ( puVar1 = (uint*)( *(long*)( this + 0x18 ) + ( ulong ) * (uint*)( this + 8 ) * 8 ) * puVar1 == uVar9 )) {
      return *(long*)( this + 0x28 ) + (ulong)puVar1[1] * 0x48;
   }

   uVar4 = *(uint*)( this + 0x24 );
   iVar10 = *(uint*)( this + 0x14 ) - 1;
   if (iVar10 < 0) {
      uVar8 = 0;
   }
 else {
      uVar8 = 0;
      do {
         while (true) {
            uVar7 = iVar10 + uVar8 >> 1;
            lVar11 = (ulong)uVar7 * 8;
            uVar3 = *(uint*)( *(long*)( this + 0x18 ) + (ulong)uVar7 * 8 );
            if (-1 < (int)( uVar9 - uVar3 )) break;
            iVar10 = uVar7 - 1;
            if (iVar10 < (int)uVar8) goto LAB_00101a2c;
         }
;
         if (uVar9 == uVar3) goto LAB_00101ac5;
         uVar8 = uVar7 + 1;
      }
 while ( (int)uVar8 <= iVar10 );
   }

   LAB_00101a2c:if (param_2) {
      cVar6 = resize(this, uVar4 + 1, true, false);
      if (cVar6 != '\0') {
         lVar11 = (ulong)uVar8 * 8;
         puVar2 = (undefined4*)( *(long*)( this + 0x28 ) + (ulong)uVar4 * 0x48 );
         for (int i = 0; i < 4; i++) {
            *(undefined1(*) [16])( puVar2 + ( 4*i + 2 ) ) = (undefined1[16])0;
         }

         lVar5 = *(long*)( this + 0x18 );
         *puVar2 = 0;
         memmove((void*)( lVar5 + 8 + lVar11 ), (void*)( lVar5 + lVar11 ), ( ulong )(( ~uVar8 + *(int*)( this + 0x14 ) ) * 8));
         *(ulong*)( *(long*)( this + 0x18 ) + (ulong)uVar8 * 8 ) = CONCAT44(uVar4, uVar9);
         uVar7 = uVar8;
         LAB_00101ac5:*(uint*)( this + 8 ) = uVar7;
         return *(long*)( this + 0x28 ) + ( ulong ) * (uint*)( *(long*)( this + 0x18 ) + 4 + lVar11 ) * 0x48;
      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_hashmap_t<unsigned int, unsigned int, true>::alloc(unsigned int) */hb_hashmap_t<unsigned_int,unsigned_int,true> hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc(hb_hashmap_t<unsigned_int,unsigned_int,true> *this, uint param_1) {
   byte bVar1;
   int *__ptr;
   long lVar2;
   char cVar3;
   void *pvVar4;
   long lVar5;
   int *piVar6;
   int iVar7;
   undefined4 uVar8;
   ulong uVar9;
   hb_hashmap_t<unsigned_int,unsigned_int,true> hVar10;
   uint uVar11;
   uint uVar12;
   uint uVar13;
   uint uVar14;
   int *piVar15;
   size_t __size;
   uint uVar16;
   int iVar17;
   short sVar18;
   long in_FS_OFFSET;
   undefined8 uStack_c8;
   undefined8 uStack_c0;
   undefined8 uStack_b8;
   undefined8 uStack_b0;
   undefined8 uStack_a8;
   undefined8 uStack_a0;
   undefined8 uStack_98;
   undefined8 uStack_90;
   undefined8 uStack_88;
   undefined8 uStack_80;
   undefined8 uStack_78;
   undefined8 uStack_70;
   undefined8 uStack_68;
   undefined8 uStack_60;
   undefined8 uStack_58;
   undefined8 uStack_50;
   long local_40;
   hVar10 = this[0x10];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (hVar10 == (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0) {
      LAB_00101e83:hVar10 = (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0;
   }
 else {
      if (param_1 == 0) {
         param_1 = *(uint*)( this + 0x14 );
      }
 else {
         if (( param_1 >> 1 ) + param_1 < *(uint*)( this + 0x1c )) goto LAB_00101ded;
         if (param_1 < *(uint*)( this + 0x14 )) {
            param_1 = *(uint*)( this + 0x14 );
         }

      }

      uVar14 = param_1 * 2 + 8;
      uVar9 = (ulong)uVar14;
      if (uVar14 == 0) {
         pvVar4 = malloc(0xc);
         if (pvVar4 == (void*)0x0) goto LAB_00101e7f;
         iVar17 = 0;
         sVar18 = 0;
         iVar7 = 0xc;
         __size = 0xc;
         LAB_00101bc9:pvVar4 = (void*)__memset_chk(pvVar4, 0, iVar7, __size);
      }
 else {
         iVar7 = 0x1f;
         if (uVar14 != 0) {
            for (; uVar14 >> iVar7 == 0; iVar7 = iVar7 + -1) {}
         }

         uVar14 = iVar7 + 1;
         uVar9 = (ulong)uVar14;
         uVar16 = 1 << ( (byte)uVar14 & 0x1f );
         __size = (ulong)uVar16 * 0xc;
         pvVar4 = malloc(__size);
         if (pvVar4 == (void*)0x0) {
            LAB_00101e7f:this[0x10] = (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0;
            goto LAB_00101e83;
         }

         sVar18 = (short)uVar14 * 2;
         iVar17 = uVar16 - 1;
         iVar7 = 0xc << ( (byte)uVar14 & 0x1f );
         if (iVar7 != 0) goto LAB_00101bc9;
      }

      uStack_c0 = _UNK_00101ed8;
      uStack_c8 = __LC0;
      iVar7 = *(int*)( this + 0x1c );
      *(undefined8*)( this + 0x14 ) = 0;
      *(int*)( this + 0x1c ) = iVar17;
      __ptr = *(int**)( this + 0x28 );
      uVar14 = ( iVar7 + 1 ) - ( uint )(iVar7 == 0);
      uStack_b8 = __LC1;
      uStack_b0 = _UNK_00101ee8;
      uStack_a8 = __LC2;
      uStack_a0 = _UNK_00101ef8;
      uStack_98 = __LC3;
      uStack_90 = _UNK_00101f08;
      uStack_88 = __LC4;
      uStack_80 = _UNK_00101f18;
      uStack_78 = __LC5;
      uStack_70 = _UNK_00101f28;
      uStack_68 = __LC6;
      uStack_60 = _UNK_00101f38;
      uStack_58 = __LC7;
      uStack_50 = _UNK_00101f48;
      if ((int)uVar9 == 0x20) {
         uVar8 = 0x7fffffff;
      }
 else {
         uVar8 = *(undefined4*)( (long)&uStack_c8 + uVar9 * 4 );
      }

      *(undefined4*)( this + 0x20 ) = uVar8;
      *(short*)( this + 0x12 ) = sVar18;
      *(void**)( this + 0x28 ) = pvVar4;
      if (uVar14 != 0) {
         piVar15 = __ptr;
         do {
            if (( ( *(byte*)( piVar15 + 1 ) & 1 ) != 0 ) && ( uVar16 = (uint)piVar15[1] >> 2 ),this[0x10] != (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0) {
               uVar13 = *(uint*)( this + 0x18 );
               if (*(uint*)( this + 0x1c ) <= ( uVar13 >> 1 ) + uVar13) {
                  cVar3 = alloc(this, 0);
                  if (cVar3 == '\0') goto LAB_00101c90;
                  uVar13 = *(uint*)( this + 0x18 );
               }

               lVar2 = *(long*)( this + 0x28 );
               iVar17 = *piVar15;
               uVar9 = (ulong)uVar16 % ( ulong ) * (uint*)( this + 0x20 );
               iVar7 = *(int*)( this + 0x14 );
               lVar5 = uVar9 * 0xc;
               piVar6 = (int*)( lVar2 + lVar5 );
               bVar1 = *(byte*)( piVar6 + 1 );
               if (( bVar1 & 2 ) == 0) {
                  *piVar6 = iVar17;
                  piVar6[2] = piVar15[2];
                  piVar6[1] = uVar16 * 4 + 3;
                  *(uint*)( this + 0x18 ) = uVar13 + 1;
                  *(int*)( this + 0x14 ) = iVar7 + 1;
               }
 else {
                  uVar11 = 0;
                  uVar12 = 0xffffffff;
                  do {
                     if (*piVar6 == iVar17) {
                        if (uVar12 == 0xffffffff) goto LAB_00101d4f;
                        goto LAB_00101d44;
                     }

                     if (( ( bVar1 & 1 ) == 0 ) && ( uVar12 == 0xffffffff )) {
                        uVar12 = (uint)uVar9;
                     }

                     uVar11 = uVar11 + 1;
                     uVar9 = ( ulong )((uint)uVar9 + uVar11 & *(uint*)( this + 0x1c ));
                     lVar5 = uVar9 * 0xc;
                     piVar6 = (int*)( lVar2 + lVar5 );
                     bVar1 = *(byte*)( piVar6 + 1 );
                  }
 while ( ( bVar1 & 2 ) != 0 );
                  if (uVar12 == 0xffffffff) {
                     LAB_00101e2a:uVar13 = uVar13 + 1;
                  }
 else {
                     LAB_00101d44:lVar5 = (ulong)uVar12 * 0xc;
                     LAB_00101d4f:piVar6 = (int*)( lVar2 + lVar5 );
                     if (( *(byte*)( piVar6 + 1 ) & 2 ) == 0) goto LAB_00101e2a;
                     iVar7 = iVar7 - ( *(byte*)( piVar6 + 1 ) & 1 );
                     *(uint*)( this + 0x18 ) = uVar13 - 1;
                     *(int*)( this + 0x14 ) = iVar7;
                     iVar17 = *piVar15;
                  }

                  *piVar6 = iVar17;
                  iVar17 = piVar15[2];
                  piVar6[1] = uVar16 * 4 + 3;
                  piVar6[2] = iVar17;
                  *(uint*)( this + 0x18 ) = uVar13;
                  *(int*)( this + 0x14 ) = iVar7 + 1;
                  if (( *(ushort*)( this + 0x12 ) < uVar11 ) && ( *(uint*)( this + 0x1c ) < uVar13 << 3 )) {
                     alloc(this, *(uint*)( this + 0x1c ) - 8);
                  }

               }

            }

            LAB_00101c90:piVar15 = piVar15 + 3;
         }
 while ( __ptr + (ulong)uVar14 * 3 != piVar15 );
      }

      free(__ptr);
   }

   LAB_00101ded:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return hVar10;
}

