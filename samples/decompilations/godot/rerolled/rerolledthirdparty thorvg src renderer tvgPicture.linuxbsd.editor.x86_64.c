/* tvg::Picture::type() const */undefined8 tvg::Picture::type(void) {
   return 3;
}
/* std::_Function_handler<bool (tvg::Paint const*, void*), tvg::Picture::paint(unsigned
   int)::{lambda(tvg::Paint const*, void*)#1}>::_M_invoke(std::_Any_data const&, tvg::Paint
   const*&&, void*&&) */undefined8 std::_Function_handler<bool(tvg::Paint_const *, void *),tvg::Picture::paint(unsigned_int)::{lambda(tvg::Paint_const*,void*)#1}>::_M_invoke(_Any_data *param_1, Paint **param_2, void **param_3) {
   /* WARNING: Load size is inaccurate */
   if (**param_3 != *(int*)( *param_2 + 8 )) {
      return 1;
   }

   *(Paint**)( (long)*param_3 + 8 ) = *param_2;
   return 0;
}
/* std::_Function_handler<bool (tvg::Paint const*, void*), tvg::Picture::paint(unsigned
   int)::{lambda(tvg::Paint const*, void*)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */undefined8 std::_Function_handler<bool(tvg::Paint_const *, void *),tvg::Picture::paint(unsigned_int)::{lambda(tvg::Paint_const*,void*)#1}>::_M_manager(undefined8 *param_1, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      *param_1 = &tvg::Picture::paint(unsigned_int)::{lambda(tvg::Paint_const*,void*)
      #1
      return 0;
   }

   if (param_3 != 1) {
      return 0;
   }

   *param_1 = param_2;
   return 0;
}
/* tvg::Picture::~Picture() */void tvg::Picture::~Picture(Picture *this) {
   undefined8 *puVar1;
   long *plVar2;
   Picture *this_00;
   puVar1 = *(undefined8**)( this + 0x18 );
   *(undefined***)this = &PTR__Picture_00100a40;
   if (puVar1 != (undefined8*)0x0) {
      LoaderMgr::retrieve((LoadModule*)*puVar1);
      if (( puVar1[2] != 0 ) && ( plVar2 = *(long**)( *(long*)( puVar1[5] + 0x10 ) + 0x18 ) ),plVar2 != (long*)0x0) {
         ( **(code**)( *plVar2 + 0x40 ) )(plVar2, puVar1[3]);
      }

      this_00 = (Picture*)puVar1[1];
      if (this_00 != (Picture*)0x0) {
         if (*(code**)( *(long*)this_00 + 8 ) == ~Picture) {
            ~Picture(this_00)
            ;;
            operator_delete(this_00, 0x20);
         }
 else {
            ( **(code**)( *(long*)this_00 + 8 ) )();
         }

      }

      operator_delete(puVar1, 0x38);
   }

   tvg::Paint::~Paint((Paint*)this);
   return;
}
/* tvg::Picture::~Picture() */void tvg::Picture::~Picture(Picture *this) {
   ~Picture(this)
   ;;
   operator_delete(this, 0x20);
   return;
}
/* tvg::Picture::Impl::load() */int tvg::Picture::Impl::load(Impl *this) {
   code *pcVar1;
   long *plVar2;
   long lVar3;
   undefined4 uVar4;
   float fVar5;
   if (*(long**)this != (long*)0x0) {
      lVar3 = **(long**)this;
      if (*(long*)( this + 8 ) == 0) {
         pcVar1 = *(code**)( lVar3 + 0x48 );
         if (pcVar1 != ImageLoader::paint) {
            lVar3 = ( *pcVar1 )();
            *(long*)( this + 8 ) = lVar3;
            if (lVar3 != 0) {
               plVar2 = *(long**)this;
               fVar5 = *(float*)( plVar2 + 5 );
               if (( *(float*)( this + 0x20 ) == fVar5 ) && ( *(float*)( this + 0x24 ) == *(float*)( (long)plVar2 + 0x2c ) )) {
                  return 0;
               }

               if (this[0x31] == (Impl)0x0) {
                  *(float*)( this + 0x20 ) = fVar5;
                  uVar4 = *(undefined4*)( (long)plVar2 + 0x2c );
                  *(undefined4*)( this + 0x24 ) = uVar4;
               }
 else {
                  uVar4 = *(undefined4*)( this + 0x24 );
                  fVar5 = *(float*)( this + 0x20 );
               }

               if (*(code**)( *plVar2 + 0x20 ) != LoadModule::resize) {
                  ( **(code**)( *plVar2 + 0x20 ) )(fVar5, uVar4, plVar2, lVar3);
               }

               this[0x31] = (Impl)0x0;
               return 0;
            }

         }

      }
 else {
         pcVar1 = *(code**)( lVar3 + 0x28 );
         if (pcVar1 != LoadModule::sync) {
            ( *pcVar1 )();
         }

      }

      if (*(long*)( this + 0x10 ) == 0) {
         plVar2 = *(long**)this;
         if (*(code**)( *plVar2 + 0x50 ) != ImageLoader::bitmap) {
            lVar3 = ( **(code**)( *plVar2 + 0x50 ) )();
            *(long*)( this + 0x10 ) = lVar3;
            return (int)CONCAT71(( int7 )((ulong)lVar3 >> 8), lVar3 != 0) << 5;
         }

         if (plVar2[6] != 0) {
            *(long**)( this + 0x10 ) = plVar2 + 6;
            return 0x20;
         }

      }

   }

   return 0;
}
/* tvg::Picture::Impl::queryComposition(unsigned char) */void tvg::Picture::Impl::queryComposition(Impl *this, uchar param_1) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   long local_18;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0x30] = (Impl)0x0;
   if (param_1 == 0xff) {
      iVar2 = tvg::Paint::composite(*(Paint***)( this + 0x28 ));
      if (( ( iVar2 != 1 ) && ( local_18 != 0 ) ) && ( ( byte )(*(char*)( *(long*)( local_18 + 0x10 ) + 0x77 ) - 1U) < 0xfe )) {
         this[0x30] = (Impl)0x1;
      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* tvg::Picture::Impl::size(float, float) */undefined8 tvg::Picture::Impl::size(Impl *this, float param_1, float param_2) {
   this[0x31] = (Impl)0x1;
   *(ulong*)( this + 0x20 ) = CONCAT44(param_2, param_1);
   return 1;
}
/* tvg::Picture::Impl::bounds(tvg::RenderMethod*) */undefined8 tvg::Picture::Impl::bounds(Impl *this, RenderMethod *param_1) {
   undefined8 uVar1;
   if (*(long*)( this + 0x18 ) != 0) {
      /* WARNING: Could not recover jumptable at 0x00100316. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar1 = ( **(code**)( *(long*)param_1 + 0x48 ) )();
      return uVar1;
   }

   if (*(long*)( this + 8 ) != 0) {
      uVar1 = tvg::Paint::Impl::bounds(*(RenderMethod**)( *(long*)( this + 8 ) + 0x10 ));
      return uVar1;
   }

   return 0;
}
/* tvg::Picture::Impl::render(tvg::RenderMethod*) */ulong tvg::Picture::Impl::render(Impl *this, RenderMethod *param_1) {
   Impl IVar1;
   code *pcVar2;
   undefined1 uVar3;
   uint uVar4;
   ulong uVar5;
   long lVar6;
   long in_FS_OFFSET;
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)param_1 + 0x60 ) )(param_1, *(undefined1*)( *(long*)( *(long*)( this + 0x28 ) + 0x10 ) + 0x74 ));
   if (*(long*)( this + 0x10 ) == 0) {
      if (*(long*)( this + 8 ) == 0) {
         uVar5 = 0;
      }
 else {
         IVar1 = this[0x30];
         if (IVar1 == (Impl)0x0) {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar5 = tvg::Paint::Impl::render(*(RenderMethod**)( *(long*)( this + 8 ) + 0x10 ));
               return uVar5;
            }

            goto LAB_001004a4;
         }

         pcVar2 = *(code**)( *(long*)param_1 + 0x88 );
         uVar3 = ( **(code**)( *(long*)param_1 + 0x68 ) )(param_1);
         local_48 = bounds(this, param_1);
         lVar6 = ( *pcVar2 )(param_1, local_48, uVar3, IVar1);
         ( **(code**)( *(long*)param_1 + 0x90 ) )(param_1, lVar6, 0, 0xff);
         uVar4 = tvg::Paint::Impl::render(*(RenderMethod**)( *(long*)( this + 8 ) + 0x10 ));
         uVar5 = (ulong)uVar4;
         if (lVar6 != 0) {
            ( **(code**)( *(long*)param_1 + 0x98 ) )(param_1, lVar6);
         }

      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar5;
      }

   }
 else if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001003be. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar5 = ( **(code**)( *(long*)param_1 + 0x30 ) )(param_1, *(undefined8*)( this + 0x18 ));
      return uVar5;
   }

   LAB_001004a4:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* tvg::Picture::Impl::load(ImageLoader*) */undefined8 tvg::Picture::Impl::load(Impl *this, ImageLoader *param_1) {
   LoadModule *pLVar1;
   long lVar2;
   char cVar3;
   pLVar1 = *(LoadModule**)this;
   if (pLVar1 == (LoadModule*)param_1) {
      *(short*)( pLVar1 + 0x24 ) = *(short*)( pLVar1 + 0x24 ) + -1;
   }
 else {
      if (pLVar1 != (LoadModule*)0x0) {
         LoaderMgr::retrieve(pLVar1);
      }

      lVar2 = *(long*)param_1;
      *(ImageLoader**)this = param_1;
      if (*(code**)( lVar2 + 0x30 ) == LoadModule::read) {
         if (param_1[0x26] != (ImageLoader)0x0) {
            return 6;
         }

         param_1[0x26] = (ImageLoader)0x1;
      }
 else {
         cVar3 = ( **(code**)( lVar2 + 0x30 ) )(param_1);
         if (cVar3 == '\0') {
            return 6;
         }

      }

      *(undefined4*)( this + 0x20 ) = *(undefined4*)( param_1 + 0x28 );
      *(undefined4*)( this + 0x24 ) = *(undefined4*)( param_1 + 0x2c );
   }

   return 0;
}
/* tvg::Picture::Picture() */void tvg::Picture::Picture(Picture *this) {
   undefined1(*pauVar1)[16];
   tvg::Paint::Paint((Paint*)this);
   *(undefined***)this = &PTR__Picture_00100a40;
   pauVar1 = (undefined1(*) [16])operator_new(0x38);
   *(undefined8*)pauVar1[2] = 0;
   *(Picture**)( pauVar1[2] + 8 ) = this;
   *(undefined2*)pauVar1[3] = 0;
   *(undefined1(**) [16])( this + 0x18 ) = pauVar1;
   *pauVar1 = (undefined1[16])0x0;
   pauVar1[1] = (undefined1[16])0x0;
   return;
}
/* tvg::Picture::gen() */Picture * __thiscall tvg::Picture::gen(Picture *this){
   Paint *this_00;
   undefined1(*pauVar1)[16];
   this_00 = (Paint*)operator_new(0x20);
   tvg::Paint::Paint(this_00);
   *(undefined***)this_00 = &PTR__Picture_00100a40;
   pauVar1 = (undefined1(*) [16])operator_new(0x38);
   *(Paint**)this = this_00;
   *(undefined8*)pauVar1[2] = 0;
   *(Paint**)( pauVar1[2] + 8 ) = this_00;
   *(undefined2*)pauVar1[3] = 0;
   *(undefined1(**) [16])( this_00 + 0x18 ) = pauVar1;
   *pauVar1 = (undefined1[16])0x0;
   pauVar1[1] = (undefined1[16])0x0;
   return this;
}
/* tvg::Picture::identifier() */undefined8 tvg::Picture::identifier(void) {
   return 3;
}
/* tvg::Picture::load(std::__cxx11::string const&) */ulong tvg::Picture::load(Picture *this, string *param_1) {
   Impl *this_00;
   ulong uVar1;
   ImageLoader *pIVar2;
   long in_FS_OFFSET;
   bool local_11;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = 1;
   if (*(long*)( param_1 + 8 ) != 0) {
      this_00 = *(Impl**)( this + 0x18 );
      uVar1 = 2;
      if (( *(long*)( this_00 + 8 ) == 0 ) && ( *(long*)( this_00 + 0x10 ) == 0 )) {
         pIVar2 = (ImageLoader*)LoaderMgr::loader(param_1, &local_11);
         if (pIVar2 == (ImageLoader*)0x0) {
            uVar1 = ( ulong )(( -(uint)(local_11 == false) & 4 ) + 1);
         }
 else {
            uVar1 = Impl::load(this_00, pIVar2);
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* tvg::Picture::load(char const*, unsigned int, std::__cxx11::string const&, bool) */undefined8 tvg::Picture::load(Picture *this, char *param_1, uint param_2, string *param_3, bool param_4) {
   Impl *this_00;
   ImageLoader *pIVar1;
   undefined8 uVar2;
   if (( param_1 != (char*)0x0 ) && ( param_2 != 0 )) {
      this_00 = *(Impl**)( this + 0x18 );
      if (*(long*)( this_00 + 8 ) != 0) {
         return 2;
      }

      uVar2 = 2;
      if (*(long*)( this_00 + 0x10 ) == 0) {
         pIVar1 = (ImageLoader*)LoaderMgr::loader(param_1, param_2, param_3, param_4);
         if (pIVar1 != (ImageLoader*)0x0) {
            uVar2 = Impl::load(this_00, pIVar1);
            return uVar2;
         }

         uVar2 = 5;
      }

      return uVar2;
   }

   return 1;
}
/* tvg::Picture::load(char const*, unsigned int, bool) */undefined4 tvg::Picture::load(Picture *this, char *param_1, uint param_2, bool param_3) {
   undefined4 uVar1;
   long in_FS_OFFSET;
   undefined1 *local_48;
   undefined8 local_40;
   undefined1 local_38;
   undefined7 uStack_37;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   local_40 = 0;
   local_48 = &local_38;
   uVar1 = load(this, param_1, param_2, (string*)&local_48, param_3);
   if (local_48 != &local_38) {
      operator_delete(local_48, CONCAT71(uStack_37, local_38) + 1);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* tvg::Picture::load(unsigned int*, unsigned int, unsigned int, bool) */undefined8 tvg::Picture::load(Picture *this, uint *param_1, uint param_2, uint param_3, bool param_4) {
   Impl *this_00;
   undefined8 uVar1;
   ImageLoader *pIVar2;
   if (( param_2 != 0 && param_3 != 0 ) && ( param_1 != (uint*)0x0 )) {
      this_00 = *(Impl**)( this + 0x18 );
      uVar1 = 2;
      if (( *(long*)( this_00 + 8 ) == 0 ) && ( *(long*)( this_00 + 0x10 ) == 0 )) {
         pIVar2 = (ImageLoader*)LoaderMgr::loader(param_1, param_2, param_3, param_4);
         if (pIVar2 != (ImageLoader*)0x0) {
            uVar1 = Impl::load(this_00, pIVar2);
            return uVar1;
         }

         uVar1 = 3;
      }

      return uVar1;
   }

   return 1;
}
/* tvg::Picture::size(float, float) */undefined8 tvg::Picture::size(Picture *this, float param_1, float param_2) {
   long lVar1;
   lVar1 = *(long*)( this + 0x18 );
   *(undefined1*)( lVar1 + 0x31 ) = 1;
   *(ulong*)( lVar1 + 0x20 ) = CONCAT44(param_2, param_1);
   return 0;
}
/* tvg::Picture::size(float*, float*) const */undefined8 tvg::Picture::size(Picture *this, float *param_1, float *param_2) {
   long *plVar1;
   plVar1 = *(long**)( this + 0x18 );
   if (*plVar1 != 0) {
      if (param_1 != (float*)0x0) {
         *param_1 = *(float*)( plVar1 + 4 );
      }

      if (param_2 != (float*)0x0) {
         *param_2 = *(float*)( (long)plVar1 + 0x24 );
      }

      return 0;
   }

   return 2;
}
/* tvg::Picture::paint(unsigned int) */undefined8 tvg::Picture::paint(Picture *this, uint param_1) {
   long in_FS_OFFSET;
   Accessor *local_60;
   uint local_58[4];
   undefined1 local_48[16];
   code *local_38;
   code *pcStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 3; i++) {
      local_58[( i + 1 )] = 0;
   }

   local_58[0] = param_1;
   tvg::Accessor::gen();
   local_48 = (undefined1[16])0x0;
   local_38 = std::_Function_handler<bool(tvg::Paint_const *, void *),tvg::Picture::paint(unsigned_int)::{lambda(tvg::Paint_const *, void *)#1}>::_M_manager;
   pcStack_30 = std::_Function_handler<bool(tvg::Paint_const *, void *),tvg::Picture::paint(unsigned_int)::{lambda(tvg::Paint_const *, void *)#1}>::_M_invoke;
   tvg::Accessor::set(local_60, this, local_48, local_58);
   if (local_38 != (code*)0x0) {
      ( *local_38 )(local_48, local_48, 3);
   }

   if (local_60 != (Accessor*)0x0) {
      tvg::Accessor::~Accessor(local_60);
      operator_delete(local_60, 8);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return CONCAT44(local_58[3], local_58[2]);
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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

