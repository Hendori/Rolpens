/* AnimationTrackEditColor::is_key_selectable_by_distance() const */undefined8 AnimationTrackEditColor::is_key_selectable_by_distance(void) {
   return 0;
}
/* AnimationTrackEditTypeAudio::get_cursor_shape(Vector2 const&) const */undefined8 AnimationTrackEditTypeAudio::get_cursor_shape(Vector2 *param_1) {
   undefined8 uVar1;
   if (( param_1[0xad8] == (Vector2)0x0 ) && ( param_1[0xac8] == (Vector2)0x0 )) {
      uVar1 = Control::get_default_cursor_shape();
      return uVar1;
   }

   return 10;
}
/* AnimationTrackEditDefaultPlugin::create_animation_track_edit(Object*) */AnimationTrackEdit * __thiscall
AnimationTrackEditDefaultPlugin::create_animation_track_edit
          (AnimationTrackEditDefaultPlugin *this,Object *param_1){
   AnimationTrackEdit *this_00;
   this_00 = (AnimationTrackEdit*)operator_new(0xad0, "");
   AnimationTrackEdit::AnimationTrackEdit(this_00);
   *(undefined8*)( this_00 + 0xac8 ) = 0;
   *(undefined***)this_00 = &PTR__initialize_classv_00118ed8;
   postinitialize_handler((Object*)this_00);
   *(undefined8*)( this_00 + 0xac8 ) = *(undefined8*)( param_1 + 0x60 );
   return this_00;
}
/* void Ref<AudioStream>::TEMPNAMEPLACEHOLDERVALUE(Ref<Resource> const&) [clone .isra.0] */void Ref<AudioStream>::operator =(Ref<AudioStream> *this, Ref *param_1) {
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
      pOVar3 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &AudioStream::typeinfo, 0);
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
/* Ref<Texture2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Texture2D> const&) [clone .isra.0] */void Ref<Texture2D>::operator =(Ref<Texture2D> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   pOVar1 = *(Object**)this;
   if (pOVar1 != (Object*)param_1) {
      *(Ref**)this = param_1;
      if (param_1 != (Ref*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)this = 0;
         }

      }

      if (pOVar1 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               return;
            }

         }

      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationTrackEditVolumeDB::get_key_height() const */int AnimationTrackEditVolumeDB::get_key_height(void) {
   char cVar1;
   int iVar2;
   long in_FS_OFFSET;
   double dVar3;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (const::{lambda()
   #1
   iVar2 = __cxa_guard_acquire(&const::{lambda()
   #1
   if (iVar2 != 0) {
      _scs_create((char *)&const::{lambda()
      #1
      __cxa_atexit(StringName::~StringName,&const::{lambda()
      #1
      __cxa_guard_release(&const::{lambda()
      #1
   }

}
Control::get_editor_theme_icon((StringName*)&local_28);iVar2 = ( **(code**)( *(long*)local_28 + 0x1d0 ) )();dVar3 = (double)iVar2 * __LC15;if (local_28 != (Object*)0x0) {
   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_28);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
         Memory::free_static(local_28, false);
      }

   }

}
if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return (int)dVar3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* AnimationTrackEditBool::get_key_height() const */undefined4 AnimationTrackEditBool::get_key_height(AnimationTrackEditBool *this) {
   char cVar1;
   undefined4 uVar2;
   int iVar3;
   long in_FS_OFFSET;
   Object *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (const::{lambda()
   #2
   iVar3 = __cxa_guard_acquire(&const::{lambda()
   #2
   if (iVar3 != 0) {
      _scs_create((char *)&const::{lambda()
      #2
      __cxa_atexit(StringName::~StringName,&const::{lambda()
      #2
      __cxa_guard_release(&const::{lambda()
      #2
   }

}
if (const::{lambda()#1iVar3 = __cxa_guard_acquire(&const::{lambda()#1if (iVar3 != 0) {
   _scs_create((char *)&const::{lambda()
   #1
   __cxa_atexit(StringName::~StringName,&const::{lambda()
   #1
   __cxa_guard_release(&const::{lambda()
   #1
}
}Control::get_theme_icon((StringName*)&local_38, (StringName*)this);uVar2 = ( **(code**)( *(long*)local_38 + 0x1d0 ) )();if (local_38 != (Object*)0x0) {
   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_38);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)local_38 + 0x140 ) )(local_38);
         Memory::free_static(local_38, false);
      }

   }

}
if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar2;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationTrackEditVolumeDB::draw_bg(int, int) */void AnimationTrackEditVolumeDB::draw_bg(AnimationTrackEditVolumeDB *this, int param_1, int param_2) {
   char cVar1;
   int iVar2;
   int iVar3;
   long in_FS_OFFSET;
   float extraout_XMM0_Db;
   Object *local_60;
   undefined8 local_58;
   undefined8 uStack_50;
   float local_48;
   float fStack_44;
   float fStack_40;
   float fStack_3c;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (draw_bg(int,int)::{lambda()
   #1
   iVar2 = __cxa_guard_acquire(&draw_bg(int,int)::{lambda()
   #1
   if (iVar2 != 0) {
      _scs_create((char *)&draw_bg(int,int)::{lambda()
      #1
      __cxa_atexit(StringName::~StringName, &draw_bg(int,int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&draw_bg(int,int)::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_60);
  iVar2 = (**(code **)(*(long *)local_60 + 0x1d0))();
  Control::get_size();
  iVar3 = (int)((extraout_XMM0_Db - (float)iVar2) * _LC18);
  local_58 = __LC37;
  uStack_50 = _UNK_001199f8;
  local_48 = (float)param_1;
  fStack_44 = (float)iVar3;
  fStack_40 = (float)(param_2 - param_1);
  fStack_3c = (float)(iVar2 + iVar3);
  CanvasItem::draw_texture_rect
            ((Ref *)this,(Rect2 *)&local_60,SUB81(&local_48,0),(Color *)0x0,SUB81(&local_58,0));
  if (local_60 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_60);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_60 + 0x140))(local_60);
        Memory::free_static(local_60,false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }, /* WARNING: Subroutine does not return */, __stack_chk_fail();
}, /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */, /* AnimationTrackEditVolumeDB::draw_fg(int, int) */, void __thiscall
AnimationTrackEditVolumeDB::draw_fg(AnimationTrackEditVolumeDB *this,int param_1,int param_2), {
               char cVar1;
               int iVar2;
               long in_FS_OFFSET;
               float extraout_XMM0_Db;
               Object *local_60;
               undefined8 local_58;
               undefined8 local_50;
               undefined8 local_48;
               undefined8 uStack_40;
               long local_30;
               local_30 = *(long*)( in_FS_OFFSET + 0x28 );
               if (draw_fg(int,int)::{lambda()
               #1
               iVar2 = __cxa_guard_acquire(&draw_fg(int,int)::{lambda()
               #1
               if (iVar2 != 0) {
                  _scs_create((char *)&draw_fg(int,int)::{lambda()
                  #1
                  __cxa_atexit(StringName::~StringName,&draw_fg(int,int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&draw_fg(int,int)::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_60);
  iVar2 = (**(code **)(*(long *)local_60 + 0x1d0))();
  Control::get_size();
  iVar2 = (int)((double)(int)((extraout_XMM0_Db - (float)iVar2) * _LC18) + (double)iVar2 * __LC20);
  local_48 = __LC37;
  uStack_40 = _UNK_001199f8;
  local_50 = CONCAT44((float)iVar2,(float)param_2);
  local_58 = CONCAT44((float)iVar2,(float)param_1);
  CanvasItem::draw_line
            ((Vector2 *)this,(Vector2 *)&local_58,(Color *)&local_50,_LC21,SUB81(&local_48,0));
  if (local_60 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_60);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_60 + 0x140))(local_60);
        Memory::free_static(local_60,false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationTrackEditColor::get_key_height() const */

int AnimationTrackEditColor::get_key_height(void)

{
  char cVar1;
  int iVar2;
  undefined8 in_RDX;
  undefined8 in_RSI;
  StringName *in_RDI;
  long in_FS_OFFSET;
  float fVar3;
  double dVar4;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (const::{lambda()
                  #1
                  iVar2 = __cxa_guard_acquire(&const::{lambda()
                  #1
                  &const::{lambda();
                  #1
                  if (iVar2 != 0) {
                     _scs_create((char *)&const::{lambda()
                     #1
                     __cxa_atexit(StringName::~StringName,&const::{lambda()
                     #1
                     __cxa_guard_release(&const::{lambda()
                     #1
                  }

               }

               Control::get_theme_font((StringName*)&local_28, in_RDI);
               if (const::{lambda()
               #2
               iVar2 = __cxa_guard_acquire(&const::{lambda()
               #2
               if (iVar2 != 0) {
                  _scs_create((char *)&const::{lambda()
                  #2
                  __cxa_atexit(StringName::~StringName,&const::{lambda()
                  #2
                  __cxa_guard_release(&const::{lambda()
                  #2
               }

            }
, Control::get_theme_font_size(in_RDI, (StringName*)( SceneStringNames::singleton + 0xa8 )));
      fVar3 = (float)( **(code**)( *(long*)local_28 + 0x218 ) )();
      dVar4 = (double)fVar3 * __LC23;
      if (local_28 != (Object*)0x0) {
         cVar1 = RefCounted::unreference();
         if (cVar1 != '\0') {
            cVar1 = predelete_handler(local_28);
            if (cVar1 != '\0') {
               ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
               Memory::free_static(local_28, false);
            }

         }

      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return (int)dVar4;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* AnimationTrackEditTypeAudio::get_key_height() const */
   int AnimationTrackEditTypeAudio::get_key_height(void) {
      char cVar1;
      int iVar2;
      undefined8 in_RDX;
      undefined8 in_RSI;
      StringName *in_RDI;
      long in_FS_OFFSET;
      float fVar3;
      double dVar4;
      Object *local_28;
      long local_20;
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      if (const::{lambda()
      #1
      iVar2 = __cxa_guard_acquire(&const::{lambda()
      #1
      &const::{lambda();
      #1
      if (iVar2 != 0) {
         _scs_create((char *)&const::{lambda()
         #1
         __cxa_atexit(StringName::~StringName,&const::{lambda()
         #1
         __cxa_guard_release(&const::{lambda()
         #1
      }

   }

   Control::get_theme_font((StringName*)&local_28, in_RDI);
   if (const::{lambda()
   #2
   iVar2 = __cxa_guard_acquire(&const::{lambda()
   #2
   if (iVar2 != 0) {
      _scs_create((char *)&const::{lambda()
      #2
      __cxa_atexit(StringName::~StringName,&const::{lambda()
      #2
      __cxa_guard_release(&const::{lambda()
      #2
   }

}
Control::get_theme_font_size(in_RDI, (StringName*)( SceneStringNames::singleton + 0xa8 ));fVar3 = (float)( **(code**)( *(long*)local_28 + 0x218 ) )();dVar4 = (double)fVar3 * __LC24;if (local_28 != (Object*)0x0) {
   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_28);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
         Memory::free_static(local_28, false);
      }

   }

}
if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return (int)dVar4;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* AnimationTrackEditBool::get_key_rect(int, float) */undefined1[16];AnimationTrackEditBool::get_key_rect(int param_1, float param_2) {
   char cVar1;
   int iVar2;
   int iVar3;
   undefined4 in_register_0000003c;
   long in_FS_OFFSET;
   long lVar4;
   undefined8 extraout_XMM0_Qa;
   undefined8 uVar5;
   undefined1 in_register_00001204[12];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   Object *local_38;
   long local_30;
   auVar6._4_12_ = in_register_00001204;
   auVar6._0_4_ = param_2;
   uVar5 = auVar6._0_8_;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (get_key_rect(int,float)::{lambda()
   #2
   iVar2 = __cxa_guard_acquire(uVar5,&get_key_rect(int,float)::{lambda()
   #2
   uVar5 = extraout_XMM0_Qa;
   if (iVar2 != 0) {
      _scs_create((char *)&get_key_rect(int,float)::{lambda()
      #2
      __cxa_atexit(StringName::~StringName,
                   &get_key_rect(int,float)::{lambda()
      #2
      uVar5 = __cxa_guard_release(&get_key_rect(int,float)::{lambda()
      #2
   }

}
if (get_key_rect(int,float)::{lambda()#1iVar2 = __cxa_guard_acquire(uVar5,&get_key_rect(int,float)::{lambda()#1if (iVar2 != 0) {
   _scs_create((char *)&get_key_rect(int,float)::{lambda()
   #1
   __cxa_atexit(StringName::~StringName,
                   &get_key_rect(int,float)::{lambda()
   #1
   __cxa_guard_release(&get_key_rect(int,float)::{lambda()
   #1
}
}Control::get_theme_icon((StringName*)&local_38, (StringName*)CONCAT44(in_register_0000003c, param_1));lVar4 = Control::get_size();iVar2 = ( **(code**)( *(long*)local_38 + 0x1c8 ) )();iVar3 = ( **(code**)( *(long*)local_38 + 0x1c8 ) )();auVar7._0_4_ = (float)-(iVar3 / 2);auVar7._4_4_ = 0;if (local_38 != (Object*)0x0) {
   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_38);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)local_38 + 0x140 ) )(local_38);
         Memory::free_static(local_38, false);
      }

   }

}
if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   auVar7._8_8_ = ( lVar4 >> 0x20 ) << 0x20 | (ulong)(uint)(float)iVar2;
   return auVar7;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationTrackEditColor::get_key_rect(int, float) */undefined1  [16] __thiscallAnimationTrackEditColor::get_key_rect(AnimationTrackEditColor *this, int param_1, float param_2) {
   char cVar1;
   int iVar2;
   undefined8 in_RDX;
   undefined4 in_register_00000034;
   long in_FS_OFFSET;
   float fVar3;
   double dVar4;
   ulong uVar5;
   undefined1 in_register_00001204[12];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   Object *local_28;
   long local_20;
   auVar6._4_12_ = in_register_00001204;
   auVar6._0_4_ = param_2;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (get_key_rect(int,float)::{lambda()
   #1
   iVar2 = __cxa_guard_acquire(auVar6._0_8_,
                                &get_key_rect(int,float)::{lambda()#1}::operator()()::sname,
                                CONCAT44(in_register_00000034,param_1),in_RDX,
                                &get_key_rect(int,float)::{lambda()
   #1
   if (iVar2 != 0) {
      _scs_create((char *)&get_key_rect(int,float)::{lambda()
      #1
      __cxa_atexit(StringName::~StringName,
                   &get_key_rect(int,float)::{lambda()
      #1
      __cxa_guard_release(&get_key_rect(int,float)::{lambda()
      #1
   }

}
Control::get_theme_font((StringName*)&local_28, (StringName*)this);if (get_key_rect(int,float)::{lambda()#2iVar2 = __cxa_guard_acquire(&get_key_rect(int,float)::{lambda()#2if (iVar2 != 0) {
   _scs_create((char *)&get_key_rect(int,float)::{lambda()
   #2
   __cxa_atexit(StringName::~StringName,
                   &get_key_rect(int,float)::{lambda()
   #2
   __cxa_guard_release(&get_key_rect(int,float)::{lambda()
   #2
}
}Control::get_theme_font_size((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xa8 ));fVar3 = (float)( **(code**)( *(long*)local_28 + 0x218 ) )();dVar4 = (double)fVar3 * __LC23;uVar5 = Control::get_size();auVar7._4_4_ = 0;auVar7._0_4_ = (float)-((int)dVar4 / 2);if (local_28 != (Object*)0x0) {
   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_28);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
         Memory::free_static(local_28, false);
      }

   }

}
if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
   auVar7._8_8_ = (ulong)(uint)(float)(int)dVar4 | uVar5 & 0xffffffff00000000;
   return auVar7;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* AnimationTrackEditTypeAudio::_preview_changed(ObjectID) */void AnimationTrackEditTypeAudio::_preview_changed(undefined8 param_1, long param_2) {
   Object *pOVar1;
   char cVar2;
   int iVar3;
   Object *pOVar4;
   int iVar5;
   long in_FS_OFFSET;
   Object *local_50;
   Object *local_48;
   long local_40;
   iVar5 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do if (iVar3 <= iVar5) if (local_48 == (Object*)0x0) {
      if (( local_50 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0') {
         pOVar4 = (Object*)0x0;
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            LAB_00101119:( **(code**)( *(long*)local_50 + 0x140 ) )();
            Memory::free_static(local_50, false);
            goto LAB_00101002;
         }

      }

   }
 else {
      pOVar4 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &AudioStream::typeinfo, 0);
      if (pOVar4 == (Object*)0x0) {
         LAB_00100fdb:cVar2 = RefCounted::unreference();
         pOVar1 = local_48;
         if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(local_48) ),cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )();
            Memory::free_static(pOVar1, false);
         }

         if (local_50 != (Object*)0x0) {
            cVar2 = RefCounted::unreference();
            joined_r0x00100ffc:if (cVar2 != '\0') goto LAB_001010fd;
         }

         LAB_00101002:if (pOVar4 == (Object*)0x0) goto LAB_00101021;
      }
 else {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            pOVar4 = (Object*)0x0;
            if (local_48 != (Object*)0x0) goto LAB_00100fdb;
            if (( local_50 == (Object*)0x0 ) || ( cVar2 = RefCounted::unreference() ),cVar2 == '\0') goto LAB_00101021;
            LAB_001010fd:cVar2 = predelete_handler(local_50);
            if (cVar2 != '\0') goto LAB_00101119;
            goto LAB_00101002;
         }

         if (local_48 != (Object*)0x0) goto LAB_00100fdb;
         if (local_50 != (Object*)0x0) {
            cVar2 = RefCounted::unreference();
            goto joined_r0x00100ffc;
         }

      }

      if (param_2 == *(long*)( pOVar4 + 0x60 )) {
         CanvasItem::queue_redraw();
         cVar2 = RefCounted::unreference();
         if (( cVar2 == '\0' ) || ( cVar2 = predelete_handler(pOVar4) ),cVar2 == '\0') {
            LAB_001011a0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

         }
 else {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static(pOVar4, false);
               return;
            }

         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      cVar2 = RefCounted::unreference();
      if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar4) ),cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
      }

   }
 while ( true );
}
/* AnimationTrackEditAudio::set_node(Object*) */void AnimationTrackEditAudio::set_node(AnimationTrackEditAudio *this, Object *param_1) {
   *(undefined8*)( this + 0xac8 ) = *(undefined8*)( param_1 + 0x60 );
   return;
}
/* AnimationTrackEditAudio::AnimationTrackEditAudio() */void AnimationTrackEditAudio::AnimationTrackEditAudio(AnimationTrackEditAudio *this) {
   code *pcVar1;
   undefined8 uVar2;
   long *plVar3;
   CallableCustom *this_00;
   long in_FS_OFFSET;
   long local_50;
   Callable local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   AnimationTrackEdit::AnimationTrackEdit((AnimationTrackEdit*)this);
   plVar3 = AudioStreamPreviewGenerator::singleton;
   *(undefined***)this = &PTR__initialize_classv_00117cb8;
   *(undefined8*)( this + 0xac8 ) = 0;
   pcVar1 = *(code**)( *plVar3 + 0x108 );
   this_00 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(this_00);
   *(AnimationTrackEditAudio**)( this_00 + 0x28 ) = this;
   *(undefined1(*) [16])( this_00 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)this_00 = &PTR_hash_001193f0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   uVar2 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( this_00 + 0x10 ) = 0;
   *(undefined8*)( this_00 + 0x30 ) = uVar2;
   *(code**)( this_00 + 0x38 ) = _preview_changed;
   *(undefined**)( this_00 + 0x20 ) = &_LC0;
   CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
   *(char**)( this_00 + 0x20 ) = "AnimationTrackEditAudio::_preview_changed";
   Callable::Callable(local_48, this_00);
   StringName::StringName((StringName*)&local_50, "preview_updated", false);
   ( *pcVar1 )(plVar3, (StringName*)&local_50, local_48, 0);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable(local_48);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationTrackEditSpriteFrame::set_node(Object*) */void AnimationTrackEditSpriteFrame::set_node(AnimationTrackEditSpriteFrame *this, Object *param_1) {
   *(undefined8*)( this + 0xac8 ) = *(undefined8*)( param_1 + 0x60 );
   return;
}
/* AnimationTrackEditSpriteFrame::set_as_coords() */void AnimationTrackEditSpriteFrame::set_as_coords(AnimationTrackEditSpriteFrame *this) {
   this[0xad0] = (AnimationTrackEditSpriteFrame)0x1;
   return;
}
/* AnimationTrackEditSubAnim::set_node(Object*) */void AnimationTrackEditSubAnim::set_node(AnimationTrackEditSubAnim *this, Object *param_1) {
   *(undefined8*)( this + 0xac8 ) = *(undefined8*)( param_1 + 0x60 );
   return;
}
/* AnimationTrackEditTypeAudio::AnimationTrackEditTypeAudio() */void AnimationTrackEditTypeAudio::AnimationTrackEditTypeAudio(AnimationTrackEditTypeAudio *this) {
   long lVar1;
   code *pcVar2;
   undefined8 uVar3;
   long *plVar4;
   CallableCustom *this_00;
   long in_FS_OFFSET;
   long local_50;
   Callable local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   AnimationTrackEdit::AnimationTrackEdit((AnimationTrackEdit*)this);
   *(undefined***)this = &PTR__initialize_classv_00118b38;
   plVar4 = AudioStreamPreviewGenerator::singleton;
   *(undefined2*)( this + 0xac8 ) = 0;
   *(undefined4*)( this + 0xacc ) = 0;
   lVar1 = *plVar4;
   *(undefined8*)( this + 0xad0 ) = 0;
   this[0xad8] = (AnimationTrackEditTypeAudio)0x0;
   pcVar2 = *(code**)( lVar1 + 0x108 );
   this_00 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(this_00);
   *(AnimationTrackEditTypeAudio**)( this_00 + 0x28 ) = this;
   *(undefined1(*) [16])( this_00 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)this_00 = &PTR_hash_00119480;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   uVar3 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( this_00 + 0x10 ) = 0;
   *(undefined8*)( this_00 + 0x30 ) = uVar3;
   *(code**)( this_00 + 0x38 ) = _preview_changed;
   *(undefined**)( this_00 + 0x20 ) = &_LC0;
   CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
   *(char**)( this_00 + 0x20 ) = "AnimationTrackEditTypeAudio::_preview_changed";
   Callable::Callable(local_48, this_00);
   StringName::StringName((StringName*)&local_50, "preview_updated", false);
   ( *pcVar2 )(plVar4, (StringName*)&local_50, local_48, 0);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable(local_48);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationTrackEditDefaultPlugin::create_audio_track_edit() */AnimationTrackEditTypeAudio *AnimationTrackEditDefaultPlugin::create_audio_track_edit(void) {
   AnimationTrackEditTypeAudio *this;
   this(AnimationTrackEditTypeAudio * operator_new(0xae0, ""));
   AnimationTrackEditTypeAudio::AnimationTrackEditTypeAudio(this);
   postinitialize_handler((Object*)this);
   return this;
}
/* AnimationTrackEditTypeAnimation::set_node(Object*) */void AnimationTrackEditTypeAnimation::set_node(AnimationTrackEditTypeAnimation *this, Object *param_1) {
   *(undefined8*)( this + 0xac8 ) = *(undefined8*)( param_1 + 0x60 );
   return;
}
/* AnimationTrackEditTypeAnimation::AnimationTrackEditTypeAnimation() */void AnimationTrackEditTypeAnimation::AnimationTrackEditTypeAnimation(AnimationTrackEditTypeAnimation *this) {
   AnimationTrackEdit::AnimationTrackEdit((AnimationTrackEdit*)this);
   *(undefined8*)( this + 0xac8 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_00118ed8;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationTrackEditColor::draw_key(int, float, int, bool, int, int) */void AnimationTrackEditColor::draw_key(int param_1, float param_2, int param_3, bool param_4, int param_5, int param_6) {
   Object *pOVar1;
   char cVar2;
   undefined4 uVar3;
   bool bVar4;
   undefined7 in_register_00000011;
   undefined4 in_register_0000003c;
   StringName *pSVar5;
   int iVar6;
   long in_FS_OFFSET;
   float fVar7;
   float extraout_XMM0_Db;
   Object *local_90;
   undefined1 local_88[16];
   float local_78;
   float fStack_74;
   float fStack_70;
   float fStack_6c;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined1 local_58[16];
   long local_40;
   pSVar5 = (StringName*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   AnimationTrackEdit::get_animation();
   pOVar1 = local_90;
   AnimationTrackEdit::get_track();
   Animation::track_get_key_value((int)(Variant*)local_58, (int)pOVar1);
   local_88 = Variant::operator_cast_to_Color((Variant*)local_58);
   if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
      Variant::_clear_internal();
   }

   Ref<Animation>::unref((Ref<Animation>*)&local_90);
   if (draw_key(int,float,int,bool,int,int) ::{lambda();
   #1
   iVar6 = __cxa_guard_acquire(&draw_key(int,float,int,bool,int,int)::{lambda()
   #1
   sname;
   if (iVar6 != 0) {
      _scs_create((char *)&draw_key(int,float,int,bool,int,int)::{lambda()
      #1
      true;
      __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
      #1
   }

}
Control::get_theme_font((StringName*)&local_90, pSVar5);if (draw_key(int,float,int,bool,int,int) ::{lambda();#2iVar6 = __cxa_guard_acquire(&draw_key(int,float,int,bool,int,int)::{lambda()#2sname;if (iVar6 != 0) {
   _scs_create((char *)&draw_key(int,float,int,bool,int,int)::{lambda()
   #2
   true;
   __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#2}::operator()()::sname,&__dso_handle);
   __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
   #2
}
}uVar3 = Control::get_theme_font_size(pSVar5, (StringName*)( SceneStringNames::singleton + 0xa8 ));fVar7 = (float)( **(code**)( *(long*)local_90 + 0x218 ) )(local_90, uVar3);iVar6 = (int)( (double)fVar7 * __LC23 );Control::get_size();fVar7 = (float)iVar6 * _LC18;uStack_60 = CONCAT44(fVar7, fVar7);local_78 = (float)( (int)CONCAT71(in_register_00000011, param_4) - iVar6 / 2 );fStack_74 = (float)( (int)( extraout_XMM0_Db - (float)iVar6 ) / 2 );fStack_70 = (float)iVar6;fStack_6c = (float)iVar6;local_68 = CONCAT44(fStack_74, local_78);local_58._0_8_ = __LC33;local_58._8_8_ = _UNK_00119a08;bVar4 = SUB81((Variant*)local_58, 0);AnimationTrackEdit::draw_rect_clipped((Rect2*)pSVar5, (Color*)&local_68, bVar4);local_58._0_8_ = __LC33;local_58._8_8_ = _UNK_00119a08;uStack_60 = CONCAT44(_LC18 * fStack_6c, _LC18 * fStack_70);local_68 = CONCAT44(fStack_74 + _LC18 * fStack_6c, local_78 + _LC18 * fStack_70);AnimationTrackEdit::draw_rect_clipped((Rect2*)pSVar5, (Color*)&local_68, bVar4);local_58._0_8_ = __LC34;local_58._8_8_ = _UNK_00119a18;uStack_60 = CONCAT44(_LC18 * fStack_6c, _LC18 * fStack_70);local_68 = CONCAT44(fStack_74 + 0.0, local_78 + _LC18 * fStack_70);AnimationTrackEdit::draw_rect_clipped((Rect2*)pSVar5, (Color*)&local_68, bVar4);local_58._0_8_ = __LC34;local_58._8_8_ = _UNK_00119a18;local_68 = CONCAT44(fStack_74 + _LC18 * fStack_6c, local_78 + 0.0);uStack_60 = CONCAT44(_LC18 * fStack_6c, _LC18 * fStack_70);AnimationTrackEdit::draw_rect_clipped((Rect2*)pSVar5, (Color*)&local_68, bVar4);AnimationTrackEdit::draw_rect_clipped((Rect2*)pSVar5, (Color*)&local_78, SUB81(local_88, 0));if ((char)param_5 != '\0') {
   if (draw_key(int,float,int,bool,int,int) ::{lambda();
   #3
   iVar6 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#3}::operator()()::sname);
   if (iVar6 != 0) {
      _scs_create((char*)&draw_key, (int,float,int,bool,int, int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#3}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
      #3
      )
      ;;
   }

}
local_58 = Control::get_theme_color(pSVar5, (StringName*)&draw_key, (int,float,int,bool,int, int)::{lambda()#3}::operator()()::sname);AnimationTrackEdit::draw_rect_clipped((Rect2*)pSVar5, (Color*)&local_78, bVar4);}if (local_90 != (Object*)0x0) {
   cVar2 = RefCounted::unreference();
   if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_90);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)local_90 + 0x140 ) )(local_90);
         Memory::free_static(local_90, false);
      }

   }

}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationTrackEditVolumeDB::draw_key_link(int, float, int, int, int, int) */undefined8 AnimationTrackEditVolumeDB::draw_key_link(int param_1, float param_2, int param_3, int param_4, int param_5, int param_6) {
   Object *pOVar1;
   char cVar2;
   int iVar3;
   undefined4 in_register_0000003c;
   int in_R9D;
   long in_FS_OFFSET;
   float fVar4;
   float fVar5;
   float extraout_XMM0_Db;
   undefined8 uVar6;
   undefined8 extraout_XMM0_Qa;
   undefined8 extraout_XMM0_Qa_00;
   undefined1 in_register_00001204[12];
   undefined1 auVar7[16];
   float local_8c;
   float local_88;
   Object *local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined4 local_50;
   float fStack_4c;
   long local_40;
   auVar7._4_12_ = in_register_00001204;
   auVar7._0_4_ = param_2;
   uVar6 = auVar7._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_4 <= in_R9D ) && ( param_6 <= param_5 )) {
      AnimationTrackEdit::get_animation();
      pOVar1 = local_70;
      AnimationTrackEdit::get_track();
      iVar3 = (int)(Variant*)&local_58;
      Animation::track_get_key_value(iVar3, (int)pOVar1);
      fVar4 = Variant::operator_cast_to_float((Variant*)&local_58);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      Ref<Animation>::unref((Ref<Animation>*)&local_70);
      AnimationTrackEdit::get_animation();
      pOVar1 = local_70;
      AnimationTrackEdit::get_track();
      Animation::track_get_key_value(iVar3, (int)pOVar1);
      fVar5 = Variant::operator_cast_to_float((Variant*)&local_58);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      Ref<Animation>::unref((Ref<Animation>*)&local_70);
      local_8c = _LC37;
      if (( _LC38 <= fVar4 ) && ( local_8c = fVar4 <= __LC39 )) {
         local_8c = (float)( _LC42 - (double)( fVar4 + __LC40 ) / __LC41 );
      }

      local_88 = _LC37;
      if (( _LC38 <= fVar5 ) && ( local_88 = fVar5 <= __LC39 )) {
         local_88 = (float)( _LC42 - (double)( fVar5 + __LC40 ) / __LC41 );
      }

      if (param_4 < param_6) {
         local_8c = ( (float)( param_6 - param_4 ) / (float)( param_5 - param_4 ) ) * ( local_88 - local_8c ) + local_8c;
         param_4 = param_6;
      }

      if (in_R9D < param_5) {
         local_88 = ( (float)( in_R9D - param_4 ) / (float)( param_5 - param_4 ) ) * ( local_88 - local_8c ) + local_8c;
         param_5 = in_R9D;
      }

      if (draw_key_link(int,float,int,int,int,int) ::{lambda();
      #1
      iVar3 = __cxa_guard_acquire(&draw_key_link, (int,float,int,int,int, int)::{lambda()#1}::
                                   operator()()::sname);
      if (iVar3 != 0) {
         _scs_create((char *)&draw_key_link(int,float,int,int,int,int)::{lambda()
         #1
         sname,true;
         __cxa_atexit(StringName::~StringName, &draw_key_link, (int,float,int,int,int, int)::{lambda()#1}::operator()()::sname,&__dso_handle);
         __cxa_guard_release(&draw_key_link(int,float,int,int,int,int)::{lambda()
         #1
         sname;
      }

   }

   Control::get_editor_theme_icon((StringName*)&local_70);
   iVar3 = ( **(code**)( *(long*)local_70 + 0x1d0 ) )();
   Control::get_size();
   fVar5 = (float)iVar3;
   fVar4 = ( extraout_XMM0_Db - fVar5 ) * _LC18;
   if (draw_key_link(int,float,int,int,int,int) ::{lambda();
   #2
   iVar3 = __cxa_guard_acquire(&draw_key_link, (int,float,int,int,int, int)::{lambda()#2}::
                                   operator()()::sname);
   if (iVar3 != 0) {
      _scs_create((char *)&draw_key_link(int,float,int,int,int,int)::{lambda()
      #2
      sname,true;
      __cxa_atexit(StringName::~StringName, &draw_key_link, (int,float,int,int,int, int)::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&draw_key_link(int,float,int,int,int,int)::{lambda()
      #2
      sname;
   }

}
auVar7 = Control::get_theme_color((StringName*)CONCAT44(in_register_0000003c, param_1), (StringName*)( SceneStringNames::singleton + 0xb0 ));local_58 = auVar7._0_8_;fVar4 = (float)(int)fVar4;fStack_4c = auVar7._12_4_;_local_50 = CONCAT44((float)( (double)fStack_4c * __LC43 ), auVar7._8_4_);local_68 = CONCAT44(local_88 * fVar5 + fVar4, (float)param_5);local_60 = CONCAT44(local_8c * fVar5 + fVar4, (float)param_4);uVar6 = CanvasItem::draw_line((Vector2*)CONCAT44(in_register_0000003c, param_1), (Vector2*)&local_60, (Color*)&local_68, _LC44, SUB81((Variant*)&local_58, 0));if (local_70 != (Object*)0x0) {
   cVar2 = RefCounted::unreference();
   uVar6 = extraout_XMM0_Qa;
   if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_70);
      uVar6 = extraout_XMM0_Qa_00;
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)local_70 + 0x140 ) )(local_70);
         uVar6 = Memory::free_static(local_70, false);
      }

   }

}
}if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar6;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* AnimationTrackEditTypeAudio::get_key_rect(int, float) */undefined8 AnimationTrackEditTypeAudio::get_key_rect(AnimationTrackEditTypeAudio *this, int param_1, float param_2) {
   char cVar1;
   int iVar2;
   Object *pOVar3;
   long in_FS_OFFSET;
   float fVar4;
   float fVar5;
   float fVar6;
   double dVar7;
   double dVar8;
   undefined8 local_70;
   Object *local_58;
   int local_50[2];
   Object *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   AnimationTrackEdit::get_animation();
   iVar2 = local_50[0];
   AnimationTrackEdit::get_track();
   Animation::audio_track_get_key_stream((int)(Ref<Animation>*)&local_48, iVar2);
   local_58 = (Object*)0x0;
   if (local_48 != (Object*)0x0) {
      pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &AudioStream::typeinfo, 0);
      if (pOVar3 != (Object*)0x0) {
         cVar1 = RefCounted::reference();
         local_58 = pOVar3;
         if (cVar1 == '\0') {
            local_58 = (Object*)0x0;
         }

         if (local_48 == (Object*)0x0) goto LAB_001020f4;
      }

      cVar1 = RefCounted::unreference();
      pOVar3 = local_48;
      if (( cVar1 != '\0' ) && ( cVar1 = predelete_handler(local_48) ),cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
         Memory::free_static(pOVar3, false);
      }

   }

   LAB_001020f4:Ref<Animation>::unref((Ref<Animation>*)local_50);
   if (local_58 == (Object*)0x0) {
      local_70 = AnimationTrackEdit::get_key_rect((int)this, param_2);
   }
 else {
      AnimationTrackEdit::get_animation();
      pOVar3 = local_48;
      iVar2 = AnimationTrackEdit::get_track();
      fVar4 = (float)Animation::audio_track_get_key_start_offset((int)pOVar3, iVar2);
      Ref<Animation>::unref((Ref<Animation>*)&local_48);
      AnimationTrackEdit::get_animation();
      pOVar3 = local_48;
      iVar2 = AnimationTrackEdit::get_track();
      fVar5 = (float)Animation::audio_track_get_key_end_offset((int)pOVar3, iVar2);
      Ref<Animation>::unref((Ref<Animation>*)&local_48);
      dVar7 = (double)( **(code**)( *(long*)local_58 + 0x1f8 ) )();
      fVar6 = (float)dVar7;
      if (fVar6 == 0.0) {
         AudioStreamPreviewGenerator::generate_preview((Ref*)&local_48);
         fVar6 = (float)AudioStreamPreview::get_length();
         if (( ( local_48 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),pOVar3 = local_48,cVar1 != '\0' )) &&( cVar1 = cVar1 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
         Memory::free_static(pOVar3, false);
      }

   }

   fVar4 = ( fVar6 - fVar5 ) - fVar4;
   if ((double)fVar4 <= _LC46) {
      fVar4 = _LC45;
   }

   AnimationTrackEdit::get_animation();
   iVar2 = (int)local_48;
   AnimationTrackEdit::get_track();
   iVar2 = Animation::track_get_key_count(iVar2);
   Ref<Animation>::unref((Ref<Animation>*)&local_48);
   if (param_1 + 1 < iVar2) {
      AnimationTrackEdit::get_animation();
      iVar2 = AnimationTrackEdit::get_track();
      dVar7 = (double)Animation::track_get_key_time(local_50[0], iVar2);
      AnimationTrackEdit::get_animation();
      iVar2 = AnimationTrackEdit::get_track();
      dVar8 = (double)Animation::track_get_key_time((int)local_48, iVar2);
      if (dVar7 - dVar8 <= (double)fVar4) {
         Ref<Animation>::unref((Ref<Animation>*)&local_48);
         Ref<Animation>::unref((Ref<Animation>*)local_50);
      }
 else {
         Ref<Animation>::unref((Ref<Animation>*)&local_48);
         Ref<Animation>::unref((Ref<Animation>*)local_50);
      }

   }

   Control::get_size();
   local_70 = 0;
}
if (( ( local_58 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),cVar1 != '\0' )) &&( cVar1 = cVar1 != '\0' )(**(code**)( *(long*)local_58 + 0x140 ))(local_58);Memory::free_static(local_58, false);}if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return local_70;}/* AnimationTrackEditAudio::_preview_changed(ObjectID) */void AnimationTrackEditAudio::_preview_changed(AnimationTrackEditAudio *this, long param_2) {
   char cVar1;
   long lVar2;
   Object *pOVar3;
   uint uVar4;
   ulong *puVar5;
   long in_FS_OFFSET;
   bool bVar6;
   StringName local_50;
   undefined7 uStack_4f;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = ( uint ) * (ulong*)( this + 0xac8 ) & 0xffffff;
   if ((uint)ObjectDB::slot_max <= uVar4) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         return;
      }

      goto LAB_00102704;
   }

   while (true) {
      local_50 = (StringName)0x0;
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
         ObjectDB::spin_lock._0_1_ = '\x01';
      }

      UNLOCK();
      if (bVar6) break;
      do {} while ( (char)ObjectDB::spin_lock != '\0' );
   }
;
   puVar5 = (ulong*)( (ulong)uVar4 * 0x10 + ObjectDB::object_slots );
   if (( *(ulong*)( this + 0xac8 ) >> 0x18 & 0x7fffffffff ) == ( *puVar5 & 0x7fffffffff )) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar5[1] != 0) {
         StringName::StringName(&local_50, "get_stream", false);
         Object::call<>((StringName*)local_48);
         lVar2 = Variant::get_validated_object();
         if (( lVar2 == 0 ) || ( pOVar3 = (Object*)__dynamic_cast(lVar2, &Object::typeinfo, &AudioStream::typeinfo, 0) ),pOVar3 == (Object*)0x0) {
            if (Variant::needs_deinit[local_48[0]] == '\0') goto LAB_0010255c;
            LAB_00102650:pOVar3 = (Object*)0x0;
            Variant::_clear_internal();
            if (StringName::configured != '\0') {
               LAB_00102668:if (CONCAT71(uStack_4f, local_50) != 0) {
                  StringName::unref();
               }

               if (pOVar3 != (Object*)0x0) goto LAB_001025dd;
            }

         }
 else {
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
               if (Variant::needs_deinit[local_48[0]] != '\0') goto LAB_00102650;
               LAB_0010255c:if (( StringName::configured != '\0' ) && ( CONCAT71(uStack_4f, local_50) != 0 )) {
                  StringName::unref();
               }

            }
 else {
               if (Variant::needs_deinit[local_48[0]] == '\0') {
                  if (( StringName::configured != '\0' ) && ( CONCAT71(uStack_4f, local_50) != 0 )) {
                     StringName::unref();
                  }

               }
 else {
                  Variant::_clear_internal();
                  if (StringName::configured != '\0') goto LAB_00102668;
               }

               LAB_001025dd:if (param_2 == *(long*)( pOVar3 + 0x60 )) {
                  CanvasItem::queue_redraw();
               }

               cVar1 = RefCounted::unreference();
               if (( cVar1 != '\0' ) && ( cVar1 = predelete_handler(pOVar3) ),cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     Memory::free_static(pOVar3, false);
                     return;
                  }

                  goto LAB_00102704;
               }

            }

         }

      }

   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00102704:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* AnimationTrackEdit::initialize_class() [clone .part.0] */void AnimationTrackEdit::initialize_class(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (Control::initialize_class() == '\0') {
      if (CanvasItem::initialize_class() == '\0') {
         if (Node::initialize_class() == '\0') {
            Object::initialize_class();
            local_60 = 0;
            String::parse_latin1((String*)&local_60, "Object");
            StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
            local_70 = 0;
            String::parse_latin1((String*)&local_70, "Node");
            StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if ((code*)PTR__bind_methods_0011f010 != Node::_bind_methods) {
               Node::_bind_methods();
            }

            Node::initialize_class()
            String::parse_latin1((String*)&local_60, "Node");
            StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
            local_70 = 0;
            String::parse_latin1((String*)&local_70, "CanvasItem");
            StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            CanvasItem::_bind_methods();
            if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_compatibility_methods) {
               CanvasItem::_bind_compatibility_methods();
            }

            CanvasItem::initialize_class()
            local_58 = "CanvasItem";
            local_50 = 10;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Control";
            local_70 = 0;
            local_50 = 7;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            Control::_bind_methods();
            Control::initialize_class() {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            if ((code*)PTR__bind_methods_0011f008 != Control::_bind_methods) {
               AnimationTrackEdit::_bind_methods();
            }

            initialize_class()::initialized =
            1;
            if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

         /* AnimationTrackEditDefaultPlugin::create_value_track_edit(Object*, Variant::Type, String const&,
   PropertyHint, String const&, int) */
         AnimationTrackEdit *AnimationTrackEditDefaultPlugin::create_value_track_edit(undefined8 param_1, long *param_2, int param_3, String *param_4) {
            code *pcVar1;
            long lVar2;
            char cVar3;
            AnimationTrackEdit *this;
            long in_FS_OFFSET;
            undefined8 local_60;
            undefined8 local_58;
            undefined8 local_50;
            undefined8 local_48;
            long local_40;
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            cVar3 = String::operator ==(param_4, "playing");
            if (cVar3 == '\0') {
               LAB_00102b82:cVar3 = String::operator ==(param_4, "frame");
               if (cVar3 == '\0') {
                  LAB_00102b99:cVar3 = String::operator ==(param_4, "frame_coords");
                  if (cVar3 == '\0') {
                     LAB_00102bb0:cVar3 = String::operator ==(param_4, "current_animation");
                     if (cVar3 != '\0') {
                        pcVar1 = *(code**)( *param_2 + 0x58 );
                        local_48 = 0;
                        String::parse_latin1((String*)&local_48, "AnimationPlayer");
                        cVar3 = ( *pcVar1 )(param_2, (String*)&local_48);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                        if (cVar3 != '\0') {
                           this(AnimationTrackEdit * operator_new(0xad0, ""));
                           AnimationTrackEdit::AnimationTrackEdit(this);
                           *(undefined8*)( this + 0xac8 ) = 0;
                           *(undefined***)this = &PTR__initialize_classv_001183f8;
                           postinitialize_handler((Object*)this);
                           *(long*)( this + 0xac8 ) = param_2[0xc];
                           goto LAB_00102d2c;
                        }

                     }

                     cVar3 = String::operator ==(param_4, "volume_db");
                     if (cVar3 == '\0') {
                        if (param_3 == 1) {
                           this(AnimationTrackEdit * operator_new(0xad8, ""));
                           AnimationTrackEdit::AnimationTrackEdit(this);
                           *(undefined***)this = &PTR__initialize_classv_00117578;
                           *(undefined1(*) [16])( this + 0xac8 ) = (undefined1[16])0x0;
                           postinitialize_handler((Object*)this);
                        }
 else {
                           this(AnimationTrackEdit * 0x0);
                           if (param_3 == 0x14) {
                              this(AnimationTrackEdit * operator_new(0xac8, ""));
                              AnimationTrackEdit::AnimationTrackEdit(this);
                              *(undefined***)this = &PTR__initialize_classv_00117918;
                              postinitialize_handler((Object*)this);
                           }

                        }

                     }
 else {
                        this(AnimationTrackEdit * operator_new(0xac8, ""));
                        AnimationTrackEdit::AnimationTrackEdit(this);
                        *(undefined***)this = &PTR__initialize_classv_00118798;
                        postinitialize_handler((Object*)this);
                     }

                  }
 else {
                     pcVar1 = *(code**)( *param_2 + 0x58 );
                     local_50 = 0;
                     String::parse_latin1((String*)&local_50, "Sprite2D");
                     cVar3 = ( *pcVar1 )(param_2, (String*)&local_50);
                     if (cVar3 == '\0') {
                        pcVar1 = *(code**)( *param_2 + 0x58 );
                        local_48 = 0;
                        String::parse_latin1((String*)&local_48, "Sprite3D");
                        cVar3 = ( *pcVar1 )(param_2, (String*)&local_48);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                        if (cVar3 == '\0') goto LAB_00102bb0;
                     }
 else {
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                     }

                     this(AnimationTrackEdit * operator_new(0xad8, ""));
                     AnimationTrackEdit::AnimationTrackEdit(this);
                     this[0xad0] = (AnimationTrackEdit)0x0;
                     *(undefined***)this = &PTR__initialize_classv_00118058;
                     *(undefined8*)( this + 0xac8 ) = 0;
                     postinitialize_handler((Object*)this);
                     lVar2 = param_2[0xc];
                     this[0xad0] = (AnimationTrackEdit)0x1;
                     *(long*)( this + 0xac8 ) = lVar2;
                  }

                  goto LAB_00102d2c;
               }

               local_60 = 0;
               pcVar1 = *(code**)( *param_2 + 0x58 );
               String::parse_latin1((String*)&local_60, "Sprite2D");
               cVar3 = ( *pcVar1 )(param_2, (String*)&local_60);
               if (cVar3 == '\0') {
                  pcVar1 = *(code**)( *param_2 + 0x58 );
                  local_58 = 0;
                  String::parse_latin1((String*)&local_58, "Sprite3D");
                  cVar3 = ( *pcVar1 )(param_2, (String*)&local_58);
                  if (cVar3 != '\0') {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     goto LAB_00102c65;
                  }

                  pcVar1 = *(code**)( *param_2 + 0x58 );
                  local_50 = 0;
                  String::parse_latin1((String*)&local_50, "AnimatedSprite2D");
                  cVar3 = ( *pcVar1 )(param_2, (String*)&local_50);
                  if (cVar3 != '\0') {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     goto LAB_00102c65;
                  }

                  pcVar1 = *(code**)( *param_2 + 0x58 );
                  local_48 = 0;
                  String::parse_latin1((String*)&local_48, "AnimatedSprite3D");
                  cVar3 = ( *pcVar1 )(param_2, (String*)&local_48);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  if (cVar3 == '\0') goto LAB_00102b99;
               }
 else {
                  LAB_00102c65:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               }

               this(AnimationTrackEdit * operator_new(0xad8, ""));
               AnimationTrackEdit::AnimationTrackEdit(this);
               this[0xad0] = (AnimationTrackEdit)0x0;
               *(undefined***)this = &PTR__initialize_classv_00118058;
               *(undefined8*)( this + 0xac8 ) = 0;
               postinitialize_handler((Object*)this);
               *(long*)( this + 0xac8 ) = param_2[0xc];
               goto LAB_00102d2c;
            }

            pcVar1 = *(code**)( *param_2 + 0x58 );
            local_58 = 0;
            String::parse_latin1((String*)&local_58, "AudioStreamPlayer");
            cVar3 = ( *pcVar1 )(param_2, (String*)&local_58);
            if (cVar3 == '\0') {
               pcVar1 = *(code**)( *param_2 + 0x58 );
               local_50 = 0;
               String::parse_latin1((String*)&local_50, "AudioStreamPlayer2D");
               cVar3 = ( *pcVar1 )(param_2, (String*)&local_50);
               if (cVar3 != '\0') {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  goto LAB_00102cf5;
               }

               pcVar1 = *(code**)( *param_2 + 0x58 );
               local_48 = 0;
               String::parse_latin1((String*)&local_48, "AudioStreamPlayer3D");
               cVar3 = ( *pcVar1 )(param_2, (String*)&local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               if (cVar3 == '\0') goto LAB_00102b82;
            }
 else {
               LAB_00102cf5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            }

            this(AnimationTrackEdit * operator_new(0xad0, ""));
            AnimationTrackEditAudio::AnimationTrackEditAudio((AnimationTrackEditAudio*)this);
            postinitialize_handler((Object*)this);
            *(long*)( (AnimationTrackEditAudio*)this + 0xac8 ) = param_2[0xc];
            LAB_00102d2c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return this;
         }

         /* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */
         void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
            long *plVar1;
            long lVar2;
            long lVar3;
            bool bVar4;
            _unref(this);
            if (*(long*)param_1 != 0) {
               plVar1 = (long*)( *(long*)param_1 + -0x10 );
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

         /* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */
         void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
            long *plVar1;
            long lVar2;
            undefined4 *puVar3;
            undefined1(*pauVar4)[16];
            if (*(long*)this == 0) {
               pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])this = pauVar4;
               *(undefined4*)pauVar4[1] = 0;
               *pauVar4 = (undefined1[16])0x0;
            }

            puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
            *(undefined8*)( puVar3 + 8 ) = 0;
            *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
            lVar2 = *(long*)( param_1 + 8 );
            *puVar3 = 0;
            puVar3[6] = 0;
            puVar3[10] = 6;
            *(undefined8*)( puVar3 + 0x10 ) = 0;
            *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
            *puVar3 = *(undefined4*)param_1;
            if (lVar2 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)( param_1 + 8 ));
            }

            StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( param_1 + 0x10 ));
            puVar3[6] = *(undefined4*)( param_1 + 0x18 );
            if (*(long*)( puVar3 + 8 ) != *(long*)( param_1 + 0x20 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)( param_1 + 0x20 ));
            }

            puVar3[10] = *(undefined4*)( param_1 + 0x28 );
            plVar1 = *(long**)this;
            lVar2 = plVar1[1];
            *(undefined8*)( puVar3 + 0xc ) = 0;
            *(long**)( puVar3 + 0x10 ) = plVar1;
            *(long*)( puVar3 + 0xe ) = lVar2;
            if (lVar2 != 0) {
               *(undefined4**)( lVar2 + 0x30 ) = puVar3;
            }

            plVar1[1] = (long)puVar3;
            if (*plVar1 != 0) {
               *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
               return;
            }

            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            *plVar1 = (long)puVar3;
            return;
         }

         /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
         /* AnimationTrackEditAudio::get_key_height() const */
         ulong AnimationTrackEditAudio::get_key_height(AnimationTrackEditAudio *this) {
            undefined4 uVar1;
            int iVar2;
            ulong uVar3;
            uint uVar4;
            ulong *puVar5;
            long in_FS_OFFSET;
            bool bVar6;
            float fVar7;
            double dVar8;
            StringName local_38;
            undefined7 uStack_37;
            long local_30;
            local_30 = *(long*)( in_FS_OFFSET + 0x28 );
            uVar4 = ( uint ) * (ulong*)( this + 0xac8 ) & 0xffffff;
            if (uVar4 < (uint)ObjectDB::slot_max) {
               while (true) {
                  local_38 = (StringName)0x0;
                  LOCK();
                  bVar6 = (char)ObjectDB::spin_lock == '\0';
                  if (bVar6) {
                     ObjectDB::spin_lock._0_1_ = '\x01';
                  }

                  UNLOCK();
                  if (bVar6) break;
                  do {} while ( (char)ObjectDB::spin_lock != '\0' );
               }
;
               puVar5 = (ulong*)( (ulong)uVar4 * 0x10 + ObjectDB::object_slots );
               if (( *(ulong*)( this + 0xac8 ) >> 0x18 & 0x7fffffffff ) == ( *puVar5 & 0x7fffffffff )) {
                  ObjectDB::spin_lock._0_1_ = '\0';
                  if (puVar5[1] != 0) {
                     if ((const::{lambda()
                     #1
                     (iVar2 = __cxa_guard_acquire(&const::{lambda()
                     #1
                     _scs_create((char *)&const::{lambda()
                     #1
                     __cxa_atexit(StringName::~StringName,&const::{lambda()
                     #1
                     &__dso_handle;
                     __cxa_guard_release(&const::{lambda()
                     #1
                  }

                  Control::get_theme_font(&local_38, (StringName*)this);
                  if ((const::{lambda()
                  #2
                  (iVar2 = __cxa_guard_acquire(&const::{lambda()
                  #2
                  _scs_create((char *)&const::{lambda()
                  #2
                  __cxa_atexit(StringName::~StringName,&const::{lambda()
                  #2
                  &__dso_handle;
                  __cxa_guard_release(&const::{lambda()
                  #2
               }

               uVar1 = Control::get_theme_font_size((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xa8 ));
               fVar7 = (float)( **(code**)( *(long*)CONCAT71(uStack_37, local_38) + 0x218 ) )((long*)CONCAT71(uStack_37, local_38), uVar1);
               dVar8 = (double)fVar7 * __LC24;
               Ref<Font>::unref((Ref<Font>*)&local_38);
               if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return (ulong)(uint)(int)dVar8;
               }

               goto LAB_001034c0;
            }

         }

         else{ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar3 = AnimationTrackEdit::get_key_height();
      return uVar3;
   }

   LAB_001034c0:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* AnimationTrackEditSpriteFrame::get_key_height() const */ulong AnimationTrackEditSpriteFrame::get_key_height(AnimationTrackEditSpriteFrame *this) {
   undefined4 uVar1;
   int iVar2;
   ulong uVar3;
   uint uVar4;
   ulong *puVar5;
   long in_FS_OFFSET;
   bool bVar6;
   float fVar7;
   StringName local_38;
   undefined7 uStack_37;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = ( uint ) * (ulong*)( this + 0xac8 ) & 0xffffff;
   if (uVar4 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38 = (StringName)0x0;
         LOCK();
         bVar6 = (char)ObjectDB::spin_lock == '\0';
         if (bVar6) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar6) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar5 = (ulong*)( (ulong)uVar4 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0xac8 ) >> 0x18 & 0x7fffffffff ) == ( *puVar5 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar5[1] != 0) {
            if ((const::{lambda()
            #1
            (iVar2 = __cxa_guard_acquire(&const::{lambda()
            #1
            _scs_create((char *)&const::{lambda()
            #1
            __cxa_atexit(StringName::~StringName,&const::{lambda()
            #1
            &__dso_handle;
            __cxa_guard_release(&const::{lambda()
            #1
         }

         Control::get_theme_font(&local_38, (StringName*)this);
         if ((const::{lambda()
         #2
         (iVar2 = __cxa_guard_acquire(&const::{lambda()
         #2
         _scs_create((char *)&const::{lambda()
         #2
         __cxa_atexit(StringName::~StringName,&const::{lambda()
         #2
         &__dso_handle;
         __cxa_guard_release(&const::{lambda()
         #2
      }

      uVar1 = Control::get_theme_font_size((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xa8 ));
      fVar7 = (float)( **(code**)( *(long*)CONCAT71(uStack_37, local_38) + 0x218 ) )((long*)CONCAT71(uStack_37, local_38), uVar1);
      Ref<Font>::unref((Ref<Font>*)&local_38);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return (ulong)(uint)(int)( fVar7 + fVar7 );
      }

      goto LAB_00103728;
   }

}
else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else{
   _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
}
if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   uVar3 = AnimationTrackEdit::get_key_height();
   return uVar3;
}
LAB_00103728:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationTrackEditSubAnim::get_key_height() const */ulong AnimationTrackEditSubAnim::get_key_height(AnimationTrackEditSubAnim *this) {
   undefined4 uVar1;
   int iVar2;
   ulong uVar3;
   uint uVar4;
   ulong *puVar5;
   long in_FS_OFFSET;
   bool bVar6;
   float fVar7;
   double dVar8;
   StringName local_38;
   undefined7 uStack_37;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = ( uint ) * (ulong*)( this + 0xac8 ) & 0xffffff;
   if (uVar4 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38 = (StringName)0x0;
         LOCK();
         bVar6 = (char)ObjectDB::spin_lock == '\0';
         if (bVar6) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar6) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar5 = (ulong*)( (ulong)uVar4 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0xac8 ) >> 0x18 & 0x7fffffffff ) == ( *puVar5 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar5[1] != 0) {
            if ((const::{lambda()
            #1
            (iVar2 = __cxa_guard_acquire(&const::{lambda()
            #1
            _scs_create((char *)&const::{lambda()
            #1
            __cxa_atexit(StringName::~StringName,&const::{lambda()
            #1
            &__dso_handle;
            __cxa_guard_release(&const::{lambda()
            #1
         }

         Control::get_theme_font(&local_38, (StringName*)this);
         if ((const::{lambda()
         #2
         (iVar2 = __cxa_guard_acquire(&const::{lambda()
         #2
         _scs_create((char *)&const::{lambda()
         #2
         __cxa_atexit(StringName::~StringName,&const::{lambda()
         #2
         &__dso_handle;
         __cxa_guard_release(&const::{lambda()
         #2
      }

      uVar1 = Control::get_theme_font_size((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xa8 ));
      fVar7 = (float)( **(code**)( *(long*)CONCAT71(uStack_37, local_38) + 0x218 ) )((long*)CONCAT71(uStack_37, local_38), uVar1);
      dVar8 = (double)fVar7 * __LC24;
      Ref<Font>::unref((Ref<Font>*)&local_38);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return (ulong)(uint)(int)dVar8;
      }

      goto LAB_00103990;
   }

}
else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else{
   _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
}
if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   uVar3 = AnimationTrackEdit::get_key_height();
   return uVar3;
}
LAB_00103990:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationTrackEditSubAnim::get_key_rect(int, float) */undefined1  [16] __thiscallAnimationTrackEditSubAnim::get_key_rect(AnimationTrackEditSubAnim *this, int param_1, float param_2) {
   undefined8 uVar1;
   char cVar2;
   undefined4 uVar3;
   int iVar4;
   StringName *pSVar5;
   uint uVar6;
   ulong *puVar7;
   long in_FS_OFFSET;
   bool bVar8;
   float fVar9;
   undefined4 extraout_XMM0_Db;
   undefined4 extraout_XMM0_Db_00;
   double dVar10;
   double dVar11;
   ulong uVar12;
   undefined1 auVar13[16];
   float local_84;
   Variant local_70[8];
   long local_68;
   Ref<Animation> local_60;
   undefined7 uStack_5f;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0xac8 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_60 = (Ref<Animation>)0x0;
         LOCK();
         bVar8 = (char)ObjectDB::spin_lock == '\0';
         if (bVar8) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar8) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar7 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0xac8 ) >> 0x18 & 0x7fffffffff ) == ( *puVar7 & 0x7fffffffff )) {
         uVar12 = puVar7[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (( uVar12 != 0 ) && ( pSVar5 = (StringName*)__dynamic_cast(uVar12, &Object::typeinfo, &AnimationPlayer::typeinfo, 0) ),pSVar5 != (StringName*)0x0) {
            AnimationTrackEdit::get_animation();
            uVar1 = CONCAT71(uStack_5f, local_60);
            AnimationTrackEdit::get_track();
            Animation::track_get_key_value((int)local_58, (int)uVar1);
            Variant::operator_cast_to_String(local_70);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            Ref<Animation>::unref(&local_60);
            cVar2 = String::operator !=((String*)local_70, "[stop]");
            if (cVar2 == '\0') {
               LAB_00103adc:if (( get_key_rect(int,float)::{lambda()#1}::operator()() ) && ( iVar4 = sname ),iVar4 != 0) {
                  _scs_create((char *)&get_key_rect(int,float)::{lambda()
                  #1
                  __cxa_atexit(StringName::~StringName,
                         &get_key_rect(int,float)::{lambda()
                  #1
                  __cxa_guard_release(&get_key_rect(int,float)::{lambda()
                  #1
               }

               Control::get_theme_font((StringName*)&local_60, (StringName*)this);
               if ((get_key_rect(int,float)::{lambda()
               #2
               ( iVar4 = __cxa_guard_acquire(&get_key_rect(int,, float)::{lambda()#2}::operator()()::sname), iVar4 != 0) );
               {
                  _scs_create((char *)&get_key_rect(int,float)::{lambda()
                  #2
                  __cxa_atexit(StringName::~StringName,
                         &get_key_rect(int,float)::{lambda()
                  #2
                  __cxa_guard_release(&get_key_rect(int,float)::{lambda()
                  #2
               }

               uVar3 = Control::get_theme_font_size((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xa8 ));
               fVar9 = (float)( **(code**)( *(long*)CONCAT71(uStack_5f, local_60) + 0x218 ) )((long*)CONCAT71(uStack_5f, local_60), uVar3);
               Control::get_size();
               uVar12 = CONCAT44(extraout_XMM0_Db, (float)(int)( (double)fVar9 * __LC23 ));
               Ref<Font>::unref((Ref<Font>*)&local_60);
            }
 else {
               StringName::StringName((StringName*)&local_60, (String*)local_70, false);
               cVar2 = AnimationMixer::has_animation(pSVar5);
               if (( StringName::configured != '\0' ) && ( CONCAT71(uStack_5f, local_60) != 0 )) {
                  StringName::unref();
               }

               if (cVar2 == '\0') goto LAB_00103adc;
               StringName::StringName((StringName*)&local_68, (String*)local_70, false);
               AnimationMixer::get_animation((StringName*)&local_60);
               local_84 = (float)Animation::get_length();
               Ref<Animation>::unref(&local_60);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               AnimationTrackEdit::get_animation();
               uVar1 = CONCAT71(uStack_5f, local_60);
               AnimationTrackEdit::get_track();
               iVar4 = Animation::track_get_key_count((int)uVar1);
               Ref<Animation>::unref(&local_60);
               if (param_1 + 1 < iVar4) {
                  AnimationTrackEdit::get_animation();
                  iVar4 = AnimationTrackEdit::get_track();
                  dVar10 = (double)Animation::track_get_key_time((int)local_68, iVar4);
                  AnimationTrackEdit::get_animation();
                  uVar1 = CONCAT71(uStack_5f, local_60);
                  iVar4 = AnimationTrackEdit::get_track();
                  dVar11 = (double)Animation::track_get_key_time((int)uVar1, iVar4);
                  if (dVar10 - dVar11 <= (double)local_84) {
                     local_84 = (float)( dVar10 - dVar11 );
                  }

                  Ref<Animation>::unref(&local_60);
                  Ref<Animation>::unref((Ref<Animation>*)&local_68);
               }

               Control::get_size();
               uVar12 = CONCAT44(extraout_XMM0_Db_00, local_84 * param_2);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               auVar13._8_8_ = 0;
               auVar13._0_8_ = uVar12;
               return auVar13 << 0x40;
            }

            goto LAB_00103e95;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar13 = AnimationTrackEdit::get_key_rect((int)this, param_2);
      return auVar13;
   }

   LAB_00103e95:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationTrackEditTypeAnimation::get_key_height() const */ulong AnimationTrackEditTypeAnimation::get_key_height(AnimationTrackEditTypeAnimation *this) {
   undefined4 uVar1;
   int iVar2;
   ulong uVar3;
   uint uVar4;
   ulong *puVar5;
   long in_FS_OFFSET;
   bool bVar6;
   float fVar7;
   double dVar8;
   StringName local_38;
   undefined7 uStack_37;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = ( uint ) * (ulong*)( this + 0xac8 ) & 0xffffff;
   if (uVar4 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38 = (StringName)0x0;
         LOCK();
         bVar6 = (char)ObjectDB::spin_lock == '\0';
         if (bVar6) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar6) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar5 = (ulong*)( (ulong)uVar4 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0xac8 ) >> 0x18 & 0x7fffffffff ) == ( *puVar5 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar5[1] != 0) {
            if ((const::{lambda()
            #1
            (iVar2 = __cxa_guard_acquire(&const::{lambda()
            #1
            _scs_create((char *)&const::{lambda()
            #1
            __cxa_atexit(StringName::~StringName,&const::{lambda()
            #1
            &__dso_handle;
            __cxa_guard_release(&const::{lambda()
            #1
         }

         Control::get_theme_font(&local_38, (StringName*)this);
         if ((const::{lambda()
         #2
         (iVar2 = __cxa_guard_acquire(&const::{lambda()
         #2
         _scs_create((char *)&const::{lambda()
         #2
         __cxa_atexit(StringName::~StringName,&const::{lambda()
         #2
         &__dso_handle;
         __cxa_guard_release(&const::{lambda()
         #2
      }

      uVar1 = Control::get_theme_font_size((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xa8 ));
      fVar7 = (float)( **(code**)( *(long*)CONCAT71(uStack_37, local_38) + 0x218 ) )((long*)CONCAT71(uStack_37, local_38), uVar1);
      dVar8 = (double)fVar7 * __LC24;
      Ref<Font>::unref((Ref<Font>*)&local_38);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return (ulong)(uint)(int)dVar8;
      }

      goto LAB_00104100;
   }

}
else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else{
   _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
}
if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   uVar3 = AnimationTrackEdit::get_key_height();
   return uVar3;
}
LAB_00104100:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationTrackEditTypeAnimation::get_key_rect(int, float) */undefined1  [16] __thiscallAnimationTrackEditTypeAnimation::get_key_rect(AnimationTrackEditTypeAnimation *this, int param_1, float param_2) {
   long lVar1;
   undefined8 uVar2;
   char cVar3;
   undefined4 uVar4;
   int iVar5;
   StringName *pSVar6;
   uint uVar7;
   ulong *puVar8;
   long in_FS_OFFSET;
   bool bVar9;
   float fVar10;
   undefined4 extraout_XMM0_Db;
   undefined4 extraout_XMM0_Db_00;
   double dVar11;
   double dVar12;
   ulong uVar13;
   undefined1 auVar14[16];
   float local_64;
   undefined8 local_58;
   long local_50;
   StringName local_48;
   undefined7 uStack_47;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar7 = ( uint ) * (ulong*)( this + 0xac8 ) & 0xffffff;
   if (uVar7 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_48 = (StringName)0x0;
         LOCK();
         bVar9 = (char)ObjectDB::spin_lock == '\0';
         if (bVar9) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar9) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar8 = (ulong*)( (ulong)uVar7 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0xac8 ) >> 0x18 & 0x7fffffffff ) == ( *puVar8 & 0x7fffffffff )) {
         uVar13 = puVar8[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (( uVar13 != 0 ) && ( pSVar6 = (StringName*)__dynamic_cast(uVar13, &Object::typeinfo, &AnimationPlayer::typeinfo, 0) ),pSVar6 != (StringName*)0x0) {
            AnimationTrackEdit::get_animation();
            lVar1 = local_50;
            AnimationTrackEdit::get_track();
            Animation::animation_track_get_key_animation((int)&local_48, (int)lVar1);
            lVar1 = CONCAT71(uStack_47, local_48);
            if (lVar1 == 0) {
               local_58 = 0;
            }
 else {
               local_58 = 0;
               if (*(char**)( lVar1 + 8 ) == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar1 + 0x10 ));
               }
 else {
                  String::parse_latin1((String*)&local_58, *(char**)( lVar1 + 8 ));
               }

               if (( StringName::configured != '\0' ) && ( CONCAT71(uStack_47, local_48) != 0 )) {
                  StringName::unref();
               }

            }

            Ref<Animation>::unref((Ref<Animation>*)&local_50);
            cVar3 = String::operator !=((String*)&local_58, "[stop]");
            if (cVar3 == '\0') {
               LAB_00104270:if (( get_key_rect(int,float)::{lambda()#1}::operator()() ) && ( iVar5 = sname ),iVar5 != 0) {
                  _scs_create((char *)&get_key_rect(int,float)::{lambda()
                  #1
                  __cxa_atexit(StringName::~StringName,
                         &get_key_rect(int,float)::{lambda()
                  #1
                  __cxa_guard_release(&get_key_rect(int,float)::{lambda()
                  #1
               }

               Control::get_theme_font(&local_48, (StringName*)this);
               if ((get_key_rect(int,float)::{lambda()
               #2
               ( iVar5 = __cxa_guard_acquire(&get_key_rect(int,, float)::{lambda()#2}::operator()()::sname), iVar5 != 0) );
               {
                  _scs_create((char *)&get_key_rect(int,float)::{lambda()
                  #2
                  __cxa_atexit(StringName::~StringName,
                         &get_key_rect(int,float)::{lambda()
                  #2
                  __cxa_guard_release(&get_key_rect(int,float)::{lambda()
                  #2
               }

               uVar4 = Control::get_theme_font_size((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xa8 ));
               fVar10 = (float)( **(code**)( *(long*)CONCAT71(uStack_47, local_48) + 0x218 ) )((long*)CONCAT71(uStack_47, local_48), uVar4);
               Control::get_size();
               uVar13 = CONCAT44(extraout_XMM0_Db, (float)(int)( (double)fVar10 * __LC23 ));
               Ref<Font>::unref((Ref<Font>*)&local_48);
            }
 else {
               StringName::StringName(&local_48, (String*)&local_58, false);
               cVar3 = AnimationMixer::has_animation(pSVar6);
               if (( StringName::configured != '\0' ) && ( CONCAT71(uStack_47, local_48) != 0 )) {
                  StringName::unref();
               }

               if (cVar3 == '\0') goto LAB_00104270;
               StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
               AnimationMixer::get_animation(&local_48);
               local_64 = (float)Animation::get_length();
               Ref<Animation>::unref((Ref<Animation>*)&local_48);
               if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
                  StringName::unref();
               }

               AnimationTrackEdit::get_animation();
               uVar2 = CONCAT71(uStack_47, local_48);
               AnimationTrackEdit::get_track();
               iVar5 = Animation::track_get_key_count((int)uVar2);
               Ref<Animation>::unref((Ref<Animation>*)&local_48);
               if (param_1 + 1 < iVar5) {
                  AnimationTrackEdit::get_animation();
                  iVar5 = AnimationTrackEdit::get_track();
                  dVar11 = (double)Animation::track_get_key_time((int)local_50, iVar5);
                  AnimationTrackEdit::get_animation();
                  uVar2 = CONCAT71(uStack_47, local_48);
                  iVar5 = AnimationTrackEdit::get_track();
                  dVar12 = (double)Animation::track_get_key_time((int)uVar2, iVar5);
                  if (dVar11 - dVar12 <= (double)local_64) {
                     local_64 = (float)( dVar11 - dVar12 );
                  }

                  Ref<Animation>::unref((Ref<Animation>*)&local_48);
                  Ref<Animation>::unref((Ref<Animation>*)&local_50);
               }

               Control::get_size();
               uVar13 = CONCAT44(extraout_XMM0_Db_00, local_64 * param_2);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               auVar14._8_8_ = 0;
               auVar14._0_8_ = uVar13;
               return auVar14 << 0x40;
            }

            goto LAB_00104649;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar14 = AnimationTrackEdit::get_key_rect((int)this, param_2);
      return auVar14;
   }

   LAB_00104649:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* AnimationTrackEditBool::draw_key(int, float, int, bool, int, int) */void AnimationTrackEditBool::draw_key(int param_1, float param_2, int param_3, bool param_4, int param_5, int param_6) {
   long lVar1;
   bool bVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   undefined7 in_register_00000011;
   char *pcVar6;
   undefined4 in_register_0000003c;
   Ref *pRVar7;
   int in_R9D;
   long in_FS_OFFSET;
   float fVar8;
   float extraout_XMM0_Db;
   char local_8c;
   Object *local_88;
   long local_80;
   long local_78;
   undefined8 local_70;
   undefined1 local_68[16];
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   pRVar7 = (Ref*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   AnimationTrackEdit::get_animation();
   lVar1 = local_78;
   AnimationTrackEdit::get_track();
   Animation::track_get_key_value((int)(Variant*)&local_58, (int)lVar1);
   bVar2 = Variant::operator_cast_to_bool((Variant*)&local_58);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   Ref<Animation>::unref((Ref<Animation>*)&local_78);
   StringName::StringName((StringName*)&local_78, "CheckBox", false);
   pcVar6 = "unchecked";
   if (bVar2) {
      pcVar6 = "checked";
   }

   StringName::StringName((StringName*)&local_80, pcVar6, false);
   Control::get_theme_icon((StringName*)&local_88, (StringName*)pRVar7);
   if (StringName::configured != '\0') {
      if (local_80 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104760;
      }

      if (local_78 != 0) {
         StringName::unref();
      }

   }

   LAB_00104760:Control::get_size();
   iVar4 = ( **(code**)( *(long*)local_88 + 0x1d0 ) )();
   iVar5 = ( **(code**)( *(long*)local_88 + 0x1c8 ) )();
   fVar8 = (float)( (int)CONCAT71(in_register_00000011, param_4) - iVar5 / 2 );
   local_70 = CONCAT44((float)( (int)( extraout_XMM0_Db - (float)iVar4 ) / 2 ), fVar8);
   iVar4 = ( **(code**)( *(long*)local_88 + 0x1c8 ) )();
   if ((float)param_6 <= fVar8 + (float)( iVar4 / 2 )) {
      fVar8 = (float)local_70;
      iVar4 = ( **(code**)( *(long*)local_88 + 0x1c8 ) )();
      if ((float)( iVar4 / 2 ) + fVar8 <= (float)in_R9D) {
         local_58 = CONCAT44(_LC37, _LC37);
         uStack_50 = CONCAT44(_LC37, _LC37);
         CanvasItem::draw_texture(pRVar7, (Vector2*)&local_88, (Color*)&local_70);
         local_8c = (char)param_5;
         if (local_8c != '\0') {
            if (draw_key(int,float,int,bool,int,int) ::{lambda();
            #1
            iVar4 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#1}::
                                       operator()()::sname);
            if (iVar4 != 0) {
               _scs_create((char *)&draw_key(int,float,int,bool,int,int)::{lambda()
               #1
               sname,true;
               __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#1}::operator()()::sname,&__dso_handle);
               __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
               #1
               sname;
            }

         }

         local_68 = Control::get_theme_color((StringName*)pRVar7, (StringName*)&draw_key, (int,float,int,bool,int, int)::{lambda()#1}::operator()()::sname);
         uStack_50 = ( **(code**)( *(long*)local_88 + 0x1d8 ) )();
         local_58 = local_70;
         AnimationTrackEdit::draw_rect_clipped((Rect2*)pRVar7, (Variant*)&local_58, SUB81(local_68, 0));
      }

      Ref<Texture2D>::unref((Ref<Texture2D>*)&local_88);
      goto LAB_00104863;
   }

}
if (local_88 != (Object*)0x0) {
   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_88);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)local_88 + 0x140 ) )(local_88);
         Memory::free_static(local_88, false);
      }

   }

}
LAB_00104863:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationTrackEditAudio::get_key_rect(int, float) */undefined1  [16] __thiscallAnimationTrackEditAudio::get_key_rect(AnimationTrackEditAudio *this, int param_1, float param_2) {
   undefined8 uVar1;
   undefined1 auVar2[16];
   int iVar3;
   undefined4 uVar4;
   uint uVar5;
   ulong *puVar6;
   long in_FS_OFFSET;
   bool bVar7;
   float fVar8;
   double dVar9;
   undefined4 extraout_XMM0_Db;
   double dVar10;
   undefined4 extraout_XMM0_Db_00;
   undefined1 auVar11[16];
   float local_88;
   long *local_70;
   int local_68[2];
   StringName local_60;
   undefined7 uStack_5f;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = ( uint ) * (ulong*)( this + 0xac8 ) & 0xffffff;
   if (uVar5 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_60 = (StringName)0x0;
         LOCK();
         bVar7 = (char)ObjectDB::spin_lock == '\0';
         if (bVar7) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar7) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar6 = (ulong*)( (ulong)uVar5 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0xac8 ) >> 0x18 & 0x7fffffffff ) == ( *puVar6 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar6[1] != 0) {
            StringName::StringName(&local_60, "get_stream", false);
            Object::call<>((StringName*)local_58);
            local_70 = (long*)0x0;
            Ref<AudioStream>::operator =((Ref<AudioStream>*)&local_70, (Variant*)local_58);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (( StringName::configured != '\0' ) && ( CONCAT71(uStack_5f, local_60) != 0 )) {
               StringName::unref();
            }

            if (local_70 == (long*)0x0) {
               auVar11 = AnimationTrackEdit::get_key_rect((int)this, param_2);
            }
 else {
               AnimationTrackEdit::get_animation();
               uVar1 = CONCAT71(uStack_5f, local_60);
               AnimationTrackEdit::get_track();
               Animation::track_get_key_value((int)(StringName*)local_58, (int)uVar1);
               bVar7 = Variant::operator_cast_to_bool((Variant*)local_58);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               Ref<Animation>::unref((Ref<Animation>*)&local_60);
               if (bVar7) {
                  dVar9 = (double)( **(code**)( *local_70 + 0x1f8 ) )();
                  local_88 = (float)dVar9;
                  if (local_88 == 0.0) {
                     AudioStreamPreviewGenerator::generate_preview((Ref*)&local_60);
                     local_88 = (float)AudioStreamPreview::get_length();
                     Ref<AudioStreamPreview>::unref((Ref<AudioStreamPreview>*)&local_60);
                  }

                  AnimationTrackEdit::get_animation();
                  uVar1 = CONCAT71(uStack_5f, local_60);
                  AnimationTrackEdit::get_track();
                  iVar3 = Animation::track_get_key_count((int)uVar1);
                  Ref<Animation>::unref((Ref<Animation>*)&local_60);
                  if (param_1 + 1 < iVar3) {
                     AnimationTrackEdit::get_animation();
                     iVar3 = AnimationTrackEdit::get_track();
                     dVar9 = (double)Animation::track_get_key_time(local_68[0], iVar3);
                     AnimationTrackEdit::get_animation();
                     uVar1 = CONCAT71(uStack_5f, local_60);
                     iVar3 = AnimationTrackEdit::get_track();
                     dVar10 = (double)Animation::track_get_key_time((int)uVar1, iVar3);
                     if (dVar9 - dVar10 <= (double)local_88) {
                        local_88 = (float)( dVar9 - dVar10 );
                     }

                     Ref<Animation>::unref((Ref<Animation>*)&local_60);
                     Ref<Animation>::unref((Ref<Animation>*)local_68);
                  }

                  Control::get_size();
                  auVar11._4_4_ = extraout_XMM0_Db;
                  auVar11._0_4_ = local_88 * param_2;
                  auVar11._8_8_ = 0;
                  auVar11 = auVar11 << 0x40;
               }
 else {
                  if ((get_key_rect(int,float)::{lambda()#1}::operator()()::sname == '\0') &&
               (iVar3 = __cxa_guard_acquire(&get_key_rect(int,float)::{lambda()#1}::operator()()::
                                             sname), iVar3 != 0))
                  {
                     _scs_create((char *)&get_key_rect(int,float)::{lambda()
                     #1
                     __cxa_atexit(StringName::~StringName,
                           &get_key_rect(int,float)::{lambda()
                     #1
                     )
                     ;;
                     __cxa_guard_release(&get_key_rect(int,float)::{lambda()
                     #1
                  }

                  Control::get_theme_font(&local_60, (StringName*)this);
                  if ((get_key_rect(int,float)::{lambda()
                  #2
                  ( iVar3 = __cxa_guard_acquire(&get_key_rect(int,, float)::{lambda()#2}::operator()()::sname), iVar3 != 0) );
                  {
                     _scs_create((char *)&get_key_rect(int,float)::{lambda()
                     #2
                     __cxa_atexit(StringName::~StringName,
                           &get_key_rect(int,float)::{lambda()
                     #2
                     )
                     ;;
                     __cxa_guard_release(&get_key_rect(int,float)::{lambda()
                     #2
                  }

                  uVar4 = Control::get_theme_font_size((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xa8 ));
                  fVar8 = (float)( **(code**)( *(long*)CONCAT71(uStack_5f, local_60) + 0x218 ) )((long*)CONCAT71(uStack_5f, local_60), uVar4);
                  Control::get_size();
                  auVar2._4_4_ = extraout_XMM0_Db_00;
                  auVar2._0_4_ = (float)(int)( (double)fVar8 * __LC23 );
                  auVar2._8_8_ = 0;
                  auVar11 = auVar2 << 0x40;
                  Ref<Font>::unref((Ref<Font>*)&local_60);
               }

            }

            Ref<AudioStream>::unref((Ref<AudioStream>*)&local_70);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return auVar11;
            }

            goto LAB_00104f0d;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar11 = AnimationTrackEdit::get_key_rect((int)this, param_2);
      return auVar11;
   }

   LAB_00104f0d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationTrackEditTypeAudio::gui_input(Ref<InputEvent> const&) */void AnimationTrackEditTypeAudio::gui_input(AnimationTrackEditTypeAudio *this, Ref *param_1) {
   Object *pOVar1;
   AnimationTrackEditTypeAudio AVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   Object *pOVar6;
   long *plVar7;
   EditorUndoRedoManager *this_00;
   long lVar8;
   int iVar9;
   long in_FS_OFFSET;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   undefined4 uVar14;
   double dVar15;
   double dVar16;
   float fVar17;
   float fVar18;
   Object *local_78;
   float local_68;
   AnimationTrackEditTypeAudio local_5c;
   long *local_58;
   Object *local_50;
   Object *local_48;
   long local_40;
   lVar8 = *(long*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar8 == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("gui_input", "editor/animation_track_editor_plugins.cpp", 0x3fc, "Condition \"p_event.is_null()\" is true.", 0, 0);
         return;
      }

      goto LAB_00105f2d;
   }

   local_78 = (Object*)__dynamic_cast(lVar8, &Object::typeinfo, &InputEventMouseMotion::typeinfo, 0);
   if (local_78 == (Object*)0x0) {
      LAB_00104fa6:pOVar6 = (Object*)__dynamic_cast(lVar8, &Object::typeinfo, &InputEventMouseButton::typeinfo, 0);
      if (( pOVar6 == (Object*)0x0 ) || ( cVar3 = RefCounted::reference() ),cVar3 == '\0') {
         EditorUndoRedoManager::get_singleton();
         AnimationTrackEdit::gui_input((Ref*)this);
      }
 else {
         cVar3 = InputEvent::is_pressed();
         if (( ( cVar3 == '\0' ) || ( iVar4 = InputEventMouseButton::get_button_index() ),iVar4 != 1 )) {
            this_00 = (EditorUndoRedoManager*)EditorUndoRedoManager::get_singleton();
            if (( ( this[0xac8] == (AnimationTrackEditTypeAudio)0x0 ) || ( cVar3 = InputEvent::is_pressed() ),cVar3 != '\0' )) {
               AnimationTrackEdit::gui_input((Ref*)this);
               cVar3 = RefCounted::unreference();
               if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar6) ),cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                  Memory::free_static(pOVar6, false);
               }

               goto joined_r0x00104fee;
            }

            fVar17 = *(float*)( this + 0xad4 );
            if (( fVar17 == 0.0 ) || ( *(int*)( this + 0xacc ) < 0 )) goto LAB_00105a03;
            if (this[0xac9] == (AnimationTrackEditTypeAudio)0x0) {
               fVar11 = (float)AnimationTimelineEdit::get_zoom_scale();
               fVar17 = (float)( (uint)fVar17 ^ __LC79 );
               AnimationTrackEdit::get_animation();
               pOVar1 = local_48;
               iVar4 = AnimationTrackEdit::get_track();
               fVar12 = (float)Animation::audio_track_get_key_end_offset((int)pOVar1, iVar4);
               Ref<Animation>::unref((Ref<Animation>*)&local_48);
               fVar17 = fVar17 / fVar11 + fVar12;
               if (fVar12 != fVar17) {
                  local_50 = (Object*)0x0;
                  String::parse_latin1((String*)&local_50, "");
                  local_58 = (long*)0x0;
                  String::parse_latin1((String*)&local_58, "Change Audio Track Clip End Offset");
                  TTR((String*)&local_48, (String*)&local_58);
                  EditorUndoRedoManager::create_action(this_00, (Ref<Animation>*)&local_48, 0, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  iVar4 = *(int*)( this + 0xacc );
                  iVar5 = AnimationTrackEdit::get_track();
                  StringName::StringName((StringName*)&local_48, "audio_track_set_key_end_offset", false);
                  AnimationTrackEdit::get_animation();
                  EditorUndoRedoManager::add_do_method<int,int,float>(this_00, local_50, (StringName*)&local_48, iVar5, iVar4, fVar17);
                  Ref<Animation>::unref((Ref<Animation>*)&local_50);
                  if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
                     StringName::unref();
                  }

                  iVar4 = *(int*)( this + 0xacc );
                  iVar5 = AnimationTrackEdit::get_track();
                  StringName::StringName((StringName*)&local_48, "audio_track_set_key_end_offset", false);
                  AnimationTrackEdit::get_animation();
                  goto LAB_00105cc8;
               }

            }
 else {
               fVar11 = (float)AnimationTimelineEdit::get_zoom_scale();
               AnimationTrackEdit::get_animation();
               pOVar1 = local_48;
               iVar4 = AnimationTrackEdit::get_track();
               fVar12 = (float)Animation::audio_track_get_key_start_offset((int)pOVar1, iVar4);
               Ref<Animation>::unref((Ref<Animation>*)&local_48);
               AnimationTrackEdit::get_animation();
               pOVar1 = local_48;
               iVar4 = AnimationTrackEdit::get_track();
               dVar15 = (double)Animation::track_get_key_time((int)pOVar1, iVar4);
               fVar18 = (float)dVar15;
               Ref<Animation>::unref((Ref<Animation>*)&local_48);
               fVar13 = fVar17 / fVar11 + fVar18;
               if (fVar18 != fVar13) {
                  local_50 = (Object*)0x0;
                  String::parse_latin1((String*)&local_50, "");
                  local_58 = (long*)0x0;
                  String::parse_latin1((String*)&local_58, "Change Audio Track Clip Start Offset");
                  TTR((String*)&local_48, (String*)&local_58);
                  EditorUndoRedoManager::create_action(this_00, (Ref<Animation>*)&local_48, 0, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  iVar4 = *(int*)( this + 0xacc );
                  iVar5 = AnimationTrackEdit::get_track();
                  StringName::StringName((StringName*)&local_48, "track_set_key_time", false);
                  AnimationTrackEdit::get_animation();
                  EditorUndoRedoManager::add_do_method<int,int,float>(this_00, local_50, (StringName*)&local_48, iVar5, iVar4, fVar13);
                  Ref<Animation>::unref((Ref<Animation>*)&local_50);
                  if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
                     StringName::unref();
                  }

                  iVar4 = *(int*)( this + 0xacc );
                  iVar5 = AnimationTrackEdit::get_track();
                  StringName::StringName((StringName*)&local_48, "track_set_key_time", false);
                  AnimationTrackEdit::get_animation();
                  EditorUndoRedoManager::add_undo_method<int,int,float>(this_00, local_50, (StringName*)&local_48, iVar5, iVar4, fVar18);
                  Ref<Animation>::unref((Ref<Animation>*)&local_50);
                  if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
                     StringName::unref();
                  }

                  iVar4 = *(int*)( this + 0xacc );
                  iVar5 = AnimationTrackEdit::get_track();
                  StringName::StringName((StringName*)&local_48, "audio_track_set_key_start_offset", false);
                  AnimationTrackEdit::get_animation();
                  EditorUndoRedoManager::add_do_method<int,int,float>(this_00, local_50, (StringName*)&local_48, iVar5, iVar4, fVar17 / fVar11 + fVar12);
                  Ref<Animation>::unref((Ref<Animation>*)&local_50);
                  if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
                     StringName::unref();
                  }

                  iVar4 = *(int*)( this + 0xacc );
                  iVar5 = AnimationTrackEdit::get_track();
                  StringName::StringName((StringName*)&local_48, "audio_track_set_key_start_offset", false);
                  AnimationTrackEdit::get_animation();
                  LAB_00105cc8:EditorUndoRedoManager::add_undo_method<int,int,float>(this_00, local_50, (StringName*)&local_48, iVar5, iVar4, fVar12);
                  Ref<Animation>::unref((Ref<Animation>*)&local_50);
                  if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
                     StringName::unref();
                  }

                  EditorUndoRedoManager::commit_action(SUB81(this_00, 0));
               }

            }

            *(undefined4*)( this + 0xacc ) = 0xffffffff;
            this[0xac8] = (AnimationTrackEditTypeAudio)0x0;
            CanvasItem::queue_redraw();
            Control::accept_event();
         }
 else {
            this[0xac8] = (AnimationTrackEditTypeAudio)0x1;
            if (*(int*)( this + 0xacc ) < 0) {
               LAB_00105a03:this[0xac8] = (AnimationTrackEditTypeAudio)0x0;
            }
 else {
               uVar14 = InputEventMouse::get_position();
               *(undefined4*)( this + 0xad4 ) = 0;
               *(undefined4*)( this + 0xad0 ) = uVar14;
               CanvasItem::queue_redraw();
               Control::accept_event();
            }

         }

         cVar3 = RefCounted::unreference();
         if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar6) ),cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
            Memory::free_static(pOVar6, false);
         }

      }

      joined_r0x00104fee:if (local_78 != (Object*)0x0) {
         LAB_00104ff0:cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') goto LAB_001053ad;
      }

   }
 else {
      AVar2 = (AnimationTrackEditTypeAudio)RefCounted::reference();
      if (AVar2 == (AnimationTrackEditTypeAudio)0x0) {
         local_78 = (Object*)0x0;
         lVar8 = *(long*)param_1;
         if (lVar8 == 0) {
            EditorUndoRedoManager::get_singleton();
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               AnimationTrackEdit::gui_input((Ref*)this);
               return;
            }

            goto LAB_00105f2d;
         }

         goto LAB_00104fa6;
      }

      if (this[0xac8] == (AnimationTrackEditTypeAudio)0x0) {
         local_5c = (AnimationTrackEditTypeAudio)0x0;
         iVar4 = 0;
         while (true) {
            AnimationTrackEdit::get_animation();
            pOVar6 = local_48;
            AnimationTrackEdit::get_track();
            iVar5 = Animation::track_get_key_count((int)pOVar6);
            Ref<Animation>::unref((Ref<Animation>*)&local_48);
            if (iVar5 <= iVar4) break;
            AnimationTrackEdit::get_animation();
            pOVar6 = local_50;
            AnimationTrackEdit::get_track();
            Animation::audio_track_get_key_stream((int)(Ref<Animation>*)&local_48, (int)pOVar6);
            local_58 = (long*)0x0;
            if (local_48 == (Object*)0x0) {
               Ref<Animation>::unref((Ref<Animation>*)&local_50);
               LAB_0010515c:Ref<AudioStream>::unref((Ref<AudioStream>*)&local_58);
               iVar4 = iVar4 + 1;
            }
 else {
               plVar7 = (long*)__dynamic_cast(local_48, &Object::typeinfo, &AudioStream::typeinfo, 0);
               if (plVar7 == (long*)0x0) {
                  LAB_0010510b:cVar3 = RefCounted::unreference();
                  pOVar6 = local_48;
                  plVar7 = local_58;
                  if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(local_48) ),plVar7 = local_58,cVar3 != '\0') {
                     ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                     Memory::free_static(pOVar6, false);
                  }

               }
 else {
                  local_58 = plVar7;
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                     local_58 = (long*)0x0;
                  }

                  plVar7 = local_58;
                  if (local_48 != (Object*)0x0) goto LAB_0010510b;
               }

               Ref<Animation>::unref((Ref<Animation>*)&local_50);
               if (plVar7 == (long*)0x0) goto LAB_0010515c;
               dVar15 = (double)( **(code**)( *plVar7 + 0x1f8 ) )(plVar7);
               if ((float)dVar15 == 0.0) goto LAB_0010515c;
               AnimationTrackEdit::get_animation();
               pOVar6 = local_48;
               iVar5 = AnimationTrackEdit::get_track();
               local_68 = (float)Animation::audio_track_get_key_start_offset((int)pOVar6, iVar5);
               Ref<Animation>::unref((Ref<Animation>*)&local_48);
               AnimationTrackEdit::get_animation();
               pOVar6 = local_48;
               iVar5 = AnimationTrackEdit::get_track();
               fVar17 = (float)Animation::audio_track_get_key_end_offset((int)pOVar6, iVar5);
               Ref<Animation>::unref((Ref<Animation>*)&local_48);
               local_68 = ( (float)dVar15 - fVar17 ) - local_68;
               AnimationTrackEdit::get_animation();
               pOVar6 = local_48;
               AnimationTrackEdit::get_track();
               iVar5 = Animation::track_get_key_count((int)pOVar6);
               Ref<Animation>::unref((Ref<Animation>*)&local_48);
               if (iVar4 + 1 < iVar5) {
                  AnimationTrackEdit::get_animation();
                  pOVar6 = local_50;
                  iVar5 = AnimationTrackEdit::get_track();
                  dVar15 = (double)Animation::track_get_key_time((int)pOVar6, iVar5);
                  AnimationTrackEdit::get_animation();
                  pOVar6 = local_48;
                  iVar5 = AnimationTrackEdit::get_track();
                  dVar16 = (double)Animation::track_get_key_time((int)pOVar6, iVar5);
                  if (dVar15 - dVar16 <= (double)local_68) {
                     local_68 = (float)( dVar15 - dVar16 );
                  }

                  Ref<Animation>::unref((Ref<Animation>*)&local_48);
                  Ref<Animation>::unref((Ref<Animation>*)&local_50);
               }

               AnimationTrackEdit::get_animation();
               pOVar6 = local_48;
               iVar5 = AnimationTrackEdit::get_track();
               dVar15 = (double)Animation::track_get_key_time((int)pOVar6, iVar5);
               Ref<Animation>::unref((Ref<Animation>*)&local_48);
               dVar16 = (double)Range::get_value();
               fVar17 = (float)AnimationTimelineEdit::get_zoom_scale();
               iVar5 = AnimationTimelineEdit::get_name_limit();
               fVar17 = (float)iVar5 + fVar17 * (float)( (double)(float)dVar15 - dVar16 );
               fVar11 = (float)AnimationTimelineEdit::get_zoom_scale();
               iVar9 = (int)( fVar11 * local_68 + fVar17 );
               iVar5 = AnimationTimelineEdit::get_name_limit();
               if (iVar5 <= iVar9) {
                  fVar12 = (float)iVar9;
                  fVar11 = (float)Control::get_size();
                  iVar5 = AnimationTimelineEdit::get_buttons_width();
                  if (fVar12 <= fVar11 - (float)iVar5) {
                     fVar11 = (float)InputEventMouse::get_position();
                     fVar11 = fVar11 - fVar12;
                     if (fVar11 < 0.0) {
                        fVar11 = (float)( (uint)fVar11 ^ __LC79 );
                     }

                     fVar12 = (float)EditorScale::get_scale();
                     if (fVar11 < fVar12 * __LC80) {
                        this[0xac9] = (AnimationTrackEditTypeAudio)0x0;
                        *(int*)( this + 0xacc ) = iVar4;
                        local_5c = AVar2;
                     }

                  }

               }

               iVar5 = AnimationTimelineEdit::get_name_limit();
               if ((float)iVar5 <= fVar17) {
                  fVar11 = (float)Control::get_size();
                  iVar5 = AnimationTimelineEdit::get_buttons_width();
                  if (fVar17 <= fVar11 - (float)iVar5) {
                     fVar11 = (float)InputEventMouse::get_position();
                     fVar11 = fVar11 - fVar17;
                     if (fVar11 < 0.0) {
                        fVar11 = (float)( (uint)fVar11 ^ __LC79 );
                     }

                     fVar17 = (float)EditorScale::get_scale();
                     if (fVar11 < fVar17 * __LC80) {
                        this[0xac9] = (AnimationTrackEditTypeAudio)0x1;
                        *(int*)( this + 0xacc ) = iVar4;
                        local_5c = AVar2;
                     }

                  }

               }

               Ref<AudioStream>::unref((Ref<AudioStream>*)&local_58);
               iVar4 = iVar4 + 1;
            }

         }
;
         this[0xad8] = local_5c;
         if (this[0xac8] != (AnimationTrackEditTypeAudio)0x0) goto LAB_001051f0;
         lVar8 = *(long*)param_1;
         if (lVar8 != 0) goto LAB_00104fa6;
         EditorUndoRedoManager::get_singleton();
         AnimationTrackEdit::gui_input((Ref*)this);
         goto LAB_00104ff0;
      }

      LAB_001051f0:fVar11 = (float)InputEventMouseMotion::get_relative();
      fVar17 = *(float*)( this + 0xad4 );
      *(float*)( this + 0xad4 ) = fVar11 + fVar17;
      fVar12 = (float)AnimationTimelineEdit::get_zoom_scale();
      AnimationTrackEdit::get_animation();
      pOVar6 = local_48;
      iVar4 = AnimationTrackEdit::get_track();
      fVar13 = (float)Animation::audio_track_get_key_start_offset((int)pOVar6, iVar4);
      Ref<Animation>::unref((Ref<Animation>*)&local_48);
      AnimationTrackEdit::get_animation();
      pOVar6 = local_48;
      iVar4 = AnimationTrackEdit::get_track();
      fVar18 = (float)Animation::audio_track_get_key_end_offset((int)pOVar6, iVar4);
      Ref<Animation>::unref((Ref<Animation>*)&local_48);
      AnimationTrackEdit::get_animation();
      pOVar6 = local_50;
      AnimationTrackEdit::get_track();
      Animation::audio_track_get_key_stream((int)(Ref<Animation>*)&local_48, (int)pOVar6);
      local_58 = (long*)0x0;
      Ref<AudioStream>::operator =((Ref<AudioStream>*)&local_58, (Ref*)local_48);
      Ref<Resource>::unref((Ref<Resource>*)&local_48);
      Ref<Animation>::unref((Ref<Animation>*)&local_50);
      dVar15 = (double)( **(code**)( *local_58 + 0x1f8 ) )();
      fVar10 = (float)dVar15;
      if (fVar10 == 0.0) {
         AudioStreamPreviewGenerator::generate_preview((Ref*)&local_48);
         fVar10 = (float)AudioStreamPreview::get_length();
         Ref<AudioStreamPreview>::unref((Ref<AudioStreamPreview>*)&local_48);
      }

      fVar12 = ( fVar11 + fVar17 ) / fVar12;
      fVar17 = ( fVar10 - fVar18 ) - fVar13;
      if (this[0xac9] == (AnimationTrackEditTypeAudio)0x0) {
         fVar11 = (float)( (uint)fVar17 ^ __LC79 );
         if (( (float)( (uint)fVar17 ^ __LC79 ) <= fVar12 ) && ( fVar11 = fVar12 <= fVar18 )) {
            fVar11 = fVar12;
         }

      }
 else {
         fVar11 = (float)( (uint)fVar13 ^ __LC79 );
         if (( (float)( (uint)fVar13 ^ __LC79 ) <= fVar12 ) && ( fVar11 = fVar12 <= fVar17 )) {
            fVar11 = fVar12;
         }

      }

      fVar17 = (float)AnimationTimelineEdit::get_zoom_scale();
      *(float*)( this + 0xad4 ) = fVar17 * fVar11;
      CanvasItem::queue_redraw();
      Control::accept_event();
      Ref<AudioStream>::unref((Ref<AudioStream>*)&local_58);
      cVar3 = RefCounted::unreference();
      if (cVar3 == '\0') goto LAB_00105002;
      LAB_001053ad:cVar3 = predelete_handler(local_78);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)local_78 + 0x140 ) )(local_78);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static(local_78, false);
            return;
         }

         goto LAB_00105f2d;
      }

   }

   LAB_00105002:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00105f2d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* AnimationTrackEditSpriteFrame::get_key_rect(int, float) */undefined1  [16] __thiscallAnimationTrackEditSpriteFrame::get_key_rect(AnimationTrackEditSpriteFrame *this, int param_1, float param_2) {
   ulong uVar1;
   List *pLVar2;
   char cVar3;
   undefined1 uVar4;
   int iVar5;
   int iVar6;
   undefined4 uVar7;
   int iVar8;
   long lVar9;
   long *plVar10;
   uint uVar11;
   ulong *puVar12;
   int iVar13;
   long in_FS_OFFSET;
   bool bVar14;
   float fVar15;
   undefined4 extraout_XMM0_Db;
   double dVar16;
   undefined8 uVar17;
   undefined8 extraout_XMM1_Qa;
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined8 uVar20;
   CowData<char32_t> *local_e0;
   List *local_a0;
   undefined8 *local_98;
   long *local_90;
   long local_88;
   long *local_80;
   long *local_78;
   long local_70;
   long *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar11 = ( uint ) * (ulong*)( this + 0xac8 ) & 0xffffff;
   iVar5 = (int)this;
   if (uVar11 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar1 = (ulong)local_68 >> 8;
         local_68 = (long*)( uVar1 << 8 );
         LOCK();
         bVar14 = (char)ObjectDB::spin_lock == '\0';
         if (bVar14) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar14) break;
         local_68 = (long*)( uVar1 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar12 = (ulong*)( (ulong)uVar11 * 0x10 + ObjectDB::object_slots );
      if (( *puVar12 & 0x7fffffffff ) == ( *(ulong*)( this + 0xac8 ) >> 0x18 & 0x7fffffffff )) {
         uVar1 = puVar12[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (uVar1 != 0) {
            local_60 = 0;
            lVar9 = __dynamic_cast(uVar1, &Object::typeinfo, &Sprite2D::typeinfo, 0);
            if (( lVar9 == 0 ) && ( lVar9 = __dynamic_cast(uVar1, &Object::typeinfo, &Sprite3D::typeinfo, 0) ),lVar9 == 0) {
               lVar9 = __dynamic_cast(uVar1, &Object::typeinfo, &AnimatedSprite2D::typeinfo, 0);
               if (( lVar9 == 0 ) && ( lVar9 = __dynamic_cast(uVar1, &Object::typeinfo, &AnimatedSprite3D::typeinfo, 0) ),lVar9 == 0) {
                  LAB_00106288:local_60 = Vector2::floor();
                  if ((get_key_rect(int,float)::{lambda()
                  #1
                  ( iVar5 = __cxa_guard_acquire(&get_key_rect(int,, float)::{lambda()#1}::operator()()::sname), iVar5 != 0) );
                  {
                     _scs_create((char *)&get_key_rect(int,float)::{lambda()
                     #1
                     __cxa_atexit(StringName::~StringName,
                           &get_key_rect(int,float)::{lambda()
                     #1
                     )
                     ;;
                     __cxa_guard_release(&get_key_rect(int,float)::{lambda()
                     #1
                  }

                  Control::get_theme_font((StringName*)&local_68, (StringName*)this);
                  if ((get_key_rect(int,float)::{lambda()
                  #2
                  ( iVar5 = __cxa_guard_acquire(&get_key_rect(int,, float)::{lambda()#2}::operator()()::sname), iVar5 != 0) );
                  {
                     _scs_create((char *)&get_key_rect(int,float)::{lambda()
                     #2
                     __cxa_atexit(StringName::~StringName,
                           &get_key_rect(int,float)::{lambda()
                     #2
                     )
                     ;;
                     __cxa_guard_release(&get_key_rect(int,float)::{lambda()
                     #2
                  }

                  uVar7 = Control::get_theme_font_size((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xa8 ));
                  fVar15 = (float)( **(code**)( *local_68 + 0x218 ) )(local_68, uVar7);
                  fVar15 = ( (float)(int)( fVar15 + fVar15 ) * (float)local_60 ) / local_60._4_4_;
                  Control::get_size();
                  uVar20 = 0;
                  uVar17 = CONCAT44(extraout_XMM0_Db, (float)(int)fVar15);
                  Ref<Font>::unref((Ref<Font>*)&local_68);
               }
 else {
                  StringName::StringName((StringName*)&local_68, "get_sprite_frames", false);
                  Object::call<>((StringName*)local_58);
                  local_a0 = (List*)0x0;
                  Ref<SpriteFrames>::operator =((Ref<SpriteFrames>*)&local_a0, (Variant*)local_58);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( local_68 != (long*)0x0 )) {
                     StringName::unref();
                  }

                  pLVar2 = local_a0;
                  if (local_a0 == (List*)0x0) {
                     auVar19 = AnimationTrackEdit::get_key_rect(iVar5, param_2);
                  }
 else {
                     local_98 = (undefined8*)0x0;
                     SpriteFrames::get_animation_list(local_a0);
                     AnimationTrackEdit::get_animation();
                     plVar10 = local_68;
                     AnimationTrackEdit::get_track();
                     iVar13 = (int)(StringName*)local_58;
                     Animation::track_get_key_value(iVar13, (int)plVar10);
                     iVar6 = Variant::operator_cast_to_int((Variant*)local_58);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     Ref<Animation>::unref((Ref<Animation>*)&local_68);
                     local_90 = (long*)0x0;
                     if (( local_98 == (undefined8*)0x0 ) || ( *(int*)( local_98 + 2 ) != 1 )) {
                        AnimationTrackEdit::get_animation();
                        AnimationTrackEdit::get_track();
                        Animation::track_get_path((int)(Ref<Texture2D>*)&local_68);
                        NodePath::operator_cast_to_String((NodePath*)&local_80);
                        NodePath::~NodePath((NodePath*)&local_68);
                        Ref<Animation>::unref((Ref<Animation>*)&local_70);
                        String::replace((char*)&local_68, (char*)&local_80);
                        if (local_80 != local_68) {
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                           local_80 = local_68;
                           local_68 = (long*)0x0;
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                        AnimationTrackEdit::get_animation();
                        plVar10 = local_78;
                        AnimationTrackEdit::get_animation();
                        lVar9 = local_70;
                        AnimationTrackEdit::get_track();
                        uVar4 = Animation::track_get_type((int)lVar9);
                        NodePath::NodePath((NodePath*)&local_68, (String*)&local_80);
                        uVar7 = Animation::find_track(plVar10, (Ref<Texture2D>*)&local_68, uVar4);
                        NodePath::~NodePath((NodePath*)&local_68);
                        Ref<Animation>::unref((Ref<Animation>*)&local_70);
                        Ref<Animation>::unref((Ref<Animation>*)&local_78);
                        AnimationTrackEdit::get_animation();
                        plVar10 = local_68;
                        iVar8 = AnimationTrackEdit::get_track();
                        dVar16 = (double)Animation::track_get_key_time((int)plVar10, iVar8);
                        Ref<Animation>::unref((Ref<Animation>*)&local_68);
                        AnimationTrackEdit::get_animation();
                        Animation::track_find_key((double)(float)dVar16, local_68, uVar7, 0, 0, 0);
                        Ref<Animation>::unref((Ref<Animation>*)&local_68);
                        AnimationTrackEdit::get_animation();
                        Animation::track_get_key_value(iVar13, (int)local_70);
                        Variant::operator_cast_to_String((Variant*)&local_68);
                        if (local_90 != local_68) {
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                           local_90 = local_68;
                           local_68 = (long*)0x0;
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        Ref<Animation>::unref((Ref<Animation>*)&local_70);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                     }
 else {
                        lVar9 = *(long*)*local_98;
                        if (lVar9 == 0) {
                           local_68 = (long*)0x0;
                        }
 else {
                           local_68 = (long*)0x0;
                           if (*(char**)( lVar9 + 8 ) == (char*)0x0) {
                              if (*(long*)( lVar9 + 0x10 ) == 0) goto LAB_00106c7c;
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)( lVar9 + 0x10 ));
                           }
 else {
                              String::parse_latin1((String*)&local_68, *(char**)( lVar9 + 8 ));
                           }

                           if (local_90 != local_68) {
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                              local_90 = local_68;
                              local_68 = (long*)0x0;
                           }

                        }

                        LAB_00106c7c:CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                     }

                     StringName::StringName((StringName*)&local_88, (String*)&local_90, false);
                     local_68 = (long*)( (ulong)local_68 & 0xffffffff00000000 );
                     cVar3 = HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>::_lookup_pos((HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>*)( pLVar2 + 0x240 ), (StringName*)&local_88, (uint*)&local_68);
                     if (( cVar3 == '\0' ) || ( lVar9 = *(long*)( *(long*)( pLVar2 + 0x248 ) + ( (ulong)local_68 & 0xffffffff ) * 8 ) ),lVar9 == 0) {
                        local_70 = 0;
                        String::parse_latin1((String*)&local_70, "\' doesn\'t exist.");
                        if (local_88 == 0) {
                           local_80 = (long*)0x0;
                        }
 else {
                           local_80 = (long*)0x0;
                           if (*(char**)( local_88 + 8 ) == (char*)0x0) {
                              if (*(long*)( local_88 + 0x10 ) != 0) {
                                 CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( local_88 + 0x10 ));
                              }

                           }
 else {
                              String::parse_latin1((String*)&local_80, *(char**)( local_88 + 8 ));
                           }

                        }

                        local_e0 = (CowData<char32_t>*)&local_80;
                        operator+((char *)&
                        local_78,(String*)"Animation \'";
                        String::operator +((String*)&local_68, (String*)&local_78);
                        _err_print_error("get_frame_texture", "./scene/resources/sprite_frames.h", 0x54, "Condition \"!E\" is true. Returning: Ref<Texture2D>()", (Ref<Texture2D>*)&local_68, 0, 0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                        CowData<char32_t>::_unref(local_e0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                        LAB_00106867:local_68 = (long*)0x0;
                        if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
                           StringName::unref();
                        }

                     }
 else {
                        if (iVar6 < 0) {
                           _err_print_error("get_frame_texture", "./scene/resources/sprite_frames.h", 0x55, "Condition \"p_idx < 0\" is true. Returning: Ref<Texture2D>()", 0, 0);
                           goto LAB_00106867;
                        }

                        lVar9 = *(long*)( lVar9 + 0x30 );
                        if (( lVar9 == 0 ) || ( *(long*)( lVar9 + -8 ) <= (long)iVar6 )) goto LAB_00106867;
                        local_68 = (long*)0x0;
                        Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_68, *(Ref**)( lVar9 + (long)iVar6 * 0x10 ));
                        plVar10 = local_68;
                        if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
                           StringName::unref();
                        }

                        if (plVar10 != (long*)0x0) {
                           local_60 = ( **(code**)( *plVar10 + 0x1d8 ) )(plVar10);
                           Ref<Texture2D>::unref((Ref<Texture2D>*)&local_68);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                           List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_98);
                           Ref<SpriteFrames>::unref((Ref<SpriteFrames>*)&local_a0);
                           goto LAB_00106288;
                        }

                     }

                     auVar19 = AnimationTrackEdit::get_key_rect(iVar5, param_2);
                     uVar20 = auVar19._0_8_;
                     Ref<Texture2D>::unref((Ref<Texture2D>*)&local_68);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_98);
                     auVar19._8_8_ = auVar19._8_8_;
                     auVar19._0_8_ = uVar20;
                  }

                  uVar17 = auVar19._8_8_;
                  uVar20 = auVar19._0_8_;
                  Ref<SpriteFrames>::unref((Ref<SpriteFrames>*)&local_a0);
               }

            }
 else {
               StringName::StringName((StringName*)&local_70, "get_texture", false);
               Object::call<>((StringName*)local_58);
               local_78 = (long*)0x0;
               lVar9 = Variant::get_validated_object();
               if (( lVar9 == 0 ) || ( plVar10 = (long*)__dynamic_cast(lVar9, &Object::typeinfo, &Texture2D::typeinfo, 0) ),plVar10 == (long*)0x0) {
                  if (Variant::needs_deinit[local_58[0]] == '\0') {
                     if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
                        StringName::unref();
                     }

                  }
 else {
                     plVar10 = (long*)0x0;
                     Variant::_clear_internal();
                     if (StringName::configured != '\0') goto LAB_001060ea;
                  }

               }
 else {
                  local_68 = (long*)0x0;
                  local_78 = plVar10;
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                     local_78 = (long*)0x0;
                     plVar10 = (long*)0x0;
                  }

                  Ref<Texture2D>::unref((Ref<Texture2D>*)&local_68);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (StringName::configured != '\0') {
                     LAB_001060ea:if (local_70 != 0) {
                        StringName::unref();
                     }

                  }

                  if (plVar10 != (long*)0x0) {
                     local_60 = ( **(code**)( *plVar10 + 0x1d8 ) )(plVar10);
                     StringName::StringName((StringName*)&local_68, "is_region_enabled", false);
                     Object::call<>((StringName*)local_58);
                     bVar14 = Variant::operator_cast_to_bool((Variant*)local_58);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (( StringName::configured != '\0' ) && ( local_68 != (long*)0x0 )) {
                        StringName::unref();
                     }

                     if (bVar14) {
                        StringName::StringName((StringName*)&local_68, "get_region_rect", false);
                        Object::call<>((StringName*)local_58);
                        Variant::operator_cast_to_Rect2((Variant*)local_58);
                        local_60 = extraout_XMM1_Qa;
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        if (( StringName::configured != '\0' ) && ( local_68 != (long*)0x0 )) {
                           StringName::unref();
                        }

                     }

                     StringName::StringName((StringName*)&local_68, "get_hframes", false);
                     Object::call<>((StringName*)local_58);
                     iVar5 = Variant::operator_cast_to_int((Variant*)local_58);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (( StringName::configured != '\0' ) && ( local_68 != (long*)0x0 )) {
                        StringName::unref();
                     }

                     StringName::StringName((StringName*)&local_68, "get_vframes", false);
                     Object::call<>((StringName*)local_58);
                     iVar6 = Variant::operator_cast_to_int((Variant*)local_58);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (( StringName::configured != '\0' ) && ( local_68 != (long*)0x0 )) {
                        StringName::unref();
                     }

                     if (1 < iVar5) {
                        local_60 = CONCAT44(local_60._4_4_, (float)local_60 / (float)iVar5);
                     }

                     if (1 < iVar6) {
                        local_60 = CONCAT44(local_60._4_4_ / (float)iVar6, (float)local_60);
                     }

                     Ref<Texture2D>::unref((Ref<Texture2D>*)&local_78);
                     goto LAB_00106288;
                  }

               }

               auVar19 = AnimationTrackEdit::get_key_rect(iVar5, param_2);
               uVar17 = auVar19._8_8_;
               uVar20 = auVar19._0_8_;
               Ref<Texture2D>::unref((Ref<Texture2D>*)&local_78);
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               auVar18._8_8_ = uVar17;
               auVar18._0_8_ = uVar20;
               return auVar18;
            }

            goto LAB_00106d38;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0, param_1);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar19 = AnimationTrackEdit::get_key_rect(iVar5, param_2);
      return auVar19;
   }

   LAB_00106d38:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* AnimationTrackEditSpriteFrame::draw_key(int, float, int, bool, int, int) */void AnimationTrackEditSpriteFrame::draw_key(AnimationTrackEditSpriteFrame *this, int param_1, float param_2, int param_3, bool param_4, int param_5, int param_6) {
   ulong uVar1;
   undefined1 auVar2[16];
   List *pLVar3;
   char cVar4;
   bool bVar5;
   undefined1 uVar6;
   int iVar7;
   int iVar8;
   undefined4 uVar9;
   int iVar10;
   int iVar11;
   long lVar12;
   Object *pOVar13;
   uint uVar14;
   uint uVar15;
   ulong *puVar16;
   Object *pOVar17;
   long in_FS_OFFSET;
   bool bVar18;
   float fVar19;
   float fVar20;
   undefined8 uVar21;
   float extraout_XMM0_Db;
   double dVar22;
   float fVar23;
   CowData<char32_t> *local_110;
   Object *local_d0;
   List *local_c8;
   undefined8 *local_c0;
   Object *local_b8;
   long local_b0;
   Object *local_a8;
   undefined8 local_a0;
   long local_98;
   Object *local_90;
   undefined1 local_88[8];
   undefined8 local_80;
   float local_78;
   float fStack_74;
   float fStack_70;
   float fStack_6c;
   undefined1 local_68[16];
   undefined8 local_58;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   long local_40;
   uVar14 = (uint)param_4;
   uVar15 = ( uint ) * (ulong*)( this + 0xac8 ) & 0xffffff;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar7 = (int)this;
   bVar5 = SUB41(param_3, 0);
   if (uVar15 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar1 = (ulong)local_90 >> 8;
         local_90 = (Object*)( uVar1 << 8 );
         LOCK();
         bVar18 = (char)ObjectDB::spin_lock == '\0';
         if (bVar18) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar18) break;
         local_90 = (Object*)( uVar1 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar16 = (ulong*)( (ulong)uVar15 * 0x10 + ObjectDB::object_slots );
      if (( *puVar16 & 0x7fffffffff ) == ( *(ulong*)( this + 0xac8 ) >> 0x18 & 0x7fffffffff )) {
         uVar1 = puVar16[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (uVar1 != 0) {
            local_d0 = (Object*)0x0;
            local_88 = (undefined1[8])0x0;
            local_80 = 0;
            lVar12 = __dynamic_cast(uVar1, &Object::typeinfo, &Sprite2D::typeinfo, 0);
            if (( lVar12 == 0 ) && ( lVar12 = __dynamic_cast(uVar1, &Object::typeinfo, &Sprite3D::typeinfo, 0) ),lVar12 == 0) {
               lVar12 = __dynamic_cast(uVar1, &Object::typeinfo, &AnimatedSprite2D::typeinfo, 0);
               if (( lVar12 == 0 ) && ( lVar12 = __dynamic_cast(uVar1, &Object::typeinfo, &AnimatedSprite3D::typeinfo, 0) ),lVar12 == 0) goto LAB_00107184;
               StringName::StringName((StringName*)&local_90, "get_sprite_frames", false);
               Object::call<>((StringName*)&local_58);
               local_c8 = (List*)0x0;
               Ref<SpriteFrames>::operator =((Ref<SpriteFrames>*)&local_c8, (Variant*)&local_58);
               if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
               }

               if (( StringName::configured != '\0' ) && ( local_90 != (Object*)0x0 )) {
                  StringName::unref();
               }

               pLVar3 = local_c8;
               if (local_c8 == (List*)0x0) {
                  AnimationTrackEdit::draw_key(iVar7, param_2, param_1, bVar5, uVar14, param_5);
               }
 else {
                  local_c0 = (undefined8*)0x0;
                  SpriteFrames::get_animation_list(local_c8);
                  AnimationTrackEdit::get_animation();
                  pOVar17 = local_90;
                  AnimationTrackEdit::get_track();
                  iVar11 = (int)(StringName*)&local_58;
                  Animation::track_get_key_value(iVar11, (int)pOVar17);
                  iVar8 = Variant::operator_cast_to_int((Variant*)&local_58);
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                     Variant::_clear_internal();
                  }

                  Ref<Animation>::unref((Ref<Animation>*)&local_90);
                  local_b8 = (Object*)0x0;
                  if (( local_c0 == (undefined8*)0x0 ) || ( *(int*)( local_c0 + 2 ) != 1 )) {
                     AnimationTrackEdit::get_animation();
                     AnimationTrackEdit::get_track();
                     Animation::track_get_path((int)(Ref<Texture2D>*)&local_90);
                     NodePath::operator_cast_to_String((NodePath*)&local_a8);
                     NodePath::~NodePath((NodePath*)&local_90);
                     Ref<Animation>::unref((Ref<Animation>*)&local_98);
                     String::replace((char*)&local_90, (char*)&local_a8);
                     if (local_a8 != local_90) {
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                        local_a8 = local_90;
                        local_90 = (Object*)0x0;
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     AnimationTrackEdit::get_animation();
                     AnimationTrackEdit::get_animation();
                     lVar12 = local_98;
                     AnimationTrackEdit::get_track();
                     uVar6 = Animation::track_get_type((int)lVar12);
                     NodePath::NodePath((NodePath*)&local_90, (String*)&local_a8);
                     uVar9 = Animation::find_track(local_a0, (Ref<Texture2D>*)&local_90, uVar6);
                     NodePath::~NodePath((NodePath*)&local_90);
                     Ref<Animation>::unref((Ref<Animation>*)&local_98);
                     Ref<Animation>::unref((Ref<Animation>*)&local_a0);
                     AnimationTrackEdit::get_animation();
                     pOVar17 = local_90;
                     iVar10 = AnimationTrackEdit::get_track();
                     dVar22 = (double)Animation::track_get_key_time((int)pOVar17, iVar10);
                     Ref<Animation>::unref((Ref<Animation>*)&local_90);
                     AnimationTrackEdit::get_animation();
                     Animation::track_find_key((double)(float)dVar22, local_90, uVar9, 0, 0, 0);
                     Ref<Animation>::unref((Ref<Animation>*)&local_90);
                     AnimationTrackEdit::get_animation();
                     Animation::track_get_key_value(iVar11, (int)local_98);
                     Variant::operator_cast_to_String((Variant*)&local_90);
                     if (local_b8 != local_90) {
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                        local_b8 = local_90;
                        local_90 = (Object*)0x0;
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     if (Variant::needs_deinit[(int)local_58] != '\0') {
                        Variant::_clear_internal();
                     }

                     Ref<Animation>::unref((Ref<Animation>*)&local_98);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                  }
 else {
                     lVar12 = *(long*)*local_c0;
                     if (lVar12 == 0) {
                        local_90 = (Object*)0x0;
                     }
 else {
                        local_90 = (Object*)0x0;
                        if (*(char**)( lVar12 + 8 ) == (char*)0x0) {
                           if (*(long*)( lVar12 + 0x10 ) == 0) goto LAB_00107d55;
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)( lVar12 + 0x10 ));
                        }
 else {
                           String::parse_latin1((String*)&local_90, *(char**)( lVar12 + 8 ));
                        }

                        if (local_b8 != local_90) {
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                           local_b8 = local_90;
                           local_90 = (Object*)0x0;
                        }

                     }

                     LAB_00107d55:CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                  }

                  StringName::StringName((StringName*)&local_b0, (String*)&local_b8, false);
                  local_90 = (Object*)( (ulong)local_90 & 0xffffffff00000000 );
                  cVar4 = HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>::_lookup_pos((HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>*)( pLVar3 + 0x240 ), (StringName*)&local_b0, (uint*)&local_90);
                  if (( cVar4 == '\0' ) || ( lVar12 = *(long*)( *(long*)( pLVar3 + 0x248 ) + ( (ulong)local_90 & 0xffffffff ) * 8 ) ),lVar12 == 0) {
                     local_98 = 0;
                     String::parse_latin1((String*)&local_98, "\' doesn\'t exist.");
                     if (local_b0 == 0) {
                        local_a8 = (Object*)0x0;
                     }
 else {
                        local_a8 = (Object*)0x0;
                        if (*(char**)( local_b0 + 8 ) == (char*)0x0) {
                           if (*(long*)( local_b0 + 0x10 ) != 0) {
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)( local_b0 + 0x10 ));
                           }

                        }
 else {
                           String::parse_latin1((String*)&local_a8, *(char**)( local_b0 + 8 ));
                        }

                     }

                     local_110 = (CowData<char32_t>*)&local_a8;
                     operator+((char *)&
                     local_a0,(String*)"Animation \'";
                     String::operator +((String*)&local_90, (String*)&local_a0);
                     _err_print_error("get_frame_texture", "./scene/resources/sprite_frames.h", 0x54, "Condition \"!E\" is true. Returning: Ref<Texture2D>()", (Ref<Texture2D>*)&local_90, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                     CowData<char32_t>::_unref(local_110);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                     LAB_001077ad:pOVar17 = local_d0;
                     local_90 = (Object*)0x0;
                     if (local_d0 != (Object*)0x0) {
                        local_d0 = (Object*)0x0;
                        LAB_001077cc:cVar4 = RefCounted::unreference();
                        if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar17) ),cVar4 != '\0') {
                           ( **(code**)( *(long*)pOVar17 + 0x140 ) )(pOVar17);
                           Memory::free_static(pOVar17, false);
                        }

                     }

                  }
 else {
                     if (iVar8 < 0) {
                        _err_print_error("get_frame_texture", "./scene/resources/sprite_frames.h", 0x55, "Condition \"p_idx < 0\" is true. Returning: Ref<Texture2D>()", 0, 0);
                        goto LAB_001077ad;
                     }

                     lVar12 = *(long*)( lVar12 + 0x30 );
                     if (( lVar12 == 0 ) || ( *(long*)( lVar12 + -8 ) <= (long)iVar8 )) goto LAB_001077ad;
                     local_90 = (Object*)0x0;
                     Ref<Texture2D>::operator =((Ref<Texture2D>*)&local_90, *(Ref**)( lVar12 + (long)iVar8 * 0x10 ));
                     pOVar17 = local_d0;
                     if (local_90 != local_d0) {
                        local_d0 = local_90;
                        if (( local_90 != (Object*)0x0 ) && ( cVar4 = RefCounted::reference() ),cVar4 == '\0') {
                           local_d0 = (Object*)0x0;
                        }

                        if (pOVar17 == (Object*)0x0) goto LAB_001077dc;
                        goto LAB_001077cc;
                     }

                  }

                  LAB_001077dc:Ref<Texture2D>::unref((Ref<Texture2D>*)&local_90);
                  if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                     StringName::unref();
                  }

                  if (local_d0 != (Object*)0x0) {
                     local_80 = ( **(code**)( *(long*)local_d0 + 0x1d8 ) )();
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                     List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_c0);
                     Ref<SpriteFrames>::unref((Ref<SpriteFrames>*)&local_c8);
                     goto LAB_00107184;
                  }

                  AnimationTrackEdit::draw_key(iVar7, param_2, param_1, bVar5, uVar14, param_5);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_c0);
               }

               Ref<SpriteFrames>::unref((Ref<SpriteFrames>*)&local_c8);
               LAB_001072a7:Ref<Texture2D>::unref((Ref<Texture2D>*)&local_d0);
            }
 else {
               StringName::StringName((StringName*)&local_98, "get_texture", false);
               Object::call<>((StringName*)&local_58);
               pOVar13 = (Object*)Variant::get_validated_object();
               pOVar17 = local_d0;
               if (pOVar13 != local_d0) {
                  if (pOVar13 == (Object*)0x0) {
                     if (local_d0 != (Object*)0x0) {
                        local_d0 = (Object*)0x0;
                        local_90 = pOVar17;
                        goto LAB_00106f20;
                     }

                  }
 else {
                     pOVar13 = (Object*)__dynamic_cast(pOVar13, &Object::typeinfo, &Texture2D::typeinfo, 0);
                     if (pOVar17 != pOVar13) {
                        local_90 = pOVar17;
                        local_d0 = pOVar13;
                        if (( pOVar13 != (Object*)0x0 ) && ( cVar4 = RefCounted::reference() ),cVar4 == '\0') {
                           local_d0 = (Object*)0x0;
                        }

                        LAB_00106f20:Ref<Texture2D>::unref((Ref<Texture2D>*)&local_90);
                     }

                  }

               }

               if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
               }

               if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
                  StringName::unref();
               }

               if (local_d0 == (Object*)0x0) {
                  AnimationTrackEdit::draw_key(iVar7, param_2, param_1, bVar5, uVar14, param_5);
                  goto LAB_001072a7;
               }

               StringName::StringName((StringName*)&local_90, "get_hframes", false);
               Object::call<>((StringName*)&local_58);
               iVar7 = Variant::operator_cast_to_int((Variant*)&local_58);
               if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
               }

               if (( StringName::configured != '\0' ) && ( local_90 != (Object*)0x0 )) {
                  StringName::unref();
               }

               StringName::StringName((StringName*)&local_90, "get_vframes", false);
               Object::call<>((StringName*)&local_58);
               iVar8 = Variant::operator_cast_to_int((Variant*)&local_58);
               if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
               }

               if (( StringName::configured != '\0' ) && ( local_90 != (Object*)0x0 )) {
                  StringName::unref();
               }

               iVar11 = (int)(StringName*)&local_58;
               if (this[0xad0] == (AnimationTrackEditSpriteFrame)0x0) {
                  AnimationTrackEdit::get_animation();
                  pOVar17 = local_90;
                  AnimationTrackEdit::get_track();
                  Animation::track_get_key_value(iVar11, (int)pOVar17);
                  iVar11 = Variant::operator_cast_to_int((Variant*)&local_58);
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                     Variant::_clear_internal();
                  }

                  Ref<Animation>::unref((Ref<Animation>*)&local_90);
                  fVar20 = (float)( iVar11 % iVar7 );
                  local_110._0_4_ = (float)( iVar11 / iVar7 );
               }
 else {
                  AnimationTrackEdit::get_animation();
                  pOVar17 = local_90;
                  AnimationTrackEdit::get_track();
                  Animation::track_get_key_value(iVar11, (int)pOVar17);
                  uVar21 = Variant::operator_cast_to_Vector2((Variant*)&local_58);
                  fVar20 = (float)uVar21;
                  local_110._0_4_ = (float)( (ulong)uVar21 >> 0x20 );
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                     Variant::_clear_internal();
                  }

                  Ref<Animation>::unref((Ref<Animation>*)&local_90);
               }

               local_80 = ( **(code**)( *(long*)local_d0 + 0x1d8 ) )();
               StringName::StringName((StringName*)&local_90, "is_region_enabled", false);
               Object::call<>((StringName*)&local_58);
               bVar5 = Variant::operator_cast_to_bool((Variant*)&local_58);
               if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
               }

               if (( StringName::configured != '\0' ) && ( local_90 != (Object*)0x0 )) {
                  StringName::unref();
               }

               auVar2._8_8_ = local_80;
               auVar2._0_8_ = local_88;
               if (bVar5) {
                  StringName::StringName((StringName*)&local_90, "get_region_rect", false);
                  Object::call<>((StringName*)&local_58);
                  _local_88 = Variant::operator_cast_to_Rect2((Variant*)&local_58);
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                     Variant::_clear_internal();
                  }

                  auVar2 = _local_88;
                  if (( StringName::configured != '\0' ) && ( local_90 != (Object*)0x0 )) {
                     StringName::unref();
                     auVar2 = _local_88;
                  }

               }

               local_80 = auVar2._8_8_;
               uVar21 = local_80;
               local_80._0_4_ = auVar2._8_4_;
               fVar19 = (float)local_80;
               if (1 < iVar7) {
                  fVar19 = (float)local_80 / (float)iVar7;
                  local_80._4_4_ = auVar2._12_4_;
                  local_80 = CONCAT44(local_80._4_4_, fVar19);
                  uVar21 = local_80;
               }

               local_80 = uVar21;
               fVar23 = local_80._4_4_;
               if (1 < iVar8) {
                  fVar23 = local_80._4_4_ / (float)iVar8;
                  local_80 = CONCAT44(fVar23, (float)local_80);
               }

               local_88 = (undefined1[8])CONCAT44(auVar2._4_4_ + fVar23 * local_110._0_4_, auVar2._0_4_ + fVar19 * fVar20);
               LAB_00107184:if (( draw_key(int,float,int,bool,int,int)::{lambda()#1}::operator()() ) && ( iVar7 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#1}, ::
                                           operator()() ),iVar7 != 0) {
                  _scs_create((char *)&draw_key(int,float,int,bool,int,int)::{lambda()
                  #1
                  sname,true;
                  __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#1}::operator()()::sname,&__dso_handle);
                  __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
                  #1
                  sname;
               }

               Control::get_theme_font((StringName*)&local_90, (StringName*)this);
               if ((draw_key(int,float,int,bool,int,int)::{lambda()
               #2
               ( iVar7 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#2}::
                                           operator()()::sname),iVar7 != 0) );
               {
                  _scs_create((char *)&draw_key(int,float,int,bool,int,int)::{lambda()
                  #2
                  sname,true;
                  __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#2}::operator()()::sname,&__dso_handle);
                  __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
                  #2
                  sname;
               }

               uVar9 = Control::get_theme_font_size((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xa8 ));
               fVar20 = (float)( **(code**)( *(long*)local_90 + 0x218 ) )(local_90, uVar9);
               fVar23 = (float)(int)( fVar20 + fVar20 );
               fVar19 = ( fVar23 * (float)local_80 ) / local_80._4_4_;
               Control::get_size();
               local_78 = (float)param_3;
               fStack_74 = (float)( (int)( extraout_XMM0_Db - fVar23 ) / 2 );
               fStack_70 = (float)(int)fVar19;
               fStack_6c = (float)(int)( fVar20 + fVar20 );
               if (( fStack_70 + local_78 < (float)param_5 ) || ( (float)param_6 < local_78 )) {
                  Ref<Font>::unref((Ref<Font>*)&local_90);
                  goto LAB_001072a7;
               }

               if ((draw_key(int,float,int,bool,int,int)::{lambda()
               #3
               ( iVar7 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#3}::
                                           operator()()::sname),iVar7 != 0) );
               {
                  _scs_create((char *)&draw_key(int,float,int,bool,int,int)::{lambda()
                  #3
                  sname,true;
                  __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#3}::operator()()::sname,&__dso_handle);
                  __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
                  #3
                  sname;
               }

               local_68 = Control::get_theme_color((StringName*)this, (StringName*)&draw_key, (int,float,int,bool,int, int)::{lambda()#3}::operator()()::sname);
               local_58 = local_68._0_8_;
               _uStack_50 = CONCAT44(0x3e19999a, local_68._8_4_);
               AnimationTrackEdit::draw_rect_clipped((Rect2*)this, (Rect2*)&local_78, SUB81(&local_58, 0));
               AnimationTrackEdit::draw_texture_region_clipped((Ref*)this, (Rect2*)&local_d0, (Rect2*)&local_78);
               if (param_4) {
                  AnimationTrackEdit::draw_rect_clipped((Rect2*)this, (Rect2*)&local_78, SUB81(local_68, 0));
               }

               Ref<Font>::unref((Ref<Font>*)&local_90);
               Ref<Texture2D>::unref((Ref<Texture2D>*)&local_d0);
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_00107e89;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      AnimationTrackEdit::draw_key(iVar7, param_2, param_1, bVar5, uVar14, param_5);
      return;
   }

   LAB_00107e89:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */void CowData<Vector2>::_copy_on_write(CowData<Vector2> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   ulong uVar4;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar4 = 0x10;
   __n = lVar1 * 8;
   if (__n != 0) {
      uVar4 = __n - 1 | __n - 1 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = ( uVar4 | uVar4 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar4, false);
   if (puVar3 != (undefined8*)0x0) {
      *puVar3 = 1;
      puVar3[1] = lVar1;
      memcpy(puVar3 + 2, *(void**)this, __n);
      _unref(this);
      *(undefined8**)this = puVar3 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* Vector<Vector2>::push_back(Vector2) [clone .isra.0] */void Vector<Vector2>::push_back(undefined8 param_1, Vector<Vector2> *this) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<Vector2>::resize<false>((CowData<Vector2>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<Vector2>::_copy_on_write((CowData<Vector2>*)( this + 8 ));
            *(undefined8*)( *(long*)( this + 8 ) + lVar3 * 8 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* AnimationTrackEditTypeAudio::can_drop_data(Vector2 const&, Variant const&) const */undefined8 AnimationTrackEditTypeAudio::can_drop_data(Vector2 *param_1, Variant *param_2) {
   float fVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   undefined8 uVar5;
   Variant *pVVar6;
   long lVar7;
   long in_FS_OFFSET;
   float fVar8;
   Variant local_a8[8];
   long local_a0;
   undefined8 local_98;
   Ref *local_90;
   long local_88;
   long local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   fVar1 = *(float*)param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = AnimationTimelineEdit::get_name_limit();
   if ((float)iVar4 < fVar1) {
      fVar1 = *(float*)param_2;
      fVar8 = (float)Control::get_size();
      iVar4 = AnimationTimelineEdit::get_buttons_width();
      if (fVar1 < fVar8 - (float)iVar4) {
         Variant::operator_cast_to_Dictionary(local_a8);
         Variant::Variant((Variant*)local_78, "type");
         cVar3 = Dictionary::has(local_a8);
         if (cVar3 != '\0') {
            Variant::Variant((Variant*)local_58, "type");
            Dictionary::operator [](local_a8);
            Variant::operator_cast_to_String((Variant*)&local_88);
            cVar3 = String::operator ==((String*)&local_88, "resource");
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (cVar3 == '\0') goto LAB_001081f2;
            Variant::Variant((Variant*)local_58, "resource");
            pVVar6 = (Variant*)Dictionary::operator [](local_a8);
            local_88 = 0;
            Ref<AudioStream>::operator =((Ref<AudioStream>*)&local_88, pVVar6);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (local_88 == 0) {
               Ref<AudioStream>::unref((Ref<AudioStream>*)&local_88);
               goto LAB_001081f2;
            }

            Ref<AudioStream>::unref((Ref<AudioStream>*)&local_88);
            LAB_0010831a:Dictionary::~Dictionary((Dictionary*)local_a8);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return 1;
            }

            goto LAB_001085ce;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         LAB_001081f2:Variant::Variant((Variant*)local_78, "type");
         cVar3 = Dictionary::has(local_a8);
         if (cVar3 == '\0') {
            if (Variant::needs_deinit[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }

         }
 else {
            Variant::Variant((Variant*)local_58, "type");
            Dictionary::operator [](local_a8);
            Variant::operator_cast_to_String((Variant*)&local_88);
            cVar3 = String::operator ==((String*)&local_88, "files");
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (cVar3 != '\0') {
               Variant::Variant((Variant*)local_58, "files");
               Dictionary::operator [](local_a8);
               Variant::operator_cast_to_Vector((Variant*)&local_88);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (( local_80 != 0 ) && ( *(long*)( local_80 + -8 ) == 1 )) {
                  local_98 = 0;
                  String::parse_latin1((String*)&local_98, "");
                  if (local_80 == 0) {
                     lVar7 = 0;
                     LAB_00108594:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar7, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }

                  lVar7 = *(long*)( local_80 + -8 );
                  if (lVar7 < 1) goto LAB_00108594;
                  ResourceLoader::load((Ref<Resource>*)&local_90, local_80, (String*)&local_98, 1, 0);
                  local_a0 = 0;
                  Ref<AudioStream>::operator =((Ref<AudioStream>*)&local_a0, local_90);
                  Ref<Resource>::unref((Ref<Resource>*)&local_90);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                  if (local_a0 != 0) {
                     Ref<AudioStream>::unref((Ref<AudioStream>*)&local_a0);
                     CowData<String>::_unref((CowData<String>*)&local_80);
                     goto LAB_0010831a;
                  }

                  Ref<AudioStream>::unref((Ref<AudioStream>*)&local_a0);
               }

               CowData<String>::_unref((CowData<String>*)&local_80);
            }

         }

         Dictionary::~Dictionary((Dictionary*)local_a8);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar5 = AnimationTrackEdit::can_drop_data(param_1, param_2);
      return uVar5;
   }

   LAB_001085ce:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* AnimationTrackEditTypeAudio::drop_data(Vector2 const&, Variant const&) */void AnimationTrackEditTypeAudio::drop_data(Vector2 *param_1, Variant *param_2) {
   Variant *pVVar1;
   float fVar2;
   code *pcVar3;
   StringName *pSVar4;
   Object *pOVar5;
   char cVar6;
   int iVar7;
   undefined4 uVar8;
   int iVar9;
   Object *pOVar10;
   Variant *pVVar11;
   long lVar12;
   long in_FS_OFFSET;
   float fVar13;
   double dVar14;
   float local_140;
   Object *local_120;
   Ref<AudioStream> *local_110;
   Object *local_f8;
   Variant local_f0[8];
   StringName *local_e8;
   Object *local_e0;
   long local_d8;
   long local_d0;
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   int local_a8[6];
   Variant local_90[24];
   undefined8 local_78;
   undefined1 local_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   fVar2 = *(float*)param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar7 = AnimationTimelineEdit::get_name_limit();
   if ((float)iVar7 < fVar2) {
      fVar2 = *(float*)param_2;
      fVar13 = (float)Control::get_size();
      iVar7 = AnimationTimelineEdit::get_buttons_width();
      if (fVar2 < fVar13 - (float)iVar7) {
         local_f8 = (Object*)0x0;
         Variant::operator_cast_to_Dictionary(local_f0);
         Variant::Variant((Variant*)&local_c8, "type");
         cVar6 = Dictionary::has(local_f0);
         if (cVar6 == '\0') {
            if (Variant::needs_deinit[(int)local_c8] != '\0') {
               Variant::_clear_internal();
            }

            LAB_00108716:Variant::Variant((Variant*)&local_c8, "type");
            cVar6 = Dictionary::has(local_f0);
            if (cVar6 == '\0') {
               if (Variant::needs_deinit[(int)local_c8] != '\0') {
                  Variant::_clear_internal();
               }

            }
 else {
               Variant::Variant((Variant*)local_a8, "type");
               Dictionary::operator [](local_f0);
               Variant::operator_cast_to_String((Variant*)&local_d8);
               cVar6 = String::operator ==((String*)&local_d8, "files");
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
               if (Variant::needs_deinit[local_a8[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (Variant::needs_deinit[(int)local_c8] != '\0') {
                  Variant::_clear_internal();
               }

               if (cVar6 != '\0') {
                  Variant::Variant((Variant*)local_a8, "files");
                  Dictionary::operator [](local_f0);
                  Variant::operator_cast_to_Vector((Variant*)&local_d8);
                  if (Variant::needs_deinit[local_a8[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( local_d0 != 0 ) && ( *(long*)( local_d0 + -8 ) == 1 )) {
                     local_e8 = (StringName*)0x0;
                     String::parse_latin1((String*)&local_e8, "");
                     if (local_d0 == 0) {
                        lVar12 = 0;
                        LAB_00108e90:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar12, "p_index", "size()", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar3 = (code*)invalidInstructionException();
                        ( *pcVar3 )();
                     }

                     lVar12 = *(long*)( local_d0 + -8 );
                     if (lVar12 < 1) goto LAB_00108e90;
                     ResourceLoader::load((Ref<Resource>*)&local_e0, local_d0, (String*)&local_e8, 1, 0);
                     Ref<AudioStream>::operator =((Ref<AudioStream>*)&local_f8, (Ref*)local_e0);
                     Ref<Resource>::unref((Ref<Resource>*)&local_e0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
                     local_120 = local_f8;
                     CowData<String>::_unref((CowData<String>*)&local_d0);
                     goto LAB_0010884a;
                  }

                  CowData<String>::_unref((CowData<String>*)&local_d0);
               }

            }

         }
 else {
            Variant::Variant((Variant*)local_a8, "type");
            Dictionary::operator [](local_f0);
            Variant::operator_cast_to_String((Variant*)&local_d8);
            cVar6 = String::operator ==((String*)&local_d8, "resource");
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
            if (Variant::needs_deinit[local_a8[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[(int)local_c8] != '\0') {
               Variant::_clear_internal();
            }

            if (cVar6 == '\0') goto LAB_00108716;
            Variant::Variant((Variant*)local_a8, "resource");
            pVVar11 = (Variant*)Dictionary::operator [](local_f0);
            Ref<AudioStream>::operator =((Ref<AudioStream>*)&local_f8, pVVar11);
            if (Variant::needs_deinit[local_a8[0]] != '\0') {
               Variant::_clear_internal();
            }

            local_120 = local_f8;
            LAB_0010884a:local_110 = (Ref<AudioStream>*)&local_f8;
            if (local_120 != (Object*)0x0) {
               fVar2 = *(float*)param_2;
               iVar7 = AnimationTimelineEdit::get_name_limit();
               fVar13 = (float)AnimationTimelineEdit::get_zoom_scale();
               dVar14 = (double)Range::get_value();
               local_140 = (float)AnimationTrackEditor::snap_time((float)( (double)( (float)(int)( fVar2 - (float)iVar7 ) / fVar13 ) + dVar14 ), SUB81(*(undefined8*)( param_1 + 0xac0 ), 0));
               while (true) {
                  AnimationTrackEdit::get_animation();
                  lVar12 = local_d8;
                  uVar8 = AnimationTrackEdit::get_track();
                  iVar7 = Animation::track_find_key((double)local_140, lVar12, uVar8, 1, 0, 0);
                  Ref<Animation>::unref((Ref<Animation>*)&local_d8);
                  if (iVar7 == -1) break;
                  local_140 = (float)( (double)local_140 + _LC46 );
               }
;
               pOVar10 = (Object*)EditorUndoRedoManager::get_singleton();
               local_e0 = (Object*)0x0;
               String::parse_latin1((String*)&local_e0, "");
               local_e8 = (StringName*)0x0;
               String::parse_latin1((String*)&local_e8, "Add Audio Track Clip");
               TTR((String*)&local_d8, (String*)&local_e8);
               EditorUndoRedoManager::create_action(pOVar10, (Ref<Animation>*)&local_d8, 0, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
               local_d8 = 0;
               local_e0 = local_120;
               cVar6 = RefCounted::reference();
               if (cVar6 == '\0') {
                  local_e0 = (Object*)0x0;
                  local_120 = (Object*)0x0;
               }

               Ref<AudioStream>::unref((Ref<AudioStream>*)&local_d8);
               iVar7 = AnimationTrackEdit::get_track();
               StringName::StringName((StringName*)&local_d8, "audio_track_insert_key", false);
               AnimationTrackEdit::get_animation();
               pSVar4 = local_e8;
               Variant::Variant((Variant*)local_a8, iVar7);
               Variant::Variant(local_90, local_140);
               Variant::Variant((Variant*)&local_78, local_120);
               local_58 = (undefined1[16])0x0;
               pVVar11 = local_48;
               local_60 = 0;
               iVar7 = (int)(Variant*)&local_c8;
               local_c8 = (Variant*)local_a8;
               pVStack_c0 = local_90;
               local_b8 = (Variant*)&local_78;
               EditorUndoRedoManager::add_do_methodp(pOVar10, pSVar4, (Variant**)&local_d8, iVar7);
               do {
                  pVVar1 = pVVar11 + -0x18;
                  pVVar11 = pVVar11 + -0x18;
                  if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                     Variant::_clear_internal();
                  }

               }
 while ( pVVar11 != (Variant*)local_a8 );
               Ref<Animation>::unref((Ref<Animation>*)&local_e8);
               if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
                  StringName::unref();
               }

               Ref<AudioStream>::unref((Ref<AudioStream>*)&local_e0);
               iVar9 = AnimationTrackEdit::get_track();
               StringName::StringName((StringName*)&local_d8, "track_remove_key_at_time", false);
               AnimationTrackEdit::get_animation();
               pOVar5 = local_e0;
               pVVar11 = (Variant*)&local_60;
               Variant::Variant((Variant*)local_a8, iVar9);
               Variant::Variant(local_90, local_140);
               local_70 = (undefined1[16])0x0;
               local_78 = 0;
               local_c8 = (Variant*)local_a8;
               pVStack_c0 = local_90;
               EditorUndoRedoManager::add_undo_methodp(pOVar10, (StringName*)pOVar5, (Variant**)&local_d8, iVar7);
               do {
                  pVVar1 = pVVar11 + -0x18;
                  pVVar11 = pVVar11 + -0x18;
                  if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                     Variant::_clear_internal();
                  }

               }
 while ( pVVar11 != (Variant*)local_a8 );
               Ref<Animation>::unref((Ref<Animation>*)&local_e0);
               if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
                  StringName::unref();
               }

               EditorUndoRedoManager::commit_action(SUB81(pOVar10, 0));
               CanvasItem::queue_redraw();
               Dictionary::~Dictionary((Dictionary*)local_f0);
               Ref<AudioStream>::unref(local_110);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               goto LAB_00108ed0;
            }

         }

         local_110 = (Ref<AudioStream>*)&local_f8;
         Dictionary::~Dictionary((Dictionary*)local_f0);
         Ref<AudioStream>::unref(local_110);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      AnimationTrackEdit::drop_data(param_1, param_2);
      return;
   }

   LAB_00108ed0:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CowData<Color>::_copy_on_write() [clone .isra.0] */void CowData<Color>::_copy_on_write(CowData<Color> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   ulong uVar4;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar4 = 0x10;
   __n = lVar1 * 0x10;
   if (__n != 0) {
      uVar4 = __n - 1 | __n - 1 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = ( uVar4 | uVar4 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar4, false);
   if (puVar3 != (undefined8*)0x0) {
      *puVar3 = 1;
      puVar3[1] = lVar1;
      memcpy(puVar3 + 2, *(void**)this, __n);
      _unref(this);
      *(undefined8**)this = puVar3 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationTrackEditAudio::draw_key(int, float, int, bool, int, int) */void AnimationTrackEditAudio::draw_key(AnimationTrackEditAudio *this, int param_1, float param_2, int param_3, bool param_4, int param_5, int param_6) {
   code *pcVar1;
   undefined8 uVar2;
   int iVar3;
   undefined4 uVar4;
   int iVar5;
   long *plVar6;
   uint uVar7;
   ulong *puVar8;
   long lVar9;
   bool bVar10;
   long lVar11;
   long lVar12;
   int iVar13;
   long lVar14;
   long in_FS_OFFSET;
   bool bVar15;
   float fVar16;
   float fVar17;
   double dVar18;
   float extraout_XMM0_Db;
   float extraout_XMM0_Db_00;
   double dVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   long *local_b0;
   Ref local_a8[8];
   long *local_a0;
   int local_98[2];
   long local_90;
   StringName local_88;
   undefined7 uStack_87;
   undefined8 *local_80;
   float local_78;
   float fStack_74;
   float fStack_70;
   float fStack_6c;
   undefined1 local_68[8];
   undefined8 uStack_60;
   undefined1 local_58[16];
   long local_40;
   uVar7 = ( uint ) * (ulong*)( this + 0xac8 ) & 0xffffff;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar7 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_88 = (StringName)0x0;
         LOCK();
         bVar15 = (char)ObjectDB::spin_lock == '\0';
         if (bVar15) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar15) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar8 = (ulong*)( (ulong)uVar7 * 0x10 + ObjectDB::object_slots );
      if (( *puVar8 & 0x7fffffffff ) == ( *(ulong*)( this + 0xac8 ) >> 0x18 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar8[1] != 0) {
            StringName::StringName(&local_88, "get_stream", false);
            Object::call<>((StringName*)local_58);
            local_b0 = (long*)0x0;
            Ref<AudioStream>::operator =((Ref<AudioStream>*)&local_b0, (Variant*)local_58);
            if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
               Variant::_clear_internal();
            }

            if (( StringName::configured != '\0' ) && ( CONCAT71(uStack_87, local_88) != 0 )) {
               StringName::unref();
            }

            if (local_b0 == (long*)0x0) {
               AnimationTrackEdit::draw_key((int)this, param_2, param_1, SUB41(param_3, 0), (uint)param_4, param_5);
            }
 else {
               AnimationTrackEdit::get_animation();
               uVar2 = CONCAT71(uStack_87, local_88);
               AnimationTrackEdit::get_track();
               Animation::track_get_key_value((int)(StringName*)local_58, (int)uVar2);
               bVar15 = Variant::operator_cast_to_bool((Variant*)local_58);
               if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
                  Variant::_clear_internal();
               }

               Ref<Animation>::unref((Ref<Animation>*)&local_88);
               bVar10 = SUB81((StringName*)local_58, 0);
               if (bVar15) {
                  dVar18 = (double)( **(code**)( *local_b0 + 0x1f8 ) )();
                  AudioStreamPreviewGenerator::generate_preview(local_a8);
                  fVar16 = (float)AudioStreamPreview::get_length();
                  if ((float)dVar18 != 0.0) {
                     fVar16 = (float)dVar18;
                  }

                  fVar21 = param_2 * fVar16;
                  iVar13 = (int)fVar21;
                  iVar5 = param_3 + iVar13;
                  if (( param_3 <= param_6 ) && ( param_5 <= iVar5 )) {
                     if (param_5 <= param_3) {
                        param_5 = param_3;
                     }

                     if (iVar5 <= param_6) {
                        param_6 = iVar5;
                     }

                     AnimationTrackEdit::get_animation();
                     uVar2 = CONCAT71(uStack_87, local_88);
                     AnimationTrackEdit::get_track();
                     iVar3 = Animation::track_get_key_count((int)uVar2);
                     Ref<Animation>::unref((Ref<Animation>*)&local_88);
                     iVar5 = param_6;
                     if (param_1 + 1 < iVar3) {
                        AnimationTrackEdit::get_animation();
                        iVar5 = AnimationTrackEdit::get_track();
                        dVar18 = (double)Animation::track_get_key_time(local_98[0], iVar5);
                        AnimationTrackEdit::get_animation();
                        uVar2 = CONCAT71(uStack_87, local_88);
                        iVar5 = AnimationTrackEdit::get_track();
                        dVar19 = (double)Animation::track_get_key_time((int)uVar2, iVar5);
                        if (dVar18 - dVar19 <= (double)fVar16) {
                           fVar21 = param_2 * (float)( dVar18 - dVar19 );
                        }

                        Ref<Animation>::unref((Ref<Animation>*)&local_88);
                        Ref<Animation>::unref((Ref<Animation>*)local_98);
                        iVar5 = (int)( (float)param_3 + fVar21 );
                        if (param_6 <= (int)( (float)param_3 + fVar21 )) {
                           iVar5 = param_6;
                        }

                     }

                     if (param_5 < iVar5) {
                        if ((draw_key(int,float,int,bool,int,int)::{lambda()
                        #1
                        ) && (iVar3 = __cxa_guard_acquire(&draw_key(int,float,int,bool,int,int)::
                                                       {lambda()
                        #1
                        iVar3 != 0))
                        {
                           _scs_create((char*)&draw_key, (int,float,int,bool,int, int)::{lambda()#1}::
                                       operator()()::sname,true);
                           __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#1}::operator()()::sname,&__dso_handle);
                           __cxa_guard_release (&draw_key(int,float,int,bool,int,int)::{lambda()#1}::
                                       operator()()::sname);
                        }

                        Control::get_theme_font((StringName*)&local_a0, (StringName*)this);
                        if ((draw_key(int,float,int,bool,int,int)::{lambda()
                        #2
                        ) && (iVar3 = __cxa_guard_acquire(&draw_key(int,float,int,bool,int,int)::
                                                       {lambda()
                        #2
                        iVar3 != 0))
                        {
                           _scs_create((char*)&draw_key, (int,float,int,bool,int, int)::{lambda()#2}::
                                       operator()()::sname,true);
                           __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#2}::operator()()::sname,&__dso_handle);
                           __cxa_guard_release (&draw_key(int,float,int,bool,int,int)::{lambda()#2}::
                                       operator()()::sname);
                        }

                        uVar4 = Control::get_theme_font_size((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xa8 ));
                        fVar16 = (float)( **(code**)( *local_a0 + 0x218 ) )(local_a0, uVar4);
                        dVar18 = (double)fVar16 * __LC24;
                        Control::get_size();
                        uStack_60 = CONCAT44((float)(int)dVar18, (float)( iVar5 - param_5 ));
                        local_68 = (undefined1[8])CONCAT44(( extraout_XMM0_Db - (float)(int)dVar18 ) * _LC18, (float)param_5);
                        local_58._0_8_ = __LC125;
                        local_58._8_8_ = _UNK_00119a48;
                        CanvasItem::draw_rect((Rect2*)this, local_68, bVar10, _LC21, true);
                        local_90 = 0;
                        CowData<Vector2>::resize<false>((CowData<Vector2>*)&local_90, (long)( ( iVar5 - param_5 ) * 2 ));
                        fVar16 = (float)AudioStreamPreview::get_length();
                        fVar21 = (float)iVar13;
                        lVar14 = 1;
                        iVar13 = ( param_5 + 1 ) - param_3;
                        lVar12 = 0;
                        do {
                           fVar22 = ( (float)( iVar13 + -1 ) * fVar16 ) / fVar21;
                           fVar20 = ( (float)iVar13 * fVar16 ) / fVar21;
                           fVar17 = (float)AudioStreamPreview::get_max(fVar22, fVar20);
                           dVar18 = (double)fVar17 * __LC126 + __LC126;
                           fVar17 = (float)AudioStreamPreview::get_min(fVar22, fVar20);
                           fVar20 = (float)( param_3 + -1 + iVar13 );
                           fVar17 = (float)( (double)fVar17 * __LC126 + __LC126 ) * uStack_60._4_4_ + (float)local_68._4_4_;
                           lVar9 = lVar12;
                           if (local_90 == 0) {
                              lVar11 = 0;
                              LAB_00109b3b:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar9, lVar11, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar1 = (code*)invalidInstructionException();
                              ( *pcVar1 )();
                           }

                           lVar11 = *(long*)( local_90 + -8 );
                           if (lVar11 <= lVar12) goto LAB_00109b3b;
                           CowData<Vector2>::_copy_on_write((CowData<Vector2>*)&local_90);
                           *(ulong*)( local_90 + lVar12 * 8 ) = CONCAT44(fVar17, fVar20);
                           fVar17 = (float)dVar18 * uStack_60._4_4_ + (float)local_68._4_4_;
                           lVar9 = lVar14;
                           if (local_90 == 0) {
                              lVar11 = 0;
                              goto LAB_00109b3b;
                           }

                           lVar11 = *(long*)( local_90 + -8 );
                           if (lVar11 <= lVar14) goto LAB_00109b3b;
                           iVar13 = iVar13 + 1;
                           lVar12 = lVar12 + 2;
                           CowData<Vector2>::_copy_on_write((CowData<Vector2>*)&local_90);
                           *(ulong*)( local_90 + lVar14 * 8 ) = CONCAT44(fVar17, fVar20);
                           lVar14 = lVar14 + 2;
                        }
 while ( iVar13 != ( iVar5 - param_3 ) + 1 );
                        local_80 = (undefined8*)0x0;
                        iVar5 = CowData<Color>::resize<false>((CowData<Color>*)&local_80, 1);
                        if (iVar5 == 0) {
                           if (local_80 == (undefined8*)0x0) {
                              lVar12 = 0;
                           }
 else {
                              lVar12 = local_80[-1];
                              if (0 < lVar12) {
                                 CowData<Color>::_copy_on_write((CowData<Color>*)&local_80);
                                 uVar2 = _UNK_00119a58;
                                 *local_80 = __LC129;
                                 local_80[1] = uVar2;
                                 goto LAB_00109705;
                              }

                           }

                           _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, 0, lVar12, "p_index", "size()", "", false, false);
                        }

                        LAB_00109705:plVar6 = (long*)RenderingServer::get_singleton();
                        ( **(code**)( *plVar6 + 0xf08 ) )(plVar6, *(undefined8*)( this + 0x428 ), local_98, &local_88, 0);
                        if (param_4) {
                           if ((draw_key(int,float,int,bool,int,int)::{lambda()
                           #3
                           '\0') &&
                     (iVar5 = __cxa_guard_acquire(&draw_key(int,float,int,bool,int,int)::
                                                   {lambda()
                           #3
                           {
                              _scs_create((char*)&draw_key, (int,float,int,bool,int, int)::{lambda()#3}::
                                         operator()()::sname,true);
                              __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#3}::operator()()::sname,&__dso_handle);
                              __cxa_guard_release (&draw_key(int,float,int,bool,int,int)::{lambda()#3}::
                                         operator()()::sname);
                           }

                           local_58 = Control::get_theme_color((StringName*)this, (StringName*)&draw_key, (int,float,int,bool,int, int)::{lambda()#3}::
                                         operator()()::sname);
                           CanvasItem::draw_rect((Rect2*)this, local_68, bVar10, _LC21, false);
                        }

                        CowData<Color>::_unref((CowData<Color>*)&local_80);
                        CowData<Vector2>::_unref((CowData<Vector2>*)&local_90);
                        Ref<Font>::unref((Ref<Font>*)&local_a0);
                        Ref<AudioStreamPreview>::unref((Ref<AudioStreamPreview>*)local_a8);
                        goto LAB_00109236;
                     }

                  }

                  Ref<AudioStreamPreview>::unref((Ref<AudioStreamPreview>*)local_a8);
               }
 else {
                  if ((draw_key(int,float,int,bool,int,int)::{lambda()#4}::operator()()::sname == '\0') &&
               (iVar5 = __cxa_guard_acquire(&draw_key(int,float,int,bool,int,int)::{lambda()#4}::
                                             operator()()::sname), iVar5 != 0))
                  {
                     _scs_create((char *)&draw_key(int,float,int,bool,int,int)::{lambda()
                     #4
                     ::sname,true;
                     __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#4}::operator()()::sname,&__dso_handle);
                     __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
                     #4
                     ::sname
                     )
                     ;
                  }

                  Control::get_theme_font(&local_88, (StringName*)this);
                  if ((draw_key(int,float,int,bool,int,int)::{lambda()
                  #5
                  ( iVar5 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#5}::
                                             operator()()::sname),iVar5 != 0) );
                  {
                     _scs_create((char *)&draw_key(int,float,int,bool,int,int)::{lambda()
                     #5
                     ::sname,true;
                     __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#5}::operator()()::sname,&__dso_handle);
                     __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
                     #5
                     ::sname
                     )
                     ;
                  }

                  uVar4 = Control::get_theme_font_size((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xa8 ));
                  fVar16 = (float)( **(code**)( *(long*)CONCAT71(uStack_87, local_88) + 0x218 ) )((long*)CONCAT71(uStack_87, local_88), uVar4);
                  iVar5 = (int)( (double)fVar16 * __LC23 );
                  Control::get_size();
                  local_78 = (float)param_3;
                  fStack_74 = (float)( (int)( extraout_XMM0_Db_00 - (float)iVar5 ) / 2 );
                  fStack_70 = (float)iVar5;
                  fStack_6c = (float)iVar5;
                  if ((draw_key(int,float,int,bool,int,int)::{lambda()
                  #6
                  ( iVar5 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#6}::
                                             operator()()::sname),iVar5 != 0) );
                  {
                     _scs_create((char *)&draw_key(int,float,int,bool,int,int)::{lambda()
                     #6
                     ::sname,true;
                     __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#6}::operator()()::sname,&__dso_handle);
                     __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
                     #6
                     ::sname
                     )
                     ;
                  }

                  _local_68 = Control::get_theme_color((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xb0 ));
                  AnimationTrackEdit::draw_rect_clipped((Rect2*)this, (Color*)&local_78, SUB81(local_68, 0));
                  if (param_4) {
                     if (draw_key(int,float,int,bool,int,int) ::{lambda();
                     #7
                     iVar5 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#7}::
                                             operator()()::sname);
                     if (iVar5 != 0) {
                        _scs_create((char*)&draw_key, (int,float,int,bool,int, int)::{lambda()#7}::
                                       operator()()::sname,true);
                        __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#7}::operator()()::sname,&__dso_handle);
                        __cxa_guard_release (&draw_key(int,float,int,bool,int,int)::{lambda()#7}::
                                       operator()()::sname);
                     }

                  }

                  local_58 = Control::get_theme_color((StringName*)this, (StringName*)&draw_key, (int,float,int,bool,int, int)::{lambda()#7}::
                                     operator()()::sname);
                  AnimationTrackEdit::draw_rect_clipped((Rect2*)this, (Color*)&local_78, bVar10);
               }

               Ref<Font>::unref((Ref<Font>*)&local_88);
            }

         }

         LAB_00109236:Ref<AudioStream>::unref((Ref<AudioStream>*)&local_b0);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00109c83;
      }

   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
   }

}
else{_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);};if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   AnimationTrackEdit::draw_key((int)this, param_2, param_1, SUB41(param_3, 0), (uint)param_4, param_5);
   return;
}
LAB_00109c83:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationTrackEditSubAnim::draw_key(int, float, int, bool, int, int) */void AnimationTrackEditSubAnim::draw_key(AnimationTrackEditSubAnim *this, int param_1, float param_2, int param_3, bool param_4, int param_5, int param_6) {
   ulong uVar1;
   undefined8 uVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   char cVar9;
   undefined4 uVar10;
   int iVar11;
   int iVar12;
   StringName *pSVar13;
   long *plVar14;
   uint uVar15;
   ulong *puVar16;
   int iVar17;
   long lVar18;
   long in_FS_OFFSET;
   bool bVar19;
   float fVar20;
   float fVar21;
   float extraout_XMM0_Db;
   double dVar22;
   float extraout_XMM0_Db_00;
   double dVar23;
   float extraout_XMM0_Db_01;
   float local_110;
   Variant local_c8[8];
   long *local_c0;
   StringName local_b8[8];
   long local_b0;
   long local_a8;
   long local_a0;
   Ref<Animation> local_98;
   undefined7 uStack_97;
   undefined1(*local_90)[16];
   float local_88;
   float fStack_84;
   float fStack_80;
   float fStack_7c;
   undefined1 local_78[8];
   undefined8 uStack_70;
   undefined1 local_68[8];
   undefined8 uStack_60;
   undefined1 local_58[16];
   long local_40;
   uVar15 = ( uint ) * (ulong*)( this + 0xac8 ) & 0xffffff;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar15 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_98 = (Ref<Animation>)0x0;
         LOCK();
         bVar19 = (char)ObjectDB::spin_lock == '\0';
         if (bVar19) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar19) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar16 = (ulong*)( (ulong)uVar15 * 0x10 + ObjectDB::object_slots );
      if (( *puVar16 & 0x7fffffffff ) == ( *(ulong*)( this + 0xac8 ) >> 0x18 & 0x7fffffffff )) {
         uVar1 = puVar16[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (( uVar1 != 0 ) && ( pSVar13 = (StringName*)__dynamic_cast(uVar1, &Object::typeinfo, &AnimationPlayer::typeinfo, 0) ),pSVar13 != (StringName*)0x0) {
            AnimationTrackEdit::get_animation();
            uVar2 = CONCAT71(uStack_97, local_98);
            AnimationTrackEdit::get_track();
            Animation::track_get_key_value((int)local_58, (int)uVar2);
            Variant::operator_cast_to_String(local_c8);
            if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
               Variant::_clear_internal();
            }

            Ref<Animation>::unref(&local_98);
            cVar9 = String::operator !=((String*)local_c8, "[stop]");
            bVar19 = SUB81(local_58, 0);
            if (cVar9 == '\0') {
               LAB_00109ef8:if (( draw_key(int,float,int,bool,int,int)::{lambda()#5}::operator()() ) && ( iVar17 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#5}, ::
                                            operator()() ),iVar17 != 0) {
                  _scs_create((char *)&draw_key(int,float,int,bool,int,int)::{lambda()
                  #5
                  sname,true;
                  __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#5}::operator()()::sname,&__dso_handle);
                  __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
                  #5
                  sname;
               }

               Control::get_theme_font((StringName*)&local_98, (StringName*)this);
               if ((draw_key(int,float,int,bool,int,int)::{lambda()
               #6
               ( iVar17 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#6}::
                                            operator()()::sname),iVar17 != 0) );
               {
                  _scs_create((char *)&draw_key(int,float,int,bool,int,int)::{lambda()
                  #6
                  sname,true;
                  __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#6}::operator()()::sname,&__dso_handle);
                  __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
                  #6
                  sname;
               }

               uVar10 = Control::get_theme_font_size((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xa8 ));
               fVar20 = (float)( **(code**)( *(long*)CONCAT71(uStack_97, local_98) + 0x218 ) )((long*)CONCAT71(uStack_97, local_98), uVar10);
               iVar17 = (int)( (double)fVar20 * __LC23 );
               Control::get_size();
               local_78._4_4_ = (float)( (int)( extraout_XMM0_Db - (float)iVar17 ) / 2 );
               local_78._0_4_ = (float)param_3;
               uStack_70 = CONCAT44((float)iVar17, (float)iVar17);
               if ((draw_key(int,float,int,bool,int,int)::{lambda()
               #7
               ( iVar17 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#7}::
                                            operator()()::sname),iVar17 != 0) );
               {
                  _scs_create((char *)&draw_key(int,float,int,bool,int,int)::{lambda()
                  #7
                  sname,true;
                  __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#7}::operator()()::sname,&__dso_handle);
                  __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
                  #7
                  sname;
               }

               _local_68 = Control::get_theme_color((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xb0 ));
               AnimationTrackEdit::draw_rect_clipped((Rect2*)this, local_78, SUB81(local_68, 0));
               if (param_4) {
                  if (draw_key(int,float,int,bool,int,int) ::{lambda();
                  #8
                  iVar17 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#8}::
                                            operator()()::sname);
                  if (iVar17 != 0) {
                     _scs_create((char*)&draw_key, (int,float,int,bool,int, int)::{lambda()#8}::
                                     operator()()::sname,true);
                     __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#8}::operator()()::sname,&__dso_handle);
                     __cxa_guard_release (&draw_key(int,float,int,bool,int,int)::{lambda()#8}::
                                     operator()()::sname);
                  }

               }

               local_58 = Control::get_theme_color((StringName*)this, (StringName*)&draw_key, (int,float,int,bool,int, int)::{lambda()#8}::operator()()::sname);
               AnimationTrackEdit::draw_rect_clipped((Rect2*)this, local_78, bVar19);
            }

            Ref<Font>::unref((Ref<Font>*)&local_98);
         }
 else {
            StringName::StringName((StringName*)&local_98, (String*)local_c8, false);
            cVar9 = AnimationMixer::has_animation(pSVar13);
            if (( StringName::configured != '\0' ) && ( CONCAT71(uStack_97, local_98) != 0 )) {
               StringName::unref();
            }

            if (cVar9 == '\0') goto LAB_00109ef8;
            StringName::StringName((StringName*)&local_a8, (String*)local_c8, false);
            AnimationMixer::get_animation((StringName*)&local_98);
            local_110 = (float)Animation::get_length();
            Ref<Animation>::unref(&local_98);
            if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
               StringName::unref();
            }

            AnimationTrackEdit::get_animation();
            uVar2 = CONCAT71(uStack_97, local_98);
            AnimationTrackEdit::get_track();
            iVar17 = Animation::track_get_key_count((int)uVar2);
            Ref<Animation>::unref(&local_98);
            if (param_1 + 1 < iVar17) {
               AnimationTrackEdit::get_animation();
               iVar17 = AnimationTrackEdit::get_track();
               dVar22 = (double)Animation::track_get_key_time((int)local_a8, iVar17);
               AnimationTrackEdit::get_animation();
               uVar2 = CONCAT71(uStack_97, local_98);
               iVar17 = AnimationTrackEdit::get_track();
               dVar23 = (double)Animation::track_get_key_time((int)uVar2, iVar17);
               if (dVar22 - dVar23 <= (double)local_110) {
                  local_110 = (float)( dVar22 - dVar23 );
               }

               Ref<Animation>::unref(&local_98);
               Ref<Animation>::unref((Ref<Animation>*)&local_a8);
            }

            auVar8._8_8_ = local_58._8_8_;
            auVar8._0_8_ = local_58._0_8_;
            auVar7._8_8_ = local_58._8_8_;
            auVar7._0_8_ = local_58._0_8_;
            auVar6._8_8_ = uStack_70;
            auVar6._0_8_ = local_78;
            auVar5._8_8_ = uStack_70;
            auVar5._0_8_ = local_78;
            auVar4._8_8_ = uStack_60;
            auVar4._0_8_ = local_68;
            auVar3._8_8_ = uStack_60;
            auVar3._0_8_ = local_68;
            iVar17 = (int)( local_110 * param_2 ) + param_3;
            if (( param_3 <= param_6 ) && ( _local_68 = auVar3 ),_local_78 = auVar5,local_58 = auVar7,param_5 <= iVar17) {
               if (param_5 <= param_3) {
                  param_5 = param_3;
               }

               if (iVar17 <= param_6) {
                  param_6 = iVar17;
               }

               _local_68 = auVar4;
               _local_78 = auVar6;
               local_58 = auVar8;
               if (param_5 < param_6) {
                  if ((draw_key(int,float,int,bool,int,int)::{lambda()
                  #1
                  && (iVar17 = __cxa_guard_acquire(&draw_key(int,float,int,bool,int,int)::
                                                   {lambda()
                  #1
                  {
                     _scs_create((char*)&draw_key, (int,float,int,bool,int, int)::{lambda()#1}::
                                     operator()()::sname,true);
                     __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#1}::operator()()::sname,&__dso_handle);
                     __cxa_guard_release (&draw_key(int,float,int,bool,int,int)::{lambda()#1}::
                                     operator()()::sname);
                  }

                  Control::get_theme_font((StringName*)&local_c0, (StringName*)this);
                  if ((draw_key(int,float,int,bool,int,int)::{lambda()
                  #2
                  && (iVar17 = __cxa_guard_acquire(&draw_key(int,float,int,bool,int,int)::
                                                   {lambda()
                  #2
                  {
                     _scs_create((char*)&draw_key, (int,float,int,bool,int, int)::{lambda()#2}::
                                     operator()()::sname,true);
                     __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#2}::operator()()::sname,&__dso_handle);
                     __cxa_guard_release (&draw_key(int,float,int,bool,int,int)::{lambda()#2}::
                                     operator()()::sname);
                  }

                  uVar10 = Control::get_theme_font_size((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xa8 ));
                  fVar20 = (float)( **(code**)( *local_c0 + 0x218 ) )(local_c0, uVar10);
                  dVar22 = (double)fVar20 * __LC24;
                  Control::get_size();
                  local_88 = (float)param_5;
                  fStack_84 = (float)( (int)( extraout_XMM0_Db_00 - (float)(int)dVar22 ) / 2 );
                  fStack_80 = (float)( param_6 - param_5 );
                  fStack_7c = (float)(int)dVar22;
                  if ((draw_key(int,float,int,bool,int,int)::{lambda()
                  #3
                  && (iVar17 = __cxa_guard_acquire(&draw_key(int,float,int,bool,int,int)::
                                                   {lambda()
                  #3
                  {
                     _scs_create((char*)&draw_key, (int,float,int,bool,int, int)::{lambda()#3}::
                                     operator()()::sname,true);
                     __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#3}::operator()()::sname,&__dso_handle);
                     __cxa_guard_release (&draw_key(int,float,int,bool,int,int)::{lambda()#3}::
                                     operator()()::sname);
                  }

                  _local_78 = Control::get_theme_color((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xb0 ));
                  local_68 = (undefined1[8])CONCAT44(_UNK_001199f4 - SUB164(_local_78, 4), _LC37 - SUB164(_local_78, 0));
                  uStack_60 = CONCAT44(SUB164(_local_78, 0xc), _LC37 - (float)uStack_70);
                  CanvasItem::draw_rect((Rect2*)this, (Color*)&local_88, SUB81(local_68, 0), _LC21, true);
                  auVar3 = _local_78;
                  local_a0 = 0;
                  local_90 = (undefined1(*) [16])0x0;
                  iVar17 = CowData<Color>::resize<false>((CowData<Color>*)&local_90, 1);
                  if (iVar17 == 0) {
                     if (local_90 == (undefined1(*) [16])0x0) {
                        lVar18 = 0;
                     }
 else {
                        lVar18 = *(long*)( local_90[-1] + 8 );
                        if (0 < lVar18) {
                           CowData<Color>::_copy_on_write((CowData<Color>*)&local_90);
                           *local_90 = auVar3;
                           goto LAB_0010a46a;
                        }

                     }

                     _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, 0, lVar18, "p_index", "size()", "", false, false);
                  }

                  LAB_0010a46a:StringName::StringName((StringName*)&local_b0, (String*)local_c8, false);
                  AnimationMixer::get_animation(local_b8);
                  if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                     StringName::unref();
                  }

                  iVar17 = 0;
                  while (true) {
                     iVar11 = Animation::get_track_count();
                     if (iVar11 <= iVar17) break;
                     iVar11 = 0;
                     Animation::get_track_count();
                     while (true) {
                        iVar12 = Animation::track_get_key_count(local_b8._0_4_);
                        if (iVar12 <= iVar11) break;
                        dVar22 = (double)Animation::track_get_key_time(local_b8._0_4_, iVar17);
                        iVar12 = (int)( (float)param_3 + (float)dVar22 * param_2 + _LC44 );
                        if (( param_5 <= iVar12 ) && ( iVar12 < param_6 + -4 )) {
                           Vector<Vector2>::push_back((Vector<Vector2>*)&local_a8);
                           Vector<Vector2>::push_back((Vector<Vector2>*)&local_a8);
                        }

                        iVar11 = iVar11 + 1;
                     }
;
                     iVar17 = iVar17 + 1;
                  }
;
                  Ref<Animation>::unref((Ref<Animation>*)local_b8);
                  if (( local_a0 != 0 ) && ( 2 < *(long*)( local_a0 + -8 ) )) {
                     plVar14 = (long*)RenderingServer::get_singleton();
                     ( **(code**)( *plVar14 + 0xf08 ) )(plVar14, *(undefined8*)( this + 0x428 ), (StringName*)&local_a8, &local_98, 0);
                  }

                  if (4 < param_6 - param_5) {
                     Control::get_size();
                     fVar20 = (float)( **(code**)( *local_c0 + 0x218 ) )(local_c0, uVar10);
                     fVar21 = (float)( **(code**)( *local_c0 + 0x220 ) )(local_c0, uVar10);
                     local_58._0_8_ = CONCAT44(fVar21 + (float)( (int)( extraout_XMM0_Db_01 - fVar20 ) / 2 ), (float)( param_5 + 2 ));
                     CanvasItem::draw_string(this, (StringName*)&local_c0, local_58, local_c8, 0, uVar10, local_78, 3, 0, 0);
                  }

                  if (param_4) {
                     if (draw_key(int,float,int,bool,int,int) ::{lambda();
                     #4
                     {
                        iVar17 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#4}::
                                                operator()()::sname);
                        if (iVar17 != 0) {
                           _scs_create((char*)&draw_key, (int,float,int,bool,int, int)::{lambda()#4}::
                                         operator()()::sname,true);
                           __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#4}::operator()()::sname,&__dso_handle);
                           __cxa_guard_release (&draw_key(int,float,int,bool,int,int)::{lambda()#4}::
                                         operator()()::sname);
                        }

                     }

                     local_58 = Control::get_theme_color((StringName*)this, (StringName*)&draw_key, (int,float,int,bool,int, int)::{lambda()#4}::
                                       operator()()::sname);
                     CanvasItem::draw_rect((Rect2*)this, (Color*)&local_88, bVar19, _LC21, false);
                  }

                  CowData<Color>::_unref((CowData<Color>*)&local_90);
                  CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                  Ref<Font>::unref((Ref<Font>*)&local_c0);
               }

            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010abc2;
      }

   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
   }

}
else{_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);};if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   AnimationTrackEdit::draw_key((int)this, param_2, param_1, SUB41(param_3, 0), (uint)param_4, param_5);
   return;
}
LAB_0010abc2:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationTrackEditTypeAnimation::draw_key(int, float, int, bool, int, int) */void AnimationTrackEditTypeAnimation::draw_key(AnimationTrackEditTypeAnimation *this, int param_1, float param_2, int param_3, bool param_4, int param_5, int param_6) {
   ulong uVar1;
   undefined8 uVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   char cVar9;
   undefined4 uVar10;
   int iVar11;
   int iVar12;
   StringName *pSVar13;
   long *plVar14;
   uint uVar15;
   ulong *puVar16;
   int iVar17;
   long lVar18;
   long in_FS_OFFSET;
   bool bVar19;
   float fVar20;
   float fVar21;
   float extraout_XMM0_Db;
   double dVar22;
   float extraout_XMM0_Db_00;
   double dVar23;
   float extraout_XMM0_Db_01;
   String *local_110;
   float local_108;
   undefined8 local_c8;
   long *local_c0;
   StringName local_b8[8];
   long local_b0;
   long local_a8;
   long local_a0;
   StringName local_98;
   undefined7 uStack_97;
   undefined1(*local_90)[16];
   float local_88;
   float fStack_84;
   float fStack_80;
   float fStack_7c;
   undefined1 local_78[8];
   undefined8 uStack_70;
   undefined1 local_68[8];
   undefined8 uStack_60;
   undefined1 local_58[16];
   long local_40;
   uVar15 = ( uint ) * (ulong*)( this + 0xac8 ) & 0xffffff;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar15 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_98 = (StringName)0x0;
         LOCK();
         bVar19 = (char)ObjectDB::spin_lock == '\0';
         if (bVar19) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar19) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar16 = (ulong*)( (ulong)uVar15 * 0x10 + ObjectDB::object_slots );
      if (( *puVar16 & 0x7fffffffff ) == ( *(ulong*)( this + 0xac8 ) >> 0x18 & 0x7fffffffff )) {
         uVar1 = puVar16[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (( uVar1 != 0 ) && ( pSVar13 = (StringName*)__dynamic_cast(uVar1, &Object::typeinfo, &AnimationPlayer::typeinfo, 0) ),pSVar13 != (StringName*)0x0) {
            AnimationTrackEdit::get_animation();
            lVar18 = local_a8;
            AnimationTrackEdit::get_track();
            Animation::animation_track_get_key_animation((int)&local_98, (int)lVar18);
            lVar18 = CONCAT71(uStack_97, local_98);
            if (lVar18 == 0) {
               local_c8 = 0;
            }
 else {
               local_c8 = 0;
               if (*(char**)( lVar18 + 8 ) == (char*)0x0) {
                  if (*(long*)( lVar18 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)( lVar18 + 0x10 ));
                     goto LAB_0010ad2c;
                  }

                  if (StringName::configured == '\0') goto LAB_0010ad48;
               }
 else {
                  String::parse_latin1((String*)&local_c8, *(char**)( lVar18 + 8 ));
                  LAB_0010ad2c:if (( StringName::configured == '\0' ) || ( CONCAT71(uStack_97, local_98) == 0 )) goto LAB_0010ad48;
               }

               StringName::unref();
            }

            LAB_0010ad48:local_110 = (String*)&local_c8;
            Ref<Animation>::unref((Ref<Animation>*)&local_a8);
            cVar9 = String::operator !=(local_110, "[stop]");
            if (cVar9 == '\0') {
               LAB_0010ad6b:if (( draw_key(int,float,int,bool,int,int)::{lambda()#5}::operator()() ) && ( iVar17 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#5}, ::
                                            operator()() ),iVar17 != 0) {
                  _scs_create((char *)&draw_key(int,float,int,bool,int,int)::{lambda()
                  #5
                  sname,true;
                  __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#5}::operator()()::sname,&__dso_handle);
                  __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
                  #5
                  sname;
               }

               Control::get_theme_font(&local_98, (StringName*)this);
               if ((draw_key(int,float,int,bool,int,int)::{lambda()
               #6
               ( iVar17 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#6}::
                                            operator()()::sname),iVar17 != 0) );
               {
                  _scs_create((char *)&draw_key(int,float,int,bool,int,int)::{lambda()
                  #6
                  sname,true;
                  __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#6}::operator()()::sname,&__dso_handle);
                  __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
                  #6
                  sname;
               }

               uVar10 = Control::get_theme_font_size((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xa8 ));
               fVar20 = (float)( **(code**)( *(long*)CONCAT71(uStack_97, local_98) + 0x218 ) )((long*)CONCAT71(uStack_97, local_98), uVar10);
               iVar17 = (int)( (double)fVar20 * __LC23 );
               Control::get_size();
               local_78._4_4_ = (float)( (int)( extraout_XMM0_Db - (float)iVar17 ) / 2 );
               local_78._0_4_ = (float)param_3;
               uStack_70 = CONCAT44((float)iVar17, (float)iVar17);
               if ((draw_key(int,float,int,bool,int,int)::{lambda()
               #7
               ( iVar17 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#7}::
                                            operator()()::sname),iVar17 != 0) );
               {
                  _scs_create((char *)&draw_key(int,float,int,bool,int,int)::{lambda()
                  #7
                  sname,true;
                  __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#7}::operator()()::sname,&__dso_handle);
                  __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
                  #7
                  sname;
               }

               _local_68 = Control::get_theme_color((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xb0 ));
               AnimationTrackEdit::draw_rect_clipped((Rect2*)this, local_78, SUB81(local_68, 0));
               if (param_4) {
                  if (draw_key(int,float,int,bool,int,int) ::{lambda();
                  #8
                  iVar17 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#8}::
                                            operator()()::sname);
                  if (iVar17 != 0) {
                     _scs_create((char*)&draw_key, (int,float,int,bool,int, int)::{lambda()#8}::
                                     operator()()::sname,true);
                     __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#8}::operator()()::sname,&__dso_handle);
                     __cxa_guard_release (&draw_key(int,float,int,bool,int,int)::{lambda()#8}::
                                     operator()()::sname);
                  }

               }

               local_58 = Control::get_theme_color((StringName*)this, (StringName*)&draw_key, (int,float,int,bool,int, int)::{lambda()#8}::operator()()::sname);
               AnimationTrackEdit::draw_rect_clipped((Rect2*)this, local_78, SUB81(local_58, 0));
            }

            Ref<Font>::unref((Ref<Font>*)&local_98);
         }
 else {
            StringName::StringName(&local_98, local_110, false);
            cVar9 = AnimationMixer::has_animation(pSVar13);
            if (( StringName::configured != '\0' ) && ( CONCAT71(uStack_97, local_98) != 0 )) {
               StringName::unref();
            }

            if (cVar9 == '\0') goto LAB_0010ad6b;
            StringName::StringName((StringName*)&local_a8, local_110, false);
            AnimationMixer::get_animation(&local_98);
            local_108 = (float)Animation::get_length();
            Ref<Animation>::unref((Ref<Animation>*)&local_98);
            if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
               StringName::unref();
            }

            AnimationTrackEdit::get_animation();
            uVar2 = CONCAT71(uStack_97, local_98);
            AnimationTrackEdit::get_track();
            iVar17 = Animation::track_get_key_count((int)uVar2);
            Ref<Animation>::unref((Ref<Animation>*)&local_98);
            if (param_1 + 1 < iVar17) {
               AnimationTrackEdit::get_animation();
               iVar17 = AnimationTrackEdit::get_track();
               dVar22 = (double)Animation::track_get_key_time((int)local_a8, iVar17);
               AnimationTrackEdit::get_animation();
               uVar2 = CONCAT71(uStack_97, local_98);
               iVar17 = AnimationTrackEdit::get_track();
               dVar23 = (double)Animation::track_get_key_time((int)uVar2, iVar17);
               if (dVar22 - dVar23 <= (double)local_108) {
                  local_108 = (float)( dVar22 - dVar23 );
               }

               Ref<Animation>::unref((Ref<Animation>*)&local_98);
               Ref<Animation>::unref((Ref<Animation>*)&local_a8);
            }

            auVar8._8_8_ = local_58._8_8_;
            auVar8._0_8_ = local_58._0_8_;
            auVar7._8_8_ = local_58._8_8_;
            auVar7._0_8_ = local_58._0_8_;
            auVar6._8_8_ = uStack_70;
            auVar6._0_8_ = local_78;
            auVar5._8_8_ = uStack_70;
            auVar5._0_8_ = local_78;
            auVar4._8_8_ = uStack_60;
            auVar4._0_8_ = local_68;
            auVar3._8_8_ = uStack_60;
            auVar3._0_8_ = local_68;
            iVar17 = (int)( local_108 * param_2 ) + param_3;
            if (( param_3 <= param_6 ) && ( _local_68 = auVar3 ),_local_78 = auVar5,local_58 = auVar7,param_5 <= iVar17) {
               if (param_5 <= param_3) {
                  param_5 = param_3;
               }

               if (iVar17 <= param_6) {
                  param_6 = iVar17;
               }

               _local_68 = auVar4;
               _local_78 = auVar6;
               local_58 = auVar8;
               if (param_5 < param_6) {
                  if ((draw_key(int,float,int,bool,int,int)::{lambda()
                  #1
                  && (iVar17 = __cxa_guard_acquire(&draw_key(int,float,int,bool,int,int)::
                                                   {lambda()
                  #1
                  {
                     _scs_create((char*)&draw_key, (int,float,int,bool,int, int)::{lambda()#1}::
                                     operator()()::sname,true);
                     __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#1}::operator()()::sname,&__dso_handle);
                     __cxa_guard_release (&draw_key(int,float,int,bool,int,int)::{lambda()#1}::
                                     operator()()::sname);
                  }

                  Control::get_theme_font((StringName*)&local_c0, (StringName*)this);
                  if ((draw_key(int,float,int,bool,int,int)::{lambda()
                  #2
                  && (iVar17 = __cxa_guard_acquire(&draw_key(int,float,int,bool,int,int)::
                                                   {lambda()
                  #2
                  {
                     _scs_create((char*)&draw_key, (int,float,int,bool,int, int)::{lambda()#2}::
                                     operator()()::sname,true);
                     __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#2}::operator()()::sname,&__dso_handle);
                     __cxa_guard_release (&draw_key(int,float,int,bool,int,int)::{lambda()#2}::
                                     operator()()::sname);
                  }

                  uVar10 = Control::get_theme_font_size((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xa8 ));
                  fVar20 = (float)( **(code**)( *local_c0 + 0x218 ) )(local_c0, uVar10);
                  dVar22 = (double)fVar20 * __LC24;
                  Control::get_size();
                  local_88 = (float)param_5;
                  fStack_84 = (float)( (int)( extraout_XMM0_Db_00 - (float)(int)dVar22 ) / 2 );
                  fStack_80 = (float)( param_6 - param_5 );
                  fStack_7c = (float)(int)dVar22;
                  if ((draw_key(int,float,int,bool,int,int)::{lambda()
                  #3
                  && (iVar17 = __cxa_guard_acquire(&draw_key(int,float,int,bool,int,int)::
                                                   {lambda()
                  #3
                  {
                     _scs_create((char*)&draw_key, (int,float,int,bool,int, int)::{lambda()#3}::
                                     operator()()::sname,true);
                     __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#3}::operator()()::sname,&__dso_handle);
                     __cxa_guard_release (&draw_key(int,float,int,bool,int,int)::{lambda()#3}::
                                     operator()()::sname);
                  }

                  _local_78 = Control::get_theme_color((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xb0 ));
                  local_68 = (undefined1[8])CONCAT44(_UNK_001199f4 - SUB164(_local_78, 4), _LC37 - SUB164(_local_78, 0));
                  uStack_60 = CONCAT44(SUB164(_local_78, 0xc), _LC37 - (float)uStack_70);
                  CanvasItem::draw_rect((Rect2*)this, (Color*)&local_88, SUB81(local_68, 0), _LC21, true);
                  auVar3 = _local_78;
                  local_a0 = 0;
                  local_90 = (undefined1(*) [16])0x0;
                  iVar17 = CowData<Color>::resize<false>((CowData<Color>*)&local_90, 1);
                  if (iVar17 == 0) {
                     if (local_90 == (undefined1(*) [16])0x0) {
                        lVar18 = 0;
                     }
 else {
                        lVar18 = *(long*)( local_90[-1] + 8 );
                        if (0 < lVar18) {
                           CowData<Color>::_copy_on_write((CowData<Color>*)&local_90);
                           *local_90 = auVar3;
                           goto LAB_0010b441;
                        }

                     }

                     _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, 0, lVar18, "p_index", "size()", "", false, false);
                  }

                  LAB_0010b441:StringName::StringName((StringName*)&local_b0, local_110, false);
                  AnimationMixer::get_animation(local_b8);
                  if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                     StringName::unref();
                  }

                  iVar17 = 0;
                  while (true) {
                     iVar11 = Animation::get_track_count();
                     if (iVar11 <= iVar17) break;
                     iVar11 = 0;
                     Animation::get_track_count();
                     while (true) {
                        iVar12 = Animation::track_get_key_count(local_b8._0_4_);
                        if (iVar12 <= iVar11) break;
                        dVar22 = (double)Animation::track_get_key_time(local_b8._0_4_, iVar17);
                        iVar12 = (int)( (float)param_3 + (float)dVar22 * param_2 + _LC44 );
                        if (( param_5 <= iVar12 ) && ( iVar12 < param_6 + -4 )) {
                           Vector<Vector2>::push_back((Vector<Vector2>*)&local_a8);
                           Vector<Vector2>::push_back((Vector<Vector2>*)&local_a8);
                        }

                        iVar11 = iVar11 + 1;
                     }
;
                     iVar17 = iVar17 + 1;
                  }
;
                  Ref<Animation>::unref((Ref<Animation>*)local_b8);
                  if (( local_a0 != 0 ) && ( 2 < *(long*)( local_a0 + -8 ) )) {
                     plVar14 = (long*)RenderingServer::get_singleton();
                     ( **(code**)( *plVar14 + 0xf08 ) )(plVar14, *(undefined8*)( this + 0x428 ), (Ref<Animation>*)&local_a8, &local_98, 0);
                  }

                  if (4 < param_6 - param_5) {
                     Control::get_size();
                     fVar20 = (float)( **(code**)( *local_c0 + 0x218 ) )(local_c0, uVar10);
                     fVar21 = (float)( **(code**)( *local_c0 + 0x220 ) )(local_c0, uVar10);
                     local_58._0_8_ = CONCAT44(fVar21 + (float)( (int)( extraout_XMM0_Db_01 - fVar20 ) / 2 ), (float)( param_5 + 2 ));
                     CanvasItem::draw_string(this, (StringName*)&local_c0, local_58, local_110, 0, uVar10, local_78, 3, 0, 0);
                  }

                  if (param_4) {
                     if (draw_key(int,float,int,bool,int,int) ::{lambda();
                     #4
                     {
                        iVar17 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#4}::
                                                operator()()::sname);
                        if (iVar17 != 0) {
                           _scs_create((char*)&draw_key, (int,float,int,bool,int, int)::{lambda()#4}::
                                         operator()()::sname,true);
                           __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#4}::operator()()::sname,&__dso_handle);
                           __cxa_guard_release (&draw_key(int,float,int,bool,int,int)::{lambda()#4}::
                                         operator()()::sname);
                        }

                     }

                     local_58 = Control::get_theme_color((StringName*)this, (StringName*)&draw_key, (int,float,int,bool,int, int)::{lambda()#4}::
                                       operator()()::sname);
                     CanvasItem::draw_rect((Rect2*)this, (Color*)&local_88, SUB81(local_58, 0), _LC21, false);
                  }

                  CowData<Color>::_unref((CowData<Color>*)&local_90);
                  CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
                  Ref<Font>::unref((Ref<Font>*)&local_c0);
               }

            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010ba65;
      }

   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
   }

}
else{_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);};if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   AnimationTrackEdit::draw_key((int)this, param_2, param_1, SUB41(param_3, 0), (uint)param_4, param_5);
   return;
}
LAB_0010ba65:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationTrackEditTypeAudio::draw_key(int, float, int, bool, int, int) */void AnimationTrackEditTypeAudio::draw_key(AnimationTrackEditTypeAudio *this, int param_1, float param_2, int param_3, bool param_4, int param_5, int param_6) {
   code *pcVar1;
   undefined8 uVar2;
   Ref *pRVar3;
   char cVar4;
   int iVar5;
   undefined4 uVar6;
   int iVar7;
   int iVar8;
   long *plVar9;
   long lVar10;
   bool bVar11;
   long lVar12;
   long lVar13;
   int iVar14;
   long lVar15;
   long in_FS_OFFSET;
   float fVar16;
   double dVar17;
   float extraout_XMM0_Db;
   double dVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   undefined1 auVar23[12];
   float local_124;
   float local_114;
   int local_100;
   long *local_b0;
   long *local_a8;
   Object *local_a0;
   int local_98[2];
   long local_90;
   Ref *local_88;
   undefined8 *local_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined4 local_60;
   undefined4 uStack_5c;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   AnimationTrackEdit::get_animation();
   iVar7 = local_98[0];
   AnimationTrackEdit::get_track();
   Animation::audio_track_get_key_stream((int)(Ref<Animation>*)&local_88, iVar7);
   local_b0 = (long*)0x0;
   Ref<AudioStream>::operator =((Ref<AudioStream>*)&local_b0, local_88);
   if (( ( local_88 != (Ref*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pRVar3 = local_88,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pRVar3 + 0x140 ))(pRVar3);
   Memory::free_static(pRVar3, false);
}
Ref<Animation>::unref((Ref<Animation>*)local_98);if (local_b0 == (long*)0x0) {
   LAB_0010bd50:AnimationTrackEdit::draw_key((int)this, param_2, param_1, SUB41(param_3, 0), (uint)param_4, param_5);
}
 else {
   dVar17 = (double)( **(code**)( *local_b0 + 0x1f8 ) )();
   fVar22 = (float)dVar17;
   if (fVar22 == 0.0) goto LAB_0010bd50;
   AnimationTrackEdit::get_animation();
   iVar7 = (int)local_88;
   iVar5 = AnimationTrackEdit::get_track();
   local_124 = (float)Animation::audio_track_get_key_start_offset(iVar7, iVar5);
   Ref<Animation>::unref((Ref<Animation>*)&local_88);
   AnimationTrackEdit::get_animation();
   iVar7 = (int)local_88;
   iVar5 = AnimationTrackEdit::get_track();
   local_114 = (float)Animation::audio_track_get_key_end_offset(iVar7, iVar5);
   Ref<Animation>::unref((Ref<Animation>*)&local_88);
   if (( this[0xac8] != (AnimationTrackEditTypeAudio)0x0 ) && ( *(int*)( this + 0xacc ) == param_1 )) {
      fVar19 = *(float*)( this + 0xad4 );
      fVar16 = (float)AnimationTimelineEdit::get_zoom_scale();
      fVar19 = fVar19 / fVar16;
      if (this[0xac9] == (AnimationTrackEditTypeAudio)0x0) {
         local_114 = local_114 - fVar19;
      }
 else {
         local_124 = local_124 + fVar19;
         param_3 = param_3 + (int)( fVar19 * param_2 );
      }

   }

   if ((draw_key(int,float,int,bool,int,int)::{lambda()
   #1
   ( iVar7 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#1}::
                                     operator()()::sname),iVar7 != 0) );
   {
      _scs_create((char *)&draw_key(int,float,int,bool,int,int)::{lambda()
      #1
      true;
      __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
      #1
   }

   Control::get_theme_font((StringName*)&local_a8, (StringName*)this);
   if ((draw_key(int,float,int,bool,int,int)::{lambda()
   #2
   ( iVar7 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#2}::
                                     operator()()::sname),iVar7 != 0) );
   {
      _scs_create((char *)&draw_key(int,float,int,bool,int,int)::{lambda()
      #2
      true;
      __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
      #2
   }

   uVar6 = Control::get_theme_font_size((StringName*)this, (StringName*)( SceneStringNames::singleton + 0xa8 ));
   fVar16 = (float)( **(code**)( *local_a8 + 0x218 ) )(local_a8, uVar6);
   AudioStreamPreviewGenerator::generate_preview((Ref*)&local_a0);
   fVar19 = ( fVar22 - local_114 ) - local_124;
   if ((double)fVar19 <= _LC46) {
      fVar19 = _LC45;
   }

   fVar20 = param_2 * fVar19;
   iVar7 = (int)fVar20 + param_3;
   if (( param_5 <= iVar7 ) && ( param_3 <= param_6 )) {
      iVar5 = param_5;
      if (param_5 < param_3) {
         iVar5 = param_3;
      }

      iVar14 = param_6;
      if (iVar7 <= param_6) {
         iVar14 = iVar7;
      }

      AnimationTrackEdit::get_animation();
      iVar8 = (int)local_88;
      AnimationTrackEdit::get_track();
      iVar8 = Animation::track_get_key_count(iVar8);
      Ref<Animation>::unref((Ref<Animation>*)&local_88);
      local_100 = iVar14;
      if (param_1 + 1 < iVar8) {
         AnimationTrackEdit::get_animation();
         iVar8 = AnimationTrackEdit::get_track();
         dVar17 = (double)Animation::track_get_key_time(local_98[0], iVar8);
         AnimationTrackEdit::get_animation();
         iVar8 = AnimationTrackEdit::get_track();
         dVar18 = (double)Animation::track_get_key_time((int)local_88, iVar8);
         if (dVar17 - dVar18 <= (double)fVar19) {
            fVar20 = param_2 * (float)( dVar17 - dVar18 );
         }

         Ref<Animation>::unref((Ref<Animation>*)&local_88);
         Ref<Animation>::unref((Ref<Animation>*)local_98);
         local_100 = (int)( (float)param_3 + fVar20 );
         if (iVar14 <= (int)( (float)param_3 + fVar20 )) {
            local_100 = iVar14;
         }

      }

      if (iVar5 < local_100) {
         iVar14 = local_100 - iVar5;
         lVar12 = (long)( iVar14 * 2 );
      }
 else {
         lVar12 = 2;
         iVar14 = 1;
         local_100 = iVar5 + 1;
      }

      dVar17 = (double)fVar16 * __LC24;
      Control::get_size();
      uStack_70 = CONCAT44((float)(int)dVar17, (float)iVar14);
      local_78 = CONCAT44(( (float)(int)extraout_XMM0_Db - (float)(int)dVar17 ) * _LC18, (float)iVar5);
      local_58._0_8_ = __LC125;
      local_58._8_8_ = _UNK_00119a48;
      bVar11 = SUB81(local_58, 0);
      CanvasItem::draw_rect((Rect2*)this, (Color*)&local_78, bVar11, _LC21, true);
      local_90 = 0;
      CowData<Vector2>::resize<false>((CowData<Vector2>*)&local_90, lVar12);
      fVar19 = (float)AudioStreamPreview::get_length();
      if (iVar5 < local_100) {
         lVar15 = 0;
         iVar5 = ( iVar5 + 1 ) - param_3;
         lVar12 = 1;
         do {
            fVar21 = ( (float)( iVar5 + -1 ) * fVar19 ) / (float)(int)( fVar22 * param_2 ) + local_124;
            fVar20 = ( (float)iVar5 * fVar19 ) / (float)(int)( fVar22 * param_2 ) + local_124;
            fVar16 = (float)AudioStreamPreview::get_max(fVar21, fVar20);
            dVar17 = (double)fVar16 * __LC126 + __LC126;
            fVar16 = (float)AudioStreamPreview::get_min(fVar21, fVar20);
            fVar20 = (float)( param_3 + -1 + iVar5 );
            fVar16 = (float)( (double)fVar16 * __LC126 + __LC126 ) * uStack_70._4_4_ + local_78._4_4_;
            lVar10 = lVar15;
            if (local_90 == 0) {
               lVar13 = 0;
               LAB_0010c3d9:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar10, lVar13, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            lVar13 = *(long*)( local_90 + -8 );
            if (lVar13 <= lVar15) goto LAB_0010c3d9;
            CowData<Vector2>::_copy_on_write((CowData<Vector2>*)&local_90);
            *(ulong*)( local_90 + lVar15 * 8 ) = CONCAT44(fVar16, fVar20);
            fVar16 = (float)dVar17 * uStack_70._4_4_ + local_78._4_4_;
            lVar10 = lVar12;
            if (local_90 == 0) {
               lVar13 = 0;
               goto LAB_0010c3d9;
            }

            lVar13 = *(long*)( local_90 + -8 );
            if (lVar13 <= lVar12) goto LAB_0010c3d9;
            iVar5 = iVar5 + 1;
            lVar15 = lVar15 + 2;
            CowData<Vector2>::_copy_on_write((CowData<Vector2>*)&local_90);
            *(ulong*)( local_90 + lVar12 * 8 ) = CONCAT44(fVar16, fVar20);
            lVar12 = lVar12 + 2;
         }
 while ( iVar5 != ( local_100 - param_3 ) + 1 );
      }

      local_80 = (undefined8*)0x0;
      iVar5 = CowData<Color>::resize<false>((CowData<Color>*)&local_80, 1);
      if (iVar5 == 0) {
         if (local_80 == (undefined8*)0x0) {
            lVar12 = 0;
         }
 else {
            lVar12 = local_80[-1];
            if (0 < lVar12) {
               CowData<Color>::_copy_on_write((CowData<Color>*)&local_80);
               uVar2 = _UNK_00119a58;
               *local_80 = __LC129;
               local_80[1] = uVar2;
               goto LAB_0010c2cd;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, 0, lVar12, "p_index", "size()", "", false, false);
      }

      LAB_0010c2cd:plVar9 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar9 + 0xf08 ) )(plVar9, *(undefined8*)( this + 0x428 ), (Ref<Animation>*)local_98, (Ref<Animation>*)&local_88, 0);
      if ((draw_key(int,float,int,bool,int,int)::{lambda()
      #3
      ( iVar5 = __cxa_guard_acquire(&draw_key, (int,float,int,bool,int, int)::{lambda()#3}::
                                       operator()()::sname),iVar5 != 0) );
      {
         _scs_create((char*)&draw_key, (int,float,int,bool,int, int)::{lambda()#3}::operator()()::sname,true);
         __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#3}::operator()()::sname,&__dso_handle);
         __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
         #3
         )
         ;;
      }

      auVar23 = Control::get_theme_color
                          ((StringName *)this,
                           (StringName *)
                           &draw_key(int,float,int,bool,int,int)::{lambda()
      #3
      ;;
      local_68 = auVar23._0_8_;
      _local_60 = CONCAT44(0x3f333333, auVar23._8_4_);
      if (( param_5 < param_3 ) && ( 0.0 < local_124 )) {
         local_58._0_8_ = CONCAT44(local_78._4_4_, (float)param_3);
         local_58._12_4_ = uStack_70._4_4_;
         local_58._8_4_ = 0x3f800000;
         CanvasItem::draw_rect((Rect2*)this, local_58, SUB81(&local_68, 0), _LC21, true);
      }

      if (( iVar7 < param_6 ) && ( 0.0 < local_114 )) {
         local_58._0_8_ = CONCAT44(local_78._4_4_, (float)iVar7);
         local_58._12_4_ = uStack_70._4_4_;
         local_58._8_4_ = 0x3f800000;
         CanvasItem::draw_rect((Rect2*)this, local_58, SUB81(&local_68, 0), _LC21, true);
      }

      if (param_4) {
         if ((draw_key(int,float,int,bool,int,int)::{lambda()#4}::operator()()::sname == '\0') &&
           (iVar7 = __cxa_guard_acquire(&draw_key(int,float,int,bool,int,int)::{lambda()#4}::
                                         operator()()::sname), iVar7 != 0))
         {
            _scs_create((char *)&draw_key(int,float,int,bool,int,int)::{lambda()
            #4
            sname,true;
            __cxa_atexit(StringName::~StringName, &draw_key, (int,float,int,bool,int, int)::{lambda()#4}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&draw_key(int,float,int,bool,int,int)::{lambda()
            #4
            sname;
         }

         local_58 = Control::get_theme_color((StringName*)this, (StringName*)&draw_key, (int,float,int,bool,int, int)::{lambda()#4}::operator()()::sname);
         CanvasItem::draw_rect((Rect2*)this, (Color*)&local_78, bVar11, _LC21, false);
      }

      CowData<Color>::_unref((CowData<Color>*)&local_80);
      CowData<Vector2>::_unref((CowData<Vector2>*)&local_90);
      Ref<AudioStreamPreview>::unref((Ref<AudioStreamPreview>*)&local_a0);
      Ref<Font>::unref((Ref<Font>*)&local_a8);
      Ref<AudioStream>::unref((Ref<AudioStream>*)&local_b0);
      goto LAB_0010bd21;
   }

   if (( ( local_a0 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_a0 + 0x140 ))(local_a0);
   Memory::free_static(local_a0, false);
}
Ref<Font>::unref((Ref<Font>*)&local_a8);}Ref<AudioStream>::unref((Ref<AudioStream>*)&local_b0);LAB_0010bd21:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* Vector<Color>::push_back(Color) [clone .isra.0] */void Vector<Color>::push_back(undefined8 param_1, undefined8 param_2, long param_3) {
   int iVar1;
   undefined8 *puVar2;
   long lVar3;
   long lVar4;
   if (*(long*)( param_3 + 8 ) == 0) {
      lVar4 = 1;
   }
 else {
      lVar4 = *(long*)( *(long*)( param_3 + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<Color>::resize<false>((CowData<Color>*)( param_3 + 8 ), lVar4);
   if (iVar1 == 0) {
      if (*(long*)( param_3 + 8 ) == 0) {
         lVar3 = -1;
         lVar4 = 0;
      }
 else {
         lVar4 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
         lVar3 = lVar4 + -1;
         if (-1 < lVar3) {
            CowData<Color>::_copy_on_write((CowData<Color>*)( param_3 + 8 ));
            puVar2 = (undefined8*)( lVar3 * 0x10 + *(long*)( param_3 + 8 ) );
            *puVar2 = param_1;
            puVar2[1] = param_2;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar4, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AnimationTrackEditColor::draw_key_link(int, float, int, int, int, int) */void AnimationTrackEditColor::draw_key_link(int param_1, float param_2, int param_3, int param_4, int param_5, int param_6) {
   code *pcVar1;
   bool bVar2;
   undefined8 uVar3;
   undefined1 auVar4[16];
   Object *pOVar5;
   int aiVar6[2];
   char cVar7;
   undefined4 uVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   long lVar12;
   undefined8 *puVar13;
   undefined4 in_register_00000014;
   int iVar14;
   Variant *pVVar15;
   undefined8 *puVar16;
   undefined4 in_register_00000034;
   int iVar17;
   undefined4 in_register_0000003c;
   StringName *pSVar18;
   long lVar19;
   int in_R9D;
   undefined8 *puVar20;
   long lVar21;
   long in_FS_OFFSET;
   float fVar22;
   double dVar23;
   float extraout_XMM0_Db;
   double dVar24;
   double dVar25;
   undefined1 in_register_00001204[12];
   float fVar26;
   float fVar27;
   float fVar28;
   float fVar29;
   undefined1 auVar30[16];
   long *local_e8;
   Object *local_e0;
   undefined1 local_d8[8];
   undefined8 *local_d0;
   int local_c8[2];
   long local_c0;
   int local_b8[2];
   long local_b0;
   int local_a8[2];
   undefined8 local_a0;
   undefined1 local_98[16];
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   auVar30._4_12_ = in_register_00001204;
   auVar30._0_4_ = param_2;
   pSVar18 = (StringName*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((draw_key_link(int,float,int,int,int,int)::{lambda()
   #1
   ( iVar11 = __cxa_guard_acquire(auVar30._0_8_, &draw_key_link, (int,float,int,int,int, int)::{lambda()#1}::
                                    operator()()::sname,CONCAT44(in_register_00000034, param_3),CONCAT44(in_register_00000014, param_4),&draw_key_link(int,float,int,int,int,int)::{lambda()#1}::
                                    operator()()::sname),iVar11 != 0) );
   {
      _scs_create((char*)&draw_key_link, (int,float,int,int,int, int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName, &draw_key_link, (int,float,int,int,int, int)::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&draw_key_link(int,float,int,int,int,int)::{lambda()
      #1
      )
      ;;
   }

   Control::get_theme_font((StringName*)&local_e8, pSVar18);
   if ((draw_key_link(int,float,int,int,int,int)::{lambda()
   #2
   ( iVar11 = __cxa_guard_acquire(&draw_key_link, (int,float,int,int,int, int)::{lambda()#2}::
                                    operator()()::sname),iVar11 != 0) );
   {
      _scs_create((char*)&draw_key_link, (int,float,int,int,int, int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName, &draw_key_link, (int,float,int,int,int, int)::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&draw_key_link(int,float,int,int,int,int)::{lambda()
      #2
      )
      ;;
   }

   uVar8 = Control::get_theme_font_size(pSVar18, (StringName*)( SceneStringNames::singleton + 0xa8 ));
   fVar22 = (float)( **(code**)( *local_e8 + 0x218 ) )(local_e8, uVar8);
   dVar23 = (double)fVar22 * __LC23;
   iVar14 = (int)dVar23 / 6;
   iVar11 = iVar14 + -1 + param_4;
   if (iVar11 < param_6) {
      iVar11 = param_6;
   }

   iVar14 = ( param_5 - iVar14 ) + 1;
   if (in_R9D < iVar14) {
      iVar14 = in_R9D;
   }

   Control::get_size();
   auVar4._8_8_ = local_98._8_8_;
   auVar4._0_8_ = local_98._0_8_;
   if (( in_R9D < iVar11 ) || ( local_98 = iVar14 < param_6 )) goto LAB_0010ceeb;
   local_d0 = (undefined8*)0x0;
   AnimationTrackEdit::get_animation();
   aiVar6 = local_a8;
   AnimationTrackEdit::get_track();
   iVar17 = (int)(Variant*)&local_88;
   Animation::track_get_key_value(iVar17, aiVar6[0]);
   Variant::operator_cast_to_Color((Variant*)&local_88);
   Vector<Color>::push_back(local_d8);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   Ref<Animation>::unref((Ref<Animation>*)local_a8);
   AnimationTrackEdit::get_animation();
   aiVar6 = local_a8;
   AnimationTrackEdit::get_track();
   cVar7 = Animation::track_get_type(aiVar6[0]);
   Ref<Animation>::unref((Ref<Animation>*)local_a8);
   if (cVar7 != '\0') {
      AnimationTrackEdit::get_animation();
      AnimationTrackEdit::get_track();
      Animation::track_get_key_value(iVar17, local_a8[0]);
      Variant::operator_cast_to_Color((Variant*)&local_88);
      Vector<Color>::push_back(local_d8);
      if (Variant::needs_deinit[(int)local_88] != '\0') {
         Variant::_clear_internal();
      }

      Ref<Animation>::unref((Ref<Animation>*)local_a8);
      LAB_0010cad5:puVar16 = local_d0;
      if (local_d0 != (undefined8*)0x0) {
         lVar21 = 0;
         iVar17 = (int)dVar23 / 3;
         iVar9 = (int)( ( extraout_XMM0_Db - (float)iVar17 ) * _LC18 );
         puVar20 = local_d0;
         while (lVar12 = puVar16[-1] + -1,lVar21 < lVar12) {
            fVar29 = (float)lVar12;
            local_c0 = 0;
            fVar26 = (float)iVar11;
            fVar27 = (float)iVar9;
            fVar22 = ( (float)( (int)lVar21 + 1 ) / fVar29 ) * ( (float)iVar14 - fVar26 ) + fVar26;
            uStack_80 = CONCAT44(fVar27, fVar22);
            fVar28 = (float)( iVar17 + iVar9 );
            fVar26 = ( (float)(int)lVar21 / fVar29 ) * ( (float)iVar14 - fVar26 ) + fVar26;
            local_78 = CONCAT44(fVar28, fVar22);
            uStack_70 = CONCAT44(fVar28, fVar26);
            local_88 = CONCAT44(fVar27, fVar26);
            iVar10 = CowData<Vector2>::resize<false>((CowData<Vector2>*)&local_c0, 4);
            if (iVar10 == 0) {
               lVar12 = 0;
               do {
                  if (local_c0 == 0) {
                     lVar19 = 0;
                     LAB_0010ce13:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar12, lVar19, "p_index", "size()", "", false, false);
                  }
 else {
                     lVar19 = *(long*)( local_c0 + -8 );
                     if (lVar19 <= lVar12) goto LAB_0010ce13;
                     CowData<Vector2>::_copy_on_write((CowData<Vector2>*)&local_c0);
                     *(undefined8*)( local_c0 + lVar12 * 8 ) = *(undefined8*)( (Variant*)&local_88 + lVar12 * 8 );
                  }

                  lVar12 = lVar12 + 1;
               }
 while ( lVar12 != 4 );
            }

            lVar12 = puVar16[-1];
            if (lVar12 <= lVar21) goto LAB_0010cebe;
            local_88 = *puVar20;
            uStack_80 = puVar20[1];
            lVar21 = lVar21 + 1;
            if (lVar12 <= lVar21) goto LAB_0010cebe;
            local_78 = puVar20[2];
            uStack_70 = puVar20[3];
            local_68 = puVar20[2];
            uStack_60 = puVar20[3];
            local_58 = *puVar20;
            uStack_50 = puVar20[1];
            local_b0 = 0;
            iVar10 = CowData<Color>::resize<false>((CowData<Color>*)&local_b0, 4);
            if (iVar10 == 0) {
               lVar12 = 0;
               pVVar15 = (Variant*)&local_88;
               do {
                  if (local_b0 == 0) {
                     lVar19 = 0;
                     LAB_0010ce5b:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar12, lVar19, "p_index", "size()", "", false, false);
                  }
 else {
                     lVar19 = *(long*)( local_b0 + -8 );
                     if (lVar19 <= lVar12) goto LAB_0010ce5b;
                     CowData<Color>::_copy_on_write((CowData<Color>*)&local_b0);
                     uVar3 = *(undefined8*)( pVVar15 + 8 );
                     puVar13 = (undefined8*)( lVar12 * 0x10 + local_b0 );
                     *puVar13 = *(undefined8*)pVVar15;
                     puVar13[1] = uVar3;
                  }

                  lVar12 = lVar12 + 1;
                  pVVar15 = pVVar15 + 0x10;
               }
 while ( lVar12 != 4 );
            }

            local_e0 = (Object*)0x0;
            local_a0 = 0;
            CanvasItem::draw_primitive(pSVar18, local_c8, local_b8, (Ref<Animation>*)local_a8);
            CowData<Vector2>::_unref((CowData<Vector2>*)&local_a0);
            if (local_e0 != (Object*)0x0) {
               cVar7 = RefCounted::unreference();
               pOVar5 = local_e0;
               if (cVar7 != '\0') {
                  cVar7 = predelete_handler(local_e0);
                  if (cVar7 != '\0') {
                     ( **(code**)( *(long*)pOVar5 + 0x140 ) )();
                     Memory::free_static(pOVar5, false);
                  }

               }

            }

            puVar20 = puVar20 + 2;
            CowData<Color>::_unref((CowData<Color>*)&local_b0);
            CowData<Vector2>::_unref((CowData<Vector2>*)&local_c0);
         }
;
      }

      CowData<Color>::_unref((CowData<Color>*)&local_d0);
      LAB_0010ceeb:Ref<Font>::unref((Ref<Font>*)&local_e8);
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   AnimationTrackEdit::get_animation();
   pOVar5 = local_e0;
   AnimationTrackEdit::get_track();
   cVar7 = Animation::track_get_interpolation_type((int)pOVar5);
   if (cVar7 == '\0') {
      LAB_0010cdd1:Ref<Animation>::unref((Ref<Animation>*)&local_e0);
      LAB_0010cddb:if (local_d0 != (undefined8*)0x0) {
         lVar12 = local_d0[-1];
         if (lVar12 < 1) goto LAB_0010d450;
         Vector<Color>::push_back(*local_d0, local_d0[1], local_d8);
         goto LAB_0010cad5;
      }

   }
 else {
      AnimationTrackEdit::get_animation();
      AnimationTrackEdit::get_track();
      cVar7 = Animation::value_track_get_update_mode(local_c8[0]);
      if (cVar7 == '\0') {
         AnimationTrackEdit::get_animation();
         aiVar6 = local_a8;
         iVar9 = AnimationTrackEdit::get_track();
         fVar22 = (float)Animation::track_get_key_transition(aiVar6[0], iVar9);
         bVar2 = _LC132 <= ABS(fVar22);
         Ref<Animation>::unref((Ref<Animation>*)local_a8);
      }
 else {
         AnimationTrackEdit::get_animation();
         AnimationTrackEdit::get_track();
         cVar7 = Animation::value_track_get_update_mode(local_b8[0]);
         if (cVar7 != '\x02') {
            Ref<Animation>::unref((Ref<Animation>*)local_b8);
            Ref<Animation>::unref((Ref<Animation>*)local_c8);
            goto LAB_0010cdd1;
         }

         AnimationTrackEdit::get_animation();
         aiVar6 = local_a8;
         iVar9 = AnimationTrackEdit::get_track();
         fVar22 = (float)Animation::track_get_key_transition(aiVar6[0], iVar9);
         bVar2 = _LC132 <= ABS(fVar22);
         Ref<Animation>::unref((Ref<Animation>*)local_a8);
         Ref<Animation>::unref((Ref<Animation>*)local_b8);
      }

      Ref<Animation>::unref((Ref<Animation>*)local_c8);
      Ref<Animation>::unref((Ref<Animation>*)&local_e0);
      if (!bVar2) goto LAB_0010cddb;
      AnimationTrackEdit::get_animation();
      aiVar6 = local_a8;
      iVar9 = AnimationTrackEdit::get_track();
      dVar24 = (double)Animation::track_get_key_time(aiVar6[0], iVar9);
      Ref<Animation>::unref((Ref<Animation>*)local_a8);
      AnimationTrackEdit::get_animation();
      aiVar6 = local_a8;
      iVar9 = AnimationTrackEdit::get_track();
      dVar25 = (double)Animation::track_get_key_time(aiVar6[0], iVar9);
      Ref<Animation>::unref((Ref<Animation>*)local_a8);
      AnimationTrackEdit::get_animation();
      aiVar6 = local_a8;
      AnimationTrackEdit::get_track();
      Animation::value_track_interpolate(iVar17, (double)(float)dVar25, aiVar6[0]._0_1_);
      local_98 = Variant::operator_cast_to_Color((Variant*)&local_88);
      if (Variant::needs_deinit[(int)local_88] != '\0') {
         Variant::_clear_internal();
      }

      Ref<Animation>::unref((Ref<Animation>*)local_a8);
      if (local_d0 != (undefined8*)0x0) {
         lVar12 = local_d0[-1];
         if (lVar12 < 1) goto LAB_0010d450;
         cVar7 = Color::is_equal_approx((Color*)local_d0);
         if (cVar7 == '\0') {
            iVar10 = iVar14 - iVar11;
            iVar9 = iVar10 + 0x3f;
            if (-1 < iVar10) {
               iVar9 = iVar10;
            }

            CowData<Color>::resize<false>((CowData<Color>*)&local_d0, (long)( ( iVar9 >> 6 ) + 1 ));
            if (local_d0 != (undefined8*)0x0) {
               lVar12 = 1;
               puVar16 = local_d0;
               do {
                  if ((long)puVar16[-1] <= lVar12) break;
                  AnimationTrackEdit::get_animation();
                  aiVar6 = local_a8;
                  lVar21 = puVar16[-1];
                  AnimationTrackEdit::get_track();
                  Animation::value_track_interpolate(iVar17, (double)( ( (float)(int)lVar12 / (float)lVar21 ) * ( (float)dVar25 - (float)dVar24 ) + (float)dVar24 ), aiVar6[0]._0_1_);
                  auVar30 = Variant::operator_cast_to_Color((Variant*)&local_88);
                  if ((long)puVar16[-1] <= lVar12) {
                     _err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar12, puVar16[-1], "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar1 = (code*)invalidInstructionException();
                     ( *pcVar1 )();
                  }

                  CowData<Color>::_copy_on_write((CowData<Color>*)&local_d0);
                  puVar16 = local_d0;
                  *(undefined1(*) [16])( local_d0 + lVar12 * 2 ) = auVar30;
                  if (Variant::needs_deinit[(int)local_88] != '\0') {
                     Variant::_clear_internal();
                  }

                  lVar12 = lVar12 + 1;
                  Ref<Animation>::unref((Ref<Animation>*)local_a8);
               }
 while ( puVar16 != (undefined8*)0x0 );
            }

         }

         Vector<Color>::push_back(local_98._0_8_, local_98._8_8_, local_d8);
         goto LAB_0010cad5;
      }

   }

   lVar12 = 0;
   LAB_0010d450:lVar21 = 0;
   LAB_0010cebe:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar21, lVar12, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* Object::_bind_compatibility_methods() */void Object::_bind_compatibility_methods(void) {
   return;
}
/* Object::_set(StringName const&, Variant const&) */undefined8 Object::_set(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get(StringName const&, Variant&) const */undefined8 Object::_get(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void Object::_get_property_list(List *param_1) {
   return;
}
/* Object::_validate_property(PropertyInfo&) const */void Object::_validate_property(PropertyInfo *param_1) {
   return;
}
/* Object::_property_can_revert(StringName const&) const */undefined8 Object::_property_can_revert(StringName *param_1) {
   return 0;
}
/* Object::_property_get_revert(StringName const&, Variant&) const */undefined8 Object::_property_get_revert(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_notification(int) */void Object::_notification(int param_1) {
   return;
}
/* Object::get_save_class() const */void Object::get_save_class(void) {
   long lVar1;
   long *in_RSI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x48 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x1197, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
}
/* Control::_top_level_changed() */void Control::_top_level_changed(void) {
   return;
}
/* AnimationTrackEditBool::is_class_ptr(void*) const */uint AnimationTrackEditBool::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x1196, in_RSI == &AnimationTrackEdit::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1196, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* AnimationTrackEditColor::is_class_ptr(void*) const */uint AnimationTrackEditColor::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x1196, in_RSI == &AnimationTrackEdit::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1196, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* AnimationTrackEditAudio::is_class_ptr(void*) const */uint AnimationTrackEditAudio::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x1196, in_RSI == &AnimationTrackEdit::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1195, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* AnimationTrackEditSpriteFrame::is_class_ptr(void*) const */uint AnimationTrackEditSpriteFrame::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x1196, in_RSI == &AnimationTrackEdit::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1195, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* AnimationTrackEditSubAnim::is_class_ptr(void*) const */uint AnimationTrackEditSubAnim::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x1196, in_RSI == &AnimationTrackEdit::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1195, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* AnimationTrackEditTypeAudio::is_class_ptr(void*) const */uint AnimationTrackEditTypeAudio::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x1196, in_RSI == &AnimationTrackEdit::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1195, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* AnimationTrackEditTypeAnimation::is_class_ptr(void*) const */uint AnimationTrackEditTypeAnimation::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x1196, in_RSI == &AnimationTrackEdit::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1195, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* AnimationTrackEditVolumeDB::is_class_ptr(void*) const */uint AnimationTrackEditVolumeDB::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x1196, in_RSI == &AnimationTrackEdit::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1195, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* AnimationTrackEditDefaultPlugin::is_class_ptr(void*) const */uint AnimationTrackEditDefaultPlugin::is_class_ptr(AnimationTrackEditDefaultPlugin *this, void *param_1) {
   return (uint)CONCAT71(0x1196, (undefined4*)param_1 == &AnimationTrackEditPlugin::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1195, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1197, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* AnimationTrackEditDefaultPlugin::_getv(StringName const&, Variant&) const */undefined8 AnimationTrackEditDefaultPlugin::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AnimationTrackEditDefaultPlugin::_setv(StringName const&, Variant const&) */undefined8 AnimationTrackEditDefaultPlugin::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AnimationTrackEditDefaultPlugin::_validate_propertyv(PropertyInfo&) const */void AnimationTrackEditDefaultPlugin::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* AnimationTrackEditDefaultPlugin::_property_can_revertv(StringName const&) const */undefined8 AnimationTrackEditDefaultPlugin::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* AnimationTrackEditDefaultPlugin::_property_get_revertv(StringName const&, Variant&) const */undefined8 AnimationTrackEditDefaultPlugin::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* AnimationTrackEditDefaultPlugin::_notificationv(int, bool) */void AnimationTrackEditDefaultPlugin::_notificationv(int param_1, bool param_2) {
   return;
}
/* CallableCustomMethodPointer<AnimationTrackEditTypeAudio, void,
   ObjectID>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationTrackEditTypeAudio,void,ObjectID>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationTrackEditTypeAudio,void,ObjectID> *this) {
   return;
}
/* CallableCustomMethodPointer<AnimationTrackEditAudio, void,
   ObjectID>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationTrackEditAudio,void,ObjectID>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationTrackEditAudio,void,ObjectID> *this) {
   return;
}
/* CallableCustomMethodPointer<AnimationTrackEditTypeAudio, void,
   ObjectID>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<AnimationTrackEditTypeAudio,void,ObjectID>::get_argument_count(CallableCustomMethodPointer<AnimationTrackEditTypeAudio,void,ObjectID> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<AnimationTrackEditAudio, void, ObjectID>::get_argument_count(bool&)
   const */undefined8 CallableCustomMethodPointer<AnimationTrackEditAudio,void,ObjectID>::get_argument_count(CallableCustomMethodPointer<AnimationTrackEditAudio,void,ObjectID> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomMethodPointer<AnimationTrackEditAudio, void,
   ObjectID>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationTrackEditAudio,void,ObjectID>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationTrackEditAudio,void,ObjectID> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<AnimationTrackEditTypeAudio, void,
   ObjectID>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AnimationTrackEditTypeAudio,void,ObjectID>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AnimationTrackEditTypeAudio,void,ObjectID> *this) {
   operator_delete(this, 0x48);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00117418;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00117418;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* AnimationTrackEditDefaultPlugin::~AnimationTrackEditDefaultPlugin() */void AnimationTrackEditDefaultPlugin::~AnimationTrackEditDefaultPlugin(AnimationTrackEditDefaultPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_00117418;
   Object::~Object((Object*)this);
   return;
}
/* AnimationTrackEditDefaultPlugin::~AnimationTrackEditDefaultPlugin() */void AnimationTrackEditDefaultPlugin::~AnimationTrackEditDefaultPlugin(AnimationTrackEditDefaultPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_00117418;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* AnimationTrackEditBool::_property_get_revertv(StringName const&, Variant&) const */undefined8 AnimationTrackEditBool::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__property_get_revert_0011f018 != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* AnimationTrackEditColor::_property_get_revertv(StringName const&, Variant&) const */undefined8 AnimationTrackEditColor::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__property_get_revert_0011f018 != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* AnimationTrackEditAudio::_property_get_revertv(StringName const&, Variant&) const */undefined8 AnimationTrackEditAudio::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__property_get_revert_0011f018 != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* AnimationTrackEditSpriteFrame::_property_get_revertv(StringName const&, Variant&) const */undefined8 AnimationTrackEditSpriteFrame::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__property_get_revert_0011f018 != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* AnimationTrackEditSubAnim::_property_get_revertv(StringName const&, Variant&) const */undefined8 AnimationTrackEditSubAnim::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__property_get_revert_0011f018 != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* AnimationTrackEditTypeAudio::_property_get_revertv(StringName const&, Variant&) const */undefined8 AnimationTrackEditTypeAudio::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__property_get_revert_0011f018 != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* AnimationTrackEditTypeAnimation::_property_get_revertv(StringName const&, Variant&) const */undefined8 AnimationTrackEditTypeAnimation::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__property_get_revert_0011f018 != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* AnimationTrackEditVolumeDB::_property_get_revertv(StringName const&, Variant&) const */undefined8 AnimationTrackEditVolumeDB::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__property_get_revert_0011f018 != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* AnimationTrackEditBool::_property_can_revertv(StringName const&) const */undefined8 AnimationTrackEditBool::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0011f020 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* AnimationTrackEditColor::_property_can_revertv(StringName const&) const */undefined8 AnimationTrackEditColor::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0011f020 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* AnimationTrackEditAudio::_property_can_revertv(StringName const&) const */undefined8 AnimationTrackEditAudio::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0011f020 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* AnimationTrackEditSpriteFrame::_property_can_revertv(StringName const&) const */undefined8 AnimationTrackEditSpriteFrame::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0011f020 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* AnimationTrackEditSubAnim::_property_can_revertv(StringName const&) const */undefined8 AnimationTrackEditSubAnim::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0011f020 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* AnimationTrackEditTypeAudio::_property_can_revertv(StringName const&) const */undefined8 AnimationTrackEditTypeAudio::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0011f020 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* AnimationTrackEditTypeAnimation::_property_can_revertv(StringName const&) const */undefined8 AnimationTrackEditTypeAnimation::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0011f020 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* AnimationTrackEditVolumeDB::_property_can_revertv(StringName const&) const */undefined8 AnimationTrackEditVolumeDB::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0011f020 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* CallableCustomMethodPointer<AnimationTrackEditTypeAudio, void, ObjectID>::get_object() const */undefined8 CallableCustomMethodPointer<AnimationTrackEditTypeAudio,void,ObjectID>::get_object(CallableCustomMethodPointer<AnimationTrackEditTypeAudio,void,ObjectID> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010e63d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010e63d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010e63d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<AnimationTrackEditAudio, void, ObjectID>::get_object() const */undefined8 CallableCustomMethodPointer<AnimationTrackEditAudio,void,ObjectID>::get_object(CallableCustomMethodPointer<AnimationTrackEditAudio,void,ObjectID> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010e73d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010e73d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010e73d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* AnimationTrackEditSpriteFrame::_validate_propertyv(PropertyInfo&) const */void AnimationTrackEditSpriteFrame::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   CanvasItem::_validate_property(param_1);
   if ((code*)PTR__validate_property_0011f028 == CanvasItem::_validate_property) {
      return;
   }

   Control::_validate_property(param_1);
   return;
}
/* AnimationTrackEditColor::_validate_propertyv(PropertyInfo&) const */void AnimationTrackEditColor::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   CanvasItem::_validate_property(param_1);
   if ((code*)PTR__validate_property_0011f028 == CanvasItem::_validate_property) {
      return;
   }

   Control::_validate_property(param_1);
   return;
}
/* AnimationTrackEditTypeAudio::_validate_propertyv(PropertyInfo&) const */void AnimationTrackEditTypeAudio::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   CanvasItem::_validate_property(param_1);
   if ((code*)PTR__validate_property_0011f028 == CanvasItem::_validate_property) {
      return;
   }

   Control::_validate_property(param_1);
   return;
}
/* AnimationTrackEditTypeAnimation::_validate_propertyv(PropertyInfo&) const */void AnimationTrackEditTypeAnimation::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   CanvasItem::_validate_property(param_1);
   if ((code*)PTR__validate_property_0011f028 == CanvasItem::_validate_property) {
      return;
   }

   Control::_validate_property(param_1);
   return;
}
/* AnimationTrackEditVolumeDB::_validate_propertyv(PropertyInfo&) const */void AnimationTrackEditVolumeDB::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   CanvasItem::_validate_property(param_1);
   if ((code*)PTR__validate_property_0011f028 == CanvasItem::_validate_property) {
      return;
   }

   Control::_validate_property(param_1);
   return;
}
/* AnimationTrackEditBool::_validate_propertyv(PropertyInfo&) const */void AnimationTrackEditBool::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   CanvasItem::_validate_property(param_1);
   if ((code*)PTR__validate_property_0011f028 == CanvasItem::_validate_property) {
      return;
   }

   Control::_validate_property(param_1);
   return;
}
/* AnimationTrackEditSubAnim::_validate_propertyv(PropertyInfo&) const */void AnimationTrackEditSubAnim::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   CanvasItem::_validate_property(param_1);
   if ((code*)PTR__validate_property_0011f028 == CanvasItem::_validate_property) {
      return;
   }

   Control::_validate_property(param_1);
   return;
}
/* AnimationTrackEditAudio::_validate_propertyv(PropertyInfo&) const */void AnimationTrackEditAudio::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   CanvasItem::_validate_property(param_1);
   if ((code*)PTR__validate_property_0011f028 == CanvasItem::_validate_property) {
      return;
   }

   Control::_validate_property(param_1);
   return;
}
/* AnimationTrackEditBool::_setv(StringName const&, Variant const&) */undefined8 AnimationTrackEditBool::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0011f030 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* AnimationTrackEditVolumeDB::_setv(StringName const&, Variant const&) */undefined8 AnimationTrackEditVolumeDB::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0011f030 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* AnimationTrackEditTypeAudio::_setv(StringName const&, Variant const&) */undefined8 AnimationTrackEditTypeAudio::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0011f030 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* AnimationTrackEditSubAnim::_setv(StringName const&, Variant const&) */undefined8 AnimationTrackEditSubAnim::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0011f030 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* AnimationTrackEditSpriteFrame::_setv(StringName const&, Variant const&) */undefined8 AnimationTrackEditSpriteFrame::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0011f030 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* AnimationTrackEditTypeAnimation::_setv(StringName const&, Variant const&) */undefined8 AnimationTrackEditTypeAnimation::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0011f030 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* AnimationTrackEditColor::_setv(StringName const&, Variant const&) */undefined8 AnimationTrackEditColor::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0011f030 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* AnimationTrackEditAudio::_setv(StringName const&, Variant const&) */undefined8 AnimationTrackEditAudio::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0011f030 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x0010ef88) *//* AnimationTrackEditBool::_getv(StringName const&, Variant&) const */undefined8 AnimationTrackEditBool::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0011f038 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x0010eff8) *//* AnimationTrackEditAudio::_getv(StringName const&, Variant&) const */undefined8 AnimationTrackEditAudio::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0011f038 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x0010f068) *//* AnimationTrackEditVolumeDB::_getv(StringName const&, Variant&) const */undefined8 AnimationTrackEditVolumeDB::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0011f038 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x0010f0d8) *//* AnimationTrackEditTypeAnimation::_getv(StringName const&, Variant&) const */undefined8 AnimationTrackEditTypeAnimation::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0011f038 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x0010f148) *//* AnimationTrackEditTypeAudio::_getv(StringName const&, Variant&) const */undefined8 AnimationTrackEditTypeAudio::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0011f038 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x0010f1b8) *//* AnimationTrackEditSubAnim::_getv(StringName const&, Variant&) const */undefined8 AnimationTrackEditSubAnim::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0011f038 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x0010f228) *//* AnimationTrackEditSpriteFrame::_getv(StringName const&, Variant&) const */undefined8 AnimationTrackEditSpriteFrame::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0011f038 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x0010f298) *//* AnimationTrackEditColor::_getv(StringName const&, Variant&) const */undefined8 AnimationTrackEditColor::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0011f038 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* CallableCustomMethodPointerBase::get_as_text() const */void CallableCustomMethodPointerBase::get_as_text(void) {
   char *__s;
   long lVar1;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   __s = *(char**)( in_RSI + 0x20 );
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)in_RDI = 0;
   if (__s != (char*)0x0) {
      strlen(__s);
   }

   String::parse_latin1(in_RDI);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010f363:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010f363;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010f3ce;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010f3ce:return &_get_class_namev();
}
/* AnimationTrackEditVolumeDB::_get_class_namev() const */undefined8 *AnimationTrackEditVolumeDB::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010f453:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010f453;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationTrackEditVolumeDB");
         goto LAB_0010f4be;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationTrackEditVolumeDB");
   LAB_0010f4be:return &_get_class_namev();
}
/* AnimationTrackEditSpriteFrame::_get_class_namev() const */undefined8 *AnimationTrackEditSpriteFrame::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010f553:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010f553;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationTrackEditSpriteFrame");
         goto LAB_0010f5be;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationTrackEditSpriteFrame");
   LAB_0010f5be:return &_get_class_namev();
}
/* AnimationTrackEditAudio::_get_class_namev() const */undefined8 *AnimationTrackEditAudio::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010f643:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010f643;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationTrackEditAudio");
         goto LAB_0010f6ae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationTrackEditAudio");
   LAB_0010f6ae:return &_get_class_namev();
}
/* AnimationTrackEditTypeAudio::_get_class_namev() const */undefined8 *AnimationTrackEditTypeAudio::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010f733:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010f733;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationTrackEditTypeAudio");
         goto LAB_0010f79e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationTrackEditTypeAudio");
   LAB_0010f79e:return &_get_class_namev();
}
/* AnimationTrackEditSubAnim::_get_class_namev() const */undefined8 *AnimationTrackEditSubAnim::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010f823:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010f823;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationTrackEditSubAnim");
         goto LAB_0010f88e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationTrackEditSubAnim");
   LAB_0010f88e:return &_get_class_namev();
}
/* AnimationTrackEditDefaultPlugin::_get_class_namev() const */undefined8 *AnimationTrackEditDefaultPlugin::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010f923:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010f923;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationTrackEditDefaultPlugin");
         goto LAB_0010f98e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationTrackEditDefaultPlugin");
   LAB_0010f98e:return &_get_class_namev();
}
/* AnimationTrackEditTypeAnimation::_get_class_namev() const */undefined8 *AnimationTrackEditTypeAnimation::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010fa23:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010fa23;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationTrackEditTypeAnimation");
         goto LAB_0010fa8e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationTrackEditTypeAnimation");
   LAB_0010fa8e:return &_get_class_namev();
}
/* AnimationTrackEditColor::_get_class_namev() const */undefined8 *AnimationTrackEditColor::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010fb13:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010fb13;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationTrackEditColor");
         goto LAB_0010fb7e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationTrackEditColor");
   LAB_0010fb7e:return &_get_class_namev();
}
/* AnimationTrackEditBool::_get_class_namev() const */undefined8 *AnimationTrackEditBool::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010fc03:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010fc03;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationTrackEditBool");
         goto LAB_0010fc6e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AnimationTrackEditBool");
   LAB_0010fc6e:return &_get_class_namev();
}
/* AnimationTrackEditColor::_notificationv(int, bool) */void AnimationTrackEditColor::_notificationv(AnimationTrackEditColor *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0011f040 != Control::_notification) {
         AnimationTrackEdit::_notification(iVar1);
      }

      for (int i = 0; i < 3; i++) {
         Control::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 3; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0011f040 == Control::_notification) {
      return;
   }

   AnimationTrackEdit::_notification(iVar1);
   return;
}
/* AnimationTrackEditAudio::_notificationv(int, bool) */void AnimationTrackEditAudio::_notificationv(AnimationTrackEditAudio *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0011f040 != Control::_notification) {
         AnimationTrackEdit::_notification(iVar1);
      }

      for (int i = 0; i < 3; i++) {
         Control::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 3; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0011f040 == Control::_notification) {
      return;
   }

   AnimationTrackEdit::_notification(iVar1);
   return;
}
/* AnimationTrackEditSubAnim::_notificationv(int, bool) */void AnimationTrackEditSubAnim::_notificationv(AnimationTrackEditSubAnim *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0011f040 != Control::_notification) {
         AnimationTrackEdit::_notification(iVar1);
      }

      for (int i = 0; i < 3; i++) {
         Control::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 3; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0011f040 == Control::_notification) {
      return;
   }

   AnimationTrackEdit::_notification(iVar1);
   return;
}
/* AnimationTrackEditTypeAudio::_notificationv(int, bool) */void AnimationTrackEditTypeAudio::_notificationv(AnimationTrackEditTypeAudio *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0011f040 != Control::_notification) {
         AnimationTrackEdit::_notification(iVar1);
      }

      for (int i = 0; i < 3; i++) {
         Control::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 3; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0011f040 == Control::_notification) {
      return;
   }

   AnimationTrackEdit::_notification(iVar1);
   return;
}
/* AnimationTrackEditBool::_notificationv(int, bool) */void AnimationTrackEditBool::_notificationv(AnimationTrackEditBool *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0011f040 != Control::_notification) {
         AnimationTrackEdit::_notification(iVar1);
      }

      for (int i = 0; i < 3; i++) {
         Control::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 3; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0011f040 == Control::_notification) {
      return;
   }

   AnimationTrackEdit::_notification(iVar1);
   return;
}
/* AnimationTrackEditVolumeDB::_notificationv(int, bool) */void AnimationTrackEditVolumeDB::_notificationv(AnimationTrackEditVolumeDB *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0011f040 != Control::_notification) {
         AnimationTrackEdit::_notification(iVar1);
      }

      for (int i = 0; i < 3; i++) {
         Control::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 3; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0011f040 == Control::_notification) {
      return;
   }

   AnimationTrackEdit::_notification(iVar1);
   return;
}
/* AnimationTrackEditSpriteFrame::_notificationv(int, bool) */void AnimationTrackEditSpriteFrame::_notificationv(AnimationTrackEditSpriteFrame *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0011f040 != Control::_notification) {
         AnimationTrackEdit::_notification(iVar1);
      }

      for (int i = 0; i < 3; i++) {
         Control::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 3; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0011f040 == Control::_notification) {
      return;
   }

   AnimationTrackEdit::_notification(iVar1);
   return;
}
/* AnimationTrackEditTypeAnimation::_notificationv(int, bool) */void AnimationTrackEditTypeAnimation::_notificationv(AnimationTrackEditTypeAnimation *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0011f040 != Control::_notification) {
         AnimationTrackEdit::_notification(iVar1);
      }

      for (int i = 0; i < 3; i++) {
         Control::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 3; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0011f040 == Control::_notification) {
      return;
   }

   AnimationTrackEdit::_notification(iVar1);
   return;
}
/* String::parse_latin1(char const*) */void String::parse_latin1(String *this, char *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (char*)0x0) {
      strlen(param_1);
   }

   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* List<StringName, DefaultAllocator>::~List() */void List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   plVar4 = *(long**)this;
   if (plVar4 == (long*)0x0) {
      return;
   }

   do {
      plVar1 = (long*)*plVar4;
      if (plVar1 == (long*)0x0) {
         if ((int)plVar4[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if ((long*)plVar1[3] == plVar4) {
         lVar3 = plVar1[1];
         lVar2 = plVar1[2];
         *plVar4 = lVar3;
         if (plVar1 == (long*)plVar4[1]) {
            plVar4[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 8 ) = lVar3;
            lVar3 = plVar1[1];
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         if (( StringName::configured != '\0' ) && ( *plVar1 != 0 )) {
            StringName::unref();
         }

         Memory::free_static(plVar1, false);
         *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar4 = *(long**)this;
   }
 while ( (int)plVar4[2] != 0 );
   Memory::free_static(plVar4, false);
   return;
}
/* Ref<Animation>::unref() */void Ref<Animation>::unref(Ref<Animation> *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            *(undefined8*)this = 0;
            return;
         }

      }

   }

   *(undefined8*)this = 0;
   return;
}
/* Variant Object::call<>(StringName const&) */StringName *Object::call<>(StringName *param_1) {
   undefined8 in_RDX;
   long *in_RSI;
   long in_FS_OFFSET;
   int local_68[4];
   undefined8 local_58;
   undefined1 local_50[16];
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   for (int i = 0; i < 3; i++) {
      local_68[i] = 0;
   }

   ( **(code**)( *in_RSI + 0x68 ) )((Variant*)local_38, in_RSI, in_RDX, 0, 0, local_68);
   if (local_68[0] == 0) {
      Variant::Variant((Variant*)param_1, (Variant*)local_38);
   }
 else {
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   }

   if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<AudioStream>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */void Ref<AudioStream>::operator =(Ref<AudioStream> *this, Variant *param_1) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   pOVar3 = (Object*)Variant::get_validated_object();
   pOVar1 = *(Object**)this;
   if (pOVar1 == pOVar3) {
      return;
   }

   if (pOVar3 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(pOVar3, &Object::typeinfo, &AudioStream::typeinfo, 0);
      if (pOVar1 == pOVar3) {
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
/* void EditorUndoRedoManager::add_do_method<int, int, float>(Object*, StringName const&, int, int,
   float) */void EditorUndoRedoManager::add_do_method<int,int,float>(EditorUndoRedoManager *this, Object *param_1, StringName *param_2, int param_3, int param_4, float param_5) {
   Variant *pVVar1;
   Variant *pVVar2;
   long in_FS_OFFSET;
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_a8, param_3);
   Variant::Variant(local_90, param_4);
   Variant::Variant(local_78, param_5);
   local_58 = (undefined1[16])0x0;
   pVVar2 = local_48;
   local_60 = 0;
   local_c8 = local_a8;
   pVStack_c0 = local_90;
   local_b8 = local_78;
   EditorUndoRedoManager::add_do_methodp((Object*)this, (StringName*)param_1, (Variant**)param_2, (int)&local_c8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_a8 );
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void EditorUndoRedoManager::add_undo_method<int, int, float>(Object*, StringName const&, int,
   int, float) */void EditorUndoRedoManager::add_undo_method<int,int,float>(EditorUndoRedoManager *this, Object *param_1, StringName *param_2, int param_3, int param_4, float param_5) {
   Variant *pVVar1;
   Variant *pVVar2;
   long in_FS_OFFSET;
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_a8, param_3);
   Variant::Variant(local_90, param_4);
   Variant::Variant(local_78, param_5);
   local_58 = (undefined1[16])0x0;
   pVVar2 = local_48;
   local_60 = 0;
   local_c8 = local_a8;
   pVStack_c0 = local_90;
   local_b8 = local_78;
   EditorUndoRedoManager::add_undo_methodp((Object*)this, (StringName*)param_1, (Variant**)param_2, (int)&local_c8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_a8 );
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }

   lVar2 = *(long*)this;
   *(undefined8*)this = 0;
   Memory::free_static((void*)( lVar2 + -0x10 ), false);
   return;
}
/* String::~String() */void String::~String(String *this) {
   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* AnimationTrackEditBool::_initialize_classv() */void AnimationTrackEditBool::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AnimationTrackEdit::initialize_class() == '\0') {
         AnimationTrackEdit::initialize_class();
      }

      local_58 = 0;
      local_40 = 0x12;
      local_48 = "AnimationTrackEdit";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "AnimationTrackEditBool";
      local_60 = 0;
      local_40 = 0x16;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      initialize_class()::initialized = '\x01'
      ;;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationTrackEditColor::_initialize_classv() */void AnimationTrackEditColor::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AnimationTrackEdit::initialize_class() == '\0') {
         AnimationTrackEdit::initialize_class();
      }

      local_58 = 0;
      local_40 = 0x12;
      local_48 = "AnimationTrackEdit";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "AnimationTrackEditColor";
      local_60 = 0;
      local_40 = 0x17;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      initialize_class()::initialized = '\x01'
      ;;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationTrackEditAudio::_initialize_classv() */void AnimationTrackEditAudio::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AnimationTrackEdit::initialize_class() == '\0') {
         AnimationTrackEdit::initialize_class();
      }

      local_58 = 0;
      local_40 = 0x12;
      local_48 = "AnimationTrackEdit";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "AnimationTrackEditAudio";
      local_60 = 0;
      local_40 = 0x17;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      initialize_class()::initialized = '\x01'
      ;;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationTrackEditSpriteFrame::_initialize_classv() */void AnimationTrackEditSpriteFrame::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AnimationTrackEdit::initialize_class() == '\0') {
         AnimationTrackEdit::initialize_class();
      }

      local_58 = 0;
      local_40 = 0x12;
      local_48 = "AnimationTrackEdit";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "AnimationTrackEditSpriteFrame";
      local_60 = 0;
      local_40 = 0x1d;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      initialize_class()::initialized = '\x01'
      ;;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationTrackEditSubAnim::_initialize_classv() */void AnimationTrackEditSubAnim::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AnimationTrackEdit::initialize_class() == '\0') {
         AnimationTrackEdit::initialize_class();
      }

      local_58 = 0;
      local_40 = 0x12;
      local_48 = "AnimationTrackEdit";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "AnimationTrackEditSubAnim";
      local_60 = 0;
      local_40 = 0x19;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      initialize_class()::initialized = '\x01'
      ;;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationTrackEditTypeAudio::_initialize_classv() */void AnimationTrackEditTypeAudio::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AnimationTrackEdit::initialize_class() == '\0') {
         AnimationTrackEdit::initialize_class();
      }

      local_58 = 0;
      local_40 = 0x12;
      local_48 = "AnimationTrackEdit";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "AnimationTrackEditTypeAudio";
      local_60 = 0;
      local_40 = 0x1b;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      initialize_class()::initialized = '\x01'
      ;;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationTrackEditTypeAnimation::_initialize_classv() */void AnimationTrackEditTypeAnimation::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AnimationTrackEdit::initialize_class() == '\0') {
         AnimationTrackEdit::initialize_class();
      }

      local_58 = 0;
      local_40 = 0x12;
      local_48 = "AnimationTrackEdit";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "AnimationTrackEditTypeAnimation";
      local_60 = 0;
      local_40 = 0x1f;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      initialize_class()::initialized = '\x01'
      ;;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationTrackEditVolumeDB::_initialize_classv() */void AnimationTrackEditVolumeDB::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AnimationTrackEdit::initialize_class() == '\0') {
         AnimationTrackEdit::initialize_class();
      }

      local_58 = 0;
      local_40 = 0x12;
      local_48 = "AnimationTrackEdit";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "AnimationTrackEditVolumeDB";
      local_60 = 0;
      local_40 = 0x1a;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      initialize_class()::initialized = '\x01'
      ;;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AnimationTrackEditDefaultPlugin::_initialize_classv() */void AnimationTrackEditDefaultPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (AnimationTrackEditPlugin::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Object");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"RefCounted");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if ((code *)PTR__bind_methods_0011f048 != Object::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"RefCounted");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"AnimationTrackEditPlugin");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      AnimationTrackEditPlugin::initialize_class()::initialized = '\x01';
    }
    local_48 = "AnimationTrackEditPlugin";
    local_58 = 0;
    local_40 = 0x18;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "AnimationTrackEditDefaultPlugin";
    local_60 = 0;
    local_40 = 0x1f;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AnimationTrackEdit::~AnimationTrackEdit() */

void __thiscall AnimationTrackEdit::~AnimationTrackEdit(AnimationTrackEdit *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(code **)this = Control::~Control;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa98));
  if (*(long *)(this + 0xa90) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa90);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa78) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa78);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa70) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa70);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa00) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa00);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  NodePath::~NodePath((NodePath *)(this + 0x9f8));
  Control::~Control((Control *)this);
  return;
}



/* AnimationTrackEdit::~AnimationTrackEdit() */

void __thiscall AnimationTrackEdit::~AnimationTrackEdit(AnimationTrackEdit *this)

{
  ~AnimationTrackEdit(this);
  operator_delete(this,0xac8);
  return;
}



/* AnimationTrackEditTypeAnimation::~AnimationTrackEditTypeAnimation() */

void __thiscall
AnimationTrackEditTypeAnimation::~AnimationTrackEditTypeAnimation
          (AnimationTrackEditTypeAnimation *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118ed8;
  AnimationTrackEdit::~AnimationTrackEdit((AnimationTrackEdit *)this);
  return;
}



/* AnimationTrackEditTypeAnimation::~AnimationTrackEditTypeAnimation() */

void __thiscall
AnimationTrackEditTypeAnimation::~AnimationTrackEditTypeAnimation
          (AnimationTrackEditTypeAnimation *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118ed8;
  AnimationTrackEdit::~AnimationTrackEdit((AnimationTrackEdit *)this);
  operator_delete(this,0xad0);
  return;
}



/* AnimationTrackEditTypeAudio::~AnimationTrackEditTypeAudio() */

void __thiscall
AnimationTrackEditTypeAudio::~AnimationTrackEditTypeAudio(AnimationTrackEditTypeAudio *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118b38;
  AnimationTrackEdit::~AnimationTrackEdit((AnimationTrackEdit *)this);
  return;
}



/* AnimationTrackEditTypeAudio::~AnimationTrackEditTypeAudio() */

void __thiscall
AnimationTrackEditTypeAudio::~AnimationTrackEditTypeAudio(AnimationTrackEditTypeAudio *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118b38;
  AnimationTrackEdit::~AnimationTrackEdit((AnimationTrackEdit *)this);
  operator_delete(this,0xae0);
  return;
}



/* AnimationTrackEditVolumeDB::~AnimationTrackEditVolumeDB() */

void __thiscall
AnimationTrackEditVolumeDB::~AnimationTrackEditVolumeDB(AnimationTrackEditVolumeDB *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118798;
  AnimationTrackEdit::~AnimationTrackEdit((AnimationTrackEdit *)this);
  return;
}



/* AnimationTrackEditVolumeDB::~AnimationTrackEditVolumeDB() */

void __thiscall
AnimationTrackEditVolumeDB::~AnimationTrackEditVolumeDB(AnimationTrackEditVolumeDB *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118798;
  AnimationTrackEdit::~AnimationTrackEdit((AnimationTrackEdit *)this);
  operator_delete(this,0xac8);
  return;
}



/* AnimationTrackEditSubAnim::~AnimationTrackEditSubAnim() */

void __thiscall
AnimationTrackEditSubAnim::~AnimationTrackEditSubAnim(AnimationTrackEditSubAnim *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001183f8;
  AnimationTrackEdit::~AnimationTrackEdit((AnimationTrackEdit *)this);
  return;
}



/* AnimationTrackEditSubAnim::~AnimationTrackEditSubAnim() */

void __thiscall
AnimationTrackEditSubAnim::~AnimationTrackEditSubAnim(AnimationTrackEditSubAnim *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001183f8;
  AnimationTrackEdit::~AnimationTrackEdit((AnimationTrackEdit *)this);
  operator_delete(this,0xad0);
  return;
}



/* AnimationTrackEditSpriteFrame::~AnimationTrackEditSpriteFrame() */

void __thiscall
AnimationTrackEditSpriteFrame::~AnimationTrackEditSpriteFrame(AnimationTrackEditSpriteFrame *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118058;
  AnimationTrackEdit::~AnimationTrackEdit((AnimationTrackEdit *)this);
  return;
}



/* AnimationTrackEditSpriteFrame::~AnimationTrackEditSpriteFrame() */

void __thiscall
AnimationTrackEditSpriteFrame::~AnimationTrackEditSpriteFrame(AnimationTrackEditSpriteFrame *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00118058;
  AnimationTrackEdit::~AnimationTrackEdit((AnimationTrackEdit *)this);
  operator_delete(this,0xad8);
  return;
}



/* AnimationTrackEditAudio::~AnimationTrackEditAudio() */

void __thiscall AnimationTrackEditAudio::~AnimationTrackEditAudio(AnimationTrackEditAudio *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117cb8;
  AnimationTrackEdit::~AnimationTrackEdit((AnimationTrackEdit *)this);
  return;
}



/* AnimationTrackEditAudio::~AnimationTrackEditAudio() */

void __thiscall AnimationTrackEditAudio::~AnimationTrackEditAudio(AnimationTrackEditAudio *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117cb8;
  AnimationTrackEdit::~AnimationTrackEdit((AnimationTrackEdit *)this);
  operator_delete(this,0xad0);
  return;
}



/* AnimationTrackEditColor::~AnimationTrackEditColor() */

void __thiscall AnimationTrackEditColor::~AnimationTrackEditColor(AnimationTrackEditColor *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117918;
  AnimationTrackEdit::~AnimationTrackEdit((AnimationTrackEdit *)this);
  return;
}



/* AnimationTrackEditColor::~AnimationTrackEditColor() */

void __thiscall AnimationTrackEditColor::~AnimationTrackEditColor(AnimationTrackEditColor *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117918;
  AnimationTrackEdit::~AnimationTrackEdit((AnimationTrackEdit *)this);
  operator_delete(this,0xac8);
  return;
}



/* AnimationTrackEditBool::~AnimationTrackEditBool() */

void __thiscall AnimationTrackEditBool::~AnimationTrackEditBool(AnimationTrackEditBool *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00117578;
  if (*(long *)(this + 0xad0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xad0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xac8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xac8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        AnimationTrackEdit::~AnimationTrackEdit((AnimationTrackEdit *)this);
        return;
      }
    }
  }
  AnimationTrackEdit::~AnimationTrackEdit((AnimationTrackEdit *)this);
  return;
}



/* AnimationTrackEditBool::~AnimationTrackEditBool() */

void __thiscall AnimationTrackEditBool::~AnimationTrackEditBool(AnimationTrackEditBool *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00117578;
  if (*(long *)(this + 0xad0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xad0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xac8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xac8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  AnimationTrackEdit::~AnimationTrackEdit((AnimationTrackEdit *)this);
  operator_delete(this,0xad8);
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* AnimationTrackEditTypeAnimation::get_class() const */

void AnimationTrackEditTypeAnimation::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* AnimationTrackEditTypeAudio::get_class() const */

void AnimationTrackEditTypeAudio::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* AnimationTrackEditVolumeDB::get_class() const */

void AnimationTrackEditVolumeDB::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* AnimationTrackEditSubAnim::get_class() const */

void AnimationTrackEditSubAnim::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* AnimationTrackEditSpriteFrame::get_class() const */

void AnimationTrackEditSpriteFrame::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* AnimationTrackEditAudio::get_class() const */

void AnimationTrackEditAudio::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* AnimationTrackEditColor::get_class() const */

void AnimationTrackEditColor::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* AnimationTrackEditBool::get_class() const */

void AnimationTrackEditBool::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* AnimationTrackEditDefaultPlugin::get_class() const */

void AnimationTrackEditDefaultPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = String::operator==(param_1,"Object");
        return uVar5;
      }
LAB_001128d7:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
    uVar4 = String::operator==(param_1,(String *)&local_50);
    lVar3 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((char)uVar4 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar4;
      }
      goto LAB_001128d7;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_001129db;
  }
  cVar4 = String::operator==(param_1,"RefCounted");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001129db:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_00112b2b;
  }
  cVar4 = String::operator==(param_1,"Node");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00112b2b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationTrackEditAudio, void, ObjectID>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationTrackEditAudio,void,ObjectID>::call
          (CallableCustomMethodPointer<AnimationTrackEditAudio,void,ObjectID> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar7;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar7 = (char)ObjectDB::spin_lock == '\0';
      if (bVar7) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar7) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00112f09;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00112f09;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar3 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC72;
        if (cVar3 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        uVar4 = Variant::operator_cast_to_ObjectID(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00112eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar4);
          return;
        }
        goto LAB_00112fba;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00112f09:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC71,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00112fba:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationTrackEditTypeAudio, void, ObjectID>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationTrackEditTypeAudio,void,ObjectID>::call
          (CallableCustomMethodPointer<AnimationTrackEditTypeAudio,void,ObjectID> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar7;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar7 = (char)ObjectDB::spin_lock == '\0';
      if (bVar7) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar7) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00113179;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00113179;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar3 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC72;
        if (cVar3 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        uVar4 = Variant::operator_cast_to_ObjectID(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00113128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar4);
          return;
        }
        goto LAB_0011322a;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00113179:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC71,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011322a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEditDefaultPlugin::is_class(String const&) const */

undefined8 __thiscall
AnimationTrackEditDefaultPlugin::is_class(AnimationTrackEditDefaultPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0011332b;
  }
  cVar5 = String::operator==(param_1,"AnimationTrackEditDefaultPlugin");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0011332b;
    }
    cVar5 = String::operator==(param_1,"AnimationTrackEditPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_0011342e;
    }
  }
LAB_0011332b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011342e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)PTR__bind_methods_0011f048 != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 0x18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar2) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0011367f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0011367f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_001137bb;
  }
  cVar4 = String::operator==(param_1,"Control");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_001137bb;
    }
    cVar4 = String::operator==(param_1,"CanvasItem");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Node::is_class((Node *)this,param_1);
        return uVar5;
      }
      goto LAB_001138be;
    }
  }
LAB_001137bb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001138be:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEdit::is_class(String const&) const */

undefined8 __thiscall AnimationTrackEdit::is_class(AnimationTrackEdit *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_001139cb;
  }
  cVar4 = String::operator==(param_1,"AnimationTrackEdit");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001139cb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEditTypeAnimation::is_class(String const&) const */

undefined8 __thiscall
AnimationTrackEditTypeAnimation::is_class(AnimationTrackEditTypeAnimation *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_00113b1b;
  }
  cVar4 = String::operator==(param_1,"AnimationTrackEditTypeAnimation");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = AnimationTrackEdit::is_class((AnimationTrackEdit *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00113b1b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEditTypeAudio::is_class(String const&) const */

undefined8 __thiscall
AnimationTrackEditTypeAudio::is_class(AnimationTrackEditTypeAudio *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_00113c6b;
  }
  cVar4 = String::operator==(param_1,"AnimationTrackEditTypeAudio");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = AnimationTrackEdit::is_class((AnimationTrackEdit *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00113c6b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEditVolumeDB::is_class(String const&) const */

undefined8 __thiscall
AnimationTrackEditVolumeDB::is_class(AnimationTrackEditVolumeDB *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_00113dbb;
  }
  cVar4 = String::operator==(param_1,"AnimationTrackEditVolumeDB");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = AnimationTrackEdit::is_class((AnimationTrackEdit *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00113dbb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEditSubAnim::is_class(String const&) const */

undefined8 __thiscall
AnimationTrackEditSubAnim::is_class(AnimationTrackEditSubAnim *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_00113f0b;
  }
  cVar4 = String::operator==(param_1,"AnimationTrackEditSubAnim");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = AnimationTrackEdit::is_class((AnimationTrackEdit *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00113f0b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEditSpriteFrame::is_class(String const&) const */

undefined8 __thiscall
AnimationTrackEditSpriteFrame::is_class(AnimationTrackEditSpriteFrame *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0011405b;
  }
  cVar4 = String::operator==(param_1,"AnimationTrackEditSpriteFrame");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = AnimationTrackEdit::is_class((AnimationTrackEdit *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011405b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEditAudio::is_class(String const&) const */

undefined8 __thiscall
AnimationTrackEditAudio::is_class(AnimationTrackEditAudio *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_001141ab;
  }
  cVar4 = String::operator==(param_1,"AnimationTrackEditAudio");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = AnimationTrackEdit::is_class((AnimationTrackEdit *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001141ab:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEditColor::is_class(String const&) const */

undefined8 __thiscall
AnimationTrackEditColor::is_class(AnimationTrackEditColor *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_001142fb;
  }
  cVar4 = String::operator==(param_1,"AnimationTrackEditColor");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = AnimationTrackEdit::is_class((AnimationTrackEdit *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001142fb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEditBool::is_class(String const&) const */

undefined8 __thiscall AnimationTrackEditBool::is_class(AnimationTrackEditBool *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0011444b;
  }
  cVar4 = String::operator==(param_1,"AnimationTrackEditBool");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = AnimationTrackEdit::is_class((AnimationTrackEdit *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011444b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_001145fc;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001145fc:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC49;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC49;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011484c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011484c:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AnimationTrackEditPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
AnimationTrackEditPlugin::_get_property_listv
          (AnimationTrackEditPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "AnimationTrackEditPlugin";
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "AnimationTrackEditPlugin";
  local_90 = 0;
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AnimationTrackEditPlugin",false);
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



/* AnimationTrackEditDefaultPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AnimationTrackEditDefaultPlugin::_get_property_listv
          (AnimationTrackEditDefaultPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AnimationTrackEditPlugin::_get_property_listv((AnimationTrackEditPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "AnimationTrackEditDefaultPlugin";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "AnimationTrackEditDefaultPlugin";
  local_90 = 0;
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AnimationTrackEditDefaultPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AnimationTrackEditPlugin::_get_property_listv((AnimationTrackEditPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  long local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "CanvasItem";
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             (StrRange *)&local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0011f050 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    local_90 = 0;
    local_88 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_80 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_80);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_80,0,(StrRange *)&local_88,0x80,
               (StrRange *)&local_90);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref(local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Control::_get_property_listv(Control *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Control";
  local_90 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0011f058 != CanvasItem::_get_property_list) {
    Control::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::_get_property_listv((CanvasItem *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEdit::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AnimationTrackEdit::_get_property_listv(AnimationTrackEdit *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "AnimationTrackEdit";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "AnimationTrackEdit";
  local_90 = 0;
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AnimationTrackEdit",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::_get_property_listv((Control *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEditTypeAnimation::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AnimationTrackEditTypeAnimation::_get_property_listv
          (AnimationTrackEditTypeAnimation *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AnimationTrackEdit::_get_property_listv((AnimationTrackEdit *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "AnimationTrackEditTypeAnimation";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "AnimationTrackEditTypeAnimation";
  local_90 = 0;
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AnimationTrackEditTypeAnimation",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AnimationTrackEdit::_get_property_listv((AnimationTrackEdit *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEditTypeAudio::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AnimationTrackEditTypeAudio::_get_property_listv
          (AnimationTrackEditTypeAudio *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AnimationTrackEdit::_get_property_listv((AnimationTrackEdit *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "AnimationTrackEditTypeAudio";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "AnimationTrackEditTypeAudio";
  local_90 = 0;
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AnimationTrackEditTypeAudio",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AnimationTrackEdit::_get_property_listv((AnimationTrackEdit *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEditVolumeDB::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AnimationTrackEditVolumeDB::_get_property_listv
          (AnimationTrackEditVolumeDB *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AnimationTrackEdit::_get_property_listv((AnimationTrackEdit *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "AnimationTrackEditVolumeDB";
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "AnimationTrackEditVolumeDB";
  local_90 = 0;
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AnimationTrackEditVolumeDB",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AnimationTrackEdit::_get_property_listv((AnimationTrackEdit *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEditSubAnim::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
AnimationTrackEditSubAnim::_get_property_listv
          (AnimationTrackEditSubAnim *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AnimationTrackEdit::_get_property_listv((AnimationTrackEdit *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "AnimationTrackEditSubAnim";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "AnimationTrackEditSubAnim";
  local_90 = 0;
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AnimationTrackEditSubAnim",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AnimationTrackEdit::_get_property_listv((AnimationTrackEdit *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEditSpriteFrame::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AnimationTrackEditSpriteFrame::_get_property_listv
          (AnimationTrackEditSpriteFrame *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AnimationTrackEdit::_get_property_listv((AnimationTrackEdit *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "AnimationTrackEditSpriteFrame";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "AnimationTrackEditSpriteFrame";
  local_90 = 0;
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AnimationTrackEditSpriteFrame",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AnimationTrackEdit::_get_property_listv((AnimationTrackEdit *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEditAudio::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
AnimationTrackEditAudio::_get_property_listv
          (AnimationTrackEditAudio *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AnimationTrackEdit::_get_property_listv((AnimationTrackEdit *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "AnimationTrackEditAudio";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "AnimationTrackEditAudio";
  local_90 = 0;
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AnimationTrackEditAudio",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AnimationTrackEdit::_get_property_listv((AnimationTrackEdit *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEditColor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
AnimationTrackEditColor::_get_property_listv
          (AnimationTrackEditColor *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AnimationTrackEdit::_get_property_listv((AnimationTrackEdit *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "AnimationTrackEditColor";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "AnimationTrackEditColor";
  local_90 = 0;
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AnimationTrackEditColor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AnimationTrackEdit::_get_property_listv((AnimationTrackEdit *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackEditBool::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AnimationTrackEditBool::_get_property_listv(AnimationTrackEditBool *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    AnimationTrackEdit::_get_property_listv((AnimationTrackEdit *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "AnimationTrackEditBool";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "AnimationTrackEditBool";
  local_90 = 0;
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AnimationTrackEditBool",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AnimationTrackEdit::_get_property_listv((AnimationTrackEdit *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* Ref<Font>::unref() */

void __thiscall Ref<Font>::unref(Ref<Font> *this)

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



/* Ref<Texture2D>::unref() */

void __thiscall Ref<Texture2D>::unref(Ref<Texture2D> *this)

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



/* Ref<AudioStream>::unref() */

void __thiscall Ref<AudioStream>::unref(Ref<AudioStream> *this)

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



/* Ref<AudioStreamPreview>::unref() */

void __thiscall Ref<AudioStreamPreview>::unref(Ref<AudioStreamPreview> *this)

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



/* HashMap<StringName, SpriteFrames::Anim, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   SpriteFrames::Anim> > >::_lookup_pos(StringName const&, unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>
::_lookup_pos(HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>
              *this,StringName *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          *param_2 = uVar12;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* Ref<SpriteFrames>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<SpriteFrames>::operator=(Ref<SpriteFrames> *this,Variant *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar3 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)this;
  if (pOVar1 == pOVar3) {
    return;
  }
  if (pOVar3 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&SpriteFrames::typeinfo,0);
    if (pOVar1 == pOVar3) {
      return;
    }
    *(Object **)this = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pOVar1 == (Object *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* Ref<SpriteFrames>::unref() */

void __thiscall Ref<SpriteFrames>::unref(Ref<SpriteFrames> *this)

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



/* CowData<Vector2>::_unref() */

void __thiscall CowData<Vector2>::_unref(CowData<Vector2> *this)

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



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

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



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
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
    lVar2 = 0;
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
    lVar2 = lVar7 * 8;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00116a40:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 8 - 1;
  uVar3 = uVar3 >> 1 | uVar3;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar6 = uVar3 + 1;
  if (lVar6 == 0) goto LAB_00116a40;
  if (param_1 <= lVar7) {
    if ((lVar6 != lVar2) && (uVar5 = _realloc(this,lVar6), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar6 == lVar2) {
LAB_001169cc:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_00116971;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_001169cc;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  memset(puVar8 + lVar7,0,(param_1 - lVar7) * 8);
LAB_00116971:
  puVar8[-1] = param_1;
  return 0;
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



/* CowData<Color>::_unref() */

void __thiscall CowData<Color>::_unref(CowData<Color> *this)

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



/* CowData<Color>::_realloc(long) */

undefined8 __thiscall CowData<Color>::_realloc(CowData<Color> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Color>::resize<false>(long) */

undefined8 __thiscall CowData<Color>::resize<false>(CowData<Color> *this,long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
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
    lVar11 = 0;
    lVar3 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar11 * 0x10;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00116e50:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0x10 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar10 = uVar4 + 1;
  if (lVar10 == 0) goto LAB_00116e50;
  if (param_1 <= lVar11) {
    if ((lVar10 != lVar3) && (uVar8 = _realloc(this,lVar10), (int)uVar8 != 0)) {
      return uVar8;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar10 == lVar3) {
LAB_00116ddc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar11 = puVar9[-1];
    if (param_1 <= lVar11) goto LAB_00116d80;
  }
  else {
    if (lVar11 != 0) {
      uVar8 = _realloc(this,lVar10);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      goto LAB_00116ddc;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar11 = 0;
  }
  uVar2 = _UNK_00119a38;
  uVar8 = __LC124;
  puVar6 = puVar9 + lVar11 * 2;
  puVar5 = puVar6;
  if (((param_1 - lVar11) * 0x10 & 0x10U) != 0) {
    *puVar6 = __LC124;
    puVar6[1] = uVar2;
    puVar5 = puVar6 + 2;
    if (puVar6 + (param_1 - lVar11) * 2 == puVar6 + 2) goto LAB_00116d80;
  }
  do {
    *puVar5 = uVar8;
    puVar5[1] = uVar2;
    puVar7 = puVar5 + 4;
    puVar5[2] = uVar8;
    puVar5[3] = uVar2;
    puVar5 = puVar7;
  } while (puVar6 + (param_1 - lVar11) * 2 != puVar7);
LAB_00116d80:
  puVar9[-1] = param_1;
  return 0;
}



/* AnimationTrackEditBool::get_key_height() const */

void AnimationTrackEditBool::_GLOBAL__sub_I_get_key_height(void)

{
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._64_8_ = 0;
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  if (OptionButton::base_property_helper == '\0') {
    OptionButton::base_property_helper = '\x01';
    OptionButton::base_property_helper._64_8_ = 0;
    OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
                 &__dso_handle);
  }
  if (MenuButton::base_property_helper == '\0') {
    MenuButton::base_property_helper = '\x01';
    MenuButton::base_property_helper._64_8_ = 0;
    MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
                 &__dso_handle);
  }
  if (Animation::PARAMETERS_BASE_PATH == '\0') {
    Animation::PARAMETERS_BASE_PATH = '\x01';
    Animation::PARAMETERS_BASE_PATH = 0;
    String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
    __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  }
  if (AudioStreamRandomizer::base_property_helper != '\0') {
    return;
  }
  AudioStreamRandomizer::base_property_helper = 1;
  AudioStreamRandomizer::base_property_helper._56_8_ = 2;
  AudioStreamRandomizer::base_property_helper._64_8_ = 0;
  AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,AudioStreamRandomizer::base_property_helper,
               &__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AnimationTrackEditBool::~AnimationTrackEditBool() */

void __thiscall AnimationTrackEditBool::~AnimationTrackEditBool(AnimationTrackEditBool *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AnimationTrackEditColor::~AnimationTrackEditColor() */

void __thiscall AnimationTrackEditColor::~AnimationTrackEditColor(AnimationTrackEditColor *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AnimationTrackEditAudio::~AnimationTrackEditAudio() */

void __thiscall AnimationTrackEditAudio::~AnimationTrackEditAudio(AnimationTrackEditAudio *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AnimationTrackEditSpriteFrame::~AnimationTrackEditSpriteFrame() */

void __thiscall
AnimationTrackEditSpriteFrame::~AnimationTrackEditSpriteFrame(AnimationTrackEditSpriteFrame *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AnimationTrackEditSubAnim::~AnimationTrackEditSubAnim() */

void __thiscall
AnimationTrackEditSubAnim::~AnimationTrackEditSubAnim(AnimationTrackEditSubAnim *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AnimationTrackEditVolumeDB::~AnimationTrackEditVolumeDB() */

void __thiscall
AnimationTrackEditVolumeDB::~AnimationTrackEditVolumeDB(AnimationTrackEditVolumeDB *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AnimationTrackEditTypeAudio::~AnimationTrackEditTypeAudio() */

void __thiscall
AnimationTrackEditTypeAudio::~AnimationTrackEditTypeAudio(AnimationTrackEditTypeAudio *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AnimationTrackEditTypeAnimation::~AnimationTrackEditTypeAnimation() */

void __thiscall
AnimationTrackEditTypeAnimation::~AnimationTrackEditTypeAnimation
          (AnimationTrackEditTypeAnimation *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AnimationTrackEdit::~AnimationTrackEdit() */

void __thiscall AnimationTrackEdit::~AnimationTrackEdit(AnimationTrackEdit *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AnimationTrackEditDefaultPlugin::~AnimationTrackEditDefaultPlugin() */

void __thiscall
AnimationTrackEditDefaultPlugin::~AnimationTrackEditDefaultPlugin
          (AnimationTrackEditDefaultPlugin *this)

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
/* CallableCustomMethodPointer<AnimationTrackEditAudio, void,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationTrackEditAudio,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationTrackEditAudio,void,ObjectID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationTrackEditTypeAudio, void,
   ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationTrackEditTypeAudio,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationTrackEditTypeAudio,void,ObjectID> *this)

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
