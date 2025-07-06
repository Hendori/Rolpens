/* Transform2D::invert() */void Transform2D::invert(void) {
   undefined1 auVar1[12];
   undefined1 auVar2[12];
   undefined8 *in_RDI;
   float fVar3;
   undefined8 in_XMM1_Qa;
   float fVar4;
   float fVar5;
   float fVar6;
   fVar5 = (float)( *(uint*)( in_RDI + 2 ) ^ _LC0 );
   fVar3 = (float)( ( ulong ) * in_RDI >> 0x20 );
   auVar1._4_8_ = in_XMM1_Qa;
   auVar1._0_4_ = fVar3;
   fVar6 = (float)in_RDI[1];
   auVar2._4_8_ = auVar1._0_8_ & 0xffffffff;
   auVar2._0_4_ = fVar6;
   *(long*)( (long)in_RDI + 4 ) = auVar2._0_8_;
   fVar4 = (float)( (ulong)in_RDI[2] >> 0x20 );
   in_RDI[2] = CONCAT44(fVar6 * fVar5 - fVar4 * (float)( (ulong)in_RDI[1] >> 0x20 ), (float)*in_RDI * fVar5 - fVar4 * fVar3);
   return;
}/* Transform2D::inverse() const */void Transform2D::inverse(void) {
   undefined8 uVar1;
   undefined1 auVar2[12];
   undefined1 auVar3[12];
   undefined8 uVar4;
   undefined8 *in_RSI;
   undefined8 *in_RDI;
   float fVar5;
   undefined8 in_XMM1_Qa;
   float fVar6;
   float fVar7;
   uVar1 = *in_RSI;
   uVar4 = in_RSI[1];
   *in_RDI = *in_RSI;
   in_RDI[1] = uVar4;
   fVar5 = (float)( (ulong)uVar1 >> 0x20 );
   auVar2._4_8_ = in_XMM1_Qa;
   auVar2._0_4_ = fVar5;
   fVar7 = (float)in_RDI[1];
   auVar3._4_8_ = auVar2._0_8_ & 0xffffffff;
   auVar3._0_4_ = fVar7;
   in_RDI[2] = in_RSI[2];
   *(long*)( (long)in_RDI + 4 ) = auVar3._0_8_;
   fVar6 = (float)( *(uint*)( (long)in_RDI + 0x14 ) ^ _LC0 );
   in_RDI[2] = CONCAT44((float)( (ulong)in_RDI[1] >> 0x20 ) * fVar6 - (float)in_RDI[2] * fVar7, fVar5 * fVar6 - (float)in_RDI[2] * (float)uVar1);
   return;
}/* Transform2D::affine_invert() */void Transform2D::affine_invert(Transform2D *this) {
   uint uVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   uVar1 = _LC0;
   fVar3 = *(float*)this * *(float*)( this + 0xc ) - *(float*)( this + 4 ) * *(float*)( this + 8 );
   if (fVar3 != 0.0) {
      fVar3 = _LC6 / fVar3;
      fVar2 = *(float*)( this + 0xc ) * fVar3;
      fVar5 = fVar3 * *(float*)this;
      fVar7 = *(float*)( this + 4 ) * (float)( (uint)fVar3 ^ _LC0 );
      fVar4 = (float)( (uint)fVar3 ^ _LC0 ) * *(float*)( this + 8 );
      *(float*)this = fVar2;
      *(float*)( this + 4 ) = fVar7;
      *(float*)( this + 8 ) = fVar4;
      *(float*)( this + 0xc ) = fVar5;
      fVar6 = (float)( *(uint*)( this + 0x14 ) ^ uVar1 );
      fVar3 = (float)( *(uint*)( this + 0x10 ) ^ uVar1 );
      *(ulong*)( this + 0x10 ) = CONCAT44(fVar3 * fVar7 + fVar6 * fVar5, fVar3 * fVar2 + fVar6 * fVar4);
      return;
   }
   _err_print_error("affine_invert", "core/math/transform_2d.cpp", 0x33, "Condition \"det == 0\" is true.", 0, 0);
   return;
}/* Transform2D::affine_inverse() const */void Transform2D::affine_inverse(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 *in_RSI;
   Transform2D *in_RDI;
   uVar1 = *in_RSI;
   uVar2 = in_RSI[1];
   *(undefined8*)( in_RDI + 0x10 ) = in_RSI[2];
   *(undefined8*)in_RDI = uVar1;
   *(undefined8*)( in_RDI + 8 ) = uVar2;
   affine_invert(in_RDI);
   return;
}/* Transform2D::get_skew() const */void Transform2D::get_skew(void) {
   float fVar1;
   long in_FS_OFFSET;
   float __x;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = Vector2::normalized();
   Vector2::normalized();
   fVar1 = _LC7;
   __x = (float)Vector2::dot((Vector2*)&local_18);
   if (( fVar1 <= __x ) && ( __x <= _LC6 )) {
      acosf(__x);
   }
   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* Transform2D::set_skew(float) */void Transform2D::set_skew(Transform2D *this, float param_1) {
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   undefined8 uVar3;
   float fVar4;
   float fVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar5 = *(float*)this * *(float*)( this + 0xc ) - *(float*)( this + 4 ) * *(float*)( this + 8 );
   fVar2 = (float)Vector2::length();
   Vector2::rotated(param_1 + _LC8);
   uVar3 = Vector2::normalized();
   fVar4 = _LC6;
   if (fVar5 <= 0.0) {
      fVar4 = (float)( _LC7 & -(uint)(fVar5 < 0.0) );
   }
   *(ulong*)( this + 8 ) = CONCAT44(fVar4 * (float)( (ulong)uVar3 >> 0x20 ) * fVar2, fVar4 * (float)uVar3 * fVar2);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Transform2D::get_rotation() const */void Transform2D::get_rotation(Transform2D *this) {
   atan2f(*(float*)( this + 4 ), *(float*)this);
   return;
}/* Transform2D::Transform2D(float, Vector2 const&) */void Transform2D::Transform2D(Transform2D *this, float param_1, Vector2 *param_2) {
   uint uVar1;
   float local_20;
   float local_1c[3];
   sincosf(param_1, local_1c, &local_20);
   *(undefined8*)( this + 0x10 ) = 0;
   uVar1 = (uint)local_1c[0] ^ _LC0;
   *(undefined8*)( this + 0x10 ) = *(undefined8*)param_2;
   *(float*)this = local_20;
   *(float*)( this + 4 ) = local_1c[0];
   *(uint*)( this + 8 ) = uVar1;
   *(float*)( this + 0xc ) = local_20;
   return;
}/* Transform2D::Transform2D(float, Vector2 const&, float, Vector2 const&) */void Transform2D::Transform2D(Transform2D *this, float param_1, Vector2 *param_2, float param_3, Vector2 *param_4) {
   float fVar1;
   float fVar2;
   undefined8 uVar3;
   float fVar4;
   float local_30;
   float local_2c;
   sincosf(param_1, &local_2c, &local_30);
   fVar4 = local_2c;
   *(undefined8*)this = 0;
   *(undefined8*)( this + 8 ) = 0;
   *(undefined8*)( this + 0x10 ) = 0;
   fVar1 = *(float*)param_2;
   *(float*)this = fVar1 * local_30;
   sincosf(param_1 + param_3, &local_2c, &local_30);
   fVar2 = *(float*)( param_2 + 4 );
   uVar3 = *(undefined8*)param_4;
   *(float*)( this + 0xc ) = local_30 * fVar2;
   local_2c = (float)( (uint)local_2c ^ _LC0 );
   *(undefined8*)( this + 0x10 ) = uVar3;
   *(float*)( this + 4 ) = fVar1 * fVar4;
   *(float*)( this + 8 ) = local_2c * fVar2;
   return;
}/* Transform2D::get_scale() const */void Transform2D::get_scale(void) {
   for (int i_1832 = 0; i_1832 < 2; i_1832++) {
      Vector2::length();
   }
   return;
}/* Transform2D::set_rotation(float) */void Transform2D::set_rotation(Transform2D *this, float param_1) {
   uint uVar1;
   undefined8 uVar2;
   float fVar3;
   float local_20;
   float local_1c[3];
   sincosf(param_1, local_1c, &local_20);
   uVar2 = get_scale();
   uVar1 = (uint)local_1c[0] ^ _LC0;
   *(ulong*)this = CONCAT44(local_1c[0], local_20);
   *(ulong*)( this + 8 ) = CONCAT44(local_20, uVar1);
   for (int i_1833 = 0; i_1833 < 2; i_1833++) {
      Vector2::normalize();
   }
   fVar3 = (float)( (ulong)uVar2 >> 0x20 );
   *(float*)this = (float)uVar2 * *(float*)this;
   *(float*)( this + 4 ) = (float)uVar2 * *(float*)( this + 4 );
   *(float*)( this + 8 ) = fVar3 * *(float*)( this + 8 );
   *(float*)( this + 0xc ) = fVar3 * *(float*)( this + 0xc );
   return;
}/* Transform2D::set_scale(Vector2 const&) */void Transform2D::set_scale(Transform2D *this, Vector2 *param_1) {
   float fVar1;
   for (int i_1834 = 0; i_1834 < 2; i_1834++) {
      Vector2::normalize();
   }
   fVar1 = *(float*)param_1;
   *(float*)this = *(float*)this * fVar1;
   *(float*)( this + 4 ) = fVar1 * *(float*)( this + 4 );
   fVar1 = *(float*)( param_1 + 4 );
   *(float*)( this + 8 ) = *(float*)( this + 8 ) * fVar1;
   *(float*)( this + 0xc ) = fVar1 * *(float*)( this + 0xc );
   return;
}/* Transform2D::scale(Vector2 const&) */void Transform2D::scale(Transform2D *this, Vector2 *param_1) {
   *(float*)this = *(float*)this * *(float*)param_1;
   *(float*)( this + 4 ) = *(float*)( this + 4 ) * *(float*)( param_1 + 4 );
   *(float*)( this + 8 ) = *(float*)( this + 8 ) * *(float*)param_1;
   *(float*)( this + 0xc ) = *(float*)( this + 0xc ) * *(float*)( param_1 + 4 );
   *(ulong*)( this + 0x10 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x10 ) >> 0x20 ) * (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ), (float)*(undefined8*)( this + 0x10 ) * (float)*(undefined8*)param_1);
   return;
}/* Transform2D::scale_basis(Vector2 const&) */void Transform2D::scale_basis(Transform2D *this, Vector2 *param_1) {
   *(float*)this = *(float*)this * *(float*)param_1;
   *(float*)( this + 4 ) = *(float*)( this + 4 ) * *(float*)( param_1 + 4 );
   *(float*)( this + 8 ) = *(float*)( this + 8 ) * *(float*)param_1;
   *(float*)( this + 0xc ) = *(float*)( this + 0xc ) * *(float*)( param_1 + 4 );
   return;
}/* Transform2D::translate_local(float, float) */void Transform2D::translate_local(Transform2D *this, float param_1, float param_2) {
   *(ulong*)( this + 0x10 ) = CONCAT44((float)( ( ulong ) * (undefined8*)this >> 0x20 ) * param_1 + (float)( ( ulong ) * (undefined8*)( this + 8 ) >> 0x20 ) * param_2 + (float)( ( ulong ) * (undefined8*)( this + 0x10 ) >> 0x20 ), (float)*(undefined8*)this * param_1 + (float)*(undefined8*)( this + 8 ) * param_2 + (float)*(undefined8*)( this + 0x10 ));
   return;
}/* Transform2D::translate_local(Vector2 const&) */void Transform2D::translate_local(Transform2D *this, Vector2 *param_1) {
   float fVar1;
   float fVar2;
   fVar1 = (float)*(undefined8*)param_1;
   fVar2 = (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
   *(ulong*)( this + 0x10 ) = CONCAT44(fVar1 * (float)( ( ulong ) * (undefined8*)this >> 0x20 ) + fVar2 * (float)( ( ulong ) * (undefined8*)( this + 8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( this + 0x10 ) >> 0x20 ), fVar1 * (float)*(undefined8*)this + fVar2 * (float)*(undefined8*)( this + 8 ) + (float)*(undefined8*)( this + 0x10 ));
   return;
}/* Transform2D::orthonormalize() */void Transform2D::orthonormalize(Transform2D *this) {
   long in_FS_OFFSET;
   float fVar1;
   undefined8 local_30;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = *(undefined8*)this;
   local_28 = *(undefined8*)( this + 8 );
   Vector2::normalize();
   fVar1 = (float)Vector2::dot((Vector2*)&local_30);
   local_28 = CONCAT44((float)( (ulong)local_28 >> 0x20 ) - fVar1 * (float)( (ulong)local_30 >> 0x20 ), (float)local_28 - fVar1 * (float)local_30);
   Vector2::normalize();
   *(undefined8*)this = local_30;
   *(undefined8*)( this + 8 ) = local_28;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Transform2D::orthonormalized() const */void Transform2D::orthonormalized(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 *in_RSI;
   Transform2D *in_RDI;
   uVar1 = *in_RSI;
   uVar2 = in_RSI[1];
   *(undefined8*)( in_RDI + 0x10 ) = in_RSI[2];
   *(undefined8*)in_RDI = uVar1;
   *(undefined8*)( in_RDI + 8 ) = uVar2;
   orthonormalize(in_RDI);
   return;
}/* Transform2D::is_conformal() const */undefined4 Transform2D::is_conformal(Transform2D *this) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   fVar1 = *(float*)( this + 0xc );
   fVar3 = *(float*)this;
   if (fVar1 != fVar3) {
      fVar2 = _LC10;
      if (_LC10 <= ABS(fVar3) * _LC10) {
         fVar2 = ABS(fVar3) * _LC10;
      }
      if (fVar2 <= ABS(fVar3 - fVar1)) goto LAB_001008cc;
   }
   fVar2 = *(float*)( this + 4 );
   if ((float)( ( uint ) * (float*)( this + 8 ) ^ _LC0 ) == fVar2) {
      return 1;
   }
   fVar4 = _LC10;
   if (_LC10 <= ABS(fVar2) * _LC10) {
      fVar4 = ABS(fVar2) * _LC10;
   }
   if (ABS(*(float*)( this + 8 ) + fVar2) < fVar4) {
      return 1;
   }
   LAB_001008cc:if (fVar3 != (float)( _LC0 ^ (uint)fVar1 )) {
      fVar2 = _LC10;
      if (_LC10 <= ABS(fVar3) * _LC10) {
         fVar2 = ABS(fVar3) * _LC10;
      }
      if (fVar2 <= ABS(fVar1 + fVar3)) {
         return 0;
      }
   }
   fVar1 = *(float*)( this + 4 );
   if (*(float*)( this + 8 ) == fVar1) {
      return 1;
   }
   fVar2 = ABS(fVar1 - *(float*)( this + 8 ));
   fVar3 = _LC10;
   if (_LC10 <= ABS(fVar1) * _LC10) {
      fVar3 = ABS(fVar1) * _LC10;
   }
   return CONCAT31(( int3 )((uint)fVar2 >> 8), fVar2 < fVar3);
}/* Transform2D::is_equal_approx(Transform2D const&) const */undefined8 Transform2D::is_equal_approx(Transform2D *param_1) {
   char cVar1;
   undefined8 uVar2;
   cVar1 = Vector2::is_equal_approx((Vector2*)param_1);
   if (cVar1 != '\0') {
      cVar1 = Vector2::is_equal_approx((Vector2*)( param_1 + 8 ));
      if (cVar1 != '\0') {
         uVar2 = Vector2::is_equal_approx((Vector2*)( param_1 + 0x10 ));
         return uVar2;
      }
   }
   return 0;
}/* Transform2D::is_finite() const */undefined8 Transform2D::is_finite(void) {
   char cVar1;
   undefined8 uVar2;
   cVar1 = Vector2::is_finite();
   if (cVar1 != '\0') {
      cVar1 = Vector2::is_finite();
      if (cVar1 != '\0') {
         uVar2 = Vector2::is_finite();
         return uVar2;
      }
   }
   return 0;
}/* Transform2D::looking_at(Vector2 const&) const */Vector2 *Transform2D::looking_at(Vector2 *param_1) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   undefined8 *in_RDX;
   float *in_RSI;
   long in_FS_OFFSET;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar8;
   undefined8 uVar7;
   uint uVar9;
   float fVar10;
   float fVar11;
   float local_50;
   float local_4c;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar4 = atan2f(in_RSI[1], *in_RSI);
   sincosf(fVar4, &local_4c, &local_50);
   local_38 = *(undefined8*)( in_RSI + 4 );
   local_48 = *(undefined8*)in_RSI;
   uStack_40 = *(undefined8*)( in_RSI + 2 );
   uVar9 = (uint)local_4c ^ _LC0;
   *(undefined8*)( param_1 + 0x10 ) = local_38;
   *(ulong*)param_1 = CONCAT44(local_4c, local_50);
   *(ulong*)( param_1 + 8 ) = CONCAT44(local_50, uVar9);
   affine_invert((Transform2D*)&local_48);
   fVar4 = (float)*in_RDX;
   fVar8 = (float)( ( ulong ) * in_RDX >> 0x20 );
   fVar10 = (float)uStack_40;
   uVar1 = (ulong)uStack_40 >> 0x20;
   fVar11 = (float)local_48;
   uVar2 = (ulong)local_48 >> 0x20;
   fVar5 = (float)local_38;
   uVar3 = (ulong)local_38 >> 0x20;
   fVar6 = atan2f(*(float*)( param_1 + 4 ), *(float*)param_1);
   uVar7 = get_scale();
   local_48 = CONCAT44(( fVar8 * (float)uVar1 + fVar4 * (float)uVar2 + (float)uVar3 ) * (float)( (ulong)uVar7 >> 0x20 ), ( fVar8 * fVar10 + fVar4 * fVar11 + fVar5 ) * (float)uVar7);
   fVar4 = (float)Vector2::angle();
   set_rotation((Transform2D*)param_1, fVar4 + fVar6);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Transform2D::TEMPNAMEPLACEHOLDERVALUE(Transform2D const&) const */undefined8 Transform2D::operator ==(Transform2D *this, Transform2D *param_1) {
   long lVar1;
   lVar1 = 0;
   while (( *(float*)( this + lVar1 ) == *(float*)( param_1 + lVar1 ) && ( *(float*)( this + lVar1 + 4 ) == *(float*)( param_1 + lVar1 + 4 ) ) )) {
      lVar1 = lVar1 + 8;
      if (lVar1 == 0x18) {
         return 1;
      }
   };
   return 0;
}/* Transform2D::TEMPNAMEPLACEHOLDERVALUE(Transform2D const&) const */undefined8 Transform2D::operator !=(Transform2D *this, Transform2D *param_1) {
   long lVar1;
   lVar1 = 0;
   while (( *(float*)( this + lVar1 ) == *(float*)( param_1 + lVar1 ) && ( *(float*)( this + lVar1 + 4 ) == *(float*)( param_1 + lVar1 + 4 ) ) )) {
      lVar1 = lVar1 + 8;
      if (lVar1 == 0x18) {
         return 0;
      }
   };
   return 1;
}/* Transform2D::TEMPNAMEPLACEHOLDERVALUE(Transform2D const&) */void Transform2D::operator *=(Transform2D *this, Transform2D *param_1) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   fVar1 = *(float*)this;
   fVar2 = *(float*)( this + 4 );
   fVar5 = (float)*(undefined8*)( param_1 + 0x10 );
   fVar6 = (float)( ( ulong ) * (undefined8*)( param_1 + 0x10 ) >> 0x20 );
   *(ulong*)( this + 0x10 ) = CONCAT44(fVar5 * (float)( ( ulong ) * (undefined8*)this >> 0x20 ) + fVar6 * (float)( ( ulong ) * (undefined8*)( this + 8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( this + 0x10 ) >> 0x20 ), fVar5 * (float)*(undefined8*)this + fVar6 * (float)*(undefined8*)( this + 8 ) + (float)*(undefined8*)( this + 0x10 ));
   fVar5 = *(float*)param_1;
   fVar6 = *(float*)( param_1 + 4 );
   fVar3 = *(float*)( param_1 + 8 );
   fVar4 = *(float*)( param_1 + 0xc );
   *(float*)this = fVar6 * *(float*)( this + 8 ) + fVar5 * fVar1;
   *(float*)( this + 4 ) = fVar6 * *(float*)( this + 0xc ) + fVar5 * fVar2;
   *(float*)( this + 8 ) = fVar4 * *(float*)( this + 8 ) + fVar3 * fVar1;
   *(float*)( this + 0xc ) = fVar4 * *(float*)( this + 0xc ) + fVar3 * fVar2;
   return;
}/* Transform2D::rotate(float) */void Transform2D::rotate(Transform2D *this, float param_1) {
   long in_FS_OFFSET;
   float local_50;
   float local_4c[9];
   float local_28;
   float fStack_24;
   uint uStack_20;
   float fStack_1c;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   sincosf(param_1, local_4c, &local_50);
   local_18 = 0;
   uStack_20 = (uint)local_4c[0] ^ _LC0;
   local_28 = local_50;
   fStack_24 = local_4c[0];
   fStack_1c = local_50;
   operator*=((Transform2D *)&
   local_28,this;
   *(undefined8*)( this + 0x10 ) = local_18;
   *(ulong*)this = CONCAT44(fStack_24, local_28);
   *(ulong*)( this + 8 ) = CONCAT44(fStack_1c, uStack_20);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Transform2D::TEMPNAMEPLACEHOLDERVALUE(Transform2D const&) const */Transform2D * __thiscall Transform2D::operator*(Transform2D *this,Transform2D *param_1){
   undefined8 uVar1;
   undefined8 uVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float *in_RDX;
   float fVar9;
   float fVar10;
   fVar3 = *(float*)param_1;
   fVar4 = *(float*)( param_1 + 4 );
   fVar5 = *(float*)( param_1 + 8 );
   fVar6 = *(float*)( param_1 + 0xc );
   uVar1 = *(undefined8*)( in_RDX + 4 );
   uVar2 = *(undefined8*)( param_1 + 0x10 );
   *(float*)this = fVar3;
   *(float*)( this + 4 ) = fVar4;
   *(float*)( this + 8 ) = fVar5;
   *(float*)( this + 0xc ) = fVar6;
   fVar9 = (float)uVar1;
   fVar10 = (float)( (ulong)uVar1 >> 0x20 );
   *(ulong*)( this + 0x10 ) = CONCAT44(fVar9 * fVar4 + fVar10 * (float)( ( ulong ) * (undefined8*)( this + 8 ) >> 0x20 ) + (float)( (ulong)uVar2 >> 0x20 ), fVar9 * fVar3 + fVar10 * (float)*(undefined8*)( this + 8 ) + (float)uVar2);
   fVar9 = *in_RDX;
   fVar10 = in_RDX[1];
   fVar7 = in_RDX[2];
   fVar8 = in_RDX[3];
   *(float*)this = fVar5 * fVar10 + fVar3 * fVar9;
   *(float*)( this + 4 ) = fVar6 * fVar10 + fVar4 * fVar9;
   *(float*)( this + 8 ) = fVar5 * fVar8 + fVar3 * fVar7;
   *(float*)( this + 0xc ) = fVar6 * fVar8 + fVar4 * fVar7;
   return this;
}/* Transform2D::scaled(Vector2 const&) const */Vector2 *Transform2D::scaled(Vector2 *param_1) {
   float fVar1;
   float fVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float *in_RDX;
   float *in_RSI;
   fVar1 = in_RDX[1];
   fVar2 = *in_RDX;
   fVar5 = in_RSI[1];
   fVar6 = in_RSI[2];
   fVar7 = in_RSI[3];
   uVar3 = *(undefined8*)( in_RSI + 4 );
   uVar4 = *(undefined8*)in_RDX;
   *(float*)param_1 = fVar2 * *in_RSI;
   *(float*)( param_1 + 4 ) = fVar1 * fVar5;
   *(float*)( param_1 + 8 ) = fVar2 * fVar6;
   *(float*)( param_1 + 0xc ) = fVar1 * fVar7;
   *(ulong*)( param_1 + 0x10 ) = CONCAT44((float)( (ulong)uVar3 >> 0x20 ) * (float)( (ulong)uVar4 >> 0x20 ), (float)uVar3 * (float)uVar4);
   return param_1;
}/* Transform2D::scaled_local(Vector2 const&) const */Vector2 *Transform2D::scaled_local(Vector2 *param_1) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float *in_RDX;
   float *in_RSI;
   fVar1 = in_RDX[1];
   fVar2 = *in_RDX;
   fVar3 = *in_RSI;
   fVar4 = in_RSI[1];
   fVar5 = in_RSI[2];
   fVar6 = in_RSI[3];
   *(undefined8*)( param_1 + 0x10 ) = *(undefined8*)( in_RSI + 4 );
   *(float*)param_1 = fVar2 * fVar3;
   *(float*)( param_1 + 4 ) = fVar2 * fVar4;
   *(float*)( param_1 + 8 ) = fVar1 * fVar5;
   *(float*)( param_1 + 0xc ) = fVar1 * fVar6;
   return param_1;
}/* Transform2D::untranslated() const */void Transform2D::untranslated(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 *in_RSI;
   undefined8 *in_RDI;
   uVar1 = *in_RSI;
   uVar2 = in_RSI[1];
   in_RDI[2] = 0;
   *in_RDI = uVar1;
   in_RDI[1] = uVar2;
   return;
}/* Transform2D::translated(Vector2 const&) const */Vector2 *Transform2D::translated(Vector2 *param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 *in_RDX;
   undefined8 *in_RSI;
   uVar1 = *in_RDX;
   uVar2 = in_RSI[2];
   *(undefined8*)param_1 = *in_RSI;
   uVar3 = in_RSI[1];
   *(ulong*)( param_1 + 0x10 ) = CONCAT44((float)( (ulong)uVar1 >> 0x20 ) + (float)( (ulong)uVar2 >> 0x20 ), (float)uVar1 + (float)uVar2);
   *(undefined8*)( param_1 + 8 ) = uVar3;
   return param_1;
}/* Transform2D::translated_local(Vector2 const&) const */Vector2 *Transform2D::translated_local(Vector2 *param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 *in_RDX;
   undefined8 *in_RSI;
   float fVar4;
   float fVar5;
   uVar1 = *in_RSI;
   fVar4 = (float)*in_RDX;
   fVar5 = (float)( ( ulong ) * in_RDX >> 0x20 );
   uVar2 = in_RSI[1];
   *(undefined8*)param_1 = *in_RSI;
   uVar3 = in_RSI[2];
   *(undefined8*)( param_1 + 8 ) = in_RSI[1];
   *(ulong*)( param_1 + 0x10 ) = CONCAT44(fVar4 * (float)( (ulong)uVar1 >> 0x20 ) + (float)( (ulong)uVar2 >> 0x20 ) * fVar5 + (float)( (ulong)uVar3 >> 0x20 ), fVar4 * (float)uVar1 + (float)uVar2 * fVar5 + (float)uVar3);
   return param_1;
}/* Transform2D::rotated(float) const */void Transform2D::rotated(float param_1) {
   Transform2D *in_RSI;
   Transform2D *in_RDI;
   long in_FS_OFFSET;
   uint uVar1;
   float local_40;
   float local_3c[7];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   sincosf(param_1, local_3c, &local_40);
   *(undefined8*)( in_RDI + 0x10 ) = 0;
   uVar1 = (uint)local_3c[0] ^ _LC0;
   *(float*)in_RDI = local_40;
   *(float*)( in_RDI + 4 ) = local_3c[0];
   *(uint*)( in_RDI + 8 ) = uVar1;
   *(float*)( in_RDI + 0xc ) = local_40;
   operator*=(in_RDI,in_RSI)
   ;;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Transform2D::rotated_local(float) const */void Transform2D::rotated_local(float param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 *in_RSI;
   Transform2D *in_RDI;
   long in_FS_OFFSET;
   float local_40;
   float local_3c;
   float local_38;
   float fStack_34;
   uint uStack_30;
   float fStack_2c;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   sincosf(param_1, &local_3c, &local_40);
   uVar1 = *in_RSI;
   uVar2 = in_RSI[1];
   local_28 = 0;
   uStack_30 = (uint)local_3c ^ _LC0;
   *(undefined8*)( in_RDI + 0x10 ) = in_RSI[2];
   *(undefined8*)in_RDI = uVar1;
   *(undefined8*)( in_RDI + 8 ) = uVar2;
   local_38 = local_40;
   fStack_34 = local_3c;
   fStack_2c = local_40;
   operator*=(in_RDI,(Transform2D *)&local_38);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Transform2D::determinant() const */float Transform2D::determinant(Transform2D *this) {
   return *(float*)this * *(float*)( this + 0xc ) - *(float*)( this + 4 ) * *(float*)( this + 8 );
}/* Transform2D::interpolate_with(Transform2D const&, float) const */Transform2D *Transform2D::interpolate_with(Transform2D *param_1, float param_2) {
   float *in_RDX;
   float *in_RSI;
   long in_FS_OFFSET;
   ushort in_FPUStatusWord;
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   float fVar7;
   float fVar8;
   undefined8 local_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar7 = (float)*(undefined8*)( in_RSI + 4 );
   fVar1 = (float)( ( ulong ) * (undefined8*)( in_RSI + 4 ) >> 0x20 );
   local_38 = CONCAT44(( (float)( ( ulong ) * (undefined8*)( in_RDX + 4 ) >> 0x20 ) - fVar1 ) * param_2 + fVar1, ( (float)*(undefined8*)( in_RDX + 4 ) - fVar7 ) * param_2 + fVar7);
   fVar1 = (float)get_skew();
   fVar2 = (float)get_skew();
   fVar7 = fVar1 - fVar2;
   do {
      fVar7 = fVar7 - ( fVar7 / _LC11 ) * _LC11;
   } while ( ( in_FPUStatusWord & 0x400 ) != 0 );
   if (NAN(fVar7)) {
      fmodf(fVar1 - fVar2, _LC11);
   }
   fVar1 = fVar7 + fVar7;
   do {
      fVar1 = fVar1 - ( fVar1 / _LC11 ) * _LC11;
   } while ( ( in_FPUStatusWord & 0x400 ) != 0 );
   if (NAN(fVar1)) {
      fmodf(fVar7 + fVar7, _LC11);
   }
   uVar5 = get_scale();
   uVar6 = get_scale();
   fVar8 = (float)( (ulong)uVar5 >> 0x20 );
   local_40 = CONCAT44(( (float)( (ulong)uVar6 >> 0x20 ) - fVar8 ) * param_2 + fVar8, ( (float)uVar6 - (float)uVar5 ) * param_2 + (float)uVar5);
   fVar3 = atan2f(in_RDX[1], *in_RDX);
   fVar4 = atan2f(in_RSI[1], *in_RSI);
   fVar8 = fVar3 - fVar4;
   do {
      fVar8 = fVar8 - ( fVar8 / _LC11 ) * _LC11;
   } while ( ( in_FPUStatusWord & 0x400 ) != 0 );
   if (NAN(fVar8)) {
      fmodf(fVar3 - fVar4, _LC11);
   }
   fVar3 = fVar8 + fVar8;
   do {
      fVar3 = fVar3 - ( fVar3 / _LC11 ) * _LC11;
   } while ( ( in_FPUStatusWord & 0x400 ) != 0 );
   if (NAN(fVar3)) {
      fmodf(fVar8 + fVar8, _LC11);
   }
   Transform2D(param_1, ( fVar3 - fVar8 ) * param_2 + fVar4, (Vector2*)&local_40, ( fVar1 - fVar7 ) * param_2 + fVar2, (Vector2*)&local_38);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Transform2D::TEMPNAMEPLACEHOLDERVALUE(float) */void Transform2D::operator *=(Transform2D *this, float param_1) {
   *(float*)this = param_1 * *(float*)this;
   *(float*)( this + 4 ) = param_1 * *(float*)( this + 4 );
   *(float*)( this + 8 ) = param_1 * *(float*)( this + 8 );
   *(float*)( this + 0xc ) = param_1 * *(float*)( this + 0xc );
   *(ulong*)( this + 0x10 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x10 ) >> 0x20 ) * param_1, (float)*(undefined8*)( this + 0x10 ) * param_1);
   return;
}/* Transform2D::TEMPNAMEPLACEHOLDERVALUE(float) const */Transform2D * __thiscall Transform2D::operator*(Transform2D *this,float param_1){
   undefined8 uVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float *in_RSI;
   fVar2 = in_RSI[1];
   fVar3 = in_RSI[2];
   fVar4 = in_RSI[3];
   uVar1 = *(undefined8*)( in_RSI + 4 );
   *(float*)this = *in_RSI * param_1;
   *(float*)( this + 4 ) = fVar2 * param_1;
   *(float*)( this + 8 ) = fVar3 * param_1;
   *(float*)( this + 0xc ) = fVar4 * param_1;
   *(ulong*)( this + 0x10 ) = CONCAT44(param_1 * (float)( (ulong)uVar1 >> 0x20 ), param_1 * (float)uVar1);
   return this;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Transform2D::TEMPNAMEPLACEHOLDERVALUE(float) */void Transform2D::operator /=(Transform2D *this, float param_1) {
   undefined1 auVar1[16];
   ulong uVar2;
   undefined4 uVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   uVar3 = (undefined4)__LC6;
   uVar2 = (ulong)__LC6 >> 0x20;
   auVar1._4_4_ = param_1;
   auVar1._0_4_ = param_1;
   auVar1._8_4_ = param_1;
   auVar1._12_4_ = param_1;
   auVar4 = divps(*(undefined1(*) [16])this, auVar1);
   *(undefined1(*) [16])this = auVar4;
   auVar5._8_8_ = 0;
   auVar5._0_8_ = *(ulong*)( this + 0x10 );
   auVar4._4_4_ = param_1;
   auVar4._0_4_ = param_1;
   auVar4._8_4_ = uVar3;
   auVar4._12_4_ = (int)uVar2;
   auVar4 = divps(auVar5, auVar4);
   *(long*)( this + 0x10 ) = auVar4._0_8_;
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Transform2D::TEMPNAMEPLACEHOLDERVALUE(float) const */Transform2D * __thiscall Transform2D::operator/(Transform2D *this,float param_1){
   undefined1(*in_RSI)[16];
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   auVar1._8_8_ = 0;
   auVar1._0_8_ = *(ulong*)in_RSI[1];
   auVar3._4_4_ = param_1;
   auVar3._0_4_ = param_1;
   auVar3._8_4_ = param_1;
   auVar3._12_4_ = param_1;
   auVar3 = divps(*in_RSI, auVar3);
   auVar2._4_4_ = param_1;
   auVar2._0_4_ = param_1;
   auVar2._8_4_ = (int)__LC6;
   auVar2._12_4_ = (int)( (ulong)__LC6 >> 0x20 );
   auVar2 = divps(auVar1, auVar2);
   *(undefined1(*) [16])this = auVar3;
   *(long*)( this + 0x10 ) = auVar2._0_8_;
   return this;
}/* Transform2D::operator String() const */Transform2D * __thiscall Transform2D::operator_cast_to_String(Transform2D *this){
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long in_FS_OFFSET;
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
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 0;
   local_50 = 1;
   local_58 = "]";
   String::parse_latin1((StrRange*)&local_60);
   Vector2::operator_cast_to_String((Vector2*)&local_68);
   local_78 = 0;
   local_58 = ", O: ";
   local_50 = 5;
   String::parse_latin1((StrRange*)&local_78);
   Vector2::operator_cast_to_String((Vector2*)&local_88);
   local_58 = ", Y: ";
   local_98 = 0;
   local_50 = 5;
   String::parse_latin1((StrRange*)&local_98);
   Vector2::operator_cast_to_String((Vector2*)&local_a8);
   operator+((char *)&
   local_a0,&_LC18;
   String::operator +((String*)&local_90, (String*)&local_a0);
   String::operator +((String*)&local_80, (String*)&local_90);
   String::operator +((String*)&local_70, (String*)&local_80);
   String::operator +((String*)&local_58, (String*)&local_70);
   String::operator +((String*)this, (String*)&local_58);
   pcVar3 = local_58;
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
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
