/* Color::set_hsv(float, float, float, float) [clone .part.0] */void Color::set_hsv(float param_1, float param_2, float param_3, float param_4) {
   float fVar1;
   undefined8 *in_RDI;
   ushort in_FPUStatusWord;
   float fVar2;
   float fVar3;
   float fVar4;
   fVar3 = param_1 * _LC5;
   do {
      fVar3 = fVar3 - ( fVar3 / _LC5 ) * _LC5;
   }
 while ( ( in_FPUStatusWord & 0x400 ) != 0 );
   if (NAN(fVar3)) {
      fmodf(param_1 * _LC5, _LC5);
   }

   fVar1 = fVar3;
   if ((float)( (uint)fVar3 & _LC10 ) < _LC6) {
      fVar1 = (float)( ( uint )((float)(int)fVar3 - (float)( -(uint)(fVar3 < (float)(int)fVar3) & (uint)_LC8 )) | ~_LC10 & (uint)fVar3 );
   }

   fVar3 = fVar3 - (float)(int)fVar1;
   fVar2 = ( _LC8 - param_2 ) * param_3;
   fVar4 = ( _LC8 - fVar3 * param_2 ) * param_3;
   fVar3 = ( _LC8 - ( _LC8 - fVar3 ) * param_2 ) * param_3;
   switch ((int)fVar1) {
      case 0:
    goto switchD_001001a6_caseD_0;
      case 1:
    fVar3 = param_3;
    param_3 = fVar4;
switchD_001001a6_caseD_0:
    *(float *)(in_RDI + 1) = fVar2;
    *in_RDI = CONCAT44(fVar3,param_3);
    return;
      case 2:
    *(float *)(in_RDI + 1) = fVar3;
    *in_RDI = CONCAT44(param_3,fVar2);
    return;
      case 3:
    *(float *)(in_RDI + 1) = param_3;
    *in_RDI = CONCAT44(fVar4,fVar2);
    return;
      case 4:
    *(float *)(in_RDI + 1) = param_3;
    *in_RDI = CONCAT44(fVar2,fVar3);
    return;
      default:
    *(float *)(in_RDI + 1) = fVar4;
    *in_RDI = CONCAT44(fVar2,param_3);
    return;
   }

}
/* Color::to_argb32() const */uint Color::to_argb32(Color *this) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   fVar1 = roundf(_LC113 * *(float*)( this + 0xc ));
   fVar2 = roundf(_LC113 * *(float*)this);
   fVar3 = roundf(_LC113 * *(float*)( this + 4 ));
   fVar4 = roundf(_LC113 * *(float*)( this + 8 ));
   return (int)fVar4 & 0xffU | ( (int)fVar3 & 0xffU | ( (int)fVar2 & 0xffU | ( (int)fVar1 & 0xffU ) << 8 ) << 8 ) << 8;
}
/* Color::to_abgr32() const */uint Color::to_abgr32(Color *this) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   fVar1 = roundf(_LC113 * *(float*)( this + 0xc ));
   fVar2 = roundf(_LC113 * *(float*)( this + 8 ));
   fVar3 = roundf(_LC113 * *(float*)( this + 4 ));
   fVar4 = roundf(_LC113 * *(float*)this);
   return (int)fVar4 & 0xffU | ( (int)fVar3 & 0xffU | ( (int)fVar2 & 0xffU | ( (int)fVar1 & 0xffU ) << 8 ) << 8 ) << 8;
}
/* Color::to_rgba32() const */uint Color::to_rgba32(Color *this) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   fVar1 = roundf(_LC113 * *(float*)this);
   fVar2 = roundf(_LC113 * *(float*)( this + 4 ));
   fVar3 = roundf(_LC113 * *(float*)( this + 8 ));
   fVar4 = roundf(_LC113 * *(float*)( this + 0xc ));
   return (int)fVar4 & 0xffU | ( (int)fVar3 & 0xffU | ( (int)fVar2 & 0xffU | ( (int)fVar1 & 0xffU ) << 8 ) << 8 ) << 8;
}
/* Color::to_abgr64() const */ulong Color::to_abgr64(Color *this) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   fVar1 = roundf(_LC114 * *(float*)( this + 0xc ));
   fVar2 = roundf(_LC114 * *(float*)( this + 8 ));
   fVar3 = roundf(_LC114 * *(float*)( this + 4 ));
   fVar4 = roundf(_LC114 * *(float*)this);
   return ( ulong )((int)fVar4 & 0xffff) | ( ( ulong )((int)fVar3 & 0xffff) | ( ( ulong )((int)fVar2 & 0xffff) | ( ulong )((int)fVar1 & 0xffff) << 0x10 ) << 0x10 ) << 0x10;
}
/* Color::to_argb64() const */ulong Color::to_argb64(Color *this) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   fVar1 = roundf(_LC114 * *(float*)( this + 0xc ));
   fVar2 = roundf(_LC114 * *(float*)this);
   fVar3 = roundf(_LC114 * *(float*)( this + 4 ));
   fVar4 = roundf(_LC114 * *(float*)( this + 8 ));
   return ( ulong )((int)fVar4 & 0xffff) | ( ( ulong )((int)fVar3 & 0xffff) | ( ( ulong )((int)fVar2 & 0xffff) | ( ulong )((int)fVar1 & 0xffff) << 0x10 ) << 0x10 ) << 0x10;
}
/* Color::to_rgba64() const */ulong Color::to_rgba64(Color *this) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   fVar1 = roundf(_LC114 * *(float*)this);
   fVar2 = roundf(_LC114 * *(float*)( this + 4 ));
   fVar3 = roundf(_LC114 * *(float*)( this + 8 ));
   fVar4 = roundf(_LC114 * *(float*)( this + 0xc ));
   return ( ulong )((int)fVar4 & 0xffff) | ( ( ulong )((int)fVar3 & 0xffff) | ( ( ulong )((int)fVar2 & 0xffff) | ( ulong )((int)fVar1 & 0xffff) << 0x10 ) << 0x10 ) << 0x10;
}
/* Color::to_html(bool) const */String *Color::to_html(bool param_1) {
   long *plVar1;
   float fVar2;
   long lVar3;
   char in_DL;
   float *in_RSI;
   undefined7 in_register_00000039;
   String *this;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   this(String * CONCAT71(in_register_00000039, param_1));
   fVar2 = *in_RSI;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   _to_hex(fVar2);
   String::operator +=(this, (String*)&local_38);
   lVar3 = local_38;
   if (local_38 != 0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   _to_hex(in_RSI[1]);
   String::operator +=(this, (String*)&local_38);
   lVar3 = local_38;
   if (local_38 != 0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   _to_hex(in_RSI[2]);
   String::operator +=(this, (String*)&local_38);
   lVar3 = local_38;
   if (local_38 != 0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (in_DL != '\0') {
      _to_hex(in_RSI[3]);
      String::operator +=(this, (String*)&local_38);
      lVar3 = local_38;
      if (local_38 != 0) {
         LOCK();
         plVar1 = (long*)( local_38 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Color::get_h() const */undefined8 Color::get_h(Color *this) {
   float fVar1;
   float fVar2;
   float fVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   float fVar6;
   fVar1 = *(float*)( this + 4 );
   fVar2 = *(float*)this;
   fVar3 = *(float*)( this + 8 );
   fVar6 = fVar3;
   if (fVar1 <= fVar2) {
      if (fVar1 < fVar3) {
         fVar6 = fVar1;
         if (fVar1 < fVar2) goto LAB_001009e1;
         goto LAB_00100990;
      }

      if (fVar2 <= fVar1) goto LAB_00100942;
      LAB_001009e1:if (fVar2 <= fVar3) goto LAB_00100990;
      fVar6 = fVar2 - fVar6;
      if (fVar6 == 0.0) {
         return 0;
      }

      LAB_001009f8:auVar4 = ZEXT416(( uint )(( fVar1 - fVar3 ) / fVar6));
   }
 else {
      fVar6 = fVar2;
      if (fVar3 <= fVar2) {
         fVar6 = fVar3;
      }

      LAB_00100942:if (fVar1 <= fVar3) {
         LAB_00100990:fVar6 = fVar3 - fVar6;
         if (fVar6 == 0.0) {
            return 0;
         }

         if (fVar2 == fVar3) goto LAB_001009f8;
         if (fVar1 != fVar3) {
            auVar4 = ZEXT416(( uint )(( fVar2 - fVar1 ) / fVar6 + __LC116));
            goto LAB_00100a03;
         }

      }
 else {
         fVar6 = fVar1 - fVar6;
         if (fVar6 == 0.0) {
            return 0;
         }

         if (fVar1 == fVar2) goto LAB_001009f8;
      }

      auVar4 = ZEXT416(( uint )(( fVar3 - fVar2 ) / fVar6 + _LC115));
   }

   LAB_00100a03:auVar4._0_4_ = auVar4._0_4_ / _LC5;
   if (0.0 <= auVar4._0_4_) {
      return auVar4._0_8_;
   }

   auVar5._0_4_ = auVar4._0_4_ + _LC8;
   auVar5._4_12_ = auVar4._4_12_;
   return auVar5._0_8_;
}
/* Color::get_s() const */float Color::get_s(Color *this) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   fVar1 = *(float*)( this + 4 );
   fVar2 = *(float*)this;
   fVar3 = *(float*)( this + 8 );
   if (fVar1 <= fVar2) {
      fVar4 = fVar2;
      if (fVar1 < fVar3) {
         fVar5 = fVar3;
         fVar6 = fVar1;
         if (fVar2 <= fVar1) goto LAB_00100a59;
      }
 else {
         fVar6 = fVar3;
         if (fVar2 <= fVar1) goto LAB_00100a4c;
      }

   }
 else {
      fVar6 = fVar2;
      fVar4 = fVar1;
      if (fVar3 <= fVar2) {
         LAB_00100a4c:fVar6 = fVar3;
         fVar4 = fVar1;
      }

   }

   fVar5 = fVar4;
   if (fVar4 <= fVar3) {
      fVar5 = fVar3;
   }

   LAB_00100a59:if (fVar5 == 0.0) {
      return 0.0;
   }

   return ( fVar5 - fVar6 ) / fVar5;
}
/* Color::get_v() const */float Color::get_v(Color *this) {
   float fVar1;
   fVar1 = *(float*)this;
   if (*(float*)this <= *(float*)( this + 4 )) {
      fVar1 = *(float*)( this + 4 );
   }

   if (fVar1 <= *(float*)( this + 8 )) {
      fVar1 = *(float*)( this + 8 );
   }

   return fVar1;
}
/* Color::set_hsv(float, float, float, float) */void Color::set_hsv(Color *this, float param_1, float param_2, float param_3, float param_4) {
   *(float*)( this + 0xc ) = param_4;
   if (param_2 != 0.0) {
      set_hsv(param_1, param_2, param_3, 0.0);
      return;
   }

   *(float*)( this + 8 ) = param_3;
   *(ulong*)this = CONCAT44(param_3, param_3);
   return;
}
/* Color::set_ok_hsl(float, float, float, float) */void Color::set_ok_hsl(float param_1, float param_2, float param_3, float param_4) {
   undefined8 *in_RDI;
   float fVar1;
   uint uVar2;
   float fVar3;
   float fVar4;
   undefined1 auVar5[12];
   float local_14;
   float fStack_10;
   auVar5 = ok_color::okhsl_to_srgb();
   fVar4 = auVar5._8_4_;
   fStack_10 = auVar5._4_4_;
   local_14 = auVar5._0_4_;
   if (param_4 < 0.0) {
      fVar3 = 0.0;
   }
 else {
      fVar3 = _LC8;
      if (param_4 <= _LC8) {
         fVar3 = param_4;
      }

   }

   uVar2 = 0;
   if (0.0 <= fVar4) {
      uVar2 = ~-(uint)(fVar4 <= _LC8) & (uint)_LC8 | (uint)fVar4 & -(uint)(fVar4 <= _LC8);
   }

   if (fStack_10 < 0.0) {
      fVar4 = 0.0;
   }
 else {
      fVar4 = _LC8;
      if (fStack_10 <= _LC8) {
         fVar4 = fStack_10;
      }

   }

   if (local_14 < 0.0) {
      fVar1 = 0.0;
   }
 else {
      fVar1 = _LC8;
      if (local_14 <= _LC8) {
         fVar1 = local_14;
      }

   }

   *in_RDI = CONCAT44(fVar4, fVar1);
   in_RDI[1] = CONCAT44(fVar3, uVar2);
   return;
}
/* Color::is_equal_approx(Color const&) const */undefined4 Color::is_equal_approx(Color *this, Color *param_1) {
   float fVar1;
   float fVar2;
   undefined4 uVar3;
   float fVar4;
   fVar1 = *(float*)this;
   if (*(float*)param_1 == fVar1) {
      LAB_00100c2f:fVar1 = *(float*)( this + 4 );
      if (*(float*)( param_1 + 4 ) != fVar1) {
         fVar4 = _LC117;
         if (_LC117 <= ABS(fVar1) * _LC117) {
            fVar4 = ABS(fVar1) * _LC117;
         }

         if (fVar4 <= ABS(fVar1 - *(float*)( param_1 + 4 ))) goto LAB_00100d10;
      }

      fVar1 = *(float*)( this + 8 );
      if (*(float*)( param_1 + 8 ) != fVar1) {
         fVar4 = _LC117;
         if (_LC117 <= ABS(fVar1) * _LC117) {
            fVar4 = ABS(fVar1) * _LC117;
         }

         if (fVar4 <= ABS(fVar1 - *(float*)( param_1 + 8 ))) goto LAB_00100d10;
      }

      fVar1 = *(float*)( this + 0xc );
      uVar3 = 1;
      if (*(float*)( param_1 + 0xc ) != fVar1) {
         fVar2 = ABS(fVar1 - *(float*)( param_1 + 0xc ));
         fVar4 = _LC117;
         if (_LC117 <= ABS(fVar1) * _LC117) {
            fVar4 = ABS(fVar1) * _LC117;
         }

         return CONCAT31(( int3 )((uint)fVar2 >> 8), fVar2 < fVar4);
      }

   }
 else {
      fVar4 = _LC117;
      if (_LC117 <= ABS(fVar1) * _LC117) {
         fVar4 = ABS(fVar1) * _LC117;
      }

      if (ABS(fVar1 - *(float*)param_1) < fVar4) goto LAB_00100c2f;
      LAB_00100d10:uVar3 = 0;
   }

   return uVar3;
}
/* Color::clamp(Color const&, Color const&) const */undefined1  [16] __thiscallColor::clamp(Color *this, Color *param_1, Color *param_2) {
   float fVar1;
   float fVar2;
   float fVar3;
   undefined1 auVar4[16];
   float fVar5;
   float fVar6;
   fVar1 = *(float*)( this + 0xc );
   fVar6 = *(float*)( param_1 + 0xc );
   if (( *(float*)( param_1 + 0xc ) <= fVar1 ) && ( fVar6 = *(float*)( param_2 + 0xc ) ),fVar1 <= *(float*)( param_2 + 0xc )) {
      fVar6 = fVar1;
   }

   fVar1 = *(float*)( this + 8 );
   fVar3 = *(float*)( param_1 + 8 );
   if (( *(float*)( param_1 + 8 ) <= fVar1 ) && ( fVar3 = *(float*)( param_2 + 8 ) ),fVar1 <= *(float*)( param_2 + 8 )) {
      fVar3 = fVar1;
   }

   fVar1 = *(float*)( this + 4 );
   fVar5 = *(float*)( param_1 + 4 );
   if (( *(float*)( param_1 + 4 ) <= fVar1 ) && ( fVar5 = *(float*)( param_2 + 4 ) ),fVar1 <= *(float*)( param_2 + 4 )) {
      fVar5 = fVar1;
   }

   fVar1 = *(float*)this;
   fVar2 = *(float*)param_1;
   if (( *(float*)param_1 <= fVar1 ) && ( fVar2 = *(float*)param_2 ),fVar1 <= *(float*)param_2) {
      fVar2 = fVar1;
   }

   auVar4._4_4_ = fVar5;
   auVar4._0_4_ = fVar2;
   auVar4._8_4_ = fVar3;
   auVar4._12_4_ = fVar6;
   return auVar4;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Color::invert() */void Color::invert(Color *this) {
   *(ulong*)this = CONCAT44(_UNK_0010763c - (float)( ( ulong ) * (undefined8*)this >> 0x20 ), _LC8 - (float)*(undefined8*)this);
   *(float*)( this + 8 ) = _LC8 - *(float*)( this + 8 );
   return;
}
/* Color::hex(unsigned int) */undefined1[16];Color::hex(uint param_1) {
   ulong uVar1;
   undefined1 auVar2[16];
   ulong uVar3;
   undefined1 auVar4[16];
   uVar3 = CONCAT44(param_1, param_1 >> 8) & 0xff000000ff;
   uVar1 = CONCAT44(param_1 >> 0x10, param_1 >> 0x18) & 0xffffffffff;
   auVar2._0_4_ = (float)(int)uVar1;
   auVar2._4_4_ = (float)(int)( uVar1 >> 0x20 );
   auVar2._8_4_ = (float)(int)uVar3;
   auVar2._12_4_ = (float)(int)( uVar3 >> 0x20 );
   auVar4._4_4_ = _LC113;
   auVar4._0_4_ = _LC113;
   auVar4._8_4_ = _LC113;
   auVar4._12_4_ = _LC113;
   auVar2 = divps(auVar2, auVar4);
   return auVar2;
}
/* Color::hex64(unsigned long) */undefined1[16];Color::hex64(ulong param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   auVar1._0_4_ = (float)( param_1 >> 0x30 );
   auVar1._4_4_ = (float)( param_1 >> 0x20 & 0xffff );
   auVar1._12_4_ = (float)( param_1 & 0xffff );
   auVar1._8_4_ = (float)( param_1 >> 0x10 & 0xffff );
   auVar2._4_4_ = _LC114;
   auVar2._0_4_ = _LC114;
   auVar2._8_4_ = _LC114;
   auVar2._12_4_ = _LC114;
   auVar1 = divps(auVar1, auVar2);
   return auVar1;
}
/* Color::inverted() const */void Color::inverted(void) {
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Color::html(String const&) */undefined1[16];Color::html(String *param_1) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined1 auVar4[16];
   int *piVar5;
   int *piVar6;
   int iVar7;
   int iVar8;
   long lVar9;
   char *pcVar10;
   undefined8 uVar11;
   ulong uVar12;
   long in_FS_OFFSET;
   bool bVar13;
   float local_88;
   float fStack_84;
   float fStack_80;
   float fStack_7c;
   int *local_60;
   long local_58;
   long local_50;
   int *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (int*)0x0;
   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00100f53;
         LOCK();
         lVar9 = *plVar1;
         bVar13 = lVar2 == lVar9;
         if (bVar13) {
            *plVar1 = lVar2 + 1;
            lVar9 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar13 );
      if (lVar9 != -1) {
         local_60 = *(int**)param_1;
      }

      LAB_00100f53:if (local_60 != (int*)0x0) {
         uVar12 = *(ulong*)( local_60 + -2 );
         if ((uint)uVar12 < 2) {
            local_88 = 0.0;
            fStack_84 = 0.0;
            fStack_80 = 0.0;
            fStack_7c = 1.0;
         }
 else {
            if ((long)uVar12 < 1) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, uVar12, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            if (*local_60 == 0x23) {
               String::substr((int)&local_48, (int)&local_60);
               piVar6 = local_48;
               piVar5 = local_60;
               if (local_60 == local_48) {
                  if (local_48 != (int*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_48 + -4 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_48 = (int*)0x0;
                        Memory::free_static(piVar6 + -4, false);
                     }

                     goto LAB_001012af;
                  }

               }
 else {
                  if (local_60 != (int*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_60 + -4 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_60 = (int*)0x0;
                        Memory::free_static(piVar5 + -4, false);
                     }

                  }

                  local_60 = local_48;
                  LAB_001012af:if (local_60 != (int*)0x0) {
                     uVar12 = (ulong)(uint)local_60[-2];
                     goto LAB_00100ff2;
                  }

               }

               LAB_001010ed:local_50 = 0;
               local_48 = (int*)&_LC120;
               local_40 = 1;
               String::parse_latin1((StrRange*)&local_50);
               ::operator +((char*)&local_58, (String*)"Invalid color code: ");
               String::operator +((String*)&local_48, (String*)&local_58);
               pcVar10 = "Method/function failed. Returning: Color()";
               uVar11 = 0x15a;
               LAB_00101158:_err_print_error(&_LC124, "core/math/color.cpp", uVar11, pcVar10, &local_48, 0, 0);
               piVar5 = local_48;
               if (local_48 != (int*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_48 + -4 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_48 = (int*)0x0;
                     Memory::free_static(piVar5 + -4, false);
                  }

               }

               lVar2 = local_58;
               if (local_58 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_58 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_58 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }

               }

               lVar2 = local_50;
               if (local_50 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_50 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_50 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }

               }

               fStack_80 = 0.0;
               fStack_7c = 1.0;
               local_88 = 0.0;
               fStack_84 = 0.0;
            }
 else {
               LAB_00100ff2:iVar7 = (int)uVar12;
               if (iVar7 == 0) goto LAB_001010ed;
               if (iVar7 == 9) {
                  bVar13 = true;
                  LAB_001013e6:iVar7 = _parse_col4((String*)&local_60, 0);
                  iVar8 = _parse_col4((String*)&local_60, 1);
                  local_88 = (float)( iVar7 * 0x10 + iVar8 ) / _LC113;
                  iVar7 = _parse_col4((String*)&local_60, 2);
                  iVar8 = _parse_col4((String*)&local_60, 3);
                  fStack_84 = (float)( iVar7 * 0x10 + iVar8 ) / _LC113;
                  iVar7 = _parse_col4((String*)&local_60, 4);
                  iVar8 = _parse_col4((String*)&local_60, 5);
                  fStack_80 = (float)( iVar7 * 0x10 + iVar8 ) / _LC113;
                  fStack_7c = _LC8;
                  if (bVar13) {
                     iVar7 = _parse_col4((String*)&local_60, 6);
                     iVar8 = _parse_col4((String*)&local_60, 7);
                     fStack_7c = (float)( iVar7 * 0x10 + iVar8 ) / _LC113;
                  }

               }
 else {
                  if (iVar7 == 7) {
                     bVar13 = false;
                     goto LAB_001013e6;
                  }

                  if (iVar7 == 5) {
                     iVar7 = _parse_col4((String*)&local_60, 0);
                     local_88 = (float)iVar7 / __LC129;
                     iVar7 = _parse_col4((String*)&local_60, 1);
                     fStack_84 = (float)iVar7 / __LC129;
                     iVar7 = _parse_col4((String*)&local_60, 2);
                     fStack_80 = (float)iVar7 / __LC129;
                     iVar7 = _parse_col4((String*)&local_60, 3);
                     fStack_7c = (float)iVar7 / __LC129;
                  }
 else {
                     if (iVar7 != 4) goto LAB_001010ed;
                     iVar7 = _parse_col4((String*)&local_60, 0);
                     local_88 = (float)iVar7 / __LC129;
                     iVar7 = _parse_col4((String*)&local_60, 1);
                     fStack_84 = (float)iVar7 / __LC129;
                     iVar7 = _parse_col4((String*)&local_60, 2);
                     fStack_80 = (float)iVar7 / __LC129;
                     fStack_7c = _LC8;
                  }

               }

               if (local_88 < 0.0) {
                  local_50 = 0;
                  local_48 = (int*)&_LC120;
                  local_40 = 1;
                  String::parse_latin1((StrRange*)&local_50);
                  ::operator +((char*)&local_58, (String*)"Invalid color code: ");
                  String::operator +((String*)&local_48, (String*)&local_58);
                  pcVar10 = "Condition \"r < 0.0f\" is true. Returning: Color()";
                  uVar11 = 0x16d;
                  goto LAB_00101158;
               }

               if (fStack_84 < 0.0) {
                  local_50 = 0;
                  local_48 = (int*)&_LC120;
                  local_40 = 1;
                  String::parse_latin1((StrRange*)&local_50);
                  ::operator +((char*)&local_58, (String*)"Invalid color code: ");
                  String::operator +((String*)&local_48, (String*)&local_58);
                  pcVar10 = "Condition \"g < 0.0f\" is true. Returning: Color()";
                  uVar11 = 0x16e;
                  goto LAB_00101158;
               }

               if (fStack_80 < 0.0) {
                  local_50 = 0;
                  local_48 = (int*)&_LC120;
                  local_40 = 1;
                  String::parse_latin1((StrRange*)&local_50);
                  ::operator +((char*)&local_58, (String*)"Invalid color code: ");
                  String::operator +((String*)&local_48, (String*)&local_58);
                  pcVar10 = "Condition \"b < 0.0f\" is true. Returning: Color()";
                  uVar11 = 0x16f;
                  goto LAB_00101158;
               }

               if (fStack_7c < 0.0) {
                  local_50 = 0;
                  local_48 = (int*)&_LC120;
                  local_40 = 1;
                  String::parse_latin1((StrRange*)&local_50);
                  ::operator +((char*)&local_58, (String*)"Invalid color code: ");
                  String::operator +((String*)&local_48, (String*)&local_58);
                  pcVar10 = "Condition \"a < 0.0f\" is true. Returning: Color()";
                  uVar11 = 0x170;
                  goto LAB_00101158;
               }

            }

            if (local_60 == (int*)0x0) goto LAB_00100f9c;
         }

         piVar5 = local_60;
         LOCK();
         plVar1 = (long*)( local_60 + -4 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = (int*)0x0;
            Memory::free_static(piVar5 + -4, false);
         }

         goto LAB_00100f9c;
      }

   }

   local_88 = 0.0;
   fStack_84 = 0.0;
   fStack_80 = 0.0;
   fStack_7c = 1.0;
   LAB_00100f9c:auVar4._4_4_ = fStack_84;
   auVar4._0_4_ = local_88;
   auVar4._8_4_ = fStack_80;
   auVar4._12_4_ = fStack_7c;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return auVar4;
}
/* Color::html_is_valid(String const&) */ulong Color::html_is_valid(String *param_1) {
   long *plVar1;
   code *pcVar2;
   int *piVar3;
   int *piVar4;
   int iVar5;
   long lVar6;
   int iVar7;
   undefined8 unaff_RBP;
   ulong uVar8;
   int iVar9;
   long in_FS_OFFSET;
   bool bVar11;
   int *local_40;
   int *local_38;
   long local_30;
   long lVar10;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = (int*)0x0;
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar10 = *plVar1;
         if (lVar10 == 0) goto LAB_00101750;
         LOCK();
         lVar6 = *plVar1;
         bVar11 = lVar10 == lVar6;
         if (bVar11) {
            *plVar1 = lVar10 + 1;
            lVar6 = lVar10;
         }

         UNLOCK();
      }
 while ( !bVar11 );
      if (lVar6 != -1) {
         local_40 = *(int**)param_1;
      }

      LAB_00101750:if (local_40 != (int*)0x0) {
         lVar10 = *(long*)( local_40 + -2 );
         if ((uint)lVar10 < 2) {
            LAB_00101763:uVar8 = 0;
         }
 else {
            if (lVar10 < 1) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar10, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            if (*local_40 == 0x23) {
               String::substr((int)&local_38, (int)&local_40);
               piVar4 = local_38;
               piVar3 = local_40;
               if (local_40 == local_38) {
                  if (local_38 == (int*)0x0) goto LAB_00101838;
                  LOCK();
                  plVar1 = (long*)( local_38 + -4 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_38 = (int*)0x0;
                     Memory::free_static(piVar4 + -4, false);
                  }

               }
 else {
                  if (local_40 != (int*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_40 + -4 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_40 = (int*)0x0;
                        Memory::free_static(piVar3 + -4, false);
                     }

                  }

                  local_40 = local_38;
               }

               if (local_40 == (int*)0x0) goto LAB_00101838;
               lVar10 = *(long*)( local_40 + -2 );
            }

            iVar9 = (int)lVar10;
            if (iVar9 == 0) goto LAB_00101763;
            bVar11 = ( iVar9 - 7U & 0xfffffffd ) != 0 && 1 < iVar9 - 4U;
            uVar8 = CONCAT71(( int7 )((ulong)unaff_RBP >> 8), bVar11);
            if (bVar11) goto LAB_00101763;
            iVar7 = 0;
            do {
               iVar5 = _parse_col4((String*)&local_40, iVar7);
               if (iVar5 == -1) goto LAB_0010180f;
               iVar7 = iVar7 + 1;
            }
 while ( iVar7 < iVar9 + -1 );
            uVar8 = 1;
            LAB_0010180f:if (local_40 == (int*)0x0) goto LAB_00101786;
         }

         piVar3 = local_40;
         LOCK();
         plVar1 = (long*)( local_40 + -4 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_40 = (int*)0x0;
            Memory::free_static(piVar3 + -4, false);
         }

         goto LAB_00101786;
      }

   }

   LAB_00101838:uVar8 = 0;
   LAB_00101786:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8 & 0xffffffff;
}
/* Color::get_named_color_count() */undefined8 Color::get_named_color_count(void) {
   return 0x92;
}
/* Color::get_named_color_name(int) */Color * __thiscall Color::get_named_color_name(Color *this,int param_1){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((uint)param_1 < 0x92) {
      *(undefined8*)this = 0;
      if ((char*)( &named_colors )[(long)param_1 * 3] != (char*)0x0) {
         strlen((char*)( &named_colors )[(long)param_1 * 3]);
      }

      String::parse_latin1((StrRange*)this);
   }
 else {
      _err_print_index_error("get_named_color_name", "core/math/color.cpp", 0x1be, (long)param_1, 0x92, "p_idx", "get_named_color_count()", "", false, false);
      *(undefined8*)this = 0;
      String::parse_latin1((StrRange*)this);
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Color::get_named_color(int) */undefined1[16];Color::get_named_color(int param_1) {
   undefined1 auVar1[16];
   if ((uint)param_1 < 0x92) {
      auVar1._8_8_ = *(undefined8*)( &DAT_00102ed0 + (long)param_1 * 0x18 );
      auVar1._0_8_ = *(undefined8*)( &DAT_00102ec8 + (long)param_1 * 0x18 );
      return auVar1;
   }

   _err_print_index_error("get_named_color", "core/math/color.cpp", 0x1c3, (long)param_1, 0x92, "p_idx", "get_named_color_count()", "", false, false);
   return ZEXT816(0x3f80000000000000) << 0x40;
}
/* Color::from_hsv(float, float, float, float) */undefined1[16];Color::from_hsv(float param_1, float param_2, float param_3, float param_4) {
   long lVar1;
   undefined1 auVar2[16];
   long in_FS_OFFSET;
   undefined8 local_28;
   undefined4 local_20;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 0.0) {
      local_28 = CONCAT44(param_3, param_3);
      local_20 = param_3;
   }
 else {
      set_hsv(param_1, param_2, param_3, 0.0);
   }

   auVar2._8_4_ = local_20;
   auVar2._0_8_ = local_28;
   auVar2._12_4_ = param_4;
   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return auVar2;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Color::from_rgbe9995(unsigned int) */void Color::from_rgbe9995(uint param_1) {
   powf(_LC115, ( (float)( param_1 >> 0x1b ) - __LC129 ) - __LC134);
   return;
}
/* Color::from_rgba8(long, long, long, long) */undefined1[16];Color::from_rgba8(long param_1, long param_2, long param_3, long param_4) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   auVar1._0_4_ = (float)param_1;
   auVar1._4_4_ = (float)param_2;
   auVar1._12_4_ = (float)param_4;
   auVar1._8_4_ = (float)param_3;
   auVar2._4_4_ = _LC113;
   auVar2._0_4_ = _LC113;
   auVar2._8_4_ = _LC113;
   auVar2._12_4_ = _LC113;
   auVar1 = divps(auVar1, auVar2);
   return auVar1;
}
/* Color::operator String() const */Color * __thiscall Color::operator_cast_to_String(Color *this){
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   float *in_RSI;
   long in_FS_OFFSET;
   long local_c8;
   long local_c0;
   long local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = &_LC136;
   local_60 = 0;
   local_50 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::num((double)in_RSI[3], (int)&local_68);
   local_58 = &_LC137;
   local_78 = 0;
   local_50 = 2;
   String::parse_latin1((StrRange*)&local_78);
   String::num((double)in_RSI[2], (int)&local_88);
   local_58 = &_LC137;
   local_98 = 0;
   local_50 = 2;
   String::parse_latin1((StrRange*)&local_98);
   String::num((double)in_RSI[1], (int)&local_a8);
   local_58 = &_LC137;
   local_b8 = 0;
   local_50 = 2;
   String::parse_latin1((StrRange*)&local_b8);
   String::num((double)*in_RSI, (int)&local_c8);
   ::operator +((char*)&local_c0, (String*)&_LC138);
   String::operator +((String*)&local_b0, (String*)&local_c0);
   String::operator +((String*)&local_a0, (String*)&local_b0);
   String::operator +((String*)&local_90, (String*)&local_a0);
   String::operator +((String*)&local_80, (String*)&local_90);
   String::operator +((String*)&local_70, (String*)&local_80);
   String::operator +((String*)&local_58, (String*)&local_70);
   String::operator +((String*)this, (String*)&local_58);
   puVar3 = local_58;
   if (local_58 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = (undefined*)0x0;
         Memory::free_static(puVar3 + -0x10, false);
      }

   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar1 = (long*)( local_b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_c0;
   if (local_c0 != 0) {
      LOCK();
      plVar1 = (long*)( local_c0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c0 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_c8;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar1 = (long*)( local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_a8;
   if (local_a8 != 0) {
      LOCK();
      plVar1 = (long*)( local_a8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a8 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Color::TEMPNAMEPLACEHOLDERVALUE(Color const&) const */undefined1  [16] __thiscallColor::operator +(Color *this, Color *param_1) {
   undefined1 auVar1[16];
   auVar1._4_4_ = *(float*)( this + 4 ) + *(float*)( param_1 + 4 );
   auVar1._0_4_ = *(float*)this + *(float*)param_1;
   auVar1._8_4_ = *(float*)( this + 8 ) + *(float*)( param_1 + 8 );
   auVar1._12_4_ = *(float*)( this + 0xc ) + *(float*)( param_1 + 0xc );
   return auVar1;
}
/* Color::TEMPNAMEPLACEHOLDERVALUE(Color const&) */void Color::operator +=(Color *this, Color *param_1) {
   float fVar1;
   float fVar2;
   float fVar3;
   fVar1 = *(float*)( param_1 + 4 );
   fVar2 = *(float*)( param_1 + 8 );
   fVar3 = *(float*)( param_1 + 0xc );
   *(float*)this = *(float*)param_1 + *(float*)this;
   *(float*)( this + 4 ) = fVar1 + *(float*)( this + 4 );
   *(float*)( this + 8 ) = fVar2 + *(float*)( this + 8 );
   *(float*)( this + 0xc ) = fVar3 + *(float*)( this + 0xc );
   return;
}
/* Color::TEMPNAMEPLACEHOLDERVALUE(Color const&) const */undefined1  [16] __thiscallColor::operator -(Color *this, Color *param_1) {
   undefined1 auVar1[16];
   auVar1._4_4_ = *(float*)( this + 4 ) - *(float*)( param_1 + 4 );
   auVar1._0_4_ = *(float*)this - *(float*)param_1;
   auVar1._8_4_ = *(float*)( this + 8 ) - *(float*)( param_1 + 8 );
   auVar1._12_4_ = *(float*)( this + 0xc ) - *(float*)( param_1 + 0xc );
   return auVar1;
}
/* Color::TEMPNAMEPLACEHOLDERVALUE(Color const&) */void Color::operator -=(Color *this, Color *param_1) {
   float fVar1;
   float fVar2;
   float fVar3;
   fVar1 = *(float*)( param_1 + 4 );
   fVar2 = *(float*)( param_1 + 8 );
   fVar3 = *(float*)( param_1 + 0xc );
   *(float*)this = *(float*)this - *(float*)param_1;
   *(float*)( this + 4 ) = *(float*)( this + 4 ) - fVar1;
   *(float*)( this + 8 ) = *(float*)( this + 8 ) - fVar2;
   *(float*)( this + 0xc ) = *(float*)( this + 0xc ) - fVar3;
   return;
}
/* Color::TEMPNAMEPLACEHOLDERVALUE(Color const&) const */undefined1  [16] __thiscallColor::operator *(Color *this, Color *param_1) {
   undefined1 auVar1[16];
   auVar1._4_4_ = *(float*)( this + 4 ) * *(float*)( param_1 + 4 );
   auVar1._0_4_ = *(float*)this * *(float*)param_1;
   auVar1._8_4_ = *(float*)( this + 8 ) * *(float*)( param_1 + 8 );
   auVar1._12_4_ = *(float*)( this + 0xc ) * *(float*)( param_1 + 0xc );
   return auVar1;
}
/* Color::TEMPNAMEPLACEHOLDERVALUE(float) const */undefined1  [16] __thiscallColor::operator *(Color *this, float param_1) {
   undefined1 auVar1[16];
   auVar1._4_4_ = *(float*)( this + 4 ) * param_1;
   auVar1._0_4_ = *(float*)this * param_1;
   auVar1._8_4_ = *(float*)( this + 8 ) * param_1;
   auVar1._12_4_ = *(float*)( this + 0xc ) * param_1;
   return auVar1;
}
/* Color::TEMPNAMEPLACEHOLDERVALUE(Color const&) */void Color::operator *=(Color *this, Color *param_1) {
   float fVar1;
   float fVar2;
   float fVar3;
   fVar1 = *(float*)( param_1 + 4 );
   fVar2 = *(float*)( param_1 + 8 );
   fVar3 = *(float*)( param_1 + 0xc );
   *(float*)this = *(float*)param_1 * *(float*)this;
   *(float*)( this + 4 ) = fVar1 * *(float*)( this + 4 );
   *(float*)( this + 8 ) = fVar2 * *(float*)( this + 8 );
   *(float*)( this + 0xc ) = fVar3 * *(float*)( this + 0xc );
   return;
}
/* Color::TEMPNAMEPLACEHOLDERVALUE(float) */void Color::operator *=(Color *this, float param_1) {
   *(float*)this = param_1 * *(float*)this;
   for (int i = 0; i < 3; i++) {
      *(float*)( this + ( 4*i + 4 ) ) = param_1 * *(float*)( this + ( 4*i + 4 ) );
   }

   return;
}
/* Color::TEMPNAMEPLACEHOLDERVALUE(Color const&) const */undefined1  [16] __thiscallColor::operator /(Color *this, Color *param_1) {
   undefined1 auVar1[16];
   auVar1 = divps(*(undefined1(*) [16])this, *(undefined1(*) [16])param_1);
   return auVar1;
}
/* Color::TEMPNAMEPLACEHOLDERVALUE(float) const */undefined1  [16] __thiscallColor::operator /(Color *this, float param_1) {
   undefined1 auVar1[16];
   auVar1._4_4_ = param_1;
   auVar1._0_4_ = param_1;
   auVar1._8_4_ = param_1;
   auVar1._12_4_ = param_1;
   auVar1 = divps(*(undefined1(*) [16])this, auVar1);
   return auVar1;
}
/* Color::TEMPNAMEPLACEHOLDERVALUE(Color const&) */void Color::operator /=(Color *this, Color *param_1) {
   undefined1 auVar1[16];
   auVar1 = divps(*(undefined1(*) [16])this, *(undefined1(*) [16])param_1);
   *(undefined1(*) [16])this = auVar1;
   return;
}
/* Color::TEMPNAMEPLACEHOLDERVALUE(float) */void Color::operator /=(Color *this, float param_1) {
   undefined1 auVar1[16];
   auVar1._4_4_ = param_1;
   auVar1._0_4_ = param_1;
   auVar1._8_4_ = param_1;
   auVar1._12_4_ = param_1;
   auVar1 = divps(*(undefined1(*) [16])this, auVar1);
   *(undefined1(*) [16])this = auVar1;
   return;
}
/* Color::TEMPNAMEPLACEHOLDERVALUE() const */undefined1  [16] __thiscallColor::operator -(Color *this) {
   undefined1 auVar1[16];
   auVar1._4_4_ = _LC8 - *(float*)( this + 4 );
   auVar1._0_4_ = _LC8 - *(float*)this;
   auVar1._8_4_ = _LC8 - *(float*)( this + 8 );
   auVar1._12_4_ = _LC8 - *(float*)( this + 0xc );
   return auVar1;
}
/* Color::from_ok_hsl(float, float, float, float) */undefined1[16];Color::from_ok_hsl(float param_1, float param_2, float param_3, float param_4) {
   long lVar1;
   undefined1 auVar2[16];
   long in_FS_OFFSET;
   undefined8 local_28;
   undefined8 local_20;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   set_ok_hsl(param_1, param_2, param_3, param_4);
   auVar2._8_8_ = local_20;
   auVar2._0_8_ = local_28;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return auVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Color::get_ok_hsl_h() const */float Color::get_ok_hsl_h(Color *this) {
   float fVar1;
   float fVar2;
   fVar2 = (float)ok_color::srgb_to_okhsl(*(ok_color**)this);
   if (fVar2 < 0.0) {
      return 0.0;
   }

   fVar1 = _LC8;
   if (fVar2 <= _LC8) {
      fVar1 = fVar2;
   }

   return fVar1;
}
/* Color::get_ok_hsl_s() const */float Color::get_ok_hsl_s(Color *this) {
   float fVar1;
   float extraout_XMM0_Db;
   ok_color::srgb_to_okhsl(*(ok_color**)this);
   if (extraout_XMM0_Db < 0.0) {
      return 0.0;
   }

   fVar1 = _LC8;
   if (extraout_XMM0_Db <= _LC8) {
      fVar1 = extraout_XMM0_Db;
   }

   return fVar1;
}
/* Color::get_ok_hsl_l() const */uint Color::get_ok_hsl_l(Color *this) {
   float fVar1;
   fVar1 = *(float*)( this + 8 );
   ok_color::srgb_to_okhsl(*(ok_color**)this);
   if (fVar1 < 0.0) {
      return 0;
   }

   return ~-(uint)(fVar1 <= _LC8) & (uint)_LC8 | (uint)fVar1 & -(uint)(fVar1 <= _LC8);
}
/* Color::find_named_color(String const&) */undefined4 Color::find_named_color(String *param_1) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   char *pcVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   char *pcVar13;
   char cVar14;
   uint uVar15;
   size_t sVar16;
   int *piVar17;
   uint uVar18;
   uint uVar19;
   long lVar20;
   undefined4 uVar21;
   int iVar22;
   long lVar23;
   undefined8 *puVar24;
   ulong uVar25;
   uint uVar26;
   long in_FS_OFFSET;
   bool bVar27;
   char *local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (char*)0x0;
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar3 = *plVar1;
         if (lVar3 == 0) goto LAB_00102578;
         LOCK();
         lVar20 = *plVar1;
         bVar27 = lVar3 == lVar20;
         if (bVar27) {
            *plVar1 = lVar3 + 1;
            lVar20 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar27 );
      if (lVar20 != -1) {
         local_68 = *(char**)param_1;
      }

   }

   LAB_00102578:String::replace((char*)&local_58, (char*)&local_68);
   pcVar13 = local_58;
   pcVar4 = local_68;
   if (local_68 == local_58) {
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = (char*)0x0;
            Memory::free_static(pcVar13 + -0x10, false);
         }

      }

   }
 else {
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      local_68 = local_58;
   }

   for (int i = 0; i < 4; i++) {
      String::replace((char*)&local_58, (char*)&local_68);
      pcVar13 = local_58;
      pcVar4 = local_68;
      if (local_68 == local_58) {
         if (local_68 != (char*)0) {
            LOCK();
            plVar1 = (long*)( local_68 + -16 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (char*)0;
               Memory::free_static(pcVar13 + -16, false);
            }

         }

      }
 else {
         if (local_68 != (char*)0) {
            LOCK();
            plVar1 = (long*)( local_68 + -16 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = (char*)0;
               Memory::free_static(pcVar4 + -16, false);
            }

         }

         local_68 = local_58;
      }

   }

   String::to_upper();
   pcVar13 = local_58;
   pcVar4 = local_68;
   if (local_68 == local_58) {
      if (local_68 == (char*)0x0) goto LAB_0010279b;
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010279b;
      local_58 = (char*)0x0;
      Memory::free_static(pcVar13 + -0x10, false);
      if (find_named_color(String_const & ::named_colors_hashmap == '\0') goto LAB_00102849;
      LAB_001027aa:if (find_named_color(String_const & ::named_colors_hashmap._44_4_ != 0) goto LAB_001027b8;
      LAB_001028ad:puVar24 = &named_colors;
      iVar22 = 0;
      do {
         local_60 = 0;
         pcVar4 = (char*)*puVar24;
         sVar16 = 0;
         if (pcVar4 != (char*)0x0) {
            sVar16 = strlen(pcVar4);
         }

         local_58 = pcVar4;
         local_50 = sVar16;
         String::parse_latin1((StrRange*)&local_60);
         String::replace((char*)&local_58, (char*)&local_60);
         piVar17 = (int*)HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>::operator []((HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>*)find_named_color(String_const & ::named_colors_hashmap, (String*)&local_58));
         pcVar4 = local_58;
         *piVar17 = iVar22;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }

         }

         lVar3 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         iVar22 = iVar22 + 1;
         puVar24 = puVar24 + 3;
      }
 while ( iVar22 != 0x92 );
      if (( find_named_color(String_const&):: ) || ( find_named_color(String_const&):: )) goto LAB_001027c6;
   }
 else {
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      local_68 = local_58;
      LAB_0010279b:if (find_named_color(String_const & ::named_colors_hashmap != '\0') goto LAB_001027aa;
      LAB_00102849:iVar22 = __cxa_guard_acquire(&find_named_color(String_const & ::named_colors_hashmap));
      if (iVar22 == 0) goto LAB_001027aa;
      find_named_color(String_const &) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar21;
   }

   /* Color::named(String const&) */
   undefined1[16];
   Color::named(String *param_1) {
      long *plVar1;
      long lVar2;
      undefined *puVar3;
      int iVar4;
      undefined8 uVar5;
      undefined8 uVar6;
      long in_FS_OFFSET;
      undefined1 auVar7[16];
      long local_58;
      long local_50;
      undefined *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      iVar4 = find_named_color(param_1);
      if (iVar4 == -1) {
         local_40 = 1;
         local_48 = &_LC120;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         ::operator +((char*)&local_58, (String*)"Invalid color name: ");
         String::operator +((String*)&local_48, (String*)&local_58);
         _err_print_error("named", "core/math/color.cpp", 0x192, "Method/function failed. Returning: Color()", (String*)&local_48, 0, 0);
         puVar3 = local_48;
         if (local_48 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (undefined*)0x0;
               Memory::free_static(puVar3 + -0x10, false);
            }

         }

         lVar2 = local_58;
         if (local_58 != 0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         lVar2 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar1 = (long*)( local_50 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         uVar5 = 0x3f80000000000000;
         uVar6 = 0;
      }
 else {
         uVar6 = *(undefined8*)( &DAT_00102ec8 + (long)iVar4 * 0x18 );
         uVar5 = *(undefined8*)( &DAT_00102ed0 + (long)iVar4 * 0x18 );
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         auVar7._8_8_ = uVar5;
         auVar7._0_8_ = uVar6;
         return auVar7;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* Color::named(String const&, Color const&) */
   undefined1[16];
   Color::named(String *param_1, Color *param_2) {
      int iVar1;
      undefined1 auVar2[16];
      iVar1 = find_named_color(param_1);
      if (iVar1 != -1) {
         auVar2._8_8_ = *(undefined8*)( &DAT_00102ed0 + (long)iVar1 * 0x18 );
         auVar2._0_8_ = *(undefined8*)( &DAT_00102ec8 + (long)iVar1 * 0x18 );
         return auVar2;
      }

      return *(undefined1(*) [16])param_2;
   }

   /* Color::from_string(String const&, Color const&) */
   undefined8 Color::from_string(String *param_1, Color *param_2) {
      char cVar1;
      int iVar2;
      undefined8 uVar3;
      cVar1 = html_is_valid(param_1);
      if (cVar1 != '\0') {
         uVar3 = html(param_1);
         return uVar3;
      }

      iVar2 = find_named_color(param_1);
      if (iVar2 == -1) {
         uVar3 = *(undefined8*)param_2;
      }
 else {
         uVar3 = *(undefined8*)( &DAT_00102ec8 + (long)iVar2 * 0x18 );
      }

      return uVar3;
   }

   /* HashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, int> > >::~HashMap() */
   void HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>::~HashMap(HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>> *this) {
      long *plVar1;
      uint uVar2;
      long lVar3;
      long lVar4;
      void *pvVar5;
      pvVar5 = *(void**)( this + 8 );
      if (pvVar5 == (void*)0x0) {
         return;
      }

      if (*(int*)( this + 0x2c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x2c ) = 0;
            *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x10 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x10 ) + lVar4 ) = 0;
                  if (*(long*)( (long)pvVar5 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x10 );
                        *(undefined8*)( (long)pvVar5 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 8 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x2c ) = 0;
            *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) {
               return;
            }

         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
      return;
   }

   /* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */
   void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* ok_color::compute_max_saturation(float, float) */
   float ok_color::compute_max_saturation(float param_1, float param_2) {
      float fVar1;
      float fVar2;
      float fVar3;
      float fVar4;
      float fVar5;
      float fVar6;
      float fVar7;
      float fVar8;
      float fVar9;
      float fVar10;
      float fVar11;
      float fVar12;
      fVar1 = _LC18;
      fVar2 = _LC15;
      fVar3 = _LC16;
      fVar5 = _LC12;
      fVar4 = _LC17;
      fVar6 = _LC19;
      fVar9 = _LC13;
      fVar10 = _LC14;
      if (( _LC36 * param_1 - _LC37 * param_2 <= _LC8 ) && ( fVar1 = _LC34 ),fVar2 = _LC31,fVar3 = _LC32,fVar5 = _LC28,fVar4 = _LC33,fVar6 = _LC35,fVar9 = _LC29,fVar10 = _LC30,_LC8 < _LC38 * param_1 - _LC39 * param_2) {
         fVar1 = _LC26;
         fVar2 = _LC23;
         fVar3 = _LC24;
         fVar5 = _LC20;
         fVar4 = _LC25;
         fVar6 = _LC27;
         fVar9 = _LC21;
         fVar10 = _LC22;
      }

      fVar1 = fVar1 * param_1 + fVar6 + fVar4 * param_2 + fVar3 * param_1 * param_1 + fVar2 * param_1 * param_2;
      fVar12 = _LC40 * param_1 + _LC41 * param_2;
      fVar8 = _LC42 * param_1 - _LC43 * param_2;
      fVar3 = param_1 * _LC44 - param_2 * __LC45;
      fVar11 = fVar1 * fVar12 + _LC8;
      fVar7 = fVar1 * fVar8 + _LC8;
      fVar6 = fVar1 * fVar3 + _LC8;
      fVar4 = fVar11 * fVar11 * fVar11 * fVar10 + fVar7 * fVar7 * fVar7 * fVar9 + fVar6 * fVar6 * fVar6 * fVar5;
      fVar2 = fVar12 * _LC46 * fVar11 * fVar11 * fVar10 + fVar8 * _LC46 * fVar7 * fVar7 * fVar9 + _LC46 * fVar3 * fVar6 * fVar6 * fVar5;
      return fVar1 - ( fVar4 * fVar2 ) / ( fVar2 * fVar2 - ( fVar12 * _LC5 * fVar12 * fVar11 * fVar10 + fVar7 * fVar8 * fVar8 * _LC5 * fVar9 + _LC5 * fVar3 * fVar3 * fVar6 * fVar5 ) * fVar4 * _LC47 );
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* ok_color::find_gamut_intersection(float, float, float, float, float, ok_color::LC) */
   ulong ok_color::find_gamut_intersection(float param_1, float param_2, float param_3, float param_4, float param_5, undefined8 param_6) {
      float fVar1;
      undefined1 extraout_var[12];
      undefined1 auVar2[16];
      float fVar3;
      float fVar4;
      float fVar5;
      float fVar6;
      float fVar7;
      float fVar8;
      float fVar9;
      float fVar10;
      float fVar11;
      float fVar12;
      float fVar13;
      float fVar14;
      float fVar15;
      fVar3 = (float)( (ulong)param_6 >> 0x20 );
      fVar1 = (float)param_6;
      fVar5 = param_3 - param_5;
      fVar6 = ( param_5 - param_3 ) * fVar3;
      if (fVar5 * fVar3 - ( fVar1 - param_5 ) * param_4 <= 0.0) {
         return ( ulong )(uint)(( fVar3 * param_5 ) / ( fVar1 * param_4 + fVar6 ));
      }

      fVar8 = ( ( param_5 - _LC8 ) * fVar3 ) / ( ( fVar1 - _LC8 ) * param_4 + fVar6 );
      fVar14 = _LC40 * param_1 + _LC41 * param_2;
      fVar12 = _LC42 * param_1 - _LC43 * param_2;
      fVar3 = _LC44 * param_1 - param_2 * __LC45;
      fVar7 = param_4 * fVar14 + fVar5;
      fVar1 = param_4 * fVar12 + fVar5;
      fVar5 = param_4 * fVar3 + fVar5;
      param_4 = param_4 * fVar8;
      fVar6 = ( _LC8 - fVar8 ) * param_5 + param_3 * fVar8;
      fVar13 = fVar12 * param_4 + fVar6;
      fVar15 = fVar14 * param_4 + fVar6;
      fVar6 = param_4 * fVar3 + fVar6;
      fVar12 = fVar15 * fVar15 * fVar15;
      fVar11 = fVar13 * fVar13 * fVar13;
      fVar10 = fVar6 * fVar6 * fVar6;
      fVar9 = fVar1 * _LC46 * fVar13 * fVar13;
      fVar4 = _LC46 * fVar5 * fVar6 * fVar6;
      fVar13 = fVar1 * _LC5 * fVar1 * fVar13;
      fVar6 = _LC5 * fVar5 * fVar5 * fVar6;
      fVar1 = fVar7 * _LC46 * fVar15 * fVar15;
      fVar15 = fVar7 * _LC5 * fVar7 * fVar15;
      fVar7 = ( ( fVar12 * _LC14 - fVar11 * _LC50 ) + fVar10 * _LC12 ) - _LC8;
      fVar14 = fVar4 * _LC12 + ( fVar1 * _LC14 - fVar9 * _LC50 );
      fVar14 = fVar14 / ( fVar14 * fVar14 - _LC47 * fVar7 * ( ( _LC14 * fVar15 - _LC50 * fVar13 ) + _LC12 * fVar6 ) );
      fVar3 = ( ( fVar12 * _LC22 + fVar11 * _LC21 ) - fVar10 * _LC51 ) - _LC8;
      fVar5 = ( fVar1 * _LC22 + fVar9 * _LC21 ) - fVar4 * _LC51;
      fVar5 = fVar5 / ( fVar5 * fVar5 - _LC47 * fVar3 * ( ( _LC22 * fVar15 + _LC21 * fVar13 ) - _LC51 * fVar6 ) );
      fVar12 = ( ( fVar12 * _LC30 - fVar11 * _LC52 ) + fVar10 * _LC28 ) - _LC8;
      fVar4 = fVar4 * _LC28 + ( fVar1 * _LC30 - fVar9 * _LC52 );
      fVar4 = fVar4 / ( fVar4 * fVar4 - ( ( fVar15 * _LC30 - fVar13 * _LC52 ) + fVar6 * _LC28 ) * _LC47 * fVar12 );
      fVar1 = _LC48;
      if (0.0 <= fVar14) {
         fVar1 = (float)( (uint)fVar7 ^ _LC53 ) * fVar14;
      }

      fVar6 = _LC48;
      if (0.0 <= fVar5) {
         fVar6 = fVar5 * (float)( (uint)fVar3 ^ _LC53 );
      }

      fVar3 = _LC48;
      if (0.0 <= fVar4) {
         fVar3 = (float)( (uint)fVar12 ^ _LC53 ) * fVar4;
      }

      fVar3 = fminf(fVar6, fVar3);
      fVar1 = fminf(fVar1, fVar3);
      auVar2._0_4_ = fVar1 + fVar8;
      auVar2._4_12_ = extraout_var;
      return auVar2._0_8_;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* ok_color::get_Cs(float, float, float) */
   void ok_color::get_Cs(float param_1, float param_2, float param_3) {
      float fVar1;
      float fVar2;
      float fVar3;
      float fVar4;
      float fVar5;
      fVar1 = (float)compute_max_saturation(param_2, param_3);
      fVar4 = param_2 * fVar1;
      fVar3 = param_3 * fVar1;
      fVar2 = _LC40 * fVar4 + _LC8 + _LC41 * fVar3;
      fVar5 = ( _LC8 - _LC54 * fVar4 ) - _LC43 * fVar3;
      fVar2 = fVar2 * fVar2 * fVar2;
      fVar4 = ( _LC8 - fVar4 * __LC55 ) - fVar3 * __LC45;
      fVar5 = fVar5 * fVar5 * fVar5;
      fVar4 = fVar4 * fVar4 * fVar4;
      fVar3 = fmaxf(( fVar2 * _LC14 - fVar5 * _LC50 ) + fVar4 * _LC12, ( _LC22 * fVar2 + _LC21 * fVar5 ) - _LC51 * fVar4);
      fVar2 = fmaxf(fVar3, _LC28 * fVar4 + ( fVar2 * _LC30 - fVar5 * _LC52 ));
      fVar2 = cbrtf(_LC8 / fVar2);
      find_gamut_intersection();
      fVar3 = _LC8 - param_1;
      fminf(( ( fVar1 * fVar2 ) / ( _LC8 - fVar2 ) ) * fVar3, ( ( fVar1 * fVar2 ) / fVar2 ) * param_1);
      fVar2 = ( _LC8 / ( ( ( ( ( _LC56 * param_3 - __LC57 ) + _LC58 * param_2 ) * param_2 + ( _LC60 - _LC59 * param_3 ) ) * param_2 + ( _LC61 * param_3 - __LC62 ) ) * param_2 + _LC63 * param_3 + __LC64 ) + __LC65 ) * param_1;
      fVar1 = ( _LC8 / ( ( ( ( ( _LC67 - _LC66 * param_3 ) - _LC68 * param_2 ) * param_2 + ( _LC69 * param_3 - __LC70 ) ) * param_2 + _LC71 * param_3 + __LC72 ) * param_2 + ( _LC74 - param_3 * __LC73 ) ) + __LC75 ) * fVar3;
      fVar1 = _LC8 / ( _LC8 / ( fVar1 * fVar1 * fVar1 * fVar1 ) + _LC8 / ( fVar2 * fVar2 * fVar2 * fVar2 ) );
      if (fVar1 < 0.0) {
         fVar1 = sqrtf(fVar1);
      }
 else {
         fVar1 = SQRT(fVar1);
      }

      if (fVar1 < 0.0) {
         sqrtf(fVar1);
      }

      fVar1 = _LC8 / ( _LC8 / ( param_1 * __LC77 * param_1 * __LC77 ) + _LC8 / ( fVar3 * _LC78 * fVar3 * _LC78 ) );
      if (fVar1 < 0.0) {
         sqrtf(fVar1);
      }

      return;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* ok_color::okhsl_to_srgb(ok_color::HSL) */
   undefined8 ok_color::okhsl_to_srgb(undefined8 param_1, float param_2) {
      float fVar1;
      float fVar2;
      float fVar3;
      float fVar4;
      float fVar5;
      undefined1 auVar6[12];
      float local_40;
      float local_3c;
      undefined8 local_38;
      undefined8 local_20;
      undefined8 local_14;
      local_38._0_4_ = (float)param_1;
      local_38._4_4_ = (float)( (ulong)param_1 >> 0x20 );
      fVar2 = local_38._4_4_;
      if (param_2 == _LC8) {
         local_20 = CONCAT44(_UNK_0010763c, _LC8);
      }
 else {
         if (param_2 == 0.0) {
            return 0;
         }

         fVar1 = (float)local_38 * __LC80;
         local_38 = param_1;
         sincosf(fVar1, &local_3c, &local_40);
         fVar1 = ( param_2 * param_2 + _LC81 * param_2 ) / ( ( param_2 + __LC82 ) * _LC83 );
         auVar6 = get_Cs(fVar1, local_40, local_3c);
         local_14._0_4_ = auVar6._0_4_;
         local_14._4_4_ = auVar6._4_4_;
         if (_LC78 <= fVar2) {
            fVar2 = ( fVar2 - _LC78 ) / _LC85;
            local_14._0_4_ = ( _LC85 * local_14._4_4_ * local_14._4_4_ * _LC84 * _LC84 ) / (float)local_14;
            local_14._4_4_ = ( fVar2 * (float)local_14 ) / ( _LC8 - ( _LC8 - (float)local_14 / ( auVar6._8_4_ - local_14._4_4_ ) ) * fVar2 ) + local_14._4_4_;
         }
 else {
            local_14._4_4_ = ( fVar2 * _LC84 * _LC78 * (float)local_14 ) / ( _LC8 - fVar2 * _LC84 * ( _LC8 - ( _LC78 * (float)local_14 ) / local_14._4_4_ ) );
         }

         local_40 = local_40 * local_14._4_4_;
         local_14._4_4_ = local_14._4_4_ * local_3c;
         fVar2 = _LC40 * local_40 + fVar1 + _LC41 * local_14._4_4_;
         fVar3 = ( fVar1 - _LC54 * local_40 ) - _LC43 * local_14._4_4_;
         fVar5 = ( fVar1 - local_40 * __LC55 ) - local_14._4_4_ * __LC45;
         fVar2 = fVar2 * fVar2 * fVar2;
         fVar3 = fVar3 * fVar3 * fVar3;
         fVar5 = fVar5 * fVar5 * fVar5;
         fVar1 = ( _LC14 * fVar2 - _LC50 * fVar3 ) + _LC12 * fVar5;
         fVar4 = ( _LC22 * fVar2 + _LC21 * fVar3 ) - _LC51 * fVar5;
         fVar2 = fVar5 * _LC28 + ( fVar2 * _LC30 - fVar3 * _LC52 );
         local_14 = auVar6._0_8_;
         if (_LC86 < fVar1) {
            fVar1 = powf(fVar1, _LC88);
            fVar1 = fVar1 * _LC89 - __LC90;
         }
 else {
            fVar1 = fVar1 * __LC87;
         }

         local_20 = CONCAT44(local_20._4_4_, fVar1);
         if (_LC86 < fVar4) {
            fVar1 = powf(fVar4, _LC88);
            fVar4 = _LC89 * fVar1 - __LC90;
         }
 else {
            fVar4 = fVar4 * __LC87;
         }

         local_20 = CONCAT44(fVar4, (undefined4)local_20);
         if (fVar2 <= _LC86) {
            return local_20;
         }

         powf(fVar2, _LC88);
      }

      return local_20;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* ok_color::srgb_to_okhsl(ok_color::RGB) */
   undefined8 ok_color::srgb_to_okhsl(undefined8 param_1, float param_2) {
      float fVar1;
      float fVar2;
      float fVar3;
      undefined8 uVar4;
      float fVar5;
      float fVar6;
      undefined4 local_58;
      undefined4 local_38;
      undefined4 uStack_34;
      undefined4 local_14;
      undefined4 uStack_10;
      local_38 = (float)param_1;
      uStack_34 = (float)( (ulong)param_1 >> 0x20 );
      if (__LC91 < local_38) {
         local_58 = powf(( local_38 + __LC90 ) / _LC89, _LC92);
         if (uStack_34 <= __LC91) goto LAB_00105578;
      }
 else {
         local_58 = local_38 / __LC87;
         if (uStack_34 <= __LC91) {
            LAB_00105578:uStack_34 = uStack_34 / __LC87;
            goto joined_r0x001058f6;
         }

      }

      uStack_34 = powf(( uStack_34 + __LC90 ) / _LC89, _LC92);
      joined_r0x001058f6:if (__LC91 < param_2) {
         param_2 = powf(( param_2 + __LC90 ) / _LC89, _LC92);
      }
 else {
         param_2 = param_2 / __LC87;
      }

      fVar1 = cbrtf(local_58 * __LC93 + uStack_34 * __LC94 + param_2 * __LC95);
      fVar2 = cbrtf(local_58 * __LC96 + uStack_34 * __LC97 + param_2 * __LC98);
      fVar3 = cbrtf(local_58 * __LC99 + uStack_34 * __LC100 + param_2 * __LC101);
      fVar6 = ( _LC105 * fVar1 - _LC106 * fVar2 ) + _LC107 * fVar3;
      fVar5 = ( _LC102 * fVar1 + _LC103 * fVar2 ) - _LC104 * fVar3;
      fVar2 = ( fVar1 * __LC108 + fVar2 * __LC109 ) - fVar3 * __LC110;
      fVar3 = SQRT(fVar6 * fVar6 + fVar2 * fVar2);
      fVar1 = atan2f((float)( _LC53 ^ (uint)fVar2 ), (float)( (uint)fVar6 ^ _LC53 ));
      fVar6 = fVar6 / fVar3;
      fVar1 = ( _LC47 * fVar1 ) / __LC111 + _LC47;
      uVar4 = get_Cs(fVar5, fVar6, fVar2 / fVar3);
      uStack_10 = (float)( (ulong)uVar4 >> 0x20 );
      local_14 = (float)uVar4;
      if (uStack_10 <= fVar3) {
         local_14 = ( uStack_10 * _LC85 * uStack_10 * _LC84 * _LC84 ) / local_14;
         fVar2 = ( ( fVar3 - uStack_10 ) / ( local_14 + ( _LC8 - local_14 / ( fVar6 - uStack_10 ) ) * ( fVar3 - uStack_10 ) ) ) * _LC85 + _LC78;
      }
 else {
         fVar2 = ( fVar3 / ( ( _LC8 - ( local_14 * _LC78 ) / uStack_10 ) * fVar3 + local_14 * _LC78 ) ) * _LC78;
      }

      fVar3 = _LC83 * fVar5 - _LC81;
      fVar3 = fVar3 * fVar3 + fVar5 * __LC112;
      if (fVar3 < 0.0) {
         sqrtf(fVar3);
      }

      return CONCAT44(fVar2, fVar1);
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, int> > >::operator[](String const&) */
   undefined1 * __thiscallHashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>::operator [](HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>> * this, String * param_1);
   {
      long *plVar1;
      void *pvVar2;
      void *__s;
      long lVar3;
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      undefined1 auVar9[16];
      undefined1 auVar10[16];
      undefined1 auVar11[16];
      undefined1 auVar12[16];
      undefined1 auVar13[16];
      undefined1 auVar14[16];
      undefined1 auVar15[16];
      undefined1 auVar16[16];
      undefined1 auVar17[16];
      undefined1 auVar18[16];
      undefined1 auVar19[16];
      undefined1 auVar20[16];
      undefined1 auVar21[16];
      undefined1 auVar22[16];
      undefined1 auVar23[16];
      undefined1 auVar24[16];
      undefined1 auVar25[16];
      undefined1 auVar26[16];
      undefined1 auVar27[16];
      undefined1 auVar28[16];
      undefined1 auVar29[16];
      undefined1 auVar30[16];
      undefined1 auVar31[16];
      undefined1 auVar32[16];
      undefined1 auVar33[16];
      undefined1 auVar34[16];
      undefined1 auVar35[16];
      char cVar36;
      uint uVar37;
      uint uVar38;
      ulong uVar39;
      undefined8 uVar40;
      void *__s_00;
      undefined1(*pauVar41)[16];
      undefined8 *puVar42;
      void *pvVar43;
      ulong uVar44;
      int iVar45;
      long lVar46;
      long lVar47;
      ulong uVar48;
      undefined8 uVar49;
      uint *puVar50;
      uint uVar51;
      uint uVar52;
      long lVar53;
      uint uVar54;
      uint uVar55;
      undefined1(*pauVar56)[16];
      undefined1(*pauVar57)[16];
      long in_FS_OFFSET;
      long local_58;
      undefined4 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (*(long*)( this + 8 ) == 0) {
         LAB_001061e8:uVar39 = (ulong)uVar55;
         uVar44 = uVar39 * 4;
         uVar48 = uVar39 * 8;
         uVar40 = Memory::alloc_static(uVar44, false);
         *(undefined8*)( this + 0x10 ) = uVar40;
         pvVar43 = (void*)Memory::alloc_static(uVar48, false);
         *(void**)( this + 8 ) = pvVar43;
         if (uVar55 != 0) {
            pvVar2 = *(void**)( this + 0x10 );
            if (( pvVar2 < (void*)( (long)pvVar43 + uVar48 ) ) && ( pvVar43 < (void*)( (long)pvVar2 + uVar44 ) )) {
               uVar44 = 0;
               do {
                  *(undefined4*)( (long)pvVar2 + uVar44 * 4 ) = 0;
                  *(undefined8*)( (long)pvVar43 + uVar44 * 8 ) = 0;
                  uVar44 = uVar44 + 1;
               }
 while ( uVar39 != uVar44 );
               goto LAB_0010607a;
            }

            memset(pvVar2, 0, uVar44);
            memset(pvVar43, 0, uVar48);
            iVar45 = *(int*)( this + 0x2c );
            LAB_0010607e:if (iVar45 != 0) {
               LAB_00106086:uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               uVar52 = String::hash();
               uVar39 = CONCAT44(0, uVar37);
               lVar53 = *(long*)( this + 0x10 );
               uVar38 = 1;
               if (uVar52 != 0) {
                  uVar38 = uVar52;
               }

               uVar54 = 0;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = (ulong)uVar38 * lVar3;
               auVar32._8_8_ = 0;
               auVar32._0_8_ = uVar39;
               lVar46 = SUB168(auVar16 * auVar32, 8);
               uVar52 = *(uint*)( lVar53 + lVar46 * 4 );
               uVar51 = SUB164(auVar16 * auVar32, 8);
               if (uVar52 != 0) {
                  do {
                     if (uVar38 == uVar52) {
                        cVar36 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
                        if (cVar36 != '\0') {
                           pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                           *(undefined4*)( pauVar41[1] + 8 ) = 0;
                           goto LAB_00105f33;
                        }

                        lVar53 = *(long*)( this + 0x10 );
                     }

                     uVar54 = uVar54 + 1;
                     auVar17._8_8_ = 0;
                     auVar17._0_8_ = ( ulong )(uVar51 + 1) * lVar3;
                     auVar33._8_8_ = 0;
                     auVar33._0_8_ = uVar39;
                     lVar46 = SUB168(auVar17 * auVar33, 8);
                     uVar52 = *(uint*)( lVar53 + lVar46 * 4 );
                     uVar51 = SUB164(auVar17 * auVar33, 8);
                  }
 while ( ( uVar52 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar52 * lVar3,auVar34._8_8_ = 0,auVar34._0_8_ = uVar39,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( uVar37 + uVar51 ) - SUB164(auVar18 * auVar34, 8)) * lVar3,auVar35._8_8_ = 0,auVar35._0_8_ = uVar39,uVar54 <= SUB164(auVar19 * auVar35, 8) );
               }

               iVar45 = *(int*)( this + 0x2c );
            }

            uVar39 = (ulong)uVar55;
            goto LAB_00105b74;
         }

         iVar45 = *(int*)( this + 0x2c );
         if (pvVar43 == (void*)0x0) goto LAB_00105b74;
         if (iVar45 != 0) goto LAB_00106086;
         LAB_00105b9a:uVar55 = *(uint*)( this + 0x28 );
         if (uVar55 == 0x1c) {
            pauVar41 = (undefined1(*) [16])0x0;
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            goto LAB_00105f33;
         }

         uVar39 = ( ulong )(uVar55 + 1);
         *(undefined4*)( this + 0x2c ) = 0;
         uVar37 = *(uint*)( hash_table_size_primes + (ulong)uVar55 * 4 );
         if (uVar55 + 1 < 2) {
            uVar39 = 2;
         }

         uVar55 = *(uint*)( hash_table_size_primes + uVar39 * 4 );
         uVar48 = (ulong)uVar55;
         *(int*)( this + 0x28 ) = (int)uVar39;
         pvVar43 = *(void**)( this + 8 );
         uVar39 = uVar48 * 4;
         uVar44 = uVar48 * 8;
         pvVar2 = *(void**)( this + 0x10 );
         uVar40 = Memory::alloc_static(uVar39, false);
         *(undefined8*)( this + 0x10 ) = uVar40;
         __s_00 = (void*)Memory::alloc_static(uVar44, false);
         *(void**)( this + 8 ) = __s_00;
         if (uVar55 != 0) {
            __s = *(void**)( this + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar44 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
               uVar39 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
                  uVar39 = uVar39 + 1;
               }
 while ( uVar39 != uVar48 );
            }
 else {
               memset(__s, 0, uVar39);
               memset(__s_00, 0, uVar44);
            }

         }

         if (uVar37 != 0) {
            uVar39 = 0;
            do {
               uVar55 = *(uint*)( (long)pvVar2 + uVar39 * 4 );
               if (uVar55 != 0) {
                  lVar3 = *(long*)( this + 0x10 );
                  uVar51 = 0;
                  uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                  uVar44 = CONCAT44(0, uVar38);
                  lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = (ulong)uVar55 * lVar53;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar44;
                  lVar46 = SUB168(auVar4 * auVar20, 8);
                  puVar50 = (uint*)( lVar3 + lVar46 * 4 );
                  iVar45 = SUB164(auVar4 * auVar20, 8);
                  uVar52 = *puVar50;
                  uVar40 = *(undefined8*)( (long)pvVar43 + uVar39 * 8 );
                  while (uVar52 != 0) {
                     auVar5._8_8_ = 0;
                     auVar5._0_8_ = (ulong)uVar52 * lVar53;
                     auVar21._8_8_ = 0;
                     auVar21._0_8_ = uVar44;
                     auVar6._8_8_ = 0;
                     auVar6._0_8_ = ( ulong )(( uVar38 + iVar45 ) - SUB164(auVar5 * auVar21, 8)) * lVar53;
                     auVar22._8_8_ = 0;
                     auVar22._0_8_ = uVar44;
                     uVar54 = SUB164(auVar6 * auVar22, 8);
                     uVar49 = uVar40;
                     if (uVar54 < uVar51) {
                        *puVar50 = uVar55;
                        puVar42 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                        uVar49 = *puVar42;
                        *puVar42 = uVar40;
                        uVar55 = uVar52;
                        uVar51 = uVar54;
                     }

                     uVar51 = uVar51 + 1;
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
                     auVar23._8_8_ = 0;
                     auVar23._0_8_ = uVar44;
                     lVar46 = SUB168(auVar7 * auVar23, 8);
                     puVar50 = (uint*)( lVar3 + lVar46 * 4 );
                     iVar45 = SUB164(auVar7 * auVar23, 8);
                     uVar40 = uVar49;
                     uVar52 = *puVar50;
                  }
;
                  *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar40;
                  *puVar50 = uVar55;
                  *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
               }

               uVar39 = uVar39 + 1;
            }
 while ( uVar37 != uVar39 );
            Memory::free_static(pvVar43, false);
            Memory::free_static(pvVar2, false);
         }

      }
 else {
         iVar45 = *(int*)( this + 0x2c );
         uVar39 = CONCAT44(0, uVar55);
         if (iVar45 != 0) {
            lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            uVar38 = String::hash();
            lVar53 = *(long*)( this + 0x10 );
            uVar37 = 1;
            if (uVar38 != 0) {
               uVar37 = uVar38;
            }

            uVar51 = 0;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)uVar37 * lVar3;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar39;
            lVar46 = SUB168(auVar12 * auVar28, 8);
            uVar38 = *(uint*)( lVar53 + lVar46 * 4 );
            uVar52 = SUB164(auVar12 * auVar28, 8);
            if (uVar38 != 0) {
               do {
                  if (uVar37 == uVar38) {
                     cVar36 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
                     if (cVar36 != '\0') {
                        pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar52 * 8 );
                        goto LAB_00105f33;
                     }

                     lVar53 = *(long*)( this + 0x10 );
                  }

                  uVar51 = uVar51 + 1;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = ( ulong )(uVar52 + 1) * lVar3;
                  auVar29._8_8_ = 0;
                  auVar29._0_8_ = uVar39;
                  lVar46 = SUB168(auVar13 * auVar29, 8);
                  uVar38 = *(uint*)( lVar53 + lVar46 * 4 );
                  uVar52 = SUB164(auVar13 * auVar29, 8);
               }
 while ( ( uVar38 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar38 * lVar3,auVar30._8_8_ = 0,auVar30._0_8_ = uVar39,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar52 + uVar55 ) - SUB164(auVar14 * auVar30, 8)) * lVar3,auVar31._8_8_ = 0,auVar31._0_8_ = uVar39,uVar51 <= SUB164(auVar15 * auVar31, 8) );
            }

            uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            if (*(long*)( this + 8 ) == 0) goto LAB_001061e8;
            LAB_0010607a:iVar45 = *(int*)( this + 0x2c );
            goto LAB_0010607e;
         }

         LAB_00105b74:if ((float)uVar39 * __LC140 < (float)( iVar45 + 1 )) goto LAB_00105b9a;
      }

      local_58 = 0;
      if (*(long*)param_1 == 0) {
         pauVar41 = (undefined1(*) [16])operator_new(0x20, "");
         *(undefined8*)pauVar41[1] = 0;
         *pauVar41 = (undefined1[16])0x0;
         LAB_001061bb:*(undefined4*)( pauVar41[1] + 8 ) = 0;
         LAB_00105e21:puVar42 = *(undefined8**)( this + 0x20 );
         if (puVar42 != (undefined8*)0x0) goto LAB_00105e2e;
         LAB_00106055:*(undefined1(**) [16])( this + 0x18 ) = pauVar41;
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
         lVar3 = local_58;
         local_50 = 0;
         pauVar41 = (undefined1(*) [16])operator_new(0x20, "");
         *(undefined8*)pauVar41[1] = 0;
         *(undefined8*)*pauVar41 = 0;
         *(undefined8*)( *pauVar41 + 8 ) = 0;
         if (lVar3 == 0) goto LAB_001061bb;
         CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar41 + 1 ), (CowData*)&local_58);
         *(undefined4*)( pauVar41[1] + 8 ) = 0;
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_00105e21;
         Memory::free_static((void*)( local_58 + -0x10 ), false);
         puVar42 = *(undefined8**)( this + 0x20 );
         if (puVar42 == (undefined8*)0x0) goto LAB_00106055;
         LAB_00105e2e:*puVar42 = pauVar41;
         *(undefined8**)( *pauVar41 + 8 ) = puVar42;
      }

      *(undefined1(**) [16])( this + 0x20 ) = pauVar41;
      uVar37 = String::hash();
      lVar3 = *(long*)( this + 0x10 );
      uVar55 = 1;
      if (uVar37 != 0) {
         uVar55 = uVar37;
      }

      uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar39 = CONCAT44(0, uVar37);
      lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar55 * lVar53;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar39;
      lVar47 = SUB168(auVar8 * auVar24, 8);
      lVar46 = *(long*)( this + 8 );
      puVar50 = (uint*)( lVar3 + lVar47 * 4 );
      iVar45 = SUB164(auVar8 * auVar24, 8);
      uVar38 = *puVar50;
      pauVar57 = pauVar41;
      if (uVar38 != 0) {
         uVar52 = 0;
         pauVar56 = pauVar41;
         do {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar38 * lVar53;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar39;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = ( ulong )(( uVar37 + iVar45 ) - SUB164(auVar9 * auVar25, 8)) * lVar53;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar39;
            uVar51 = SUB164(auVar10 * auVar26, 8);
            pauVar57 = pauVar56;
            if (uVar51 < uVar52) {
               *puVar50 = uVar55;
               puVar42 = (undefined8*)( lVar46 + lVar47 * 8 );
               pauVar57 = (undefined1(*) [16])*puVar42;
               *puVar42 = pauVar56;
               uVar52 = uVar51;
               uVar55 = uVar38;
            }

            uVar52 = uVar52 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar39;
            lVar47 = SUB168(auVar11 * auVar27, 8);
            puVar50 = (uint*)( lVar3 + lVar47 * 4 );
            iVar45 = SUB164(auVar11 * auVar27, 8);
            uVar38 = *puVar50;
            pauVar56 = pauVar57;
         }
 while ( uVar38 != 0 );
      }

      *(undefined1(**) [16])( lVar46 + lVar47 * 8 ) = pauVar57;
      *puVar50 = uVar55;
      *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
      LAB_00105f33:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return pauVar41[1] + 8;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Color::to_argb32() const */
   void Color::_GLOBAL__sub_I_to_argb32(void) {
      named_colors = "ALICE_BLUE";
      _DAT_00102f10 = __LC160;
      uRam0000000000102f18 = _UNK_00107668;
      DAT_00102ed8 = "ANTIQUE_WHITE";
      _DAT_00102f28 = __LC162;
      uRam0000000000102f30 = _UNK_00107678;
      _DAT_00102ef0 = &_LC157;
      _DAT_00102f40 = __LC164;
      uRam0000000000102f48 = _UNK_00107688;
      _DAT_00102f08 = "AQUAMARINE";
      _DAT_00102f58 = __LC166;
      uRam0000000000102f60 = _UNK_00107698;
      _DAT_00102f20 = "AZURE";
      _DAT_00102f70 = __LC168;
      uRam0000000000102f78 = _UNK_001076a8;
      _DAT_00102f38 = "BEIGE";
      _DAT_00102f50 = "BISQUE";
      _DAT_00102ec8 = __LC154;
      _DAT_00102ed0 = CONCAT44(_UNK_0010763c, _LC8);
      _DAT_00102f88 = __LC170;
      uRam0000000000102f90 = _UNK_001076b8;
      _DAT_00102f68 = "BLACK";
      _DAT_00102f80 = "BLANCHED_ALMOND";
      _DAT_00102ee0 = __LC156;
      uRam0000000000102ee8 = _UNK_00107648;
      _DAT_00102fa0 = __LC172;
      uRam0000000000102fa8 = _UNK_001076c8;
      _DAT_00102f98 = &_LC171;
      _DAT_00102fb0 = "BLUE_VIOLET";
      _DAT_00102ef8 = __LC158;
      uRam0000000000102f00 = _UNK_00107658;
      _DAT_00102fb8 = __LC174;
      uRam0000000000102fc0 = _UNK_001076d8;
      _DAT_00102fc8 = "BROWN";
      _DAT_00102fd0 = __LC176;
      uRam0000000000102fd8 = _UNK_001076e8;
      _DAT_00102fe0 = "BURLYWOOD";
      _DAT_00102fe8 = __LC178;
      uRam0000000000102ff0 = _UNK_001076f8;
      _DAT_00102ff8 = "CADET_BLUE";
      _DAT_00103000 = __LC180;
      uRam0000000000103008 = _UNK_00107708;
      _DAT_00103010 = "CHARTREUSE";
      _DAT_00103018 = __LC182;
      uRam0000000000103020 = _UNK_00107718;
      _DAT_00103028 = "CHOCOLATE";
      _DAT_00103030 = __LC184;
      uRam0000000000103038 = _UNK_00107728;
      _DAT_00103040 = "CORAL";
      _DAT_00103048 = __LC186;
      uRam0000000000103050 = _UNK_00107738;
      _DAT_00103058 = "CORNFLOWER_BLUE";
      _DAT_00103070 = "CORNSILK";
      _DAT_00103060 = __LC188;
      uRam0000000000103068 = _UNK_00107748;
      _DAT_00103088 = "CRIMSON";
      _DAT_001030a0 = &_LC193;
      _DAT_00103078 = __LC190;
      uRam0000000000103080 = _UNK_00107758;
      _DAT_001030a8 = __LC158;
      uRam00000000001030b0 = _UNK_00107658;
      _DAT_001030b8 = "DARK_BLUE";
      _DAT_00103090 = __LC192;
      uRam0000000000103098 = _UNK_00107768;
      _DAT_001030c0 = __LC195;
      uRam00000000001030c8 = _UNK_00107778;
      _DAT_001030d0 = "DARK_CYAN";
      _DAT_001030e8 = "DARK_GOLDENROD";
      _DAT_001030d8 = __LC197;
      uRam00000000001030e0 = _UNK_00107788;
      _DAT_00103100 = "DARK_GRAY";
      _DAT_001030f0 = __LC199;
      uRam00000000001030f8 = _UNK_00107798;
      _DAT_00103118 = "DARK_GREEN";
      _DAT_00103108 = __LC201;
      uRam0000000000103110 = _UNK_001077a8;
      _DAT_00103130 = "DARK_KHAKI";
      _DAT_00103120 = __LC203;
      uRam0000000000103128 = _UNK_001077b8;
      _DAT_00103148 = "DARK_MAGENTA";
      _DAT_00103138 = __LC205;
      uRam0000000000103140 = _UNK_001077c8;
      _DAT_00103160 = "DARK_OLIVE_GREEN";
      _DAT_00103150 = __LC207;
      uRam0000000000103158 = _UNK_001077d8;
      _DAT_00103178 = "DARK_ORANGE";
      _DAT_00103168 = __LC209;
      uRam0000000000103170 = _UNK_001077e8;
      _DAT_00103190 = "DARK_ORCHID";
      _DAT_00103180 = __LC211;
      uRam0000000000103188 = _UNK_001077f8;
      _DAT_001031a8 = "DARK_RED";
      _DAT_00103198 = __LC213;
      uRam00000000001031a0 = __LC78;
      _DAT_001031c0 = "DARK_SALMON";
      _DAT_001031b0 = __LC215;
      uRam00000000001031b8 = _UNK_00107818;
      _DAT_001031c8 = __LC217;
      uRam00000000001031d0 = _UNK_00107828;
      _DAT_001031d8 = "DARK_SEA_GREEN";
      _DAT_001031f0 = "DARK_SLATE_BLUE";
      _DAT_001031e0 = __LC219;
      uRam00000000001031e8 = _UNK_00107838;
      _DAT_00103208 = "DARK_SLATE_GRAY";
      _DAT_001031f8 = __LC221;
      uRam0000000000103200 = _UNK_00107848;
      _DAT_00103220 = "DARK_TURQUOISE";
      _DAT_00103210 = __LC223;
      uRam0000000000103218 = _UNK_00107858;
      _DAT_00103238 = "DARK_VIOLET";
      _DAT_00103228 = __LC225;
      uRam0000000000103230 = _UNK_00107868;
      _DAT_00103250 = "DEEP_PINK";
      _DAT_00103240 = __LC227;
      uRam0000000000103248 = _UNK_00107878;
      _DAT_00103268 = "DEEP_SKY_BLUE";
      _DAT_00103258 = __LC229;
      uRam0000000000103260 = _UNK_00107888;
      _DAT_00103280 = "DIM_GRAY";
      _DAT_00103270 = __LC231;
      uRam0000000000103278 = _UNK_00107898;
      _DAT_00103298 = "DODGER_BLUE";
      _DAT_00103288 = __LC233;
      uRam0000000000103290 = _UNK_001078a8;
      _DAT_001032b0 = "FIREBRICK";
      _DAT_001032a0 = __LC235;
      uRam00000000001032a8 = _UNK_001078b8;
      _DAT_001032c8 = "FLORAL_WHITE";
      _DAT_001032b8 = __LC237;
      uRam00000000001032c0 = _UNK_001078c8;
      _DAT_001032d0 = __LC239;
      uRam00000000001032d8 = _UNK_001078d8;
      _DAT_001032e0 = "FOREST_GREEN";
      _DAT_001032f8 = "FUCHSIA";
      _DAT_00103318 = __LC245;
      uRam0000000000103320 = _UNK_00107908;
      _DAT_00103310 = "GAINSBORO";
      _DAT_00103328 = "GHOST_WHITE";
      _DAT_00103330 = __LC247;
      uRam0000000000103338 = _UNK_00107918;
      _DAT_00103340 = &_LC248;
      _DAT_00103358 = "GOLDENROD";
      _DAT_00103348 = __LC249;
      uRam0000000000103350 = _UNK_00107928;
      _DAT_00103370 = &_LC252;
      _DAT_00103388 = "GREEN";
      _DAT_00103360 = __LC251;
      uRam0000000000103368 = _UNK_00107938;
      _DAT_001033a8 = __LC257;
      uRam00000000001033b0 = _UNK_00107968;
      _DAT_001033a0 = "GREEN_YELLOW";
      _DAT_001033b8 = "HONEYDEW";
      _DAT_001032e8 = __LC241;
      uRam00000000001032f0 = _UNK_001078e8;
      _DAT_00103378 = __LC253;
      uRam0000000000103380 = _UNK_00107948;
      _DAT_001033c0 = __LC259;
      uRam00000000001033c8 = _UNK_00107978;
      _DAT_001033d0 = "HOT_PINK";
      _DAT_00103300 = __LC243;
      uRam0000000000103308 = _UNK_001078f8;
      _DAT_00103390 = __LC255;
      uRam0000000000103398 = _UNK_00107958;
      _DAT_001033d8 = __LC261;
      uRam00000000001033e0 = _UNK_00107988;
      _DAT_001033e8 = "INDIAN_RED";
      _DAT_00103400 = "INDIGO";
      _DAT_001033f0 = __LC263;
      uRam00000000001033f8 = _UNK_00107998;
      _DAT_00103418 = "IVORY";
      _DAT_00103408 = __LC265;
      uRam0000000000103410 = _UNK_001079a8;
      _DAT_00103430 = "KHAKI";
      _DAT_00103420 = __LC267;
      uRam0000000000103428 = _UNK_001079b8;
      _DAT_00103448 = "LAVENDER";
      _DAT_00103438 = __LC269;
      uRam0000000000103440 = _UNK_001079c8;
      _DAT_00103460 = "LAVENDER_BLUSH";
      _DAT_00103450 = __LC271;
      uRam0000000000103458 = _UNK_001079d8;
      _DAT_00103478 = "LAWN_GREEN";
      _DAT_00103468 = __LC273;
      uRam0000000000103470 = _UNK_001079e8;
      _DAT_00103490 = "LEMON_CHIFFON";
      _DAT_00103480 = __LC275;
      uRam0000000000103488 = _UNK_001079f8;
      _DAT_001034a8 = "LIGHT_BLUE";
      _DAT_00103498 = __LC277;
      uRam00000000001034a0 = _UNK_00107a08;
      _DAT_001034c0 = "LIGHT_CORAL";
      _DAT_001034b0 = __LC279;
      uRam00000000001034b8 = _UNK_00107a18;
      _DAT_001034d8 = "LIGHT_CYAN";
      _DAT_001034c8 = __LC281;
      uRam00000000001034d0 = _UNK_00107a28;
      _DAT_001034e0 = __LC283;
      uRam00000000001034e8 = _UNK_00107a38;
      _DAT_001034f0 = "LIGHT_GOLDENROD";
      _DAT_00103508 = "LIGHT_GRAY";
      _DAT_001034f8 = __LC285;
      uRam0000000000103500 = _UNK_00107a48;
      _DAT_00103520 = "LIGHT_GREEN";
      _DAT_00103510 = __LC287;
      uRam0000000000103518 = _UNK_00107a58;
      _DAT_00103538 = "LIGHT_PINK";
      _DAT_00103528 = __LC289;
      uRam0000000000103530 = _UNK_00107a68;
      _DAT_00103550 = "LIGHT_SALMON";
      _DAT_00103540 = __LC291;
      uRam0000000000103548 = _UNK_00107a78;
      _DAT_00103568 = "LIGHT_SEA_GREEN";
      _DAT_00103558 = __LC293;
      uRam0000000000103560 = _UNK_00107a88;
      _DAT_00103580 = "LIGHT_SKY_BLUE";
      _DAT_00103570 = __LC295;
      uRam0000000000103578 = _UNK_00107a98;
      _DAT_00103598 = "LIGHT_SLATE_GRAY";
      _DAT_00103588 = __LC297;
      uRam0000000000103590 = _UNK_00107aa8;
      _DAT_001035b0 = "LIGHT_STEEL_BLUE";
      _DAT_001035a0 = __LC299;
      uRam00000000001035a8 = _UNK_00107ab8;
      _DAT_001035c8 = "LIGHT_YELLOW";
      _DAT_001035b8 = __LC301;
      uRam00000000001035c0 = _UNK_00107ac8;
      _DAT_001035e0 = &_LC304;
      _DAT_001035f8 = "LIME_GREEN";
      _DAT_001035d0 = __LC303;
      uRam00000000001035d8 = _UNK_00107ad8;
      _DAT_001035e8 = __LC255;
      uRam00000000001035f0 = _UNK_00107958;
      _DAT_00103630 = __LC243;
      uRam0000000000103638 = _UNK_001078f8;
      _DAT_00103610 = "LINEN";
      _DAT_00103648 = __LC311;
      uRam0000000000103650 = _UNK_00107b08;
      _DAT_00103628 = "MAGENTA";
      _DAT_00103660 = __LC77;
      uRam0000000000103668 = _UNK_00107b18;
      _DAT_00103640 = "MAROON";
      _DAT_00103678 = __LC315;
      uRam0000000000103680 = _UNK_00107b28;
      _DAT_00103658 = "MEDIUM_AQUAMARINE";
      _DAT_00103690 = __LC317;
      uRam0000000000103698 = _UNK_00107b38;
      _DAT_00103670 = "MEDIUM_BLUE";
      _DAT_001036a8 = __LC319;
      uRam00000000001036b0 = _UNK_00107b48;
      _DAT_00103688 = "MEDIUM_ORCHID";
      _DAT_001036a0 = "MEDIUM_PURPLE";
      _DAT_001036c0 = __LC321;
      uRam00000000001036c8 = _UNK_00107b58;
      _DAT_001036b8 = "MEDIUM_SEA_GREEN";
      _DAT_001036d0 = "MEDIUM_SLATE_BLUE";
      _DAT_00103600 = __LC306;
      uRam0000000000103608 = _UNK_00107ae8;
      _DAT_001036d8 = __LC323;
      uRam00000000001036e0 = _UNK_00107b68;
      _DAT_001036e8 = "MEDIUM_SPRING_GREEN";
      _DAT_00103700 = "MEDIUM_TURQUOISE";
      _DAT_00103618 = __LC308;
      uRam0000000000103620 = _UNK_00107af8;
      _DAT_001036f0 = __LC325;
      uRam00000000001036f8 = _UNK_00107b78;
      _DAT_00103718 = "MEDIUM_VIOLET_RED";
      _DAT_00103708 = __LC327;
      uRam0000000000103710 = _UNK_00107b88;
      _DAT_00103730 = "MIDNIGHT_BLUE";
      _DAT_00103720 = __LC329;
      uRam0000000000103728 = _UNK_00107b98;
      _DAT_00103748 = "MINT_CREAM";
      _DAT_00103738 = __LC331;
      uRam0000000000103740 = _UNK_00107ba8;
      _DAT_00103760 = "MISTY_ROSE";
      _DAT_00103750 = __LC333;
      uRam0000000000103758 = _UNK_00107bb8;
      _DAT_00103778 = "MOCCASIN";
      _DAT_00103768 = __LC335;
      uRam0000000000103770 = _UNK_00107bc8;
      _DAT_00103790 = "NAVAJO_WHITE";
      _DAT_00103780 = __LC337;
      uRam0000000000103788 = _UNK_00107bd8;
      _DAT_001037a8 = "NAVY_BLUE";
      _DAT_00103798 = __LC339;
      uRam00000000001037a0 = _UNK_00107be8;
      _DAT_001037c0 = "OLD_LACE";
      _DAT_001037b0 = __LC341;
      uRam00000000001037b8 = _UNK_00107bf8;
      _DAT_001037d8 = "OLIVE";
      _DAT_001037c8 = __LC343;
      uRam00000000001037d0 = _UNK_00107c08;
      _DAT_001037f0 = "OLIVE_DRAB";
      _DAT_001037e0 = __LC345;
      uRam00000000001037e8 = _UNK_00107c18;
      _DAT_001037f8 = __LC347;
      uRam0000000000103800 = _UNK_00107c28;
      _DAT_00103808 = "ORANGE";
      _DAT_00103820 = "ORANGE_RED";
      _DAT_00103810 = __LC349;
      uRam0000000000103818 = _UNK_00107c38;
      _DAT_00103838 = "ORCHID";
      _DAT_00103828 = __LC351;
      uRam0000000000103830 = _UNK_00107c48;
      _DAT_00103850 = "PALE_GOLDENROD";
      _DAT_00103840 = __LC353;
      uRam0000000000103848 = _UNK_00107c58;
      _DAT_00103868 = "PALE_GREEN";
      _DAT_00103858 = __LC355;
      uRam0000000000103860 = _UNK_00107c68;
      _DAT_00103880 = "PALE_TURQUOISE";
      _DAT_00103870 = __LC357;
      uRam0000000000103878 = _UNK_00107c78;
      _DAT_00103898 = "PALE_VIOLET_RED";
      _DAT_00103888 = __LC359;
      uRam0000000000103890 = _UNK_00107c88;
      _DAT_001038b0 = "PAPAYA_WHIP";
      _DAT_001038a0 = __LC361;
      uRam00000000001038a8 = _UNK_00107c98;
      _DAT_001038c8 = "PEACH_PUFF";
      _DAT_001038b8 = __LC363;
      uRam00000000001038c0 = _UNK_00107ca8;
      _DAT_001038e0 = &_LC366;
      _DAT_001038d0 = __LC365;
      uRam00000000001038d8 = _UNK_00107cb8;
      _DAT_001038f8 = &_LC368;
      _DAT_001038e8 = __LC367;
      uRam00000000001038f0 = _UNK_00107cc8;
      _DAT_00103900 = __LC369;
      uRam0000000000103908 = _UNK_00107cd8;
      _DAT_00103910 = &_LC370;
      _DAT_00103928 = "POWDER_BLUE";
      _DAT_00103918 = __LC371;
      uRam0000000000103920 = _UNK_00107ce8;
      _DAT_00103940 = "PURPLE";
      _DAT_00103930 = __LC373;
      uRam0000000000103938 = _UNK_00107cf8;
      _DAT_00103958 = "REBECCA_PURPLE";
      _DAT_00103948 = __LC375;
      uRam0000000000103950 = _UNK_00107d08;
      _DAT_00103970 = &_LC378;
      _DAT_00103960 = __LC377;
      uRam0000000000103968 = _UNK_00107d18;
      _DAT_00103988 = "ROSY_BROWN";
      _DAT_00103978 = __LC379;
      uRam0000000000103980 = _UNK_00107d28;
      _DAT_001039a0 = "ROYAL_BLUE";
      _DAT_00103990 = __LC381;
      uRam0000000000103998 = _UNK_00107d38;
      _DAT_001039b8 = "SADDLE_BROWN";
      _DAT_001039a8 = __LC383;
      uRam00000000001039b0 = _UNK_00107d48;
      _DAT_001039d0 = "SALMON";
      _DAT_001039c0 = __LC385;
      uRam00000000001039c8 = _UNK_00107d58;
      _DAT_001039e8 = "SANDY_BROWN";
      _DAT_001039d8 = __LC387;
      uRam00000000001039e0 = _UNK_00107d68;
      _DAT_00103a00 = "SEA_GREEN";
      _DAT_001039f0 = __LC389;
      uRam00000000001039f8 = _UNK_00107d78;
      _DAT_00103a08 = __LC391;
      uRam0000000000103a10 = _UNK_00107d88;
      _DAT_00103a18 = "SEASHELL";
      _DAT_00103a30 = "SIENNA";
      _DAT_00103a20 = __LC393;
      uRam0000000000103a28 = _UNK_00107d98;
      _DAT_00103a48 = "SILVER";
      _DAT_00103a38 = __LC395;
      uRam0000000000103a40 = _UNK_00107da8;
      _DAT_00103a60 = "SKY_BLUE";
      _DAT_00103a50 = __LC397;
      uRam0000000000103a58 = _UNK_00107db8;
      _DAT_00103a78 = "SLATE_BLUE";
      _DAT_00103a68 = __LC399;
      uRam0000000000103a70 = _UNK_00107dc8;
      _DAT_00103a90 = "SLATE_GRAY";
      _DAT_00103a80 = __LC401;
      uRam0000000000103a88 = _UNK_00107dd8;
      _DAT_00103aa8 = &_LC404;
      _DAT_00103a98 = __LC403;
      uRam0000000000103aa0 = _UNK_00107de8;
      _DAT_00103ac0 = "SPRING_GREEN";
      _DAT_00103ab0 = __LC405;
      uRam0000000000103ab8 = _UNK_00107df8;
      _DAT_00103ad8 = "STEEL_BLUE";
      _DAT_00103ac8 = __LC407;
      uRam0000000000103ad0 = _UNK_00107e08;
      _DAT_00103af0 = &_LC410;
      _DAT_00103ae0 = __LC409;
      uRam0000000000103ae8 = _UNK_00107e18;
      _DAT_00103b08 = &_LC412;
      _DAT_00103af8 = __LC411;
      uRam0000000000103b00 = _UNK_00107e28;
      _DAT_00103b10 = __LC413;
      uRam0000000000103b18 = _UNK_00107e38;
      _DAT_00103b20 = "THISTLE";
      _DAT_00103b38 = "TOMATO";
      _DAT_00103b28 = __LC415;
      uRam0000000000103b30 = _UNK_00107e48;
      _DAT_00103b50 = "TRANSPARENT";
      _DAT_00103b40 = __LC417;
      uRam0000000000103b48 = _UNK_00107e58;
      _DAT_00103b68 = "TURQUOISE";
      _DAT_00103b58 = __LC419;
      uRam0000000000103b60 = _UNK_00107e68;
      _DAT_00103b80 = "VIOLET";
      _DAT_00103b70 = __LC421;
      uRam0000000000103b78 = _UNK_00107e78;
      _DAT_00103b98 = "WEB_GRAY";
      _DAT_00103b88 = __LC423;
      uRam0000000000103b90 = _UNK_00107e88;
      _DAT_00103bb0 = "WEB_GREEN";
      _DAT_00103ba0 = __LC425;
      uRam0000000000103ba8 = _UNK_00107e98;
      _DAT_00103bc8 = "WEB_MAROON";
      _DAT_00103bb8 = __LC427;
      uRam0000000000103bc0 = _UNK_00107ea8;
      _DAT_00103be0 = "WEB_PURPLE";
      _DAT_00103bd0 = __LC429;
      uRam0000000000103bd8 = _UNK_00107eb8;
      _DAT_00103bf8 = "WHEAT";
      _DAT_00103be8 = __LC431;
      uRam0000000000103bf0 = _UNK_00107ec8;
      _DAT_00103c10 = "WHITE";
      _DAT_00103c00 = __LC433;
      uRam0000000000103c08 = _UNK_00107ed8;
      _DAT_00103c18 = _LC8;
      uRam0000000000103c1c = _LC8;
      uRam0000000000103c20 = _LC8;
      uRam0000000000103c24 = _LC8;
      _DAT_00103c28 = "WHITE_SMOKE";
      _DAT_00103c40 = "YELLOW";
      _DAT_00103c30 = __LC436;
      uRam0000000000103c38 = _UNK_00107ee8;
      _DAT_00103c58 = "YELLOW_GREEN";
      _DAT_00103c48 = __LC438;
      uRam0000000000103c50 = _UNK_00107ef8;
      _DAT_00103c60 = __LC440;
      uRam0000000000103c68 = _UNK_00107f08;
      return;
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* HashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, int> > >::~HashMap() */
   void HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>::~HashMap(HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

}

