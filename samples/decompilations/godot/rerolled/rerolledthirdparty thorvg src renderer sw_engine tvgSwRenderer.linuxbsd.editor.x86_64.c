/* opBlendDifference(unsigned int, unsigned int, unsigned char) */uint opBlendDifference(uint param_1, uint param_2, uchar param_3) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   uVar4 = param_1 >> 0x10 & 0xff;
   uVar2 = param_2 >> 0x10 & 0xff;
   uVar3 = param_1 >> 8 & 0xff;
   uVar1 = uVar2 - uVar4;
   if (( byte )(param_2 >> 0x10) < ( byte )(param_1 >> 0x10)) {
      uVar1 = uVar4 - uVar2;
   }

   uVar4 = param_2 >> 8 & 0xff;
   uVar2 = uVar4 - uVar3;
   if (( byte )(param_2 >> 8) < ( byte )(param_1 >> 8)) {
      uVar2 = uVar3 - uVar4;
   }

   uVar3 = ( param_2 & 0xff ) - ( param_1 & 0xff );
   if ((byte)param_2 < (byte)param_1) {
      uVar3 = ( param_1 & 0xff ) - ( param_2 & 0xff );
   }

   return ( uVar1 & 0xff ) << 0x10 | uVar3 & 0xff | ( uVar2 & 0xff ) << 8 | 0xff000000;
}
/* opBlendExclusion(unsigned int, unsigned int, unsigned char) */uint opBlendExclusion(uint param_1, uint param_2, uchar param_3) {
   uint uVar1;
   int iVar2;
   uint uVar3;
   int iVar4;
   uint uVar5;
   uint uVar6;
   uVar3 = param_1 >> 8 & 0xff;
   uVar1 = param_2 >> 8 & 0xff;
   uVar6 = param_2 >> 0x10 & 0xff;
   uVar5 = param_1 >> 0x10 & 0xff;
   iVar2 = uVar3 + uVar1 + ( (int)( uVar3 * uVar1 + 0xff ) >> 8 ) * -2;
   if (0xff < iVar2) {
      iVar2 = 0xff;
   }

   if (iVar2 < 0) {
      iVar2 = 0;
   }

   iVar4 = uVar5 + uVar6 + ( (int)( uVar5 * uVar6 + 0xff ) >> 8 ) * -2;
   if (0xff < iVar4) {
      iVar4 = 0xff;
   }

   if (iVar4 < 0) {
      iVar4 = 0;
   }

   uVar1 = ( param_1 & 0xff ) + ( param_2 & 0xff ) + ( (int)( ( param_1 & 0xff ) * ( param_2 & 0xff ) + 0xff ) >> 8 ) * -2;
   if (0xff < (int)uVar1) {
      uVar1 = 0xff;
   }

   if ((int)uVar1 < 0) {
      uVar1 = 0;
   }

   return iVar2 << 8 | iVar4 << 0x10 | uVar1 | 0xff000000;
}
/* opBlendAdd(unsigned int, unsigned int, unsigned char) */uint opBlendAdd(uint param_1, uint param_2, uchar param_3) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   uVar1 = ( param_1 >> 0x10 & 0xff ) + ( param_2 >> 0x10 & 0xff );
   if (0xff < uVar1) {
      uVar1 = 0xff;
   }

   uVar2 = ( param_1 >> 8 & 0xff ) + ( param_2 >> 8 & 0xff );
   if (0xff < uVar2) {
      uVar2 = 0xff;
   }

   uVar3 = ( param_1 & 0xff ) + ( param_2 & 0xff );
   if (0xff < uVar3) {
      uVar3 = 0xff;
   }

   return uVar1 << 0x10 | uVar2 << 8 | uVar3 | 0xff000000;
}
/* opBlendScreen(unsigned int, unsigned int, unsigned char) */uint opBlendScreen(uint param_1, uint param_2, uchar param_3) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   uVar2 = param_1 >> 8 & 0xff;
   uVar1 = param_2 >> 8 & 0xff;
   uVar4 = param_2 >> 0x10 & 0xff;
   uVar3 = param_1 >> 0x10 & 0xff;
   return ( ( uVar2 + uVar1 ) - ( (int)( uVar2 * uVar1 + 0xff ) >> 8 ) & 0xff ) << 8 | ( ( uVar3 + uVar4 ) - ( (int)( uVar3 * uVar4 + 0xff ) >> 8 ) & 0xff ) << 0x10 | ( ( param_1 & 0xff ) + ( param_2 & 0xff ) ) - ( (int)( ( param_1 & 0xff ) * ( param_2 & 0xff ) + 0xff ) >> 8 ) & 0xff | 0xff000000;
}
/* opBlendMultiply(unsigned int, unsigned int, unsigned char) */uint opBlendMultiply(uint param_1, uint param_2, uchar param_3) {
   return ( (int)( ( param_1 >> 0x10 & 0xff ) * ( param_2 >> 0x10 & 0xff ) + 0xff ) >> 8 ) << 0x10 | (int)( ( param_1 & 0xff ) * ( param_2 & 0xff ) + 0xff ) >> 8 | ( param_1 >> 8 & 0xff ) * ( param_2 >> 8 & 0xff ) + 0xff & 0xffffff00 | 0xff000000;
}
/* opBlendOverlay(unsigned int, unsigned int, unsigned char) */uint opBlendOverlay(uint param_1, uint param_2, uchar param_3) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   if ((char)( param_2 >> 0x10 ) < '\0') {
      uVar1 = ( (int)( ( ~(param_1 >> 0x10) & 0xff ) * ( ~(param_2 >> 0x10) & 0xff ) + 0xff ) >> 8 ) * 2;
      if (0xff < uVar1) {
         uVar1 = 0xff;
      }

      uVar1 = 0xff - uVar1;
   }
 else {
      uVar1 = ( (int)( ( param_2 >> 0x10 & 0xff ) * ( param_1 >> 0x10 & 0xff ) + 0xff ) >> 8 ) * 2;
      if (0xff < uVar1) {
         uVar1 = 0xff;
      }

   }

   if ((char)( param_2 >> 8 ) < '\0') {
      uVar2 = ( (int)( ( ~(param_1 >> 8) & 0xff ) * ( ~(param_2 >> 8) & 0xff ) + 0xff ) >> 8 ) * 2;
      if (0xff < uVar2) {
         uVar2 = 0xff;
      }

      uVar2 = 0xff - uVar2;
   }
 else {
      uVar2 = ( (int)( ( param_1 >> 8 & 0xff ) * ( param_2 >> 8 & 0xff ) + 0xff ) >> 8 ) * 2;
      if (0xff < uVar2) {
         uVar2 = 0xff;
      }

   }

   if ((char)param_2 < '\0') {
      uVar3 = ( (int)( ( ~param_1 & 0xff ) * ( ~param_2 & 0xff ) + 0xff ) >> 8 ) * 2;
      if (0xff < uVar3) {
         uVar3 = 0xff;
      }

      uVar3 = 0xff - uVar3;
   }
 else {
      uVar3 = ( (int)( ( param_1 & 0xff ) * ( param_2 & 0xff ) + 0xff ) >> 8 ) * 2;
      if (0xff < uVar3) {
         uVar3 = 0xff;
      }

   }

   return uVar1 << 0x10 | uVar3 | uVar2 << 8 | 0xff000000;
}
/* opBlendDarken(unsigned int, unsigned int, unsigned char) */uint opBlendDarken(uint param_1, uint param_2, uchar param_3) {
   byte bVar1;
   byte bVar2;
   byte bVar3;
   bVar2 = ( byte )(param_1 >> 8);
   bVar1 = ( byte )(param_2 >> 8);
   if (bVar2 <= bVar1) {
      bVar1 = bVar2;
   }

   bVar2 = ( byte )(param_1 >> 0x10);
   bVar3 = ( byte )(param_2 >> 0x10);
   if (bVar3 < bVar2) {
      bVar2 = bVar3;
   }

   bVar3 = (byte)param_1;
   if ((byte)param_2 < (byte)param_1) {
      bVar3 = (byte)param_2;
   }

   return (uint)bVar1 << 8 | (uint)bVar2 << 0x10 | (uint)bVar3 | 0xff000000;
}
/* opBlendLighten(unsigned int, unsigned int, unsigned char) */uint opBlendLighten(uint param_1, uint param_2, uchar param_3) {
   byte bVar1;
   byte bVar2;
   byte bVar3;
   bVar2 = ( byte )(param_1 >> 8);
   bVar1 = ( byte )(param_2 >> 8);
   if (bVar1 <= bVar2) {
      bVar1 = bVar2;
   }

   bVar2 = ( byte )(param_1 >> 0x10);
   bVar3 = ( byte )(param_2 >> 0x10);
   if (bVar2 < bVar3) {
      bVar2 = bVar3;
   }

   bVar3 = (byte)param_1;
   if ((byte)param_1 < (byte)param_2) {
      bVar3 = (byte)param_2;
   }

   return (uint)bVar1 << 8 | (uint)bVar2 << 0x10 | (uint)bVar3 | 0xff000000;
}
/* opBlendColorDodge(unsigned int, unsigned int, unsigned char) */uint opBlendColorDodge(uint param_1, uint param_2, uchar param_3) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   byte bVar4;
   uint uVar5;
   uVar5 = ~param_1;
   uVar3 = param_2 >> 0x10 & 0xff;
   if (( uVar5 & 0xff0000 ) != 0) {
      uVar1 = ( uVar3 * 0xff ) / ( uVar5 >> 0x10 & 0xff );
      uVar3 = 0xff;
      if (uVar1 < 0x100) {
         uVar3 = uVar1;
      }

   }

   bVar4 = ( byte )(param_2 >> 8);
   uVar1 = (uint)bVar4;
   if (( uVar5 & 0xff00 ) != 0) {
      uVar2 = (int)( (uint)bVar4 * 0x100 - (uint)bVar4 ) / (int)( uVar5 >> 8 & 0xff );
      uVar1 = 0xff;
      if ((int)uVar2 < 0x100) {
         uVar1 = uVar2;
      }

   }

   uVar2 = param_2 & 0xff;
   if ((char)uVar5 != '\0') {
      uVar5 = ( ( param_2 & 0xff ) * 0xff ) / ( uVar5 & 0xff );
      uVar2 = 0xff;
      if (uVar5 < 0x100) {
         uVar2 = uVar5;
      }

   }

   return uVar3 << 0x10 | uVar2 | uVar1 << 8 | 0xff000000;
}
/* opBlendColorBurn(unsigned int, unsigned int, unsigned char) */undefined1[16];opBlendColorBurn(uint param_1, uint param_2, uchar param_3) {
   int iVar1;
   uint uVar2;
   undefined7 in_register_00000011;
   undefined8 uVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   undefined1 auVar7[16];
   uVar3 = CONCAT71(in_register_00000011, param_3);
   uVar6 = ~param_2;
   if (( param_1 & 0xff0000 ) == 0) {
      uVar2 = param_2 >> 0x10 & 0xff;
   }
 else {
      uVar3 = 0xff;
      uVar2 = ( uint )((ulong)(long)(int)( ( uVar6 >> 0x10 & 0xff ) * 0xff ) / (ulong)(long)(int)( param_1 >> 0x10 & 0xff ));
      if (0xff < uVar2) {
         uVar2 = 0xff;
      }

      uVar2 = 0xff - uVar2;
   }

   if (( param_1 & 0xff00 ) == 0) {
      uVar5 = param_2 >> 8 & 0xff;
   }
 else {
      iVar1 = (int)( ( uVar6 & 0xff00 ) - ( uVar6 >> 8 & 0xff ) ) / (int)( param_1 >> 8 & 0xff );
      uVar3 = 0xff;
      if (0xff < iVar1) {
         iVar1 = 0xff;
      }

      uVar5 = 0xff - iVar1;
   }

   uVar4 = param_2 & 0xff;
   if ((char)param_1 != '\0') {
      uVar3 = 0xff;
      uVar4 = ( uint )((ulong)(long)(int)( ( uVar6 & 0xff ) * 0xff ) / (ulong)(long)(int)( param_1 & 0xff ));
      if (0xff < uVar4) {
         uVar4 = 0xff;
      }

      uVar4 = 0xff - uVar4;
   }

   auVar7._0_4_ = uVar2 << 0x10 | uVar4 | uVar5 << 8 | 0xff000000;
   auVar7._4_4_ = 0;
   auVar7._8_8_ = uVar3;
   return auVar7;
}
/* opBlendHardLight(unsigned int, unsigned int, unsigned char) */uint opBlendHardLight(uint param_1, uint param_2, uchar param_3) {
   uint uVar1;
   byte bVar2;
   uint uVar3;
   uint uVar4;
   bVar2 = ( byte )(param_1 >> 8);
   if ((char)( param_1 >> 0x10 ) < '\0') {
      uVar1 = ( (int)( ( ~(param_1 >> 0x10) & 0xff ) * ( ~(param_2 >> 0x10) & 0xff ) + 0xff ) >> 8 ) * 2;
      if (0xff < uVar1) {
         uVar1 = 0xff;
      }

      uVar1 = 0xff - uVar1;
   }
 else {
      uVar1 = ( (int)( ( param_2 >> 0x10 & 0xff ) * ( param_1 >> 0x10 & 0xff ) + 0xff ) >> 8 ) * 2;
      if (0xff < uVar1) {
         uVar1 = 0xff;
      }

   }

   if ((char)bVar2 < '\0') {
      uVar3 = ( (int)( ( ~(param_1 >> 8) & 0xff ) * ( ~(param_2 >> 8) & 0xff ) + 0xff ) >> 8 ) * 2;
      if (0xff < uVar3) {
         uVar3 = 0xff;
      }

      uVar3 = 0xff - uVar3;
   }
 else {
      uVar3 = ( (int)( (uint)bVar2 * ( param_2 >> 8 & 0xff ) + 0xff ) >> 8 ) * 2;
      if (0xff < uVar3) {
         uVar3 = 0xff;
      }

   }

   if ((char)param_1 < '\0') {
      uVar4 = ( (int)( ( ~param_1 & 0xff ) * ( ~param_2 & 0xff ) + 0xff ) >> 8 ) * 2;
      if (0xff < uVar4) {
         uVar4 = 0xff;
      }

      uVar4 = 0xff - uVar4;
   }
 else {
      uVar4 = ( (int)( ( param_1 & 0xff ) * ( param_2 & 0xff ) + 0xff ) >> 8 ) * 2;
      if (0xff < uVar4) {
         uVar4 = 0xff;
      }

   }

   return uVar1 << 0x10 | uVar4 | uVar3 << 8 | 0xff000000;
}
/* opBlendSoftLight(unsigned int, unsigned int, unsigned char) */uint opBlendSoftLight(uint param_1, uint param_2, uchar param_3) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   uVar5 = param_2 >> 0x10 & 0xff;
   uVar6 = param_1 >> 0xf & 0x1fe;
   if (0xff < uVar6) {
      uVar6 = 0xff;
   }

   uVar1 = ( param_1 >> 8 & 0xff ) * 2;
   uVar2 = param_2 >> 8 & 0xff;
   if (0xff < uVar1) {
      uVar1 = 0xff;
   }

   uVar4 = param_2 & 0xff;
   uVar3 = ( param_1 & 0xff ) * 2;
   if (0xff < uVar3) {
      uVar3 = 0xff;
   }

   return ( ( (int)( ( (int)( uVar5 * uVar5 + 0xff ) >> 8 ) * ( ~uVar6 & 0xff ) + 0xff ) >> 8 ) + ( (int)( uVar5 * uVar6 + 0xff ) >> 8 ) & 0xffU ) << 0x10 | ( ( (int)( ( (int)( uVar2 * uVar2 + 0xff ) >> 8 ) * ( ~uVar1 & 0xff ) + 0xff ) >> 8 ) + ( (int)( uVar2 * uVar1 + 0xff ) >> 8 ) & 0xffU ) << 8 | ( (int)( ( (int)( uVar4 * uVar4 + 0xff ) >> 8 ) * ( ~uVar3 & 0xff ) + 0xff ) >> 8 ) + ( (int)( uVar4 * uVar3 + 0xff ) >> 8 ) & 0xffU | 0xff000000;
}
/* tvg::SwRenderer::sync() */undefined8 tvg::SwRenderer::sync(void) {
   return 1;
}
/* tvg::SwRenderer::viewport() */undefined1  [16] __thiscalltvg::SwRenderer::viewport(SwRenderer *this) {
   return *(undefined1(*) [16])( this + 0x68 );
}
/* tvg::SwRenderer::viewport(tvg::RenderRegion const&) */undefined8 tvg::SwRenderer::viewport(SwRenderer *this, RenderRegion *param_1) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( param_1 + 8 );
   *(undefined8*)( this + 0x68 ) = *(undefined8*)param_1;
   *(undefined8*)( this + 0x70 ) = uVar1;
   return 1;
}
/* tvg::SwRenderer::blend(tvg::BlendMethod) */undefined8 tvg::SwRenderer::blend(SwRenderer *this, char param_2) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = *(long*)( this + 0x38 );
   uVar2 = 1;
   if (*(char*)( lVar1 + 0x78 ) != param_2) {
      *(char*)( lVar1 + 0x78 ) = param_2;
      switch (param_2) {
         default:
      *(undefined8 *)(lVar1 + 0x68) = 0;
      uVar2 = 0;
      break;
         case '\x01':
      uVar2 = 0;
      *(code **)(lVar1 + 0x68) = opBlendMultiply;
      break;
         case '\x02':
      uVar2 = 0;
      *(code **)(lVar1 + 0x68) = opBlendScreen;
      break;
         case '\x03':
      uVar2 = 0;
      *(code **)(lVar1 + 0x68) = opBlendOverlay;
      break;
         case '\x04':
      uVar2 = 0;
      *(code **)(lVar1 + 0x68) = opBlendDarken;
      break;
         case '\x05':
      uVar2 = 0;
      *(code **)(lVar1 + 0x68) = opBlendLighten;
      break;
         case '\x06':
      uVar2 = 0;
      *(code **)(lVar1 + 0x68) = opBlendColorDodge;
      break;
         case '\a':
      uVar2 = 0;
      *(code **)(lVar1 + 0x68) = opBlendColorBurn;
      break;
         case '\b':
      uVar2 = 0;
      *(code **)(lVar1 + 0x68) = opBlendHardLight;
      break;
         case '\t':
      uVar2 = 0;
      *(code **)(lVar1 + 0x68) = opBlendSoftLight;
      break;
         case '\n':
      uVar2 = 0;
      *(undefined8 *)(lVar1 + 0x68) = 0x100000;
      break;
         case '\v':
      uVar2 = 0;
      *(code **)(lVar1 + 0x68) = opBlendExclusion;
      break;
         case '\x10':
      uVar2 = 0;
      *(code **)(lVar1 + 0x68) = opBlendAdd;
      }

   }

   return uVar2;
}
/* tvg::SwRenderer::beginComposite(tvg::RenderCompositor*, tvg::CompositeMethod, unsigned char) */undefined8 tvg::SwRenderer::beginComposite(SwRenderer *this, int *param_1, int param_3, undefined1 param_4) {
   long lVar1;
   if (param_1 != (int*)0x0) {
      *param_1 = param_3;
      *(undefined1*)( param_1 + 1 ) = param_4;
      if (param_3 != 0) {
         lVar1 = *(long*)( param_1 + 2 );
         *(long*)( this + 0x38 ) = lVar1;
         *(int**)( lVar1 + 0x70 ) = param_1;
      }

      return 1;
   }

   return 0;
}
/* tvg::SwRenderer::mainSurface() */undefined8 tvg::SwRenderer::mainSurface(SwRenderer *this) {
   return *(undefined8*)( this + 0x38 );
}
/* tvg::SwRenderer::colorSpace() */undefined1 tvg::SwRenderer::colorSpace(SwRenderer *this) {
   if (*(long*)( this + 0x38 ) != 0) {
      return *(undefined1*)( *(long*)( this + 0x38 ) + 0x3c );
   }

   return 5;
}
/* tvg::SwRenderer::preRender() */void tvg::SwRenderer::preRender(SwRenderer *this) {
   SwSurface *pSVar1;
   pSVar1 = *(SwSurface**)( this + 0x38 );
   rasterClear(pSVar1, 0, 0, *(uint*)( pSVar1 + 0x34 ), *(uint*)( pSVar1 + 0x38 ), 0);
   return;
}
/* tvg::SwRenderer::postRender() */undefined8 tvg::SwRenderer::postRender(SwRenderer *this) {
   long *plVar1;
   ulong uVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   if (( byte )((char)( *(RenderSurface**)( this + 0x38 ) )[0x3c] - 2U) < 2) {
      rasterUnpremultiply(*(RenderSurface**)( this + 0x38 ));
   }

   puVar3 = *(undefined8**)( this + 0x40 );
   uVar2 = ( ulong ) * (uint*)( this + 0x48 );
   puVar4 = puVar3;
   if (puVar3 < puVar3 + uVar2) {
      do {
         while (plVar1 = (long*)*puVar4,*(char*)( (long)plVar1 + 0xe3 ) != '\0') {
            puVar4 = puVar4 + 1;
            ( **(code**)( *plVar1 + 8 ) )();
            puVar3 = *(undefined8**)( this + 0x40 );
            uVar2 = ( ulong ) * (uint*)( this + 0x48 );
            if (puVar3 + uVar2 <= puVar4) goto LAB_00100aa2;
         }
;
         puVar4 = puVar4 + 1;
         *(undefined1*)( (long)plVar1 + 0xe2 ) = 0;
      }
 while ( puVar4 < puVar3 + uVar2 );
   }

   LAB_00100aa2:*(undefined4*)( this + 0x48 ) = 0;
   return 1;
}
/* tvg::SwRenderer::endComposite(tvg::RenderCompositor*) */undefined8 tvg::SwRenderer::endComposite(SwRenderer *this, RenderCompositor *param_1) {
   RenderCompositor RVar1;
   SwSurface *pSVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   Matrix local_38[16];
   undefined1 local_28[16];
   undefined4 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (RenderCompositor*)0x0) {
      uVar3 = 0;
   }
 else {
      pSVar2 = *(SwSurface**)( param_1 + 8 );
      uVar3 = *(undefined8*)( param_1 + 0x10 );
      RVar1 = param_1[0x70];
      *(SwSurface**)( this + 0x38 ) = pSVar2;
      *(undefined8*)( pSVar2 + 0x70 ) = uVar3;
      if (( RVar1 == (RenderCompositor)0x0 ) && ( param_1[0x70] = (RenderCompositor)0x1 * (int*)param_1 == 0 )) {
         local_18 = 0x3f800000;
         local_38 = (Matrix[16])ZEXT416(_LC1);
         local_28 = ZEXT416(_LC1);
         uVar3 = rasterImage(pSVar2, (SwImage*)( param_1 + 0x18 ), local_38, (SwBBox*)( param_1 + 0x50 ), (uchar)param_1[4]);
      }
 else {
         uVar3 = 1;
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* tvg::SwRenderer::prepare(tvg::RenderEffect*, tvg::Matrix const&) */void tvg::SwRenderer::prepare(SwRenderer *this, RenderEffect *param_1, Matrix *param_2) {
   switch (param_1[0x20]) {
      default:
    return;
      case (RenderEffect)0x1:
    effectGaussianBlurUpdate((RenderEffectGaussianBlur *)param_1,param_2);
    return;
      case (RenderEffect)0x2:
    effectDropShadowUpdate((RenderEffectDropShadow *)param_1,param_2);
    return;
      case (RenderEffect)0x3:
    effectFillUpdate((RenderEffectFill *)param_1);
    return;
      case (RenderEffect)0x4:
    effectTintUpdate((RenderEffectTint *)param_1);
    return;
      case (RenderEffect)0x5:
    effectTritoneUpdate((RenderEffectTritone *)param_1);
    return;
   }

}
/* tvg::SwRenderer::region(tvg::RenderEffect*) */undefined8 tvg::SwRenderer::region(SwRenderer *this, RenderEffect *param_1) {
   undefined8 uVar1;
   if (param_1[0x20] == (RenderEffect)0x1) {
      uVar1 = effectGaussianBlurRegion((RenderEffectGaussianBlur*)param_1);
      return uVar1;
   }

   if (param_1[0x20] != (RenderEffect)0x2) {
      return 0;
   }

   uVar1 = effectDropShadowRegion((RenderEffectDropShadow*)param_1);
   return uVar1;
}
/* tvg::SwRenderer::renderShape(void*) */undefined8 tvg::SwRenderer::renderShape(SwRenderer *this, void *param_1) {
   pthread_mutex_t *__mutex;
   uchar uVar1;
   long lVar2;
   long lVar3;
   int iVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (void*)0x0) {
      uVar5 = 0;
   }
 else {
      if (*(char*)( (long)param_1 + 0x61 ) != '\0') {
         __mutex = (pthread_mutex_t*)( (long)param_1 + 8 );
         iVar4 = pthread_mutex_lock(__mutex);
         if (iVar4 != 0) {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar4);
         }

         if (*(char*)( (long)param_1 + 0x60 ) == '\0') {
            do {
               std::condition_variable::wait((unique_lock*)( (long)param_1 + 0x30 ));
            }
 while ( *(char*)( (long)param_1 + 0x60 ) == '\0' );
            *(undefined1*)( (long)param_1 + 0x61 ) = 0;
         }
 else {
            *(undefined1*)( (long)param_1 + 0x61 ) = 0;
         }

         if (__mutex != (pthread_mutex_t*)0x0) {
            pthread_mutex_unlock(__mutex);
         }

      }

      uVar1 = *(uchar*)( (long)param_1 + 0xe1 );
      if (uVar1 != '\0') {
         lVar3 = *(long*)( *(long*)( (long)param_1 + 0x138 ) + 0x28 );
         if (( lVar3 == 0 ) || ( *(char*)( lVar3 + 0x2c ) == '\0' )) {
            _renderFill((SwShapeTask*)param_1, *(SwSurface**)( this + 0x38 ), uVar1);
            _renderStroke((SwShapeTask*)param_1, *(SwSurface**)( this + 0x38 ), *(uchar*)( (long)param_1 + 0xe1 ));
         }
 else {
            _renderStroke((SwShapeTask*)param_1, *(SwSurface**)( this + 0x38 ), uVar1);
            _renderFill((SwShapeTask*)param_1, *(SwSurface**)( this + 0x38 ), *(uchar*)( (long)param_1 + 0xe1 ));
         }

      }

      uVar5 = 1;
   }

   if (lVar2 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
/* tvg::SwRenderer::clear() */undefined8 tvg::SwRenderer::clear(SwRenderer *this) {
   pthread_mutex_t *__mutex;
   long lVar1;
   long lVar2;
   int iVar3;
   undefined8 *puVar4;
   ulong uVar5;
   long *plVar6;
   undefined8 *puVar7;
   long in_FS_OFFSET;
   uVar5 = ( ulong ) * (uint*)( this + 0x48 );
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar4 = *(undefined8**)( this + 0x40 );
   puVar7 = puVar4;
   if (puVar4 < puVar4 + uVar5) {
      do {
         while (plVar6 = (long*)*puVar7,*(char*)( (long)plVar6 + 0xe3 ) == '\0') {
            if (*(char*)( (long)plVar6 + 0x61 ) != '\0') {
               __mutex = (pthread_mutex_t*)( plVar6 + 1 );
               iVar3 = pthread_mutex_lock(__mutex);
               if (iVar3 != 0) {
                  /* WARNING: Subroutine does not return */
                  std::__throw_system_error(iVar3);
               }

               if ((char)plVar6[0xc] == '\0') {
                  do {
                     std::condition_variable::wait((unique_lock*)( plVar6 + 6 ));
                  }
 while ( (char)plVar6[0xc] == '\0' );
                  *(undefined1*)( (long)plVar6 + 0x61 ) = 0;
               }
 else {
                  *(undefined1*)( (long)plVar6 + 0x61 ) = 0;
               }

               if (__mutex != (pthread_mutex_t*)0x0) {
                  pthread_mutex_unlock(__mutex);
               }

               plVar6 = (long*)*puVar7;
               puVar4 = *(undefined8**)( this + 0x40 );
               uVar5 = ( ulong ) * (uint*)( this + 0x48 );
            }

            puVar7 = puVar7 + 1;
            *(undefined1*)( (long)plVar6 + 0xe2 ) = 0;
            if (puVar4 + uVar5 <= puVar7) goto LAB_00100f2e;
         }
;
         puVar7 = puVar7 + 1;
         ( **(code**)( *plVar6 + 8 ) )(plVar6);
         puVar4 = *(undefined8**)( this + 0x40 );
         uVar5 = ( ulong ) * (uint*)( this + 0x48 );
      }
 while ( puVar7 < puVar4 + uVar5 );
   }

   LAB_00100f2e:*(undefined4*)( this + 0x48 ) = 0;
   if (this[0x78] == (SwRenderer)0x0) {
      mpoolClear(*(SwMpool**)( this + 0x60 ));
   }

   lVar2 = *(long*)( this + 0x38 );
   if (lVar2 != 0) {
      *(undefined8*)( this + 0x68 ) = 0;
      *(undefined4*)( this + 0x70 ) = *(undefined4*)( lVar2 + 0x34 );
      *(undefined4*)( this + 0x74 ) = *(undefined4*)( lVar2 + 0x38 );
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* tvg::SwRenderer::prepareCommon(SwTask*, tvg::Matrix const&, tvg::Array<void*> const&, unsigned
   char, tvg::RenderUpdateFlag) [clone .part.0] */void tvg::SwRenderer::prepareCommon(SwRenderer *this, Task *param_1, undefined8 *param_2, ulong *param_3, Task param_4, Task param_6) {
   pthread_mutex_t *__mutex;
   int iVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   int iVar6;
   uint uVar7;
   uint uVar8;
   ulong uVar9;
   long lVar10;
   void *pvVar11;
   long *plVar12;
   long *plVar13;
   long in_FS_OFFSET;
   uVar9 = (ulong)(uint)param_3[1];
   plVar12 = (long*)*param_3;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar13 = plVar12;
   if (plVar12 < plVar12 + uVar9) {
      do {
         lVar4 = *plVar13;
         if (*(char*)( lVar4 + 0x61 ) != '\0') {
            __mutex = (pthread_mutex_t*)( lVar4 + 8 );
            iVar6 = pthread_mutex_lock(__mutex);
            if (iVar6 != 0) {
               /* WARNING: Subroutine does not return */
               std::__throw_system_error(iVar6);
            }

            if (*(char*)( lVar4 + 0x60 ) == '\0') {
               do {
                  std::condition_variable::wait((unique_lock*)( lVar4 + 0x30 ));
               }
 while ( *(char*)( lVar4 + 0x60 ) == '\0' );
               *(undefined1*)( lVar4 + 0x61 ) = 0;
            }
 else {
               *(undefined1*)( lVar4 + 0x61 ) = 0;
            }

            if (__mutex != (pthread_mutex_t*)0x0) {
               pthread_mutex_unlock(__mutex);
            }

            plVar12 = (long*)*param_3;
            uVar9 = (ulong)(uint)param_3[1];
         }

         plVar13 = plVar13 + 1;
      }
 while ( plVar13 < plVar12 + uVar9 );
   }

   if (*(uint*)( param_1 + 0xdc ) < (uint)uVar9) {
      *(uint*)( param_1 + 0xdc ) = (uint)uVar9;
      pvVar11 = realloc(*(void**)( param_1 + 0xd0 ), uVar9 * 8);
      *(void**)( param_1 + 0xd0 ) = pvVar11;
      uVar9 = (ulong)(uint)param_3[1];
   }

   if ((int)uVar9 != 0) {
      memcpy(*(void**)( param_1 + 0xd0 ), (void*)*param_3, uVar9 * 8);
      uVar9 = (ulong)(uint)param_3[1];
   }

   *(int*)( param_1 + 0xd8 ) = (int)uVar9;
   uVar5 = param_2[1];
   *(undefined8*)( param_1 + 0xa8 ) = *param_2;
   *(undefined8*)( param_1 + 0xb0 ) = uVar5;
   uVar5 = param_2[3];
   *(undefined8*)( param_1 + 0xb8 ) = param_2[2];
   *(undefined8*)( param_1 + 0xc0 ) = uVar5;
   *(undefined4*)( param_1 + 200 ) = *(undefined4*)( param_2 + 4 );
   if (( ( *(float*)( param_1 + 0xa8 ) == 0.0 ) && ( *(float*)( param_1 + 0xac ) == 0.0 ) ) || ( ( *(float*)( param_1 + 0xb4 ) == 0.0 && ( *(float*)( param_1 + 0xb8 ) == 0.0 ) ) )) {
      if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      param_1[0xe1] = param_4;
      lVar4 = *(long*)( this + 0x38 );
      iVar6 = *(int*)( this + 0x68 );
      *(undefined8*)( param_1 + 0x80 ) = *(undefined8*)( this + 0x60 );
      *(long*)( param_1 + 0x78 ) = lVar4;
      param_1[0xe0] = param_6;
      lVar10 = 0;
      if (-1 < iVar6) {
         lVar10 = (long)iVar6;
      }

      *(long*)( param_1 + 0x88 ) = lVar10;
      iVar1 = *(int*)( this + 0x6c );
      lVar10 = 0;
      if (-1 < iVar1) {
         lVar10 = (long)iVar1;
      }

      iVar2 = *(int*)( this + 0x70 );
      *(long*)( param_1 + 0x90 ) = lVar10;
      uVar9 = (long)( iVar6 + iVar2 );
      if ((long)( ulong ) * (uint*)( lVar4 + 0x34 ) < (long)( iVar6 + iVar2 )) {
         uVar9 = ( ulong ) * (uint*)( lVar4 + 0x34 );
      }

      iVar6 = *(int*)( this + 0x74 );
      *(ulong*)( param_1 + 0x98 ) = uVar9;
      uVar9 = (long)( iVar1 + iVar6 );
      if ((long)( ulong ) * (uint*)( lVar4 + 0x38 ) < (long)( iVar1 + iVar6 )) {
         uVar9 = ( ulong ) * (uint*)( lVar4 + 0x38 );
      }

      *(ulong*)( param_1 + 0xa0 ) = uVar9;
      if (param_1[0xe2] == (Task)0x0) {
         uVar8 = *(uint*)( this + 0x48 );
         param_1[0xe2] = (Task)0x1;
         pvVar11 = *(void**)( this + 0x40 );
         uVar7 = uVar8 + 1;
         if (*(uint*)( this + 0x4c ) < uVar7) {
            uVar8 = ( uVar8 + 2 >> 1 ) + uVar8;
            *(uint*)( this + 0x4c ) = uVar8;
            pvVar11 = realloc(pvVar11, (ulong)uVar8 * 8);
            uVar8 = *(uint*)( this + 0x48 );
            *(void**)( this + 0x40 ) = pvVar11;
            uVar7 = uVar8 + 1;
         }

         *(uint*)( this + 0x48 ) = uVar7;
         *(Task**)( (long)pvVar11 + (ulong)uVar8 * 8 ) = param_1;
      }

      if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
         tvg::TaskScheduler::request(param_1);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* tvg::SwRenderer::renderImage(void*) */undefined8 tvg::SwRenderer::renderImage(SwRenderer *this, void *param_1) {
   pthread_mutex_t *__mutex;
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(char*)( (long)param_1 + 0x61 ) != '\0') {
      __mutex = (pthread_mutex_t*)( (long)param_1 + 8 );
      iVar2 = pthread_mutex_lock(__mutex);
      if (iVar2 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar2);
      }

      if (*(char*)( (long)param_1 + 0x60 ) == '\0') {
         do {
            std::condition_variable::wait((unique_lock*)( (long)param_1 + 0x30 ));
         }
 while ( *(char*)( (long)param_1 + 0x60 ) == '\0' );
         *(undefined1*)( (long)param_1 + 0x61 ) = 0;
      }
 else {
         *(undefined1*)( (long)param_1 + 0x61 ) = 0;
      }

      if (__mutex != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(__mutex);
      }

   }

   if (*(uchar*)( (long)param_1 + 0xe1 ) == '\0') {
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }
 else if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar3 = rasterImage(*(SwSurface**)( this + 0x38 ), (SwImage*)( (long)param_1 + 0xe8 ), (Matrix*)( (long)param_1 + 0xa8 ), (SwBBox*)( (long)param_1 + 0x88 ), *(uchar*)( (long)param_1 + 0xe1 ));
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* tvg::SwRenderer::region(void*) */ulong tvg::SwRenderer::region(SwRenderer *this, void *param_1) {
   pthread_mutex_t *__mutex;
   long lVar1;
   int iVar2;
   ulong uVar3;
   ulong uVar4;
   uint uVar5;
   ulong uVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(char*)( (long)param_1 + 0x61 ) != '\0') {
      __mutex = (pthread_mutex_t*)( (long)param_1 + 8 );
      iVar2 = pthread_mutex_lock(__mutex);
      if (iVar2 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar2);
      }

      if (*(char*)( (long)param_1 + 0x60 ) == '\0') {
         do {
            std::condition_variable::wait((unique_lock*)( (long)param_1 + 0x30 ));
         }
 while ( *(char*)( (long)param_1 + 0x60 ) == '\0' );
         *(undefined1*)( (long)param_1 + 0x61 ) = 0;
      }
 else {
         *(undefined1*)( (long)param_1 + 0x61 ) = 0;
      }

      if (__mutex != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(__mutex);
      }

   }

   uVar3 = *(ulong*)( (long)param_1 + 0x88 );
   if ((long)*(ulong*)( (long)param_1 + 0x88 ) < 0) {
      uVar3 = 0;
   }

   uVar7 = *(ulong*)( (long)param_1 + 0x90 );
   if ((long)*(ulong*)( (long)param_1 + 0x90 ) < 0) {
      uVar7 = 0;
   }

   uVar5 = *(int*)( (long)param_1 + 0x98 ) - (int)uVar3;
   uVar6 = (ulong)uVar5;
   if ((int)uVar5 < 0) {
      uVar6 = 0;
   }

   uVar5 = (int)*(undefined8*)( (long)param_1 + 0xa0 ) - (int)uVar7;
   uVar4 = (ulong)uVar5;
   if ((int)uVar5 < 0) {
      uVar4 = 0;
   }

   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail(0, uVar7 << 0x20, uVar6 | uVar4 << 0x20);
   }

   return uVar3 & 0xffffffff | uVar7 << 0x20;
}
/* tvg::SwRenderer::dispose(void*) */void tvg::SwRenderer::dispose(SwRenderer *this, void *param_1) {
   pthread_mutex_t *__mutex;
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (void*)0x0) {
      if (*(char*)( (long)param_1 + 0x61 ) != '\0') {
         __mutex = (pthread_mutex_t*)( (long)param_1 + 8 );
         iVar2 = pthread_mutex_lock(__mutex);
         if (iVar2 != 0) {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar2);
         }

         if (*(char*)( (long)param_1 + 0x60 ) == '\0') {
            do {
               std::condition_variable::wait((unique_lock*)( (long)param_1 + 0x30 ));
            }
 while ( *(char*)( (long)param_1 + 0x60 ) == '\0' );
            *(undefined1*)( (long)param_1 + 0x61 ) = 0;
         }
 else {
            *(undefined1*)( (long)param_1 + 0x61 ) = 0;
         }

         if (__mutex != (pthread_mutex_t*)0x0) {
            pthread_mutex_unlock(__mutex);
         }

      }

      /* WARNING: Load size is inaccurate */
      ( **(code**)( *param_1 + 0x18 ) )(param_1);
      if (*(char*)( (long)param_1 + 0xe2 ) == '\0') {
         if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Load size is inaccurate */
            /* WARNING: Could not recover jumptable at 0x00101572. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *param_1 + 8 ) )(param_1);
            return;
         }

         goto LAB_00101616;
      }

      *(undefined1*)( (long)param_1 + 0xe3 ) = 1;
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00101616:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* tvg::SwRenderer::prepare(tvg::RenderSurface*, void*, tvg::Matrix const&, tvg::Array<void*>&,
   unsigned char, tvg::RenderUpdateFlag) */undefined8 * __thiscall
tvg::SwRenderer::prepare
          (SwRenderer *this,undefined8 param_1,undefined8 *param_2,undefined8 param_3,
          undefined8 param_4,undefined1 param_5,char param_7){
   pthread_mutex_t *__mutex;
   long lVar1;
   long lVar2;
   int iVar3;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == (undefined8*)0x0) {
      param_2 = (undefined8*)operator_new(0x128);
      *param_2 = &DAT_00102e60;
      param_2[5] = 0;
      *(undefined1(*) [16])( param_2 + 1 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( param_2 + 3 ) = (undefined1[16])0x0;
      std::condition_variable::condition_variable((condition_variable*)( param_2 + 6 ));
      *(undefined2*)( param_2 + 0xc ) = 1;
      param_2[0x1a] = 0;
      param_2[0x1b] = 0;
      *(undefined1*)( param_2 + 0x1c ) = 0;
      *(undefined2*)( (long)param_2 + 0xe2 ) = 0;
      *param_2 = &PTR__SwImageTask_00102ec0;
      *(undefined8*)( (long)param_2 + 0x10c ) = 0;
      *(undefined2*)( (long)param_2 + 0x119 ) = 0;
      *(undefined1(*) [16])( param_2 + 0xf ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( param_2 + 0x1d ) = (undefined1[16])0x0;
   }
 else if (*(char*)( (long)param_2 + 0x61 ) != '\0') {
      __mutex = (pthread_mutex_t*)( param_2 + 1 );
      iVar3 = pthread_mutex_lock(__mutex);
      if (iVar3 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar3);
      }

      if (*(char*)( param_2 + 0xc ) == '\0') {
         do {
            std::condition_variable::wait((unique_lock*)( param_2 + 6 ));
         }
 while ( *(char*)( param_2 + 0xc ) == '\0' );
         *(undefined1*)( (long)param_2 + 0x61 ) = 0;
      }
 else {
         *(undefined1*)( (long)param_2 + 0x61 ) = 0;
      }

      if (__mutex != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(__mutex);
      }

   }

   lVar2 = *(long*)( this + 0x38 );
   param_2[0x24] = param_1;
   if (( lVar2 != 0 ) && ( param_7 != '\0' )) {
      prepareCommon(this, param_2, param_3, param_4, param_5, param_7);
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* tvg::SwRenderer::prepare(tvg::RenderShape const&, void*, tvg::Matrix const&, tvg::Array<void*>&,
   unsigned char, tvg::RenderUpdateFlag, bool) */undefined8 * __thiscall
tvg::SwRenderer::prepare
          (SwRenderer *this,undefined8 param_1,undefined8 *param_2,undefined8 param_3,
          undefined8 param_4,undefined1 param_5,char param_7,undefined1 param_8){
   pthread_mutex_t *__mutex;
   long lVar1;
   long lVar2;
   int iVar3;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == (undefined8*)0x0) {
      param_2 = (undefined8*)operator_new(0x148);
      *param_2 = &DAT_00102e60;
      param_2[5] = 0;
      *(undefined1(*) [16])( param_2 + 1 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( param_2 + 3 ) = (undefined1[16])0x0;
      std::condition_variable::condition_variable((condition_variable*)( param_2 + 6 ));
      *(undefined2*)( param_2 + 0xc ) = 1;
      param_2[0x1a] = 0;
      param_2[0x1b] = 0;
      *(undefined1*)( param_2 + 0x1c ) = 0;
      *(undefined2*)( (long)param_2 + 0xe2 ) = 0;
      *param_2 = &PTR__SwShapeTask_00102e88;
      param_2[0x21] = 0;
      *(undefined1*)( param_2 + 0x26 ) = 0;
      param_2[0x27] = 0;
      *(undefined1*)( param_2 + 0x28 ) = 0;
      *(undefined1(*) [16])( param_2 + 0xf ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( param_2 + 0x1d ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( param_2 + 0x1f ) = (undefined1[16])0x0;
   }
 else if (*(char*)( (long)param_2 + 0x61 ) != '\0') {
      __mutex = (pthread_mutex_t*)( param_2 + 1 );
      iVar3 = pthread_mutex_lock(__mutex);
      if (iVar3 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar3);
      }

      if (*(char*)( param_2 + 0xc ) == '\0') {
         do {
            std::condition_variable::wait((unique_lock*)( param_2 + 6 ));
         }
 while ( *(char*)( param_2 + 0xc ) == '\0' );
         *(undefined1*)( (long)param_2 + 0x61 ) = 0;
      }
 else {
         *(undefined1*)( (long)param_2 + 0x61 ) = 0;
      }

      if (__mutex != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(__mutex);
      }

   }

   lVar2 = *(long*)( this + 0x38 );
   *(undefined1*)( param_2 + 0x28 ) = param_8;
   param_2[0x27] = param_1;
   if (( lVar2 != 0 ) && ( param_7 != '\0' )) {
      prepareCommon(this, param_2, param_3, param_4, param_5, param_7);
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* tvg::SwRenderer::clearCompositors() */void tvg::SwRenderer::clearCompositors(SwRenderer *this) {
   long *plVar1;
   void *pvVar2;
   long *__ptr;
   plVar1 = *(long**)( this + 0x50 );
   __ptr = plVar1;
   if (plVar1 < plVar1 + *(uint*)( this + 0x58 )) {
      do {
         free(*(void**)( *(long*)( *plVar1 + 0x70 ) + 0x28 ));
         pvVar2 = (void*)*plVar1;
         if (*(void**)( (long)pvVar2 + 0x70 ) == (void*)0x0) {
            LAB_00101ab5:operator_delete(pvVar2, 0x80);
         }
 else {
            operator_delete(*(void**)( (long)pvVar2 + 0x70 ), 0x78);
            pvVar2 = (void*)*plVar1;
            if (pvVar2 != (void*)0x0) goto LAB_00101ab5;
         }

         plVar1 = plVar1 + 1;
         __ptr = *(long**)( this + 0x50 );
      }
 while ( plVar1 < *(long**)( this + 0x50 ) + *(uint*)( this + 0x58 ) );
   }

   free(__ptr);
   *(undefined8*)( this + 0x50 ) = 0;
   *(undefined8*)( this + 0x58 ) = 0;
   return;
}
/* tvg::SwRenderer::~SwRenderer() */void tvg::SwRenderer::~SwRenderer(SwRenderer *this) {
   *(undefined***)this = &PTR__SwRenderer_00102ef8;
   clearCompositors(this);
   if (*(void**)( this + 0x38 ) != (void*)0x0) {
      operator_delete(*(void**)( this + 0x38 ), 0x80);
   }

   if (this[0x78] == (SwRenderer)0x0) {
      mpoolTerm(*(SwMpool**)( this + 0x60 ));
   }

   rendererCnt = rendererCnt + -1;
   if (( rendererCnt == 0 ) && ( initEngineCnt == 0 )) {
      mpoolTerm(globalMpool);
      globalMpool = (SwMpool*)0x0;
   }

   free(*(void**)( this + 0x50 ));
   free(*(void**)( this + 0x40 ));
   return;
}
/* tvg::SwRenderer::~SwRenderer() */void tvg::SwRenderer::~SwRenderer(SwRenderer *this) {
   ~SwRenderer(this)
   ;;
   operator_delete(this, 0x80);
   return;
}
/* tvg::SwRenderer::target(unsigned int*, unsigned int, unsigned int, unsigned int, tvg::ColorSpace)
    */undefined8 tvg::SwRenderer::target(SwRenderer *this, long param_1, uint param_2, uint param_3, int param_4, byte param_6) {
   SwSurface *pSVar1;
   undefined8 uVar2;
   long *plVar3;
   undefined1 uVar4;
   if (( ( param_1 != 0 && param_2 != 0 ) && ( param_3 != 0 && param_4 != 0 ) ) && ( param_3 <= param_2 )) {
      clearCompositors(this);
      plVar3 = *(long**)( this + 0x38 );
      if (plVar3 == (long*)0x0) {
         plVar3 = (long*)operator_new(0x80);
         *plVar3 = 0;
         plVar3[5] = 0;
         plVar3[6] = 0;
         *(undefined4*)( plVar3 + 7 ) = 0;
         *(undefined2*)( (long)plVar3 + 0x3c ) = 5;
         *(undefined1*)( (long)plVar3 + 0x3e ) = 0;
         plVar3[0xd] = 0;
         plVar3[0xe] = 0;
         *(undefined1*)( plVar3 + 0xf ) = 0;
         *(long**)( this + 0x38 ) = plVar3;
         *(undefined1(*) [16])( plVar3 + 1 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( plVar3 + 3 ) = (undefined1[16])0x0;
      }

      *plVar3 = param_1;
      uVar4 = 4;
      *(uint*)( plVar3 + 6 ) = param_2;
      *(uint*)( (long)plVar3 + 0x34 ) = param_3;
      *(int*)( plVar3 + 7 ) = param_4;
      *(byte*)( (long)plVar3 + 0x3c ) = param_6;
      if (3 < param_6) {
         uVar4 = param_6 == 4;
      }

      *(undefined1*)( (long)plVar3 + 0x3d ) = uVar4;
      pSVar1 = *(SwSurface**)( this + 0x38 );
      pSVar1[0x3e] = (SwSurface)0x1;
      uVar2 = rasterCompositor(pSVar1);
      return uVar2;
   }

   return 0;
}
/* tvg::SwRenderer::mempool(bool) */bool tvg::SwRenderer::mempool(SwRenderer *this, bool param_1) {
   SwRenderer SVar1;
   char cVar2;
   SwMpool *pSVar3;
   SVar1 = this[0x78];
   if (SVar1 == (SwRenderer)param_1) {
      return true;
   }

   if (param_1) {
      pSVar3 = *(SwMpool**)( this + 0x60 );
      if (SVar1 == (SwRenderer)0x0) {
         cVar2 = mpoolTerm(pSVar3);
         pSVar3 = globalMpool;
         if (cVar2 == '\0') {
            return false;
         }

         *(SwMpool**)( this + 0x60 ) = globalMpool;
      }

   }
 else if (SVar1 == (SwRenderer)0x0) {
      pSVar3 = *(SwMpool**)( this + 0x60 );
   }
 else {
      pSVar3 = (SwMpool*)mpoolInit(threadsCnt);
      *(SwMpool**)( this + 0x60 ) = pSVar3;
   }

   this[0x78] = (SwRenderer)param_1;
   return pSVar3 != (SwMpool*)0x0;
}
/* tvg::SwRenderer::request(int, bool) */undefined8 * __thiscall tvg::SwRenderer::request(SwRenderer *this,int param_1,bool param_2){
   long *plVar1;
   undefined1 uVar2;
   long lVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   uint uVar6;
   long *plVar7;
   undefined8 *puVar8;
   void *pvVar9;
   void *pvVar10;
   uint uVar11;
   uint uVar12;
   uint uVar13;
   uVar6 = *(uint*)( *(long*)( this + 0x38 ) + 0x34 );
   uVar13 = *(uint*)( *(long*)( this + 0x38 ) + 0x38 );
   uVar12 = uVar6;
   if (( param_2 ) && ( uVar12 = uVar13 <= uVar6 )) {
      uVar12 = uVar6;
      uVar13 = uVar6;
   }

   plVar7 = *(long**)( this + 0x50 );
   plVar1 = plVar7 + *(uint*)( this + 0x58 );
   do {
      if (plVar1 <= plVar7) {
         puVar8 = (undefined8*)operator_new(0x80);
         puVar4 = *(undefined8**)( this + 0x38 );
         *(undefined1(*) [16])( puVar8 + 1 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( puVar8 + 3 ) = (undefined1[16])0x0;
         puVar8[5] = 0;
         *puVar8 = *puVar4;
         puVar8[6] = puVar4[6];
         *(undefined4*)( puVar8 + 7 ) = *(undefined4*)( puVar4 + 7 );
         *(undefined2*)( (long)puVar8 + 0x3c ) = *(undefined2*)( (long)puVar4 + 0x3c );
         uVar2 = *(undefined1*)( (long)puVar4 + 0x3e );
         puVar8[0xd] = 0;
         *(undefined1*)( (long)puVar8 + 0x3e ) = uVar2;
         uVar5 = puVar4[8];
         puVar8[0xe] = 0;
         *(undefined1*)( puVar8 + 0xf ) = 0;
         puVar8[8] = uVar5;
         uVar5 = puVar4[10];
         puVar8[9] = puVar4[9];
         puVar8[10] = uVar5;
         uVar5 = puVar4[0xc];
         puVar8[0xb] = puVar4[0xb];
         puVar8[0xc] = uVar5;
         puVar8[0xd] = puVar4[0xd];
         uVar2 = *(undefined1*)( puVar4 + 0xf );
         puVar8[0xe] = puVar4[0xe];
         *(undefined1*)( puVar8 + 0xf ) = uVar2;
         pvVar9 = operator_new(0x78);
         *(undefined8*)( (long)pvVar9 + 0x3c ) = 0;
         puVar8[0xe] = pvVar9;
         *(undefined1(*) [16])( (long)pvVar9 + 0x18 ) = (undefined1[16])0x0;
         pvVar10 = malloc(( ulong )(uVar12 * uVar13 * param_1));
         *(uint*)( (long)pvVar9 + 0x30 ) = uVar12;
         *(undefined2*)( (long)pvVar9 + 0x49 ) = 1;
         uVar6 = *(uint*)( this + 0x58 );
         *(void**)( (long)pvVar9 + 0x28 ) = pvVar10;
         *(uint*)( (long)pvVar9 + 0x34 ) = uVar13;
         uVar11 = uVar6 + 1;
         *(uint*)( puVar8 + 7 ) = uVar13;
         *(uint*)( (long)pvVar9 + 0x38 ) = uVar12;
         *(undefined1*)( (long)pvVar9 + 0x70 ) = 1;
         *(char*)( (long)pvVar9 + 0x48 ) = (char)param_1;
         *(char*)( (long)puVar8 + 0x3d ) = (char)param_1;
         puVar8[6] = CONCAT44(uVar12, uVar12);
         if (*(uint*)( this + 0x5c ) < uVar11) {
            uVar6 = ( uVar6 + 2 >> 1 ) + uVar6;
            *(uint*)( this + 0x5c ) = uVar6;
            pvVar9 = realloc(*(void**)( this + 0x50 ), (ulong)uVar6 * 8);
            uVar6 = *(uint*)( this + 0x58 );
            *(void**)( this + 0x50 ) = pvVar9;
            uVar11 = uVar6 + 1;
            pvVar10 = *(void**)( puVar8[0xe] + 0x28 );
         }
 else {
            pvVar9 = *(void**)( this + 0x50 );
         }

         *(uint*)( this + 0x58 ) = uVar11;
         *(undefined8**)( (long)pvVar9 + (ulong)uVar6 * 8 ) = puVar8;
         LAB_00101da6:*puVar8 = pvVar10;
         return puVar8;
      }

      puVar8 = (undefined8*)*plVar7;
      lVar3 = puVar8[0xe];
      if (( ( ( *(char*)( lVar3 + 0x70 ) != '\0' ) && ( ( uint ) * (byte*)( lVar3 + 0x48 ) == param_1 ) ) && ( *(uint*)( (long)puVar8 + 0x34 ) == uVar12 ) ) && ( *(uint*)( puVar8 + 7 ) == uVar13 )) {
         pvVar10 = *(void**)( lVar3 + 0x28 );
         goto LAB_00101da6;
      }

      plVar7 = plVar7 + 1;
   }
 while ( true );
}
/* tvg::SwRenderer::target(tvg::RenderRegion const&, tvg::ColorSpace, tvg::CompositionFlag) */undefined8 tvg::SwRenderer::target(SwRenderer *this, uint *param_1, byte param_3, byte param_4) {
   long lVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   SwSurface *pSVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   uint uVar11;
   uVar7 = *param_1;
   uVar10 = param_1[1];
   uVar8 = param_1[2];
   iVar2 = *(int*)( *(long*)( this + 0x38 ) + 0x34 );
   uVar11 = param_1[3];
   iVar3 = *(int*)( *(long*)( this + 0x38 ) + 0x38 );
   if (( ( (int)uVar7 < iVar2 ) && ( (int)uVar10 < iVar3 ) ) && ( -1 < (int)( uVar7 + uVar8 | uVar11 + uVar10 ) )) {
      uVar9 = 4;
      if (3 < param_3) {
         uVar9 = ( uint )(param_3 == 4);
      }

      pSVar6 = (SwSurface*)request(this, uVar9, (bool)( param_4 >> 3 & 1 ));
      uVar9 = 0;
      if (-1 < (int)uVar7) {
         uVar9 = uVar7;
      }

      uVar7 = 0;
      if (-1 < (int)uVar10) {
         uVar7 = uVar10;
      }

      if (iVar2 < (int)( uVar9 + uVar8 )) {
         uVar8 = iVar2 - uVar9;
      }

      if (iVar3 < (int)( uVar7 + uVar11 )) {
         uVar11 = iVar3 - uVar7;
      }

      if (( uVar8 != 0 ) && ( uVar11 != 0 )) {
         lVar4 = *(long*)( this + 0x38 );
         lVar5 = *(long*)( pSVar6 + 0x70 );
         lVar1 = *(long*)( lVar4 + 0x70 );
         *(long*)( lVar5 + 8 ) = lVar4;
         *(long*)( lVar5 + 0x10 ) = lVar1;
         lVar5 = *(long*)( pSVar6 + 0x70 );
         lVar4 = *(long*)( lVar4 + 0x68 );
         *(long*)( lVar5 + 0x50 ) = (long)(int)uVar9;
         *(long*)( lVar5 + 0x58 ) = (long)(int)uVar7;
         *(undefined1*)( lVar5 + 0x70 ) = 0;
         *(long*)( lVar5 + 0x60 ) = (long)(int)( uVar9 + uVar8 );
         *(long*)( lVar5 + 0x68 ) = (long)(int)( uVar7 + uVar11 );
         if (( lVar4 == 0 ) || ( uVar10 = lVar1 != 0 )) {
            uVar10 = 0;
         }

         rasterClear(pSVar6, uVar9, uVar7, uVar8, uVar11, uVar10);
         *(SwSurface**)( this + 0x38 ) = pSVar6;
         return *(undefined8*)( pSVar6 + 0x70 );
      }

   }

   return 0;
}
/* tvg::SwRenderer::render(tvg::RenderCompositor*, tvg::RenderEffect const*, bool) */undefined8 tvg::SwRenderer::render(SwRenderer *this, RenderCompositor *param_1, RenderEffect *param_2, bool param_3) {
   undefined8 uVar1;
   SwSurface *pSVar2;
   long in_FS_OFFSET;
   SwSurface *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1[0x48] == (RenderCompositor)0x4) {
      switch (param_2[0x20]) {
         default:
      goto switchD_001020d0_caseD_0;
         case (RenderEffect)0x1:
      pSVar2 = (SwSurface *)request(this,(uint)*(byte *)(*(long *)(this + 0x38) + 0x3d),true);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar1 = effectGaussianBlur((SwCompositor *)param_1,pSVar2,
                                   (RenderEffectGaussianBlur *)param_2);
        return uVar1;
      }
      break;
         case (RenderEffect)0x2:
      pSVar2 = (SwSurface *)request(this,(uint)*(byte *)(*(long *)(this + 0x38) + 0x3d),true);
      *(undefined1 *)(*(long *)(pSVar2 + 0x70) + 0x70) = 0;
      local_30 = request(this,(uint)*(byte *)(*(long *)(this + 0x38) + 0x3d),true);
      local_38 = pSVar2;
      uVar1 = effectDropShadow((SwCompositor *)param_1,&local_38,(RenderEffectDropShadow *)param_2,
                               param_3);
      *(undefined1 *)(*(long *)(pSVar2 + 0x70) + 0x70) = 1;
      goto LAB_001020da;
         case (RenderEffect)0x3:
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar1 = effectFill((SwCompositor *)param_1,(RenderEffectFill *)param_2,param_3);
        return uVar1;
      }
      break;
         case (RenderEffect)0x4:
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar1 = effectTint((SwCompositor *)param_1,(RenderEffectTint *)param_2,param_3);
        return uVar1;
      }
      break;
         case (RenderEffect)0x5:
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar1 = effectTritone((SwCompositor *)param_1,(RenderEffectTritone *)param_2,param_3);
        return uVar1;
      }
      }

   }
 else {
      switchD_001020d0_caseD_0:uVar1 = 0;
      LAB_001020da:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* tvg::SwRenderer::prepareCommon(SwTask*, tvg::Matrix const&, tvg::Array<void*> const&, unsigned
   char, tvg::RenderUpdateFlag) */undefined8 tvg::SwRenderer::prepareCommon(long param_1, undefined8 param_2) {
   char in_R9B;
   if (( *(long*)( param_1 + 0x38 ) != 0 ) && ( in_R9B != '\0' )) {
      prepareCommon();
   }

   return param_2;
}
/* tvg::SwRenderer::SwRenderer() */void tvg::SwRenderer::SwRenderer(SwRenderer *this) {
   undefined8 uVar1;
   *(undefined4*)( this + 8 ) = 0;
   *(undefined***)this = &PTR__SwRenderer_00102ef8;
   uVar1 = globalMpool;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x30 ) = 0;
   *(undefined8*)( this + 0x48 ) = 0;
   *(undefined8*)( this + 0x50 ) = 0;
   *(undefined8*)( this + 0x58 ) = 0;
   *(undefined8*)( this + 0x60 ) = uVar1;
   this[0x78] = (SwRenderer)0x1;
   *(undefined1(*) [16])( this + 0x38 ) = (undefined1[16])0x0;
   return;
}
/* tvg::SwRenderer::init(unsigned int) */bool tvg::SwRenderer::init(uint param_1) {
   int iVar1;
   iVar1 = initEngineCnt;
   initEngineCnt = initEngineCnt + 1;
   if (iVar1 < 1) {
      threadsCnt = param_1;
      globalMpool = mpoolInit(param_1);
      if (globalMpool == 0) {
         initEngineCnt = initEngineCnt + -1;
      }

      return globalMpool != 0;
   }

   return true;
}
/* tvg::SwRenderer::init() */undefined4 tvg::SwRenderer::init(void) {
   return initEngineCnt;
}
/* tvg::SwRenderer::term() */undefined8 tvg::SwRenderer::term(void) {
   if (0 < initEngineCnt + -1) {
      initEngineCnt = initEngineCnt + -1;
      return 1;
   }

   initEngineCnt = 0;
   if (0 < rendererCnt) {
      return 1;
   }

   mpoolTerm(globalMpool);
   globalMpool = (SwMpool*)0x0;
   return 1;
}
/* tvg::SwRenderer::gen() */void tvg::SwRenderer::gen(void) {
   undefined8 uVar1;
   undefined8 *puVar2;
   rendererCnt = rendererCnt + 1;
   puVar2 = (undefined8*)operator_new(0x80);
   uVar1 = globalMpool;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar2 + 4 ) = (undefined1[16])0x0;
   *(undefined4*)( puVar2 + 1 ) = 0;
   puVar2[6] = 0;
   *puVar2 = &PTR__SwRenderer_00102ef8;
   for (int i = 0; i < 3; i++) {
      puVar2[( i + 9 )] = 0;
   }

   puVar2[0xc] = uVar1;
   *(undefined1*)( puVar2 + 0xf ) = 1;
   *(undefined1(*) [16])( puVar2 + 7 ) = (undefined1[16])0x0;
   return;
}
/* SwImageTask::clip(SwRle*) */undefined8 SwImageTask::clip(SwRle *param_1) {
   return 1;
}
/* SwImageTask::dispose() */void SwImageTask::dispose(SwImageTask *this) {
   imageFree((SwImage*)( this + 0xe8 ));
   return;
}
/* SwImageTask::run(unsigned int) */void SwImageTask::run(SwImageTask *this, uint param_1) {
   SwImage *pSVar1;
   char cVar2;
   SwMpool *pSVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   long local_30;
   pSVar1 = (SwImage*)( this + 0xe8 );
   local_58 = *(undefined8*)( this + 0x88 );
   uStack_50 = *(undefined8*)( this + 0x90 );
   local_48 = *(undefined8*)( this + 0x98 );
   uStack_40 = *(undefined8*)( this + 0xa0 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   rasterConvertCS(*(undefined8*)( this + 0x120 ), *(undefined1*)( *(long*)( this + 0x78 ) + 0x3c ));
   rasterPremultiply(*(RenderSurface**)( this + 0x120 ));
   puVar4 = *(undefined8**)( this + 0x120 );
   *(undefined8*)( this + 0xf8 ) = *puVar4;
   *(undefined4*)( this + 0x100 ) = *(undefined4*)( (long)puVar4 + 0x34 );
   *(undefined4*)( this + 0x104 ) = *(undefined4*)( puVar4 + 7 );
   *(undefined4*)( this + 0x108 ) = *(undefined4*)( puVar4 + 6 );
   this[0x118] = *(SwImageTask*)( (long)puVar4 + 0x3d );
   if (( ( (byte)this[0xe0] & 0x32 ) == 0 ) || ( this[0xe1] == (SwImageTask)0x0 )) {
      LAB_0010257b:pSVar3 = *(SwMpool**)( this + 0x80 );
   }
 else {
      imageReset(pSVar1);
      pSVar3 = *(SwMpool**)( this + 0x80 );
      if (( *(long*)( this + 0xf8 ) != 0 ) && ( ( *(int*)( this + 0x100 ) != 0 && ( *(int*)( this + 0x104 ) != 0 ) ) )) {
         cVar2 = imagePrepare(pSVar1, (Matrix*)( this + 0xa8 ), (SwBBox*)&local_58, (SwBBox*)( this + 0x88 ), pSVar3, param_1);
         if (( cVar2 == '\0' ) || ( *(int*)( this + 0xd8 ) == 0 )) goto LAB_0010257b;
         cVar2 = imageGenRle(pSVar1, (SwBBox*)( this + 0x88 ), false);
         pSVar3 = *(SwMpool**)( this + 0x80 );
         if (( cVar2 != '\0' ) && ( *(long*)( this + 0xf0 ) != 0 )) {
            imageDelOutline(pSVar1, pSVar3, param_1);
            puVar4 = *(undefined8**)( this + 0xd0 );
            if (puVar4 < puVar4 + *(uint*)( this + 0xd8 )) {
               do {
                  cVar2 = ( **(code**)( *(long*)*puVar4 + 0x20 ) )((long*)*puVar4, *(undefined8*)( this + 0xf0 ));
                  if (cVar2 == '\0') {
                     rleReset(*(SwRle**)( this + 0xf0 ));
                     goto LAB_0010257b;
                  }

                  puVar4 = puVar4 + 1;
               }
 while ( puVar4 < (undefined8*)( *(long*)( this + 0xd0 ) + ( ulong ) * (uint*)( this + 0xd8 ) * 8 ) );
            }

            goto LAB_0010258c;
         }

      }

   }

   imageDelOutline(pSVar1, pSVar3, param_1);
   LAB_0010258c:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* SwShapeTask::dispose() */void SwShapeTask::dispose(SwShapeTask *this) {
   shapeFree((SwShape*)( this + 0xe8 ));
   return;
}
/* SwShapeTask::clip(SwRle*) */undefined8 SwShapeTask::clip(SwShapeTask *this, SwRle *param_1) {
   undefined8 uVar1;
   if (this[0x130] != (SwShapeTask)0x0) {
      uVar1 = rleClip(param_1, (SwBBox*)( this + 0x88 ));
      return uVar1;
   }

   if (*(SwRle**)( this + 0x100 ) != (SwRle*)0x0) {
      uVar1 = rleClip(param_1, *(SwRle**)( this + 0x100 ));
      return uVar1;
   }

   return 0;
}
/* SwShapeTask::run(unsigned int) */void SwShapeTask::run(SwShapeTask *this, uint param_1) {
   SwShape *pSVar1;
   Matrix *pMVar2;
   float *pfVar3;
   long lVar4;
   Fill *pFVar5;
   long *plVar6;
   char cVar7;
   SwShapeTask SVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   bool bVar10;
   float local_6c;
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( this[0xe1] == (SwShapeTask)0x0 ) && ( this[0x140] == (SwShapeTask)0x0 )) {
      *(undefined1(*) [16])( this + 0x88 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 0x98 ) = (undefined1[16])0x0;
      goto LAB_00102b32;
   }

   pfVar3 = *(float**)( *(long*)( this + 0x138 ) + 0x28 );
   if (pfVar3 == (float*)0x0) {
      local_6c = 0.0;
   }
 else {
      local_6c = 0.0;
      if (( _LC4 < (float)( ( uint ) * pfVar3 & _LC3 ) ) && ( ( ( *(long*)( pfVar3 + 2 ) != 0 || ( (uint)(byte)this[0xe1] * ( uint ) * (byte*)( (long)pfVar3 + 7 ) + 0xff >> 8 != 0 ) ) && ( local_6c = 0.0 ),_LC4 < (float)( ( uint )(pfVar3[0xc] - pfVar3[0xd]) & _LC3 ) ) )) {
         local_6c = *pfVar3 * SQRT(*(float*)( this + 0xa8 ) * *(float*)( this + 0xa8 ) + *(float*)( this + 0xac ) * *(float*)( this + 0xac ));
      }

   }

   pSVar1 = (SwShape*)( this + 0xe8 );
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   cVar7 = shapePrepared(pSVar1);
   SVar8 = this[0xe0];
   if (( ( cVar7 != '\0' ) || ( ( (byte)SVar8 & 2 ) == 0 ) ) && ( ( (byte)SVar8 & 0x11 ) == 0 )) {
      LAB_00102874:if (( (byte)SVar8 & 0x17 ) == 0) goto LAB_0010296e;
      LAB_0010287c:if (this[0x140] == (SwShapeTask)0x0) {
         LAB_00102910:pFVar5 = *(Fill**)( *(long*)( this + 0x138 ) + 0x20 );
         if (pFVar5 == (Fill*)0x0) {
            shapeDelFill(pSVar1);
         }
 else {
            SVar8 = this[0xe0];
            if (( (byte)SVar8 & 4 ) != 0) {
               shapeResetFill(pSVar1);
            }

            cVar7 = shapeGenFillColors(pSVar1, pFVar5, (Matrix*)( this + 0xa8 ), *(SwSurface**)( this + 0x78 ), (uchar)this[0xe1], (bool)( ( byte )((int)(uint)(byte)SVar8 >> 2) & 1 ));
            if (cVar7 == '\0') goto LAB_00102b58;
         }

         SVar8 = this[0xe0];
         goto LAB_0010296e;
      }

      LAB_00102889:bVar10 = true;
      if (( ( _LC5 <= local_6c ) && ( lVar4 = *(long*)( *(RenderShape**)( this + 0x138 ) + 0x28 ) * (int*)( lVar4 + 0x18 ) == 0 ) ) && ( *(char*)( lVar4 + 0x2c ) == '\0' )) {
         if (( ( *(float*)( lVar4 + 0x30 ) == 0.0 ) && ( *(float*)( lVar4 + 0x34 ) == _LC1 ) ) || ( bVar10 = true ),_LC1 <= (float)( ( uint )(*(float*)( lVar4 + 0x34 ) - *(float*)( lVar4 + 0x30 )) & _LC3 )) {
            bVar10 = *(char*)( lVar4 + 7 ) != -1;
         }

      }

      cVar7 = shapeGenRle(pSVar1, *(RenderShape**)( this + 0x138 ), bVar10);
      if (cVar7 != '\0') goto LAB_00102910;
      goto LAB_00102b58;
   }

   if (( (uint)(byte)this[0xe1] * ( uint ) * (byte*)( *(long*)( this + 0x138 ) + 0x33 ) + 0xff >> 8 == 0 ) && ( *(long*)( *(long*)( this + 0x138 ) + 0x20 ) == 0 )) {
      shapeReset(pSVar1);
      if (this[0x140] != (SwShapeTask)0x0) {
         bVar10 = false;
         goto LAB_00102818;
      }

      SVar8 = this[0xe0];
      if (( (byte)SVar8 & 0x17 ) == 0) goto LAB_0010296e;
      goto LAB_00102910;
   }

   shapeReset(pSVar1);
   bVar10 = true;
   LAB_00102818:cVar7 = shapePrepare(pSVar1, *(RenderShape**)( this + 0x138 ), (Matrix*)( this + 0xa8 ), (SwBBox*)( this + 0x88 ), (SwBBox*)local_68, *(SwMpool**)( this + 0x80 ), param_1, *(int*)( this + 0xd8 ) != 0);
   if (cVar7 == '\0') {
      SVar8 = this[0xe0];
      local_68 = (undefined1[16])0x0;
      local_58 = (undefined1[16])0x0;
      goto LAB_00102874;
   }

   SVar8 = this[0xe0];
   if (( (byte)SVar8 & 0x17 ) != 0) {
      if (!bVar10) goto LAB_0010287c;
      goto LAB_00102889;
   }

   LAB_0010296e:if (( (byte)SVar8 & 0x19 ) != 0) {
      if (local_6c <= 0.0) {
         shapeDelStroke(pSVar1);
      }
 else {
         pMVar2 = (Matrix*)( this + 0xa8 );
         shapeResetStroke(pSVar1, *(RenderShape**)( this + 0x138 ), pMVar2);
         cVar7 = shapeGenStrokeRle(pSVar1, *(RenderShape**)( this + 0x138 ), pMVar2, (SwBBox*)( this + 0x88 ), (SwBBox*)local_68, *(SwMpool**)( this + 0x80 ), param_1);
         if (cVar7 == '\0') {
            LAB_00102b58:*(undefined1(*) [16])( this + 0x88 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( this + 0x98 ) = (undefined1[16])0x0;
            shapeReset(pSVar1);
            shapeDelOutline(pSVar1, *(SwMpool**)( this + 0x80 ), param_1);
            goto LAB_00102b32;
         }

         if (( *(long*)( *(long*)( this + 0x138 ) + 0x28 ) == 0 ) || ( pFVar5 = *(Fill**)( *(long*)( *(long*)( this + 0x138 ) + 0x28 ) + 8 ) ),pFVar5 == (Fill*)0x0) {
            shapeDelStrokeFill(pSVar1);
         }
 else {
            SVar8 = this[0xe0];
            if (( (byte)SVar8 & 0x40 ) != 0) {
               shapeResetStrokeFill(pSVar1);
            }

            cVar7 = shapeGenStrokeFillColors(pSVar1, pFVar5, pMVar2, *(SwSurface**)( this + 0x78 ), (uchar)this[0xe1], (bool)( ( byte )((int)(uint)(byte)SVar8 >> 6) & 1 ));
            if (cVar7 == '\0') goto LAB_00102b58;
         }

      }

   }

   shapeDelOutline(pSVar1, *(SwMpool**)( this + 0x80 ), param_1);
   puVar9 = *(undefined8**)( this + 0xd0 );
   if (puVar9 < puVar9 + *(uint*)( this + 0xd8 )) {
      do {
         plVar6 = (long*)*puVar9;
         if (( ( *(long*)( this + 0x100 ) != 0 ) && ( cVar7 = ( **(code**)( *plVar6 + 0x20 ) )(plVar6) ),cVar7 == '\0' )) goto LAB_00102b58;
         puVar9 = puVar9 + 1;
      }
 while ( puVar9 < (undefined8*)( *(long*)( this + 0xd0 ) + ( ulong ) * (uint*)( this + 0xd8 ) * 8 ) );
   }

   *(undefined8*)( this + 0x88 ) = local_68._0_8_;
   *(undefined8*)( this + 0x90 ) = local_68._8_8_;
   *(undefined8*)( this + 0x98 ) = local_58._0_8_;
   *(undefined8*)( this + 0xa0 ) = local_58._8_8_;
   LAB_00102b32:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SwImageTask::~SwImageTask() */void SwImageTask::~SwImageTask(SwImageTask *this) {
   free(*(void**)( this + 0xd0 ));
   *(undefined**)this = &DAT_00102e60;
   std::condition_variable::~condition_variable((condition_variable*)( this + 0x30 ));
   return;
}
/* SwShapeTask::~SwShapeTask() */void SwShapeTask::~SwShapeTask(SwShapeTask *this) {
   free(*(void**)( this + 0xd0 ));
   *(undefined**)this = &DAT_00102e60;
   std::condition_variable::~condition_variable((condition_variable*)( this + 0x30 ));
   return;
}
/* SwImageTask::~SwImageTask() */void SwImageTask::~SwImageTask(SwImageTask *this) {
   free(*(void**)( this + 0xd0 ));
   *(undefined**)this = &DAT_00102e60;
   std::condition_variable::~condition_variable((condition_variable*)( this + 0x30 ));
   operator_delete(this, 0x128);
   return;
}
/* SwShapeTask::~SwShapeTask() */void SwShapeTask::~SwShapeTask(SwShapeTask *this) {
   free(*(void**)( this + 0xd0 ));
   *(undefined**)this = &DAT_00102e60;
   std::condition_variable::~condition_variable((condition_variable*)( this + 0x30 ));
   operator_delete(this, 0x148);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* SwShapeTask::~SwShapeTask() */void SwShapeTask::~SwShapeTask(SwShapeTask *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* SwImageTask::~SwImageTask() */void SwImageTask::~SwImageTask(SwImageTask *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

