/* icu_76_godot::EmojiProps::isAcceptable(void*, char const*, char const*, UDataInfo const*) */bool icu_76_godot::EmojiProps::isAcceptable(void *param_1, char *param_2, char *param_3, UDataInfo *param_4) {
   if (( ( ( 0x13 < *(ushort*)param_4 ) && ( *(short*)( param_4 + 4 ) == 0 ) ) && ( param_4[8] == (UDataInfo)0x45 ) ) && ( ( ( param_4[9] == (UDataInfo)0x6d && ( param_4[10] == (UDataInfo)0x6f ) ) && ( param_4[0xb] == (UDataInfo)0x6a ) ) )) {
      return param_4[0xc] == (UDataInfo)0x1;
   }

   return false;
}
/* icu_76_godot::(anonymous namespace)::emojiprops_cleanup() */undefined8 icu_76_godot:: = (anonymous_namespace)::emojiprops_cleanup(void) {
   UMemory *this;
   void *in_RSI;
   this =
   singleton;
   if (singleton != (UMemory*)0x0) {
      udata_close_76_godot(*(undefined8*)singleton);
      ucptrie_close_76_godot(*(undefined8*)( this + 8 ));
      icu_76_godot::UMemory::operator_delete(this, in_RSI);
   }

   singleton = (UMemory*)0x0;
   LOCK();
   emojiInitOnce = 0;
   UNLOCK();
   return 1;
}
/* icu_76_godot::EmojiProps::~EmojiProps() */void icu_76_godot::EmojiProps::~EmojiProps(EmojiProps *this) {
   udata_close_76_godot(*(undefined8*)this);
   ucptrie_close_76_godot(*(undefined8*)( this + 8 ));
   return;
}
/* icu_76_godot::EmojiProps::load(UErrorCode&) */void icu_76_godot::EmojiProps::load(EmojiProps *this, UErrorCode *param_1) {
   int iVar1;
   undefined8 uVar2;
   int *piVar3;
   long lVar4;
   long lVar5;
   uVar2 = udata_openChoice_76_godot(0, &_LC1, "uemoji", 0x100000, this, param_1);
   iVar1 = *(int*)param_1;
   *(undefined8*)this = uVar2;
   if (iVar1 < 1) {
      piVar3 = (int*)udata_getMemory_76_godot(uVar2);
      iVar1 = *piVar3;
      if (iVar1 < 0x28) {
         *(undefined4*)param_1 = 3;
         return;
      }

      uVar2 = ucptrie_openFromBinary_76_godot(0, 2, (long)iVar1 + (long)piVar3, piVar3[1] - iVar1, 0, param_1);
      *(undefined8*)( this + 8 ) = uVar2;
      if (*(int*)param_1 < 1) {
         lVar4 = 0;
         do {
            iVar1 = *(int*)( (long)piVar3 + lVar4 + 0x10 );
            lVar5 = 0;
            if (iVar1 < *(int*)( (long)piVar3 + lVar4 + 0x14 )) {
               lVar5 = (long)piVar3 + (long)iVar1;
            }

            *(long*)( this + lVar4 * 2 + 0x10 ) = lVar5;
            lVar4 = lVar4 + 4;
         }
 while ( lVar4 != 0x18 );
      }

   }

   return;
}
/* icu_76_godot::(anonymous namespace)::initSingleton(UErrorCode&) [clone .part.0] */void initSingleton(_anonymous_namespace_ *this, UErrorCode *param_1) {
   EmojiProps *this_00;
   _anonymous_namespace_ *p_Var1;
   this_00 = (EmojiProps*)icu_76_godot::UMemory::operator_new((UMemory*)0x40, (ulong)param_1);
   if (this_00 == (EmojiProps*)0x0) {
      *(undefined4*)this = 7;
      singleton = (EmojiProps*)0x0;
   }
 else {
      *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
      for (int i = 0; i < 3; i++) {
         *(undefined1(*) [16])( this_00 + ( 16*i + 16 ) ) = (undefined1[16])0;
      }

      p_Var1 = this;
      EmojiProps::load(this_00, (UErrorCode*)this);
      singleton = this_00;
      if (0 < *(int*)this) {
         udata_close_76_godot(*(undefined8*)this_00);
         ucptrie_close_76_godot(*(undefined8*)( this_00 + 8 ));
         icu_76_godot::UMemory::operator_delete((UMemory*)this_00, p_Var1);
         singleton = (EmojiProps*)0x0;
      }

   }

   ucln_common_registerCleanup_76_godot(0x14, emojiprops_cleanup);
   return;
}
/* icu_76_godot::EmojiProps::getSingleton(UErrorCode&) */undefined8 icu_76_godot::EmojiProps::getSingleton(EmojiProps *this, UErrorCode *param_1) {
   char cVar1;
   int iVar2;
   if (0 < *(int*)this) {
      return 0;
   }

   if (( (anonymous_namespace)::emojiInitOnce != 2 ) && ( cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce*)&(anonymous_namespace)::emojiInitOnce) ),cVar1 != '\0') {
      iVar2 = *(int*)this;
      if (iVar2 < 1) {
         (anonymous_namespace)::initSingleton((_anonymous_namespace_*)this, param_1);
         iVar2 = *(int*)this;
      }

      DAT_00100844 = iVar2;
      icu_76_godot::umtx_initImplPostInit((UInitOnce*)&(anonymous_namespace)::emojiInitOnce);
      return (anonymous_namespace)::singleton;
   }

   if (0 < DAT_00100844) {
      *(int*)this = DAT_00100844;
   }

   return (anonymous_namespace)::singleton;
}
/* icu_76_godot::EmojiProps::addPropertyStarts(USetAdder const*, UErrorCode&) const */void icu_76_godot::EmojiProps::addPropertyStarts(USetAdder *param_1, UErrorCode *param_2) {
   undefined8 uVar1;
   int iVar2;
   int iVar3;
   long in_FS_OFFSET;
   undefined8 uStack_40;
   undefined1 local_34[4];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = 0;
   while (true) {
      uVar1 = uStack_40;
      iVar2 = ucptrie_getRange_76_godot(*(undefined8*)( param_1 + 8 ), iVar3, 0, 0, 0, 0, local_34);
      if (iVar2 < 0) break;
      uStack_40 = 0x1002de;
      ( **(code**)( param_2 + 8 ) )(*(undefined8*)param_2, iVar3, uVar1);
      iVar3 = iVar2 + 1;
   }
;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::EmojiProps::hasBinaryProperty(int, UProperty) */bool icu_76_godot::EmojiProps::hasBinaryProperty(uint param_1, UErrorCode *param_2) {
   long *plVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   long lVar5;
   uint uVar6;
   UErrorCode *pUVar7;
   long in_FS_OFFSET;
   bool bVar8;
   int local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_24 = 0;
   if ((anonymous_namespace)::emojiInitOnce == 2) {
      LAB_00100363:if (DAT_00100844 < 1) goto LAB_001003c7;
   }
 else {
      pUVar7 = param_2;
      cVar3 = icu_76_godot::umtx_initImplPreInit((UInitOnce*)&(anonymous_namespace)::emojiInitOnce);
      if (cVar3 == '\0') goto LAB_00100363;
      if (local_24 < 1) {
         (anonymous_namespace)::initSingleton((_anonymous_namespace_*)&local_24, pUVar7);
      }

      DAT_00100844 = local_24;
      icu_76_godot::umtx_initImplPostInit((UInitOnce*)&(anonymous_namespace)::emojiInitOnce);
      LAB_001003c7:if (( local_24 < 1 ) && ( uVar6 = uVar6 < 0xf )) {
         plVar1 = *(long**)( (anonymous_namespace)::singleton + 8 );
         cVar3= hasBinaryPropertyImpl(int,UProperty)::bitFlags[(int)uVar6];
         if (-1 < cVar3) {
            lVar2 = plVar1[1];
            if (param_1 < 0x10000) {
               lVar5 = (long)(int)( ( uint ) * (ushort*)( *plVar1 + (long)( (int)param_1 >> 6 ) * 2 ) + ( param_1 & 0x3f ) );
            }
 else if (param_1 < 0x110000) {
               if ((int)param_1 < (int)plVar1[3]) {
                  iVar4 = ucptrie_internalSmallIndex_76_godot(plVar1, param_1);
                  lVar5 = (long)iVar4;
               }
 else {
                  lVar5 = (long)( *(int*)( (long)plVar1 + 0x14 ) + -2 );
               }

            }
 else {
               lVar5 = (long)( *(int*)( (long)plVar1 + 0x14 ) + -1 );
            }

            bVar8 = ( *(byte*)( lVar2 + lVar5 ) >> ( (int)cVar3 & 0x1fU ) & 1 ) != 0;
            goto LAB_0010036f;
         }

      }

   }

   bVar8 = false;
   LAB_0010036f:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::EmojiProps::hasBinaryPropertyImpl(int, UProperty) const */bool icu_76_godot::EmojiProps::hasBinaryPropertyImpl(EmojiProps *this, uint param_1, int param_3) {
   char cVar1;
   long *plVar2;
   long lVar3;
   int iVar4;
   long lVar5;
   bool bVar6;
   bVar6 = false;
   if (param_3 - 0x39U < 0xf) {
      cVar1= hasBinaryPropertyImpl(int,UProperty)::bitFlags[(int)( param_3 - 0x39U )];
      if (-1 < cVar1) {
         plVar2 = *(long**)( this + 8 );
         lVar3 = plVar2[1];
         if (param_1 < 0x10000) {
            lVar5 = (long)(int)( ( uint ) * (ushort*)( *plVar2 + (long)( (int)param_1 >> 6 ) * 2 ) + ( param_1 & 0x3f ) );
         }
 else if (param_1 < 0x110000) {
            if ((int)param_1 < (int)plVar2[3]) {
               iVar4 = ucptrie_internalSmallIndex_76_godot();
               lVar5 = (long)iVar4;
            }
 else {
               lVar5 = (long)( *(int*)( (long)plVar2 + 0x14 ) + -2 );
            }

         }
 else {
            lVar5 = (long)( *(int*)( (long)plVar2 + 0x14 ) + -1 );
         }

         bVar6 = ( *(byte*)( lVar3 + lVar5 ) >> ( (int)cVar1 & 0x1fU ) & 1 ) != 0;
      }

      return bVar6;
   }

   return false;
}
/* icu_76_godot::EmojiProps::hasBinaryPropertyImpl(char16_t const*, int, UProperty) const */undefined8 icu_76_godot::EmojiProps::hasBinaryPropertyImpl(EmojiProps *this, short *param_1, int param_2, int param_4) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   int iVar5;
   long in_FS_OFFSET;
   short *local_70;
   undefined8 local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( param_1 != (short*)0x0 ) || ( param_2 == 0 ) ) && ( ( 0 < param_2 || ( ( param_2 != 0 && ( *param_1 != 0 ) ) ) ) ) ) && ( param_4 - 0x41U < 7 )) {
      iVar5 = param_4;
      if (param_4 == 0x47) {
         iVar5 = 0x46;
         param_4 = 0x41;
      }

      lVar4 = (long)param_4;
      do {
         lVar1 = *(long*)( this + lVar4 * 8 + -0x1f8 );
         if (lVar1 != 0) {
            local_68 = 0;
            local_50 = 0xffffffff;
            local_70 = param_1;
            local_60 = lVar1;
            local_58 = lVar1;
            iVar2 = icu_76_godot::UCharsTrie::next((UCharsTrie*)&local_68, &local_70, param_2);
            if (1 < iVar2) {
               icu_76_godot::UCharsTrie::~UCharsTrie((UCharsTrie*)&local_68);
               uVar3 = 1;
               goto LAB_00100546;
            }

            icu_76_godot::UCharsTrie::~UCharsTrie((UCharsTrie*)&local_68);
         }

         lVar4 = lVar4 + 1;
      }
 while ( (int)lVar4 <= iVar5 );
   }

   uVar3 = 0;
   LAB_00100546:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* icu_76_godot::EmojiProps::hasBinaryProperty(char16_t const*, int, UProperty) */bool icu_76_godot::EmojiProps::hasBinaryProperty(undefined8 param_1, UErrorCode *param_2, undefined4 param_3) {
   char cVar1;
   ulong uVar2;
   long in_FS_OFFSET;
   bool bVar3;
   int local_34;
   long local_30;
   uVar2 = (ulong)param_2 & 0xffffffff;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_34 = 0;
   if ((anonymous_namespace)::emojiInitOnce == 2) {
      LAB_00100688:if (DAT_00100844 < 1) goto LAB_001006e7;
   }
 else {
      cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce*)&(anonymous_namespace)::emojiInitOnce);
      if (cVar1 == '\0') goto LAB_00100688;
      if (local_34 < 1) {
         (anonymous_namespace)::initSingleton((_anonymous_namespace_*)&local_34, param_2);
      }

      DAT_00100844 = local_34;
      icu_76_godot::umtx_initImplPostInit((UInitOnce*)&(anonymous_namespace)::emojiInitOnce);
      LAB_001006e7:if (local_34 < 1) {
         cVar1 = hasBinaryPropertyImpl((anonymous_namespace)::singleton, param_1, uVar2, param_3);
         bVar3 = cVar1 != '\0';
         goto LAB_00100694;
      }

   }

   bVar3 = false;
   LAB_00100694:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::EmojiProps::addStrings(USetAdder const*, UProperty, UErrorCode&) const */void icu_76_godot::EmojiProps::addStrings(EmojiProps *this, undefined8 *param_1, int param_3, int *param_4) {
   char cVar1;
   int iVar2;
   long lVar3;
   undefined1 *puVar4;
   long in_FS_OFFSET;
   long local_c0;
   UErrorCode local_b8[48];
   ushort local_88;
   undefined1 local_86[2];
   int local_84;
   undefined1 *local_78;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *param_4 < 1 ) && ( param_3 - 0x41U < 7 )) {
      iVar2 = param_3;
      if (param_3 == 0x47) {
         param_3 = 0x46;
         iVar2 = 0x41;
      }

      lVar3 = (long)iVar2;
      do {
         if (*(long*)( this + lVar3 * 8 + -0x1f8 ) != 0) {
            local_c0 = *(long*)( this + lVar3 * 8 + -0x1f8 );
            icu_76_godot::UCharsTrie::Iterator::Iterator((Iterator*)local_b8, &local_c0, 0, param_4);
            while (true) {
               cVar1 = icu_76_godot::UCharsTrie::Iterator::next(local_b8);
               if (cVar1 == '\0') break;
               if ((short)local_88 < 0) {
                  iVar2 = local_84;
                  if (( local_88 & 0x11 ) != 0) goto LAB_001007f6;
                  LAB_001007bd:puVar4 = local_86;
                  if (( local_88 & 2 ) == 0) {
                     puVar4 = local_78;
                  }

               }
 else {
                  iVar2 = (int)( (short)local_88 >> 5 );
                  if (( local_88 & 0x11 ) == 0) goto LAB_001007bd;
                  LAB_001007f6:puVar4 = (undefined1*)0x0;
               }

               ( *(code*)param_1[3] )(*param_1, puVar4, iVar2);
            }
;
            icu_76_godot::UCharsTrie::Iterator::~Iterator((Iterator*)local_b8);
         }

         lVar3 = lVar3 + 1;
      }
 while ( (int)lVar3 <= param_3 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

