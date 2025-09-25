/* SvgLoader::read() */undefined8 SvgLoader::read(SvgLoader *this) {
   undefined8 uVar1;
   uVar1 = 0;
   if (*(long*)( this + 0x128 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x130 ) != 0) {
      if (( *(long*)( this + 0x1c0 ) == 0 ) && ( this[0x26] == (SvgLoader)0x0 )) {
         this[0x26] = (SvgLoader)0x1;
         tvg::TaskScheduler::request((Task*)( this + 0x70 ));
         return 1;
      }

      uVar1 = 1;
   }

   return uVar1;
}
/* SvgLoader::resize(tvg::Paint*, float, float) */bool SvgLoader::resize(Paint *param_1, float param_2, float param_3) {
   long lVar1;
   Matrix *in_RSI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_RSI != (Matrix*)0x0) {
      tvg::Paint::transform(in_RSI);
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return in_RSI != (Matrix*)0x0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SvgLoader::paint() */undefined8 SvgLoader::paint(SvgLoader *this) {
   pthread_mutex_t *__mutex;
   long lVar1;
   undefined8 uVar2;
   int iVar3;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0xd1] != (SvgLoader)0x0) {
      __mutex = (pthread_mutex_t*)( this + 0x78 );
      iVar3 = pthread_mutex_lock(__mutex);
      if (iVar3 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar3);
      }

      if (this[0xd0] == (SvgLoader)0x0) {
         do {
            std::condition_variable::wait((unique_lock*)( this + 0xa0 ));
         }
 while ( this[0xd0] == (SvgLoader)0x0 );
         this[0xd1] = (SvgLoader)0x0;
      }
 else {
         this[0xd1] = (SvgLoader)0x0;
      }

      if (__mutex != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(__mutex);
      }

   }

   uVar2 = *(undefined8*)( this + 0x1c0 );
   *(undefined8*)( this + 0x1c0 ) = 0;
   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* SvgLoader::SvgLoader() */void SvgLoader::SvgLoader(SvgLoader *this) {
   undefined8 uVar1;
   *(undefined***)this = &PTR__ImageLoader_0010a298;
   *(undefined2*)( this + 0x6c ) = 5;
   *(undefined**)( this + 0x70 ) = &DAT_0010a270;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 4;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined8*)( this + 0x30 ) = 0;
   *(undefined8*)( this + 0x58 ) = 0;
   *(undefined8*)( this + 0x60 ) = 0;
   *(undefined4*)( this + 0x68 ) = 0;
   this[0x6e] = (SvgLoader)0x0;
   *(undefined8*)( this + 0x98 ) = 0;
   *(undefined1(*) [16])( this + 0x38 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x78 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x88 ) = (undefined1[16])0x0;
   std::condition_variable::condition_variable((condition_variable*)( this + 0xa0 ));
   *(undefined1(*) [16])( this + 0x148 ) = (undefined1[16])0x0;
   *(undefined***)this = &PTR__SvgLoader_0010a300;
   *(undefined***)( this + 0x70 ) = &PTR__SvgLoader_0010a370;
   *(SvgLoader**)( this + 0xe8 ) = this + 0xf8;
   *(SvgLoader**)( this + 0x108 ) = this + 0x118;
   uVar1 = _LC94;
   *(undefined1(*) [16])( this + 0x158 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x170 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1b8 ) = (undefined1[16])0x0;
   *(undefined2*)( this + 0xd0 ) = 1;
   *(undefined8*)( this + 0xf0 ) = 0;
   this[0xf8] = (SvgLoader)0x0;
   *(undefined8*)( this + 0x110 ) = 0;
   this[0x118] = (SvgLoader)0x0;
   *(undefined8*)( this + 0x128 ) = 0;
   *(undefined4*)( this + 0x130 ) = 0;
   *(undefined8*)( this + 0x138 ) = 0;
   *(undefined8*)( this + 0x140 ) = 0;
   *(undefined8*)( this + 0x168 ) = 0;
   *(undefined8*)( this + 0x180 ) = 0;
   *(undefined8*)( this + 0x188 ) = 0;
   *(undefined8*)( this + 400 ) = 0;
   *(undefined8*)( this + 0x198 ) = 0;
   *(undefined8*)( this + 0x1a0 ) = 0;
   *(undefined8*)( this + 0x1a8 ) = 0;
   *(undefined4*)( this + 0x1b0 ) = 0;
   *(undefined2*)( this + 0x1b4 ) = 0;
   this[0x1c8] = (SvgLoader)0x0;
   *(undefined8*)( this + 0x1cc ) = uVar1;
   *(undefined4*)( this + 0x1d4 ) = 0;
   *(undefined1(*) [16])( this + 0x1d8 ) = (undefined1[16])0x0;
   return;
}
/* SvgLoader::clear(bool) */void SvgLoader::clear(SvgLoader *this, bool param_1) {
   long lVar1;
   void *__ptr;
   Scene *this_00;
   undefined8 *puVar2;
   long *__ptr_00;
   undefined8 *__ptr_01;
   long *plVar3;
   long *plVar4;
   free(*(void**)( this + 0x178 ));
   __ptr_00 = *(long**)( this + 0x160 );
   *(undefined8*)( this + 0x178 ) = 0;
   plVar3 = __ptr_00;
   if (__ptr_00 < __ptr_00 + *(uint*)( this + 0x168 )) {
      do {
         lVar1 = *plVar3;
         plVar4 = plVar3 + 1;
         free(*(void**)( lVar1 + 0x38 ));
         *(undefined8*)( lVar1 + 0x38 ) = 0;
         *(undefined8*)( lVar1 + 0x40 ) = 0;
         free(*(void**)( lVar1 + 0x30 ));
         free(*(void**)( lVar1 + 0x20 ));
         free(*(void**)( lVar1 + 0x28 ));
         free(*(void**)( lVar1 + 0x10 ));
         free(*(void**)( lVar1 + 8 ));
         free((void*)*plVar3);
         __ptr_00 = *(long**)( this + 0x160 );
         plVar3 = plVar4;
      }
 while ( plVar4 < __ptr_00 + *(uint*)( this + 0x168 ) );
   }

   free(__ptr_00);
   *(undefined8*)( this + 0x160 ) = 0;
   *(undefined8*)( this + 0x168 ) = 0;
   _freeNode(*(SvgNode**)( this + 0x148 ));
   *(undefined8*)( this + 0x148 ) = 0;
   free(*(void**)( this + 0x138 ));
   *(undefined8*)( this + 0x138 ) = 0;
   *(undefined8*)( this + 0x140 ) = 0;
   if (param_1) {
      puVar2 = *(undefined8**)( this + 0x1a0 );
      __ptr_01 = puVar2;
      if (puVar2 < puVar2 + *(uint*)( this + 0x1a8 )) {
         do {
            __ptr = (void*)*puVar2;
            puVar2 = puVar2 + 1;
            free(__ptr);
            __ptr_01 = *(undefined8**)( this + 0x1a0 );
         }
 while ( puVar2 < *(undefined8**)( this + 0x1a0 ) + *(uint*)( this + 0x1a8 ) );
      }

      free(__ptr_01);
      *(undefined8*)( this + 0x1a0 ) = 0;
      *(undefined8*)( this + 0x1a8 ) = 0;
      if (this[0x1c8] == (SvgLoader)0x0) {
         this_00 = *(Scene**)( this + 0x1c0 );
      }
 else {
         free(*(void**)( this + 0x128 ));
         this_00 = *(Scene**)( this + 0x1c0 );
      }

      if (this_00 != (Scene*)0x0) {
         tvg::Scene::~Scene(this_00);
      }

      *(undefined8*)( this + 0x1c0 ) = 0;
      *(undefined4*)( this + 0x130 ) = 0;
      *(undefined8*)( this + 0x128 ) = 0;
      this[0x1c8] = (SvgLoader)0x0;
   }

   return;
}
/* SvgLoader::~SvgLoader() */void SvgLoader::~SvgLoader(SvgLoader *this) {
   pthread_mutex_t *__mutex;
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__SvgLoader_0010a300;
   *(undefined***)( this + 0x70 ) = &PTR__SvgLoader_0010a370;
   if (this[0xd1] != (SvgLoader)0x0) {
      __mutex = (pthread_mutex_t*)( this + 0x78 );
      iVar2 = pthread_mutex_lock(__mutex);
      if (iVar2 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar2);
      }

      if (this[0xd0] == (SvgLoader)0x0) {
         do {
            std::condition_variable::wait((unique_lock*)( this + 0xa0 ));
         }
 while ( this[0xd0] == (SvgLoader)0x0 );
         this[0xd1] = (SvgLoader)0x0;
      }
 else {
         this[0xd1] = (SvgLoader)0x0;
      }

      if (__mutex != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(__mutex);
      }

   }

   clear(this, true);
   free(*(void**)( this + 0x1a0 ));
   free(*(void**)( this + 400 ));
   free(*(void**)( this + 0x180 ));
   free(*(void**)( this + 0x160 ));
   free(*(void**)( this + 0x138 ));
   if (*(SvgLoader**)( this + 0x108 ) != this + 0x118) {
      operator_delete(*(SvgLoader**)( this + 0x108 ), *(long*)( this + 0x118 ) + 1);
   }

   if (*(SvgLoader**)( this + 0xe8 ) != this + 0xf8) {
      operator_delete(*(SvgLoader**)( this + 0xe8 ), *(long*)( this + 0xf8 ) + 1);
   }

   *(undefined**)( this + 0x70 ) = &DAT_0010a270;
   std::condition_variable::~condition_variable((condition_variable*)( this + 0xa0 ));
   if (this[0x27] == (SvgLoader)0x0) {
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      free(*(void**)( this + 0x18 ));
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* non-virtual thunk to SvgLoader::~SvgLoader() */void SvgLoader::~SvgLoader(SvgLoader *this) {
   ~SvgLoader(this + -0x70)
   ;;
   return;
}
/* SvgLoader::~SvgLoader() */void SvgLoader::~SvgLoader(SvgLoader *this) {
   ~SvgLoader(this)
   ;;
   operator_delete(this, 0x1e8);
   return;
}
/* non-virtual thunk to SvgLoader::~SvgLoader() */void SvgLoader::~SvgLoader(SvgLoader *this) {
   ~SvgLoader(this + -0x70)
   ;;
   operator_delete(this + -0x70, 0x1e8);
   return;
}
/* SvgLoader::close() */undefined8 SvgLoader::close(SvgLoader *this) {
   pthread_mutex_t *__mutex;
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(short*)( this + 0x24 ) == 0) {
      if (this[0xd1] != (SvgLoader)0x0) {
         __mutex = (pthread_mutex_t*)( this + 0x78 );
         iVar2 = pthread_mutex_lock(__mutex);
         if (iVar2 != 0) {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar2);
         }

         if (this[0xd0] == (SvgLoader)0x0) {
            do {
               std::condition_variable::wait((unique_lock*)( this + 0xa0 ));
            }
 while ( this[0xd0] == (SvgLoader)0x0 );
            this[0xd1] = (SvgLoader)0x0;
         }
 else {
            this[0xd1] = (SvgLoader)0x0;
         }

         if (__mutex != (pthread_mutex_t*)0x0) {
            pthread_mutex_unlock(__mutex);
         }

      }

      clear(this, true);
      uVar3 = 1;
   }
 else {
      *(short*)( this + 0x24 ) = *(short*)( this + 0x24 ) + -1;
      uVar3 = 0;
   }

   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* SvgLoader::run(unsigned int) [clone .part.0] */void SvgLoader::run(uint param_1) {
   SvgLoaderData *pSVar1;
   long lVar2;
   SvgNode *pSVar3;
   SvgNode *pSVar4;
   char *__s2;
   char cVar5;
   int iVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   SvgNode *pSVar9;
   long lVar10;
   undefined4 in_register_0000003c;
   SvgLoader *this;
   SvgNode *pSVar11;
   long lVar12;
   SvgNode *pSVar13;
   long lVar14;
   SvgNode *local_40;
   this(SvgLoader * CONCAT44(in_register_0000003c, param_1));
   pSVar1 = (SvgLoaderData*)( this + 0x138 );
   cVar5 = simpleXmlParse(*(char**)( this + 0x128 ), *(uint*)( this + 0x130 ), true, _svgLoaderParser, pSVar1);
   if (cVar5 == '\0') {
      return;
   }

   pSVar9 = *(SvgNode**)( this + 0x148 );
   if (pSVar9 == (SvgNode*)0x0) goto LAB_00108ce1;
   pSVar3 = *(SvgNode**)( pSVar9 + 0x58 );
   if (*(int*)( this + 0x198 ) != 0) {
      cssApplyStyleToPostponeds((Array*)( this + 400 ), *(SvgNode**)( this + 0x158 ));
      pSVar9 = *(SvgNode**)( this + 0x148 );
   }

   if (*(SvgNode**)( this + 0x158 ) != (SvgNode*)0x0) {
      cssUpdateStyle(pSVar9, *(SvgNode**)( this + 0x158 ));
      pSVar9 = *(SvgNode**)( this + 0x148 );
   }

   if (*(int*)( this + 0x188 ) != 0) {
      lVar14 = 0;
      do {
         puVar8 = (undefined8*)( lVar14 * 0x10 + *(long*)( this + 0x180 ) );
         pSVar4 = (SvgNode*)*puVar8;
         __s2 = (char*)puVar8[1];
         pSVar13 = pSVar4;
         if (pSVar4 == (SvgNode*)0x0) {
            pSVar11 = (SvgNode*)0x0;
         }
 else {
            do {
               pSVar11 = pSVar13;
               pSVar13 = *(SvgNode**)( pSVar11 + 8 );
            }
 while ( *(SvgNode**)( pSVar11 + 8 ) != (SvgNode*)0x0 );
            if (*(int*)pSVar11 == 0) {
               pSVar11 = *(SvgNode**)( pSVar11 + 0x58 );
            }
 else if (*(int*)pSVar11 != 2) {
               pSVar11 = (SvgNode*)0x0;
            }

         }

         local_40 = (SvgNode*)_findNodeById(pSVar11, __s2);
         if (local_40 == (SvgNode*)0x0) {
            local_40 = (SvgNode*)_findNodeById(pSVar9, __s2);
            pSVar13 = *(SvgNode**)( pSVar4 + 8 );
            if (pSVar13 != (SvgNode*)0x0) goto LAB_00108ea1;
            LAB_00108f10:_cloneNode(local_40, pSVar4, 0);
            if (local_40 != (SvgNode*)0x0) goto LAB_00108f27;
         }
 else {
            pSVar13 = *(SvgNode**)( pSVar4 + 8 );
            if (( pSVar13 != (SvgNode*)0x0 ) && ( pSVar9 != pSVar13 )) {
               do {
                  if (( *(char**)( pSVar13 + 0x20 ) != (char*)0x0 ) && ( iVar6 = iVar6 == 0 )) goto LAB_00108ebb;
                  pSVar13 = *(SvgNode**)( pSVar13 + 8 );
                  if (pSVar13 == (SvgNode*)0x0) break;
                  LAB_00108ea1:;
               }
 while ( pSVar13 != pSVar9 );
               goto LAB_00108f10;
            }

            _cloneNode(local_40, pSVar4, 0);
            LAB_00108f27:if (( *(int*)local_40 == 0x15 ) && ( *(int*)pSVar4 == 0x10 )) {
               *(SvgNode**)( pSVar4 + 0x50 ) = local_40;
            }

         }

         LAB_00108ebb:lVar14 = lVar14 + 1;
         free(__s2);
      }
 while ( (uint)lVar14 < *(uint*)( this + 0x188 ) );
      pSVar9 = *(SvgNode**)( this + 0x148 );
   }

   _updateComposite(pSVar9, pSVar9);
   if (pSVar3 == (SvgNode*)0x0) {
      lVar14 = *(long*)( this + 0x148 );
      lVar12 = *(long*)( lVar14 + 0x10 );
      if (*(int*)( lVar14 + 0x18 ) != 0) goto LAB_00108c85;
      LAB_00108db9:if (*(int*)( this + 0x168 ) != 0) {
         _updateGradient(pSVar1, *(SvgNode**)( this + 0x148 ), (Array*)( this + 0x160 ));
      }

   }
 else {
      _updateComposite(*(SvgNode**)( this + 0x148 ), pSVar3);
      lVar14 = *(long*)( this + 0x148 );
      lVar12 = *(long*)( lVar14 + 0x10 );
      if (*(int*)( lVar14 + 0x18 ) != 0) {
         LAB_00108c85:lVar10 = 0;
         do {
            lVar2 = lVar10 * 8;
            lVar10 = lVar10 + 1;
            _updateStyle(*(SvgNode**)( lVar12 + lVar2 ), *(SvgStyleProperty**)( lVar14 + 0x28 ));
         }
 while ( (uint)lVar10 < *(uint*)( lVar14 + 0x18 ) );
         if (pSVar3 == (SvgNode*)0x0) goto LAB_00108db9;
      }

      _updateStyle(pSVar3, (SvgStyleProperty*)0x0);
      if (*(int*)( this + 0x168 ) != 0) {
         _updateGradient(pSVar1, *(SvgNode**)( this + 0x148 ), (Array*)( this + 0x160 ));
      }

      _updateGradient(pSVar1, *(SvgNode**)( this + 0x148 ), (Array*)( pSVar3 + 0x38 ));
   }

   LAB_00108ce1:uVar7 = svgSceneBuild(*(undefined8*)( this + 0x1d8 ), *(undefined8*)( this + 0x1e0 ), *(undefined4*)( this + 0x28 ), *(undefined4*)( this + 0x2c ), pSVar1, *(undefined4*)( this + 0x1d0 ), *(undefined4*)( this + 0x1d4 ), this + 0x108, *(undefined4*)( this + 0x1cc ));
   *(undefined8*)( this + 0x1c0 ) = uVar7;
   if (( (byte)this[0x1cc] & 4 ) == 0) {
      lVar14 = *(long*)( this + 0x148 );
      *(undefined4*)( this + 0x1d8 ) = *(undefined4*)( lVar14 + 0x40 );
      *(undefined4*)( this + 0x1dc ) = *(undefined4*)( lVar14 + 0x44 );
      *(undefined4*)( this + 0x1e0 ) = *(undefined4*)( lVar14 + 0x48 );
      *(undefined4*)( this + 0x1e4 ) = *(undefined4*)( lVar14 + 0x4c );
      *(undefined4*)( this + 0x28 ) = *(undefined4*)( lVar14 + 0x38 );
      *(undefined4*)( this + 0x2c ) = *(undefined4*)( lVar14 + 0x3c );
   }

   clear(this, false);
   return;
}
/* SvgLoader::run(unsigned int) */void SvgLoader::run(uint param_1) {
   long lVar1;
   undefined4 in_register_0000003c;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 local_18;
   lVar2 = CONCAT44(in_register_0000003c, param_1);
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(byte*)( lVar2 + 0x1cc ) & 4 ) != 0) {
      if (( (float)( *(uint*)( lVar2 + 0x1e0 ) & _LC82 ) <= _LC57 ) || ( (float)( *(uint*)( lVar2 + 0x1e4 ) & _LC82 ) <= _LC57 )) {
         tvg::Scene::gen();
         *(undefined8*)( lVar2 + 0x1c0 ) = local_18;
         if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00109021;
      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      run(param_1);
      return;
   }

   LAB_00109021:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* non-virtual thunk to SvgLoader::run(unsigned int) */void SvgLoader::run(SvgLoader *this, uint param_1) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 local_18;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( (byte)this[0x15c] & 4 ) != 0) {
      if (( (float)( *(uint*)( this + 0x170 ) & _LC82 ) <= _LC57 ) || ( (float)( *(uint*)( this + 0x174 ) & _LC82 ) <= _LC57 )) {
         tvg::Scene::gen();
         *(undefined8*)( this + 0x150 ) = local_18;
         if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001090d1;
      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      run((int)this - 0x70);
      return;
   }

   LAB_001090d1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* SvgLoader::header() */undefined8 SvgLoader::header(SvgLoader *this) {
   int iVar1;
   float fVar2;
   int *piVar3;
   undefined4 uVar4;
   void *pvVar5;
   uint uVar6;
   pvVar5 = malloc(0x30);
   *(void**)( this + 0x178 ) = pvVar5;
   if (pvVar5 != (void*)0x0) {
      *(undefined4*)( (long)pvVar5 + 0x18 ) = 0;
      *(undefined4*)( this + 0x1cc ) = 0;
      simpleXmlParse(*(char**)( this + 0x128 ), *(uint*)( this + 0x130 ), true, _svgLoaderParserForValidCheck, this + 0x138);
      piVar3 = *(int**)( this + 0x148 );
      if (( piVar3 != (int*)0x0 ) && ( *piVar3 == 0 )) {
         uVar6 = piVar3[0x14];
         *(uint*)( this + 0x1cc ) = uVar6;
         *(int*)( this + 0x1d0 ) = piVar3[0x1a];
         *(int*)( this + 0x1d4 ) = piVar3[0x1b];
         if (( uVar6 & 4 ) == 0) {
            *(undefined8*)( this + 0x1d8 ) = 0;
            uVar4 = _LC26;
            if (( uVar6 & 1 ) == 0) {
               *(undefined4*)( this + 0x1e0 ) = _LC26;
               if (( uVar6 & 8 ) == 0) {
                  *(undefined4*)( this + 0x28 ) = uVar4;
               }
 else {
                  *(int*)( this + 0x28 ) = piVar3[0xe];
               }

            }
 else {
               iVar1 = piVar3[0xe];
               *(int*)( this + 0x28 ) = iVar1;
               *(int*)( this + 0x1e0 ) = iVar1;
            }

            uVar4 = _LC26;
            if (( uVar6 & 2 ) == 0) {
               *(undefined4*)( this + 0x1e4 ) = _LC26;
               if (( uVar6 & 0x10 ) == 0) {
                  *(undefined4*)( this + 0x2c ) = uVar4;
               }
 else {
                  *(int*)( this + 0x2c ) = piVar3[0xf];
               }

            }
 else {
               iVar1 = piVar3[0xf];
               *(int*)( this + 0x2c ) = iVar1;
               *(int*)( this + 0x1e4 ) = iVar1;
            }

            if (*(code**)( *(long*)this + 0x58 ) == run) {
               run((uint)this);
            }
 else {
               ( **(code**)( *(long*)this + 0x58 ) )(this, 0);
            }

         }
 else {
            for (int i = 0; i < 4; i++) {
               *(int*)( this + ( 4*i + 472 ) ) = piVar3[( i + 16 )];
            }

            if (( uVar6 & 1 ) == 0) {
               fVar2 = (float)piVar3[0x12];
               *(float*)( this + 0x28 ) = fVar2;
               if (( uVar6 & 8 ) != 0) {
                  uVar6 = uVar6 ^ 8;
                  *(float*)( this + 0x28 ) = fVar2 * (float)piVar3[0xe];
               }

               uVar6 = uVar6 | 1;
               *(uint*)( this + 0x1cc ) = uVar6;
            }
 else {
               *(int*)( this + 0x28 ) = piVar3[0xe];
            }

            if (( uVar6 & 2 ) == 0) {
               fVar2 = (float)piVar3[0x13];
               *(float*)( this + 0x2c ) = fVar2;
               if (( uVar6 & 0x10 ) != 0) {
                  uVar6 = uVar6 ^ 0x10;
                  *(float*)( this + 0x2c ) = fVar2 * (float)piVar3[0xf];
               }

               *(uint*)( this + 0x1cc ) = uVar6 | 2;
            }
 else {
               *(int*)( this + 0x2c ) = piVar3[0xf];
            }

         }

         return 1;
      }

   }

   return 0;
}
/* SvgLoader::open(char const*, unsigned int, bool) */undefined8 SvgLoader::open(SvgLoader *this, char *param_1, uint param_2, bool param_3) {
   undefined8 uVar1;
   void *pvVar2;
   long lVar3;
   clear(this, true);
   if (param_3) {
      pvVar2 = malloc(( ulong )(param_2 + 1));
      *(void**)( this + 0x128 ) = pvVar2;
      if (pvVar2 == (void*)0x0) {
         return 0;
      }

      lVar3 = __memcpy_chk(pvVar2, param_1, (ulong)param_2, ( ulong )(param_2 + 1));
      *(undefined1*)( lVar3 + (ulong)param_2 ) = 0;
   }
 else {
      *(char**)( this + 0x128 ) = param_1;
   }

   *(uint*)( this + 0x130 ) = param_2;
   this[0x1c8] = (SvgLoader)param_3;
   uVar1 = header(this);
   return uVar1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* SvgLoader::open(std::__cxx11::string const&) */undefined4 SvgLoader::open(SvgLoader *this, string *param_1) {
   undefined *puVar1;
   char cVar2;
   undefined4 uVar3;
   long lVar4;
   long in_FS_OFFSET;
   undefined *local_248[2];
   code *local_238[2];
   uint auStack_228[10];
   locale local_200[48];
   __basic_file<char> local_1d0[136];
   code *local_148[27];
   undefined8 local_70;
   undefined2 local_68;
   undefined1 local_60[16];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   clear(this, true);
   std::ios_base::ios_base((ios_base*)local_148);
   puVar1 = _vtable;
   local_68 = 0;
   local_60 = (undefined1[16])0x0;
   local_50 = (undefined1[16])0x0;
   local_148[0] = std::filebuf::filebuf;
   local_70 = 0;
   local_248[0] = _vtable;
   *(undefined8*)( (long)local_248 + *(long*)( _vtable + -0x18 ) ) = _init;
   local_248[1] = (undefined*)0x0;
   std::ios::init((streambuf*)( (istream*)local_248 + *(long*)( _vtable + -0x18 ) ));
   local_248[0] = &std::ios::vtable;
   local_148[0] = std::__basic_file<char>::is_open;
   std::filebuf::filebuf((filebuf*)local_238);
   std::ios::init((streambuf*)local_148);
   lVar4 = std::filebuf::open((filebuf*)local_238, *(undefined8*)param_1, 8);
   if (lVar4 == 0) {
      std::ios::clear((istream*)local_248 + *(long*)( local_248[0] + -0x18 ), *(uint*)( (long)auStack_228 + *(long*)( local_248[0] + -0x18 ) ) | 4);
   }
 else {
      std::ios::clear((istream*)local_248 + *(long*)( local_248[0] + -0x18 ), 0);
   }

   cVar2 = std::__basic_file<char>::is_open();
   if (cVar2 != '\0') {
      std::__cxx11::string::_M_assign((string*)( this + 0x108 ));
      std::getline<char,std::char_traits<char>,std::allocator<char>>((istream*)local_248, (string*)( this + 0xe8 ), '\0');
      lVar4 = std::filebuf::close();
      if (lVar4 == 0) {
         std::ios::clear((istream*)local_248 + *(long*)( local_248[0] + -0x18 ), *(uint*)( (long)auStack_228 + *(long*)( local_248[0] + -0x18 ) ) | 4);
      }

      if (*(long*)( this + 0xf0 ) != 0) {
         *(int*)( this + 0x130 ) = (int)*(long*)( this + 0xf0 );
         *(undefined8*)( this + 0x128 ) = *(undefined8*)( this + 0xe8 );
         uVar3 = header(this);
         goto LAB_0010951d;
      }

   }

   uVar3 = 0;
   LAB_0010951d:local_248[0] = &std::ios::vtable;
   local_148[0] = std::__basic_file<char>::is_open;
   local_238[0] = std::__basic_file<char>::~__basic_file;
   std::filebuf::close();
   std::__basic_file<char>::~__basic_file(local_1d0);
   local_238[0] = std::ios_base::~ios_base;
   std::locale::~locale(local_200);
   local_248[0] = puVar1;
   *(undefined8*)( (long)local_248 + *(long*)( puVar1 + -0x18 ) ) = _init;
   local_148[0] = std::filebuf::filebuf;
   local_248[1] = (undefined*)0x0;
   std::ios_base::~ios_base((ios_base*)local_148);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* LoadModule::open(std::__cxx11::string const&) */undefined8 LoadModule::open(string *param_1) {
   return 0;
}
/* LoadModule::open(char const*, unsigned int, bool) */undefined8 LoadModule::open(char *param_1, uint param_2, bool param_3) {
   return 0;
}
/* LoadModule::resize(tvg::Paint*, float, float) */undefined8 LoadModule::resize(Paint *param_1, float param_2, float param_3) {
   return 0;
}
/* LoadModule::sync() */void LoadModule::sync(void) {
   return;
}
/* LoadModule::read() */bool LoadModule::read(LoadModule *this) {
   LoadModule LVar1;
   LVar1 = this[0x26];
   if (LVar1 == (LoadModule)0x0) {
      this[0x26] = (LoadModule)0x1;
   }

   return LVar1 == (LoadModule)0x0;
}
/* LoadModule::close() */bool LoadModule::close(LoadModule *this) {
   short sVar1;
   sVar1 = *(short*)( this + 0x24 );
   if (sVar1 != 0) {
      *(short*)( this + 0x24 ) = sVar1 + -1;
   }

   return sVar1 == 0;
}
/* ImageLoader::animatable() */undefined8 ImageLoader::animatable(void) {
   return 0;
}
/* ImageLoader::paint() */undefined8 ImageLoader::paint(void) {
   return 0;
}
/* ImageLoader::bitmap() */ImageLoader * __thiscall ImageLoader::bitmap(ImageLoader *this){
   ImageLoader *pIVar1;
   pIVar1 = *(ImageLoader**)( this + 0x30 );
   if (*(ImageLoader**)( this + 0x30 ) != (ImageLoader*)0x0) {
      pIVar1 = this + 0x30;
   }

   return pIVar1;
}
/* ImageLoader::~ImageLoader() */void ImageLoader::~ImageLoader(ImageLoader *this) {
   if (this[0x27] == (ImageLoader)0x0) {
      return;
   }

   free(*(void**)( this + 0x18 ));
   return;
}
/* ImageLoader::~ImageLoader() */void ImageLoader::~ImageLoader(ImageLoader *this) {
   if (this[0x27] == (ImageLoader)0x0) {
      operator_delete(this, 0x70);
      return;
   }

   free(*(void**)( this + 0x18 ));
   operator_delete(this, 0x70);
   return;
}
/* SvgStyleGradient::clear() */void SvgStyleGradient::clear(SvgStyleGradient *this) {
   free(*(void**)( this + 0x38 ));
   *(undefined8*)( this + 0x38 ) = 0;
   *(undefined8*)( this + 0x40 ) = 0;
   free(*(void**)( this + 0x30 ));
   free(*(void**)( this + 0x20 ));
   free(*(void**)( this + 0x28 ));
   free(*(void**)( this + 0x10 ));
   free(*(void**)( this + 8 ));
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* ImageLoader::~ImageLoader() */void ImageLoader::~ImageLoader(ImageLoader *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

