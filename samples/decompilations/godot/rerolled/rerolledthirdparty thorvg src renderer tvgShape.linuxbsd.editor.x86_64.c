/* tvg::Shape::type() const */undefined8 tvg::Shape::type(void) {
   return 1;
}
/* tvg::Shape::~Shape() */void tvg::Shape::~Shape(Shape *this) {
   undefined8 *puVar1;
   long *plVar2;
   void *pvVar3;
   puVar1 = *(undefined8**)( this + 0x18 );
   *(undefined***)this = &PTR__Shape_001024d8;
   if (puVar1 != (undefined8*)0x0) {
      plVar2 = *(long**)( *(long*)( puVar1[8] + 0x10 ) + 0x18 );
      if (plVar2 != (long*)0x0) {
         ( **(code**)( *plVar2 + 0x40 ) )(plVar2, puVar1[7]);
      }

      if ((long*)puVar1[4] != (long*)0x0) {
         ( **(code**)( *(long*)puVar1[4] + 8 ) )();
      }

      pvVar3 = (void*)puVar1[5];
      if (pvVar3 != (void*)0x0) {
         free(*(void**)( (long)pvVar3 + 0x10 ));
         if (*(long**)( (long)pvVar3 + 8 ) != (long*)0x0) {
            ( **(code**)( **(long**)( (long)pvVar3 + 8 ) + 8 ) )();
         }

         operator_delete(pvVar3, 0x40);
      }

      free((void*)puVar1[2]);
      free((void*)*puVar1);
      operator_delete(puVar1, 0x50);
   }

   tvg::Paint::~Paint((Paint*)this);
   return;
}
/* tvg::Shape::~Shape() */void tvg::Shape::~Shape(Shape *this) {
   ~Shape(this)
   ;;
   operator_delete(this, 0x20);
   return;
}
/* tvg::Shape::Shape() */void tvg::Shape::Shape(Shape *this) {
   undefined8 *puVar1;
   tvg::Paint::Paint((Paint*)this);
   *(undefined***)this = &PTR__Shape_001024d8;
   puVar1 = (undefined8*)operator_new(0x50);
   *puVar1 = 0;
   puVar1[1] = 0;
   puVar1[2] = 0;
   puVar1[3] = 0;
   puVar1[6] = 0;
   puVar1[7] = 0;
   puVar1[8] = this;
   *(undefined2*)( puVar1 + 9 ) = 0;
   *(undefined8**)( this + 0x18 ) = puVar1;
   *(undefined1(*) [16])( puVar1 + 4 ) = (undefined1[16])0x0;
   return;
}
/* tvg::Shape::gen() */Shape * __thiscall tvg::Shape::gen(Shape *this){
   Shape *this_00;
   this_00 = (Shape*)operator_new(0x20);
   Shape(this_00);
   *(Shape**)this = this_00;
   return this;
}
/* tvg::Shape::identifier() */undefined8 tvg::Shape::identifier(void) {
   return 1;
}
/* tvg::Shape::reset() */undefined8 tvg::Shape::reset(Shape *this) {
   long lVar1;
   lVar1 = *(long*)( this + 0x18 );
   *(byte*)( lVar1 + 0x48 ) = *(byte*)( lVar1 + 0x48 ) | 1;
   *(undefined4*)( lVar1 + 8 ) = 0;
   *(undefined4*)( lVar1 + 0x18 ) = 0;
   return 0;
}
/* tvg::Shape::pathCommands(tvg::PathCommand const**) const */undefined4 tvg::Shape::pathCommands(Shape *this, PathCommand **param_1) {
   undefined8 *puVar1;
   puVar1 = *(undefined8**)( this + 0x18 );
   if (param_1 != (PathCommand**)0x0) {
      *param_1 = (PathCommand*)*puVar1;
   }

   return *(undefined4*)( puVar1 + 1 );
}
/* tvg::Shape::pathCoords(tvg::Point const**) const */undefined4 tvg::Shape::pathCoords(Shape *this, Point **param_1) {
   long lVar1;
   lVar1 = *(long*)( this + 0x18 );
   if (param_1 != (Point**)0x0) {
      *param_1 = *(Point**)( lVar1 + 0x10 );
   }

   return *(undefined4*)( lVar1 + 0x18 );
}
/* tvg::Shape::appendPath(tvg::PathCommand const*, unsigned int, tvg::Point const*, unsigned int) */undefined8 tvg::Shape::appendPath(Shape *this, PathCommand *param_1, uint param_2, Point *param_3, uint param_4) {
   undefined8 *puVar1;
   long *plVar2;
   long lVar3;
   void *pvVar4;
   uint uVar5;
   if (param_2 == 0) {
      return 1;
   }

   if (( ( param_4 == 0 ) || ( param_1 == (PathCommand*)0x0 ) ) || ( param_3 == (Point*)0x0 )) {
      return 1;
   }

   puVar1 = *(undefined8**)( this + 0x18 );
   uVar5 = param_2 + *(int*)( puVar1 + 1 );
   if (*(uint*)( (long)puVar1 + 0xc ) < uVar5) {
      *(uint*)( (long)puVar1 + 0xc ) = uVar5;
      pvVar4 = realloc((void*)*puVar1, (ulong)uVar5 << 2);
      uVar5 = param_4 + *(int*)( puVar1 + 3 );
      *puVar1 = pvVar4;
      if (uVar5 <= *(uint*)( (long)puVar1 + 0x1c )) goto LAB_0010025b;
   }
 else {
      uVar5 = param_4 + *(int*)( puVar1 + 3 );
      if (uVar5 <= *(uint*)( (long)puVar1 + 0x1c )) goto LAB_0010025b;
   }

   *(uint*)( (long)puVar1 + 0x1c ) = uVar5;
   pvVar4 = realloc((void*)puVar1[2], (ulong)uVar5 << 3);
   puVar1[2] = pvVar4;
   LAB_0010025b:plVar2 = *(long**)( this + 0x18 );
   memcpy((void*)( *plVar2 + ( ulong ) * (uint*)( plVar2 + 1 ) * 4 ), param_1, (ulong)param_2 << 2);
   memcpy((void*)( plVar2[2] + ( ulong ) * (uint*)( plVar2 + 3 ) * 8 ), param_3, (ulong)param_4 << 3);
   lVar3 = *(long*)( this + 0x18 );
   *(uint*)( plVar2 + 1 ) = (int)plVar2[1] + param_2;
   *(uint*)( plVar2 + 3 ) = (int)plVar2[3] + param_4;
   *(byte*)( lVar3 + 0x48 ) = *(byte*)( lVar3 + 0x48 ) | 1;
   return 0;
}
/* tvg::Shape::moveTo(float, float) */undefined8 tvg::Shape::moveTo(Shape *this, float param_1, float param_2) {
   undefined8 *puVar1;
   uint uVar2;
   void *pvVar3;
   uint uVar4;
   puVar1 = *(undefined8**)( this + 0x18 );
   uVar4 = *(uint*)( puVar1 + 1 );
   pvVar3 = (void*)*puVar1;
   uVar2 = uVar4 + 1;
   if (*(uint*)( (long)puVar1 + 0xc ) < uVar2) {
      uVar4 = ( uVar4 + 2 >> 1 ) + uVar4;
      *(uint*)( (long)puVar1 + 0xc ) = uVar4;
      pvVar3 = realloc(pvVar3, (ulong)uVar4 << 2);
      uVar4 = *(uint*)( puVar1 + 1 );
      *puVar1 = pvVar3;
      uVar2 = uVar4 + 1;
   }

   *(uint*)( puVar1 + 1 ) = uVar2;
   *(undefined4*)( (long)pvVar3 + (ulong)uVar4 * 4 ) = 1;
   uVar4 = *(uint*)( puVar1 + 3 );
   if (uVar4 + 1 <= *(uint*)( (long)puVar1 + 0x1c )) {
      *(uint*)( puVar1 + 3 ) = uVar4 + 1;
      *(ulong*)( (long)puVar1[2] + (ulong)uVar4 * 8 ) = CONCAT44(param_2, param_1);
      return 0;
   }

   uVar4 = ( uVar4 + 2 >> 1 ) + uVar4;
   *(uint*)( (long)puVar1 + 0x1c ) = uVar4;
   pvVar3 = realloc((void*)puVar1[2], (ulong)uVar4 << 3);
   uVar4 = *(uint*)( puVar1 + 3 );
   puVar1[2] = pvVar3;
   *(uint*)( puVar1 + 3 ) = uVar4 + 1;
   *(ulong*)( (long)pvVar3 + (ulong)uVar4 * 8 ) = CONCAT44(param_2, param_1);
   return 0;
}
/* tvg::Shape::lineTo(float, float) */undefined8 tvg::Shape::lineTo(Shape *this, float param_1, float param_2) {
   undefined8 *puVar1;
   long lVar2;
   uint uVar3;
   void *pvVar4;
   uint uVar5;
   puVar1 = *(undefined8**)( this + 0x18 );
   uVar5 = *(uint*)( puVar1 + 1 );
   pvVar4 = (void*)*puVar1;
   uVar3 = uVar5 + 1;
   if (*(uint*)( (long)puVar1 + 0xc ) < uVar3) {
      uVar5 = ( uVar5 + 2 >> 1 ) + uVar5;
      *(uint*)( (long)puVar1 + 0xc ) = uVar5;
      pvVar4 = realloc(pvVar4, (ulong)uVar5 << 2);
      uVar5 = *(uint*)( puVar1 + 1 );
      *puVar1 = pvVar4;
      uVar3 = uVar5 + 1;
   }

   *(uint*)( puVar1 + 1 ) = uVar3;
   *(undefined4*)( (long)pvVar4 + (ulong)uVar5 * 4 ) = 2;
   uVar5 = *(uint*)( puVar1 + 3 );
   pvVar4 = (void*)puVar1[2];
   uVar3 = uVar5 + 1;
   if (*(uint*)( (long)puVar1 + 0x1c ) < uVar3) {
      uVar5 = ( uVar5 + 2 >> 1 ) + uVar5;
      *(uint*)( (long)puVar1 + 0x1c ) = uVar5;
      pvVar4 = realloc(pvVar4, (ulong)uVar5 << 3);
      uVar5 = *(uint*)( puVar1 + 3 );
      puVar1[2] = pvVar4;
      uVar3 = uVar5 + 1;
   }

   *(uint*)( puVar1 + 3 ) = uVar3;
   lVar2 = *(long*)( this + 0x18 );
   *(ulong*)( (long)pvVar4 + (ulong)uVar5 * 8 ) = CONCAT44(param_2, param_1);
   *(byte*)( lVar2 + 0x48 ) = *(byte*)( lVar2 + 0x48 ) | 1;
   return 0;
}
/* tvg::Shape::cubicTo(float, float, float, float, float, float) */undefined8 tvg::Shape::cubicTo(Shape *this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6) {
   Impl::cubicTo(*(Impl**)( this + 0x18 ), param_1, param_2, param_3, param_4, param_5, param_6);
   *(byte*)( *(long*)( this + 0x18 ) + 0x48 ) = *(byte*)( *(long*)( this + 0x18 ) + 0x48 ) | 1;
   return 0;
}
/* tvg::Shape::close() */undefined8 tvg::Shape::close(Shape *this) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   void *__ptr;
   uint uVar3;
   uint uVar4;
   puVar1 = *(undefined8**)( this + 0x18 );
   uVar4 = *(uint*)( puVar1 + 1 );
   __ptr = (void*)*puVar1;
   puVar2 = puVar1;
   if (( uVar4 == 0 ) || ( *(int*)( (long)__ptr + ( ulong )(uVar4 - 1) * 4 ) != 0 )) {
      uVar3 = uVar4 + 1;
      if (*(uint*)( (long)puVar1 + 0xc ) < uVar3) {
         uVar4 = ( uVar4 + 2 >> 1 ) + uVar4;
         *(uint*)( (long)puVar1 + 0xc ) = uVar4;
         __ptr = realloc(__ptr, (ulong)uVar4 << 2);
         uVar4 = *(uint*)( puVar1 + 1 );
         *puVar1 = __ptr;
         puVar2 = *(undefined8**)( this + 0x18 );
         uVar3 = uVar4 + 1;
      }

      *(uint*)( puVar1 + 1 ) = uVar3;
      *(undefined4*)( (long)__ptr + (ulong)uVar4 * 4 ) = 0;
   }

   *(byte*)( puVar2 + 9 ) = *(byte*)( puVar2 + 9 ) | 1;
   return 0;
}
/* tvg::Shape::appendCircle(float, float, float, float) */undefined8 tvg::Shape::appendCircle(Shape *this, float param_1, float param_2, float param_3, float param_4) {
   undefined8 *puVar1;
   uint uVar2;
   undefined8 *puVar3;
   void *pvVar4;
   uint uVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   puVar1 = *(undefined8**)( this + 0x18 );
   fVar8 = param_3 * _LC0;
   fVar6 = _LC0 * param_4;
   uVar5 = *(int*)( puVar1 + 1 ) + 6;
   if (*(uint*)( (long)puVar1 + 0xc ) < uVar5) {
      *(uint*)( (long)puVar1 + 0xc ) = uVar5;
      pvVar4 = realloc((void*)*puVar1, (ulong)uVar5 << 2);
      *puVar1 = pvVar4;
      uVar5 = *(int*)( puVar1 + 3 ) + 0xd;
      if (uVar5 <= *(uint*)( (long)puVar1 + 0x1c )) goto LAB_001005b3;
   }
 else {
      uVar5 = *(int*)( puVar1 + 3 ) + 0xd;
      if (uVar5 <= *(uint*)( (long)puVar1 + 0x1c )) goto LAB_001005b3;
   }

   *(uint*)( (long)puVar1 + 0x1c ) = uVar5;
   pvVar4 = realloc((void*)puVar1[2], (ulong)uVar5 << 3);
   puVar1[2] = pvVar4;
   LAB_001005b3:puVar1 = *(undefined8**)( this + 0x18 );
   fVar9 = param_3 + param_1;
   uVar5 = *(uint*)( puVar1 + 1 );
   pvVar4 = (void*)*puVar1;
   uVar2 = uVar5 + 1;
   if (*(uint*)( (long)puVar1 + 0xc ) < uVar2) {
      uVar5 = ( uVar5 + 2 >> 1 ) + uVar5;
      *(uint*)( (long)puVar1 + 0xc ) = uVar5;
      pvVar4 = realloc(pvVar4, (ulong)uVar5 << 2);
      uVar5 = *(uint*)( puVar1 + 1 );
      *puVar1 = pvVar4;
      uVar2 = uVar5 + 1;
   }

   *(uint*)( puVar1 + 1 ) = uVar2;
   *(undefined4*)( (long)pvVar4 + (ulong)uVar5 * 4 ) = 1;
   uVar5 = *(uint*)( puVar1 + 3 );
   pvVar4 = (void*)puVar1[2];
   uVar2 = uVar5 + 1;
   if (*(uint*)( (long)puVar1 + 0x1c ) < uVar2) {
      uVar5 = ( uVar5 + 2 >> 1 ) + uVar5;
      *(uint*)( (long)puVar1 + 0x1c ) = uVar5;
      pvVar4 = realloc(pvVar4, (ulong)uVar5 << 3);
      uVar5 = *(uint*)( puVar1 + 3 );
      puVar1[2] = pvVar4;
      uVar2 = uVar5 + 1;
   }

   *(uint*)( puVar1 + 3 ) = uVar2;
   *(ulong*)( (long)pvVar4 + (ulong)uVar5 * 8 ) = CONCAT44(param_2, fVar9);
   fVar10 = param_4 + param_2;
   fVar12 = fVar8 + param_1;
   fVar7 = fVar6 + param_2;
   Impl::cubicTo(*(Impl**)( this + 0x18 ), fVar9, fVar7, fVar12, fVar10, param_1, fVar10);
   fVar11 = param_1 - param_3;
   fVar8 = param_1 - fVar8;
   Impl::cubicTo(*(Impl**)( this + 0x18 ), fVar8, fVar10, fVar11, fVar7, fVar11, param_2);
   fVar7 = param_2 - param_4;
   fVar6 = param_2 - fVar6;
   Impl::cubicTo(*(Impl**)( this + 0x18 ), fVar11, fVar6, fVar8, fVar7, param_1, fVar7);
   Impl::cubicTo(*(Impl**)( this + 0x18 ), fVar12, fVar7, fVar9, fVar6, fVar9, param_2);
   puVar1 = *(undefined8**)( this + 0x18 );
   uVar5 = *(uint*)( puVar1 + 1 );
   pvVar4 = (void*)*puVar1;
   puVar3 = puVar1;
   if (( uVar5 == 0 ) || ( *(int*)( (long)pvVar4 + ( ulong )(uVar5 - 1) * 4 ) != 0 )) {
      uVar2 = uVar5 + 1;
      if (*(uint*)( (long)puVar1 + 0xc ) < uVar2) {
         uVar5 = ( uVar5 + 2 >> 1 ) + uVar5;
         *(uint*)( (long)puVar1 + 0xc ) = uVar5;
         pvVar4 = realloc(pvVar4, (ulong)uVar5 << 2);
         uVar5 = *(uint*)( puVar1 + 1 );
         *puVar1 = pvVar4;
         puVar3 = *(undefined8**)( this + 0x18 );
         uVar2 = uVar5 + 1;
      }

      *(uint*)( puVar1 + 1 ) = uVar2;
      *(undefined4*)( (long)pvVar4 + (ulong)uVar5 * 4 ) = 0;
   }

   *(byte*)( puVar3 + 9 ) = *(byte*)( puVar3 + 9 ) | 1;
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* tvg::Shape::appendArc(float, float, float, float, float, bool) */undefined8 tvg::Shape::appendArc(Shape *this, float param_1, float param_2, float param_3, float param_4, float param_5, bool param_6) {
   uint uVar1;
   ulong uVar2;
   undefined8 uVar3;
   void *pvVar4;
   uint uVar5;
   undefined8 *puVar6;
   int iVar7;
   undefined8 *puVar8;
   int iVar9;
   int iVar10;
   ushort in_FPUStatusWord;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float local_78;
   float local_58;
   float local_40;
   float local_3c[3];
   if (( __LC1 <= param_5 ) || ( param_5 <= _LC2 )) {
      uVar3 = appendCircle(this, param_1, param_2, param_3, param_3);
      return uVar3;
   }

   fVar15 = param_5 * _LC3;
   local_78 = param_4 * _LC3;
   fVar11 = (float)( ( uint )(fVar15 / _LC4) & _LC5 );
   iVar9 = (int)fVar11;
   iVar9 = iVar9 + ( uint )(_LC6 < fVar11 - (float)iVar9);
   iVar10 = -1;
   local_58 = fVar15;
   if (0.0 <= fVar15) {
      iVar10 = 1;
   }

   do {
      local_58 = local_58 - ( local_58 / _LC4 ) * _LC4;
   }
 while ( ( in_FPUStatusWord & 0x400 ) != 0 );
   if (NAN(local_58)) {
      fmodf(fVar15, _LC4);
   }
 else if ((float)( _LC5 & (uint)local_58 ) < _LC6) {
      local_58 = (float)iVar10 * _LC4;
   }

   sincosf(local_78, local_3c, &local_40);
   puVar8 = *(undefined8**)( this + 0x18 );
   uVar1 = *(uint*)( puVar8 + 1 );
   uVar2 = (ulong)uVar1;
   fVar11 = param_3 * local_40;
   fVar15 = param_3 * local_3c[0];
   pvVar4 = (void*)*puVar8;
   uVar5 = uVar1 + 1;
   if (param_6) {
      if (*(uint*)( (long)puVar8 + 0xc ) < uVar5) {
         uVar1 = uVar1 + ( uVar1 + 2 >> 1 );
         *(uint*)( (long)puVar8 + 0xc ) = uVar1;
         pvVar4 = realloc(pvVar4, (ulong)uVar1 * 4);
         *puVar8 = pvVar4;
         uVar2 = ( ulong ) * (uint*)( puVar8 + 1 );
         uVar5 = *(uint*)( puVar8 + 1 ) + 1;
      }

      *(uint*)( puVar8 + 1 ) = uVar5;
      *(undefined4*)( (long)pvVar4 + uVar2 * 4 ) = 1;
      uVar1 = *(uint*)( puVar8 + 3 );
      pvVar4 = (void*)puVar8[2];
      uVar5 = uVar1 + 1;
      if (*(uint*)( (long)puVar8 + 0x1c ) < uVar5) {
         uVar1 = uVar1 + ( uVar1 + 2 >> 1 );
         *(uint*)( (long)puVar8 + 0x1c ) = uVar1;
         pvVar4 = realloc(pvVar4, (ulong)uVar1 * 8);
         puVar8[2] = pvVar4;
         uVar1 = *(uint*)( puVar8 + 3 );
         uVar5 = uVar1 + 1;
      }

      *(uint*)( puVar8 + 3 ) = uVar5;
      *(ulong*)( (long)pvVar4 + (ulong)uVar1 * 8 ) = CONCAT44(param_2, param_1);
      puVar8 = *(undefined8**)( this + 0x18 );
      uVar1 = *(uint*)( puVar8 + 1 );
      pvVar4 = (void*)*puVar8;
      uVar5 = uVar1 + 1;
      if (*(uint*)( (long)puVar8 + 0xc ) < uVar5) {
         uVar1 = uVar1 + ( uVar1 + 2 >> 1 );
         *(uint*)( (long)puVar8 + 0xc ) = uVar1;
         pvVar4 = realloc(pvVar4, (ulong)uVar1 * 4);
         *puVar8 = pvVar4;
         uVar1 = *(uint*)( puVar8 + 1 );
         uVar5 = uVar1 + 1;
      }

      *(uint*)( puVar8 + 1 ) = uVar5;
      *(undefined4*)( (long)pvVar4 + (ulong)uVar1 * 4 ) = 2;
      uVar1 = *(uint*)( puVar8 + 3 );
      pvVar4 = (void*)puVar8[2];
      uVar5 = uVar1 + 1;
      if (*(uint*)( (long)puVar8 + 0x1c ) < uVar5) {
         uVar1 = uVar1 + ( uVar1 + 2 >> 1 );
         *(uint*)( (long)puVar8 + 0x1c ) = uVar1;
         pvVar4 = realloc(pvVar4, (ulong)uVar1 * 8);
         puVar8[2] = pvVar4;
         uVar1 = *(uint*)( puVar8 + 3 );
         uVar5 = uVar1 + 1;
      }

      *(uint*)( puVar8 + 3 ) = uVar5;
      *(ulong*)( (long)pvVar4 + (ulong)uVar1 * 8 ) = CONCAT44(fVar15 + param_2, fVar11 + param_1);
      if (0 < iVar9) goto LAB_00100a3a;
      puVar8 = *(undefined8**)( this + 0x18 );
   }
 else {
      if (*(uint*)( (long)puVar8 + 0xc ) < uVar5) {
         uVar1 = uVar1 + ( uVar1 + 2 >> 1 );
         *(uint*)( (long)puVar8 + 0xc ) = uVar1;
         pvVar4 = realloc(pvVar4, (ulong)uVar1 * 4);
         *puVar8 = pvVar4;
         uVar2 = ( ulong ) * (uint*)( puVar8 + 1 );
         uVar5 = *(uint*)( puVar8 + 1 ) + 1;
      }

      *(uint*)( puVar8 + 1 ) = uVar5;
      *(undefined4*)( (long)pvVar4 + uVar2 * 4 ) = 1;
      uVar1 = *(uint*)( puVar8 + 3 );
      pvVar4 = (void*)puVar8[2];
      uVar5 = uVar1 + 1;
      if (*(uint*)( (long)puVar8 + 0x1c ) < uVar5) {
         uVar1 = uVar1 + ( uVar1 + 2 >> 1 );
         *(uint*)( (long)puVar8 + 0x1c ) = uVar1;
         pvVar4 = realloc(pvVar4, (ulong)uVar1 * 8);
         puVar8[2] = pvVar4;
         uVar1 = *(uint*)( puVar8 + 3 );
         uVar5 = uVar1 + 1;
      }

      *(uint*)( puVar8 + 3 ) = uVar5;
      *(ulong*)( (long)pvVar4 + (ulong)uVar1 * 8 ) = CONCAT44(param_2 + fVar15, param_1 + fVar11);
      if (iVar9 < 1) {
         puVar6 = *(undefined8**)( this + 0x18 );
         goto LAB_00100bbd;
      }

      LAB_00100a3a:iVar7 = 0;
      do {
         fVar12 = local_58;
         if (iVar7 != iVar9 + -1) {
            fVar12 = (float)iVar10 * _LC4;
         }

         local_78 = fVar12 + local_78;
         sincosf(local_78, local_3c, &local_40);
         fVar16 = local_40 * param_3;
         fVar14 = param_3 * local_3c[0];
         fVar12 = fVar11 * fVar11 + fVar15 * fVar15;
         fVar13 = fVar16 * fVar11 + fVar14 * fVar15 + fVar12;
         fVar12 = ( fVar12 + fVar12 ) * fVar13;
         if (fVar12 < 0.0) {
            fVar12 = sqrtf(fVar12);
         }
 else {
            fVar12 = SQRT(fVar12);
         }

         iVar7 = iVar7 + 1;
         fVar12 = ( ( fVar12 - fVar13 ) / ( fVar14 * fVar11 - fVar16 * fVar15 ) ) * __LC8;
         Impl::cubicTo(*(Impl**)( this + 0x18 ), ( fVar11 - fVar12 * fVar15 ) + param_1, fVar12 * fVar11 + fVar15 + param_2, fVar14 * fVar12 + fVar16 + param_1, ( fVar14 - fVar16 * fVar12 ) + param_2, param_1 + fVar16, param_2 + fVar14);
         fVar11 = fVar16;
         fVar15 = fVar14;
      }
 while ( iVar7 < iVar9 );
      puVar8 = *(undefined8**)( this + 0x18 );
      puVar6 = puVar8;
      if (!param_6) goto LAB_00100bbd;
   }

   uVar1 = *(uint*)( puVar8 + 1 );
   pvVar4 = (void*)*puVar8;
   puVar6 = puVar8;
   if (( uVar1 == 0 ) || ( *(int*)( (long)pvVar4 + ( ulong )(uVar1 - 1) * 4 ) != 0 )) {
      uVar5 = uVar1 + 1;
      if (*(uint*)( (long)puVar8 + 0xc ) < uVar5) {
         uVar1 = ( uVar1 + 2 >> 1 ) + uVar1;
         *(uint*)( (long)puVar8 + 0xc ) = uVar1;
         pvVar4 = realloc(pvVar4, (ulong)uVar1 * 4);
         uVar1 = *(uint*)( puVar8 + 1 );
         puVar6 = *(undefined8**)( this + 0x18 );
         *puVar8 = pvVar4;
         uVar5 = uVar1 + 1;
      }

      *(uint*)( puVar8 + 1 ) = uVar5;
      *(undefined4*)( (long)pvVar4 + (ulong)uVar1 * 4 ) = 0;
   }

   LAB_00100bbd:*(byte*)( puVar6 + 9 ) = *(byte*)( puVar6 + 9 ) | 1;
   return 0;
}
/* tvg::Shape::appendRect(float, float, float, float, float, float) */undefined8 tvg::Shape::appendRect(Shape *this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6) {
   undefined8 *puVar1;
   long *plVar2;
   uint uVar3;
   void *pvVar4;
   void *pvVar5;
   undefined8 *puVar6;
   uint uVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   puVar1 = *(undefined8**)( this + 0x18 );
   fVar11 = param_3 * _LC11;
   if (param_5 <= param_3 * _LC11) {
      fVar11 = param_5;
   }

   fVar13 = _LC11 * param_4;
   if (param_6 <= _LC11 * param_4) {
      fVar13 = param_6;
   }

   if (( fVar11 != 0.0 ) || ( fVar13 != 0.0 )) {
      uVar7 = *(int*)( puVar1 + 1 ) + 10;
      fVar14 = fVar11 * _LC0;
      fVar9 = _LC0 * fVar13;
      if (*(uint*)( (long)puVar1 + 0xc ) < uVar7) {
         *(uint*)( (long)puVar1 + 0xc ) = uVar7;
         pvVar4 = realloc((void*)*puVar1, (ulong)uVar7 << 2);
         *puVar1 = pvVar4;
      }

      uVar7 = *(int*)( puVar1 + 3 ) + 0x11;
      if (*(uint*)( (long)puVar1 + 0x1c ) < uVar7) {
         *(uint*)( (long)puVar1 + 0x1c ) = uVar7;
         pvVar4 = realloc((void*)puVar1[2], (ulong)uVar7 << 3);
         puVar1[2] = pvVar4;
      }

      puVar1 = *(undefined8**)( this + 0x18 );
      fVar15 = param_1 + fVar11;
      uVar7 = *(uint*)( puVar1 + 1 );
      pvVar4 = (void*)*puVar1;
      uVar3 = uVar7 + 1;
      if (*(uint*)( (long)puVar1 + 0xc ) < uVar3) {
         uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
         *(uint*)( (long)puVar1 + 0xc ) = uVar7;
         pvVar4 = realloc(pvVar4, (ulong)uVar7 << 2);
         uVar7 = *(uint*)( puVar1 + 1 );
         *puVar1 = pvVar4;
         uVar3 = uVar7 + 1;
      }

      *(uint*)( puVar1 + 1 ) = uVar3;
      *(undefined4*)( (long)pvVar4 + (ulong)uVar7 * 4 ) = 1;
      uVar7 = *(uint*)( puVar1 + 3 );
      pvVar4 = (void*)puVar1[2];
      uVar3 = uVar7 + 1;
      if (*(uint*)( (long)puVar1 + 0x1c ) < uVar3) {
         uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
         *(uint*)( (long)puVar1 + 0x1c ) = uVar7;
         pvVar4 = realloc(pvVar4, (ulong)uVar7 << 3);
         uVar7 = *(uint*)( puVar1 + 3 );
         puVar1[2] = pvVar4;
         uVar3 = uVar7 + 1;
      }

      *(uint*)( puVar1 + 3 ) = uVar3;
      puVar1 = *(undefined8**)( this + 0x18 );
      *(ulong*)( (long)pvVar4 + (ulong)uVar7 * 8 ) = CONCAT44(param_2, fVar15);
      fVar16 = param_1 + param_3;
      uVar7 = *(uint*)( puVar1 + 1 );
      pvVar4 = (void*)*puVar1;
      uVar3 = uVar7 + 1;
      fVar11 = fVar16 - fVar11;
      if (*(uint*)( (long)puVar1 + 0xc ) < uVar3) {
         uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
         *(uint*)( (long)puVar1 + 0xc ) = uVar7;
         pvVar4 = realloc(pvVar4, (ulong)uVar7 << 2);
         uVar7 = *(uint*)( puVar1 + 1 );
         *puVar1 = pvVar4;
         uVar3 = uVar7 + 1;
      }

      *(uint*)( puVar1 + 1 ) = uVar3;
      *(undefined4*)( (long)pvVar4 + (ulong)uVar7 * 4 ) = 2;
      uVar7 = *(uint*)( puVar1 + 3 );
      pvVar4 = (void*)puVar1[2];
      uVar3 = uVar7 + 1;
      if (*(uint*)( (long)puVar1 + 0x1c ) < uVar3) {
         uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
         *(uint*)( (long)puVar1 + 0x1c ) = uVar7;
         pvVar4 = realloc(pvVar4, (ulong)uVar7 << 3);
         uVar7 = *(uint*)( puVar1 + 3 );
         puVar1[2] = pvVar4;
         uVar3 = uVar7 + 1;
      }

      *(uint*)( puVar1 + 3 ) = uVar3;
      *(ulong*)( (long)pvVar4 + (ulong)uVar7 * 8 ) = CONCAT44(param_2, fVar11);
      fVar8 = fVar11 + fVar14;
      fVar12 = param_2 + fVar13;
      fVar10 = fVar12 - fVar9;
      Impl::cubicTo(*(Impl**)( this + 0x18 ), fVar8, param_2, fVar16, fVar10, fVar16, fVar12);
      fVar17 = param_4 + param_2;
      plVar2 = *(long**)( this + 0x18 );
      uVar7 = *(uint*)( plVar2 + 1 );
      fVar13 = fVar17 - fVar13;
      uVar3 = uVar7 + 1;
      if (*(uint*)( (long)plVar2 + 0xc ) < uVar3) {
         uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
         *(uint*)( (long)plVar2 + 0xc ) = uVar7;
         pvVar4 = realloc((void*)*plVar2, (ulong)uVar7 << 2);
         uVar7 = *(uint*)( plVar2 + 1 );
         *plVar2 = (long)pvVar4;
         uVar3 = uVar7 + 1;
      }
 else {
         pvVar4 = (void*)*plVar2;
      }

      *(uint*)( plVar2 + 1 ) = uVar3;
      pvVar5 = (void*)plVar2[2];
      *(undefined4*)( (long)pvVar4 + (ulong)uVar7 * 4 ) = 2;
      uVar7 = *(uint*)( plVar2 + 3 );
      uVar3 = uVar7 + 1;
      if (*(uint*)( (long)plVar2 + 0x1c ) < uVar3) {
         uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
         *(uint*)( (long)plVar2 + 0x1c ) = uVar7;
         pvVar5 = realloc(pvVar5, (ulong)uVar7 << 3);
         plVar2[2] = (long)pvVar5;
         uVar7 = *(uint*)( plVar2 + 3 );
         uVar3 = uVar7 + 1;
      }

      *(uint*)( plVar2 + 3 ) = uVar3;
      fVar9 = fVar9 + fVar13;
      *(ulong*)( (long)pvVar5 + (ulong)uVar7 * 8 ) = CONCAT44(fVar13, fVar16);
      Impl::cubicTo(*(Impl**)( this + 0x18 ), fVar16, fVar9, fVar8, fVar17, fVar11, fVar17);
      plVar2 = *(long**)( this + 0x18 );
      uVar7 = *(uint*)( plVar2 + 1 );
      uVar3 = uVar7 + 1;
      if (*(uint*)( (long)plVar2 + 0xc ) < uVar3) {
         uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
         *(uint*)( (long)plVar2 + 0xc ) = uVar7;
         pvVar4 = realloc((void*)*plVar2, (ulong)uVar7 << 2);
         uVar7 = *(uint*)( plVar2 + 1 );
         *plVar2 = (long)pvVar4;
         uVar3 = uVar7 + 1;
      }
 else {
         pvVar4 = (void*)*plVar2;
      }

      *(uint*)( plVar2 + 1 ) = uVar3;
      pvVar5 = (void*)plVar2[2];
      *(undefined4*)( (long)pvVar4 + (ulong)uVar7 * 4 ) = 2;
      uVar7 = *(uint*)( plVar2 + 3 );
      uVar3 = uVar7 + 1;
      if (*(uint*)( (long)plVar2 + 0x1c ) < uVar3) {
         uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
         *(uint*)( (long)plVar2 + 0x1c ) = uVar7;
         pvVar5 = realloc(pvVar5, (ulong)uVar7 << 3);
         plVar2[2] = (long)pvVar5;
         uVar7 = *(uint*)( plVar2 + 3 );
         uVar3 = uVar7 + 1;
      }

      *(uint*)( plVar2 + 3 ) = uVar3;
      fVar14 = fVar15 - fVar14;
      *(ulong*)( (long)pvVar5 + (ulong)uVar7 * 8 ) = CONCAT44(fVar17, fVar15);
      Impl::cubicTo(*(Impl**)( this + 0x18 ), fVar14, fVar17, param_1, fVar9, param_1, fVar13);
      plVar2 = *(long**)( this + 0x18 );
      uVar7 = *(uint*)( plVar2 + 1 );
      uVar3 = uVar7 + 1;
      if (*(uint*)( (long)plVar2 + 0xc ) < uVar3) {
         uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
         *(uint*)( (long)plVar2 + 0xc ) = uVar7;
         pvVar4 = realloc((void*)*plVar2, (ulong)uVar7 << 2);
         uVar7 = *(uint*)( plVar2 + 1 );
         *plVar2 = (long)pvVar4;
         uVar3 = uVar7 + 1;
      }
 else {
         pvVar4 = (void*)*plVar2;
      }

      *(uint*)( plVar2 + 1 ) = uVar3;
      pvVar5 = (void*)plVar2[2];
      *(undefined4*)( (long)pvVar4 + (ulong)uVar7 * 4 ) = 2;
      uVar7 = *(uint*)( plVar2 + 3 );
      uVar3 = uVar7 + 1;
      if (*(uint*)( (long)plVar2 + 0x1c ) < uVar3) {
         uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
         *(uint*)( (long)plVar2 + 0x1c ) = uVar7;
         pvVar5 = realloc(pvVar5, (ulong)uVar7 << 3);
         plVar2[2] = (long)pvVar5;
         uVar7 = *(uint*)( plVar2 + 3 );
         uVar3 = uVar7 + 1;
      }

      *(uint*)( plVar2 + 3 ) = uVar3;
      *(ulong*)( (long)pvVar5 + (ulong)uVar7 * 8 ) = CONCAT44(fVar12, param_1);
      Impl::cubicTo(*(Impl**)( this + 0x18 ), param_1, fVar10, fVar14, param_2, fVar15, param_2);
      goto LAB_0010111d;
   }

   uVar7 = *(int*)( puVar1 + 1 ) + 5;
   if (*(uint*)( (long)puVar1 + 0xc ) < uVar7) {
      *(uint*)( (long)puVar1 + 0xc ) = uVar7;
      pvVar4 = realloc((void*)*puVar1, (ulong)uVar7 << 2);
      *puVar1 = pvVar4;
      uVar7 = *(int*)( puVar1 + 3 ) + 4;
      if (*(uint*)( (long)puVar1 + 0x1c ) < uVar7) goto LAB_001014af;
   }
 else {
      uVar7 = *(int*)( puVar1 + 3 ) + 4;
      if (*(uint*)( (long)puVar1 + 0x1c ) < uVar7) {
         LAB_001014af:*(uint*)( (long)puVar1 + 0x1c ) = uVar7;
         pvVar4 = realloc((void*)puVar1[2], (ulong)uVar7 << 3);
         puVar1[2] = pvVar4;
      }

   }

   puVar1 = *(undefined8**)( this + 0x18 );
   uVar7 = *(uint*)( puVar1 + 1 );
   pvVar4 = (void*)*puVar1;
   uVar3 = uVar7 + 1;
   if (*(uint*)( (long)puVar1 + 0xc ) < uVar3) {
      uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
      *(uint*)( (long)puVar1 + 0xc ) = uVar7;
      pvVar4 = realloc(pvVar4, (ulong)uVar7 << 2);
      uVar7 = *(uint*)( puVar1 + 1 );
      *puVar1 = pvVar4;
      uVar3 = uVar7 + 1;
   }

   *(uint*)( puVar1 + 1 ) = uVar3;
   *(undefined4*)( (long)pvVar4 + (ulong)uVar7 * 4 ) = 1;
   uVar7 = *(uint*)( puVar1 + 3 );
   pvVar4 = (void*)puVar1[2];
   uVar3 = uVar7 + 1;
   if (*(uint*)( (long)puVar1 + 0x1c ) < uVar3) {
      uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
      *(uint*)( (long)puVar1 + 0x1c ) = uVar7;
      pvVar4 = realloc(pvVar4, (ulong)uVar7 << 3);
      uVar7 = *(uint*)( puVar1 + 3 );
      puVar1[2] = pvVar4;
      uVar3 = uVar7 + 1;
   }

   *(uint*)( puVar1 + 3 ) = uVar3;
   puVar1 = *(undefined8**)( this + 0x18 );
   *(ulong*)( (long)pvVar4 + (ulong)uVar7 * 8 ) = CONCAT44(param_2, param_1);
   uVar7 = *(uint*)( puVar1 + 1 );
   pvVar4 = (void*)*puVar1;
   uVar3 = uVar7 + 1;
   if (*(uint*)( (long)puVar1 + 0xc ) < uVar3) {
      uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
      *(uint*)( (long)puVar1 + 0xc ) = uVar7;
      pvVar4 = realloc(pvVar4, (ulong)uVar7 << 2);
      uVar7 = *(uint*)( puVar1 + 1 );
      *puVar1 = pvVar4;
      uVar3 = uVar7 + 1;
   }

   *(uint*)( puVar1 + 1 ) = uVar3;
   *(undefined4*)( (long)pvVar4 + (ulong)uVar7 * 4 ) = 2;
   uVar7 = *(uint*)( puVar1 + 3 );
   pvVar4 = (void*)puVar1[2];
   uVar3 = uVar7 + 1;
   if (*(uint*)( (long)puVar1 + 0x1c ) < uVar3) {
      uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
      *(uint*)( (long)puVar1 + 0x1c ) = uVar7;
      pvVar4 = realloc(pvVar4, (ulong)uVar7 << 3);
      uVar7 = *(uint*)( puVar1 + 3 );
      puVar1[2] = pvVar4;
      uVar3 = uVar7 + 1;
   }

   puVar6 = *(undefined8**)( this + 0x18 );
   *(uint*)( puVar1 + 3 ) = uVar3;
   *(ulong*)( (long)pvVar4 + (ulong)uVar7 * 8 ) = CONCAT44(param_2, param_3 + param_1);
   uVar7 = *(uint*)( puVar6 + 1 );
   pvVar4 = (void*)*puVar6;
   uVar3 = uVar7 + 1;
   if (*(uint*)( (long)puVar6 + 0xc ) < uVar3) {
      uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
      *(uint*)( (long)puVar6 + 0xc ) = uVar7;
      pvVar4 = realloc(pvVar4, (ulong)uVar7 << 2);
      uVar7 = *(uint*)( puVar6 + 1 );
      *puVar6 = pvVar4;
      uVar3 = uVar7 + 1;
   }

   *(uint*)( puVar6 + 1 ) = uVar3;
   *(undefined4*)( (long)pvVar4 + (ulong)uVar7 * 4 ) = 2;
   uVar7 = *(uint*)( puVar6 + 3 );
   pvVar4 = (void*)puVar6[2];
   uVar3 = uVar7 + 1;
   if (*(uint*)( (long)puVar6 + 0x1c ) < uVar3) {
      uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
      *(uint*)( (long)puVar6 + 0x1c ) = uVar7;
      pvVar4 = realloc(pvVar4, (ulong)uVar7 << 3);
      uVar7 = *(uint*)( puVar6 + 3 );
      puVar6[2] = pvVar4;
      uVar3 = uVar7 + 1;
   }

   *(uint*)( puVar6 + 3 ) = uVar3;
   puVar1 = *(undefined8**)( this + 0x18 );
   *(ulong*)( (long)pvVar4 + (ulong)uVar7 * 8 ) = CONCAT44(param_4 + param_2, param_3 + param_1);
   uVar7 = *(uint*)( puVar1 + 1 );
   pvVar4 = (void*)*puVar1;
   uVar3 = uVar7 + 1;
   if (*(uint*)( (long)puVar1 + 0xc ) < uVar3) {
      uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
      *(uint*)( (long)puVar1 + 0xc ) = uVar7;
      pvVar4 = realloc(pvVar4, (ulong)uVar7 << 2);
      uVar7 = *(uint*)( puVar1 + 1 );
      *puVar1 = pvVar4;
      uVar3 = uVar7 + 1;
   }

   *(uint*)( puVar1 + 1 ) = uVar3;
   *(undefined4*)( (long)pvVar4 + (ulong)uVar7 * 4 ) = 2;
   uVar7 = *(uint*)( puVar1 + 3 );
   pvVar4 = (void*)puVar1[2];
   uVar3 = uVar7 + 1;
   if (*(uint*)( (long)puVar1 + 0x1c ) < uVar3) {
      uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
      *(uint*)( (long)puVar1 + 0x1c ) = uVar7;
      pvVar4 = realloc(pvVar4, (ulong)uVar7 << 3);
      uVar7 = *(uint*)( puVar1 + 3 );
      puVar1[2] = pvVar4;
      uVar3 = uVar7 + 1;
   }

   *(uint*)( puVar1 + 3 ) = uVar3;
   *(ulong*)( (long)pvVar4 + (ulong)uVar7 * 8 ) = CONCAT44(param_4 + param_2, param_1);
   LAB_0010111d:puVar1 = *(undefined8**)( this + 0x18 );
   uVar7 = *(uint*)( puVar1 + 1 );
   pvVar4 = (void*)*puVar1;
   puVar6 = puVar1;
   if (( uVar7 == 0 ) || ( *(int*)( (long)pvVar4 + ( ulong )(uVar7 - 1) * 4 ) != 0 )) {
      uVar3 = uVar7 + 1;
      if (*(uint*)( (long)puVar1 + 0xc ) < uVar3) {
         uVar7 = ( uVar7 + 2 >> 1 ) + uVar7;
         *(uint*)( (long)puVar1 + 0xc ) = uVar7;
         pvVar4 = realloc(pvVar4, (ulong)uVar7 << 2);
         uVar7 = *(uint*)( puVar1 + 1 );
         puVar6 = *(undefined8**)( this + 0x18 );
         *puVar1 = pvVar4;
         uVar3 = uVar7 + 1;
      }

      *(uint*)( puVar1 + 1 ) = uVar3;
      *(undefined4*)( (long)pvVar4 + (ulong)uVar7 * 4 ) = 0;
   }

   *(byte*)( puVar6 + 9 ) = *(byte*)( puVar6 + 9 ) | 1;
   return 0;
}
/* tvg::Shape::fill(unsigned char, unsigned char, unsigned char, unsigned char) */undefined8 tvg::Shape::fill(Shape *this, uchar param_1, uchar param_2, uchar param_3, uchar param_4) {
   byte *pbVar1;
   long lVar2;
   lVar2 = *(long*)( this + 0x18 );
   if (*(long**)( lVar2 + 0x20 ) != (long*)0x0) {
      ( **(code**)( **(long**)( lVar2 + 0x20 ) + 8 ) )();
      lVar2 = *(long*)( this + 0x18 );
      pbVar1 = (byte*)( lVar2 + 0x48 );
      *pbVar1 = *pbVar1 | 4;
      *(undefined8*)( lVar2 + 0x20 ) = 0;
      lVar2 = *(long*)( this + 0x18 );
   }

   if (( ( ( *(uchar*)( lVar2 + 0x30 ) != param_1 ) || ( *(uchar*)( lVar2 + 0x31 ) != param_2 ) ) || ( *(uchar*)( lVar2 + 0x32 ) != param_3 ) ) || ( *(uchar*)( lVar2 + 0x33 ) != param_4 )) {
      *(uchar*)( lVar2 + 0x30 ) = param_1;
      *(uchar*)( *(long*)( this + 0x18 ) + 0x31 ) = param_2;
      *(uchar*)( *(long*)( this + 0x18 ) + 0x32 ) = param_3;
      *(uchar*)( *(long*)( this + 0x18 ) + 0x33 ) = param_4;
      *(byte*)( *(long*)( this + 0x18 ) + 0x48 ) = *(byte*)( *(long*)( this + 0x18 ) + 0x48 ) | 2;
   }

   return 0;
}
/* tvg::Shape::fill(std::unique_ptr<tvg::Fill, std::default_delete<tvg::Fill> >) */undefined8 tvg::Shape::fill(Shape *this, long *param_2) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   plVar1 = (long*)*param_2;
   *param_2 = 0;
   if (plVar1 != (long*)0x0) {
      lVar3 = *(long*)( this + 0x18 );
      plVar2 = *(long**)( lVar3 + 0x20 );
      if (( plVar2 != plVar1 ) && ( plVar2 != (long*)0x0 )) {
         ( **(code**)( *plVar2 + 8 ) )();
         lVar3 = *(long*)( this + 0x18 );
      }

      *(byte*)( lVar3 + 0x48 ) = *(byte*)( lVar3 + 0x48 ) | 4;
      *(long**)( lVar3 + 0x20 ) = plVar1;
      return 0;
   }

   return 4;
}
/* tvg::Shape::fillColor(unsigned char*, unsigned char*, unsigned char*, unsigned char*) const */undefined8 tvg::Shape::fillColor(Shape *this, uchar *param_1, uchar *param_2, uchar *param_3, uchar *param_4) {
   long lVar1;
   lVar1 = *(long*)( this + 0x18 );
   if (param_1 != (uchar*)0x0) {
      *param_1 = *(uchar*)( lVar1 + 0x30 );
   }

   if (param_2 != (uchar*)0x0) {
      *param_2 = *(uchar*)( lVar1 + 0x31 );
   }

   if (param_3 != (uchar*)0x0) {
      *param_3 = *(uchar*)( lVar1 + 0x32 );
   }

   if (param_4 != (uchar*)0x0) {
      *param_4 = *(uchar*)( lVar1 + 0x33 );
   }

   return 0;
}
/* tvg::Shape::fill() const */undefined8 tvg::Shape::fill(Shape *this) {
   return *(undefined8*)( *(long*)( this + 0x18 ) + 0x20 );
}
/* tvg::Shape::order(bool) */undefined8 tvg::Shape::order(Shape *this, bool param_1) {
   long lVar1;
   undefined1(*pauVar2)[16];
   lVar1 = *(long*)( this + 0x18 );
   pauVar2 = *(undefined1(**) [16])( lVar1 + 0x28 );
   if (pauVar2 == (undefined1(*) [16])0x0) {
      pauVar2 = (undefined1(*) [16])operator_new(0x40);
      pauVar2[2] = (undefined1[16])0x0;
      pauVar2[3] = (undefined1[16])0x0;
      *(undefined2*)( pauVar2[2] + 10 ) = 0x4080;
      *(undefined4*)( pauVar2[3] + 6 ) = 0x13f80;
      *pauVar2 = (undefined1[16])0x0;
      pauVar2[1] = (undefined1[16])0x0;
      *(undefined1(**) [16])( lVar1 + 0x28 ) = pauVar2;
   }

   pauVar2[2][0xc] = param_1;
   *(byte*)( lVar1 + 0x48 ) = *(byte*)( lVar1 + 0x48 ) | 8;
   return 0;
}
/* tvg::Shape::stroke(float) */undefined8 tvg::Shape::stroke(Shape *this, float param_1) {
   long lVar1;
   undefined1(*pauVar2)[16];
   lVar1 = *(long*)( this + 0x18 );
   if (*(float**)( lVar1 + 0x28 ) != (float*)0x0) {
      **(float**)( lVar1 + 0x28 ) = param_1;
      *(byte*)( lVar1 + 0x48 ) = *(byte*)( lVar1 + 0x48 ) | 8;
      return 0;
   }

   pauVar2 = (undefined1(*) [16])operator_new(0x40);
   *pauVar2 = (undefined1[16])0x0;
   pauVar2[2] = (undefined1[16])0x0;
   pauVar2[3] = (undefined1[16])0x0;
   *(undefined2*)( pauVar2[2] + 10 ) = 0x4080;
   *(undefined4*)( pauVar2[3] + 6 ) = 0x13f80;
   pauVar2[1] = (undefined1[16])0x0;
   *(undefined1(**) [16])( lVar1 + 0x28 ) = pauVar2;
   *(float*)*pauVar2 = param_1;
   *(byte*)( lVar1 + 0x48 ) = *(byte*)( lVar1 + 0x48 ) | 8;
   return 0;
}
/* tvg::Shape::strokeWidth() const */undefined4 tvg::Shape::strokeWidth(Shape *this) {
   if (*(undefined4**)( *(long*)( this + 0x18 ) + 0x28 ) != (undefined4*)0x0) {
      return **(undefined4**)( *(long*)( this + 0x18 ) + 0x28 );
   }

   return 0;
}
/* tvg::Shape::stroke(unsigned char, unsigned char, unsigned char, unsigned char) */undefined8 tvg::Shape::stroke(Shape *this, uchar param_1, uchar param_2, uchar param_3, uchar param_4) {
   long lVar1;
   undefined1(*pauVar2)[16];
   lVar1 = *(long*)( this + 0x18 );
   pauVar2 = *(undefined1(**) [16])( lVar1 + 0x28 );
   if (pauVar2 == (undefined1(*) [16])0x0) {
      pauVar2 = (undefined1(*) [16])operator_new(0x40);
      pauVar2[2] = (undefined1[16])0x0;
      pauVar2[3] = (undefined1[16])0x0;
      *(undefined2*)( pauVar2[2] + 10 ) = 0x4080;
      *(undefined4*)( pauVar2[3] + 6 ) = 0x13f80;
      *pauVar2 = (undefined1[16])0x0;
      pauVar2[1] = (undefined1[16])0x0;
      *(undefined1(**) [16])( lVar1 + 0x28 ) = pauVar2;
   }
 else if (*(long**)( *pauVar2 + 8 ) != (long*)0x0) {
      ( **(code**)( **(long**)( *pauVar2 + 8 ) + 8 ) )();
      pauVar2 = *(undefined1(**) [16])( lVar1 + 0x28 );
      *(undefined8*)( *pauVar2 + 8 ) = 0;
      *(byte*)( lVar1 + 0x48 ) = *(byte*)( lVar1 + 0x48 ) | 0x40;
   }

   ( *pauVar2 )[4] = param_1;
   *(uchar*)( *(long*)( lVar1 + 0x28 ) + 5 ) = param_2;
   *(uchar*)( *(long*)( lVar1 + 0x28 ) + 6 ) = param_3;
   *(uchar*)( *(long*)( lVar1 + 0x28 ) + 7 ) = param_4;
   *(byte*)( lVar1 + 0x48 ) = *(byte*)( lVar1 + 0x48 ) | 8;
   return 0;
}
/* tvg::Shape::strokeColor(unsigned char*, unsigned char*, unsigned char*, unsigned char*) const */undefined8 tvg::Shape::strokeColor(Shape *this, uchar *param_1, uchar *param_2, uchar *param_3, uchar *param_4) {
   long lVar1;
   lVar1 = *(long*)( this + 0x18 );
   if (*(long*)( lVar1 + 0x28 ) != 0) {
      if (param_1 != (uchar*)0x0) {
         *param_1 = *(uchar*)( *(long*)( lVar1 + 0x28 ) + 4 );
      }

      if (param_2 != (uchar*)0x0) {
         *param_2 = *(uchar*)( *(long*)( lVar1 + 0x28 ) + 5 );
      }

      if (param_3 != (uchar*)0x0) {
         *param_3 = *(uchar*)( *(long*)( lVar1 + 0x28 ) + 6 );
      }

      if (param_4 != (uchar*)0x0) {
         *param_4 = *(uchar*)( *(long*)( lVar1 + 0x28 ) + 7 );
      }

      return 0;
   }

   return 2;
}
/* tvg::Shape::stroke(std::unique_ptr<tvg::Fill, std::default_delete<tvg::Fill> >) */undefined8 tvg::Shape::stroke(Shape *this, long *param_2) {
   long *plVar1;
   long lVar2;
   long *plVar3;
   undefined1(*pauVar4)[16];
   plVar1 = (long*)*param_2;
   lVar2 = *(long*)( this + 0x18 );
   *param_2 = 0;
   if (plVar1 != (long*)0x0) {
      pauVar4 = *(undefined1(**) [16])( lVar2 + 0x28 );
      if (pauVar4 == (undefined1(*) [16])0x0) {
         pauVar4 = (undefined1(*) [16])operator_new(0x40);
         pauVar4[2] = (undefined1[16])0x0;
         pauVar4[3] = (undefined1[16])0x0;
         *(undefined2*)( pauVar4[2] + 10 ) = 0x4080;
         *(undefined4*)( pauVar4[3] + 6 ) = 0x13f80;
         *pauVar4 = (undefined1[16])0x0;
         pauVar4[1] = (undefined1[16])0x0;
         *(undefined1(**) [16])( lVar2 + 0x28 ) = pauVar4;
      }
 else {
         plVar3 = *(long**)( *pauVar4 + 8 );
         if (( plVar3 != (long*)0x0 ) && ( plVar3 != plVar1 )) {
            ( **(code**)( *plVar3 + 8 ) )();
            pauVar4 = *(undefined1(**) [16])( lVar2 + 0x28 );
         }

      }

      *(long**)( *pauVar4 + 8 ) = plVar1;
      ( *pauVar4 )[7] = 0;
      *(byte*)( lVar2 + 0x48 ) = *(byte*)( lVar2 + 0x48 ) | 0x48;
      return 0;
   }

   return 4;
}
/* tvg::Shape::strokeFill() const */long tvg::Shape::strokeFill(Shape *this) {
   long lVar1;
   lVar1 = *(long*)( *(long*)( this + 0x18 ) + 0x28 );
   if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + 8 );
   }

   return lVar1;
}
/* tvg::Shape::stroke(float const*, unsigned int) */undefined8 tvg::Shape::stroke(Shape *this, float *param_1, uint param_2) {
   long lVar1;
   float *pfVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   void *pvVar5;
   undefined1(*pauVar6)[16];
   long lVar7;
   if (param_2 == 1) {
      return 1;
   }

   if (param_1 == (float*)0x0) {
      if (param_2 != 0) {
         return 1;
      }

      lVar7 = *(long*)( this + 0x18 );
      free(*(void**)( *(long*)( lVar7 + 0x28 ) + 0x10 ));
      pauVar6 = *(undefined1(**) [16])( lVar7 + 0x28 );
      *(undefined8*)pauVar6[1] = 0;
      goto LAB_00101ef2;
   }

   if (param_2 == 0) {
      return 1;
   }

   pfVar2 = param_1;
   do {
      if (*pfVar2 <= _LC12 && _LC12 != *pfVar2) {
         return 1;
      }

      pfVar2 = pfVar2 + 1;
   }
 while ( pfVar2 != param_1 + param_2 );
   lVar7 = *(long*)( this + 0x18 );
   pauVar4 = *(undefined1(**) [16])( lVar7 + 0x28 );
   if (pauVar4 == (undefined1(*) [16])0x0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x40);
      *pauVar4 = (undefined1[16])0x0;
      for (int i = 0; i < 3; i++) {
         pauVar4[( i + 1 )] = (undefined1[16])0;
      }

      *(undefined2*)( pauVar4[2] + 10 ) = 0x4080;
      *(undefined4*)( pauVar4[3] + 6 ) = 0x13f80;
      *(undefined1(**) [16])( lVar7 + 0x28 ) = pauVar4;
      if (param_2 != 0) {
         pvVar5 = (void*)0x0;
         goto LAB_00101fa0;
      }

      LAB_00101fb2:pvVar5 = malloc((ulong)param_2 << 2);
      *(void**)pauVar4[1] = pvVar5;
      if (pvVar5 == (void*)0x0) {
         return 3;
      }

      pauVar6 = *(undefined1(**) [16])( lVar7 + 0x28 );
   }
 else {
      pvVar5 = *(void**)pauVar4[1];
      if (param_2 != *(uint*)( pauVar4[1] + 8 )) {
         LAB_00101fa0:free(pvVar5);
         pauVar4 = *(undefined1(**) [16])( lVar7 + 0x28 );
         *(undefined8*)pauVar4[1] = 0;
         goto LAB_00101fb2;
      }

      pauVar6 = pauVar4;
      if (pvVar5 == (void*)0x0) goto LAB_00101fb2;
   }

   if (param_2 != 0) {
      lVar1 = *(long*)pauVar4[1];
      lVar3 = 0;
      do {
         *(undefined4*)( lVar1 + lVar3 ) = *(undefined4*)( (long)param_1 + lVar3 );
         lVar3 = lVar3 + 4;
      }
 while ( (ulong)param_2 << 2 != lVar3 );
   }

   LAB_00101ef2:*(uint*)( pauVar6[1] + 8 ) = param_2;
   *(undefined4*)( pauVar6[1] + 0xc ) = 0;
   *(byte*)( lVar7 + 0x48 ) = *(byte*)( lVar7 + 0x48 ) | 8;
   return 0;
}
/* tvg::Shape::strokeDash(float const**) const */undefined4 tvg::Shape::strokeDash(Shape *this, float **param_1) {
   long lVar1;
   lVar1 = *(long*)( *(long*)( this + 0x18 ) + 0x28 );
   if (lVar1 != 0) {
      if (param_1 != (float**)0x0) {
         *param_1 = *(float**)( lVar1 + 0x10 );
      }

      return *(undefined4*)( lVar1 + 0x18 );
   }

   return 0;
}
/* tvg::Shape::stroke(tvg::StrokeCap) */undefined8 tvg::Shape::stroke(Shape *this, undefined4 param_2) {
   long lVar1;
   undefined1(*pauVar2)[16];
   lVar1 = *(long*)( this + 0x18 );
   if (*(long*)( lVar1 + 0x28 ) != 0) {
      *(undefined4*)( *(long*)( lVar1 + 0x28 ) + 0x20 ) = param_2;
      *(byte*)( lVar1 + 0x48 ) = *(byte*)( lVar1 + 0x48 ) | 8;
      return 0;
   }

   pauVar2 = (undefined1(*) [16])operator_new(0x40);
   pauVar2[2] = (undefined1[16])0x0;
   pauVar2[3] = (undefined1[16])0x0;
   *(undefined2*)( pauVar2[2] + 10 ) = 0x4080;
   *(undefined4*)( pauVar2[3] + 6 ) = 0x13f80;
   *pauVar2 = (undefined1[16])0x0;
   pauVar2[1] = (undefined1[16])0x0;
   *(undefined1(**) [16])( lVar1 + 0x28 ) = pauVar2;
   *(undefined4*)pauVar2[2] = param_2;
   *(byte*)( lVar1 + 0x48 ) = *(byte*)( lVar1 + 0x48 ) | 8;
   return 0;
}
/* tvg::Shape::stroke(tvg::StrokeJoin) */undefined8 tvg::Shape::stroke(Shape *this, undefined4 param_2) {
   long lVar1;
   undefined1(*pauVar2)[16];
   lVar1 = *(long*)( this + 0x18 );
   if (*(long*)( lVar1 + 0x28 ) != 0) {
      *(undefined4*)( *(long*)( lVar1 + 0x28 ) + 0x24 ) = param_2;
      *(byte*)( lVar1 + 0x48 ) = *(byte*)( lVar1 + 0x48 ) | 8;
      return 0;
   }

   pauVar2 = (undefined1(*) [16])operator_new(0x40);
   pauVar2[2] = (undefined1[16])0x0;
   pauVar2[3] = (undefined1[16])0x0;
   *(undefined2*)( pauVar2[2] + 10 ) = 0x4080;
   *(undefined4*)( pauVar2[3] + 6 ) = 0x13f80;
   *pauVar2 = (undefined1[16])0x0;
   pauVar2[1] = (undefined1[16])0x0;
   *(undefined1(**) [16])( lVar1 + 0x28 ) = pauVar2;
   *(undefined4*)( pauVar2[2] + 4 ) = param_2;
   *(byte*)( lVar1 + 0x48 ) = *(byte*)( lVar1 + 0x48 ) | 8;
   return 0;
}
/* tvg::Shape::strokeMiterlimit(float) */undefined8 tvg::Shape::strokeMiterlimit(Shape *this, float param_1) {
   long lVar1;
   undefined1(*pauVar2)[16];
   if (0.0 <= param_1) {
      lVar1 = *(long*)( this + 0x18 );
      pauVar2 = *(undefined1(**) [16])( lVar1 + 0x28 );
      if (pauVar2 == (undefined1(*) [16])0x0) {
         pauVar2 = (undefined1(*) [16])operator_new(0x40);
         pauVar2[2] = (undefined1[16])0x0;
         pauVar2[3] = (undefined1[16])0x0;
         *(undefined2*)( pauVar2[2] + 10 ) = 0x4080;
         *(undefined4*)( pauVar2[3] + 6 ) = 0x13f80;
         *pauVar2 = (undefined1[16])0x0;
         pauVar2[1] = (undefined1[16])0x0;
         *(undefined1(**) [16])( lVar1 + 0x28 ) = pauVar2;
      }

      *(float*)( pauVar2[2] + 8 ) = param_1;
      *(byte*)( lVar1 + 0x48 ) = *(byte*)( lVar1 + 0x48 ) | 8;
      return 0;
   }

   return 1;
}
/* tvg::Shape::strokeCap() const */undefined4 tvg::Shape::strokeCap(Shape *this) {
   if (*(long*)( *(long*)( this + 0x18 ) + 0x28 ) != 0) {
      return *(undefined4*)( *(long*)( *(long*)( this + 0x18 ) + 0x28 ) + 0x20 );
   }

   return 0;
}
/* tvg::Shape::strokeJoin() const */undefined4 tvg::Shape::strokeJoin(Shape *this) {
   if (*(long*)( *(long*)( this + 0x18 ) + 0x28 ) != 0) {
      return *(undefined4*)( *(long*)( *(long*)( this + 0x18 ) + 0x28 ) + 0x24 );
   }

   return 0;
}
/* tvg::Shape::strokeMiterlimit() const */undefined4 tvg::Shape::strokeMiterlimit(Shape *this) {
   if (*(long*)( *(long*)( this + 0x18 ) + 0x28 ) != 0) {
      return *(undefined4*)( *(long*)( *(long*)( this + 0x18 ) + 0x28 ) + 0x28 );
   }

   return _LC14;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* tvg::Shape::strokeTrim(float, float, bool) */undefined8 tvg::Shape::strokeTrim(Shape *this, float param_1, float param_2, bool param_3) {
   long lVar1;
   undefined1(*pauVar2)[16];
   float fVar3;
   lVar1 = *(long*)( this + 0x18 );
   pauVar2 = *(undefined1(**) [16])( lVar1 + 0x28 );
   if (pauVar2 == (undefined1(*) [16])0x0) {
      if (( param_1 == 0.0 ) && ( param_2 == __LC15 )) {
         return 0;
      }

      pauVar2 = (undefined1(*) [16])operator_new(0x40);
      pauVar2[2] = (undefined1[16])0x0;
      pauVar2[3] = (undefined1[16])0x0;
      *pauVar2 = (undefined1[16])0x0;
      pauVar2[1] = (undefined1[16])0x0;
      fVar3 = 0.0;
      *(undefined2*)( pauVar2[2] + 10 ) = 0x4080;
      *(undefined4*)( pauVar2[3] + 6 ) = 0x13f80;
      *(undefined1(**) [16])( lVar1 + 0x28 ) = pauVar2;
   }
 else {
      fVar3 = *(float*)pauVar2[3];
   }

   if (( ( _LC12 < (float)( ( uint )(fVar3 - param_1) & _LC5 ) ) || ( _LC12 < (float)( ( uint )(*(float*)( pauVar2[3] + 4 ) - param_2) & _LC5 ) ) ) || ( param_3 != (bool)pauVar2[3][8] )) {
      pauVar2[3][8] = param_3;
      *(ulong*)pauVar2[3] = CONCAT44(param_2, param_1);
      *(byte*)( lVar1 + 0x48 ) = *(byte*)( lVar1 + 0x48 ) | 8;
   }

   return 0;
}
/* tvg::Shape::fill(tvg::FillRule) */undefined8 tvg::Shape::fill(Shape *this, undefined4 param_2) {
   *(undefined4*)( *(long*)( this + 0x18 ) + 0x34 ) = param_2;
   return 0;
}
/* tvg::Shape::fillRule() const */undefined4 tvg::Shape::fillRule(Shape *this) {
   return *(undefined4*)( *(long*)( this + 0x18 ) + 0x34 );
}
/* tvg::Shape::Impl::cubicTo(float, float, float, float, float, float) */void tvg::Shape::Impl::cubicTo(Impl *this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6) {
   uint uVar1;
   uint uVar2;
   void *pvVar3;
   uint uVar4;
   uint uVar5;
   uVar4 = *(uint*)( this + 8 );
   pvVar3 = *(void**)this;
   uVar1 = uVar4 + 1;
   if (*(uint*)( this + 0xc ) < uVar1) {
      uVar4 = ( uVar4 + 2 >> 1 ) + uVar4;
      *(uint*)( this + 0xc ) = uVar4;
      pvVar3 = realloc(pvVar3, (ulong)uVar4 << 2);
      uVar4 = *(uint*)( this + 8 );
      *(void**)this = pvVar3;
      uVar1 = uVar4 + 1;
   }

   *(uint*)( this + 8 ) = uVar1;
   uVar1 = *(uint*)( this + 0x1c );
   *(undefined4*)( (long)pvVar3 + (ulong)uVar4 * 4 ) = 3;
   uVar5 = *(uint*)( this + 0x18 );
   pvVar3 = *(void**)( this + 0x10 );
   uVar4 = uVar5 + 1;
   if (uVar1 < uVar4) {
      uVar5 = ( uVar5 + 2 >> 1 ) + uVar5;
      *(uint*)( this + 0x1c ) = uVar5;
      pvVar3 = realloc(pvVar3, (ulong)uVar5 << 3);
      uVar5 = *(uint*)( this + 0x18 );
      uVar1 = *(uint*)( this + 0x1c );
      *(void**)( this + 0x10 ) = pvVar3;
      uVar4 = uVar5 + 1;
   }

   *(uint*)( this + 0x18 ) = uVar4;
   *(ulong*)( (long)pvVar3 + (ulong)uVar5 * 8 ) = CONCAT44(param_2, param_1);
   uVar2 = uVar5 + 2;
   if (uVar1 < uVar2) {
      uVar4 = ( uVar5 + 3 >> 1 ) + uVar4;
      *(uint*)( this + 0x1c ) = uVar4;
      pvVar3 = realloc(pvVar3, (ulong)uVar4 * 8);
      uVar1 = *(uint*)( this + 0x1c );
      *(void**)( this + 0x10 ) = pvVar3;
      uVar4 = *(uint*)( this + 0x18 );
      uVar2 = uVar4 + 1;
   }

   *(uint*)( this + 0x18 ) = uVar2;
   *(ulong*)( (long)pvVar3 + (ulong)uVar4 * 8 ) = CONCAT44(param_4, param_3);
   if (uVar4 + 2 <= uVar1) {
      *(uint*)( this + 0x18 ) = uVar4 + 2;
      *(ulong*)( (long)pvVar3 + (ulong)uVar2 * 8 ) = CONCAT44(param_6, param_5);
      return;
   }

   uVar2 = ( uVar4 + 3 >> 1 ) + uVar2;
   *(uint*)( this + 0x1c ) = uVar2;
   pvVar3 = realloc(pvVar3, (ulong)uVar2 * 8);
   uVar4 = *(uint*)( this + 0x18 );
   *(void**)( this + 0x10 ) = pvVar3;
   *(uint*)( this + 0x18 ) = uVar4 + 1;
   *(ulong*)( (long)pvVar3 + (ulong)uVar4 * 8 ) = CONCAT44(param_6, param_5);
   return;
}

