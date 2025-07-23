/* EncodedObjectAsID::set_object_id(ObjectID) */void EncodedObjectAsID::set_object_id(EncodedObjectAsID *this, undefined8 param_2) {
   *(undefined8*)( this + 0x180 ) = param_2;
   return;
}
/* EncodedObjectAsID::get_object_id() const */undefined8 EncodedObjectAsID::get_object_id(EncodedObjectAsID *this) {
   return *(undefined8*)( this + 0x180 );
}
/* void Ref<Script>::TEMPNAMEPLACEHOLDERVALUE(Ref<Resource> const&) [clone .isra.0] */void Ref<Script>::operator =(Ref<Script> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   pOVar1 = *(Object**)this;
   if (param_1 == (Ref*)0x0) {
      if (pOVar1 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &Script::typeinfo, 0);
      if (pOVar3 == pOVar1) {
         return;
      }

      *(Object**)this = pOVar3;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
         *(undefined8*)this = 0;
      }

      if (pOVar1 == (Object*)0x0) {
         return;
      }

   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar1) ),cVar2 != '\0') {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
      return;
   }

   return;
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
   long *plVar1;
   size_t __n;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   __n = *(size_t*)( *(long*)this + -8 );
   uVar5 = 0x10;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = __n;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<long>::_copy_on_write() [clone .isra.0] */void CowData<long>::_copy_on_write(CowData<long> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 8;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<Color>::_copy_on_write() [clone .isra.0] */void CowData<Color>::_copy_on_write(CowData<Color> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 0x10;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<double>::_copy_on_write() [clone .isra.0] */void CowData<double>::_copy_on_write(CowData<double> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 8;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] */void CowData<int>::_copy_on_write(CowData<int> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 4;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<float>::_copy_on_write() [clone .isra.0] */void CowData<float>::_copy_on_write(CowData<float> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 4;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */void CowData<Vector3>::_copy_on_write(CowData<Vector3> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   size_t __n;
   ulong uVar5;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 0xc;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<Vector4>::_copy_on_write() [clone .isra.0] */void CowData<Vector4>::_copy_on_write(CowData<Vector4> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 0x10;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */void CowData<Vector2>::_copy_on_write(CowData<Vector2> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 8;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
      if (*(long*)this != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)this + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
 else {
         *(undefined8*)this = 0;
      }

   }

   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) {
            return;
         }

         LOCK();
         lVar3 = *plVar1;
         bVar4 = lVar2 == lVar3;
         if (bVar4) {
            *plVar1 = lVar2 + 1;
            lVar3 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */void CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   ulong uVar3;
   long lVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar4 = *(long*)this;
   if (lVar4 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      LAB_001010c6:lVar7 = 0;
      lVar4 = 0;
   }
 else {
      lVar7 = *(long*)( lVar4 + -8 );
      if (param_1 == lVar7) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      if (lVar7 == 0) goto LAB_001010c6;
      uVar3 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar4 = ( uVar3 | uVar3 >> 0x20 ) + 1;
   }

   uVar3 = param_1 - 1U | param_1 - 1U >> 1;
   uVar3 = uVar3 | uVar3 >> 2;
   uVar3 = uVar3 | uVar3 >> 4;
   uVar3 = uVar3 | uVar3 >> 8;
   uVar3 = uVar3 | uVar3 >> 0x10;
   uVar3 = uVar3 | uVar3 >> 0x20;
   if (param_1 <= lVar7) {
      puVar5 = *(undefined8**)this;
      if (uVar3 + 1 == lVar4) {
         if (puVar5 == (undefined8*)0x0) {
            _DAT_00000000 = 0;
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

      }
 else {
         puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar3 + 0x11, false);
         if (puVar6 == (undefined8*)0x0) {
            LAB_00101120:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
            return;
         }

         puVar5 = puVar6 + 2;
         *puVar6 = 1;
         *(undefined8**)this = puVar5;
      }

      puVar5[-1] = param_1;
      return;
   }

   if (uVar3 + 1 == lVar4) {
      puVar5 = *(undefined8**)this;
      if (puVar5 == (undefined8*)0x0) {
         FUN_0010c9a0();
         return;
      }

   }
 else {
      if (lVar7 == 0) {
         puVar5 = (undefined8*)Memory::alloc_static(uVar3 + 0x11, false);
         if (puVar5 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return;
         }

         *puVar5 = 1;
         puVar5[1] = 0;
      }
 else {
         puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar3 + 0x11, false);
         if (puVar5 == (undefined8*)0x0) goto LAB_00101120;
         *puVar5 = 1;
      }

      puVar5 = puVar5 + 2;
      *(undefined8**)this = puVar5;
   }

   puVar5[-1] = param_1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<int>::resize<false>(long) [clone .isra.0] */void CowData<int>::resize<false>(CowData<int> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 uVar8;
   CowData<int> *pCVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   pCVar9 = this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar10 = 0;
      lVar3 = 0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      lVar3 = lVar10 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 != 0) {
      uVar4 = param_1 * 4 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (param_1 <= lVar10) {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_001013f0:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return;
               }

               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
            return;
         }

         if (uVar4 + 1 == lVar3) {
            puVar5 = *(undefined8**)this;
            if (puVar5 == (undefined8*)0x0) {
               resize<false>((long)pCVar9);
               return;
            }

         }
 else {
            if (lVar10 == 0) {
               puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) {
                  uVar8 = 0x171;
                  pcVar7 = "Parameter \"mem_new\" is null.";
                  goto LAB_001013d2;
               }

               *puVar5 = 1;
               puVar5[1] = 0;
            }
 else {
               puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) goto LAB_001013f0;
               *puVar5 = 1;
            }

            puVar5 = puVar5 + 2;
            *(undefined8**)this = puVar5;
         }

         puVar5[-1] = param_1;
         return;
      }

   }

   uVar8 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_001013d2:_err_print_error("resize", "./core/templates/cowdata.h", uVar8, pcVar7, 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<long>::resize<false>(long) [clone .isra.0] */void CowData<long>::resize<false>(CowData<long> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 uVar8;
   CowData<long> *pCVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   pCVar9 = this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar10 = 0;
      lVar3 = 0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      lVar3 = lVar10 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 != 0) {
      uVar4 = param_1 * 8 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (param_1 <= lVar10) {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_001016a0:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return;
               }

               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
            return;
         }

         if (uVar4 + 1 == lVar3) {
            puVar5 = *(undefined8**)this;
            if (puVar5 == (undefined8*)0x0) {
               resize<false>((long)pCVar9);
               return;
            }

         }
 else {
            if (lVar10 == 0) {
               puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) {
                  uVar8 = 0x171;
                  pcVar7 = "Parameter \"mem_new\" is null.";
                  goto LAB_00101682;
               }

               *puVar5 = 1;
               puVar5[1] = 0;
            }
 else {
               puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) goto LAB_001016a0;
               *puVar5 = 1;
            }

            puVar5 = puVar5 + 2;
            *(undefined8**)this = puVar5;
         }

         puVar5[-1] = param_1;
         return;
      }

   }

   uVar8 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00101682:_err_print_error("resize", "./core/templates/cowdata.h", uVar8, pcVar7, 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<float>::resize<false>(long) [clone .isra.0] */void CowData<float>::resize<false>(CowData<float> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 uVar8;
   CowData<float> *pCVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   pCVar9 = this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar10 = 0;
      lVar3 = 0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      lVar3 = lVar10 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 != 0) {
      uVar4 = param_1 * 4 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (param_1 <= lVar10) {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00101950:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return;
               }

               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
            return;
         }

         if (uVar4 + 1 == lVar3) {
            puVar5 = *(undefined8**)this;
            if (puVar5 == (undefined8*)0x0) {
               resize<false>((long)pCVar9);
               return;
            }

         }
 else {
            if (lVar10 == 0) {
               puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) {
                  uVar8 = 0x171;
                  pcVar7 = "Parameter \"mem_new\" is null.";
                  goto LAB_00101932;
               }

               *puVar5 = 1;
               puVar5[1] = 0;
            }
 else {
               puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) goto LAB_00101950;
               *puVar5 = 1;
            }

            puVar5 = puVar5 + 2;
            *(undefined8**)this = puVar5;
         }

         puVar5[-1] = param_1;
         return;
      }

   }

   uVar8 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00101932:_err_print_error("resize", "./core/templates/cowdata.h", uVar8, pcVar7, 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<double>::resize<false>(long) [clone .isra.0] */void CowData<double>::resize<false>(CowData<double> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 uVar8;
   CowData<double> *pCVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   pCVar9 = this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar10 = 0;
      lVar3 = 0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      lVar3 = lVar10 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 != 0) {
      uVar4 = param_1 * 8 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (param_1 <= lVar10) {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00101c00:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return;
               }

               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
            return;
         }

         if (uVar4 + 1 == lVar3) {
            puVar5 = *(undefined8**)this;
            if (puVar5 == (undefined8*)0x0) {
               resize<false>((long)pCVar9);
               return;
            }

         }
 else {
            if (lVar10 == 0) {
               puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) {
                  uVar8 = 0x171;
                  pcVar7 = "Parameter \"mem_new\" is null.";
                  goto LAB_00101be2;
               }

               *puVar5 = 1;
               puVar5[1] = 0;
            }
 else {
               puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) goto LAB_00101c00;
               *puVar5 = 1;
            }

            puVar5 = puVar5 + 2;
            *(undefined8**)this = puVar5;
         }

         puVar5[-1] = param_1;
         return;
      }

   }

   uVar8 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00101be2:_err_print_error("resize", "./core/templates/cowdata.h", uVar8, pcVar7, 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Vector3>::resize<false>(long) [clone .isra.0] */void CowData<Vector3>::resize<false>(CowData<Vector3> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   undefined8 *puVar3;
   char *pcVar4;
   long lVar5;
   ulong uVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   char *pcVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar5 = *(long*)this;
   if (lVar5 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar10 = 0;
      lVar5 = 0;
   }
 else {
      lVar10 = *(long*)( lVar5 + -8 );
      if (param_1 == lVar10) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar5 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar5 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      lVar5 = lVar10 * 0xc;
      if (lVar5 != 0) {
         uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
         uVar6 = uVar6 | uVar6 >> 2;
         uVar6 = uVar6 | uVar6 >> 4;
         uVar6 = uVar6 | uVar6 >> 8;
         uVar6 = uVar6 | uVar6 >> 0x10;
         lVar5 = ( uVar6 | uVar6 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0xc != 0) {
      uVar6 = param_1 * 0xc - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = uVar6 | uVar6 >> 0x20;
      if (uVar6 != 0xffffffffffffffff) {
         if (param_1 <= lVar10) {
            puVar8 = *(undefined8**)this;
            if (uVar6 + 1 == lVar5) {
               if (puVar8 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               LAB_00101db2:puVar8[-1] = param_1;
               return;
            }

            puVar3 = (undefined8*)Memory::realloc_static(puVar8 + -2, uVar6 + 0x11, false);
            if (puVar3 != (undefined8*)0x0) {
               puVar8 = puVar3 + 2;
               *puVar3 = 1;
               *(undefined8**)this = puVar8;
               goto LAB_00101db2;
            }

            LAB_00101f10:pcVar4 = "Parameter \"mem_new\" is null.";
            uVar7 = 0x1a9;
            pcVar9 = "_realloc";
            goto LAB_00101ef8;
         }

         if (uVar6 + 1 == lVar5) {
            puVar8 = *(undefined8**)this;
            if (puVar8 == (undefined8*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar5 = puVar8[-1];
            LAB_00101e21:if (param_1 <= lVar5) goto LAB_00101d87;
         }
 else {
            if (lVar10 != 0) {
               puVar3 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar6 + 0x11, false);
               if (puVar3 == (undefined8*)0x0) goto LAB_00101f10;
               puVar8 = puVar3 + 2;
               *puVar3 = 1;
               *(undefined8**)this = puVar8;
               lVar5 = puVar3[1];
               goto LAB_00101e21;
            }

            puVar3 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
            if (puVar3 == (undefined8*)0x0) {
               pcVar4 = "Parameter \"mem_new\" is null.";
               uVar7 = 0x171;
               pcVar9 = "resize";
               goto LAB_00101ef8;
            }

            puVar8 = puVar3 + 2;
            *puVar3 = 1;
            puVar3[1] = 0;
            *(undefined8**)this = puVar8;
            lVar5 = 0;
         }

         memset((void*)( (long)puVar8 + lVar5 * 0xc ), 0, ( param_1 - lVar5 ) * 0xc);
         LAB_00101d87:puVar8[-1] = param_1;
         return;
      }

   }

   pcVar4 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   uVar7 = 0x16a;
   pcVar9 = "resize";
   LAB_00101ef8:_err_print_error(pcVar9, "./core/templates/cowdata.h", uVar7, pcVar4, 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] */void CowData<Vector2>::resize<false>(CowData<Vector2> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   char *pcVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   char *pcVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar10 = 0;
      lVar3 = 0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      lVar3 = lVar10 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 != 0) {
      uVar4 = param_1 * 8 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (param_1 <= lVar10) {
            puVar8 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar8 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               LAB_001020c2:puVar8[-1] = param_1;
               return;
            }

            puVar5 = (undefined8*)Memory::realloc_static(puVar8 + -2, uVar4 + 0x11, false);
            if (puVar5 != (undefined8*)0x0) {
               puVar8 = puVar5 + 2;
               *puVar5 = 1;
               *(undefined8**)this = puVar8;
               goto LAB_001020c2;
            }

            LAB_00102220:pcVar6 = "Parameter \"mem_new\" is null.";
            uVar7 = 0x1a9;
            pcVar9 = "_realloc";
            goto LAB_00102208;
         }

         if (uVar4 + 1 == lVar3) {
            puVar8 = *(undefined8**)this;
            if (puVar8 == (undefined8*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar3 = puVar8[-1];
            LAB_00102131:if (param_1 <= lVar3) goto LAB_0010209d;
         }
 else {
            if (lVar10 != 0) {
               puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) goto LAB_00102220;
               puVar8 = puVar5 + 2;
               *puVar5 = 1;
               *(undefined8**)this = puVar8;
               lVar3 = puVar5[1];
               goto LAB_00102131;
            }

            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               pcVar6 = "Parameter \"mem_new\" is null.";
               uVar7 = 0x171;
               pcVar9 = "resize";
               goto LAB_00102208;
            }

            puVar8 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar8;
            lVar3 = 0;
         }

         memset(puVar8 + lVar3, 0, ( param_1 - lVar3 ) * 8);
         LAB_0010209d:puVar8[-1] = param_1;
         return;
      }

   }

   pcVar6 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   uVar7 = 0x16a;
   pcVar9 = "resize";
   LAB_00102208:_err_print_error(pcVar9, "./core/templates/cowdata.h", uVar7, pcVar6, 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Vector4>::resize<false>(long) [clone .isra.0] */void CowData<Vector4>::resize<false>(CowData<Vector4> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined1(*pauVar6)[16];
   undefined1(*pauVar7)[16];
   undefined1(*pauVar8)[16];
   undefined8 *puVar9;
   char *pcVar10;
   undefined8 uVar11;
   long lVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar12 = 0;
      lVar3 = 0;
   }
 else {
      lVar12 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar12) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      lVar3 = lVar12 * 0x10;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x10 != 0) {
      uVar4 = param_1 * 0x10 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (param_1 <= lVar12) {
            puVar9 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar9 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar5 = (undefined8*)Memory::realloc_static(puVar9 + -2, uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) {
                  LAB_00102538:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return;
               }

               puVar9 = puVar5 + 2;
               *puVar5 = 1;
               *(undefined8**)this = puVar9;
            }

            puVar9[-1] = param_1;
            return;
         }

         if (uVar4 + 1 == lVar3) {
            puVar9 = *(undefined8**)this;
            if (puVar9 == (undefined8*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar3 = puVar9[-1];
            LAB_00102461:if (param_1 <= lVar3) goto LAB_001023d8;
         }
 else {
            if (lVar12 != 0) {
               puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) goto LAB_00102538;
               puVar9 = puVar5 + 2;
               *puVar5 = 1;
               *(undefined8**)this = puVar9;
               lVar3 = puVar5[1];
               goto LAB_00102461;
            }

            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               uVar11 = 0x171;
               pcVar10 = "Parameter \"mem_new\" is null.";
               goto LAB_0010251a;
            }

            puVar9 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar9;
            lVar3 = 0;
         }

         pauVar6 = (undefined1(*) [16])( puVar9 + lVar3 * 2 );
         pauVar7 = pauVar6;
         if (( ( param_1 - lVar3 ) * 0x10 & 0x10U ) != 0) {
            *pauVar6 = (undefined1[16])0x0;
            pauVar7 = pauVar6 + 1;
            if (pauVar6 + ( param_1 - lVar3 ) == pauVar7) goto LAB_001023d8;
         }

         do {
            *pauVar7 = (undefined1[16])0x0;
            pauVar8 = pauVar7 + 2;
            pauVar7[1] = (undefined1[16])0x0;
            pauVar7 = pauVar8;
         }
 while ( pauVar6 + ( param_1 - lVar3 ) != pauVar8 );
         LAB_001023d8:puVar9[-1] = param_1;
         return;
      }

   }

   uVar11 = 0x16a;
   pcVar10 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_0010251a:_err_print_error("resize", "./core/templates/cowdata.h", uVar11, pcVar10, 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Color>::resize<false>(long) [clone .isra.0] */void CowData<Color>::resize<false>(CowData<Color> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   undefined8 uVar3;
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   char *pcVar10;
   undefined8 uVar11;
   long lVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar4 = *(long*)this;
   if (lVar4 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar12 = 0;
      lVar4 = 0;
   }
 else {
      lVar12 = *(long*)( lVar4 + -8 );
      if (param_1 == lVar12) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      lVar4 = lVar12 * 0x10;
      if (lVar4 != 0) {
         uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         lVar4 = ( uVar5 | uVar5 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x10 != 0) {
      uVar5 = param_1 * 0x10 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = uVar5 | uVar5 >> 0x20;
      if (uVar5 != 0xffffffffffffffff) {
         if (param_1 <= lVar12) {
            puVar9 = *(undefined8**)this;
            if (uVar5 + 1 == lVar4) {
               if (puVar9 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar9 + -2, uVar5 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00102848:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return;
               }

               puVar9 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar9;
            }

            puVar9[-1] = param_1;
            return;
         }

         if (uVar5 + 1 == lVar4) {
            puVar9 = *(undefined8**)this;
            if (puVar9 == (undefined8*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar4 = puVar9[-1];
            LAB_00102771:if (param_1 <= lVar4) goto LAB_001026e8;
         }
 else {
            if (lVar12 != 0) {
               puVar6 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar5 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) goto LAB_00102848;
               puVar9 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar9;
               lVar4 = puVar6[1];
               goto LAB_00102771;
            }

            puVar6 = (undefined8*)Memory::alloc_static(uVar5 + 0x11, false);
            if (puVar6 == (undefined8*)0x0) {
               uVar11 = 0x171;
               pcVar10 = "Parameter \"mem_new\" is null.";
               goto LAB_0010282a;
            }

            puVar9 = puVar6 + 2;
            *puVar6 = 1;
            puVar6[1] = 0;
            *(undefined8**)this = puVar9;
            lVar4 = 0;
         }

         uVar3 = _UNK_00112b08;
         uVar11 = __LC34;
         puVar7 = puVar9 + lVar4 * 2;
         puVar6 = puVar7;
         if (( ( param_1 - lVar4 ) * 0x10 & 0x10U ) != 0) {
            *puVar7 = __LC34;
            puVar7[1] = uVar3;
            puVar6 = puVar7 + 2;
            if (puVar7 + ( param_1 - lVar4 ) * 2 == puVar7 + 2) goto LAB_001026e8;
         }

         do {
            *puVar6 = uVar11;
            puVar6[1] = uVar3;
            puVar8 = puVar6 + 4;
            puVar6[2] = uVar11;
            puVar6[3] = uVar3;
            puVar6 = puVar8;
         }
 while ( puVar7 + ( param_1 - lVar4 ) * 2 != puVar8 );
         LAB_001026e8:puVar9[-1] = param_1;
         return;
      }

   }

   uVar11 = 0x16a;
   pcVar10 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_0010282a:_err_print_error("resize", "./core/templates/cowdata.h", uVar11, pcVar10, 0, 0);
   return;
}
/* vector3_to_float32_array(Vector3 const*, unsigned long) */Vector3 *vector3_to_float32_array(Vector3 *param_1, ulong param_2) {
   undefined4 uVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   long in_RDX;
   undefined8 *puVar4;
   undefined8 *puVar5;
   *(undefined8*)( param_1 + 8 ) = 0;
   if (in_RDX == 0) {
      return param_1;
   }

   CowData<float>::resize<false>((CowData<float>*)( param_1 + 8 ), in_RDX * 3);
   CowData<float>::_copy_on_write((CowData<float>*)( param_1 + 8 ));
   puVar2 = *(undefined8**)( param_1 + 8 );
   puVar4 = puVar2;
   do {
      uVar3 = *(undefined8*)param_2;
      uVar1 = *(undefined4*)( param_2 + 8 );
      puVar5 = (undefined8*)( (long)puVar4 + 0xc );
      param_2 = param_2 + 0xc;
      *puVar4 = uVar3;
      *(undefined4*)( puVar4 + 1 ) = uVar1;
      puVar4 = puVar5;
   }
 while ( puVar5 != (undefined8*)( (long)puVar2 + in_RDX * 0xc ) );
   return param_1;
}
/* encode_variant(Variant const&, unsigned char*, int&, bool, int) */int encode_variant(Variant *param_1, uchar *param_2, int *param_3, bool param_4, int param_5) {
   long *plVar1;
   String *pSVar2;
   code *pcVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined4 *puVar11;
   char cVar12;
   undefined1 uVar13;
   int iVar14;
   int iVar15;
   int iVar16;
   int iVar17;
   int iVar18;
   int iVar19;
   long lVar20;
   Variant *pVVar21;
   ulong *puVar22;
   ulong *puVar23;
   ulong *puVar24;
   ulong *puVar25;
   ulong uVar26;
   long lVar27;
   undefined4 *puVar28;
   void *pvVar29;
   Object *pOVar30;
   long lVar31;
   Object *pOVar32;
   undefined4 *puVar33;
   uint uVar34;
   uint uVar35;
   uint *puVar36;
   ulong *puVar37;
   ulong uVar38;
   size_t sVar39;
   Variant *pVVar40;
   ulong *puVar41;
   uint uVar42;
   long in_FS_OFFSET;
   bool bVar43;
   float fVar44;
   double dVar45;
   undefined1 auVar46[16];
   undefined1 auVar47[16];
   undefined1 auVar48[12];
   ulong *local_f8;
   Variant local_f0[8];
   Variant *local_e8;
   long local_e0;
   Variant *local_d8;
   Variant *local_d0;
   Variant *local_c8;
   ulong *local_c0;
   Object *local_b8;
   undefined8 local_a8;
   undefined1 local_a0[16];
   undefined1 local_88[16];
   uint local_78;
   uint uStack_74;
   ulong uStack_70;
   undefined4 local_68;
   uint local_64;
   uint local_60;
   uint local_5c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0x400 < param_5) {
      iVar14 = 6;
      _err_print_error("encode_variant", "core/io/marshalls.cpp", 0x552, "Condition \"p_depth > Variant::MAX_RECURSION_DEPTH\" is true. Returning: ERR_OUT_OF_MEMORY", "Potential infinite recursion detected. Bailing.", 0, 0);
      auVar47._8_8_ = local_88._8_8_;
      auVar47._0_8_ = local_88._0_8_;
      goto LAB_00103838;
   }

   uVar34 = *(uint*)param_1;
   *param_3 = 0;
   local_f8 = (ulong*)param_2;
   switch (uVar34) {
      case 2:
    lVar20 = Variant::operator_cast_to_long(param_1);
    if (0xffffffff < lVar20 + 0x80000000U) {
      uVar34 = 0x10002;
    }
    break;
      case 3:
    dVar45 = Variant::operator_cast_to_double(param_1);
    if ((double)(float)dVar45 != dVar45) {
      uVar34 = 0x10003;
    }
    break;
      case 0x18:
    lVar20 = Variant::get_validated_object();
    if (lVar20 != 0) {
      if (!param_4) {
        uVar34 = 0x10018;
      }
      break;
    }
    if (param_2 != (uchar *)0x0) {
      param_2[0] = '\0';
      param_2[1] = '\0';
      param_2[2] = '\0';
      param_2[3] = '\0';
    }
    goto LAB_001053e8;
      case 0x1b:
    Variant::operator_cast_to_Dictionary((Variant *)&local_d8);
    Dictionary::get_key_type();
    if ((int)local_c8 == 0) {
      if (local_b8 != (Object *)0x0) goto LAB_00103617;
    }
    else if (local_b8 == (Object *)0x0) {
      uVar34 = (-(uint)(local_c0 == (ulong *)0x0) & 0xffff0000) + 0x2001b;
    }
    else {
      uVar34 = (param_4 + 2) * 0x10000 | 0x1b;
LAB_00103617:
      cVar12 = RefCounted::unreference();
      pOVar30 = local_b8;
      if ((cVar12 != '\0') && (cVar12 = predelete_handler(local_b8), cVar12 != '\0')) {
        (**(code **)(*(long *)pOVar30 + 0x140))();
        Memory::free_static(pOVar30,false);
      }
    }
    if ((StringName::configured != '\0') && (local_c0 != (ulong *)0x0)) {
      StringName::unref();
    }
    Dictionary::get_value_type();
    if ((int)local_c8 == 0) {
      if (local_b8 != (Object *)0x0) goto LAB_00103676;
    }
    else if (local_b8 == (Object *)0x0) {
      if (local_c0 == (ulong *)0x0) {
        uVar34 = uVar34 | 0x40000;
      }
      else {
        uVar34 = uVar34 | 0x80000;
      }
    }
    else {
      uVar34 = uVar34 | (param_4 + 2) * 0x40000;
LAB_00103676:
      cVar12 = RefCounted::unreference();
      pOVar30 = local_b8;
      if ((cVar12 != '\0') && (cVar12 = predelete_handler(local_b8), cVar12 != '\0')) {
        (**(code **)(*(long *)pOVar30 + 0x140))();
        Memory::free_static(pOVar30,false);
      }
    }
    if ((StringName::configured != '\0') && (local_c0 != (ulong *)0x0)) {
      StringName::unref();
    }
    Dictionary::~Dictionary((Dictionary *)&local_d8);
    break;
      case 0x1c:
    Variant::operator_cast_to_Array((Variant *)&local_d8);
    Array::get_element_type();
    if ((int)local_c8 == 0) {
      if (local_b8 != (Object *)0x0) goto LAB_00103752;
    }
    else if (local_b8 == (Object *)0x0) {
      uVar34 = (-(uint)(local_c0 == (ulong *)0x0) & 0xffff0000) + 0x2001c;
    }
    else {
      uVar34 = (param_4 + 2) * 0x10000 | 0x1c;
LAB_00103752:
      cVar12 = RefCounted::unreference();
      pOVar30 = local_b8;
      if ((cVar12 != '\0') && (cVar12 = predelete_handler(local_b8), cVar12 != '\0')) {
        (**(code **)(*(long *)pOVar30 + 0x140))();
        Memory::free_static(pOVar30,false);
      }
    }
    if ((StringName::configured != '\0') && (local_c0 != (ulong *)0x0)) {
      StringName::unref();
    }
    Array::~Array((Array *)&local_d8);
   }

   auVar47._8_8_ = local_88._8_8_;
   auVar47._0_8_ = local_88._0_8_;
   auVar8._8_8_ = local_88._8_8_;
   auVar8._0_8_ = local_88._0_8_;
   auVar7._8_8_ = local_88._8_8_;
   auVar7._0_8_ = local_88._0_8_;
   auVar6._8_8_ = local_88._8_8_;
   auVar6._0_8_ = local_88._0_8_;
   auVar5._8_8_ = local_88._8_8_;
   auVar5._0_8_ = local_88._0_8_;
   auVar4._8_8_ = local_88._8_8_;
   auVar4._0_8_ = local_88._0_8_;
   auVar46._8_8_ = local_88._8_8_;
   auVar46._0_8_ = local_88._0_8_;
   if (param_2 != (uchar*)0x0) {
      puVar23 = (ulong*)( param_2 + 4 );
      uVar38 = (ulong)uVar34;
      do {
         *param_2 = (char)uVar38;
         param_2 = (uchar*)( (long)param_2 + 1 );
         uVar38 = uVar38 >> 8;
         local_f8 = (ulong*)param_2;
      }
 while ( (ulong*)param_2 != puVar23 );
   }

   puVar23 = local_f8;
   iVar14 = *param_3 + 4;
   *param_3 = iVar14;
   switch (*(undefined4*)param_1) {
      case 0:
      case 0x19:
    break;
      case 1:
    if (local_f8 != (ulong *)0x0) {
      bVar43 = Variant::operator_cast_to_bool(param_1);
      *(undefined1 *)((long)puVar23 + 3) = 0;
      *(bool *)puVar23 = bVar43;
      *(undefined2 *)((long)puVar23 + 1) = 0;
LAB_00105131:
      iVar14 = *param_3;
    }
    goto LAB_00105135;
      case 2:
    if ((uVar34 & 0x10000) != 0) {
      if (local_f8 != (ulong *)0x0) {
        uVar38 = Variant::operator_cast_to_unsigned_long(param_1);
        puVar25 = puVar23 + 1;
        do {
          *(char *)puVar23 = (char)uVar38;
          puVar23 = (ulong *)((long)puVar23 + 1);
          uVar38 = uVar38 >> 8;
        } while (puVar23 != puVar25);
        goto LAB_00103e10;
      }
      goto LAB_00103e14;
    }
    if (local_f8 != (ulong *)0x0) {
      uVar34 = Variant::operator_cast_to_unsigned_int(param_1);
      puVar25 = (ulong *)((long)puVar23 + 4);
      do {
        *(char *)puVar23 = (char)uVar34;
        puVar23 = (ulong *)((long)puVar23 + 1);
        uVar34 = uVar34 >> 8;
      } while (puVar23 != puVar25);
      goto LAB_00105131;
    }
    goto LAB_00105135;
      case 3:
    if ((uVar34 & 0x10000) != 0) {
      if (local_f8 != (ulong *)0x0) {
        dVar45 = Variant::operator_cast_to_double(param_1);
        puVar25 = puVar23 + 1;
        do {
          *(char *)puVar23 = SUB81(dVar45,0);
          puVar23 = (ulong *)((long)puVar23 + 1);
          dVar45 = (double)((ulong)dVar45 >> 8);
        } while (puVar23 != puVar25);
        goto LAB_00103e10;
      }
      goto LAB_00103e14;
    }
    if (local_f8 != (ulong *)0x0) {
      fVar44 = Variant::operator_cast_to_float(param_1);
      puVar25 = (ulong *)((long)puVar23 + 4);
      do {
        *(char *)puVar23 = SUB41(fVar44,0);
        puVar23 = (ulong *)((long)puVar23 + 1);
        fVar44 = (float)((uint)fVar44 >> 8);
      } while (puVar23 != puVar25);
      goto LAB_00105131;
    }
LAB_00105135:
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    *param_3 = iVar14 + 4;
    break;
      case 4:
      case 0x15:
    Variant::operator_cast_to_String((Variant *)&local_c8);
    _encode_string((String *)&local_c8,(uchar **)&local_f8,param_3);
    pVVar40 = local_c8;
    auVar10._8_8_ = local_88._8_8_;
    auVar10._0_8_ = local_88._0_8_;
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    if (local_c8 != (Variant *)0x0) {
      LOCK();
      pVVar21 = local_c8 + -0x10;
      *(long *)pVVar21 = *(long *)pVVar21 + -1;
      UNLOCK();
      auVar47 = auVar10;
      if (*(long *)pVVar21 == 0) {
        local_c8 = (Variant *)0x0;
        Memory::free_static(pVVar40 + -0x10,false);
        auVar47._8_8_ = local_88._8_8_;
        auVar47._0_8_ = local_88._0_8_;
      }
    }
    break;
      case 5:
    if (local_f8 != (ulong *)0x0) {
      uVar26 = Variant::operator_cast_to_Vector2(param_1);
      puVar25 = (ulong *)((long)puVar23 + 4);
      uVar38 = uVar26 & 0xffffffff;
      puVar41 = puVar23;
      do {
        *(char *)puVar41 = (char)uVar38;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar41 != puVar25);
      uVar26 = uVar26 >> 0x20;
      do {
        *(char *)puVar25 = (char)uVar26;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar26 = uVar26 >> 8;
      } while (puVar25 != puVar23 + 1);
LAB_00103e10:
      iVar14 = *param_3;
    }
    goto LAB_00103e14;
      case 6:
    if (local_f8 != (ulong *)0x0) {
      uVar26 = Variant::operator_cast_to_Vector2i(param_1);
      puVar25 = (ulong *)((long)puVar23 + 4);
      uVar38 = uVar26 & 0xffffffff;
      puVar41 = puVar23;
      do {
        *(char *)puVar41 = (char)uVar38;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar41 != puVar25);
      uVar26 = uVar26 >> 0x20;
      do {
        *(char *)puVar25 = (char)uVar26;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar26 = uVar26 >> 8;
      } while (puVar25 != puVar23 + 1);
      goto LAB_00103e10;
    }
LAB_00103e14:
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    *param_3 = iVar14 + 8;
    break;
      case 7:
    if (local_f8 != (ulong *)0x0) {
      auVar46 = Variant::operator_cast_to_Rect2(param_1);
      auVar47._8_8_ = local_88._8_8_;
      auVar47._0_8_ = local_88._0_8_;
      puVar25 = (ulong *)((long)puVar23 + 4);
      uVar38 = auVar46._0_8_ & 0xffffffff;
      puVar41 = puVar23;
      do {
        *(char *)puVar41 = (char)uVar38;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar41 != puVar25);
      uVar38 = auVar46._0_8_ >> 0x20;
      puVar41 = puVar23 + 1;
      do {
        *(char *)puVar25 = (char)uVar38;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar25 != puVar41);
      uVar38 = auVar46._8_8_ & 0xffffffff;
      puVar25 = (ulong *)((long)puVar23 + 0xc);
      do {
        *(char *)puVar41 = (char)uVar38;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar41 != puVar25);
      uVar38 = auVar46._8_8_ >> 0x20;
      do {
        *(char *)puVar25 = (char)uVar38;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar25 != puVar23 + 2);
LAB_001040b0:
      iVar14 = *param_3;
    }
    goto LAB_001040b4;
      case 8:
    auVar47 = auVar8;
    if (local_f8 != (ulong *)0x0) {
      auVar46 = Variant::operator_cast_to_Rect2i(param_1);
      auVar47._8_8_ = local_88._8_8_;
      auVar47._0_8_ = local_88._0_8_;
      puVar25 = (ulong *)((long)puVar23 + 4);
      uVar38 = auVar46._0_8_ & 0xffffffff;
      puVar41 = puVar23;
      do {
        *(char *)puVar41 = (char)uVar38;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar41 != puVar25);
      uVar38 = auVar46._0_8_ >> 0x20;
      puVar41 = puVar23 + 1;
      do {
        *(char *)puVar25 = (char)uVar38;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar25 != puVar41);
      uVar38 = auVar46._8_8_ & 0xffffffff;
      puVar25 = (ulong *)((long)puVar23 + 0xc);
      do {
        *(char *)puVar41 = (char)uVar38;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar41 != puVar25);
      uVar38 = auVar46._8_8_ >> 0x20;
      do {
        *(char *)puVar25 = (char)uVar38;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar25 != puVar23 + 2);
      goto LAB_001040b0;
    }
    goto LAB_001040b4;
      case 9:
    if (local_f8 != (ulong *)0x0) {
      auVar48 = Variant::operator_cast_to_Vector3(param_1);
      uVar34 = auVar48._8_4_;
      puVar25 = (ulong *)((long)puVar23 + 4);
      local_88._8_4_ = uVar34;
      uVar38 = auVar48._0_8_;
      puVar41 = puVar23;
      do {
        *(char *)puVar41 = (char)uVar38;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar38 = uVar38 >> 8 & 0xffffff;
      } while (puVar41 != puVar25);
      local_88._4_4_ = auVar48._4_4_;
      puVar41 = puVar23 + 1;
      do {
        *(char *)puVar25 = (char)local_88._4_4_;
        puVar25 = (ulong *)((long)puVar25 + 1);
        local_88._4_4_ = (uint)local_88._4_4_ >> 8;
      } while (puVar25 != puVar41);
      do {
        *(char *)puVar41 = (char)uVar34;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar34 = uVar34 >> 8;
        local_88._0_8_ = auVar48._0_8_;
      } while (puVar41 != (ulong *)((long)puVar23 + 0xc));
LAB_001045db:
      iVar14 = *param_3;
    }
    goto LAB_001045df;
      case 10:
    if (local_f8 != (ulong *)0x0) {
      auVar48 = Variant::operator_cast_to_Vector3i(param_1);
      uVar34 = auVar48._8_4_;
      local_88._8_4_ = uVar34;
      puVar25 = (ulong *)((long)puVar23 + 4);
      uVar38 = auVar48._0_8_;
      puVar41 = puVar23;
      do {
        *(char *)puVar41 = (char)uVar38;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar38 = uVar38 >> 8 & 0xffffff;
      } while (puVar41 != puVar25);
      local_88._4_4_ = auVar48._4_4_;
      puVar41 = puVar23 + 1;
      do {
        *(char *)puVar25 = (char)local_88._4_4_;
        puVar25 = (ulong *)((long)puVar25 + 1);
        local_88._4_4_ = (uint)local_88._4_4_ >> 8;
      } while (puVar25 != puVar41);
      do {
        *(char *)puVar41 = (char)uVar34;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar34 = uVar34 >> 8;
        local_88._0_8_ = auVar48._0_8_;
      } while (puVar41 != (ulong *)((long)puVar23 + 0xc));
      goto LAB_001045db;
    }
LAB_001045df:
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    *param_3 = iVar14 + 0xc;
    break;
      case 0xb:
    if (local_f8 != (ulong *)0x0) {
      Variant::operator_cast_to_Transform2D((Variant *)local_88);
      *puVar23 = local_88._0_8_;
      puVar23[1] = local_88._8_8_;
      puVar23[2] = CONCAT44(uStack_74,local_78);
      iVar14 = *param_3;
    }
    goto LAB_0010479b;
      case 0xc:
    auVar47 = auVar7;
    if (local_f8 != (ulong *)0x0) {
      auVar46 = Variant::operator_cast_to_Vector4(param_1);
      auVar47._8_8_ = local_88._8_8_;
      auVar47._0_8_ = local_88._0_8_;
      puVar25 = (ulong *)((long)puVar23 + 4);
      uVar38 = auVar46._0_8_ & 0xffffffff;
      puVar41 = puVar23;
      do {
        *(char *)puVar41 = (char)uVar38;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar41 != puVar25);
      uVar38 = auVar46._0_8_ >> 0x20;
      puVar41 = puVar23 + 1;
      do {
        *(char *)puVar25 = (char)uVar38;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar25 != puVar41);
      uVar38 = auVar46._8_8_ & 0xffffffff;
      puVar25 = (ulong *)((long)puVar23 + 0xc);
      do {
        *(char *)puVar41 = (char)uVar38;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar41 != puVar25);
      uVar38 = auVar46._8_8_ >> 0x20;
      do {
        *(char *)puVar25 = (char)uVar38;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar25 != puVar23 + 2);
      goto LAB_001040b0;
    }
    goto LAB_001040b4;
      case 0xd:
    auVar47 = auVar6;
    if (local_f8 != (ulong *)0x0) {
      auVar46 = Variant::operator_cast_to_Vector4i(param_1);
      auVar47._8_8_ = local_88._8_8_;
      auVar47._0_8_ = local_88._0_8_;
      puVar25 = (ulong *)((long)puVar23 + 4);
      uVar38 = auVar46._0_8_ & 0xffffffff;
      puVar41 = puVar23;
      do {
        *(char *)puVar41 = (char)uVar38;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar25 != puVar41);
      uVar38 = auVar46._0_8_ >> 0x20;
      puVar41 = puVar23 + 1;
      do {
        *(char *)puVar25 = (char)uVar38;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar41 != puVar25);
      uVar38 = auVar46._8_8_ & 0xffffffff;
      puVar25 = (ulong *)((long)puVar23 + 0xc);
      do {
        *(char *)puVar41 = (char)uVar38;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar41 != puVar25);
      uVar38 = auVar46._8_8_ >> 0x20;
      do {
        *(char *)puVar25 = (char)uVar38;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar25 != puVar23 + 2);
      goto LAB_001040b0;
    }
    goto LAB_001040b4;
      case 0xe:
    auVar47 = auVar5;
    if (local_f8 != (ulong *)0x0) {
      auVar47 = Variant::operator_cast_to_Plane(param_1);
      uVar38 = auVar47._0_8_;
      puVar25 = (ulong *)((long)puVar23 + 4);
      puVar41 = puVar23;
      do {
        *(char *)puVar41 = (char)uVar38;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar38 = uVar38 >> 8 & 0xffffff;
      } while (puVar41 != puVar25);
      local_88._4_4_ = auVar47._4_4_;
      puVar41 = puVar23 + 1;
      do {
        *(char *)puVar25 = (char)local_88._4_4_;
        puVar25 = (ulong *)((long)puVar25 + 1);
        local_88._4_4_ = (uint)local_88._4_4_ >> 8;
      } while (puVar25 != puVar41);
      local_88._8_4_ = auVar47._8_4_;
      puVar25 = (ulong *)((long)puVar23 + 0xc);
      do {
        *(char *)puVar41 = (char)local_88._8_4_;
        puVar41 = (ulong *)((long)puVar41 + 1);
        local_88._8_4_ = (uint)local_88._8_4_ >> 8;
      } while (puVar41 != puVar25);
      local_88._12_4_ = auVar47._12_4_;
      do {
        *(char *)puVar25 = (char)local_88._12_4_;
        puVar25 = (ulong *)((long)puVar25 + 1);
        local_88._12_4_ = (uint)local_88._12_4_ >> 8;
      } while (puVar25 != puVar23 + 2);
      goto LAB_001040b0;
    }
    goto LAB_001040b4;
      case 0xf:
    auVar47 = auVar4;
    if (local_f8 != (ulong *)0x0) {
      Variant::operator_cast_to_Quaternion((Variant *)local_88);
      auVar47._8_8_ = local_88._8_8_;
      auVar47._0_8_ = local_88._0_8_;
      puVar25 = (ulong *)((long)puVar23 + 4);
      puVar41 = puVar23;
      uVar34 = local_88._0_4_;
      do {
        *(char *)puVar41 = (char)uVar34;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar34 = uVar34 >> 8;
      } while (puVar25 != puVar41);
      puVar41 = puVar23 + 1;
      do {
        *(char *)puVar25 = (char)local_88._4_4_;
        puVar25 = (ulong *)((long)puVar25 + 1);
        local_88._4_4_ = (uint)local_88._4_4_ >> 8;
      } while (puVar41 != puVar25);
      puVar25 = (ulong *)((long)puVar23 + 0xc);
      uVar34 = local_88._8_4_;
      do {
        *(char *)puVar41 = (char)uVar34;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar34 = uVar34 >> 8;
      } while (puVar41 != puVar25);
      do {
        *(char *)puVar25 = (char)local_88._12_4_;
        puVar25 = (ulong *)((long)puVar25 + 1);
        local_88._12_4_ = (uint)local_88._12_4_ >> 8;
      } while (puVar25 != puVar23 + 2);
      goto LAB_001040b0;
    }
    goto LAB_001040b4;
      case 0x10:
    if (local_f8 != (ulong *)0x0) {
      Variant::operator_cast_to_AABB((Variant *)local_88);
      puVar25 = (ulong *)((long)puVar23 + 4);
      puVar41 = puVar23;
      uVar34 = local_88._0_4_;
      do {
        *(char *)puVar41 = (char)uVar34;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar34 = uVar34 >> 8;
      } while (puVar41 != puVar25);
      puVar41 = puVar23 + 1;
      uVar34 = local_88._4_4_;
      do {
        *(char *)puVar25 = (char)uVar34;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar34 = uVar34 >> 8;
      } while (puVar25 != puVar41);
      puVar25 = (ulong *)((long)puVar23 + 0xc);
      uVar34 = local_88._8_4_;
      do {
        *(char *)puVar41 = (char)uVar34;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar34 = uVar34 >> 8;
      } while (puVar41 != puVar25);
      puVar41 = puVar23 + 2;
      uVar34 = local_88._12_4_;
      do {
        *(char *)puVar25 = (char)uVar34;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar34 = uVar34 >> 8;
      } while (puVar41 != puVar25);
      puVar25 = (ulong *)((long)puVar23 + 0x14);
      do {
        *(char *)puVar41 = (char)local_78;
        puVar41 = (ulong *)((long)puVar41 + 1);
        local_78 = local_78 >> 8;
      } while (puVar41 != puVar25);
      do {
        *(char *)puVar25 = (char)uStack_74;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uStack_74 = uStack_74 >> 8;
      } while (puVar25 != puVar23 + 3);
      iVar14 = *param_3;
    }
LAB_0010479b:
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    *param_3 = iVar14 + 0x18;
    break;
      case 0x11:
    if (local_f8 != (ulong *)0x0) {
      Variant::operator_cast_to_Basis((Variant *)local_88);
      *puVar23 = local_88._0_8_;
      puVar23[1] = local_88._8_8_;
      puVar23[2] = CONCAT44(uStack_74,local_78);
      puVar23[3] = uStack_70;
      *(undefined4 *)(puVar23 + 4) = local_68;
      iVar14 = *param_3;
    }
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    *param_3 = iVar14 + 0x24;
    break;
      case 0x12:
    if (local_f8 != (ulong *)0x0) {
      Variant::operator_cast_to_Transform3D((Variant *)local_88);
      puVar25 = puVar23 + 5;
      *puVar23 = local_88._0_8_;
      puVar23[1] = local_88._8_8_;
      puVar23[2] = CONCAT44(uStack_74,local_78);
      puVar23[3] = uStack_70;
      *(undefined4 *)(puVar23 + 4) = local_68;
      puVar41 = (ulong *)((long)puVar23 + 0x24);
      do {
        *(char *)puVar41 = (char)local_64;
        puVar41 = (ulong *)((long)puVar41 + 1);
        local_64 = local_64 >> 8;
      } while (puVar41 != puVar25);
      puVar41 = (ulong *)((long)puVar23 + 0x2c);
      do {
        *(char *)puVar25 = (char)local_60;
        puVar25 = (ulong *)((long)puVar25 + 1);
        local_60 = local_60 >> 8;
      } while (puVar25 != puVar41);
      do {
        *(char *)puVar41 = (char)local_5c;
        puVar41 = (ulong *)((long)puVar41 + 1);
        local_5c = local_5c >> 8;
      } while (puVar41 != puVar23 + 6);
      iVar14 = *param_3;
    }
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    *param_3 = iVar14 + 0x30;
    break;
      case 0x13:
    if (local_f8 != (ulong *)0x0) {
      Variant::operator_cast_to_Projection((Variant *)local_88);
      lVar20 = 0;
      pVVar40 = (Variant *)local_88;
      do {
        lVar31 = 0;
        do {
          *(undefined4 *)((long)puVar23 + lVar31) = *(undefined4 *)(pVVar40 + lVar31);
          lVar31 = lVar31 + 4;
        } while (lVar31 != 0x10);
        lVar20 = lVar20 + 4;
        pVVar40 = pVVar40 + 0x10;
        puVar23 = puVar23 + 2;
      } while (lVar20 != 0x10);
      Projection::~Projection((Projection *)local_88);
      iVar14 = *param_3;
    }
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    *param_3 = iVar14 + 0x40;
    break;
      case 0x14:
    auVar47 = auVar46;
    if (local_f8 != (ulong *)0x0) {
      auVar46 = Variant::operator_cast_to_Color(param_1);
      auVar47._8_8_ = local_88._8_8_;
      auVar47._0_8_ = local_88._0_8_;
      puVar25 = (ulong *)((long)puVar23 + 4);
      uVar38 = auVar46._0_8_ & 0xffffffff;
      puVar41 = puVar23;
      do {
        *(char *)puVar41 = (char)uVar38;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar25 != puVar41);
      uVar38 = auVar46._0_8_ >> 0x20;
      puVar41 = puVar23 + 1;
      do {
        *(char *)puVar25 = (char)uVar38;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar25 != puVar41);
      uVar38 = auVar46._8_8_ & 0xffffffff;
      puVar25 = (ulong *)((long)puVar23 + 0xc);
      do {
        *(char *)puVar41 = (char)uVar38;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar41 != puVar25);
      uVar38 = auVar46._8_8_ >> 0x20;
      do {
        *(char *)puVar25 = (char)uVar38;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar25 != puVar23 + 2);
      goto LAB_001040b0;
    }
LAB_001040b4:
    *param_3 = iVar14 + 0x10;
    break;
      case 0x16:
    Variant::operator_cast_to_NodePath(local_f0);
    puVar23 = local_f8;
    if (local_f8 != (ulong *)0x0) {
      puVar25 = (ulong *)((long)local_f8 + 4);
      uVar34 = NodePath::get_name_count();
      uVar34 = uVar34 | 0x80000000;
      puVar41 = puVar23;
      do {
        *(char *)puVar41 = (char)uVar34;
        puVar41 = (ulong *)((long)puVar41 + 1);
        uVar34 = uVar34 >> 8;
      } while (puVar41 != puVar25);
      uVar38 = NodePath::get_subname_count();
      do {
        *(char *)puVar25 = (char)uVar38;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar38 = uVar38 >> 8 & 0xffffff;
      } while (puVar25 != puVar23 + 1);
      uVar13 = NodePath::is_absolute();
      *(undefined1 *)((long)puVar23 + 0xb) = 0;
      *(undefined1 *)(puVar23 + 1) = uVar13;
      local_f8 = (ulong *)((long)puVar23 + 0xc);
      *(undefined2 *)((long)puVar23 + 9) = 0;
    }
    *param_3 = *param_3 + 0xc;
    iVar14 = NodePath::get_name_count();
    iVar15 = NodePath::get_subname_count();
    if (0 < iVar14 + iVar15) {
      iVar18 = 0;
      do {
        local_e8 = (Variant *)0x0;
        iVar17 = NodePath::get_name_count();
        if (iVar18 < iVar17) {
          NodePath::get_name((int)&local_e0);
          if (local_e0 == 0) goto LAB_00105209;
          pVVar40 = *(Variant **)(local_e0 + 8);
          local_d8 = (Variant *)0x0;
          if (pVVar40 == (Variant *)0x0) {
            if (*(long *)(local_e0 + 0x10) == 0) goto LAB_00105209;
            plVar1 = (long *)(*(long *)(local_e0 + 0x10) + -0x10);
            do {
              lVar20 = *plVar1;
              if (lVar20 == 0) goto LAB_00104245;
              LOCK();
              lVar31 = *plVar1;
              bVar43 = lVar20 == lVar31;
              if (bVar43) {
                *plVar1 = lVar20 + 1;
                lVar31 = lVar20;
              }
              UNLOCK();
            } while (!bVar43);
            if (lVar31 != -1) {
              local_d8 = *(Variant **)(local_e0 + 0x10);
            }
          }
          else {
            local_c0 = (ulong *)strlen((char *)pVVar40);
            local_c8 = pVVar40;
            String::parse_latin1((StrRange *)&local_d8);
          }
LAB_00104245:
          if (local_e8 != local_d8) goto LAB_00104253;
LAB_001043a3:
          pVVar40 = local_d8;
          if (local_d8 != (Variant *)0x0) {
            LOCK();
            pVVar21 = local_d8 + -0x10;
            *(long *)pVVar21 = *(long *)pVVar21 + -1;
            UNLOCK();
            if (*(long *)pVVar21 == 0) {
              local_d8 = (Variant *)0x0;
              Memory::free_static(pVVar40 + -0x10,false);
            }
          }
        }
        else {
          NodePath::get_name_count();
          NodePath::get_subname((int)&local_e0);
          if (local_e0 == 0) {
LAB_00105209:
            local_d8 = (Variant *)0x0;
            if (local_e8 == (Variant *)0x0) goto LAB_00104266;
LAB_00105217:
            pVVar40 = local_e8;
            LOCK();
            local_e8 = local_e8 + -0x10;
            *(long *)local_e8 = *(long *)local_e8 + -1;
            UNLOCK();
            if (*(long *)local_e8 == 0) {
              local_e8 = (Variant *)0x0;
              Memory::free_static(pVVar40 + -0x10,false);
            }
          }
          else {
            pVVar40 = *(Variant **)(local_e0 + 8);
            local_d8 = (Variant *)0x0;
            if (pVVar40 == (Variant *)0x0) {
              if (*(long *)(local_e0 + 0x10) == 0) goto LAB_00105209;
              plVar1 = (long *)(*(long *)(local_e0 + 0x10) + -0x10);
              do {
                lVar20 = *plVar1;
                if (lVar20 == 0) goto LAB_00104395;
                LOCK();
                lVar31 = *plVar1;
                bVar43 = lVar20 == lVar31;
                if (bVar43) {
                  *plVar1 = lVar20 + 1;
                  lVar31 = lVar20;
                }
                UNLOCK();
              } while (!bVar43);
              if (lVar31 != -1) {
                local_d8 = *(Variant **)(local_e0 + 0x10);
              }
            }
            else {
              local_c0 = (ulong *)strlen((char *)pVVar40);
              local_c8 = pVVar40;
              String::parse_latin1((StrRange *)&local_d8);
            }
LAB_00104395:
            if (local_d8 == local_e8) goto LAB_001043a3;
LAB_00104253:
            if (local_e8 != (Variant *)0x0) goto LAB_00105217;
          }
          local_e8 = local_d8;
        }
LAB_00104266:
        if ((StringName::configured != '\0') && (local_e0 != 0)) {
          StringName::unref();
        }
        String::utf8();
        if (local_c8 == (Variant *)0x0) {
          iVar17 = 0;
          if (local_f8 != (ulong *)0x0) {
LAB_00105290:
            iVar17 = 0;
            uVar34 = 0;
            goto LAB_00105292;
          }
LAB_00105b11:
          *param_3 = *param_3 + iVar17 + 4;
        }
        else {
          iVar19 = (int)*(long *)(local_c8 + -8);
          if (iVar19 == 0) {
            iVar17 = 0;
            if (local_f8 != (ulong *)0x0) goto LAB_00105290;
LAB_001042b7:
            iVar16 = iVar17 + 4 + *param_3;
          }
          else {
            uVar34 = iVar19 - 1;
            if ((uVar34 & 3) == 0) {
              iVar17 = 0;
              if (local_f8 != (ulong *)0x0) goto LAB_00105292;
              iVar16 = *param_3;
              iVar17 = 0;
            }
            else {
              uVar35 = (uint)((int)uVar34 >> 0x1f) >> 0x1e;
              iVar17 = (uVar35 - (uVar34 + uVar35 & 3)) + 4;
              if (local_f8 != (ulong *)0x0) {
LAB_00105292:
                puVar23 = (ulong *)((long)local_f8 + 4);
                puVar25 = local_f8;
                do {
                  *(char *)puVar25 = (char)uVar34;
                  puVar25 = (ulong *)((long)puVar25 + 1);
                  uVar34 = uVar34 >> 8;
                } while (puVar25 != puVar23);
                if (local_c8 == (Variant *)0x0) {
                  sVar39 = 0;
                }
                else {
                  sVar39 = (size_t)((int)*(long *)(local_c8 + -8) + -1);
                  if ((int)*(long *)(local_c8 + -8) == 0) {
                    sVar39 = 0;
                  }
                }
                pvVar29 = (void *)CharString::get_data();
                memcpy(puVar23,pvVar29,sVar39);
                if (local_c8 == (Variant *)0x0) {
                  local_f8 = (ulong *)((long)iVar17 + (long)puVar23);
                  goto LAB_00105b11;
                }
                iVar19 = (int)*(long *)(local_c8 + -8);
                if (iVar19 == 0) {
                  local_f8 = (ulong *)((long)iVar17 + (long)puVar23);
                  goto LAB_001042b7;
                }
                local_f8 = (ulong *)((long)puVar23 + (long)(iVar17 + -1 + iVar19));
              }
              iVar16 = *param_3;
            }
            iVar16 = iVar17 + 3 + iVar19 + iVar16;
          }
          pVVar21 = local_c8;
          *param_3 = iVar16;
          LOCK();
          pVVar40 = local_c8 + -0x10;
          *(long *)pVVar40 = *(long *)pVVar40 + -1;
          UNLOCK();
          if (*(long *)pVVar40 == 0) {
            local_c8 = (Variant *)0x0;
            Memory::free_static(pVVar21 + -0x10,false);
          }
        }
        pVVar40 = local_e8;
        if (local_e8 != (Variant *)0x0) {
          LOCK();
          pVVar21 = local_e8 + -0x10;
          *(long *)pVVar21 = *(long *)pVVar21 + -1;
          UNLOCK();
          if (*(long *)pVVar21 == 0) {
            local_e8 = (Variant *)0x0;
            Memory::free_static(pVVar40 + -0x10,false);
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar14 + iVar15 != iVar18);
    }
    NodePath::~NodePath((NodePath *)local_f0);
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    break;
      case 0x17:
    uVar38 = Variant::operator_cast_to_RID(param_1);
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    puVar23 = local_f8;
    if (local_f8 != (ulong *)0x0) {
      do {
        *(char *)puVar23 = (char)uVar38;
        puVar23 = (ulong *)((long)puVar23 + 1);
        uVar38 = uVar38 >> 8;
      } while (local_f8 + 1 != puVar23);
    }
    *param_3 = *param_3 + 8;
    break;
      case 0x18:
    if (!param_4) {
      if (local_f8 != (ulong *)0x0) {
        lVar20 = Variant::get_validated_object();
        uVar38 = 0;
        if (lVar20 != 0) {
          uVar38 = *(ulong *)(lVar20 + 0x60);
        }
        puVar25 = puVar23 + 1;
        do {
          *(char *)puVar23 = (char)uVar38;
          puVar23 = (ulong *)((long)puVar23 + 1);
          uVar38 = uVar38 >> 8;
        } while (puVar25 != puVar23);
        goto LAB_00103e10;
      }
      goto LAB_00103e14;
    }
    pOVar30 = Variant::operator_cast_to_Object_(param_1);
    if (pOVar30 == (Object *)0x0) {
      if (local_f8 != (ulong *)0x0) {
        *(undefined4 *)local_f8 = 0;
      }
LAB_001053e8:
      auVar47._8_8_ = local_88._8_8_;
      auVar47._0_8_ = local_88._0_8_;
      *param_3 = *param_3 + 4;
    }
    else {
      (**(code **)(*(long *)pOVar30 + 0x48))((String *)&local_d8,pOVar30);
      StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
      cVar12 = ClassDB::can_instantiate((StringName *)&local_c8);
      if ((StringName::configured != '\0') && (local_c8 != (Variant *)0x0)) {
        StringName::unref();
      }
      pVVar40 = local_d8;
      if (local_d8 != (Variant *)0x0) {
        LOCK();
        pVVar21 = local_d8 + -0x10;
        *(long *)pVVar21 = *(long *)pVVar21 + -1;
        UNLOCK();
        if (*(long *)pVVar21 == 0) {
          local_d8 = (Variant *)0x0;
          Memory::free_static(pVVar40 + -0x10,false);
        }
      }
      if (cVar12 == '\0') {
        iVar14 = 0x1f;
        _err_print_error("encode_variant","core/io/marshalls.cpp",0x6d6,
                         "Condition \"!ClassDB::can_instantiate(obj->get_class())\" is true. Returning: ERR_INVALID_PARAMETER"
                         ,0,0);
        auVar47._8_8_ = local_88._8_8_;
        auVar47._0_8_ = local_88._0_8_;
        goto LAB_00103838;
      }
      (**(code **)(*(long *)pOVar30 + 0x48))((StringName *)&local_c8,pOVar30);
      _encode_string((String *)&local_c8,(uchar **)&local_f8,param_3);
      pVVar40 = local_c8;
      if (local_c8 != (Variant *)0x0) {
        LOCK();
        pVVar21 = local_c8 + -0x10;
        *(long *)pVVar21 = *(long *)pVVar21 + -1;
        UNLOCK();
        if (*(long *)pVVar21 == 0) {
          local_c8 = (Variant *)0x0;
          Memory::free_static(pVVar40 + -0x10,false);
        }
      }
      local_d8 = (Variant *)0x0;
      Object::get_property_list((List *)pOVar30,SUB81((String *)&local_d8,0));
      if ((local_d8 == (Variant *)0x0) || (lVar20 = *(long *)local_d8, lVar20 == 0)) {
        uVar38 = 0;
        if (local_f8 != (ulong *)0x0) goto LAB_00105903;
        *param_3 = *param_3 + 4;
      }
      else {
        uVar38 = 0;
        do {
          puVar36 = (uint *)(lVar20 + 0x28);
          lVar20 = *(long *)(lVar20 + 0x30);
          uVar38 = (ulong)(((int)uVar38 + 1) - (uint)((*puVar36 & 2) == 0));
        } while (lVar20 != 0);
        if (local_f8 == (ulong *)0x0) {
          *param_3 = *param_3 + 4;
        }
        else {
LAB_00105903:
          puVar23 = (ulong *)((long)local_f8 + 4);
          do {
            *(char *)local_f8 = (char)uVar38;
            local_f8 = (ulong *)((long)local_f8 + 1);
            uVar38 = uVar38 >> 8;
          } while (local_f8 != puVar23);
          *param_3 = *param_3 + 4;
          if (local_d8 == (Variant *)0x0) goto LAB_00105ece;
        }
        for (lVar20 = *(long *)local_d8; lVar20 != 0; lVar20 = *(long *)(lVar20 + 0x30)) {
          if ((*(byte *)(lVar20 + 0x28) & 2) != 0) {
            pSVar2 = (String *)(lVar20 + 8);
            _encode_string(pSVar2,(uchar **)&local_f8,param_3);
            local_a8 = 0;
            local_a0 = (undefined1  [16])0x0;
            cVar12 = operator==(pSVar2,(StringName *)(CoreStringNames::singleton + 0x10));
            if (cVar12 == '\0') {
              StringName::StringName((StringName *)&local_c8,pSVar2,false);
              Object::get((StringName *)local_88,(bool *)pOVar30);
              if (Variant::needs_deinit[(int)local_a8] != '\0') {
                Variant::_clear_internal();
              }
              local_a0._12_4_ = uStack_74;
              local_a0._8_4_ = local_78;
              local_a8 = CONCAT44(local_a8._4_4_,local_88._0_4_);
              local_a0._0_8_ = local_88._8_8_;
              if ((StringName::configured != '\0') && (local_c8 != (Variant *)0x0)) {
                StringName::unref();
              }
LAB_001059c2:
              puVar23 = local_f8;
              iVar14 = encode_variant((Variant *)&local_a8,(uchar *)local_f8,(int *)&local_c8,true,
                                      param_5 + 1);
              if (iVar14 == 0) {
                if (((long)(int)local_c8 & 3U) == 0) {
                  *param_3 = *param_3 + (int)local_c8;
                  if (puVar23 != (ulong *)0x0) {
                    local_f8 = (ulong *)((long)puVar23 + (long)(int)local_c8);
                  }
                  if (Variant::needs_deinit[(int)local_a8] != '\0') {
                    Variant::_clear_internal();
                  }
                  goto LAB_00105a1c;
                }
                iVar14 = 0x2f;
                _err_print_error("encode_variant","core/io/marshalls.cpp",0x703,
                                 "Condition \"len % 4\" is true. Returning: ERR_BUG",0,0);
              }
              else {
                _err_print_error("encode_variant","core/io/marshalls.cpp",0x702,
                                 "Condition \"err\" is true. Returning: err",0,0);
              }
            }
            else {
              (**(code **)(*(long *)pOVar30 + 0x98))((Variant *)local_88,pOVar30);
              lVar31 = Variant::get_validated_object();
              if (lVar31 == 0) {
                cVar12 = Variant::needs_deinit[(int)local_88._0_4_];
joined_r0x00105fb4:
                if (cVar12 != '\0') {
                  Variant::_clear_internal();
                }
                goto LAB_001059c2;
              }
              pOVar32 = (Object *)__dynamic_cast(lVar31,&Object::typeinfo,&Script::typeinfo,0);
              if (pOVar32 == (Object *)0x0) {
                cVar12 = Variant::needs_deinit[(int)local_88._0_4_];
                goto joined_r0x00105fb4;
              }
              cVar12 = RefCounted::reference();
              if (cVar12 == '\0') {
                cVar12 = Variant::needs_deinit[(int)local_88._0_4_];
                goto joined_r0x00105fb4;
              }
              if (Variant::needs_deinit[(int)local_88._0_4_] != '\0') {
                Variant::_clear_internal();
              }
              Resource::get_path();
              if (((local_c8 != (Variant *)0x0) && (1 < *(uint *)(local_c8 + -8))) &&
                 (cVar12 = String::begins_with((char *)&local_c8), cVar12 != '\0')) {
                Variant::Variant((Variant *)local_88,(String *)&local_c8);
                if (Variant::needs_deinit[(int)local_a8] != '\0') {
                  Variant::_clear_internal();
                }
                pVVar40 = local_c8;
                local_a0._12_4_ = uStack_74;
                local_a0._8_4_ = local_78;
                local_a8 = CONCAT44(local_a8._4_4_,local_88._0_4_);
                local_a0._0_8_ = local_88._8_8_;
                if (local_c8 != (Variant *)0x0) {
                  LOCK();
                  pVVar21 = local_c8 + -0x10;
                  *(long *)pVVar21 = *(long *)pVVar21 + -1;
                  UNLOCK();
                  if (*(long *)pVVar21 == 0) {
                    local_c8 = (Variant *)0x0;
                    Memory::free_static(pVVar40 + -0x10,false);
                  }
                }
                cVar12 = RefCounted::unreference();
                if ((cVar12 != '\0') && (cVar12 = predelete_handler(pOVar32), cVar12 != '\0')) {
                  (**(code **)(*(long *)pOVar32 + 0x140))(pOVar32);
                  Memory::free_static(pOVar32,false);
                }
                goto LAB_001059c2;
              }
              _err_print_error("encode_variant","core/io/marshalls.cpp",0x6f9,
                               "Condition \"path.is_empty() || !path.begins_with(\"res://\")\" is true. Returning: ERR_UNAVAILABLE"
                               ,"Failed to encode a path to a custom script.",0,0);
              pVVar40 = local_c8;
              if (local_c8 != (Variant *)0x0) {
                LOCK();
                pVVar21 = local_c8 + -0x10;
                *(long *)pVVar21 = *(long *)pVVar21 + -1;
                UNLOCK();
                if (*(long *)pVVar21 == 0) {
                  local_c8 = (Variant *)0x0;
                  Memory::free_static(pVVar40 + -0x10,false);
                }
              }
              cVar12 = RefCounted::unreference();
              if ((cVar12 != '\0') && (cVar12 = predelete_handler(pOVar32), cVar12 != '\0')) {
                (**(code **)(*(long *)pOVar32 + 0x140))(pOVar32);
                Memory::free_static(pOVar32,false);
              }
              iVar14 = 2;
            }
            if (Variant::needs_deinit[(int)local_a8] != '\0') {
              Variant::_clear_internal();
            }
            List<PropertyInfo,DefaultAllocator>::~List
                      ((List<PropertyInfo,DefaultAllocator> *)&local_d8);
            auVar47._8_8_ = local_88._8_8_;
            auVar47._0_8_ = local_88._0_8_;
            goto LAB_00103838;
          }
LAB_00105a1c:
        }
      }
LAB_00105ece:
      List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_d8);
      auVar47._8_8_ = local_88._8_8_;
      auVar47._0_8_ = local_88._0_8_;
    }
    break;
      case 0x1a:
    Variant::operator_cast_to_Signal((Variant *)&local_d8);
    Signal::get_name();
    if (local_e8 == (Variant *)0x0) {
LAB_00105b27:
      local_e0 = 0;
    }
    else {
      pVVar40 = *(Variant **)(local_e8 + 8);
      local_e0 = 0;
      if (pVVar40 == (Variant *)0x0) {
        plVar1 = (long *)(*(long *)(local_e8 + 0x10) + -0x10);
        if (*(long *)(local_e8 + 0x10) == 0) goto LAB_00105b27;
        do {
          lVar20 = *plVar1;
          if (lVar20 == 0) goto LAB_00105b27;
          LOCK();
          lVar31 = *plVar1;
          bVar43 = lVar20 == lVar31;
          if (bVar43) {
            *plVar1 = lVar20 + 1;
            lVar31 = lVar20;
          }
          UNLOCK();
        } while (!bVar43);
        if (lVar31 != -1) {
          local_e0 = *(long *)(local_e8 + 0x10);
        }
      }
      else {
        local_c0 = (ulong *)strlen((char *)pVVar40);
        local_c8 = pVVar40;
        String::parse_latin1((StrRange *)&local_e0);
      }
    }
    _encode_string((String *)&local_e0,(uchar **)&local_f8,param_3);
    lVar20 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar1 = (long *)(local_e0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar20 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_e8 != (Variant *)0x0)) {
      StringName::unref();
    }
    puVar23 = local_f8;
    if (local_f8 != (ulong *)0x0) {
      uVar38 = Signal::get_object_id();
      puVar25 = puVar23 + 1;
      do {
        *(char *)puVar23 = (char)uVar38;
        puVar23 = (ulong *)((long)puVar23 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar25 != puVar23);
    }
    auVar9._8_8_ = local_88._8_8_;
    auVar9._0_8_ = local_88._0_8_;
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    *param_3 = *param_3 + 8;
    if ((StringName::configured != '\0') && (auVar47 = auVar9, local_d8 != (Variant *)0x0)) {
      StringName::unref();
      auVar47._8_8_ = local_88._8_8_;
      auVar47._0_8_ = local_88._0_8_;
    }
    break;
      case 0x1b:
    Variant::operator_cast_to_Dictionary((Variant *)&local_d8);
    Dictionary::get_key_type();
    iVar14 = _encode_container_type((ContainerType *)&local_c8,(uchar **)&local_f8,param_3,param_4);
    if (((local_b8 != (Object *)0x0) &&
        (cVar12 = RefCounted::unreference(), pOVar30 = local_b8, cVar12 != '\0')) &&
       (cVar12 = predelete_handler(local_b8), cVar12 != '\0')) {
      (**(code **)(*(long *)pOVar30 + 0x140))(pOVar30);
      Memory::free_static(pOVar30,false);
   }

   if (( StringName::configured != '\0' ) && ( local_c0 != (ulong*)0x0 )) {
      StringName::unref();
   }

   if (iVar14 == 0) {
      Dictionary::get_value_type();
      iVar14 = _encode_container_type((ContainerType*)&local_c8, (uchar**)&local_f8, param_3, param_4);
      if (( ( local_b8 != (Object*)0x0 ) && ( cVar12 = RefCounted::unreference() ),cVar12 != '\0' )) &&( cVar12 = cVar12 != '\0' )(**(code**)( *(long*)local_b8 + 0x140 ))(local_b8);
      Memory::free_static(local_b8, false);
   }

   if (( StringName::configured != '\0' ) && ( local_c0 != (ulong*)0x0 )) {
      StringName::unref();
   }

   puVar23 = local_f8;
   if (iVar14 == 0) {
      if (local_f8 != (ulong*)0x0) {
         uVar38 = Dictionary::size();
         puVar25 = (ulong*)( (long)puVar23 + 4 );
         do {
            *(char*)puVar23 = (char)uVar38;
            puVar23 = (ulong*)( (long)puVar23 + 1 );
            uVar38 = uVar38 >> 8 & 0xffffff;
            local_f8 = puVar23;
         }
 while ( puVar23 != puVar25 );
      }

      *param_3 = *param_3 + 4;
      local_c8 = (Variant*)0x0;
      Dictionary::get_key_list((List*)&local_d8);
      if (( local_c8 != (Variant*)0x0 ) && ( pVVar40 = *(Variant**)local_c8 ),pVVar40 != (Variant*)0x0) {
         do {
            puVar23 = local_f8;
            iVar14 = encode_variant(pVVar40, (uchar*)local_f8, (int*)&local_e0, param_4, param_5 + 1);
            if (iVar14 != 0) {
               _err_print_error("encode_variant", "core/io/marshalls.cpp", 0x742, "Condition \"err\" is true. Returning: err", 0, 0);
               LAB_0010558c:List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator>*)&local_c8);
               goto LAB_00105596;
            }

            if (( (long)(int)local_e0 & 3U ) != 0) {
               _err_print_error("encode_variant", "core/io/marshalls.cpp", 0x743, "Condition \"len % 4\" is true. Returning: ERR_BUG", 0, 0);
               LAB_00105586:iVar14 = 0x2f;
               goto LAB_0010558c;
            }

            *param_3 = *param_3 + (int)local_e0;
            if (puVar23 != (ulong*)0x0) {
               local_f8 = (ulong*)( (long)puVar23 + (long)(int)local_e0 );
            }

            pVVar21 = (Variant*)Dictionary::getptr((Variant*)&local_d8);
            puVar23 = local_f8;
            if (pVVar21 == (Variant*)0x0) {
               _err_print_error("encode_variant", "core/io/marshalls.cpp", 0x749, "Parameter \"value\" is null.", 0, 0);
               goto LAB_00105586;
            }

            iVar14 = encode_variant(pVVar21, (uchar*)local_f8, (int*)&local_e0, param_4, param_5 + 1);
            if (iVar14 != 0) {
               _err_print_error("encode_variant", "core/io/marshalls.cpp", 0x74b, "Condition \"err\" is true. Returning: err", 0, 0);
               goto LAB_0010558c;
            }

            if (( (long)(int)local_e0 & 3U ) != 0) {
               _err_print_error("encode_variant", "core/io/marshalls.cpp", 0x74c, "Condition \"len % 4\" is true. Returning: ERR_BUG", 0, 0);
               goto LAB_00105586;
            }

            *param_3 = *param_3 + (int)local_e0;
            if (puVar23 != (ulong*)0x0) {
               local_f8 = (ulong*)( (long)puVar23 + (long)(int)local_e0 );
            }

            pVVar40 = *(Variant**)( pVVar40 + 0x18 );
         }
 while ( pVVar40 != (Variant*)0x0 );
      }

      List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator>*)&local_c8);
      Dictionary::~Dictionary((Dictionary*)&local_d8);
      auVar47._8_8_ = local_88._8_8_;
      auVar47._0_8_ = local_88._0_8_;
      break;
   }

}
LAB_00105596:Dictionary::~Dictionary((Dictionary*)&local_d8);auVar47._8_8_ = local_88._8_8_;auVar47._0_8_ = local_88._0_8_;goto LAB_00103838;case 0x1c:
    Variant::operator_cast_to_Array((Variant *)&local_e0);
    Array::get_element_type();
    iVar14 = _encode_container_type((ContainerType *)&local_c8,(uchar **)&local_f8,param_3,param_4);
    if (((local_b8 != (Object *)0x0) && (cVar12 = RefCounted::unreference(), cVar12 != '\0')) &&
       (cVar12 = predelete_handler(local_b8), cVar12 != '\0')) {
      (**(code **)(*(long *)local_b8 + 0x140))(local_b8);
      Memory::free_static(local_b8,false);
    }
    if ((StringName::configured != '\0') && (local_c0 != (ulong *)0x0)) {
      StringName::unref();
    }
    puVar23 = local_f8;
    if (iVar14 != 0) {
LAB_0010568c:
      Array::~Array((Array *)&local_e0);
      auVar47._8_8_ = local_88._8_8_;
      auVar47._0_8_ = local_88._0_8_;
      goto LAB_00103838;
    }
    if (local_f8 != (ulong *)0x0) {
      uVar38 = Array::size();
      local_f8 = (ulong *)((long)puVar23 + 4);
      do {
        *(char *)puVar23 = (char)uVar38;
        puVar23 = (ulong *)((long)puVar23 + 1);
        uVar38 = uVar38 >> 8 & 0xffffff;
      } while (local_f8 != puVar23);
    }
    *param_3 = *param_3 + 4;
    Array::begin();
    Array::end();
    if (local_d8 != local_c8) {
      do {
        pVVar40 = local_d8;
        if (local_d0 != (Variant *)0x0) {
          Variant::operator=(local_d0,local_d8);
          pVVar40 = local_d0;
        }
        puVar23 = local_f8;
        iVar14 = encode_variant(pVVar40,(uchar *)local_f8,(int *)&local_e8,param_4,param_5 + 1);
        if (iVar14 != 0) {
          _err_print_error("encode_variant","core/io/marshalls.cpp",0x767,
                           "Condition \"err\" is true. Returning: err",0,0);
          goto LAB_0010568c;
        }
        if (((ulong)local_e8 & 3) != 0) {
          iVar14 = 0x2f;
          _err_print_error("encode_variant","core/io/marshalls.cpp",0x768,
                           "Condition \"len % 4\" is true. Returning: ERR_BUG",0,0);
          goto LAB_0010568c;
        }
        if (puVar23 != (ulong *)0x0) {
          local_f8 = (ulong *)((long)puVar23 + (long)(int)local_e8);
        }
        *param_3 = *param_3 + (int)local_e8;
        local_d8 = local_d8 + 0x18;
      } while (local_d8 != local_c8);
    }
    Array::~Array((Array *)&local_e0);
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    break;case 0x1d:
    Variant::operator_cast_to_Vector((Variant *)&local_c8);
    if (local_c0 == (ulong *)0x0) {
      iVar14 = 4;
      iVar15 = 0;
      uVar38 = 0;
    }
    else {
      uVar38 = local_c0[-1];
      iVar15 = (int)uVar38;
      iVar14 = iVar15 + 4;
    }
    puVar23 = (ulong *)0x0;
    if (local_f8 != (ulong *)0x0) {
      puVar23 = (ulong *)((long)local_f8 + 4);
      do {
        *(char *)local_f8 = (char)uVar38;
        local_f8 = (ulong *)((long)local_f8 + 1);
        uVar38 = uVar38 >> 8 & 0xffffff;
      } while (puVar23 != local_f8);
      local_f8 = puVar23;
      if (local_c0 != (ulong *)0x0) {
        pvVar29 = memcpy(puVar23,local_c0,(long)iVar15);
        puVar23 = (ulong *)((long)pvVar29 + (long)iVar15);
        local_f8 = puVar23;
      }
    }
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    bVar43 = false;
    uVar34 = *param_3 + iVar14;
    *param_3 = uVar34;
    while ((uVar34 & 3) != 0) {
      uVar34 = uVar34 + 1;
      *param_3 = uVar34;
      if (puVar23 == (ulong *)0x0) goto LAB_00103af7;
      *(undefined1 *)puVar23 = 0;
      bVar43 = true;
      puVar23 = (ulong *)((long)puVar23 + 1);
      uVar34 = *param_3;
    }
    goto LAB_00103afd;case 0x1e:
    Variant::operator_cast_to_Vector((Variant *)&local_c8);
    if (local_c0 == (ulong *)0x0) {
      if (local_f8 == (ulong *)0x0) goto LAB_001053e8;
      lVar20 = 0;
      uVar38 = 0;
      iVar14 = 4;
LAB_00103a00:
      puVar23 = local_f8;
      do {
        *(char *)puVar23 = (char)uVar38;
        puVar23 = (ulong *)((long)puVar23 + 1);
        uVar38 = uVar38 >> 8 & 0xffffff;
      } while (puVar23 != (ulong *)((long)local_f8 + 4));
      if (0 < (int)lVar20) {
        local_f8 = local_f8 + 1;
        puVar25 = local_c0;
        do {
          uVar34 = (uint)*puVar25;
          puVar41 = (ulong *)((long)local_f8 + -4);
          do {
            puVar22 = puVar41;
            *(char *)puVar22 = (char)uVar34;
            uVar34 = uVar34 >> 8;
            puVar41 = (ulong *)((long)puVar22 + 1);
          } while ((ulong *)((long)puVar22 + 1) != local_f8);
          puVar25 = (ulong *)((long)puVar25 + 4);
          local_f8 = (ulong *)((long)puVar22 + 5);
        } while (puVar25 != (ulong *)((long)local_c0 + lVar20 * 4));
      }
      goto LAB_00103991;
    }
    uVar38 = local_c0[-1];
    lVar20 = (long)(int)uVar38;
    iVar14 = (int)uVar38 * 4 + 4;
    if (local_f8 != (ulong *)0x0) goto LAB_00103a00;
LAB_00105494:
    *param_3 = *param_3 + iVar14;
    goto LAB_0010399e;case 0x1f:
    Variant::operator_cast_to_Vector((Variant *)&local_c8);
    if (local_c0 == (ulong *)0x0) {
      if (local_f8 == (ulong *)0x0) goto LAB_001053e8;
      lVar20 = 0;
      uVar38 = 0;
      iVar14 = 4;
    }
    else {
      uVar38 = local_c0[-1];
      lVar20 = (long)(int)uVar38;
      iVar14 = (int)uVar38 * 8 + 4;
      if (local_f8 == (ulong *)0x0) goto LAB_00105494;
    }
    puVar23 = local_f8;
    do {
      *(char *)puVar23 = (char)uVar38;
      puVar23 = (ulong *)((long)puVar23 + 1);
      uVar38 = uVar38 >> 8 & 0xffffff;
    } while (puVar23 != (ulong *)((long)local_f8 + 4));
    if (0 < (int)lVar20) {
      puVar33 = (undefined4 *)((long)local_f8 + 0xc);
      puVar25 = local_c0;
      do {
        uVar38 = *puVar25;
        puVar11 = puVar33 + -2;
        do {
          puVar28 = puVar11;
          *(char *)puVar28 = (char)uVar38;
          uVar38 = uVar38 >> 8;
          puVar11 = (undefined4 *)((long)puVar28 + 1);
        } while ((undefined4 *)((long)puVar28 + 1) != puVar33);
        puVar25 = puVar25 + 1;
        puVar33 = (undefined4 *)((long)puVar28 + 9);
      } while (local_c0 + lVar20 != puVar25);
    }
    goto LAB_00103991;case 0x20:
    Variant::operator_cast_to_Vector((Variant *)&local_c8);
    if (local_c0 == (ulong *)0x0) {
      if (local_f8 == (ulong *)0x0) goto LAB_001053e8;
      lVar20 = 0;
      iVar14 = 4;
      uVar38 = 0;
    }
    else {
      uVar38 = local_c0[-1];
      lVar20 = (long)(int)uVar38;
      iVar14 = (int)uVar38 * 4 + 4;
      if (local_f8 == (ulong *)0x0) goto LAB_00105494;
    }
    puVar23 = local_f8;
    do {
      *(char *)puVar23 = (char)uVar38;
      puVar23 = (ulong *)((long)puVar23 + 1);
      uVar38 = uVar38 >> 8 & 0xffffff;
    } while (puVar23 != (ulong *)((long)local_f8 + 4));
    if (0 < (int)lVar20) {
      local_f8 = local_f8 + 1;
      puVar25 = local_c0;
      do {
        uVar34 = (uint)*puVar25;
        puVar41 = (ulong *)((long)local_f8 + -4);
        do {
          puVar22 = puVar41;
          *(char *)puVar22 = (char)uVar34;
          uVar34 = uVar34 >> 8;
          puVar41 = (ulong *)((long)puVar22 + 1);
        } while ((ulong *)((long)puVar22 + 1) != local_f8);
        puVar25 = (ulong *)((long)puVar25 + 4);
        local_f8 = (ulong *)((long)puVar22 + 5);
      } while (puVar25 != (ulong *)((long)local_c0 + lVar20 * 4));
    }
    goto LAB_00103991;case 0x21:
    Variant::operator_cast_to_Vector((Variant *)&local_c8);
    if (local_c0 == (ulong *)0x0) {
      if (local_f8 == (ulong *)0x0) goto LAB_001053e8;
      iVar14 = 4;
      uVar38 = 0;
      lVar20 = 0;
    }
    else {
      uVar38 = local_c0[-1];
      lVar20 = (long)(int)uVar38;
      iVar14 = (int)uVar38 * 8 + 4;
      if (local_f8 == (ulong *)0x0) goto LAB_00105494;
    }
    puVar23 = local_f8;
    do {
      *(char *)puVar23 = (char)uVar38;
      puVar23 = (ulong *)((long)puVar23 + 1);
      uVar38 = uVar38 >> 8 & 0xffffff;
    } while (puVar23 != (ulong *)((long)local_f8 + 4));
    if (0 < (int)lVar20) {
      puVar33 = (undefined4 *)((long)local_f8 + 0xc);
      puVar25 = local_c0;
      do {
        uVar38 = *puVar25;
        puVar11 = puVar33 + -2;
        do {
          puVar28 = puVar11;
          *(char *)puVar28 = (char)uVar38;
          uVar38 = uVar38 >> 8;
          puVar11 = (undefined4 *)((long)puVar28 + 1);
        } while ((undefined4 *)((long)puVar28 + 1) != puVar33);
        puVar25 = puVar25 + 1;
        puVar33 = (undefined4 *)((long)puVar28 + 9);
      } while (puVar25 != local_c0 + lVar20);
    }
LAB_00103991:
    local_f8 = puVar23;
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    *param_3 = *param_3 + iVar14;
    if (local_c0 != (ulong *)0x0) {
LAB_0010399e:
      auVar47._8_8_ = local_88._8_8_;
      auVar47._0_8_ = local_88._0_8_;
      LOCK();
      puVar23 = local_c0 + -2;
      *puVar23 = *puVar23 - 1;
      UNLOCK();
      if (*puVar23 == 0) {
LAB_001039aa:
        puVar23 = local_c0;
        local_c0 = (ulong *)0x0;
        Memory::free_static(puVar23 + -2,false);
        auVar47._8_8_ = local_88._8_8_;
        auVar47._0_8_ = local_88._0_8_;
      }
    }
    break;case 0x22:
    Variant::operator_cast_to_Vector((Variant *)&local_c8);
    if (local_c0 == (ulong *)0x0) {
      iVar14 = 0;
      uVar38 = 0;
      if (local_f8 != (ulong *)0x0) goto LAB_00104e38;
      *param_3 = *param_3 + 4;
    }
    else {
      uVar38 = local_c0[-1];
      iVar14 = (int)uVar38;
      if (local_f8 != (ulong *)0x0) {
LAB_00104e38:
        puVar23 = (ulong *)((long)local_f8 + 4);
        do {
          *(char *)local_f8 = (char)uVar38;
          local_f8 = (ulong *)((long)local_f8 + 1);
          uVar38 = uVar38 >> 8 & 0xffffff;
        } while (local_f8 != puVar23);
      }
      *param_3 = *param_3 + 4;
      lVar20 = 0;
      if (0 < iVar14) {
LAB_00104e70:
        puVar23 = local_f8;
        if (local_c0 == (ulong *)0x0) {
          uVar38 = 0;
        }
        else {
          uVar38 = local_c0[-1];
          if (lVar20 < (long)uVar38) {
            local_d8 = (Variant *)0x0;
            uVar38 = local_c0[lVar20];
            plVar1 = (long *)(uVar38 - 0x10);
            if (uVar38 != 0) {
              do {
                lVar31 = *plVar1;
                if (lVar31 == 0) goto LAB_00104ec5;
                LOCK();
                lVar27 = *plVar1;
                bVar43 = lVar31 == lVar27;
                if (bVar43) {
                  *plVar1 = lVar31 + 1;
                  lVar27 = lVar31;
                }
                UNLOCK();
              } while (!bVar43);
              if (lVar27 != -1) {
                local_d8 = (Variant *)local_c0[lVar20];
              }
            }
LAB_00104ec5:
            String::utf8();
            pVVar40 = local_d8;
            if (local_d8 != (Variant *)0x0) {
              LOCK();
              pVVar21 = local_d8 + -0x10;
              *(long *)pVVar21 = *(long *)pVVar21 + -1;
              UNLOCK();
              if (*(long *)pVVar21 == 0) {
                local_d8 = (Variant *)0x0;
                Memory::free_static(pVVar40 + -0x10,false);
              }
            }
            puVar23 = local_f8;
            if (local_f8 == (ulong *)0x0) {
              if (local_e0 == 0) {
                iVar18 = 5;
              }
              else {
                iVar18 = 5;
                iVar15 = (int)*(undefined8 *)(local_e0 + -8);
                if (iVar15 != 0) goto LAB_00104f28;
              }
            }
            else {
              if (local_e0 == 0) {
                uVar38 = 1;
              }
              else {
                uVar38 = *(ulong *)(local_e0 + -8) & 0xffffffff;
                if ((int)*(ulong *)(local_e0 + -8) == 0) {
                  uVar38 = 1;
                }
              }
              puVar25 = (ulong *)((long)local_f8 + 4);
              puVar41 = local_f8;
              do {
                *(char *)puVar41 = (char)uVar38;
                puVar41 = (ulong *)((long)puVar41 + 1);
                uVar38 = uVar38 >> 8;
              } while (puVar41 != puVar25);
              if (local_e0 == 0) {
                sVar39 = 1;
              }
              else {
                iVar15 = (int)*(undefined8 *)(local_e0 + -8);
                sVar39 = (size_t)iVar15;
                if (iVar15 == 0) {
                  sVar39 = 1;
                }
              }
              pvVar29 = (void *)CharString::get_data();
              memcpy(puVar25,pvVar29,sVar39);
              if ((local_e0 == 0) || (iVar15 = (int)*(undefined8 *)(local_e0 + -8), iVar15 == 0)) {
                local_f8 = (ulong *)((long)puVar23 + 5);
                iVar18 = 5;
              }
              else {
                local_f8 = (ulong *)((long)puVar25 + (long)iVar15);
LAB_00104f28:
                iVar18 = iVar15 + 4;
              }
            }
            lVar31 = local_e0;
            uVar34 = iVar18 + *param_3;
            bVar43 = false;
            *param_3 = uVar34;
            puVar23 = local_f8;
            while ((uVar34 & 3) != 0) {
              uVar34 = uVar34 + 1;
              *param_3 = uVar34;
              if (puVar23 == (ulong *)0x0) goto LAB_00104f57;
              *(undefined1 *)puVar23 = 0;
              bVar43 = true;
              puVar23 = (ulong *)((long)puVar23 + 1);
              uVar34 = *param_3;
            }
            goto LAB_00104f5d;
          }
        }
        goto LAB_001054be;
      }
    }
LAB_00104f9f:
    CowData<String>::_unref((CowData<String> *)&local_c0);
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    break;case 0x23:
    Variant::operator_cast_to_Vector((Variant *)&local_c8);
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    if (local_c0 == (ulong *)0x0) {
      iVar14 = 0;
      uVar38 = 0;
    }
    else {
      uVar38 = local_c0[-1];
      iVar14 = (int)uVar38;
    }
    if (local_f8 == (ulong *)0x0) {
      iVar15 = *param_3 + 4;
      puVar23 = local_f8;
    }
    else {
      puVar23 = (ulong *)((long)local_f8 + 4);
      puVar25 = local_f8;
      do {
        *(char *)puVar25 = (char)uVar38;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar38 = uVar38 >> 8 & 0xffffff;
      } while (puVar23 != puVar25);
      iVar15 = *param_3 + 4;
      *param_3 = iVar15;
      if (0 < iVar14) {
        puVar25 = (ulong *)((long)local_f8 + 0xc);
        lVar20 = 0;
        do {
          local_f8 = local_f8 + 1;
          puVar41 = puVar25 + -1;
          if (local_c0 == (ulong *)0x0) {
            uVar38 = 0;
            goto LAB_001054be;
          }
          uVar38 = local_c0[-1];
          if ((long)uVar38 <= lVar20) goto LAB_001054be;
          uVar26 = (ulong)*(uint *)((long)(local_c0 + lVar20) + 4);
          uVar38 = (ulong)(uint)local_c0[lVar20];
          do {
            *(char *)puVar41 = (char)uVar38;
            puVar41 = (ulong *)((long)puVar41 + 1);
            uVar38 = uVar38 >> 8;
            puVar22 = local_f8;
          } while (puVar41 != local_f8);
          do {
            *(char *)puVar22 = (char)uVar26;
            puVar22 = (ulong *)((long)puVar22 + 1);
            uVar26 = uVar26 >> 8;
          } while (puVar22 != puVar25);
          lVar20 = lVar20 + 1;
          puVar25 = puVar25 + 1;
        } while (lVar20 != iVar14);
        iVar15 = *param_3;
        puVar23 = puVar22;
      }
    }
    local_f8 = puVar23;
    *param_3 = iVar15 + iVar14 * 8;
    goto joined_r0x00105785;case 0x24:
    Variant::operator_cast_to_Vector((Variant *)&local_c8);
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    if (local_c0 == (ulong *)0x0) {
      uVar34 = 0;
    }
    else {
      uVar34 = (uint)local_c0[-1];
    }
    if (local_f8 == (ulong *)0x0) {
      iVar14 = *param_3 + 4;
      puVar23 = local_f8;
    }
    else {
      uVar38 = (ulong)uVar34;
      puVar23 = (ulong *)((long)local_f8 + 4);
      puVar25 = local_f8;
      do {
        *(char *)puVar25 = (char)uVar38;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar23 != puVar25);
      iVar14 = *param_3 + 4;
      *param_3 = iVar14;
      if (0 < (int)uVar34) {
        puVar25 = local_f8 + 2;
        lVar20 = 0;
        puVar41 = local_f8 + 1;
        do {
          local_f8 = (ulong *)((long)local_f8 + 0xc);
          puVar22 = (ulong *)((long)puVar25 + -0xc);
          if (local_c0 == (ulong *)0x0) {
            uVar38 = 0;
            goto LAB_001054be;
          }
          uVar38 = local_c0[-1];
          if ((long)uVar38 <= lVar20) goto LAB_001054be;
          puVar36 = (uint *)((long)local_c0 + (long)((-8 - (long)puVar23) + (long)local_f8));
          uVar38 = (ulong)puVar36[1];
          uVar26 = (ulong)puVar36[2];
          uVar35 = *puVar36;
          do {
            *(char *)puVar22 = (char)uVar35;
            puVar22 = (ulong *)((long)puVar22 + 1);
            uVar35 = uVar35 >> 8;
            puVar24 = puVar41;
          } while (puVar22 != puVar41);
          do {
            *(char *)puVar24 = (char)uVar38;
            puVar24 = (ulong *)((long)puVar24 + 1);
            uVar38 = uVar38 >> 8;
            puVar22 = local_f8;
          } while (puVar24 != local_f8);
          do {
            *(char *)puVar22 = (char)uVar26;
            puVar22 = (ulong *)((long)puVar22 + 1);
            uVar26 = uVar26 >> 8;
          } while (puVar22 != puVar25);
          lVar20 = lVar20 + 1;
          puVar25 = (ulong *)((long)puVar25 + 0xc);
          puVar41 = (ulong *)((long)puVar41 + 0xc);
        } while ((int)uVar34 != lVar20);
        iVar14 = *param_3;
        puVar23 = puVar22;
      }
    }
    local_f8 = puVar23;
    *param_3 = iVar14 + uVar34 * 0xc;
    goto joined_r0x001055b8;case 0x25:
    Variant::operator_cast_to_Vector((Variant *)&local_c8);
    if (local_c0 == (ulong *)0x0) {
      uVar34 = 0;
    }
    else {
      uVar34 = (uint)local_c0[-1];
    }
    if (local_f8 == (ulong *)0x0) {
LAB_001055a5:
      iVar14 = *param_3 + 4;
      puVar23 = local_f8;
    }
    else {
      uVar38 = (ulong)uVar34;
      puVar23 = (ulong *)((long)local_f8 + 4);
      puVar25 = local_f8;
      do {
        *(char *)puVar25 = (char)uVar38;
        puVar25 = (ulong *)((long)puVar25 + 1);
        uVar38 = uVar38 >> 8;
      } while (puVar23 != puVar25);
      iVar14 = *param_3 + 4;
      *param_3 = iVar14;
      if (0 < (int)uVar34) {
        puVar25 = (ulong *)((long)local_f8 + 0x14);
        lVar20 = 0;
        puVar41 = (ulong *)((long)local_f8 + 0xc);
        puVar22 = local_f8 + 1;
        do {
          local_f8 = local_f8 + 2;
          puVar24 = puVar25 + -2;
          if (local_c0 == (ulong *)0x0) goto LAB_0010549d;
          uVar38 = local_c0[-1];
          if ((long)uVar38 <= lVar20) goto LAB_001054be;
          puVar37 = local_c0 + lVar20 * 2;
          uVar38 = (ulong)*(uint *)((long)puVar37 + 4);
          uVar26 = (ulong)(uint)puVar37[1];
          uVar35 = *(uint *)((long)puVar37 + 0xc);
          uVar42 = (uint)*puVar37;
          do {
            *(char *)puVar24 = (char)uVar42;
            puVar24 = (ulong *)((long)puVar24 + 1);
            uVar42 = uVar42 >> 8;
          } while (puVar24 != puVar22);
          do {
            *(char *)puVar24 = (char)uVar38;
            puVar24 = (ulong *)((long)puVar24 + 1);
            uVar38 = uVar38 >> 8;
          } while (puVar24 != puVar41);
          do {
            *(char *)puVar24 = (char)uVar26;
            puVar24 = (ulong *)((long)puVar24 + 1);
            uVar26 = uVar26 >> 8;
          } while (puVar24 != local_f8);
          do {
            *(char *)puVar24 = (char)uVar35;
            puVar24 = (ulong *)((long)puVar24 + 1);
            uVar35 = uVar35 >> 8;
          } while (puVar24 != puVar25);
          lVar20 = lVar20 + 1;
          puVar25 = puVar25 + 2;
          puVar41 = puVar41 + 2;
          puVar22 = puVar22 + 2;
        } while ((int)uVar34 != lVar20);
        iVar14 = *param_3;
        puVar23 = puVar24;
      }
    }
    goto LAB_001055ac;case 0x26:
    Variant::operator_cast_to_Vector((Variant *)&local_c8);
    if (local_c0 == (ulong *)0x0) {
      uVar34 = 0;
    }
    else {
      uVar34 = (uint)local_c0[-1];
    }
    if (local_f8 == (ulong *)0x0) goto LAB_001055a5;
    uVar38 = (ulong)uVar34;
    puVar23 = local_f8;
    do {
      *(char *)puVar23 = (char)uVar38;
      puVar23 = (ulong *)((long)puVar23 + 1);
      uVar38 = uVar38 >> 8;
    } while (puVar23 != (ulong *)((long)local_f8 + 4));
    iVar14 = *param_3 + 4;
    *param_3 = iVar14;
    if (0 < (int)uVar34) {
      puVar25 = (ulong *)((long)local_f8 + 0x14);
      lVar20 = 0;
      puVar41 = (ulong *)((long)local_f8 + 0xc);
      puVar22 = local_f8 + 1;
      do {
        local_f8 = local_f8 + 2;
        puVar24 = puVar25 + -2;
        if (local_c0 == (ulong *)0x0) goto LAB_0010549d;
        uVar38 = local_c0[-1];
        if ((long)uVar38 <= lVar20) goto LAB_001054be;
        puVar37 = local_c0 + lVar20 * 2;
        uVar35 = *(uint *)((long)puVar37 + 4);
        uVar38 = (ulong)(uint)puVar37[1];
        uVar26 = (ulong)*(uint *)((long)puVar37 + 0xc);
        uVar42 = (uint)*puVar37;
        do {
          *(char *)puVar24 = (char)uVar42;
          puVar24 = (ulong *)((long)puVar24 + 1);
          uVar42 = uVar42 >> 8;
        } while (puVar24 != puVar22);
        do {
          *(char *)puVar24 = (char)uVar35;
          puVar24 = (ulong *)((long)puVar24 + 1);
          uVar35 = uVar35 >> 8;
        } while (puVar24 != puVar41);
        do {
          *(char *)puVar24 = (char)uVar38;
          puVar24 = (ulong *)((long)puVar24 + 1);
          uVar38 = uVar38 >> 8;
          puVar37 = local_f8;
        } while (puVar24 != local_f8);
        do {
          *(char *)puVar37 = (char)uVar26;
          puVar37 = (ulong *)((long)puVar37 + 1);
          uVar26 = uVar26 >> 8;
        } while (puVar37 != puVar25);
        lVar20 = lVar20 + 1;
        puVar25 = puVar25 + 2;
        puVar41 = puVar41 + 2;
        puVar22 = puVar22 + 2;
      } while (lVar20 != (int)uVar34);
      iVar14 = *param_3;
      puVar23 = puVar37;
    }
LAB_001055ac:
    local_f8 = puVar23;
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    *param_3 = iVar14 + uVar34 * 0x10;
joined_r0x001055b8:
    if (local_c0 == (ulong *)0x0) break;
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    LOCK();
    puVar23 = local_c0 + -2;
    *puVar23 = *puVar23 - 1;
    uVar38 = *puVar23;
    UNLOCK();
joined_r0x001055c4:
    if (uVar38 != 0) break;
    goto LAB_001039aa;default:
    iVar14 = 0x2f;
    _err_print_error("encode_variant","core/io/marshalls.cpp",0x853,
                     "Method/function failed. Returning: ERR_BUG",0,0);
    auVar47._8_8_ = local_88._8_8_;
    auVar47._0_8_ = local_88._0_8_;
    goto LAB_00103838;
  }
switchD_001036f6_caseD_0:
  iVar14 = 0;
LAB_00103838:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar14;
  }
  local_88 = auVar47;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00104f57:
  while ((uVar34 & 3) != 0) {
    uVar34 = uVar34 + 1;
    *param_3 = uVar34;
  }
  puVar23 = (ulong *)0x0;
LAB_00104f5d:
  if (bVar43) {
    local_f8 = puVar23;
  }
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar31 + -0x10),false);
    }
  }
  lVar20 = lVar20 + 1;
  if (lVar20 == iVar14) goto LAB_00104f9f;
  goto LAB_00104e70;
LAB_00103af7:
  while ((uVar34 & 3) != 0) {
    uVar34 = uVar34 + 1;
    *param_3 = uVar34;
  }
  puVar23 = (ulong *)0x0;
LAB_00103afd:
  if (bVar43) {
    local_f8 = puVar23;
  }
joined_r0x00105785:
  if (local_c0 == (ulong *)0x0) goto switchD_001036f6_caseD_0;
  auVar47._8_8_ = local_88._8_8_;
  auVar47._0_8_ = local_88._0_8_;
  LOCK();
  puVar23 = local_c0 + -2;
  *puVar23 = *puVar23 - 1;
  uVar38 = *puVar23;
  UNLOCK();
  goto joined_r0x001055c4;
LAB_0010549d:
  local_f8 = puVar23;
  uVar38 = 0;
  puVar23 = local_f8;
LAB_001054be:
  local_f8 = puVar23;
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar20,uVar38,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<String>::_copy_on_write(CowData<String> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar7 = lVar2 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName>::_copy_on_write(CowData<StringName> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  StringName *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar6 = lVar2 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (StringName *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(this_00,(StringName *)(*(long *)this + lVar1));
        this_00 = this_00 + 8;
      } while (lVar2 != lVar5);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<StringName>::push_back(StringName) [clone .isra.0] */

void __thiscall Vector<StringName>::push_back(Vector<StringName> *this,StringName *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<StringName>::resize<false>((CowData<StringName> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<StringName>::_copy_on_write((CowData<StringName> *)(this + 8));
        StringName::operator=((StringName *)(*(long *)(this + 8) + lVar3 * 8),param_2);
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* decode_variant(Variant&, unsigned char const*, int, int*, bool, int) */

int decode_variant(Variant *param_1,uchar *param_2,int param_3,int *param_4,bool param_5,int param_6
                  )

{
  int iVar1;
  long *plVar2;
  CowData<char32_t> *this;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long lVar19;
  undefined8 uVar20;
  char cVar21;
  long lVar22;
  Variant *this_00;
  long lVar23;
  StringName *pSVar24;
  Object *pOVar25;
  byte bVar26;
  byte bVar27;
  int iVar28;
  uint uVar29;
  double dVar30;
  float *pfVar31;
  undefined8 extraout_RDX;
  float fVar32;
  byte *pbVar33;
  Object *pOVar34;
  uint *puVar35;
  ulong uVar36;
  ulong *puVar37;
  byte *pbVar38;
  Projection *pPVar39;
  double dVar40;
  double dVar41;
  Projection *pPVar42;
  uchar *puVar43;
  byte *pbVar44;
  uint uVar45;
  uint uVar46;
  int iVar47;
  uint uVar48;
  long in_FS_OFFSET;
  bool bVar49;
  uint local_188;
  NodePath *local_180;
  Variant *local_178;
  float *local_158;
  uint local_148;
  int local_138;
  int local_134;
  byte *local_130;
  long local_128;
  long local_120;
  Object *local_118;
  ulong local_110;
  ulong local_108;
  undefined1 local_100 [24];
  Object *local_e8;
  undefined1 local_e0 [24];
  undefined8 local_c8;
  undefined1 local_c0 [16];
  float local_a8 [8];
  uint local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  float local_5c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x400 < param_6) {
    iVar47 = 6;
    _err_print_error("decode_variant","core/io/marshalls.cpp",0xba,
                     "Condition \"p_depth > Variant::MAX_RECURSION_DEPTH\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,"Variant is too deep. Bailing.",0,0);
    goto LAB_00106579;
  }
  lVar22 = 0;
  uVar45 = 0;
  local_138 = param_3;
  local_130 = param_2;
  if (param_3 < 4) {
    _err_print_error("decode_variant","core/io/marshalls.cpp",0xbe,
                     "Condition \"len < 4\" is true. Returning: ERR_INVALID_DATA",0,0);
    goto LAB_001065cd;
  }
  do {
    pbVar44 = param_2 + lVar22;
    cVar21 = (char)lVar22;
    lVar22 = lVar22 + 1;
    uVar45 = uVar45 | (uint)*pbVar44 << (cVar21 * '\b' & 0x1fU);
  } while (lVar22 != 4);
  if (0x26 < (byte)uVar45) {
    _err_print_error("decode_variant","core/io/marshalls.cpp",0xc2,
                     "Condition \"(header & 0xFF) >= Variant::VARIANT_MAX\" is true. Returning: ERR_INVALID_DATA"
                     ,0,0);
    goto LAB_001065cd;
  }
  local_130 = param_2 + 4;
  iVar47 = param_3 + -4;
  if (param_4 != (int *)0x0) {
    *param_4 = 4;
  }
  local_138 = iVar47;
  switch(uVar45 & 0xff) {
  default:
    uStack_80 = 0;
    uStack_78 = 0;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = uStack_80;
    *(ulong *)(param_1 + 0x10) = uStack_78;
    goto LAB_001073e0;
  case 1:
    lVar22 = 0;
    uVar45 = 0;
    if (iVar47 < 4) {
      _err_print_error("decode_variant","core/io/marshalls.cpp",0xd2,
                       "Condition \"len < 4\" is true. Returning: ERR_INVALID_DATA",0,0);
      break;
    }
    do {
      lVar23 = lVar22 + 4;
      cVar21 = (char)lVar22;
      lVar22 = lVar22 + 1;
      uVar45 = uVar45 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU);
    } while (lVar22 != 4);
    Variant::Variant((Variant *)&local_88,uVar45 != 0);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined8 *)(param_1 + 8) = uStack_80;
    *(ulong *)(param_1 + 0x10) = uStack_78;
    *(uint *)param_1 = local_88;
joined_r0x00109357:
    if (param_4 != (int *)0x0) {
      *param_4 = *param_4 + 4;
    }
    goto LAB_001073e0;
  case 2:
    if ((uVar45 & 0x10000) == 0) {
      lVar22 = 0;
      uVar45 = 0;
      if (3 < iVar47) {
        do {
          lVar23 = lVar22 + 4;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          uVar45 = uVar45 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU);
        } while (lVar22 != 4);
        Variant::Variant((Variant *)&local_88,uVar45);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined8 *)(param_1 + 8) = uStack_80;
        *(ulong *)(param_1 + 0x10) = uStack_78;
        *(uint *)param_1 = local_88;
        goto joined_r0x00109357;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0xe3,
                       "Condition \"len < 4\" is true. Returning: ERR_INVALID_DATA",0,0);
    }
    else {
      iVar28 = 0;
      uVar36 = 0;
      pbVar44 = local_130;
      if (7 < iVar47) {
        do {
          bVar26 = (byte)iVar28;
          iVar28 = iVar28 + 8;
          uVar36 = uVar36 | (ulong)*pbVar44 << (bVar26 & 0x3f);
          pbVar44 = pbVar44 + 1;
        } while (iVar28 != 0x40);
        Variant::Variant((Variant *)&local_88,uVar36);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined8 *)(param_1 + 8) = uStack_80;
        *(ulong *)(param_1 + 0x10) = uStack_78;
        *(uint *)param_1 = local_88;
        if (param_4 == (int *)0x0) goto LAB_001073e0;
LAB_001076a8:
        *param_4 = *param_4 + 8;
        goto LAB_001073e0;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0xdb,
                       "Condition \"len < 8\" is true. Returning: ERR_INVALID_DATA",0,0);
    }
    break;
  case 3:
    if ((uVar45 & 0x10000) == 0) {
      lVar22 = 0;
      fVar32 = 0.0;
      if (3 < iVar47) {
        do {
          lVar23 = lVar22 + 4;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          fVar32 = (float)((uint)fVar32 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
        } while (lVar22 != 4);
        Variant::Variant((Variant *)&local_88,fVar32);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined8 *)(param_1 + 8) = uStack_80;
        *(ulong *)(param_1 + 0x10) = uStack_78;
        *(uint *)param_1 = local_88;
        goto joined_r0x00109357;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0xf5,
                       "Condition \"(size_t)len < sizeof(float)\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    else {
      iVar28 = 0;
      dVar40 = 0.0;
      pbVar44 = local_130;
      if (7 < iVar47) {
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar28;
          iVar28 = iVar28 + 8;
          dVar40 = (double)((ulong)dVar40 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar28 != 0x40);
        Variant::Variant((Variant *)&local_88,dVar40);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined8 *)(param_1 + 8) = uStack_80;
        *(ulong *)(param_1 + 0x10) = uStack_78;
        *(uint *)param_1 = local_88;
        goto joined_r0x001076a2;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0xee,
                       "Condition \"(size_t)len < sizeof(double)\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    break;
  case 4:
    local_e8 = (Object *)0x0;
    iVar47 = _decode_string(&local_130,&local_138,param_4,(String *)&local_e8);
    pOVar34 = local_e8;
    if (iVar47 != 0) {
      if (local_e8 != (Object *)0x0) {
        LOCK();
        pOVar25 = local_e8 + -0x10;
        *(long *)pOVar25 = *(long *)pOVar25 + -1;
        UNLOCK();
        if (*(long *)pOVar25 == 0) {
          local_e8 = (Object *)0x0;
          Memory::free_static(pOVar34 + -0x10,false);
        }
      }
      goto LAB_00106579;
    }
    Variant::Variant((Variant *)&local_88,(String *)&local_e8);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    pOVar34 = local_e8;
    *(uint *)param_1 = local_88;
    *(undefined8 *)(param_1 + 8) = uStack_80;
    *(ulong *)(param_1 + 0x10) = uStack_78;
    if (local_e8 != (Object *)0x0) {
      LOCK();
      pOVar25 = local_e8 + -0x10;
      *(long *)pOVar25 = *(long *)pOVar25 + -1;
      UNLOCK();
      if (*(long *)pOVar25 == 0) {
        local_e8 = (Object *)0x0;
        Memory::free_static(pOVar34 + -0x10,false);
      }
    }
    goto LAB_001073e0;
  case 5:
    local_a8[0] = 0.0;
    local_a8[1] = 0.0;
    if ((uVar45 & 0x10000) == 0) {
      fVar32 = 0.0;
      lVar22 = 0;
      if (7 < iVar47) {
        do {
          lVar23 = lVar22 + 4;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          fVar32 = (float)((uint)fVar32 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[1] = 0.0;
        do {
          lVar23 = lVar22 + 8;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[1] = (float)((uint)local_a8[1] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        local_a8[0] = fVar32;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 8;
        }
        goto LAB_0010787d;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x114,
                       "Condition \"(size_t)len < sizeof(float) * 2\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    else {
      iVar28 = 0;
      dVar40 = 0.0;
      pbVar44 = local_130;
      if (0xf < iVar47) {
        do {
          bVar26 = (byte)iVar28;
          iVar28 = iVar28 + 8;
          dVar40 = (double)((ulong)dVar40 | (ulong)*pbVar44 << (bVar26 & 0x3f));
          pbVar44 = pbVar44 + 1;
        } while (iVar28 != 0x40);
        pbVar44 = param_2 + 0xc;
        iVar47 = 0;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        local_a8[1] = (float)dVar41;
        local_a8[0] = (float)dVar40;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0x10;
        }
LAB_0010787d:
        Variant::Variant((Variant *)&local_88,(Vector2 *)local_a8);
        cVar21 = Variant::needs_deinit[*(int *)param_1];
joined_r0x00108859:
        if (cVar21 != '\0') {
          Variant::_clear_internal();
        }
        *(undefined8 *)(param_1 + 8) = uStack_80;
        *(ulong *)(param_1 + 0x10) = uStack_78;
        *(uint *)param_1 = local_88;
        goto LAB_001073e0;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x10c,
                       "Condition \"(size_t)len < sizeof(double) * 2\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    break;
  case 6:
    lVar22 = 0;
    fVar32 = 0.0;
    if (iVar47 < 8) {
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x120,
                       "Condition \"len < 4 * 2\" is true. Returning: ERR_INVALID_DATA",0,0);
      break;
    }
    do {
      lVar23 = lVar22 + 4;
      cVar21 = (char)lVar22;
      lVar22 = lVar22 + 1;
      fVar32 = (float)((uint)fVar32 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
    } while (lVar22 != 4);
    lVar22 = 0;
    local_a8[1] = 0.0;
    do {
      lVar23 = lVar22 + 8;
      cVar21 = (char)lVar22;
      lVar22 = lVar22 + 1;
      local_a8[1] = (float)((uint)local_a8[1] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
    } while (lVar22 != 4);
    local_a8[0] = fVar32;
    Variant::Variant((Variant *)&local_88,(Vector2i *)local_a8);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined8 *)(param_1 + 8) = uStack_80;
    *(ulong *)(param_1 + 0x10) = uStack_78;
    *(uint *)param_1 = local_88;
joined_r0x001076a2:
    if (param_4 != (int *)0x0) goto LAB_001076a8;
    goto LAB_001073e0;
  case 7:
    local_a8[0] = 0.0;
    local_a8[1] = 0.0;
    local_a8[2] = 0.0;
    local_a8[3] = 0.0;
    if ((uVar45 & 0x10000) == 0) {
      fVar32 = 0.0;
      lVar22 = 0;
      if (0xf < iVar47) {
        do {
          lVar23 = lVar22 + 4;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          fVar32 = (float)((uint)fVar32 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[1] = 0.0;
        do {
          lVar23 = lVar22 + 8;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[1] = (float)((uint)local_a8[1] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[2] = 0.0;
        do {
          lVar23 = lVar22 + 0xc;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[2] = (float)((uint)local_a8[2] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[3] = 0.0;
        do {
          lVar23 = lVar22 + 0x10;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[3] = (float)((uint)local_a8[3] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        local_a8[0] = fVar32;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0x10;
        }
        goto LAB_001075d5;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x138,
                       "Condition \"(size_t)len < sizeof(float) * 4\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    else {
      iVar28 = 0;
      dVar40 = 0.0;
      pbVar44 = local_130;
      if (0x1f < iVar47) {
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar28;
          iVar28 = iVar28 + 8;
          dVar40 = (double)((ulong)dVar40 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar28 != 0x40);
        pbVar44 = param_2 + 0xc;
        iVar47 = 0;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        pbVar44 = param_2 + 0x14;
        iVar47 = 0;
        local_a8[1] = (float)dVar41;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        pbVar44 = param_2 + 0x1c;
        iVar47 = 0;
        local_a8[2] = (float)dVar41;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        local_a8[3] = (float)dVar41;
        local_a8[0] = (float)dVar40;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0x20;
        }
LAB_001075d5:
        Variant::Variant((Variant *)&local_88,(Rect2 *)local_a8);
        cVar21 = Variant::needs_deinit[*(int *)param_1];
        goto joined_r0x00107089;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x12e,
                       "Condition \"(size_t)len < sizeof(double) * 4\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    break;
  case 8:
    lVar22 = 0;
    fVar32 = 0.0;
    if (iVar47 < 0x10) {
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x146,
                       "Condition \"len < 4 * 4\" is true. Returning: ERR_INVALID_DATA",0,0);
      break;
    }
    do {
      lVar23 = lVar22 + 4;
      cVar21 = (char)lVar22;
      lVar22 = lVar22 + 1;
      fVar32 = (float)((uint)fVar32 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
    } while (lVar22 != 4);
    lVar22 = 0;
    local_a8[1] = 0.0;
    do {
      lVar23 = lVar22 + 8;
      cVar21 = (char)lVar22;
      lVar22 = lVar22 + 1;
      local_a8[1] = (float)((uint)local_a8[1] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
    } while (lVar22 != 4);
    lVar22 = 0;
    local_a8[2] = 0.0;
    do {
      lVar23 = lVar22 + 0xc;
      cVar21 = (char)lVar22;
      lVar22 = lVar22 + 1;
      local_a8[2] = (float)((uint)local_a8[2] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
    } while (lVar22 != 4);
    lVar22 = 0;
    local_a8[3] = 0.0;
    do {
      lVar23 = lVar22 + 0x10;
      cVar21 = (char)lVar22;
      lVar22 = lVar22 + 1;
      local_a8[3] = (float)((uint)local_a8[3] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
    } while (lVar22 != 4);
    local_a8[0] = fVar32;
    Variant::Variant((Variant *)&local_88,(Rect2i *)local_a8);
    cVar21 = Variant::needs_deinit[*(int *)param_1];
joined_r0x001086ad:
    if (cVar21 != '\0') {
      Variant::_clear_internal();
    }
    *(undefined8 *)(param_1 + 8) = uStack_80;
    *(ulong *)(param_1 + 0x10) = uStack_78;
    *(uint *)param_1 = local_88;
    if (param_4 != (int *)0x0) goto LAB_0010809f;
    goto LAB_001073e0;
  case 9:
    local_a8[0] = 0.0;
    local_a8[1] = 0.0;
    local_a8[2] = 0.0;
    if ((uVar45 & 0x10000) == 0) {
      fVar32 = 0.0;
      lVar22 = 0;
      if (0xb < iVar47) {
        do {
          lVar23 = lVar22 + 4;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          fVar32 = (float)((uint)fVar32 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[1] = 0.0;
        do {
          lVar23 = lVar22 + 8;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[1] = (float)((uint)local_a8[1] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[2] = 0.0;
        do {
          lVar23 = lVar22 + 0xc;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[2] = (float)((uint)local_a8[2] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        local_a8[0] = fVar32;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0xc;
        }
        goto LAB_00108835;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x15f,
                       "Condition \"(size_t)len < sizeof(float) * 3\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    else {
      iVar28 = 0;
      dVar40 = 0.0;
      pbVar44 = local_130;
      if (0x17 < iVar47) {
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar28;
          iVar28 = iVar28 + 8;
          dVar40 = (double)((ulong)dVar40 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar28 != 0x40);
        pbVar44 = param_2 + 0xc;
        iVar47 = 0;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        pbVar44 = param_2 + 0x14;
        iVar47 = 0;
        local_a8[1] = (float)dVar41;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        local_a8[2] = (float)dVar41;
        local_a8[0] = (float)dVar40;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0x18;
        }
LAB_00108835:
        Variant::Variant((Variant *)&local_88,(Vector3 *)local_a8);
        cVar21 = Variant::needs_deinit[*(int *)param_1];
        goto joined_r0x00108859;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x156,
                       "Condition \"(size_t)len < sizeof(double) * 3\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    break;
  case 10:
    lVar22 = 0;
    fVar32 = 0.0;
    if (iVar47 < 0xc) {
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x16c,
                       "Condition \"len < 4 * 3\" is true. Returning: ERR_INVALID_DATA",0,0);
      break;
    }
    do {
      lVar23 = lVar22 + 4;
      cVar21 = (char)lVar22;
      lVar22 = lVar22 + 1;
      fVar32 = (float)((uint)fVar32 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
    } while (lVar22 != 4);
    lVar22 = 0;
    local_a8[1] = 0.0;
    do {
      lVar23 = lVar22 + 8;
      cVar21 = (char)lVar22;
      lVar22 = lVar22 + 1;
      local_a8[1] = (float)((uint)local_a8[1] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
    } while (lVar22 != 4);
    lVar22 = 0;
    local_a8[2] = 0.0;
    do {
      lVar23 = lVar22 + 0xc;
      cVar21 = (char)lVar22;
      lVar22 = lVar22 + 1;
      local_a8[2] = (float)((uint)local_a8[2] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
    } while (lVar22 != 4);
    local_a8[0] = fVar32;
    Variant::Variant((Variant *)&local_88,(Vector3i *)local_a8);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined8 *)(param_1 + 8) = uStack_80;
    *(ulong *)(param_1 + 0x10) = uStack_78;
    *(uint *)param_1 = local_88;
    if (param_4 != (int *)0x0) {
      *param_4 = *param_4 + 0xc;
    }
    goto LAB_001073e0;
  case 0xb:
    local_a8[0] = 1.0;
    local_a8[1] = 0.0;
    local_a8[2] = 0.0;
    local_a8[3] = 1.0;
    local_a8[4] = 0.0;
    local_a8[5] = 0.0;
    if ((uVar45 & 0x10000) == 0) {
      if (0x17 < iVar47) {
        pfVar31 = local_a8;
        pbVar44 = local_130;
        do {
          fVar32 = 0.0;
          lVar22 = 0;
          do {
            pbVar38 = pbVar44 + lVar22;
            cVar21 = (char)lVar22;
            lVar22 = lVar22 + 1;
            fVar32 = (float)((uint)fVar32 | (uint)*pbVar38 << (cVar21 * '\b' & 0x1fU));
          } while (lVar22 != 4);
          *pfVar31 = fVar32;
          fVar32 = 0.0;
          lVar22 = 0;
          do {
            lVar23 = lVar22 + 4;
            cVar21 = (char)lVar22;
            lVar22 = lVar22 + 1;
            fVar32 = (float)((uint)fVar32 | (uint)pbVar44[lVar23] << (cVar21 * '\b' & 0x1fU));
          } while (lVar22 != 4);
          pfVar31[1] = fVar32;
          pfVar31 = pfVar31 + 2;
          pbVar44 = pbVar44 + 8;
        } while (local_a8 + 6 != pfVar31);
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0x18;
        }
        goto LAB_00107bbc;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x1ae,
                       "Condition \"(size_t)len < sizeof(float) * 6\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    else {
      if (0x2f < iVar47) {
        pbVar44 = param_2 + 0xc;
        pfVar31 = local_a8;
        do {
          pbVar38 = pbVar44 + -8;
          iVar47 = 0;
          dVar40 = 0.0;
          do {
            bVar26 = *pbVar38;
            pbVar38 = pbVar38 + 1;
            bVar27 = (byte)iVar47;
            iVar47 = iVar47 + 8;
            dVar40 = (double)((ulong)dVar40 | (ulong)bVar26 << (bVar27 & 0x3f));
          } while (iVar47 != 0x40);
          iVar47 = 0;
          dVar41 = 0.0;
          *pfVar31 = (float)dVar40;
          pbVar38 = pbVar44;
          do {
            bVar26 = *pbVar38;
            pbVar38 = pbVar38 + 1;
            bVar27 = (byte)iVar47;
            iVar47 = iVar47 + 8;
            dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
          } while (iVar47 != 0x40);
          pbVar44 = pbVar44 + 0x10;
          pfVar31[1] = (float)dVar41;
          pfVar31 = pfVar31 + 2;
        } while (param_2 + 0x3c != pbVar44);
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0x30;
        }
LAB_00107bbc:
        local_158 = local_a8;
        Variant::Variant((Variant *)&local_88,(Transform2D *)local_158);
        cVar21 = Variant::needs_deinit[*(int *)param_1];
        goto joined_r0x00108859;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x1a3,
                       "Condition \"(size_t)len < sizeof(double) * 6\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    break;
  case 0xc:
    local_a8[0] = 0.0;
    local_a8[1] = 0.0;
    local_a8[2] = 0.0;
    local_a8[3] = 0.0;
    if ((uVar45 & 0x10000) == 0) {
      fVar32 = 0.0;
      lVar22 = 0;
      if (0xf < iVar47) {
        do {
          lVar23 = lVar22 + 4;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          fVar32 = (float)((uint)fVar32 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[1] = 0.0;
        do {
          lVar23 = lVar22 + 8;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[1] = (float)((uint)local_a8[1] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[2] = 0.0;
        do {
          lVar23 = lVar22 + 0xc;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[2] = (float)((uint)local_a8[2] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[3] = 0.0;
        do {
          lVar23 = lVar22 + 0x10;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[3] = (float)((uint)local_a8[3] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        local_a8[0] = fVar32;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0x10;
        }
        goto LAB_00107aad;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x185,
                       "Condition \"(size_t)len < sizeof(float) * 4\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    else {
      iVar28 = 0;
      dVar40 = 0.0;
      pbVar44 = local_130;
      if (0x1f < iVar47) {
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar28;
          iVar28 = iVar28 + 8;
          dVar40 = (double)((ulong)dVar40 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar28 != 0x40);
        pbVar44 = param_2 + 0xc;
        iVar47 = 0;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        pbVar44 = param_2 + 0x14;
        iVar47 = 0;
        local_a8[1] = (float)dVar41;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        pbVar44 = param_2 + 0x1c;
        iVar47 = 0;
        local_a8[2] = (float)dVar41;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        local_a8[3] = (float)dVar41;
        local_a8[0] = (float)dVar40;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0x20;
        }
LAB_00107aad:
        Variant::Variant((Variant *)&local_88,(Vector4 *)local_a8);
        cVar21 = Variant::needs_deinit[*(int *)param_1];
        goto joined_r0x00107089;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x17b,
                       "Condition \"(size_t)len < sizeof(double) * 4\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    break;
  case 0xd:
    lVar22 = 0;
    fVar32 = 0.0;
    if (0xf < iVar47) {
      do {
        lVar23 = lVar22 + 4;
        cVar21 = (char)lVar22;
        lVar22 = lVar22 + 1;
        fVar32 = (float)((uint)fVar32 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
      } while (lVar22 != 4);
      lVar22 = 0;
      local_a8[1] = 0.0;
      do {
        lVar23 = lVar22 + 8;
        cVar21 = (char)lVar22;
        lVar22 = lVar22 + 1;
        local_a8[1] = (float)((uint)local_a8[1] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
      } while (lVar22 != 4);
      lVar22 = 0;
      local_a8[2] = 0.0;
      do {
        lVar23 = lVar22 + 0xc;
        cVar21 = (char)lVar22;
        lVar22 = lVar22 + 1;
        local_a8[2] = (float)((uint)local_a8[2] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
      } while (lVar22 != 4);
      lVar22 = 0;
      local_a8[3] = 0.0;
      do {
        lVar23 = lVar22 + 0x10;
        cVar21 = (char)lVar22;
        lVar22 = lVar22 + 1;
        local_a8[3] = (float)((uint)local_a8[3] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
      } while (lVar22 != 4);
      local_a8[0] = fVar32;
      Variant::Variant((Variant *)&local_88,(Vector4i *)local_a8);
      cVar21 = Variant::needs_deinit[*(int *)param_1];
      goto joined_r0x001086ad;
    }
    _err_print_error("decode_variant","core/io/marshalls.cpp",0x193,
                     "Condition \"len < 4 * 4\" is true. Returning: ERR_INVALID_DATA",0,0);
    break;
  case 0xe:
    local_a8[0] = 0.0;
    local_a8[1] = 0.0;
    local_a8[2] = 0.0;
    local_a8[3] = 0.0;
    if ((uVar45 & 0x10000) == 0) {
      fVar32 = 0.0;
      lVar22 = 0;
      if (0xf < iVar47) {
        do {
          lVar23 = lVar22 + 4;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          fVar32 = (float)((uint)fVar32 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[1] = 0.0;
        do {
          lVar23 = lVar22 + 8;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[1] = (float)((uint)local_a8[1] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[2] = 0.0;
        do {
          lVar23 = lVar22 + 0xc;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[2] = (float)((uint)local_a8[2] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[3] = 0.0;
        do {
          lVar23 = lVar22 + 0x10;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[3] = (float)((uint)local_a8[3] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        local_a8[0] = fVar32;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0x10;
        }
        goto LAB_00107f6d;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x1c9,
                       "Condition \"(size_t)len < sizeof(float) * 4\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    else {
      iVar28 = 0;
      dVar40 = 0.0;
      pbVar44 = local_130;
      if (0x1f < iVar47) {
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar28;
          iVar28 = iVar28 + 8;
          dVar40 = (double)((ulong)dVar40 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar28 != 0x40);
        pbVar44 = param_2 + 0xc;
        iVar47 = 0;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        pbVar44 = param_2 + 0x14;
        iVar47 = 0;
        local_a8[1] = (float)dVar41;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        pbVar44 = param_2 + 0x1c;
        iVar47 = 0;
        local_a8[2] = (float)dVar41;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        local_a8[3] = (float)dVar41;
        local_a8[0] = (float)dVar40;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0x20;
        }
LAB_00107f6d:
        Variant::Variant((Variant *)&local_88,(Plane *)local_a8);
        cVar21 = Variant::needs_deinit[*(int *)param_1];
joined_r0x00107104:
        if (cVar21 != '\0') {
          Variant::_clear_internal();
        }
        *(undefined8 *)(param_1 + 8) = uStack_80;
        *(ulong *)(param_1 + 0x10) = uStack_78;
        *(uint *)param_1 = local_88;
        goto LAB_001073e0;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x1bf,
                       "Condition \"(size_t)len < sizeof(double) * 4\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    break;
  case 0xf:
    local_a8[0] = (float)__LC34;
    local_a8[1] = (float)((ulong)__LC34 >> 0x20);
    local_a8[2] = (float)_UNK_00112b08;
    local_a8[3] = (float)((ulong)_UNK_00112b08 >> 0x20);
    if ((uVar45 & 0x10000) == 0) {
      fVar32 = 0.0;
      lVar22 = 0;
      if (0xf < iVar47) {
        do {
          lVar23 = lVar22 + 4;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          fVar32 = (float)((uint)fVar32 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[1] = 0.0;
        do {
          lVar23 = lVar22 + 8;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[1] = (float)((uint)local_a8[1] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[2] = 0.0;
        do {
          lVar23 = lVar22 + 0xc;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[2] = (float)((uint)local_a8[2] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[3] = 0.0;
        do {
          lVar23 = lVar22 + 0x10;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[3] = (float)((uint)local_a8[3] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        local_a8[0] = fVar32;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0x10;
        }
        goto LAB_00107065;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x1e3,
                       "Condition \"(size_t)len < sizeof(float) * 4\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    else {
      iVar28 = 0;
      dVar40 = 0.0;
      pbVar44 = local_130;
      if (0x1f < iVar47) {
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar28;
          iVar28 = iVar28 + 8;
          dVar40 = (double)((ulong)dVar40 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar28 != 0x40);
        pbVar44 = param_2 + 0xc;
        iVar47 = 0;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        pbVar44 = param_2 + 0x14;
        iVar47 = 0;
        local_a8[1] = (float)dVar41;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        pbVar44 = param_2 + 0x1c;
        iVar47 = 0;
        local_a8[2] = (float)dVar41;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        local_a8[3] = (float)dVar41;
        local_a8[0] = (float)dVar40;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0x20;
        }
LAB_00107065:
        Variant::Variant((Variant *)&local_88,(Quaternion *)local_a8);
        cVar21 = Variant::needs_deinit[*(int *)param_1];
        goto joined_r0x00107089;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x1d9,
                       "Condition \"(size_t)len < sizeof(double) * 4\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    break;
  case 0x10:
    local_a8[0] = 0.0;
    local_a8[1] = 0.0;
    local_a8[2] = 0.0;
    local_a8[3] = 0.0;
    local_a8[4] = 0.0;
    local_a8[5] = 0.0;
    if ((uVar45 & 0x10000) == 0) {
      fVar32 = 0.0;
      lVar22 = 0;
      if (0x17 < iVar47) {
        do {
          lVar23 = lVar22 + 4;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          fVar32 = (float)((uint)fVar32 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[1] = 0.0;
        do {
          lVar23 = lVar22 + 8;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[1] = (float)((uint)local_a8[1] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[2] = 0.0;
        do {
          lVar23 = lVar22 + 0xc;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[2] = (float)((uint)local_a8[2] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[3] = 0.0;
        do {
          lVar23 = lVar22 + 0x10;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[3] = (float)((uint)local_a8[3] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[4] = 0.0;
        do {
          lVar23 = lVar22 + 0x14;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[4] = (float)((uint)local_a8[4] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        lVar22 = 0;
        local_a8[5] = 0.0;
        do {
          lVar23 = lVar22 + 0x18;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_a8[5] = (float)((uint)local_a8[5] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU)
                               );
        } while (lVar22 != 4);
        local_a8[0] = fVar32;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0x18;
        }
        goto LAB_00106f15;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x1ff,
                       "Condition \"(size_t)len < sizeof(float) * 6\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    else {
      iVar28 = 0;
      dVar40 = 0.0;
      pbVar44 = local_130;
      if (0x2f < iVar47) {
        do {
          bVar26 = (byte)iVar28;
          iVar28 = iVar28 + 8;
          dVar40 = (double)((ulong)dVar40 | (ulong)*pbVar44 << (bVar26 & 0x3f));
          pbVar44 = pbVar44 + 1;
        } while (iVar28 != 0x40);
        pbVar44 = param_2 + 0xc;
        iVar47 = 0;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        pbVar44 = param_2 + 0x14;
        iVar47 = 0;
        local_a8[1] = (float)dVar41;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        pbVar44 = param_2 + 0x1c;
        iVar47 = 0;
        local_a8[2] = (float)dVar41;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        pbVar44 = param_2 + 0x24;
        iVar47 = 0;
        local_a8[3] = (float)dVar41;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        pbVar44 = param_2 + 0x2c;
        iVar47 = 0;
        local_a8[4] = (float)dVar41;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        local_a8[5] = (float)dVar41;
        local_a8[0] = (float)dVar40;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0x30;
        }
LAB_00106f15:
        Variant::Variant((Variant *)&local_88,(AABB *)local_a8);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined8 *)(param_1 + 8) = uStack_80;
        *(ulong *)(param_1 + 0x10) = uStack_78;
        *(uint *)param_1 = local_88;
        goto LAB_001073e0;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",499,
                       "Condition \"(size_t)len < sizeof(double) * 6\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    break;
  case 0x11:
    local_68 = 0x3f800000;
    local_88 = _LC95;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_78 = (ulong)_LC95;
    uStack_70 = 0;
    if ((uVar45 & 0x10000) == 0) {
      if (0x23 < iVar47) {
        puVar35 = &local_88;
        iVar47 = 0;
        do {
          lVar22 = 0;
          do {
            uVar45 = 0;
            lVar23 = 0;
            do {
              lVar19 = lVar23 + lVar22 + 4;
              cVar21 = (char)lVar23;
              lVar23 = lVar23 + 1;
              uVar45 = uVar45 | (uint)param_2[lVar19] << (cVar21 * '\b' & 0x1fU);
            } while (lVar23 != 4);
            *(uint *)((long)puVar35 + lVar22) = uVar45;
            lVar22 = lVar22 + 4;
          } while (lVar22 != 0xc);
          iVar47 = iVar47 + 3;
          puVar35 = puVar35 + 3;
          param_2 = param_2 + 0xc;
        } while (iVar47 != 9);
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0x24;
        }
        goto LAB_00108310;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x21c,
                       "Condition \"(size_t)len < sizeof(float) * 9\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    else {
      if (0x47 < iVar47) {
        puVar35 = &local_88;
        iVar47 = 0;
        pbVar44 = local_130;
        do {
          lVar22 = 0;
          pbVar38 = pbVar44;
          do {
            iVar28 = 0;
            dVar40 = 0.0;
            pbVar33 = pbVar38;
            do {
              bVar26 = *pbVar33;
              pbVar33 = pbVar33 + 1;
              bVar27 = (byte)iVar28;
              iVar28 = iVar28 + 8;
              dVar40 = (double)((ulong)dVar40 | (ulong)bVar26 << (bVar27 & 0x3f));
            } while (iVar28 != 0x40);
            pbVar38 = pbVar38 + 8;
            puVar35[lVar22] = (uint)(float)dVar40;
            lVar22 = lVar22 + 1;
          } while (lVar22 != 3);
          iVar47 = iVar47 + 3;
          puVar35 = puVar35 + 3;
          pbVar44 = pbVar44 + 0x18;
        } while (iVar47 != 9);
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0x48;
        }
LAB_00108310:
        local_178 = (Variant *)&local_88;
        Variant::Variant((Variant *)local_a8,local_178);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(ulong *)(param_1 + 8) = CONCAT44(local_a8[3],local_a8[2]);
        *(ulong *)(param_1 + 0x10) = CONCAT44(local_a8[5],local_a8[4]);
        *(float *)param_1 = local_a8[0];
        goto LAB_001073e0;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x211,
                       "Condition \"(size_t)len < sizeof(double) * 9\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    break;
  case 0x12:
    local_68 = 0x3f800000;
    local_64 = 0;
    local_5c = 0.0;
    local_88 = _LC95;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_78 = (ulong)_LC95;
    uStack_70 = 0;
    if ((uVar45 & 0x10000) == 0) {
      if (0x2f < iVar47) {
        puVar35 = &local_88;
        iVar47 = 0;
        puVar43 = param_2;
        do {
          lVar22 = 0;
          do {
            uVar45 = 0;
            lVar23 = 0;
            do {
              lVar19 = lVar23 + lVar22 + 4;
              cVar21 = (char)lVar23;
              lVar23 = lVar23 + 1;
              uVar45 = uVar45 | (uint)puVar43[lVar19] << (cVar21 * '\b' & 0x1fU);
            } while (lVar23 != 4);
            *(uint *)((long)puVar35 + lVar22) = uVar45;
            lVar22 = lVar22 + 4;
          } while (lVar22 != 0xc);
          iVar47 = iVar47 + 3;
          puVar35 = puVar35 + 3;
          puVar43 = puVar43 + 0xc;
        } while (iVar47 != 9);
        uVar45 = 0;
        lVar22 = 0;
        do {
          lVar23 = lVar22 + 0x28;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          uVar45 = uVar45 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU);
        } while (lVar22 != 4);
        lVar22 = 0;
        uVar48 = 0;
        do {
          lVar23 = lVar22 + 0x2c;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          uVar48 = uVar48 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU);
        } while (lVar22 != 4);
        local_64 = CONCAT44(uVar48,uVar45);
        lVar22 = 0;
        local_5c = 0.0;
        do {
          lVar23 = lVar22 + 0x30;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_5c = (float)((uint)local_5c | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
        } while (lVar22 != 4);
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0x30;
        }
        goto LAB_0010821d;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x23b,
                       "Condition \"(size_t)len < sizeof(float) * 12\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    else {
      if (0x5f < iVar47) {
        puVar35 = &local_88;
        iVar47 = 0;
        pbVar44 = local_130;
        do {
          lVar22 = 0;
          pbVar38 = pbVar44;
          do {
            iVar28 = 0;
            dVar40 = 0.0;
            pbVar33 = pbVar38;
            do {
              bVar26 = *pbVar33;
              pbVar33 = pbVar33 + 1;
              bVar27 = (byte)iVar28;
              iVar28 = iVar28 + 8;
              dVar40 = (double)((ulong)dVar40 | (ulong)bVar26 << (bVar27 & 0x3f));
            } while (iVar28 != 0x40);
            pbVar38 = pbVar38 + 8;
            puVar35[lVar22] = (uint)(float)dVar40;
            lVar22 = lVar22 + 1;
          } while (lVar22 != 3);
          iVar47 = iVar47 + 3;
          puVar35 = puVar35 + 3;
          pbVar44 = pbVar44 + 0x18;
        } while (iVar47 != 9);
        pbVar44 = param_2 + 0x4c;
        iVar47 = 0;
        dVar40 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar40 = (double)((ulong)dVar40 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        pbVar44 = param_2 + 0x54;
        iVar47 = 0;
        dVar41 = 0.0;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        pbVar44 = param_2 + 0x5c;
        iVar47 = 0;
        dVar30 = 0.0;
        local_64 = CONCAT44((float)dVar41,(float)dVar40);
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          dVar30 = (double)((ulong)dVar30 | (ulong)bVar26 << (bVar27 & 0x3f));
        } while (iVar47 != 0x40);
        local_5c = (float)dVar30;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0x60;
        }
LAB_0010821d:
        local_178 = (Variant *)&local_88;
        Variant::Variant((Variant *)local_a8,local_178);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(ulong *)(param_1 + 8) = CONCAT44(local_a8[3],local_a8[2]);
        *(ulong *)(param_1 + 0x10) = CONCAT44(local_a8[5],local_a8[4]);
        *(float *)param_1 = local_a8[0];
        goto LAB_001073e0;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x22d,
                       "Condition \"(size_t)len < sizeof(double) * 12\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    break;
  case 0x13:
    Projection::Projection((Projection *)&local_88);
    if ((uVar45 & 0x10000) == 0) {
      if (iVar47 < 0x40) {
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x259,
                         "Condition \"(size_t)len < sizeof(float) * 16\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
        goto LAB_0010b88b;
      }
      iVar47 = 0;
      pPVar42 = (Projection *)&local_88;
      do {
        lVar22 = 0;
        do {
          uVar45 = 0;
          lVar23 = 0;
          do {
            lVar19 = lVar23 + lVar22 + 4;
            cVar21 = (char)lVar23;
            lVar23 = lVar23 + 1;
            uVar45 = uVar45 | (uint)param_2[lVar19] << (cVar21 * '\b' & 0x1fU);
          } while (lVar23 != 4);
          *(uint *)(pPVar42 + lVar22) = uVar45;
          lVar22 = lVar22 + 4;
        } while (lVar22 != 0x10);
        iVar47 = iVar47 + 4;
        pPVar42 = pPVar42 + 0x10;
        param_2 = param_2 + 0x10;
      } while (iVar47 != 0x10);
      if (param_4 != (int *)0x0) {
        *param_4 = *param_4 + 0x40;
      }
    }
    else {
      if (iVar47 < 0x80) {
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x24f,
                         "Condition \"(size_t)len < sizeof(double) * 16\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
LAB_0010b88b:
        Projection::~Projection((Projection *)&local_88);
        break;
      }
      pbVar44 = param_2 + 0x24;
      iVar47 = 0;
      pPVar42 = (Projection *)&local_88;
      do {
        pbVar38 = pbVar44 + -0x20;
        pPVar39 = pPVar42;
        do {
          pbVar33 = pbVar38;
          iVar28 = 0;
          dVar40 = 0.0;
          pbVar38 = pbVar33;
          do {
            bVar26 = *pbVar38;
            pbVar38 = pbVar38 + 1;
            bVar27 = (byte)iVar28;
            iVar28 = iVar28 + 8;
            dVar40 = (double)((ulong)dVar40 | (ulong)bVar26 << (bVar27 & 0x3f));
          } while (iVar28 != 0x40);
          *(float *)pPVar39 = (float)dVar40;
          pbVar38 = pbVar33 + 8;
          pPVar39 = pPVar39 + 4;
        } while (pbVar33 + 8 != pbVar44);
        iVar47 = iVar47 + 4;
        pbVar44 = pbVar33 + 0x28;
        pPVar42 = pPVar42 + 0x10;
      } while (iVar47 != 0x10);
      if (param_4 != (int *)0x0) {
        *param_4 = *param_4 + 0x80;
      }
    }
    Variant::Variant((Variant *)local_a8,(Projection *)&local_88);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(float *)param_1 = local_a8[0];
    *(ulong *)(param_1 + 8) = CONCAT44(local_a8[3],local_a8[2]);
    *(ulong *)(param_1 + 0x10) = CONCAT44(local_a8[5],local_a8[4]);
    Projection::~Projection((Projection *)&local_88);
    goto LAB_001073e0;
  case 0x14:
    lVar22 = 0;
    fVar32 = 0.0;
    if (iVar47 < 0x10) {
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x26a,
                       "Condition \"len < 4 * 4\" is true. Returning: ERR_INVALID_DATA",0,0);
      break;
    }
    do {
      lVar23 = lVar22 + 4;
      cVar21 = (char)lVar22;
      lVar22 = lVar22 + 1;
      fVar32 = (float)((uint)fVar32 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
    } while (lVar22 != 4);
    lVar22 = 0;
    local_a8[1] = 0.0;
    do {
      lVar23 = lVar22 + 8;
      cVar21 = (char)lVar22;
      lVar22 = lVar22 + 1;
      local_a8[1] = (float)((uint)local_a8[1] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
    } while (lVar22 != 4);
    lVar22 = 0;
    local_a8[2] = 0.0;
    do {
      lVar23 = lVar22 + 0xc;
      cVar21 = (char)lVar22;
      lVar22 = lVar22 + 1;
      local_a8[2] = (float)((uint)local_a8[2] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
    } while (lVar22 != 4);
    lVar22 = 0;
    local_a8[3] = 0.0;
    do {
      lVar23 = lVar22 + 0x10;
      cVar21 = (char)lVar22;
      lVar22 = lVar22 + 1;
      local_a8[3] = (float)((uint)local_a8[3] | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU));
    } while (lVar22 != 4);
    local_a8[0] = fVar32;
    Variant::Variant((Variant *)&local_88,(Color *)local_a8);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined8 *)(param_1 + 8) = uStack_80;
    *(ulong *)(param_1 + 0x10) = uStack_78;
    *(uint *)param_1 = local_88;
    if (param_4 == (int *)0x0) goto LAB_001073e0;
LAB_0010809f:
    *param_4 = *param_4 + 0x10;
    goto LAB_001073e0;
  case 0x15:
    local_108 = 0;
    iVar47 = _decode_string(&local_130,&local_138,param_4,(String *)&local_108);
    uVar36 = local_108;
    if (iVar47 != 0) {
      if (local_108 != 0) {
        LOCK();
        plVar2 = (long *)(local_108 - 0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_108 = 0;
          Memory::free_static((void *)(uVar36 - 0x10),false);
        }
      }
      goto LAB_00106579;
    }
    StringName::StringName((StringName *)&local_e8,(String *)&local_108,false);
    Variant::Variant((Variant *)&local_88,(StringName *)&local_e8);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    bVar49 = StringName::configured != '\0';
    *(uint *)param_1 = local_88;
    *(undefined8 *)(param_1 + 8) = uStack_80;
    *(ulong *)(param_1 + 0x10) = uStack_78;
    if ((bVar49) && (local_e8 != (Object *)0x0)) {
      StringName::unref();
    }
    uVar36 = local_108;
    if (local_108 != 0) {
      LOCK();
      plVar2 = (long *)(local_108 - 0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(uVar36 - 0x10),false);
      }
    }
    goto LAB_001073e0;
  case 0x16:
    lVar22 = 0;
    uVar45 = 0;
    if (iVar47 < 4) {
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x281,
                       "Condition \"len < 4\" is true. Returning: ERR_INVALID_DATA",0,0);
    }
    else {
      do {
        lVar23 = lVar22 + 4;
        cVar21 = (char)lVar22;
        lVar22 = lVar22 + 1;
        uVar45 = uVar45 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU);
      } while (lVar22 != 4);
      if ((int)uVar45 < 0) {
        if (iVar47 < 0xc) {
          iVar47 = 0x1e;
          _err_print_error("decode_variant","core/io/marshalls.cpp",0x286,
                           "Condition \"len < 12\" is true. Returning: ERR_INVALID_DATA",0,0);
          goto LAB_00106579;
        }
        lVar22 = 0;
        uVar48 = 0;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = local_100._8_8_;
        local_100._0_16_ = auVar12 << 0x40;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = local_e0._8_8_;
        local_e0._0_16_ = auVar13 << 0x40;
        do {
          lVar23 = lVar22 + 8;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          bVar26 = cVar21 * '\b' & 0x1f;
          uVar48 = uVar48 | (uint)param_2[lVar23] << bVar26;
        } while (lVar22 != 4);
        lVar22 = 0;
        uVar29 = 0 << bVar26;
        do {
          lVar23 = lVar22 + 0xc;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          uVar29 = uVar29 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU);
        } while (lVar22 != 4);
        local_138 = param_3 + -0x10;
        local_130 = param_2 + 0x10;
        uVar48 = ((uVar48 + 1) - (uint)((uVar29 & 2) == 0)) + (uVar45 & 0x7fffffff);
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 0xc;
        }
        if (uVar48 != 0) {
          uVar46 = 0;
          do {
            local_118 = (Object *)0x0;
            iVar47 = _decode_string(&local_130,&local_138,param_4,(String *)&local_118);
            pOVar34 = local_118;
            if (iVar47 != 0) {
              if (local_118 != (Object *)0x0) {
                LOCK();
                pOVar25 = local_118 + -0x10;
                *(long *)pOVar25 = *(long *)pOVar25 + -1;
                UNLOCK();
                if (*(long *)pOVar25 == 0) {
                  local_118 = (Object *)0x0;
                  Memory::free_static(pOVar34 + -0x10,false);
                }
              }
              CowData<StringName>::_unref((CowData<StringName> *)local_e0);
              CowData<StringName>::_unref((CowData<StringName> *)local_100);
              goto LAB_00106579;
            }
            if (uVar46 < (uVar45 & 0x7fffffff)) {
              StringName::StringName((StringName *)&local_110,(String *)&local_118,false);
              Vector<StringName>::push_back((Vector<StringName> *)&local_108);
            }
            else {
              StringName::StringName((StringName *)&local_110,(String *)&local_118,false);
              Vector<StringName>::push_back((Vector<StringName> *)&local_e8);
            }
            if ((StringName::configured != '\0') && (local_110 != 0)) {
              StringName::unref();
            }
            pOVar34 = local_118;
            if (local_118 != (Object *)0x0) {
              LOCK();
              pOVar25 = local_118 + -0x10;
              *(long *)pOVar25 = *(long *)pOVar25 + -1;
              UNLOCK();
              if (*(long *)pOVar25 == 0) {
                local_118 = (Object *)0x0;
                Memory::free_static(pOVar34 + -0x10,false);
              }
            }
            uVar46 = uVar46 + 1;
          } while (uVar48 != uVar46);
        }
        local_180 = (NodePath *)&local_110;
        NodePath::NodePath(local_180,(Vector *)&local_108,(Vector *)&local_e8,
                           (bool)((byte)uVar29 & 1));
        Variant::Variant((Variant *)&local_88,local_180);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(uint *)param_1 = local_88;
        *(undefined8 *)(param_1 + 8) = uStack_80;
        *(ulong *)(param_1 + 0x10) = uStack_78;
        NodePath::~NodePath(local_180);
        CowData<StringName>::_unref((CowData<StringName> *)local_e0);
        CowData<StringName>::_unref((CowData<StringName> *)local_100);
        goto LAB_001073e0;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x2ad,
                       "Method/function failed. Returning: ERR_INVALID_DATA",0,0);
    }
    break;
  case 0x17:
    iVar28 = 0;
    pOVar34 = (Object *)0x0;
    pbVar44 = local_130;
    if (iVar47 < 8) {
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x2b2,
                       "Condition \"len < 8\" is true. Returning: ERR_INVALID_DATA",0,0);
      break;
    }
    do {
      bVar26 = (byte)iVar28;
      iVar28 = iVar28 + 8;
      pOVar34 = (Object *)((ulong)pOVar34 | (ulong)*pbVar44 << (bVar26 & 0x3f));
      pbVar44 = pbVar44 + 1;
    } while (iVar28 != 0x40);
    if (param_4 != (int *)0x0) {
      *param_4 = *param_4 + 8;
    }
    local_e8 = pOVar34;
    Variant::Variant((Variant *)&local_88,(RID *)&local_e8);
    cVar21 = Variant::needs_deinit[*(int *)param_1];
joined_r0x00107089:
    if (cVar21 != '\0') {
      Variant::_clear_internal();
    }
    *(undefined8 *)(param_1 + 8) = uStack_80;
    *(ulong *)(param_1 + 0x10) = uStack_78;
    *(uint *)param_1 = local_88;
    goto LAB_001073e0;
  case 0x18:
    if ((uVar45 & 0x10000) != 0) {
      iVar28 = 0;
      uVar36 = 0;
      pbVar44 = local_130;
      if (7 < iVar47) {
        do {
          bVar26 = (byte)iVar28;
          iVar28 = iVar28 + 8;
          uVar36 = uVar36 | (ulong)*pbVar44 << (bVar26 & 0x3f);
          pbVar44 = pbVar44 + 1;
        } while (iVar28 != 0x40);
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 8;
        }
        if (uVar36 != 0) {
          local_e8 = (Object *)0x0;
          Ref<EncodedObjectAsID>::instantiate<>((Ref<EncodedObjectAsID> *)&local_e8);
          pOVar34 = local_e8;
          *(ulong *)(local_e8 + 0x180) = uVar36;
          Variant::Variant((Variant *)&local_88,local_e8);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          *(uint *)param_1 = local_88;
          *(undefined8 *)(param_1 + 8) = uStack_80;
          *(ulong *)(param_1 + 0x10) = uStack_78;
          cVar21 = RefCounted::unreference();
          if ((cVar21 != '\0') && (cVar21 = predelete_handler(pOVar34), cVar21 != '\0')) {
            (**(code **)(*(long *)pOVar34 + 0x140))(pOVar34);
            Memory::free_static(pOVar34,false);
          }
          goto LAB_001073e0;
        }
        Variant::Variant((Variant *)&local_88,(Object *)0x0);
        cVar21 = Variant::needs_deinit[*(int *)param_1];
        goto joined_r0x00107104;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x2bd,
                       "Condition \"len < 8\" is true. Returning: ERR_INVALID_DATA",0,0);
      break;
    }
    if (!param_5) {
      iVar47 = 4;
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x2cd,
                       "Condition \"!p_allow_objects\" is true. Returning: ERR_UNAUTHORIZED",0,0);
      goto LAB_00106579;
    }
    local_128 = 0;
    iVar47 = _decode_string(&local_130,&local_138,param_4,(String *)&local_128);
    if (iVar47 != 0) goto LAB_0010a1ee;
    if ((local_128 != 0) && (1 < *(uint *)(local_128 + -8))) {
      StringName::StringName((StringName *)&local_e8,(String *)&local_128,false);
      cVar21 = ClassDB::can_instantiate((StringName *)&local_e8);
      if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
        StringName::unref();
      }
      if (cVar21 == '\0') {
        iVar47 = 0x1e;
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x2d8,
                         "Condition \"!ClassDB::can_instantiate(str)\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
      }
      else {
        StringName::StringName((StringName *)&local_e8,(String *)&local_128,false);
        pSVar24 = (StringName *)ClassDB::instantiate((StringName *)&local_e8);
        if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
          StringName::unref();
        }
        if (pSVar24 == (StringName *)0x0) {
          iVar47 = 2;
          _err_print_error("decode_variant","core/io/marshalls.cpp",0x2db,
                           "Parameter \"obj\" is null.",0,0);
        }
        else {
          local_c8 = 0;
          local_c0 = (undefined1  [16])0x0;
          pOVar25 = (Object *)__dynamic_cast(pSVar24,&Object::typeinfo,&RefCounted::typeinfo,0);
          pOVar34 = (Object *)pSVar24;
          if (pOVar25 == (Object *)0x0) {
LAB_0010ba91:
            Variant::Variant((Variant *)&local_88,pOVar34);
            Variant::operator=((Variant *)&local_c8,(Variant *)&local_88);
            if (Variant::needs_deinit[(int)local_88] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            cVar21 = RefCounted::init_ref();
            if (cVar21 == '\0') {
              pOVar34 = (Object *)0x0;
              goto LAB_0010ba91;
            }
            Variant::Variant((Variant *)&local_88,pOVar25);
            Variant::operator=((Variant *)&local_c8,(Variant *)&local_88);
            if (Variant::needs_deinit[(int)local_88] != '\0') {
              Variant::_clear_internal();
            }
            cVar21 = RefCounted::unreference();
            if ((cVar21 != '\0') && (cVar21 = predelete_handler(pOVar25), cVar21 != '\0')) {
              (**(code **)(*(long *)pOVar25 + 0x140))(pOVar25);
              Memory::free_static(pOVar25,false);
            }
          }
          local_178 = (Variant *)&local_88;
          if (3 < local_138) {
            lVar22 = 0;
            uVar45 = 0;
            do {
              pbVar44 = local_130 + lVar22;
              cVar21 = (char)lVar22;
              lVar22 = lVar22 + 1;
              uVar45 = uVar45 | (uint)*pbVar44 << (cVar21 * '\b' & 0x1fU);
            } while (lVar22 != 4);
            local_130 = local_130 + 4;
            local_138 = local_138 + -4;
            if (param_4 != (int *)0x0) {
              *param_4 = *param_4 + 4;
            }
            uVar48 = 0;
            if (0 < (int)uVar45) {
              do {
                lVar22 = local_128;
                if (local_128 != 0) {
                  LOCK();
                  plVar2 = (long *)(local_128 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_128 = 0;
                    Memory::free_static((void *)(lVar22 + -0x10),false);
                  }
                  local_128 = 0;
                }
                iVar47 = _decode_string(&local_130,&local_138,param_4,(String *)&local_128);
                pbVar44 = local_130;
                iVar28 = local_138;
                if (iVar47 != 0) goto LAB_0010b4c6;
                uVar36 = (ulong)(param_6 + 1U);
                local_a8[0] = 0.0;
                local_a8[1] = 0.0;
                local_a8[2] = 0.0;
                local_a8[3] = 0.0;
                local_a8[4] = 0.0;
                local_a8[5] = 0.0;
                iVar47 = decode_variant((Variant *)local_a8,local_130,local_138,&local_134,true,
                                        param_6 + 1U);
                if (iVar47 != 0) {
LAB_0010b4af:
                  if (Variant::needs_deinit[(int)local_a8[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  goto LAB_0010b4c6;
                }
                local_130 = pbVar44 + local_134;
                local_138 = iVar28 - local_134;
                if (param_4 != (int *)0x0) {
                  *param_4 = *param_4 + local_134;
                }
                cVar21 = String::operator==((String *)&local_128,"script");
                if ((cVar21 != '\0') && (local_a8[0] != 0.0)) {
                  if (local_a8[0] == 5.60519e-45) {
                    Variant::operator_cast_to_String((Variant *)&local_120);
                    if (((local_120 == 0) || (*(uint *)(local_120 + -8) < 2)) ||
                       (cVar21 = String::begins_with((char *)&local_120), cVar21 == '\0')) {
LAB_0010b3fc:
                      local_108 = 0;
                      if (local_120 != 0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_108,(CowData *)&local_120);
                      }
                      local_110 = 0;
                      String::parse_latin1((String *)&local_110,"Invalid script path \"%s\".");
                      vformat<String>((StringName *)&local_e8,(String *)&local_110,
                                      (CowData<char32_t> *)&local_108);
                      _err_print_error("decode_variant","core/io/marshalls.cpp",0x306,
                                       "Condition \"path.is_empty() || !path.begins_with(\"res://\") || !ResourceLoader::exists(path, \"Script\")\" is true. Returning: ERR_INVALID_DATA"
                                       ,(StringName *)&local_e8,0,0,extraout_RDX);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
                    }
                    else {
                      local_e8 = (Object *)0x0;
                      String::parse_latin1((String *)&local_e8,"Script");
                      cVar21 = ResourceLoader::exists((String *)&local_120,(String *)&local_e8);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                      if (cVar21 == '\0') goto LAB_0010b3fc;
                      local_108 = 0;
                      String::parse_latin1((String *)&local_108,"Script");
                      ResourceLoader::load
                                ((StringName *)&local_e8,(Variant *)&local_120,(String *)&local_108,
                                 1,0);
                      local_118 = (Object *)0x0;
                      Ref<Script>::operator=((Ref<Script> *)&local_118,(Ref *)local_e8);
                      Ref<Resource>::unref((Ref<Resource> *)&local_e8);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
                      if (local_118 != (Object *)0x0) {
                        pcVar3 = *(code **)(*(long *)pSVar24 + 0x90);
                        Variant::Variant(local_178,local_118);
                        (*pcVar3)(pSVar24);
                        if (Variant::needs_deinit[(int)local_88] != '\0') {
                          Variant::_clear_internal();
                        }
                        Ref<Script>::unref((Ref<Script> *)&local_118);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
                        goto LAB_0010b536;
                      }
                      local_108 = 0;
                      if (local_120 != 0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_108,(CowData *)&local_120);
                      }
                      local_110 = 0;
                      String::parse_latin1
                                ((String *)&local_110,"Can\'t load script at path \"%s\".");
                      vformat<String>((StringName *)&local_e8,(String *)&local_110,
                                      (String *)&local_108);
                      _err_print_error("decode_variant","core/io/marshalls.cpp",0x308,
                                       "Condition \"script.is_null()\" is true. Returning: ERR_INVALID_DATA"
                                       ,(StringName *)&local_e8,0,0,uVar48);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
                      Ref<Script>::unref((Ref<Script> *)&local_118);
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
                  }
                  else {
                    _err_print_error("decode_variant","core/io/marshalls.cpp",0x304,
                                     "Condition \"value.get_type() != Variant::STRING\" is true. Returning: ERR_INVALID_DATA"
                                     ,
                                     "Invalid value for \"script\" property, expected script path as String."
                                     ,0,0,uVar36);
                  }
                  iVar47 = 0x1e;
                  goto LAB_0010b4af;
                }
                StringName::StringName((StringName *)&local_e8,(String *)&local_128,false);
                Object::set(pSVar24,(Variant *)&local_e8,(bool *)local_a8);
                if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
                  StringName::unref();
                }
LAB_0010b536:
                if (Variant::needs_deinit[(int)local_a8[0]] != '\0') {
                  Variant::_clear_internal();
                }
                uVar48 = uVar48 + 1;
              } while (uVar45 != uVar48);
            }
            Variant::operator=(param_1,(Variant *)&local_c8);
            if (Variant::needs_deinit[(int)local_c8] != '\0') {
              Variant::_clear_internal();
            }
            goto LAB_001097ff;
          }
          iVar47 = 0x1e;
          _err_print_error("decode_variant","core/io/marshalls.cpp",0x2e7,
                           "Condition \"len < 4\" is true. Returning: ERR_INVALID_DATA",0,0);
LAB_0010b4c6:
          if (Variant::needs_deinit[(int)local_c8] != '\0') {
            Variant::_clear_internal();
          }
        }
      }
LAB_0010a1ee:
      lVar22 = local_128;
      if (local_128 != 0) {
        LOCK();
        plVar2 = (long *)(local_128 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_128 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      goto LAB_00106579;
    }
    Variant::Variant((Variant *)&local_88,(Object *)0x0);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(uint *)param_1 = local_88;
    *(undefined8 *)(param_1 + 8) = uStack_80;
    *(ulong *)(param_1 + 0x10) = uStack_78;
LAB_001097ff:
    lVar22 = local_128;
    if (local_128 != 0) {
      LOCK();
      plVar2 = (long *)(local_128 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_128 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    goto LAB_001073e0;
  case 0x19:
    local_e8 = (Object *)0x0;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = local_e0._8_8_;
    local_e0._0_16_ = auVar17 << 0x40;
    Variant::Variant((Variant *)&local_88,(Callable *)&local_e8);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(uint *)param_1 = local_88;
    *(undefined8 *)(param_1 + 8) = uStack_80;
    *(ulong *)(param_1 + 0x10) = uStack_78;
    Callable::~Callable((Callable *)&local_e8);
    goto LAB_001073e0;
  case 0x1a:
    local_110 = 0;
    iVar47 = _decode_string(&local_130,&local_138,param_4,(String *)&local_110);
    if (iVar47 == 0) {
      if (7 < local_138) {
        uVar36 = 0;
        iVar47 = 0;
        pbVar44 = local_130;
        do {
          bVar26 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          bVar27 = (byte)iVar47;
          iVar47 = iVar47 + 8;
          uVar36 = uVar36 | (ulong)bVar26 << (bVar27 & 0x3f);
        } while (iVar47 != 0x40);
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 8;
        }
        StringName::StringName((StringName *)&local_108,(String *)&local_110,false);
        Signal::Signal((Signal *)&local_e8,uVar36,(StringName *)&local_108);
        Variant::Variant((Variant *)&local_88,(Signal *)&local_e8);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        bVar49 = StringName::configured != '\0';
        *(uint *)param_1 = local_88;
        *(undefined8 *)(param_1 + 8) = uStack_80;
        *(ulong *)(param_1 + 0x10) = uStack_78;
        if ((bVar49) &&
           (((local_e8 == (Object *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
            (local_108 != 0)))) {
          StringName::unref();
        }
        uVar36 = local_110;
        if (local_110 != 0) {
          LOCK();
          plVar2 = (long *)(local_110 - 0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_110 = 0;
            Memory::free_static((void *)(uVar36 - 0x10),false);
          }
        }
        goto LAB_001073e0;
      }
      iVar47 = 0x1e;
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x31e,
                       "Condition \"len < 8\" is true. Returning: ERR_INVALID_DATA",0,0);
    }
    uVar36 = local_110;
    if (local_110 != 0) {
      LOCK();
      plVar2 = (long *)(local_110 - 0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_110 = 0;
        Memory::free_static((void *)(uVar36 - 0x10),false);
      }
    }
    goto LAB_00106579;
  case 0x1b:
    local_108 = local_108 & 0xffffffff00000000;
    local_100._0_16_ = (undefined1  [16])0x0;
    iVar47 = _decode_container_type(&local_130,&local_138,param_4,param_5,uVar45 >> 0x10 & 3);
    if (iVar47 == 0) {
      local_e8 = (Object *)((ulong)local_e8 & 0xffffffff00000000);
      local_e0._0_16_ = (undefined1  [16])0x0;
      iVar47 = _decode_container_type(&local_130,&local_138,param_4,param_5,uVar45 >> 0x12 & 3);
      if (iVar47 == 0) {
        if (3 < local_138) {
          lVar22 = 0;
          local_148 = 0;
          do {
            pbVar44 = local_130 + lVar22;
            cVar21 = (char)lVar22;
            lVar22 = lVar22 + 1;
            local_148 = local_148 | (uint)*pbVar44 << (cVar21 * '\b' & 0x1fU);
          } while (lVar22 != 4);
          pbVar44 = local_130 + 4;
          iVar28 = local_138 + -4;
          local_148 = local_148 & 0x7fffffff;
          if (param_4 != (int *)0x0) {
            *param_4 = *param_4 + 4;
          }
          local_138 = iVar28;
          local_130 = pbVar44;
          Dictionary::Dictionary((Dictionary *)&local_110);
          if ((int)local_108 != 0 || (int)local_e8 != 0) {
            Dictionary::set_typed((ContainerType *)&local_110,(ContainerType *)&local_108);
          }
          if (local_148 != 0) {
            iVar1 = param_6 + 1;
            uVar45 = 0;
            do {
              local_a8[0] = 0.0;
              local_a8[1] = 0.0;
              local_88 = 0;
              uStack_84 = 0;
              local_a8[2] = 0.0;
              local_a8[3] = 0.0;
              local_a8[4] = 0.0;
              local_a8[5] = 0.0;
              uStack_80 = 0;
              uStack_78 = 0;
              iVar47 = decode_variant((Variant *)local_a8,pbVar44,iVar28,(int *)&local_118,param_5,
                                      iVar1);
              if (iVar47 != 0) {
                _err_print_error("decode_variant","core/io/marshalls.cpp",0x352,
                                 "Condition \"err != OK\" is true. Returning: err",
                                 "Error when trying to decode Variant.",0,0);
LAB_00108e39:
                if (Variant::needs_deinit[(int)local_88] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[(int)local_a8[0]] != '\0') {
                  Variant::_clear_internal();
                }
                Dictionary::~Dictionary((Dictionary *)&local_110);
                goto LAB_00108e71;
              }
              iVar28 = iVar28 - (int)local_118;
              pbVar44 = pbVar44 + (int)local_118;
              local_138 = iVar28;
              if (param_4 == (int *)0x0) {
                iVar47 = decode_variant((Variant *)&local_88,pbVar44,iVar28,(int *)&local_118,
                                        param_5,iVar1);
                if (iVar47 != 0) goto LAB_0010a9d0;
              }
              else {
                *param_4 = *param_4 + (int)local_118;
                iVar47 = decode_variant((Variant *)&local_88,pbVar44,iVar28,(int *)&local_118,
                                        param_5,iVar1);
                if (iVar47 != 0) {
LAB_0010a9d0:
                  _err_print_error("decode_variant","core/io/marshalls.cpp",0x35b,
                                   "Condition \"err != OK\" is true. Returning: err",
                                   "Error when trying to decode Variant.",0,0);
                  goto LAB_00108e39;
                }
                *param_4 = *param_4 + (int)local_118;
              }
              local_130 = pbVar44 + (int)local_118;
              local_138 = iVar28 - (int)local_118;
              this_00 = (Variant *)Dictionary::operator[]((Variant *)&local_110);
              Variant::operator=(this_00,(Variant *)&local_88);
              if (Variant::needs_deinit[(int)local_88] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[(int)local_a8[0]] != '\0') {
                Variant::_clear_internal();
              }
              uVar45 = uVar45 + 1;
              pbVar44 = local_130;
              iVar28 = local_138;
            } while (local_148 != uVar45);
          }
          local_178 = (Variant *)&local_88;
          Variant::Variant(local_178,(Dictionary *)&local_110);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          *(uint *)param_1 = local_88;
          *(undefined8 *)(param_1 + 8) = uStack_80;
          *(ulong *)(param_1 + 0x10) = uStack_78;
          Dictionary::~Dictionary((Dictionary *)&local_110);
          if ((local_e0._8_8_ != 0) && (cVar21 = RefCounted::unreference(), cVar21 != '\0')) {
            uVar20 = local_e0._8_8_;
            cVar21 = predelete_handler((Object *)local_e0._8_8_);
            if (cVar21 != '\0') {
              (**(code **)(*(long *)uVar20 + 0x140))(uVar20);
              Memory::free_static((void *)uVar20,false);
            }
          }
          if ((StringName::configured != '\0') && (local_e0._0_8_ != 0)) {
            StringName::unref();
          }
          if ((local_100._8_8_ != 0) && (cVar21 = RefCounted::unreference(), cVar21 != '\0')) {
            uVar20 = local_100._8_8_;
            cVar21 = predelete_handler((Object *)local_100._8_8_);
            if (cVar21 != '\0') {
              (**(code **)(*(long *)uVar20 + 0x140))(uVar20);
              Memory::free_static((void *)uVar20,false);
            }
          }
          if ((StringName::configured != '\0') && (local_100._0_8_ != 0)) {
            StringName::unref();
          }
          goto LAB_001073e0;
        }
        iVar47 = 0x1e;
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x33b,
                         "Condition \"len < 4\" is true. Returning: ERR_INVALID_DATA",0,0);
      }
LAB_00108e71:
      if ((local_e0._8_8_ != 0) && (cVar21 = RefCounted::unreference(), cVar21 != '\0')) {
        uVar20 = local_e0._8_8_;
        cVar21 = predelete_handler((Object *)local_e0._8_8_);
        if (cVar21 != '\0') {
          (**(code **)(*(long *)uVar20 + 0x140))(uVar20);
          Memory::free_static((void *)uVar20,false);
        }
      }
      if ((StringName::configured != '\0') && (local_e0._0_8_ != 0)) {
        StringName::unref();
      }
    }
    if ((local_100._8_8_ != 0) && (cVar21 = RefCounted::unreference(), cVar21 != '\0')) {
      uVar20 = local_100._8_8_;
      cVar21 = predelete_handler((Object *)local_100._8_8_);
      if (cVar21 != '\0') {
        (**(code **)(*(long *)uVar20 + 0x140))(uVar20);
        Memory::free_static((void *)uVar20,false);
      }
    }
    if ((StringName::configured != '\0') && (local_100._0_8_ != 0)) {
      StringName::unref();
    }
    goto LAB_00106579;
  case 0x1c:
    local_e8 = (Object *)((ulong)local_e8 & 0xffffffff00000000);
    local_e0._0_16_ = (undefined1  [16])0x0;
    iVar47 = _decode_container_type(&local_130,&local_138,param_4,param_5,uVar45 >> 0x10 & 3);
    if (iVar47 == 0) {
      if (3 < local_138) {
        lVar22 = 0;
        local_188 = 0;
        do {
          pbVar44 = local_130 + lVar22;
          cVar21 = (char)lVar22;
          lVar22 = lVar22 + 1;
          local_188 = local_188 | (uint)*pbVar44 << (cVar21 * '\b' & 0x1fU);
        } while (lVar22 != 4);
        pbVar44 = local_130 + 4;
        iVar28 = local_138 + -4;
        local_188 = local_188 & 0x7fffffff;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 4;
        }
        local_138 = iVar28;
        local_130 = pbVar44;
        Array::Array((Array *)&local_108);
        if ((int)local_e8 != 0) {
          Array::set_typed((ContainerType *)&local_108);
        }
        if (local_188 != 0) {
          uVar45 = 0;
          do {
            local_110 = local_110 & 0xffffffff00000000;
            local_88 = 0;
            uStack_84 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            iVar47 = decode_variant((Variant *)&local_88,pbVar44,iVar28,(int *)&local_110,param_5,
                                    param_6 + 1);
            if (iVar47 != 0) {
              _err_print_error("decode_variant","core/io/marshalls.cpp",0x38a,
                               "Condition \"err != OK\" is true. Returning: err",
                               "Error when trying to decode Variant.",0,0);
              if (Variant::needs_deinit[(int)local_88] != '\0') {
                Variant::_clear_internal();
              }
              Array::~Array((Array *)&local_108);
              goto LAB_00107e0a;
            }
            iVar47 = (int)local_110;
            pbVar44 = pbVar44 + (int)local_110;
            iVar28 = iVar28 - (int)local_110;
            local_138 = iVar28;
            local_130 = pbVar44;
            Array::push_back((Variant *)&local_108);
            if (param_4 != (int *)0x0) {
              *param_4 = *param_4 + iVar47;
            }
            if (Variant::needs_deinit[(int)local_88] != '\0') {
              Variant::_clear_internal();
            }
            uVar45 = uVar45 + 1;
          } while (local_188 != uVar45);
        }
        local_178 = (Variant *)&local_88;
        Variant::Variant(local_178,(Array *)&local_108);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(uint *)param_1 = local_88;
        *(undefined8 *)(param_1 + 8) = uStack_80;
        *(ulong *)(param_1 + 0x10) = uStack_78;
        Array::~Array((Array *)&local_108);
        if ((local_e0._8_8_ != 0) && (cVar21 = RefCounted::unreference(), cVar21 != '\0')) {
          uVar20 = local_e0._8_8_;
          cVar21 = predelete_handler((Object *)local_e0._8_8_);
          if (cVar21 != '\0') {
            (**(code **)(*(long *)uVar20 + 0x140))(uVar20);
            Memory::free_static((void *)uVar20,false);
          }
        }
        if ((StringName::configured != '\0') && (local_e0._0_8_ != 0)) {
          StringName::unref();
        }
        goto LAB_001073e0;
      }
      iVar47 = 0x1e;
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x374,
                       "Condition \"len < 4\" is true. Returning: ERR_INVALID_DATA",0,0);
    }
LAB_00107e0a:
    if ((local_e0._8_8_ != 0) && (cVar21 = RefCounted::unreference(), cVar21 != '\0')) {
      uVar20 = local_e0._8_8_;
      cVar21 = predelete_handler((Object *)local_e0._8_8_);
      if (cVar21 != '\0') {
        (**(code **)(*(long *)uVar20 + 0x140))(uVar20);
        Memory::free_static((void *)uVar20,false);
      }
    }
    if ((StringName::configured != '\0') && (local_e0._0_8_ != 0)) {
      StringName::unref();
    }
    goto LAB_00106579;
  case 0x1d:
    lVar22 = 0;
    uVar48 = 0;
    if (iVar47 < 4) {
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x399,
                       "Condition \"len < 4\" is true. Returning: ERR_INVALID_DATA",0,0);
    }
    else {
      do {
        lVar23 = lVar22 + 4;
        cVar21 = (char)lVar22;
        lVar22 = lVar22 + 1;
        uVar48 = uVar48 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU);
      } while (lVar22 != 4);
      local_130 = param_2 + 8;
      local_138 = param_3 + -8;
      if ((-1 < (int)uVar48) && ((int)uVar48 <= local_138)) {
        auVar16._8_8_ = 0;
        auVar16._0_8_ = local_e0._8_8_;
        local_e0._0_16_ = auVar16 << 0x40;
        if (uVar48 != 0) {
          CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_e0,(ulong)uVar48);
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_e0);
          lVar22 = 0;
          do {
            *(uchar *)(local_e0._0_8_ + lVar22) = param_2[lVar22 + 8];
            lVar22 = lVar22 + 1;
          } while ((int)lVar22 < (int)uVar48);
        }
        Variant::Variant((Variant *)&local_88,(Vector *)&local_e8);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined8 *)(param_1 + 8) = uStack_80;
        *(ulong *)(param_1 + 0x10) = uStack_78;
        *(uint *)param_1 = local_88;
        if (param_4 != (int *)0x0) {
          iVar47 = *param_4;
          if ((uVar48 & 3) != 0) {
            iVar47 = (iVar47 - (uVar48 & 3)) + 4;
          }
LAB_001085db:
          *param_4 = iVar47 + 4 + uVar48;
        }
LAB_001084de:
joined_r0x00106871:
        if (local_e0._0_8_ != 0) {
          LOCK();
          plVar2 = (long *)(local_e0._0_8_ + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            uVar20 = local_e0._0_8_;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = local_e0._8_8_;
            local_e0._0_16_ = auVar15 << 0x40;
            Memory::free_static((void *)(uVar20 + -0x10),false);
          }
        }
        goto LAB_001073e0;
      }
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x39d,
                       "Condition \"count < 0 || count > len\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
    }
    break;
  case 0x1e:
    lVar22 = 0;
    uVar45 = 0;
    if (iVar47 < 4) {
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x3b4,
                       "Condition \"len < 4\" is true. Returning: ERR_INVALID_DATA",0,0);
    }
    else {
      do {
        lVar23 = lVar22 + 4;
        cVar21 = (char)lVar22;
        lVar22 = lVar22 + 1;
        uVar45 = uVar45 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU);
      } while (lVar22 != 4);
      pbVar44 = param_2 + 8;
      local_138 = param_3 + -8;
      local_130 = pbVar44;
      if (uVar45 < 0x20000000) {
        if (SBORROW4(local_138,uVar45 * 4) == (int)(local_138 + uVar45 * -4) < 0) {
          auVar14._8_8_ = 0;
          auVar14._0_8_ = local_e0._8_8_;
          local_e0._0_16_ = auVar14 << 0x40;
          if (uVar45 != 0) {
            CowData<int>::resize<false>((CowData<int> *)local_e0,(ulong)uVar45);
            CowData<int>::_copy_on_write((CowData<int> *)local_e0);
            lVar22 = 0;
            do {
              lVar23 = 0;
              uVar48 = 0;
              do {
                pbVar38 = pbVar44 + lVar23;
                cVar21 = (char)lVar23;
                lVar23 = lVar23 + 1;
                uVar48 = uVar48 | (uint)*pbVar38 << (cVar21 * '\b' & 0x1fU);
              } while (lVar23 != 4);
              *(uint *)(local_e0._0_8_ + lVar22 * 4) = uVar48;
              lVar22 = lVar22 + 1;
              pbVar44 = pbVar44 + 4;
            } while ((int)lVar22 < (int)uVar45);
          }
          Variant::Variant((Variant *)&local_88,(Vector *)&local_e8);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined8 *)(param_1 + 8) = uStack_80;
          *(ulong *)(param_1 + 0x10) = uStack_78;
          *(uint *)param_1 = local_88;
joined_r0x00106cb4:
          if (param_4 != (int *)0x0) {
            *param_4 = *param_4 + uVar45 * 4 + 4;
          }
          goto LAB_001084de;
        }
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x3b9,
                         "Condition \"count < 0 || count * 4 > len\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
      }
      else {
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x3b8,
                         "Condition \"((int32_t)(count)) < 0 || ((int32_t)(4)) <= 0 || ((int32_t)(count)) > 0x7fffffff / ((int32_t)(4))\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
      }
    }
    break;
  case 0x1f:
    lVar22 = 0;
    uVar45 = 0;
    if (iVar47 < 4) {
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x3cc,
                       "Condition \"len < 4\" is true. Returning: ERR_INVALID_DATA",0,0);
    }
    else {
      do {
        lVar23 = lVar22 + 4;
        cVar21 = (char)lVar22;
        lVar22 = lVar22 + 1;
        uVar45 = uVar45 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU);
      } while (lVar22 != 4);
      pbVar44 = param_2 + 8;
      local_138 = param_3 + -8;
      local_130 = pbVar44;
      if (uVar45 < 0x10000000) {
        uVar48 = uVar45 * 8;
        if (SBORROW4(local_138,uVar48) == (int)(local_138 + uVar45 * -8) < 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = local_e0._8_8_;
          local_e0._0_16_ = auVar11 << 0x40;
          if (uVar45 != 0) {
            CowData<long>::resize<false>((CowData<long> *)local_e0,(ulong)uVar45);
            CowData<long>::_copy_on_write((CowData<long> *)local_e0);
            puVar37 = (ulong *)local_e0._0_8_;
            do {
              iVar47 = 0;
              uVar36 = 0;
              pbVar38 = pbVar44;
              do {
                bVar26 = *pbVar38;
                pbVar38 = pbVar38 + 1;
                bVar27 = (byte)iVar47;
                iVar47 = iVar47 + 8;
                uVar36 = uVar36 | (ulong)bVar26 << (bVar27 & 0x3f);
              } while (iVar47 != 0x40);
              *puVar37 = uVar36;
              puVar37 = puVar37 + 1;
              pbVar44 = pbVar44 + 8;
            } while (puVar37 != (ulong *)(local_e0._0_8_ + (ulong)uVar45 * 8));
          }
          Variant::Variant((Variant *)&local_88,(Vector *)&local_e8);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined8 *)(param_1 + 8) = uStack_80;
          *(ulong *)(param_1 + 0x10) = uStack_78;
          *(uint *)param_1 = local_88;
          if (param_4 != (int *)0x0) {
            iVar47 = *param_4;
            goto LAB_001085db;
          }
          goto LAB_001084de;
        }
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x3d1,
                         "Condition \"count < 0 || count * 8 > len\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
      }
      else {
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x3d0,
                         "Condition \"((int32_t)(count)) < 0 || ((int32_t)(8)) <= 0 || ((int32_t)(count)) > 0x7fffffff / ((int32_t)(8))\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
      }
    }
    break;
  case 0x20:
    lVar22 = 0;
    uVar45 = 0;
    if (iVar47 < 4) {
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x3e4,
                       "Condition \"len < 4\" is true. Returning: ERR_INVALID_DATA",0,0);
    }
    else {
      do {
        lVar23 = lVar22 + 4;
        cVar21 = (char)lVar22;
        lVar22 = lVar22 + 1;
        uVar45 = uVar45 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU);
      } while (lVar22 != 4);
      pbVar44 = param_2 + 8;
      local_138 = param_3 + -8;
      local_130 = pbVar44;
      if (uVar45 < 0x20000000) {
        if (SBORROW4(local_138,uVar45 * 4) == (int)(local_138 + uVar45 * -4) < 0) {
          auVar10._8_8_ = 0;
          auVar10._0_8_ = local_e0._8_8_;
          local_e0._0_16_ = auVar10 << 0x40;
          if (uVar45 != 0) {
            CowData<float>::resize<false>((CowData<float> *)local_e0,(ulong)uVar45);
            CowData<float>::_copy_on_write((CowData<float> *)local_e0);
            lVar22 = 0;
            do {
              lVar23 = 0;
              uVar48 = 0;
              do {
                pbVar38 = pbVar44 + lVar23;
                cVar21 = (char)lVar23;
                lVar23 = lVar23 + 1;
                uVar48 = uVar48 | (uint)*pbVar38 << (cVar21 * '\b' & 0x1fU);
              } while (lVar23 != 4);
              *(uint *)(local_e0._0_8_ + lVar22 * 4) = uVar48;
              lVar22 = lVar22 + 1;
              pbVar44 = pbVar44 + 4;
            } while ((int)lVar22 < (int)uVar45);
          }
          Variant::Variant((Variant *)&local_88,(Vector *)&local_e8);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined8 *)(param_1 + 8) = uStack_80;
          *(ulong *)(param_1 + 0x10) = uStack_78;
          *(uint *)param_1 = local_88;
          goto joined_r0x00106cb4;
        }
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x3e9,
                         "Condition \"count < 0 || count * 4 > len\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
      }
      else {
        _err_print_error("decode_variant","core/io/marshalls.cpp",1000,
                         "Condition \"((int32_t)(count)) < 0 || ((int32_t)(4)) <= 0 || ((int32_t)(count)) > 0x7fffffff / ((int32_t)(4))\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
      }
    }
    break;
  case 0x21:
    lVar22 = 0;
    uVar45 = 0;
    if (iVar47 < 4) {
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x3fd,
                       "Condition \"len < 4\" is true. Returning: ERR_INVALID_DATA",0,0);
    }
    else {
      do {
        lVar23 = lVar22 + 4;
        cVar21 = (char)lVar22;
        lVar22 = lVar22 + 1;
        uVar45 = uVar45 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU);
      } while (lVar22 != 4);
      pbVar44 = param_2 + 8;
      local_138 = param_3 + -8;
      local_130 = pbVar44;
      if (uVar45 < 0x10000000) {
        uVar48 = uVar45 * 8;
        if (SBORROW4(local_138,uVar48) == (int)(local_138 + uVar45 * -8) < 0) {
          auVar9._8_8_ = 0;
          auVar9._0_8_ = local_e0._8_8_;
          local_e0._0_16_ = auVar9 << 0x40;
          if (uVar45 != 0) {
            CowData<double>::resize<false>((CowData<double> *)local_e0,(ulong)uVar45);
            CowData<double>::_copy_on_write((CowData<double> *)local_e0);
            puVar37 = (ulong *)local_e0._0_8_;
            do {
              iVar47 = 0;
              uVar36 = 0;
              pbVar38 = pbVar44;
              do {
                bVar26 = *pbVar38;
                pbVar38 = pbVar38 + 1;
                bVar27 = (byte)iVar47;
                iVar47 = iVar47 + 8;
                uVar36 = uVar36 | (ulong)bVar26 << (bVar27 & 0x3f);
              } while (iVar47 != 0x40);
              *puVar37 = uVar36;
              puVar37 = puVar37 + 1;
              pbVar44 = pbVar44 + 8;
            } while (puVar37 != (ulong *)(local_e0._0_8_ + (ulong)uVar45 * 8));
          }
          Variant::Variant((Variant *)&local_88,(Vector *)&local_e8);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined8 *)(param_1 + 8) = uStack_80;
          *(ulong *)(param_1 + 0x10) = uStack_78;
          *(uint *)param_1 = local_88;
          if (param_4 != (int *)0x0) {
            iVar47 = *param_4;
            goto LAB_001085db;
          }
          goto LAB_001084de;
        }
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x402,
                         "Condition \"count < 0 || count * 8 > len\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
      }
      else {
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x401,
                         "Condition \"((int32_t)(count)) < 0 || ((int32_t)(8)) <= 0 || ((int32_t)(count)) > 0x7fffffff / ((int32_t)(8))\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
      }
    }
    break;
  case 0x22:
    lVar22 = 0;
    uVar45 = 0;
    if (iVar47 < 4) {
      iVar47 = 0x1e;
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x415,
                       "Condition \"len < 4\" is true. Returning: ERR_INVALID_DATA",0,0);
      goto LAB_00106579;
    }
    do {
      lVar23 = lVar22 + 4;
      cVar21 = (char)lVar22;
      lVar22 = lVar22 + 1;
      uVar45 = uVar45 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU);
    } while (lVar22 != 4);
    local_130 = param_2 + 8;
    local_138 = param_3 + -8;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = local_e0._8_8_;
    local_e0._0_16_ = auVar8 << 0x40;
    if (param_4 != (int *)0x0) {
      *param_4 = *param_4 + 4;
    }
    if (0 < (int)uVar45) {
      uVar48 = 0;
      do {
        local_110 = 0;
        iVar47 = _decode_string(&local_130,&local_138,param_4,(String *)&local_110);
        if (iVar47 != 0) {
          if (local_110 != 0) {
            LOCK();
            plVar2 = (long *)(local_110 - 0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              Memory::free_static((void *)(local_110 - 0x10),false);
            }
          }
          CowData<String>::_unref((CowData<String> *)local_e0);
          goto LAB_00106579;
        }
        local_108 = 0;
        uVar36 = local_110;
        if (local_110 != 0) {
          plVar2 = (long *)(local_110 - 0x10);
          do {
            lVar22 = *plVar2;
            uVar36 = local_108;
            if (lVar22 == 0) goto LAB_00106a0f;
            LOCK();
            lVar23 = *plVar2;
            bVar49 = lVar22 == lVar23;
            if (bVar49) {
              *plVar2 = lVar22 + 1;
              lVar23 = lVar22;
            }
            UNLOCK();
          } while (!bVar49);
          if (lVar23 != -1) {
            local_108 = local_110;
            uVar36 = local_110;
          }
        }
LAB_00106a0f:
        if (local_e0._0_8_ == 0) {
          lVar22 = 1;
        }
        else {
          lVar22 = *(long *)(local_e0._0_8_ + -8) + 1;
        }
        iVar47 = CowData<String>::resize<false>((CowData<String> *)local_e0,lVar22);
        if (iVar47 == 0) {
          if (local_e0._0_8_ == 0) {
            lVar23 = -1;
            lVar22 = 0;
          }
          else {
            lVar22 = *(long *)(local_e0._0_8_ + -8);
            lVar23 = lVar22 + -1;
            if (-1 < lVar23) {
              CowData<String>::_copy_on_write((CowData<String> *)local_e0);
              this = (CowData<char32_t> *)(local_e0._0_8_ + lVar23 * 8);
              if (uVar36 != *(ulong *)this) {
                CowData<char32_t>::_ref(this,(CowData *)&local_108);
              }
              goto LAB_00106a7d;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar22,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
LAB_00106a7d:
        if (uVar36 != 0) {
          LOCK();
          plVar2 = (long *)(uVar36 - 0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            Memory::free_static((void *)(local_108 - 0x10),false);
          }
        }
        if (local_110 != 0) {
          LOCK();
          plVar2 = (long *)(local_110 - 0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            Memory::free_static((void *)(local_110 - 0x10),false);
          }
        }
        uVar48 = uVar48 + 1;
      } while (uVar45 != uVar48);
    }
    Variant::Variant((Variant *)&local_88,(Vector *)&local_e8);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(uint *)param_1 = local_88;
    *(undefined8 *)(param_1 + 8) = uStack_80;
    *(ulong *)(param_1 + 0x10) = uStack_78;
    CowData<String>::_unref((CowData<String> *)local_e0);
LAB_001073e0:
    iVar47 = 0;
    goto LAB_00106579;
  case 0x23:
    lVar22 = 0;
    uVar48 = 0;
    if (iVar47 < 4) {
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x42e,
                       "Condition \"len < 4\" is true. Returning: ERR_INVALID_DATA",0,0);
    }
    else {
      do {
        lVar23 = lVar22 + 4;
        cVar21 = (char)lVar22;
        lVar22 = lVar22 + 1;
        uVar48 = uVar48 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU);
      } while (lVar22 != 4);
      local_138 = param_3 + -8;
      local_130 = param_2 + 8;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_e0._8_8_;
      local_e0._0_16_ = auVar7 << 0x40;
      if ((uVar45 & 0x10000) == 0) {
        if (uVar48 < 0x10000000) {
          if ((ulong)uVar48 * 8 <= (ulong)(long)local_138) {
            if (param_4 != (int *)0x0) {
              *param_4 = *param_4 + 4;
            }
            if (uVar48 != 0) {
              puVar43 = param_2 + 0xc;
              CowData<Vector2>::resize<false>((CowData<Vector2> *)local_e0,(ulong)uVar48);
              CowData<Vector2>::_copy_on_write((CowData<Vector2> *)local_e0);
              lVar22 = 0;
              do {
                uVar45 = 0;
                lVar23 = 0;
                do {
                  lVar19 = lVar23 + -4;
                  cVar21 = (char)lVar23;
                  lVar23 = lVar23 + 1;
                  uVar45 = uVar45 | (uint)puVar43[lVar19] << (cVar21 * '\b' & 0x1fU);
                } while (lVar23 != 4);
                *(uint *)(local_e0._0_8_ + lVar22 * 8) = uVar45;
                lVar23 = 0;
                uVar45 = 0;
                do {
                  pbVar44 = puVar43 + lVar23;
                  cVar21 = (char)lVar23;
                  lVar23 = lVar23 + 1;
                  uVar45 = uVar45 | (uint)*pbVar44 << (cVar21 * '\b' & 0x1fU);
                } while (lVar23 != 4);
                *(uint *)(local_e0._0_8_ + 4 + lVar22 * 8) = uVar45;
                lVar22 = lVar22 + 1;
                puVar43 = puVar43 + 8;
              } while ((int)lVar22 < (int)uVar48);
              if (param_4 != (int *)0x0) {
                *param_4 = *param_4 + uVar48 * 8;
              }
            }
            goto LAB_00106905;
          }
          _err_print_error("decode_variant","core/io/marshalls.cpp",0x450,
                           "Condition \"count < 0 || count * sizeof(float) * 2 > (size_t)len\" is true. Returning: ERR_INVALID_DATA"
                           ,0,0);
        }
        else {
          _err_print_error("decode_variant","core/io/marshalls.cpp",0x44f,
                           "Condition \"((int32_t)(count)) < 0 || ((int32_t)(sizeof(float) * 2)) <= 0 || ((int32_t)(count)) > 0x7fffffff / ((int32_t)(sizeof(float) * 2))\" is true. Returning: ERR_INVALID_DATA"
                           ,0,0);
        }
      }
      else if (uVar48 < 0x8000000) {
        if ((ulong)uVar48 << 4 <= (ulong)(long)local_138) {
          if (param_4 != (int *)0x0) {
            *param_4 = *param_4 + 4;
          }
          if (uVar48 != 0) {
            pbVar44 = param_2 + 0x10;
            CowData<Vector2>::resize<false>((CowData<Vector2> *)local_e0,(ulong)uVar48);
            CowData<Vector2>::_copy_on_write((CowData<Vector2> *)local_e0);
            lVar22 = 0;
            do {
              pbVar38 = pbVar44 + -8;
              iVar47 = 0;
              dVar40 = 0.0;
              do {
                bVar26 = *pbVar38;
                pbVar38 = pbVar38 + 1;
                bVar27 = (byte)iVar47;
                iVar47 = iVar47 + 8;
                dVar40 = (double)((ulong)dVar40 | (ulong)bVar26 << (bVar27 & 0x3f));
              } while (iVar47 != 0x40);
              iVar47 = 0;
              dVar41 = 0.0;
              *(float *)(local_e0._0_8_ + lVar22 * 8) = (float)dVar40;
              pbVar38 = pbVar44;
              do {
                bVar26 = *pbVar38;
                pbVar38 = pbVar38 + 1;
                bVar27 = (byte)iVar47;
                iVar47 = iVar47 + 8;
                dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
              } while (iVar47 != 0x40);
              pbVar44 = pbVar44 + 0x10;
              *(float *)(local_e0._0_8_ + 4 + lVar22 * 8) = (float)dVar41;
              lVar22 = lVar22 + 1;
            } while ((int)lVar22 < (int)uVar48);
            if (param_4 != (int *)0x0) {
              *param_4 = *param_4 + uVar48 * 0x10;
            }
          }
LAB_00106905:
          Variant::Variant((Variant *)&local_88,(Vector *)&local_e8);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined8 *)(param_1 + 8) = uStack_80;
          *(ulong *)(param_1 + 0x10) = uStack_78;
          *(uint *)param_1 = local_88;
          goto joined_r0x00106871;
        }
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x437,
                         "Condition \"count < 0 || count * sizeof(double) * 2 > (size_t)len\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
      }
      else {
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x436,
                         "Condition \"((int32_t)(count)) < 0 || ((int32_t)(sizeof(double) * 2)) <= 0 || ((int32_t)(count)) > 0x7fffffff / ((int32_t)(sizeof(double) * 2))\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
      }
LAB_0010ae35:
      uVar20 = local_e0._0_8_;
      if (local_e0._0_8_ != 0) {
        LOCK();
        plVar2 = (long *)(local_e0._0_8_ + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          auVar18._8_8_ = 0;
          auVar18._0_8_ = local_e0._8_8_;
          local_e0._0_16_ = auVar18 << 0x40;
          Memory::free_static((void *)(uVar20 + -0x10),false);
        }
      }
    }
    break;
  case 0x24:
    lVar22 = 0;
    uVar48 = 0;
    if (3 < iVar47) {
      do {
        lVar23 = lVar22 + 4;
        cVar21 = (char)lVar22;
        lVar22 = lVar22 + 1;
        uVar48 = uVar48 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU);
      } while (lVar22 != 4);
      local_138 = param_3 + -8;
      local_130 = param_2 + 8;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_e0._8_8_;
      local_e0._0_16_ = auVar6 << 0x40;
      if ((uVar45 & 0x10000) == 0) {
        if (uVar48 < 0xaaaaaab) {
          if ((ulong)uVar48 * 0xc <= (ulong)(long)local_138) {
            if (param_4 != (int *)0x0) {
              *param_4 = *param_4 + 4;
            }
            if (uVar48 != 0) {
              puVar43 = param_2 + 0xc;
              CowData<Vector3>::resize<false>((CowData<Vector3> *)local_e0,(ulong)uVar48);
              CowData<Vector3>::_copy_on_write((CowData<Vector3> *)local_e0);
              iVar47 = 0;
              puVar35 = (uint *)local_e0._0_8_;
              do {
                uVar45 = 0;
                lVar22 = 0;
                do {
                  lVar23 = lVar22 + -4;
                  cVar21 = (char)lVar22;
                  lVar22 = lVar22 + 1;
                  uVar45 = uVar45 | (uint)puVar43[lVar23] << (cVar21 * '\b' & 0x1fU);
                } while (lVar22 != 4);
                *puVar35 = uVar45;
                lVar22 = 0;
                uVar45 = 0;
                do {
                  pbVar44 = puVar43 + lVar22;
                  cVar21 = (char)lVar22;
                  lVar22 = lVar22 + 1;
                  uVar45 = uVar45 | (uint)*pbVar44 << (cVar21 * '\b' & 0x1fU);
                } while (lVar22 != 4);
                puVar35[1] = uVar45;
                uVar45 = 0;
                lVar22 = 0;
                do {
                  lVar23 = lVar22 + 4;
                  cVar21 = (char)lVar22;
                  lVar22 = lVar22 + 1;
                  uVar45 = uVar45 | (uint)puVar43[lVar23] << (cVar21 * '\b' & 0x1fU);
                } while (lVar22 != 4);
                iVar47 = iVar47 + 1;
                puVar35[2] = uVar45;
                puVar43 = puVar43 + 0xc;
                puVar35 = puVar35 + 3;
              } while (iVar47 < (int)uVar48);
              if (param_4 != (int *)0x0) {
                *param_4 = *param_4 + uVar48 * 0xc;
              }
            }
            goto LAB_00106825;
          }
          _err_print_error("decode_variant","core/io/marshalls.cpp",0x48d,
                           "Condition \"count < 0 || count * sizeof(float) * 3 > (size_t)len\" is true. Returning: ERR_INVALID_DATA"
                           ,0,0);
        }
        else {
          _err_print_error("decode_variant","core/io/marshalls.cpp",0x48c,
                           "Condition \"((int32_t)(count)) < 0 || ((int32_t)(sizeof(float) * 3)) <= 0 || ((int32_t)(count)) > 0x7fffffff / ((int32_t)(sizeof(float) * 3))\" is true. Returning: ERR_INVALID_DATA"
                           ,0,0);
        }
      }
      else if (uVar48 < 0x5555556) {
        if ((ulong)uVar48 * 0x18 <= (ulong)(long)local_138) {
          if (param_4 != (int *)0x0) {
            *param_4 = *param_4 + 4;
          }
          if (uVar48 != 0) {
            pbVar44 = param_2 + 0x18;
            CowData<Vector3>::resize<false>((CowData<Vector3> *)local_e0,(ulong)uVar48);
            CowData<Vector3>::_copy_on_write((CowData<Vector3> *)local_e0);
            iVar47 = 0;
            pfVar31 = (float *)local_e0._0_8_;
            do {
              pbVar38 = pbVar44 + -0x10;
              iVar28 = 0;
              dVar40 = 0.0;
              do {
                bVar26 = *pbVar38;
                pbVar38 = pbVar38 + 1;
                bVar27 = (byte)iVar28;
                iVar28 = iVar28 + 8;
                dVar40 = (double)((ulong)dVar40 | (ulong)bVar26 << (bVar27 & 0x3f));
              } while (iVar28 != 0x40);
              pbVar38 = pbVar44 + -8;
              iVar28 = 0;
              dVar41 = 0.0;
              *pfVar31 = (float)dVar40;
              do {
                bVar26 = *pbVar38;
                pbVar38 = pbVar38 + 1;
                bVar27 = (byte)iVar28;
                iVar28 = iVar28 + 8;
                dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
              } while (iVar28 != 0x40);
              iVar28 = 0;
              dVar40 = 0.0;
              pfVar31[1] = (float)dVar41;
              pbVar38 = pbVar44;
              do {
                bVar26 = *pbVar38;
                pbVar38 = pbVar38 + 1;
                bVar27 = (byte)iVar28;
                iVar28 = iVar28 + 8;
                dVar40 = (double)((ulong)dVar40 | (ulong)bVar26 << (bVar27 & 0x3f));
              } while (iVar28 != 0x40);
              iVar47 = iVar47 + 1;
              pbVar44 = pbVar44 + 0x18;
              pfVar31[2] = (float)dVar40;
              pfVar31 = pfVar31 + 3;
            } while (iVar47 < (int)uVar48);
            if (param_4 != (int *)0x0) {
              *param_4 = *param_4 + uVar48 * 0x18;
            }
          }
LAB_00106825:
          Variant::Variant((Variant *)&local_88,(Vector *)&local_e8);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined8 *)(param_1 + 8) = uStack_80;
          *(ulong *)(param_1 + 0x10) = uStack_78;
          *(uint *)param_1 = local_88;
          goto joined_r0x00106871;
        }
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x473,
                         "Condition \"count < 0 || count * sizeof(double) * 3 > (size_t)len\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
      }
      else {
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x472,
                         "Condition \"((int32_t)(count)) < 0 || ((int32_t)(sizeof(double) * 3)) <= 0 || ((int32_t)(count)) > 0x7fffffff / ((int32_t)(sizeof(double) * 3))\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
      }
      goto LAB_0010ae35;
    }
    _err_print_error("decode_variant","core/io/marshalls.cpp",0x46a,
                     "Condition \"len < 4\" is true. Returning: ERR_INVALID_DATA",0,0);
    break;
  case 0x25:
    lVar22 = 0;
    uVar45 = 0;
    if (iVar47 < 4) {
      _err_print_error("decode_variant","core/io/marshalls.cpp",0x4aa,
                       "Condition \"len < 4\" is true. Returning: ERR_INVALID_DATA",0,0);
    }
    else {
      do {
        lVar23 = lVar22 + 4;
        cVar21 = (char)lVar22;
        lVar22 = lVar22 + 1;
        uVar45 = uVar45 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU);
      } while (lVar22 != 4);
      local_130 = param_2 + 8;
      local_138 = param_3 + -8;
      if (uVar45 < 0x8000000) {
        if ((int)(uVar45 * 0x10) <= local_138) {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = local_e0._8_8_;
          local_e0._0_16_ = auVar5 << 0x40;
          if (param_4 != (int *)0x0) {
            *param_4 = *param_4 + 4;
          }
          if (uVar45 != 0) {
            puVar43 = param_2 + 0x14;
            CowData<Color>::resize<false>((CowData<Color> *)local_e0,(ulong)uVar45);
            CowData<Color>::_copy_on_write((CowData<Color> *)local_e0);
            iVar47 = 0;
            puVar35 = (uint *)local_e0._0_8_;
            do {
              lVar22 = 0;
              uVar48 = 0;
              do {
                lVar23 = lVar22 + -0xc;
                cVar21 = (char)lVar22;
                lVar22 = lVar22 + 1;
                uVar48 = uVar48 | (uint)puVar43[lVar23] << (cVar21 * '\b' & 0x1fU);
              } while (lVar22 != 4);
              *puVar35 = uVar48;
              lVar22 = 0;
              uVar48 = 0;
              do {
                lVar23 = lVar22 + -8;
                cVar21 = (char)lVar22;
                lVar22 = lVar22 + 1;
                uVar48 = uVar48 | (uint)puVar43[lVar23] << (cVar21 * '\b' & 0x1fU);
              } while (lVar22 != 4);
              puVar35[1] = uVar48;
              lVar22 = 0;
              uVar48 = 0;
              do {
                lVar23 = lVar22 + -4;
                cVar21 = (char)lVar22;
                lVar22 = lVar22 + 1;
                uVar48 = uVar48 | (uint)puVar43[lVar23] << (cVar21 * '\b' & 0x1fU);
              } while (lVar22 != 4);
              puVar35[2] = uVar48;
              lVar22 = 0;
              uVar48 = 0;
              do {
                pbVar44 = puVar43 + lVar22;
                cVar21 = (char)lVar22;
                lVar22 = lVar22 + 1;
                uVar48 = uVar48 | (uint)*pbVar44 << (cVar21 * '\b' & 0x1fU);
              } while (lVar22 != 4);
              iVar47 = iVar47 + 1;
              puVar35[3] = uVar48;
              puVar43 = puVar43 + 0x10;
              puVar35 = puVar35 + 4;
            } while (iVar47 < (int)uVar45);
            if (param_4 != (int *)0x0) {
              *param_4 = *param_4 + uVar45 * 0x10;
            }
          }
          Variant::Variant((Variant *)&local_88,(Vector *)&local_e8);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined8 *)(param_1 + 8) = uStack_80;
          *(ulong *)(param_1 + 0x10) = uStack_78;
          *(uint *)param_1 = local_88;
          goto joined_r0x00106871;
        }
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x4b0,
                         "Condition \"count < 0 || count * 4 * 4 > len\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
      }
      else {
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x4af,
                         "Condition \"((int32_t)(count)) < 0 || ((int32_t)(4 * 4)) <= 0 || ((int32_t)(count)) > 0x7fffffff / ((int32_t)(4 * 4))\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
      }
    }
    break;
  case 0x26:
    lVar22 = 0;
    uVar48 = 0;
    if (3 < iVar47) {
      do {
        lVar23 = lVar22 + 4;
        cVar21 = (char)lVar22;
        lVar22 = lVar22 + 1;
        uVar48 = uVar48 | (uint)param_2[lVar23] << (cVar21 * '\b' & 0x1fU);
      } while (lVar22 != 4);
      local_138 = param_3 + -8;
      local_130 = param_2 + 8;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_e0._8_8_;
      local_e0._0_16_ = auVar4 << 0x40;
      if ((uVar45 & 0x10000) == 0) {
        if (uVar48 < 0x8000000) {
          if ((ulong)uVar48 << 4 <= (ulong)(long)local_138) {
            if (param_4 != (int *)0x0) {
              *param_4 = *param_4 + 4;
            }
            if (uVar48 != 0) {
              puVar43 = param_2 + 0x14;
              CowData<Vector4>::resize<false>((CowData<Vector4> *)local_e0,(ulong)uVar48);
              CowData<Vector4>::_copy_on_write((CowData<Vector4> *)local_e0);
              iVar47 = 0;
              puVar35 = (uint *)local_e0._0_8_;
              do {
                uVar45 = 0;
                lVar22 = 0;
                do {
                  lVar23 = lVar22 + -0xc;
                  cVar21 = (char)lVar22;
                  lVar22 = lVar22 + 1;
                  uVar45 = uVar45 | (uint)puVar43[lVar23] << (cVar21 * '\b' & 0x1fU);
                } while (lVar22 != 4);
                *puVar35 = uVar45;
                uVar45 = 0;
                lVar22 = 0;
                do {
                  lVar23 = lVar22 + -8;
                  cVar21 = (char)lVar22;
                  lVar22 = lVar22 + 1;
                  uVar45 = uVar45 | (uint)puVar43[lVar23] << (cVar21 * '\b' & 0x1fU);
                } while (lVar22 != 4);
                puVar35[1] = uVar45;
                uVar45 = 0;
                lVar22 = 0;
                do {
                  lVar23 = lVar22 + -4;
                  cVar21 = (char)lVar22;
                  lVar22 = lVar22 + 1;
                  uVar45 = uVar45 | (uint)puVar43[lVar23] << (cVar21 * '\b' & 0x1fU);
                } while (lVar22 != 4);
                puVar35[2] = uVar45;
                lVar22 = 0;
                uVar45 = 0;
                do {
                  pbVar44 = puVar43 + lVar22;
                  cVar21 = (char)lVar22;
                  lVar22 = lVar22 + 1;
                  uVar45 = uVar45 | (uint)*pbVar44 << (cVar21 * '\b' & 0x1fU);
                } while (lVar22 != 4);
                iVar47 = iVar47 + 1;
                puVar35[3] = uVar45;
                puVar43 = puVar43 + 0x10;
                puVar35 = puVar35 + 4;
              } while (iVar47 < (int)uVar48);
              if (param_4 != (int *)0x0) {
                *param_4 = *param_4 + uVar48 * 0x10;
              }
            }
            goto LAB_00106688;
          }
          _err_print_error("decode_variant","core/io/marshalls.cpp",0x4f4,
                           "Condition \"count < 0 || count * sizeof(float) * 4 > (size_t)len\" is true. Returning: ERR_INVALID_DATA"
                           ,0,0);
        }
        else {
          _err_print_error("decode_variant","core/io/marshalls.cpp",0x4f3,
                           "Condition \"((int32_t)(count)) < 0 || ((int32_t)(sizeof(float) * 4)) <= 0 || ((int32_t)(count)) > 0x7fffffff / ((int32_t)(sizeof(float) * 4))\" is true. Returning: ERR_INVALID_DATA"
                           ,0,0);
        }
      }
      else if (uVar48 < 0x4000000) {
        if ((ulong)uVar48 << 5 <= (ulong)(long)local_138) {
          if (param_4 != (int *)0x0) {
            *param_4 = *param_4 + 4;
          }
          if (uVar48 != 0) {
            pbVar44 = param_2 + 0x20;
            CowData<Vector4>::resize<false>((CowData<Vector4> *)local_e0,(ulong)uVar48);
            CowData<Vector4>::_copy_on_write((CowData<Vector4> *)local_e0);
            iVar47 = 0;
            pfVar31 = (float *)local_e0._0_8_;
            do {
              pbVar38 = pbVar44 + -0x18;
              iVar28 = 0;
              dVar40 = 0.0;
              do {
                bVar26 = *pbVar38;
                pbVar38 = pbVar38 + 1;
                bVar27 = (byte)iVar28;
                iVar28 = iVar28 + 8;
                dVar40 = (double)((ulong)dVar40 | (ulong)bVar26 << (bVar27 & 0x3f));
              } while (iVar28 != 0x40);
              pbVar38 = pbVar44 + -0x10;
              iVar28 = 0;
              dVar41 = 0.0;
              *pfVar31 = (float)dVar40;
              do {
                bVar26 = *pbVar38;
                pbVar38 = pbVar38 + 1;
                bVar27 = (byte)iVar28;
                iVar28 = iVar28 + 8;
                dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
              } while (iVar28 != 0x40);
              pbVar38 = pbVar44 + -8;
              iVar28 = 0;
              dVar40 = 0.0;
              pfVar31[1] = (float)dVar41;
              do {
                bVar26 = *pbVar38;
                pbVar38 = pbVar38 + 1;
                bVar27 = (byte)iVar28;
                iVar28 = iVar28 + 8;
                dVar40 = (double)((ulong)dVar40 | (ulong)bVar26 << (bVar27 & 0x3f));
              } while (iVar28 != 0x40);
              iVar28 = 0;
              dVar41 = 0.0;
              pfVar31[2] = (float)dVar40;
              pbVar38 = pbVar44;
              do {
                bVar26 = *pbVar38;
                pbVar38 = pbVar38 + 1;
                bVar27 = (byte)iVar28;
                iVar28 = iVar28 + 8;
                dVar41 = (double)((ulong)dVar41 | (ulong)bVar26 << (bVar27 & 0x3f));
              } while (iVar28 != 0x40);
              iVar47 = iVar47 + 1;
              pbVar44 = pbVar44 + 0x20;
              pfVar31[3] = (float)dVar41;
              pfVar31 = pfVar31 + 4;
            } while (iVar47 < (int)uVar48);
            if (param_4 != (int *)0x0) {
              *param_4 = *param_4 + uVar48 * 0x20;
            }
          }
LAB_00106688:
          Variant::Variant((Variant *)&local_88,(Vector *)&local_e8);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined8 *)(param_1 + 8) = uStack_80;
          *(ulong *)(param_1 + 0x10) = uStack_78;
          *(uint *)param_1 = local_88;
          goto LAB_001084de;
        }
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x4d9,
                         "Condition \"count < 0 || count * sizeof(double) * 4 > (size_t)len\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
      }
      else {
        _err_print_error("decode_variant","core/io/marshalls.cpp",0x4d8,
                         "Condition \"((int32_t)(count)) < 0 || ((int32_t)(sizeof(double) * 4)) <= 0 || ((int32_t)(count)) > 0x7fffffff / ((int32_t)(sizeof(double) * 4))\" is true. Returning: ERR_INVALID_DATA"
                         ,0,0);
      }
      goto LAB_0010ae35;
    }
    _err_print_error("decode_variant","core/io/marshalls.cpp",0x4d0,
                     "Condition \"len < 4\" is true. Returning: ERR_INVALID_DATA",0,0);
  }
LAB_001065cd:
  iVar47 = 0x1e;
LAB_00106579:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar47;
}



/* EncodedObjectAsID::_bind_methods() */

void EncodedObjectAsID::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  MethodBind *pMVar3;
  long in_FS_OFFSET;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  long local_90;
  long local_88;
  int local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = &_LC136;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_object_id",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar3 = create_method_bind<EncodedObjectAsID,ObjectID>(set_object_id);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_object_id",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar3 = create_method_bind<EncodedObjectAsID,ObjectID>(get_object_id);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "object_id";
  local_90 = 9;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,2);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 == 0x11) {
      StringName::StringName((StringName *)&local_a8,(String *)&local_78,false);
      if ((char *)local_88 == local_a8) {
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_88 = (long)local_a8;
      }
      goto LAB_0010c01a;
    }
  }
  local_70 = 6;
  StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
LAB_0010c01a:
  local_d8 = 0;
  local_a8 = "EncodedObjectAsID";
  local_a0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x112a,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x112a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EncodedObjectAsID::is_class_ptr(void*) const */

uint __thiscall EncodedObjectAsID::is_class_ptr(EncodedObjectAsID *this,void *param_1)

{
  return (uint)CONCAT71(0x112a,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x112a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x112a,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EncodedObjectAsID::_getv(StringName const&, Variant&) const */

undefined8 EncodedObjectAsID::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EncodedObjectAsID::_setv(StringName const&, Variant const&) */

undefined8 EncodedObjectAsID::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EncodedObjectAsID::_validate_propertyv(PropertyInfo&) const */

void EncodedObjectAsID::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EncodedObjectAsID::_property_can_revertv(StringName const&) const */

undefined8 EncodedObjectAsID::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EncodedObjectAsID::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EncodedObjectAsID::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EncodedObjectAsID::_notificationv(int, bool) */

void EncodedObjectAsID::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<ObjectID>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<ObjectID>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<ObjectID>::get_argument_meta(int) const */

int __thiscall MethodBindTRC<ObjectID>::get_argument_meta(MethodBindTRC<ObjectID> *this,int param_1)

{
  return (param_1 >> 0x1f) * -8;
}



/* MethodBindT<ObjectID>::_gen_argument_type(int) const */

char __thiscall MethodBindT<ObjectID>::_gen_argument_type(MethodBindT<ObjectID> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<ObjectID>::get_argument_meta(int) const */

long __thiscall MethodBindT<ObjectID>::get_argument_meta(MethodBindT<ObjectID> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 3;
}



/* MethodBindT<ObjectID>::~MethodBindT() */

void __thiscall MethodBindT<ObjectID>::~MethodBindT(MethodBindT<ObjectID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001129d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<ObjectID>::~MethodBindT() */

void __thiscall MethodBindT<ObjectID>::~MethodBindT(MethodBindT<ObjectID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001129d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<ObjectID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<ObjectID>::~MethodBindTRC(MethodBindTRC<ObjectID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112a38;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<ObjectID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<ObjectID>::~MethodBindTRC(MethodBindTRC<ObjectID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112a38;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00112718;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00112718;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* EncodedObjectAsID::~EncodedObjectAsID() */

void __thiscall EncodedObjectAsID::~EncodedObjectAsID(EncodedObjectAsID *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00112718;
  Object::~Object((Object *)this);
  return;
}



/* EncodedObjectAsID::~EncodedObjectAsID() */

void __thiscall EncodedObjectAsID::~EncodedObjectAsID(EncodedObjectAsID *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00112718;
  Object::~Object((Object *)this);
  operator_delete(this,0x188);
  return;
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_0010c5e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c5e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010c64e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010c64e:
  return &_get_class_namev()::_class_name_static;
}



/* EncodedObjectAsID::_get_class_namev() const */

undefined8 * EncodedObjectAsID::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_0010c6d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c6d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EncodedObjectAsID");
      goto LAB_0010c73e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EncodedObjectAsID");
LAB_0010c73e:
  return &_get_class_namev()::_class_name_static;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<long>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<long>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Color>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<double>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<double>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<float>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector4>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector4>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010c9a0(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<int>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<long>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<long>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<float>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<float>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<double>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<double>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Vector3>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector3>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector2>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Vector4>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector4>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Color>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Color>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EncodedObjectAsID::get_class() const */

void EncodedObjectAsID::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<ObjectID>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<ObjectID>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC14;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
  puVar3[6] = 0x1d;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010cd5c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010cd5c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010e6cf;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010e6cf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010e783;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_0010e833;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_0010e833:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_0010e783;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010e783:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EncodedObjectAsID::is_class(String const&) const */

undefined8 __thiscall EncodedObjectAsID::is_class(EncodedObjectAsID *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010e95f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010e95f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_0010ea13;
  }
  cVar5 = String::operator==(param_1,"EncodedObjectAsID");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010ea13:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0010ed78:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010ed78;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010ed96;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010ed96:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EncodedObjectAsID::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EncodedObjectAsID::_get_property_listv(EncodedObjectAsID *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EncodedObjectAsID";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EncodedObjectAsID";
  local_98 = 0;
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0010f178:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010f178;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010f195;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010f195:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EncodedObjectAsID",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<ObjectID>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<ObjectID>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar8;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  puVar8 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar8 = 0;
  puVar8[6] = 0;
  *(undefined8 *)(puVar8 + 8) = 0;
  puVar8[10] = 6;
  *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0010f497;
  local_68 = 0;
  local_58 = &_LC14;
  local_70 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_50._8_8_;
  local_50 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,2);
  local_40 = 0x1d;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_0010f588:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_0010f588;
    StringName::StringName((StringName *)&local_60,(String *)&local_38,false);
    if (local_50._8_8_ == local_60) {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_50._8_8_ = local_60;
    }
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  *puVar8 = local_58._0_4_;
  lVar2 = *(long *)(puVar8 + 2);
  if (lVar2 != local_50._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(puVar8 + 2);
        *(undefined8 *)(puVar8 + 2) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(puVar8 + 2) = local_50._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_50._8_8_;
    local_50 = auVar5 << 0x40;
  }
  if (*(long *)(puVar8 + 4) != local_50._8_8_) {
    StringName::unref();
    uVar6 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(puVar8 + 4) = uVar6;
  }
  lVar7 = local_38;
  puVar8[6] = local_40;
  lVar2 = *(long *)(puVar8 + 8);
  if (lVar2 == local_38) {
    puVar8[10] = local_30;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(puVar8 + 8);
        *(undefined8 *)(puVar8 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(puVar8 + 8) = local_38;
    puVar8[10] = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_50._8_8_;
      local_50 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_0010f497:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar8;
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      ::Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)this = *(undefined4 *)param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined4 *)param_1 = 0;
    return;
  }
  return;
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010fbd8) */
/* WARNING: Removing unreachable block (ram,0x0010fd08) */
/* WARNING: Removing unreachable block (ram,0x0010fed0) */
/* WARNING: Removing unreachable block (ram,0x0010fd14) */
/* WARNING: Removing unreachable block (ram,0x0010fd1e) */
/* WARNING: Removing unreachable block (ram,0x0010feb0) */
/* WARNING: Removing unreachable block (ram,0x0010fd2a) */
/* WARNING: Removing unreachable block (ram,0x0010fd34) */
/* WARNING: Removing unreachable block (ram,0x0010fe90) */
/* WARNING: Removing unreachable block (ram,0x0010fd40) */
/* WARNING: Removing unreachable block (ram,0x0010fd4a) */
/* WARNING: Removing unreachable block (ram,0x0010fe70) */
/* WARNING: Removing unreachable block (ram,0x0010fd56) */
/* WARNING: Removing unreachable block (ram,0x0010fd60) */
/* WARNING: Removing unreachable block (ram,0x0010fe50) */
/* WARNING: Removing unreachable block (ram,0x0010fd6c) */
/* WARNING: Removing unreachable block (ram,0x0010fd76) */
/* WARNING: Removing unreachable block (ram,0x0010fe30) */
/* WARNING: Removing unreachable block (ram,0x0010fd82) */
/* WARNING: Removing unreachable block (ram,0x0010fd8c) */
/* WARNING: Removing unreachable block (ram,0x0010fe10) */
/* WARNING: Removing unreachable block (ram,0x0010fd94) */
/* WARNING: Removing unreachable block (ram,0x0010fdaa) */
/* WARNING: Removing unreachable block (ram,0x0010fdb6) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void Ref<EncodedObjectAsID>::instantiate<>() */

void __thiscall Ref<EncodedObjectAsID>::instantiate<>(Ref<EncodedObjectAsID> *this)

{
  char cVar1;
  RefCounted *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (RefCounted *)operator_new(0x188,"");
  RefCounted::RefCounted(this_00);
  *(undefined8 *)(this_00 + 0x180) = 0;
  *(undefined ***)this_00 = &PTR__initialize_classv_00112878;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (RefCounted *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (RefCounted *)pOVar3) goto LAB_0010ffb5;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0010ffb5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_0010ffb5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  do {
    piVar1 = (int *)*puVar2;
    if (piVar1 == (int *)0x0) {
      if (*(int *)(puVar2 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)(piVar1 + 10) == puVar2) {
      *puVar2 = *(undefined8 *)(piVar1 + 6);
      if (piVar1 == (int *)puVar2[1]) {
        puVar2[1] = *(undefined8 *)(piVar1 + 8);
      }
      if (*(long *)(piVar1 + 8) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 8) + 0x18) = *(undefined8 *)(piVar1 + 6);
      }
      if (*(long *)(piVar1 + 6) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 6) + 0x20) = *(undefined8 *)(piVar1 + 8);
      }
      if (::Variant::needs_deinit[*piVar1] != '\0') {
        ::Variant::_clear_internal();
      }
      Memory::free_static(piVar1,false);
      *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar2 = *(undefined8 **)this;
  } while (*(int *)(puVar2 + 2) != 0);
  Memory::free_static(puVar2,false);
  return;
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* Ref<Script>::unref() */

void __thiscall Ref<Script>::unref(Ref<Script> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* Ref<Resource>::unref() */

void __thiscall Ref<Resource>::unref(Ref<Resource> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* MethodBind* create_method_bind<EncodedObjectAsID, ObjectID>(void
   (EncodedObjectAsID::*)(ObjectID)) */

MethodBind * create_method_bind<EncodedObjectAsID,ObjectID>(_func_void_ObjectID *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_ObjectID **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001129d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EncodedObjectAsID";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EncodedObjectAsID, ObjectID>(ObjectID (EncodedObjectAsID::*)()
   const) */

MethodBind * create_method_bind<EncodedObjectAsID,ObjectID>(_func_ObjectID *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_ObjectID **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112a38;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EncodedObjectAsID";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar5 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar9 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00110a10:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  if (uVar6 == 0xffffffffffffffff) goto LAB_00110a10;
  if (param_1 <= lVar9) {
    puVar7 = *(undefined8 **)this;
    uVar8 = param_1;
    while (puVar7 != (undefined8 *)0x0) {
      if ((ulong)puVar7[-1] <= uVar8) {
LAB_00110899:
        if (uVar6 + 1 != lVar5) {
          puVar4 = (undefined8 *)Memory::realloc_static(puVar7 + -2,uVar6 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) goto LAB_00110a3f;
          puVar7 = puVar4 + 2;
          *puVar4 = 1;
          *(undefined8 **)this = puVar7;
        }
        puVar7[-1] = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = puVar7 + uVar8;
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if ((ulong)puVar7[-1] <= uVar8) goto LAB_00110899;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar9 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      puVar7 = *(undefined8 **)this;
    }
LAB_00110a8d:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar6 + 1 == lVar5) {
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) goto LAB_00110a8d;
    lVar9 = puVar7[-1];
LAB_00110970:
    if (param_1 <= lVar9) goto LAB_00110925;
  }
  else {
    if (lVar9 != 0) {
      puVar4 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar6 + 0x11,false);
      if (puVar4 == (undefined8 *)0x0) {
LAB_00110a3f:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar7 = puVar4 + 2;
      *puVar4 = 1;
      *(undefined8 **)this = puVar7;
      lVar9 = puVar4[1];
      goto LAB_00110970;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar9 = 0;
  }
  memset(puVar7 + lVar9,0,(param_1 - lVar9) * 8);
LAB_00110925:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* Error CowData<StringName>::resize<false>(long) */

undefined8 __thiscall CowData<StringName>::resize<false>(CowData<StringName> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar7 = 0;
    lVar3 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar7 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00110df0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  if (uVar4 == 0xffffffffffffffff) goto LAB_00110df0;
  if (param_1 <= lVar7) {
    puVar5 = *(undefined8 **)this;
    uVar6 = param_1;
    while (puVar5 != (undefined8 *)0x0) {
      if ((ulong)puVar5[-1] <= uVar6) {
LAB_00110c9a:
        if (uVar4 + 1 != lVar3) {
          puVar2 = (undefined8 *)Memory::realloc_static(puVar5 + -2,uVar4 + 0x11,false);
          if (puVar2 == (undefined8 *)0x0) goto LAB_00110e1f;
          puVar5 = puVar2 + 2;
          *puVar2 = 1;
          *(undefined8 **)this = puVar5;
        }
        puVar5[-1] = param_1;
        return 0;
      }
      while ((StringName::configured == '\0' || (puVar5[uVar6] == 0))) {
        uVar6 = uVar6 + 1;
        if ((ulong)puVar5[-1] <= uVar6) goto LAB_00110c9a;
      }
      uVar6 = uVar6 + 1;
      StringName::unref();
      puVar5 = *(undefined8 **)this;
    }
LAB_00110c6a:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uVar4 + 1 == lVar3) {
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00110c6a;
    lVar7 = puVar5[-1];
LAB_00110d50:
    if (param_1 <= lVar7) goto LAB_00110cfd;
  }
  else {
    if (lVar7 != 0) {
      puVar2 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar4 + 0x11,false);
      if (puVar2 == (undefined8 *)0x0) {
LAB_00110e1f:
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar5 = puVar2 + 2;
      *puVar2 = 1;
      *(undefined8 **)this = puVar5;
      lVar7 = puVar2[1];
      goto LAB_00110d50;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar5 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar5;
    lVar7 = 0;
  }
  memset(puVar5 + lVar7,0,(param_1 - lVar7) * 8);
LAB_00110cfd:
  puVar5[-1] = param_1;
  return 0;
}



/* EncodedObjectAsID::_initialize_classv() */

void EncodedObjectAsID::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_00110fc9;
  if (RefCounted::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    lVar2 = local_58;
    if (local_58 == 0) {
LAB_001110da:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_001110ea:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001110da;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_001110ea;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_48 = "RefCounted";
  local_58 = 0;
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "EncodedObjectAsID";
  local_60 = 0;
  local_40 = 0x11;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
  ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  _bind_methods();
  initialize_class()::initialized = '\x01';
LAB_00110fc9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00111278) */
/* WARNING: Removing unreachable block (ram,0x001113a8) */
/* WARNING: Removing unreachable block (ram,0x00111570) */
/* WARNING: Removing unreachable block (ram,0x001113b4) */
/* WARNING: Removing unreachable block (ram,0x001113be) */
/* WARNING: Removing unreachable block (ram,0x00111550) */
/* WARNING: Removing unreachable block (ram,0x001113ca) */
/* WARNING: Removing unreachable block (ram,0x001113d4) */
/* WARNING: Removing unreachable block (ram,0x00111530) */
/* WARNING: Removing unreachable block (ram,0x001113e0) */
/* WARNING: Removing unreachable block (ram,0x001113ea) */
/* WARNING: Removing unreachable block (ram,0x00111510) */
/* WARNING: Removing unreachable block (ram,0x001113f6) */
/* WARNING: Removing unreachable block (ram,0x00111400) */
/* WARNING: Removing unreachable block (ram,0x001114f0) */
/* WARNING: Removing unreachable block (ram,0x0011140c) */
/* WARNING: Removing unreachable block (ram,0x00111416) */
/* WARNING: Removing unreachable block (ram,0x001114d0) */
/* WARNING: Removing unreachable block (ram,0x00111422) */
/* WARNING: Removing unreachable block (ram,0x0011142c) */
/* WARNING: Removing unreachable block (ram,0x001114b0) */
/* WARNING: Removing unreachable block (ram,0x00111434) */
/* WARNING: Removing unreachable block (ram,0x0011144a) */
/* WARNING: Removing unreachable block (ram,0x00111456) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<ObjectID>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<ObjectID>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC143,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00111750;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      local_58 = (char *)(*(code *)pVVar4)();
      ::Variant::Variant((Variant *)local_48,(ObjectID *)&local_58);
      if (::Variant::needs_deinit[*(int *)param_1] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00111750:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<ObjectID>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<ObjectID>::validated_call
          (MethodBindTRC<ObjectID> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111a42;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_00111a42:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<ObjectID>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<ObjectID>::ptrcall
          (MethodBindTRC<ObjectID> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111c41;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar3;
LAB_00111c41:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<ObjectID>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<ObjectID>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar3 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00112005;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111e49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00112005:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<ObjectID>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<ObjectID>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00112225;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00112068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00112225:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<ObjectID>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<ObjectID>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  char *pcVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_48 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC143,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      pcVar4 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_48 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar10 = (long *)(local_50 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001123d0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00112420;
LAB_00112410:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00112420:
        uVar6 = 4;
        goto LAB_001123c5;
      }
      if (in_R8D == 1) goto LAB_00112410;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = ::Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar7 = _LC148;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar7;
    }
    uVar7 = ::Variant::operator_cast_to_ObjectID(pVVar11);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),uVar7);
  }
  else {
    uVar6 = 3;
LAB_001123c5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001123d0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EncodedObjectAsID::~EncodedObjectAsID() */

void __thiscall EncodedObjectAsID::~EncodedObjectAsID(EncodedObjectAsID *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<ObjectID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<ObjectID>::~MethodBindTRC(MethodBindTRC<ObjectID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<ObjectID>::~MethodBindT() */

void __thiscall MethodBindT<ObjectID>::~MethodBindT(MethodBindT<ObjectID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
