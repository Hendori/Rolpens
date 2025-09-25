/* graphite2::Slot::Slot(short*) */void graphite2::Slot::Slot(Slot *this, short *param_1) {
   *(undefined4*)( this + 0x10 ) = 0;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x38 ) = 0;
   *(undefined8*)( this + 0x60 ) = 0;
   *(undefined8*)( this + 0x68 ) = 0xff000000000000;
   *(short**)( this + 0x70 ) = param_1;
   *(undefined8*)( this + 0x78 ) = 0;
   *(undefined1(*) [16])( this + 0x14 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x40 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x50 ) = (undefined1[16])0x0;
   return;
}
/* graphite2::Slot::set(graphite2::Slot const&, int, unsigned long, unsigned long, unsigned long) */void graphite2::Slot::set(Slot *this, Slot *param_1, int param_2, ulong param_3, ulong param_4, ulong param_5) {
   undefined8 uVar1;
   int iVar2;
   uint uVar3;
   *(undefined4*)( this + 0x10 ) = *(undefined4*)( param_1 + 0x10 );
   *(int*)( this + 0x14 ) = *(int*)( param_1 + 0x14 ) + param_2;
   iVar2 = param_2 + *(int*)( param_1 + 0x18 );
   if (iVar2 < 0) {
      iVar2 = 0;
   }

   *(int*)( this + 0x18 ) = iVar2;
   uVar3 = *(int*)( param_1 + 0x1c ) + param_2;
   if (( param_2 < 1 ) && ( param_5 <= uVar3 )) {
      uVar3 = (int)param_5 - 1;
   }

   uVar1 = *(undefined8*)( param_1 + 0x40 );
   *(uint*)( this + 0x1c ) = uVar3;
   *(undefined8*)( this + 0x38 ) = 0;
   *(undefined8*)( this + 0x40 ) = uVar1;
   uVar1 = *(undefined8*)( param_1 + 0x48 );
   *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x48 ) = uVar1;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 80 ) ) = *(undefined8*)( param_1 + ( 8*i + 80 ) );
   }

   *(undefined2*)( this + 0x6c ) = *(undefined2*)( param_1 + 0x6c );
   this[0x6e] = param_1[0x6e];
   this[0x6f] = param_1[0x6f];
   if (( *(void**)( this + 0x70 ) != (void*)0x0 ) && ( *(void**)( param_1 + 0x70 ) != (void*)0x0 )) {
      memcpy(*(void**)( this + 0x70 ), *(void**)( param_1 + 0x70 ), param_3 * 2);
   }

   if (( *(void**)( this + 0x78 ) != (void*)0x0 ) && ( *(void**)( param_1 + 0x78 ) != (void*)0x0 )) {
      if (param_4 == 0) {
         param_4 = 1;
      }

      memcpy(*(void**)( this + 0x78 ), *(void**)( param_1 + 0x78 ), param_4 * 10 + 0xe);
      return;
   }

   return;
}
/* graphite2::Slot::update(int, int, graphite2::Position&) */void graphite2::Slot::update(Slot *this, int param_1, int param_2, Position *param_3) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)param_3;
   *(ulong*)( this + 0x18 ) = CONCAT44((int)( ( ulong ) * (undefined8*)( this + 0x18 ) >> 0x20 ) + param_2, (int)*(undefined8*)( this + 0x18 ) + param_2);
   *(ulong*)( this + 0x40 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x40 ) >> 0x20 ) + (float)( (ulong)uVar1 >> 0x20 ), (float)*(undefined8*)( this + 0x40 ) + (float)uVar1);
   return;
}
/* graphite2::Slot::getJustify(graphite2::Segment const*, unsigned char, unsigned char) const */int graphite2::Slot::getJustify(Slot *this, Segment *param_1, uchar param_2, uchar param_3) {
   short sVar1;
   long lVar2;
   if (param_2 == '\0') {
      lVar2 = *(long*)( this + 0x78 );
      if (lVar2 == 0) {
         if (*(char*)( *(long*)( param_1 + 0x90 ) + 0x29 ) == '\0') {
            return 0;
         }

         goto LAB_001001d9;
      }

   }
 else {
      if (*(byte*)( *(long*)( param_1 + 0x90 ) + 0x29 ) <= param_2) {
         return 0;
      }

      lVar2 = *(long*)( this + 0x78 );
      if (lVar2 == 0) {
         LAB_001001d9:if (( ( ( param_3 == '\x02' ) || ( param_3 < 3 ) ) || ( param_3 == '\x03' ) ) && ( ( *(ushort*)( this + 0x10 ) < *(ushort*)( *(long*)( *(long*)( param_1 + 0x88 ) + 0x78 ) + 0x28 ) && ( lVar2 = graphite2::GlyphCache::glyph(( ushort ) * (long*)( *(long*)( param_1 + 0x88 ) + 0x78 )) ),lVar2 != 0 ) )) {
            sVar1 = graphite2::sparse::operator []((short)lVar2 + 0x18);
            return (int)sVar1;
         }

         return 0;
      }

   }

   return (int)*(short*)( lVar2 + 8 + (long)(int)( (uint)param_2 + (uint)param_2 * 4 + (uint)param_3 ) * 2 );
}
/* graphite2::Slot::getAttr(graphite2::Segment const*, gr_attrCode, unsigned char) const */ulong graphite2::Slot::getAttr(Slot *this, Segment *param_1, uint param_3, byte param_4) {
   code *pcVar1;
   uint uVar2;
   undefined4 uVar4;
   ulong uVar3;
   uVar2 = param_3 - 0x19;
   if (( uVar2 < 0x14 ) && ( param_3 != 0x1d )) {
      uVar3 = getJustify(this, param_1, ( uchar )(uVar2 / 5), ( uchar )(uVar2 % 5));
      return uVar3;
   }

   uVar4 = ( undefined4 )(( ulong )((long)&switchD_00100296::switchdataD_00101a44 + (long)(int)( &switchD_00100296::switchdataD_00101a44 )[param_3]) >> 0x20);
   switch (param_3) {
      case 0:
    return CONCAT44(uVar4,(int)*(float *)(this + 0x50));
      case 1:
    return CONCAT44(uVar4,(int)*(float *)(this + 0x54));
      case 2:
    return (ulong)(*(long *)(this + 0x28) != 0);
      case 3:
    return CONCAT44(uVar4,(int)*(float *)(this + 0x58));
      case 4:
    return CONCAT44(uVar4,(int)*(float *)(this + 0x5c));
      case 8:
    return CONCAT44(uVar4,(int)*(float *)(this + 0x60));
      case 9:
    return CONCAT44(uVar4,(int)*(float *)(this + 100));
      case 0xd:
    return (ulong)(byte)this[0x6d];
      case 0xe:
    if ((ulong)*(uint *)(this + 0x14) < *(ulong *)(param_1 + 0xb8)) {
      return (ulong)(uint)(int)*(char *)((ulong)*(uint *)(this + 0x14) * 0x20 +
                                         *(long *)(param_1 + 0x78) + 0x19);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
      case 0x10:
    return (ulong)((byte)param_1[0xc4] & 1);
      case 0x11:
    return (ulong)(((byte)this[0x6c] >> 1 ^ 1) & 1);
      case 0x12:
    return CONCAT44(uVar4,(int)*(float *)(this + 0x40));
      case 0x13:
    return CONCAT44(uVar4,(int)*(float *)(this + 0x44));
      case 0x14:
    return CONCAT44(uVar4,(int)*(float *)(this + 0x48));
      case 0x15:
    return CONCAT44(uVar4,(int)*(float *)(this + 0x4c));
      case 0x16:
    param_4 = 0;
      case 0x37:
    if (param_4 < *(byte *)(*(long *)(param_1 + 0x90) + 0x32)) {
      return (ulong)(uint)(int)*(short *)(*(long *)(this + 0x70) + (ulong)param_4 * 2);
    }
    return 0;
      case 0x17:
      case 0x18:
    return 0xffffffff;
      case 0x1d:
    return CONCAT44(uVar4,(int)*(float *)(this + 0x68));
      case 0x36:
    if ((ulong)*(uint *)(this + 0x14) < *(ulong *)(param_1 + 0xb8)) {
      return (ulong)(*(byte *)((ulong)*(uint *)(this + 0x14) * 0x20 + *(long *)(param_1 + 0x78) +
                              0x1a) & 3);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
      case 0x38:
    return (ulong)(byte)this[0x6f];
      case 0x39:
    if (*(long *)(param_1 + 0x80) != 0) {
      return (ulong)*(ushort *)
                     (*(long *)(param_1 + 0x80) + 0x2c + (ulong)*(uint *)(this + 0x20) * 0x44);
    }
    break;
      case 0x3a:
    if (*(long *)(param_1 + 0x80) != 0) {
      return CONCAT44((int)((ulong)*(uint *)(this + 0x20) * 0x11 >> 0x20),
                      (int)*(float *)(*(long *)(param_1 + 0x80) +
                                     (ulong)*(uint *)(this + 0x20) * 0x44));
    }
    break;
      case 0x3b:
    if (*(long *)(param_1 + 0x80) != 0) {
      return CONCAT44((int)((ulong)*(uint *)(this + 0x20) * 0x11 >> 0x20),
                      (int)*(float *)(*(long *)(param_1 + 0x80) + 4 +
                                     (ulong)*(uint *)(this + 0x20) * 0x44));
    }
    break;
      case 0x3c:
    if (*(long *)(param_1 + 0x80) != 0) {
      return CONCAT44((int)((ulong)*(uint *)(this + 0x20) * 0x11 >> 0x20),
                      (int)*(float *)(*(long *)(param_1 + 0x80) + 8 +
                                     (ulong)*(uint *)(this + 0x20) * 0x44));
    }
    break;
      case 0x3d:
    if (*(long *)(param_1 + 0x80) != 0) {
      return CONCAT44((int)((ulong)*(uint *)(this + 0x20) * 0x11 >> 0x20),
                      (int)*(float *)(*(long *)(param_1 + 0x80) + 0xc +
                                     (ulong)*(uint *)(this + 0x20) * 0x44));
    }
    break;
      case 0x3e:
    if (*(long *)(param_1 + 0x80) != 0) {
      return CONCAT44((int)((ulong)*(uint *)(this + 0x20) * 0x11 >> 0x20),
                      (int)*(float *)(*(long *)(param_1 + 0x80) + 0x18 +
                                     (ulong)*(uint *)(this + 0x20) * 0x44));
    }
    break;
      case 0x3f:
    if (*(long *)(param_1 + 0x80) != 0) {
      return CONCAT44((int)((ulong)*(uint *)(this + 0x20) * 0x11 >> 0x20),
                      (int)*(float *)(*(long *)(param_1 + 0x80) + 0x1c +
                                     (ulong)*(uint *)(this + 0x20) * 0x44));
    }
    break;
      case 0x40:
    if (*(long *)(param_1 + 0x80) != 0) {
      return (ulong)*(ushort *)
                     (*(long *)(param_1 + 0x80) + 0x28 + (ulong)*(uint *)(this + 0x20) * 0x44);
    }
    break;
      case 0x41:
    if (*(long *)(param_1 + 0x80) != 0) {
      return (ulong)*(ushort *)
                     (*(long *)(param_1 + 0x80) + 0x2a + (ulong)*(uint *)(this + 0x20) * 0x44);
    }
    break;
      case 0x42:
    if (*(long *)(param_1 + 0x80) != 0) {
      return (ulong)*(ushort *)
                     (*(long *)(param_1 + 0x80) + 0x2e + (ulong)*(uint *)(this + 0x20) * 0x44);
    }
    break;
      case 0x43:
    if (*(long *)(param_1 + 0x80) != 0) {
      return CONCAT44((int)((ulong)*(uint *)(this + 0x20) * 0x11 >> 0x20),
                      (int)*(float *)(*(long *)(param_1 + 0x80) + 0x20 +
                                     (ulong)*(uint *)(this + 0x20) * 0x44));
    }
    break;
      case 0x44:
    if (*(long *)(param_1 + 0x80) != 0) {
      return CONCAT44((int)((ulong)*(uint *)(this + 0x20) * 0x11 >> 0x20),
                      (int)*(float *)(*(long *)(param_1 + 0x80) + 0x24 +
                                     (ulong)*(uint *)(this + 0x20) * 0x44));
    }
    break;
      case 0x45:
    if (*(long *)(param_1 + 0x80) != 0) {
      return (ulong)*(ushort *)
                     (*(long *)(param_1 + 0x80) + 0x30 + (ulong)*(uint *)(this + 0x20) * 0x44);
    }
    break;
      case 0x46:
    if (*(long *)(param_1 + 0x80) != 0) {
      return (ulong)*(ushort *)
                     (*(long *)(param_1 + 0x80) + 0x32 + (ulong)*(uint *)(this + 0x20) * 0x44);
    }
    break;
      case 0x47:
    if (*(long *)(param_1 + 0x80) != 0) {
      return (ulong)*(ushort *)
                     (*(long *)(param_1 + 0x80) + 0x34 + (ulong)*(uint *)(this + 0x20) * 0x44);
    }
    break;
      case 0x48:
    if (*(long *)(param_1 + 0x80) != 0) {
      return (ulong)(uint)(int)*(short *)(*(long *)(param_1 + 0x80) + 0x36 +
                                         (ulong)*(uint *)(this + 0x20) * 0x44);
    }
    break;
      case 0x49:
    if (*(long *)(param_1 + 0x80) != 0) {
      return (ulong)*(ushort *)
                     (*(long *)(param_1 + 0x80) + 0x38 + (ulong)*(uint *)(this + 0x20) * 0x44);
    }
    break;
      case 0x4a:
    if (*(long *)(param_1 + 0x80) != 0) {
      return (ulong)(uint)(int)*(short *)(*(long *)(param_1 + 0x80) + 0x3a +
                                         (ulong)*(uint *)(this + 0x20) * 0x44);
    }
    break;
      case 0x4b:
    if (*(long *)(param_1 + 0x80) != 0) {
      return (ulong)*(ushort *)
                     (*(long *)(param_1 + 0x80) + 0x3c + (ulong)*(uint *)(this + 0x20) * 0x44);
    }
    break;
      case 0x4c:
    if (*(long *)(param_1 + 0x80) != 0) {
      return (ulong)*(ushort *)
                     (*(long *)(param_1 + 0x80) + 0x3e + (ulong)*(uint *)(this + 0x20) * 0x44);
    }
    break;
      case 0x4d:
    if (*(long *)(param_1 + 0x80) != 0) {
      return (ulong)*(ushort *)
                     (*(long *)(param_1 + 0x80) + 0x40 + (ulong)*(uint *)(this + 0x20) * 0x44);
    }
   }

   return 0;
}
/* graphite2::Slot::child(graphite2::Slot*) */undefined8 graphite2::Slot::child(Slot *this, Slot *param_1) {
   Slot *pSVar1;
   Slot *pSVar2;
   if (this == param_1) {
      return 0;
   }

   pSVar1 = *(Slot**)( this + 0x30 );
   if (pSVar1 != param_1) {
      if (pSVar1 == (Slot*)0x0) {
         *(Slot**)( this + 0x30 ) = param_1;
      }
 else {
         while (pSVar2 = pSVar1,pSVar1 = *(Slot**)( pSVar2 + 0x38 ),param_1 != pSVar1) {
            if (( param_1 == (Slot*)0x0 ) || ( pSVar1 == (Slot*)0x0 )) {
               *(Slot**)( pSVar2 + 0x38 ) = param_1;
               return 1;
            }

         }
;
      }

   }

   return 1;
}
/* graphite2::Slot::sibling(graphite2::Slot*) */void graphite2::Slot::sibling(Slot *param_1) {
   FUN_00100706();
   return;
}
undefined8 FUN_00100706(long param_1, long param_2) {
   long lVar1;
   while (true) {
      lVar1 = param_1;
      if (lVar1 == param_2) {
         return 0;
      }

      param_1 = *(long*)( lVar1 + 0x38 );
      if (param_1 == param_2) break;
      if (( param_2 == 0 ) || ( param_1 == 0 )) {
         *(long*)( lVar1 + 0x38 ) = param_2;
         return 1;
      }

   }
;
   return 1;
}
/* graphite2::Slot::removeChild(graphite2::Slot*) */bool graphite2::Slot::removeChild(Slot *this, Slot *param_1) {
   Slot *pSVar1;
   Slot *pSVar2;
   undefined8 uVar3;
   Slot *pSVar4;
   if (this != param_1) {
      pSVar1 = *(Slot**)( this + 0x30 );
      if (pSVar1 != (Slot*)0x0 && param_1 != (Slot*)0x0) {
         pSVar2 = pSVar1;
         if (pSVar1 == param_1) {
            uVar3 = *(undefined8*)( pSVar1 + 0x38 );
            *(undefined8*)( pSVar1 + 0x38 ) = 0;
            *(undefined8*)( this + 0x30 ) = uVar3;
         }
 else {
            do {
               pSVar4 = pSVar2;
               pSVar2 = *(Slot**)( pSVar4 + 0x38 );
               if (pSVar2 == (Slot*)0x0) {
                  return pSVar1 == (Slot*)0x0 || param_1 == (Slot*)0x0;
               }

            }
 while ( pSVar2 != param_1 );
            *(undefined8*)( pSVar4 + 0x38 ) = *(undefined8*)( pSVar2 + 0x38 );
            *(undefined8*)( pSVar2 + 0x38 ) = 0;
         }

         return true;
      }

   }

   return false;
}
/* graphite2::Slot::setGlyph(graphite2::Segment*, unsigned short, graphite2::GlyphFace const*) */void graphite2::Slot::setGlyph(Slot *this, Segment *param_1, ushort param_2, GlyphFace *param_3) {
   undefined4 uVar1;
   ushort uVar2;
   long lVar3;
   byte bVar4;
   ushort uVar5;
   GlyphFace *pGVar6;
   ushort uVar7;
   *(ushort*)( this + 0x10 ) = param_2;
   this[0x6e] = (Slot)0xff;
   if (param_3 == (GlyphFace*)0x0) {
      if (*(ushort*)( *(long*)( *(long*)( param_1 + 0x88 ) + 0x78 ) + 0x28 ) <= param_2) {
         LAB_00100875:*(undefined8*)( this + 0x50 ) = 0;
         *(undefined2*)( this + 0x12 ) = 0;
         return;
      }

      param_3 = (GlyphFace*)graphite2::GlyphCache::glyph(( ushort ) * (long*)( *(long*)( param_1 + 0x88 ) + 0x78 ));
      if (param_3 == (GlyphFace*)0x0) goto LAB_00100875;
   }

   uVar7 = (short)param_3 + 0x18;
   uVar5 = graphite2::sparse::operator [](uVar7);
   lVar3 = *(long*)( *(long*)( param_1 + 0x88 ) + 0x78 );
   uVar2 = *(ushort*)( lVar3 + 0x28 );
   if (uVar2 < uVar5) {
      *(undefined2*)( this + 0x12 ) = 0;
   }
 else {
      *(ushort*)( this + 0x12 ) = uVar5;
      if (( uVar5 < uVar2 ) && ( uVar5 != 0 )) {
         pGVar6 = (GlyphFace*)graphite2::GlyphCache::glyph((ushort)lVar3);
         if (pGVar6 != (GlyphFace*)0x0) goto LAB_0010080f;
      }

   }

   pGVar6 = param_3;
   LAB_0010080f:uVar1 = *(undefined4*)( pGVar6 + 0x10 );
   lVar3 = *(long*)( param_1 + 0x90 );
   *(undefined4*)( this + 0x54 ) = 0;
   *(undefined4*)( this + 0x50 ) = uVar1;
   if (*(char*)( lVar3 + 0x35 ) != '\0') {
      bVar4 = graphite2::sparse::operator [](uVar7);
      param_1[0xc6] = ( Segment )((byte)param_1[0xc6] & bVar4);
      if (0x10 < *(byte*)( *(long*)( param_1 + 0x90 ) + 0x28 )) {
         graphite2::sparse::operator [](uVar7);
         param_1[0xc6] = (Segment)0x0;
      }

   }

   return;
}
/* graphite2::Slot::floodShift(graphite2::Position, int) */void graphite2::Slot::floodShift(undefined8 param_1, Slot *this, int param_3) {
   if (param_3 < 0x65) {
      param_3 = param_3 + 1;
      do {
         *(ulong*)( this + 0x40 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x40 ) >> 0x20 ) + (float)( (ulong)param_1 >> 0x20 ), (float)*(undefined8*)( this + 0x40 ) + (float)param_1);
         if (*(long*)( this + 0x30 ) != 0) {
            floodShift(*(long*)( this + 0x30 ), param_3);
         }

         this * (Slot**)( this + 0x38 );
      }
 while ( ( this != (Slot*)0x0 ) && ( param_3 = param_3 != 0x66 ) );
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* graphite2::Slot::finalise(graphite2::Segment const*, graphite2::Font const*,
   graphite2::Position&, graphite2::Rect&, unsigned char, float&, bool, bool, int) [clone .part.0]
    */ulong graphite2::Slot::finalise(Slot *this, Segment *param_1, Font *param_2, Position *param_3, Rect *param_4, uchar param_5, float *param_6, bool param_7, bool param_8, int param_9) {
   float *pfVar1;
   float fVar2;
   float fVar3;
   undefined8 uVar4;
   Slot *pSVar5;
   float *pfVar6;
   long lVar7;
   int iVar8;
   ushort uVar9;
   float fVar10;
   undefined8 extraout_XMM0_Qb;
   undefined1 auVar11[16];
   undefined8 extraout_XMM0_Qb_00;
   float fVar12;
   float fVar13;
   ulong uVar14;
   undefined1 auVar15[16];
   float fVar16;
   float fVar17;
   undefined1 auVar18[16];
   undefined1 auVar19[12];
   fVar12 = _LC2;
   if (param_2 != (Font*)0x0) {
      fVar12 = *(float*)( param_2 + 0x38 );
   }

   fVar17 = *(float*)( this + 0x4c );
   fVar13 = (float)(int)( -(uint)param_7 | 1 ) * *(float*)( this + 0x48 ) + *(float*)( this + 0x68 );
   fVar10 = *(float*)( this + 0x68 ) + *(float*)( this + 0x50 );
   if (( ( param_8 ) && ( *(long*)( param_1 + 0x80 ) != 0 ) ) && ( ( lVar7 = *(long*)( param_1 + 0x80 ) + ( ulong ) * (uint*)( this + 0x20 ) * 0x44(*(byte*)( lVar7 + 0x2c ) & 0x10) == 0 || ( param_7 ) ) )) {
      fVar17 = fVar17 + *(float*)( lVar7 + 0x1c );
      fVar13 = fVar13 + *(float*)( lVar7 + 0x18 );
   }

   uVar9 = *(ushort*)( this + 0x12 );
   if (uVar9 == 0) {
      uVar9 = *(ushort*)( this + 0x10 );
   }

   if (uVar9 < *(ushort*)( *(long*)( *(long*)( param_1 + 0x88 ) + 0x78 ) + 0x28 )) {
      pfVar6 = (float*)graphite2::GlyphCache::glyph(( ushort ) * (long*)( *(long*)( param_1 + 0x88 ) + 0x78 ));
      if (param_2 != (Font*)0x0) {
         fVar12 = *(float*)( param_2 + 0x38 );
         fVar13 = fVar13 * fVar12;
         fVar17 = fVar17 * fVar12;
         if (( param_2[0x3c] == (Font)0x0 ) || ( pfVar6 == (float*)0x0 )) goto LAB_00100c8a;
         fVar16 = *(float*)( this + 0x50 );
         fVar2 = pfVar6[4];
         fVar3 = *(float*)( this + 0x68 );
         uVar9 = *(ushort*)( this + 0x12 );
         if (uVar9 == 0) {
            uVar9 = *(ushort*)( this + 0x10 );
         }

         pfVar1 = (float*)( *(long*)( param_2 + 0x28 ) + (ulong)uVar9 * 4 );
         fVar10 = *pfVar1;
         if (fVar10 == __LC3) {
            fVar10 = (float)( **(code**)( param_2 + 0x10 ) )(*(undefined8*)( param_2 + 0x20 ));
            *pfVar1 = fVar10;
            fVar10 = *(float*)( *(long*)( param_2 + 0x28 ) + (ulong)uVar9 * 4 );
         }

         fVar10 = fVar10 + ( ( fVar16 - fVar2 ) + fVar3 ) * fVar12;
      }

   }
 else {
      pfVar6 = (float*)0x0;
      if (param_2 != (Font*)0x0) {
         fVar12 = *(float*)( param_2 + 0x38 );
         pfVar6 = (float*)0x0;
         fVar13 = fVar13 * fVar12;
         fVar17 = fVar17 * fVar12;
         LAB_00100c8a:fVar10 = fVar10 * fVar12;
      }

   }

   lVar7 = *(long*)( this + 0x28 );
   fVar16 = (float)*(undefined8*)param_3 + fVar13;
   fVar17 = (float)( ( ulong ) * (undefined8*)param_3 >> 0x20 ) + fVar17;
   *(ulong*)( this + 0x40 ) = CONCAT44(fVar17, fVar16);
   if (lVar7 == 0) {
      fVar17 = *(float*)( this + 0x54 );
      uVar4 = *(undefined8*)param_3;
      *param_6 = fVar16;
      auVar15._0_4_ = fVar10 + (float)uVar4;
      auVar15._4_4_ = fVar17 * fVar12 + (float)( (ulong)uVar4 >> 0x20 );
      auVar15._8_8_ = 0;
   }
 else {
      fVar16 = ( (float)*(undefined8*)( this + 0x58 ) - (float)*(undefined8*)( this + 0x60 ) ) * fVar12 + fVar16;
      *(ulong*)( this + 0x40 ) = CONCAT44(( (float)( ( ulong ) * (undefined8*)( this + 0x58 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( this + 0x60 ) >> 0x20 ) ) * fVar12 + fVar17, fVar16);
      if (__LC4 <= *(float*)( this + 0x50 )) {
         fVar13 = ( fVar10 + fVar16 ) - fVar13;
      }
 else {
         auVar15 = ZEXT816(0);
         if (0.0 <= fVar16) goto LAB_00100b78;
         fVar13 = 0.0;
      }

      if (fVar16 < *param_6) {
         *param_6 = fVar16;
      }

      auVar15 = ZEXT416((uint)fVar13);
   }

   LAB_00100b78:if (pfVar6 != (float*)0x0) {
      fVar10 = pfVar6[2] * fVar12 + *(float*)( this + 0x40 );
      fVar13 = pfVar6[3] * fVar12 + *(float*)( this + 0x44 );
      fVar17 = pfVar6[1] * fVar12 + *(float*)( this + 0x44 );
      if (*(float*)( param_4 + 4 ) <= fVar17) {
         fVar17 = *(float*)( param_4 + 4 );
      }

      fVar12 = fVar12 * *pfVar6 + *(float*)( this + 0x40 );
      if (*(float*)param_4 <= fVar12) {
         fVar12 = *(float*)param_4;
      }

      fVar16 = *(float*)( param_4 + 0xc );
      if (*(float*)( param_4 + 0xc ) <= fVar13) {
         fVar16 = fVar13;
      }

      fVar13 = *(float*)( param_4 + 8 );
      if (*(float*)( param_4 + 8 ) <= fVar10) {
         fVar13 = fVar10;
      }

      *(float*)param_4 = fVar12;
      *(float*)( param_4 + 4 ) = fVar17;
      *(float*)( param_4 + 8 ) = fVar13;
      *(float*)( param_4 + 0xc ) = fVar16;
   }

   pSVar5 = *(Slot**)( this + 0x30 );
   if (( ( this == pSVar5 ) || ( pSVar5 == (Slot*)0x0 ) ) || ( this != *(Slot**)( pSVar5 + 0x28 ) )) {
      if (lVar7 == 0) goto LAB_00100cd0;
   }
 else {
      auVar18 = ZEXT816(0);
      if (( param_9 != 100 ) && ( ( param_5 == '\0' || ( (byte)pSVar5[0x6d] <= param_5 ) ) )) {
         auVar18._0_8_ = finalise(pSVar5, param_1, param_2, (Position*)( this + 0x40 ), param_4, param_5, param_6, param_7, param_8, param_9 + 1);
         auVar18._8_8_ = extraout_XMM0_Qb;
         lVar7 = *(long*)( this + 0x28 );
         auVar15._8_8_ = 0;
      }

      if (lVar7 == 0) {
         if (auVar15._0_4_ < auVar18._0_4_) {
            auVar15 = auVar18;
         }

         goto LAB_00100cd0;
      }

      if (( __LC4 <= *(float*)( this + 0x50 ) ) && ( auVar15._0_4_ < auVar18._0_4_ )) {
         auVar15 = auVar18;
      }

   }

   pSVar5 = *(Slot**)( this + 0x38 );
   if (this == pSVar5) {
      return auVar15._0_8_;
   }

   if (pSVar5 == (Slot*)0x0) {
      return auVar15._0_8_;
   }

   if (*(long*)( pSVar5 + 0x28 ) != lVar7) {
      return auVar15._0_8_;
   }

   auVar11 = ZEXT816(0);
   if (( param_9 != 100 ) && ( ( param_5 == '\0' || ( (byte)pSVar5[0x6d] <= param_5 ) ) )) {
      auVar11._0_8_ = finalise(pSVar5, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9 + 1);
      auVar11._8_8_ = extraout_XMM0_Qb_00;
      auVar15._8_8_ = 0;
   }

   if (auVar15._0_4_ < auVar11._0_4_) {
      auVar15 = auVar11;
   }

   if (*(long*)( this + 0x28 ) != 0) {
      return auVar15._0_8_;
   }

   LAB_00100cd0:uVar14 = auVar15._0_8_;
   if (*param_6 < *(float*)param_3) {
      lVar7 = *(long*)( this + 0x30 );
      fVar12 = *(float*)( this + 0x40 ) - *param_6;
      *(ulong*)( this + 0x40 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x40 ) >> 0x20 ) + 0.0, (float)*(undefined8*)( this + 0x40 ) + fVar12);
      if (lVar7 != 0) {
         iVar8 = 1;
         fVar17 = 0.0;
         auVar18 = ZEXT416((uint)fVar12);
         do {
            auVar19._8_4_ = iVar8;
            auVar19._0_8_ = lVar7;
            *(ulong*)( lVar7 + 0x40 ) = CONCAT44(*(float*)( lVar7 + 0x44 ) + fVar17, *(float*)( lVar7 + 0x40 ) + fVar12);
            if (*(long*)( lVar7 + 0x30 ) != 0) {
               auVar19 = floodShift(auVar18._0_8_, *(long*)( lVar7 + 0x30 ), iVar8);
            }

            uVar14 = auVar15._0_8_;
            lVar7 = *(long*)( auVar19._0_8_ + 0x38 );
         }
 while ( ( lVar7 != 0 ) && ( iVar8 = iVar8 != 0x66 ) );
      }

      uVar14 = CONCAT44((float)( uVar14 >> 0x20 ) + 0.0, fVar12 + (float)uVar14);
   }

   return uVar14;
}
/* graphite2::Slot::finalise(graphite2::Segment const*, graphite2::Font const*,
   graphite2::Position&, graphite2::Rect&, unsigned char, float&, bool, bool, int) */undefined8 graphite2::Slot::finalise(Slot *this, Segment *param_1, Font *param_2, Position *param_3, Rect *param_4, uchar param_5, float *param_6, bool param_7, bool param_8, int param_9) {
   undefined8 uVar1;
   if (( param_9 < 0x65 ) && ( ( param_5 == '\0' || ( (byte)this[0x6d] <= param_5 ) ) )) {
      uVar1 = finalise(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);
      return uVar1;
   }

   return 0;
}
/* graphite2::Slot::clusterMetric(graphite2::Segment const*, unsigned char, unsigned char, bool) */int graphite2::Slot::clusterMetric(Slot *this, Segment *param_1, uchar param_2, uchar param_3, bool param_4) {
   int iVar1;
   undefined8 *puVar2;
   ushort uVar3;
   long in_FS_OFFSET;
   undefined8 uVar4;
   float local_54;
   undefined8 local_50;
   undefined8 local_48;
   undefined8 uStack_40;
   long local_30;
   uVar3 = *(ushort*)( this + 0x12 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   if (uVar3 == 0) {
      uVar3 = *(ushort*)( this + 0x10 );
   }

   if (uVar3 < *(ushort*)( *(long*)( *(long*)( param_1 + 0x88 ) + 0x78 ) + 0x28 )) {
      puVar2 = (undefined8*)graphite2::GlyphCache::glyph(( ushort ) * (long*)( *(long*)( param_1 + 0x88 ) + 0x78 ));
      local_54 = 0.0;
      local_48 = *puVar2;
      uStack_40 = puVar2[1];
      if (( param_3 == '\0' ) || ( (byte)this[0x6d] <= param_3 )) {
         uVar4 = finalise(this, param_1, (Font*)0x0, (Position*)&local_50, (Rect*)&local_48, param_3, &local_54, param_4, false, 0);
      }
 else {
         uVar4 = 0;
      }

      switch (param_2) {
         case '\0':
         case '\x04':
      iVar1 = (int)(float)local_48;
      break;
         case '\x01':
      iVar1 = (int)((float)uVar4 - (float)uStack_40);
      break;
         case '\x02':
      iVar1 = (int)uStack_40._4_4_;
      break;
         case '\x03':
      iVar1 = (int)local_48._4_4_;
      break;
         case '\x05':
      iVar1 = (int)(float)uStack_40;
      break;
         case '\x06':
      iVar1 = (int)(uStack_40._4_4_ - local_48._4_4_);
      break;
         case '\a':
      iVar1 = (int)((float)uStack_40 - (float)local_48);
      break;
         case '\b':
      iVar1 = (int)(float)uVar4;
      break;
         case '\t':
      iVar1 = (int)(float)((ulong)uVar4 >> 0x20);
      break;
         default:
      goto switchD_00100ff5_default;
      }

   }
 else {
      switchD_00100ff5_default:iVar1 = 0;
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
/* graphite2::SlotJustify::LoadSlot(graphite2::Slot const*, graphite2::Segment const*) */void graphite2::SlotJustify::LoadSlot(SlotJustify *this, Slot *param_1, Segment *param_2) {
   byte bVar1;
   undefined2 uVar2;
   long lVar3;
   SlotJustify *pSVar4;
   int iVar5;
   bVar1 = *(byte*)( *(long*)( param_2 + 0x90 ) + 0x29 );
   if (bVar1 != 0) {
      iVar5 = bVar1 - 1;
      pSVar4 = this + (ulong)bVar1 * 10;
      do {
         uVar2 = 0;
         lVar3 = *(long*)( *(long*)( param_2 + 0x88 ) + 0x78 );
         if (*(ushort*)( param_1 + 0x10 ) < *(ushort*)( lVar3 + 0x28 )) {
            lVar3 = graphite2::GlyphCache::glyph((ushort)lVar3);
            uVar2 = 0;
            if (lVar3 != 0) {
               uVar2 = graphite2::sparse::operator []((short)lVar3 + 0x18);
            }

            lVar3 = *(long*)( *(long*)( param_2 + 0x88 ) + 0x78 );
         }

         *(undefined2*)( pSVar4 + -2 ) = uVar2;
         uVar2 = 0;
         if (*(ushort*)( param_1 + 0x10 ) < *(ushort*)( lVar3 + 0x28 )) {
            lVar3 = graphite2::GlyphCache::glyph((ushort)lVar3);
            uVar2 = 0;
            if (lVar3 != 0) {
               uVar2 = graphite2::sparse::operator []((short)lVar3 + 0x18);
            }

            lVar3 = *(long*)( *(long*)( param_2 + 0x88 ) + 0x78 );
         }

         *(undefined2*)pSVar4 = uVar2;
         uVar2 = 0;
         if (*(ushort*)( param_1 + 0x10 ) < *(ushort*)( lVar3 + 0x28 )) {
            lVar3 = graphite2::GlyphCache::glyph((ushort)lVar3);
            uVar2 = 0;
            if (lVar3 != 0) {
               uVar2 = graphite2::sparse::operator []((short)lVar3 + 0x18);
            }

            lVar3 = *(long*)( *(long*)( param_2 + 0x88 ) + 0x78 );
         }

         *(undefined2*)( pSVar4 + 2 ) = uVar2;
         if (( *(ushort*)( param_1 + 0x10 ) < *(ushort*)( lVar3 + 0x28 ) ) && ( lVar3 = lVar3 != 0 )) {
            uVar2 = graphite2::sparse::operator []((short)lVar3 + 0x18);
         }
 else {
            uVar2 = 0;
         }

         iVar5 = iVar5 + -1;
         *(undefined2*)( pSVar4 + 4 ) = uVar2;
         pSVar4 = pSVar4 + -10;
      }
 while ( iVar5 != -1 );
      return;
   }

   return;
}
/* graphite2::Slot::setJustify(graphite2::Segment*, unsigned char, unsigned char, short) */void graphite2::Slot::setJustify(Slot *this, Segment *param_1, uchar param_2, uchar param_3, short param_4) {
   SlotJustify *this_00;
   if (( param_2 == '\0' ) || ( param_2 < *(byte*)( *(long*)( param_1 + 0x90 ) + 0x29 ) )) {
      this_00 = *(SlotJustify**)( this + 0x78 );
      if (this_00 == (SlotJustify*)0x0) {
         this_00 = (SlotJustify*)graphite2::Segment::newJustify();
         if (this_00 == (SlotJustify*)0x0) {
            return;
         }

         SlotJustify::LoadSlot(this_00, this, param_1);
         *(SlotJustify**)( this + 0x78 ) = this_00;
      }

      *(short*)( this_00 + (long)(int)( (uint)param_2 + (uint)param_2 * 4 + (uint)param_3 ) * 2 + 8 ) = param_4;
   }

   return;
}
/* graphite2::Slot::setAttr(graphite2::Segment*, gr_attrCode, unsigned char, short,
   graphite2::SlotMap const&) */void graphite2::Slot::setAttr(Slot *this, Segment *param_1, int param_3, byte param_4, ushort param_5, long param_6) {
   ushort *puVar1;
   byte *pbVar2;
   undefined4 uVar3;
   Slot *this_00;
   code *pcVar4;
   char cVar5;
   int iVar6;
   undefined8 *puVar7;
   long lVar8;
   Slot *pSVar9;
   Slot SVar10;
   uint uVar11;
   ulong uVar12;
   bool bVar13;
   float fVar14;
   float fVar15;
   undefined8 uVar16;
   float fVar17;
   if (param_3 == 0x16) {
      lVar8 = 0;
      if (*(char*)( *(long*)( param_1 + 0x90 ) + 0x32 ) == '\0') {
         return;
      }

      LAB_0010133f:*(ushort*)( *(long*)( this + 0x70 ) + lVar8 ) = param_5;
      return;
   }

   uVar11 = param_3 - 0x19;
   if (( uVar11 < 0x14 ) && ( param_3 != 0x1d )) {
      setJustify(this, param_1, ( uchar )((ulong)uVar11 / 5), (char)uVar11 + (char)( uVar11 / 5 ) * -5, param_5);
      return;
   }

   SVar10 = SUB21(param_5, 0);
   switch (param_3) {
      case 0:
    *(float *)(this + 0x50) = (float)(int)(short)param_5;
    return;
      case 1:
    *(float *)(this + 0x54) = (float)(int)(short)param_5;
    return;
      case 2:
    if (param_5 < *(ushort *)(param_6 + 0x210)) {
      this_00 = *(Slot **)(param_6 + 0x10 + (ulong)param_5 * 8);
      if ((((this_00 != this) && (this_00 != (Slot *)0x0)) &&
          (pSVar9 = *(Slot **)(this + 0x28), this_00 != pSVar9)) &&
         (uVar11 = (int)(uint)(byte)this_00[0x6c] >> 2 & 1, uVar12 = (ulong)uVar11, uVar11 == 0)) {
        if (pSVar9 != (Slot *)0x0) {
          removeChild(pSVar9,this);
          *(undefined8 *)(this + 0x28) = 0;
        }
        iVar6 = 0;
        pSVar9 = this_00;
        do {
          iVar6 = iVar6 + 1;
          bVar13 = pSVar9 == this;
          pSVar9 = *(Slot **)(pSVar9 + 0x28);
          uVar12 = uVar12 & 0xffffffff;
          if (bVar13) {
            uVar12 = 1;
          }
        } while (pSVar9 != (Slot *)0x0);
        for (lVar8 = *(long *)(this + 0x30); lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x30)) {
          iVar6 = iVar6 + 1;
        }
        for (lVar8 = *(long *)(this + 0x38); lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x38)) {
          iVar6 = iVar6 + 1;
        }
        if (((iVar6 < 100) && ((char)uVar12 != '\x01')) &&
           (cVar5 = child(this_00,this), cVar5 != '\0')) {
          *(Slot **)(this + 0x28) = this_00;
          if ((*(char *)(param_6 + 0x224) != '\0') == param_4 < param_5) {
            uVar3 = *(undefined4 *)(this_00 + 0x50);
            *(undefined4 *)(this + 0x5c) = 0;
            *(undefined4 *)(this + 0x58) = uVar3;
          }
          else {
            *(undefined4 *)(this + 100) = 0;
            *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x50);
          }
        }
      }
      return;
    }
    break;
      case 3:
    *(float *)(this + 0x58) = (float)(int)(short)param_5;
    return;
      case 4:
    *(float *)(this + 0x5c) = (float)(int)(short)param_5;
    return;
      case 8:
    *(float *)(this + 0x60) = (float)(int)(short)param_5;
    return;
      case 9:
    *(float *)(this + 100) = (float)(int)(short)param_5;
    return;
      case 0xd:
    this[0x6d] = SVar10;
    return;
      case 0xe:
    if ((ulong)*(uint *)(this + 0x14) < *(ulong *)(param_1 + 0xb8)) {
      *(Slot *)((ulong)*(uint *)(this + 0x14) * 0x20 + *(long *)(param_1 + 0x78) + 0x19) = SVar10;
      return;
    }
    DAT_00000019 = 0;
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
      case 0x11:
    SVar10 = (Slot)((byte)this[0x6c] | 2);
    if (param_5 != 0) {
      SVar10 = (Slot)((byte)this[0x6c] & 0xfd);
    }
    this[0x6c] = SVar10;
    return;
      case 0x14:
    *(float *)(this + 0x48) = (float)(int)(short)param_5;
    return;
      case 0x15:
    *(float *)(this + 0x4c) = (float)(int)(short)param_5;
    return;
      case 0x1d:
    *(float *)(this + 0x68) = (float)(int)(short)param_5;
    return;
      case 0x36:
    if ((ulong)*(uint *)(this + 0x14) < *(ulong *)(param_1 + 0xb8)) {
      pbVar2 = (byte *)((ulong)*(uint *)(this + 0x14) * 0x20 + *(long *)(param_1 + 0x78) + 0x1a);
      *pbVar2 = *pbVar2 | (byte)SVar10 & 3;
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
      case 0x37:
    lVar8 = (ulong)param_4 * 2;
    goto LAB_0010133f;
      case 0x39:
    if (*(long *)(param_1 + 0x80) != 0) {
      *(ushort *)(*(long *)(param_1 + 0x80) + 0x2c + (ulong)*(uint *)(this + 0x20) * 0x44) = param_5
      ;
      return;
    }
    break;
      case 0x3a:
    if (*(long *)(param_1 + 0x80) != 0) {
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x80) + (ulong)*(uint *)(this + 0x20) * 0x44);
      *(ushort *)((long)puVar7 + 0x2c) = *(ushort *)((long)puVar7 + 0x2c) & 0xffbf;
      *puVar7 = CONCAT44(*(undefined4 *)((long)puVar7 + 4),(float)(int)(short)param_5);
      puVar7[1] = puVar7[1];
      return;
    }
    break;
      case 0x3b:
    if (*(long *)(param_1 + 0x80) == 0) {
      return;
    }
    fVar17 = (float)(int)(short)param_5;
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x80) + (ulong)*(uint *)(this + 0x20) * 0x44);
    uVar16 = puVar7[1];
    goto LAB_00101680;
      case 0x3c:
    if (*(long *)(param_1 + 0x80) == 0) {
      return;
    }
    fVar15 = (float)(int)(short)param_5;
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x80) + (ulong)*(uint *)(this + 0x20) * 0x44);
    fVar14 = *(float *)((long)puVar7 + 0xc);
    goto LAB_001016c7;
      case 0x3d:
    lVar8 = *(long *)(param_1 + 0x80);
    if (lVar8 == 0) {
      return;
    }
    fVar14 = (float)(int)(short)param_5;
    fVar15 = *(float *)(lVar8 + 8 + (ulong)*(uint *)(this + 0x20) * 0x44);
    puVar7 = (undefined8 *)(lVar8 + (ulong)*(uint *)(this + 0x20) * 0x44);
LAB_001016c7:
    fVar17 = *(float *)((long)puVar7 + 4);
    uVar16 = CONCAT44(fVar14,fVar15);
LAB_00101680:
    *(ushort *)((long)puVar7 + 0x2c) = *(ushort *)((long)puVar7 + 0x2c) & 0xffbf;
    *puVar7 = CONCAT44(fVar17,*(undefined4 *)puVar7);
    puVar7[1] = uVar16;
    return;
      case 0x40:
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar8 = *(long *)(param_1 + 0x80) + (ulong)*(uint *)(this + 0x20) * 0x44;
      puVar1 = (ushort *)(lVar8 + 0x2c);
      *puVar1 = *puVar1 & 0xffbf;
      *(ushort *)(lVar8 + 0x28) = param_5;
      return;
    }
    break;
      case 0x41:
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar8 = *(long *)(param_1 + 0x80) + (ulong)*(uint *)(this + 0x20) * 0x44;
      puVar1 = (ushort *)(lVar8 + 0x2c);
      *puVar1 = *puVar1 & 0xffbf;
      *(ushort *)(lVar8 + 0x2a) = param_5;
      return;
    }
    break;
      case 0x42:
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar8 = *(long *)(param_1 + 0x80) + (ulong)*(uint *)(this + 0x20) * 0x44;
      puVar1 = (ushort *)(lVar8 + 0x2c);
      *puVar1 = *puVar1 & 0xffbf;
      *(ushort *)(lVar8 + 0x2e) = param_5;
      return;
    }
    break;
      case 0x43:
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar8 = *(long *)(param_1 + 0x80) + (ulong)*(uint *)(this + 0x20) * 0x44;
      *(ushort *)(lVar8 + 0x2c) = *(ushort *)(lVar8 + 0x2c) & 0xffbf;
      *(ulong *)(lVar8 + 0x20) = CONCAT44(*(undefined4 *)(lVar8 + 0x24),(float)(int)(short)param_5);
      return;
    }
    break;
      case 0x44:
    lVar8 = *(long *)(param_1 + 0x80);
    if (lVar8 != 0) {
      uVar3 = *(undefined4 *)(lVar8 + 0x20 + (ulong)*(uint *)(this + 0x20) * 0x44);
      lVar8 = lVar8 + (ulong)*(uint *)(this + 0x20) * 0x44;
      puVar1 = (ushort *)(lVar8 + 0x2c);
      *puVar1 = *puVar1 & 0xffbf;
      *(ulong *)(lVar8 + 0x20) = CONCAT44((float)(int)(short)param_5,uVar3);
      return;
    }
    break;
      case 0x45:
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar8 = *(long *)(param_1 + 0x80) + (ulong)*(uint *)(this + 0x20) * 0x44;
      puVar1 = (ushort *)(lVar8 + 0x2c);
      *puVar1 = *puVar1 & 0xffbf;
      *(ushort *)(lVar8 + 0x30) = param_5;
      return;
    }
    break;
      case 0x46:
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar8 = *(long *)(param_1 + 0x80) + (ulong)*(uint *)(this + 0x20) * 0x44;
      puVar1 = (ushort *)(lVar8 + 0x2c);
      *puVar1 = *puVar1 & 0xffbf;
      *(ushort *)(lVar8 + 0x32) = param_5;
      return;
    }
    break;
      case 0x47:
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar8 = *(long *)(param_1 + 0x80) + (ulong)*(uint *)(this + 0x20) * 0x44;
      puVar1 = (ushort *)(lVar8 + 0x2c);
      *puVar1 = *puVar1 & 0xffbf;
      *(ushort *)(lVar8 + 0x34) = param_5;
      return;
    }
    break;
      case 0x48:
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar8 = *(long *)(param_1 + 0x80) + (ulong)*(uint *)(this + 0x20) * 0x44;
      puVar1 = (ushort *)(lVar8 + 0x2c);
      *puVar1 = *puVar1 & 0xffbf;
      *(ushort *)(lVar8 + 0x36) = param_5;
      return;
    }
    break;
      case 0x49:
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar8 = *(long *)(param_1 + 0x80) + (ulong)*(uint *)(this + 0x20) * 0x44;
      puVar1 = (ushort *)(lVar8 + 0x2c);
      *puVar1 = *puVar1 & 0xffbf;
      *(ushort *)(lVar8 + 0x38) = param_5;
      return;
    }
    break;
      case 0x4a:
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar8 = *(long *)(param_1 + 0x80) + (ulong)*(uint *)(this + 0x20) * 0x44;
      puVar1 = (ushort *)(lVar8 + 0x2c);
      *puVar1 = *puVar1 & 0xffbf;
      *(ushort *)(lVar8 + 0x3a) = param_5;
      return;
    }
    break;
      case 0x4b:
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar8 = *(long *)(param_1 + 0x80) + (ulong)*(uint *)(this + 0x20) * 0x44;
      puVar1 = (ushort *)(lVar8 + 0x2c);
      *puVar1 = *puVar1 & 0xffbf;
      *(ushort *)(lVar8 + 0x3c) = param_5;
      return;
    }
    break;
      case 0x4c:
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar8 = *(long *)(param_1 + 0x80) + (ulong)*(uint *)(this + 0x20) * 0x44;
      puVar1 = (ushort *)(lVar8 + 0x2c);
      *puVar1 = *puVar1 & 0xffbf;
      *(ushort *)(lVar8 + 0x3e) = param_5;
      return;
    }
    break;
      case 0x4d:
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar8 = *(long *)(param_1 + 0x80) + (ulong)*(uint *)(this + 0x20) * 0x44;
      puVar1 = (ushort *)(lVar8 + 0x2c);
      *puVar1 = *puVar1 & 0xffbf;
      *(ushort *)(lVar8 + 0x40) = param_5;
      return;
    }
   }

   return;
}
/* graphite2::Slot::nextInCluster(graphite2::Slot const*) const */long graphite2::Slot::nextInCluster(Slot *this, Slot *param_1) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 0x30 );
   if (lVar1 == 0) {
      if (*(long*)( param_1 + 0x38 ) != 0) {
         return *(long*)( param_1 + 0x38 );
      }

      do {
         param_1 = *(Slot**)( param_1 + 0x28 );
         if (param_1 == (Slot*)0x0) {
            return 0;
         }

         lVar1 = *(long*)( param_1 + 0x38 );
      }
 while ( lVar1 == 0 );
   }

   return lVar1;
}
/* graphite2::Slot::isChildOf(graphite2::Slot const*) const */Slot * __thiscall graphite2::Slot::isChildOf(Slot *this,Slot *param_1){
   Slot *pSVar1;
   pSVar1 = *(Slot**)( this + 0x28 );
   if (pSVar1 == (Slot*)0x0) {
      return (Slot*)0x0;
   }

   do {
      if (pSVar1 == param_1) {
         return (Slot*)0x1;
      }

      pSVar1 = *(Slot**)( pSVar1 + 0x28 );
   }
 while ( pSVar1 != (Slot*)0x0 );
   return pSVar1;
}
/* graphite2::Slot::getAttr(graphite2::Segment const*, gr_attrCode, unsigned char) const [clone
   .cold] */void graphite2::Slot::getAttr(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* graphite2::Slot::setAttr(graphite2::Segment*, gr_attrCode, unsigned char, short,
   graphite2::SlotMap const&) [clone .cold] */void graphite2::Slot::setAttr(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}

