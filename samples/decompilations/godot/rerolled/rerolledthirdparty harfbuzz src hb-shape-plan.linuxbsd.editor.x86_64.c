/* hb_shape_plan_key_t::init(bool, hb_face_t*, hb_segment_properties_t const*, hb_feature_t const*,
   unsigned int, int const*, unsigned int, char const* const*) */undefined8 hb_shape_plan_key_t::init(hb_shape_plan_key_t *this, bool param_1, hb_face_t *param_2, hb_segment_properties_t *param_3, hb_feature_t *param_4, uint param_5, int *param_6, uint param_7, char **param_8) {
   hb_face_t *phVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   uint uVar5;
   int iVar6;
   long lVar7;
   void *__dest;
   char *pcVar8;
   long lVar9;
   code *pcVar10;
   long *plVar11;
   if (( param_5 == 0 ) || ( !param_1 )) {
      uVar3 = *(undefined8*)( param_3 + 8 );
      if (param_1) {
         param_4 = (hb_feature_t*)0x0;
      }

      __dest = (void*)0x0;
      *(undefined8*)this = *(undefined8*)param_3;
      *(undefined8*)( this + 8 ) = uVar3;
      uVar3 = *(undefined8*)( param_3 + 0x10 );
      uVar4 = *(undefined8*)( param_3 + 0x18 );
      *(uint*)( this + 0x28 ) = param_5;
      *(hb_feature_t**)( this + 0x20 ) = param_4;
      *(undefined8*)( this + 0x10 ) = uVar3;
      *(undefined8*)( this + 0x18 ) = uVar4;
   }
 else {
      __dest = calloc((ulong)param_5, 0x10);
      if (__dest == (void*)0x0) goto LAB_001000f6;
      uVar3 = *(undefined8*)( param_3 + 8 );
      *(undefined8*)this = *(undefined8*)param_3;
      *(undefined8*)( this + 8 ) = uVar3;
      uVar3 = *(undefined8*)( param_3 + 0x10 );
      uVar4 = *(undefined8*)( param_3 + 0x18 );
      *(uint*)( this + 0x28 ) = param_5;
      *(void**)( this + 0x20 ) = __dest;
      *(undefined8*)( this + 0x10 ) = uVar3;
      *(undefined8*)( this + 0x18 ) = uVar4;
      memcpy(__dest, param_4, (ulong)param_5 << 4);
      uVar5 = 0;
      do {
         if (*(int*)( (long)__dest + 8 ) != 0) {
            *(undefined4*)( (long)__dest + 8 ) = 1;
         }

         if (*(int*)( (long)__dest + 0xc ) != -1) {
            *(undefined4*)( (long)__dest + 0xc ) = 2;
         }

         uVar5 = uVar5 + 1;
      }
 while ( uVar5 < param_5 );
   }

   *(undefined8*)( this + 0x38 ) = 0;
   *(undefined8*)( this + 0x40 ) = 0;
   hb_ot_layout_table_find_feature_variations(param_2, 0x47535542, param_6, param_7, this + 0x2c);
   hb_ot_layout_table_find_feature_variations(param_2, 0x47504f53, param_6, param_7, this + 0x30);
   if (param_8 == (char**)0x0) {
      lVar7 = _hb_shapers_get();
      plVar11 = (long*)( lVar7 + 0x10 );
      do {
         pcVar10 = (code*)*plVar11;
         if (pcVar10 == _hb_graphite2_shape) {
            phVar1 = param_2 + 0x58;
            do {
               while (true) {
                  if (*(long*)phVar1 != 0) goto LAB_001001b0;
                  if (*(long*)( param_2 + 0x50 ) == 0) goto LAB_001000ed;
                  lVar9 = _hb_graphite2_shaper_face_data_create();
                  if (lVar9 == 0) break;
                  LOCK();
                  lVar2 = *(long*)phVar1;
                  if (lVar2 == 0) {
                     *(long*)phVar1 = lVar9;
                  }

                  UNLOCK();
                  if (lVar2 == 0) goto LAB_001001b0;
                  _hb_graphite2_shaper_face_data_destroy();
               }
;
               LOCK();
               lVar9 = *(long*)phVar1;
               if (lVar9 == 0) {
                  *(long*)phVar1 = 0;
               }

               UNLOCK();
            }
 while ( lVar9 != 0 );
         }
 else if (pcVar10 == _hb_ot_shape) {
            phVar1 = param_2 + 0x60;
            do {
               while (true) {
                  if (*(long*)phVar1 != 0) goto LAB_001001e8;
                  if (*(long*)( param_2 + 0x50 ) == 0) goto LAB_001000ed;
                  lVar9 = _hb_ot_shaper_face_data_create();
                  if (lVar9 == 0) break;
                  LOCK();
                  lVar2 = *(long*)phVar1;
                  if (lVar2 == 0) {
                     *(long*)phVar1 = lVar9;
                  }

                  UNLOCK();
                  if (lVar2 == 0) goto LAB_001001e8;
                  _hb_ot_shaper_face_data_destroy();
               }
;
               LOCK();
               lVar9 = *(long*)phVar1;
               if (lVar9 == 0) {
                  *(long*)phVar1 = 0;
               }

               UNLOCK();
            }
 while ( lVar9 != 0 );
         }
 else if (pcVar10 == _hb_fallback_shape) {
            phVar1 = param_2 + 0x68;
            do {
               while (true) {
                  if (*(long*)phVar1 != 0) goto LAB_00100210;
                  if (*(long*)( param_2 + 0x50 ) == 0) goto LAB_001000ed;
                  lVar9 = _hb_fallback_shaper_face_data_create();
                  if (lVar9 == 0) break;
                  LOCK();
                  lVar2 = *(long*)phVar1;
                  if (lVar2 == 0) {
                     *(long*)phVar1 = lVar9;
                  }

                  UNLOCK();
                  if (lVar2 == 0) goto LAB_00100210;
                  _hb_fallback_shaper_face_data_destroy();
               }
;
               LOCK();
               lVar9 = *(long*)phVar1;
               if (lVar9 == 0) {
                  *(long*)phVar1 = 0;
               }

               UNLOCK();
            }
 while ( lVar9 != 0 );
         }

         LAB_001000ed:plVar11 = plVar11 + 3;
      }
 while ( (long*)( lVar7 + 0x58 ) != plVar11 );
   }
 else {
      pcVar8 = *param_8;
      if (pcVar8 != (char*)0x0) {
         iVar6 = strcmp(pcVar8, "graphite2");
         if (iVar6 == 0) goto LAB_001002ef;
         do {
            if (( ( *pcVar8 == 'o' ) && ( pcVar8[1] == 't' ) ) && ( pcVar8[2] == '\0' )) {
               phVar1 = param_2 + 0x60;
               do {
                  while (true) {
                     if (*(long*)phVar1 != 0) goto LAB_001001e8;
                     if (*(long*)( param_2 + 0x50 ) == 0) goto LAB_001002cb;
                     lVar7 = _hb_ot_shaper_face_data_create();
                     if (lVar7 == 0) break;
                     LOCK();
                     lVar9 = *(long*)phVar1;
                     if (lVar9 == 0) {
                        *(long*)phVar1 = lVar7;
                     }

                     UNLOCK();
                     if (lVar9 == 0) goto LAB_001001e8;
                     _hb_ot_shaper_face_data_destroy();
                  }
;
                  LOCK();
                  lVar7 = *(long*)phVar1;
                  if (lVar7 == 0) {
                     *(long*)phVar1 = 0;
                  }

                  UNLOCK();
               }
 while ( lVar7 != 0 );
            }
 else {
               iVar6 = strcmp(pcVar8, "fallback");
               if (iVar6 == 0) {
                  phVar1 = param_2 + 0x68;
                  do {
                     while (true) {
                        if (*(long*)phVar1 != 0) goto LAB_00100210;
                        if (*(long*)( param_2 + 0x50 ) == 0) goto LAB_001002cb;
                        lVar7 = _hb_fallback_shaper_face_data_create();
                        if (lVar7 == 0) break;
                        LOCK();
                        lVar9 = *(long*)phVar1;
                        if (lVar9 == 0) {
                           *(long*)phVar1 = lVar7;
                        }

                        UNLOCK();
                        if (lVar9 == 0) goto LAB_00100210;
                        _hb_fallback_shaper_face_data_destroy();
                     }
;
                     LOCK();
                     lVar7 = *(long*)phVar1;
                     if (lVar7 == 0) {
                        *(long*)phVar1 = 0;
                     }

                     UNLOCK();
                  }
 while ( lVar7 != 0 );
               }

            }

            LAB_001002cb:pcVar8 = param_8[1];
            param_8 = param_8 + 1;
            if (pcVar8 == (char*)0x0) goto LAB_001000f6;
            iVar6 = strcmp(pcVar8, "graphite2");
         }
 while ( iVar6 != 0 );
         LAB_001002ef:phVar1 = param_2 + 0x58;
         do {
            while (true) {
               if (*(long*)phVar1 != 0) goto LAB_001001b0;
               if (*(long*)( param_2 + 0x50 ) == 0) goto LAB_001002cb;
               lVar7 = _hb_graphite2_shaper_face_data_create();
               if (lVar7 == 0) break;
               LOCK();
               lVar9 = *(long*)phVar1;
               if (lVar9 == 0) {
                  *(long*)phVar1 = lVar7;
               }

               UNLOCK();
               if (lVar9 == 0) goto LAB_001001b0;
               _hb_graphite2_shaper_face_data_destroy();
            }
;
            LOCK();
            lVar7 = *(long*)phVar1;
            if (lVar7 == 0) {
               *(long*)phVar1 = 0;
            }

            UNLOCK();
         }
 while ( lVar7 != 0 );
         goto LAB_001002cb;
      }

   }

   LAB_001000f6:free(__dest);
   return 0;
   LAB_001001b0:pcVar10 = _hb_graphite2_shape;
   pcVar8 = "graphite2";
   goto LAB_001001be;
   LAB_001001e8:pcVar10 = _hb_ot_shape;
   pcVar8 = "ot";
   goto LAB_001001be;
   LAB_00100210:pcVar10 = _hb_fallback_shape;
   pcVar8 = "fallback";
   LAB_001001be:*(char**)( this + 0x40 ) = pcVar8;
   *(code**)( this + 0x38 ) = pcVar10;
   return 1;
}
/* hb_shape_plan_key_t::user_features_match(hb_shape_plan_key_t const*) */undefined8 hb_shape_plan_key_t::user_features_match(hb_shape_plan_key_t *this, hb_shape_plan_key_t *param_1) {
   uint uVar1;
   int *piVar2;
   int *piVar3;
   int *piVar4;
   uVar1 = *(uint*)( this + 0x28 );
   if (uVar1 != *(uint*)( param_1 + 0x28 )) {
      return 0;
   }

   if (uVar1 != 0) {
      piVar2 = *(int**)( this + 0x20 );
      piVar4 = *(int**)( param_1 + 0x20 );
      piVar3 = piVar2 + (ulong)uVar1 * 4;
      do {
         if (*piVar2 != *piVar4) {
            return 0;
         }

         if (piVar2[1] != piVar4[1]) {
            return 0;
         }

         if (( piVar2[2] == 0 ) && ( piVar2[3] == -1 )) {
            if (piVar4[2] != 0) {
               return 0;
            }

            if (piVar4[3] != -1) {
               return 0;
            }

         }
 else if (( piVar4[2] == 0 ) && ( piVar4[3] == -1 )) {
            return 0;
         }

         piVar2 = piVar2 + 4;
         piVar4 = piVar4 + 4;
      }
 while ( piVar2 != piVar3 );
   }

   return 1;
}
/* hb_shape_plan_key_t::equal(hb_shape_plan_key_t const*) */undefined8 hb_shape_plan_key_t::equal(hb_shape_plan_key_t *this, hb_shape_plan_key_t *param_1) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = hb_segment_properties_equal();
   uVar2 = 0;
   if (iVar1 != 0) {
      uVar2 = user_features_match(this, param_1);
      if (( (char)uVar2 != '\0' ) && ( uVar2 = 0 * (long*)( this + 0x2c ) == *(long*)( param_1 + 0x2c ) )) {
         uVar2 = CONCAT71(( int7 )(( ulong ) * (long*)( param_1 + 0x38 ) >> 8), *(long*)( this + 0x38 ) == *(long*)( param_1 + 0x38 ));
      }

   }

   return uVar2;
}
undefined4 *hb_shape_plan_create2(hb_face_t *param_1, hb_segment_properties_t *param_2, hb_feature_t *param_3, uint param_4, int *param_5, uint param_6, char **param_7) {
   char cVar1;
   undefined4 *__ptr;
   if (( *(int*)param_2 != 0 ) && ( __ptr = (undefined4*)calloc(1, 0x110) ),__ptr != (undefined4*)0x0) {
      for (int i = 0; i < 4; i++) {
         *(undefined1(*) [16])( __ptr + ( 4*i + 42 ) ) = (undefined1[16])0;
      }

      *__ptr = 1;
      __ptr[1] = 1;
      *(undefined8*)( __ptr + 2 ) = 0;
      if (param_1 == (hb_face_t*)0x0) {
         param_1 = (hb_face_t*)hb_face_get_empty();
      }

      hb_face_make_immutable(param_1);
      *(hb_face_t**)( __ptr + 4 ) = param_1;
      cVar1 = hb_shape_plan_key_t::init((hb_shape_plan_key_t*)( __ptr + 6 ), true, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
      if (cVar1 != '\0') {
         cVar1 = hb_ot_shape_plan_t::init0((hb_face_t*)( __ptr + 0x18 ), (hb_shape_plan_key_t*)param_1);
         if (cVar1 != '\0') {
            return __ptr;
         }

         free(*(void**)( __ptr + 0xe ));
      }

      free(__ptr);
   }

   return (undefined4*)&_hb_NullPool;
}
void hb_shape_plan_create(void) {
   hb_shape_plan_create2();
   return;
}
undefined *hb_shape_plan_get_empty(void) {
   return &_hb_NullPool;
}
int *hb_shape_plan_reference(int *param_1) {
   if (( param_1 != (int*)0x0 ) && ( *param_1 != 0 )) {
      LOCK();
      *param_1 = *param_1 + 1;
      UNLOCK();
   }

   return param_1;
}
void hb_shape_plan_destroy(int *param_1) {
   long lVar1;
   int iVar2;
   pthread_mutex_t *__mutex;
   code *pcVar3;
   undefined8 uVar4;
   if (param_1 == (int*)0x0) {
      return;
   }

   if (*param_1 != 0) {
      LOCK();
      *param_1 = *param_1 + -1;
      UNLOCK();
      if (*param_1 == 0) {
         *param_1 = -0xdead;
         __mutex = *(pthread_mutex_t**)( param_1 + 2 );
         if (__mutex != (pthread_mutex_t*)0x0) {
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
                        goto LAB_001008f0;
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
            LAB_001008f0:pthread_mutex_destroy(__mutex);
            free(__mutex);
            param_1[2] = 0;
            param_1[3] = 0;
         }

         free(*(void**)( param_1 + 0xe ));
         param_1[0xe] = 0;
         param_1[0xf] = 0;
         hb_ot_shape_plan_t::fini();
         for (int i = 0; i < 5; i++) {
            if (param_1[( -4*i + 54 )] != 0) {
               free(*(void**)( param_1 + ( -4*i + 56 ) ));
            }

         }

         free(param_1);
         return;
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */bool hb_shape_plan_set_user_data(int *param_1, long param_2, long param_3, long param_4, int param_5) {
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
         if (__mutex[1].__data.__lock != 0) goto LAB_00100cf8;
         uVar10 = 8;
         LAB_00100c8c:plVar7 = (long*)realloc(plVar7, uVar10 * 0x18);
         if (plVar7 == (long*)0x0) {
            if ((uint)__mutex[1].__data.__lock < (uint)uVar10) {
               __mutex[1].__data.__lock = ~__mutex[1].__data.__lock;
               goto LAB_00100cf8;
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

               goto LAB_00100aa5;
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
            if (uVar6 <= uVar1) goto LAB_00100c53;
            do {
               uVar9 = (int)( uVar10 >> 1 ) + 8 + (int)uVar10;
               uVar10 = (ulong)uVar9;
            }
 while ( uVar9 < uVar6 );
            if (uVar9 < 0xaaaaaab) goto LAB_00100c8c;
            __mutex[1].__data.__lock = ~uVar1;
         }

         LAB_00100cf8:__hb_CrapPool = __hb_NullPool;
         __hb_graphite2_shaper_font_data_create = _hb_face_get_empty;
         __hb_graphite2_shaper_font_data_destroy = _fini;
         plVar11 = (long*)&_hb_CrapPool;
         goto LAB_00100c6a;
      }

   }

   LAB_00100c53:*(uint*)( (long)__mutex + 0x2c ) = uVar6;
   plVar11 = plVar7 + uVar8 * 3;
   *plVar11 = param_2;
   plVar11[1] = param_3;
   plVar11[2] = param_4;
   LAB_00100c6a:pthread_mutex_unlock(__mutex);
   LAB_00100aa5:return -1 < __mutex[1].__data.__lock && plVar11 != (long*)0x0;
}
long hb_shape_plan_get_user_data(int *param_1, long param_2) {
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
undefined8 hb_shape_plan_get_shaper(long param_1) {
   return *(undefined8*)( param_1 + 0x58 );
}
undefined8 hb_shape_plan_execute(int *param_1, long param_2, long param_3) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   int iVar4;
   long lVar5;
   if (*(int*)( param_3 + 0x60 ) == 0) {
      LAB_00100ef8:if (*(int*)( param_3 + 0x30 ) == 1) {
         *(undefined4*)( param_3 + 0x30 ) = 2;
      }

      return 1;
   }

   if (0 < *param_1) {
      pcVar3 = *(code**)( param_1 + 0x14 );
      if (pcVar3 == _hb_graphite2_shape) {
         plVar1 = (long*)( param_2 + 0xb0 );
         LAB_00100ed7:do {
            if (*plVar1 != 0) {
               LAB_00100ee4:iVar4 = _hb_graphite2_shape(param_1, param_2, param_3);
               goto joined_r0x00100f71;
            }

            if (*(long*)( param_2 + 0xa8 ) == 0) {
               return 0;
            }

            lVar5 = _hb_graphite2_shaper_font_data_create();
            if (lVar5 != 0) {
               LOCK();
               lVar2 = *plVar1;
               if (lVar2 == 0) {
                  *plVar1 = lVar5;
               }

               UNLOCK();
               if (lVar2 == 0) goto LAB_00100ee4;
               _hb_graphite2_shaper_font_data_destroy();
               goto LAB_00100ed7;
            }

            LOCK();
            lVar5 = *plVar1;
            if (lVar5 == 0) {
               *plVar1 = 0;
            }

            UNLOCK();
         }
 while ( lVar5 != 0 );
      }
 else if (pcVar3 == _hb_ot_shape) {
         plVar1 = (long*)( param_2 + 0xb8 );
         LAB_00100f57:do {
            if (*plVar1 != 0) {
               LAB_00100f64:iVar4 = _hb_ot_shape(param_1, param_2, param_3);
               goto joined_r0x00100f71;
            }

            if (*(long*)( param_2 + 0xa8 ) == 0) {
               return 0;
            }

            lVar5 = _hb_ot_shaper_font_data_create();
            if (lVar5 != 0) {
               LOCK();
               lVar2 = *plVar1;
               if (lVar2 == 0) {
                  *plVar1 = lVar5;
               }

               UNLOCK();
               if (lVar2 == 0) goto LAB_00100f64;
               _hb_ot_shaper_font_data_destroy();
               goto LAB_00100f57;
            }

            LOCK();
            lVar5 = *plVar1;
            if (lVar5 == 0) {
               *plVar1 = 0;
            }

            UNLOCK();
         }
 while ( lVar5 != 0 );
      }
 else if (pcVar3 == _hb_fallback_shape) {
         plVar1 = (long*)( param_2 + 0xc0 );
         LAB_00100f27:do {
            if (*plVar1 != 0) {
               LAB_00100f34:iVar4 = _hb_fallback_shape(param_1, param_2, param_3);
               joined_r0x00100f71:if (iVar4 == 0) {
                  return 0;
               }

               goto LAB_00100ef8;
            }

            if (*(long*)( param_2 + 0xa8 ) == 0) {
               return 0;
            }

            lVar5 = _hb_fallback_shaper_font_data_create();
            if (lVar5 != 0) {
               LOCK();
               lVar2 = *plVar1;
               if (lVar2 == 0) {
                  *plVar1 = lVar5;
               }

               UNLOCK();
               if (lVar2 == 0) goto LAB_00100f34;
               _hb_fallback_shaper_font_data_destroy();
               goto LAB_00100f27;
            }

            LOCK();
            lVar5 = *plVar1;
            if (lVar5 == 0) {
               *plVar1 = 0;
            }

            UNLOCK();
         }
 while ( lVar5 != 0 );
      }

   }

   return 0;
}
int *hb_shape_plan_create_cached2(hb_face_t *param_1, hb_segment_properties_t *param_2, hb_feature_t *param_3, uint param_4, int *param_5, uint param_6, char **param_7) {
   hb_face_t *phVar1;
   long *plVar2;
   long *plVar3;
   char cVar4;
   int *piVar5;
   undefined8 *__ptr;
   long in_FS_OFFSET;
   hb_shape_plan_key_t local_88[72];
   long local_40;
   phVar1 = param_1 + 0x1b8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      plVar3 = *(long**)phVar1;
      if (*(int*)param_1 < 1) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            piVar5 = (int*)hb_shape_plan_create2(param_1, param_2, param_3, param_4, param_5, param_6);
            return piVar5;
         }

         LAB_00101306:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      cVar4 = hb_shape_plan_key_t::init(local_88, false, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
      plVar2 = plVar3;
      if (cVar4 == '\0') {
         piVar5 = (int*)&_hb_NullPool;
         LAB_001011fb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return piVar5;
         }

         goto LAB_00101306;
      }

      for (; plVar2 != (long*)0x0; plVar2 = (long*)plVar2[1]) {
         cVar4 = hb_shape_plan_key_t::equal((hb_shape_plan_key_t*)( *plVar2 + 0x18 ), local_88);
         if (cVar4 != '\0') {
            piVar5 = (int*)*plVar2;
            goto joined_r0x001011f5;
         }

      }

      piVar5 = (int*)hb_shape_plan_create2(param_1, param_2, param_3, param_4, param_5, param_6, param_7);
      __ptr = (undefined8*)calloc(1, 0x10);
      if (__ptr == (undefined8*)0x0) goto LAB_001011fb;
      *__ptr = piVar5;
      __ptr[1] = plVar3;
      LOCK();
      plVar2 = *(long**)phVar1;
      if (plVar3 == plVar2) {
         *(undefined8**)phVar1 = __ptr;
      }

      UNLOCK();
      if (plVar3 == plVar2) {
         joined_r0x001011f5:if (( piVar5 != (int*)0x0 ) && ( *piVar5 != 0 )) {
            LOCK();
            *piVar5 = *piVar5 + 1;
            UNLOCK();
         }

         goto LAB_001011fb;
      }

      hb_shape_plan_destroy(piVar5);
      free(__ptr);
   }
 while ( true );
}
void hb_shape_plan_create_cached(void) {
   hb_shape_plan_create_cached2();
   return;
}

