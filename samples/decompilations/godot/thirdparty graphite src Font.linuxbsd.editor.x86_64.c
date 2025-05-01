
/* graphite2::Font::~Font() */

void __thiscall graphite2::Font::~Font(Font *this)

{
  free(*(void **)(this + 0x28));
  return;
}



/* graphite2::Font::~Font() */

void __thiscall graphite2::Font::~Font(Font *this)

{
  free(*(void **)(this + 0x28));
  free(this);
  return;
}



/* graphite2::Font::Font(float, graphite2::Face const&, void const*, gr_font_ops const*) */

void __thiscall
graphite2::Font::Font(Font *this,float param_1,Face *param_2,void *param_3,gr_font_ops *param_4)

{
  ushort uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  
  lVar2 = *(long *)(param_2 + 0x78);
  *(undefined ***)this = &PTR__Font_00100228;
  fVar9 = param_1 / (float)*(ushort *)(lVar2 + 0x2c);
  if (param_3 == (void *)0x0) {
    *(Font **)(this + 0x20) = this;
    *(Face **)(this + 0x30) = param_2;
    *(float *)(this + 0x38) = fVar9;
  }
  else {
    *(void **)(this + 0x20) = param_3;
    *(Face **)(this + 0x30) = param_2;
    *(float *)(this + 0x38) = fVar9;
    if ((param_4 != (gr_font_ops *)0x0) &&
       ((*(long *)(param_4 + 8) != 0 || (*(long *)(param_4 + 0x10) != 0)))) {
      this[0x3c] = (Font)0x1;
      *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
      *(undefined8 *)(this + 0x18) = 0;
      uVar8 = *(ulong *)param_4;
      uVar7 = 0x18;
      if (uVar8 < 0x19) {
        uVar7 = uVar8;
      }
      uVar6 = (uint)uVar7;
      if (uVar6 < 8) {
        if ((uVar7 & 4) == 0) {
          if ((uVar6 != 0) && (*(gr_font_ops *)(this + 8) = *param_4, (uVar7 & 2) != 0)) {
            *(undefined2 *)(this + (uVar7 & 0xffffffff) + 6) =
                 *(undefined2 *)(param_4 + ((uVar7 & 0xffffffff) - 2));
          }
        }
        else {
          *(undefined4 *)(this + 8) = *(undefined4 *)param_4;
          *(undefined4 *)(this + (uVar7 & 0xffffffff) + 4) =
               *(undefined4 *)(param_4 + ((uVar7 & 0xffffffff) - 4));
        }
      }
      else {
        *(ulong *)(this + 8) = uVar8;
        *(undefined8 *)(this + (uVar7 & 0xffffffff)) =
             *(undefined8 *)(param_4 + ((uVar7 & 0xffffffff) - 8));
        uVar6 = uVar6 + (int)(this + (8 - ((ulong)(this + 0x10) & 0xfffffffffffffff8))) & 0xfffffff8
        ;
        if (7 < uVar6) {
          uVar5 = 0;
          do {
            uVar8 = (ulong)uVar5;
            uVar5 = uVar5 + 8;
            *(undefined8 *)(((ulong)(this + 0x10) & 0xfffffffffffffff8) + uVar8) =
                 *(undefined8 *)
                  (param_4 +
                  (uVar8 - (long)(this + (8 - ((ulong)(this + 0x10) & 0xfffffffffffffff8)))));
          } while (uVar5 < uVar6);
        }
      }
      goto LAB_0010010c;
    }
  }
  this[0x3c] = (Font)0x0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(code **)(this + 0x10) = graphite2::Face::default_glyph_advance;
LAB_0010010c:
  uVar1 = *(ushort *)(*(long *)(param_2 + 0x78) + 0x28);
  uVar8 = (ulong)uVar1;
  puVar4 = (undefined4 *)malloc(uVar8 * 4);
  *(undefined4 **)(this + 0x28) = puVar4;
  uVar3 = _LC0;
  if ((puVar4 != (undefined4 *)0x0) && (uVar8 != 0)) {
    uVar7 = 0;
    if ((uVar1 & 1) != 0) {
      *puVar4 = _LC0;
      uVar7 = 1;
      if (uVar8 == 1) {
        return;
      }
    }
    do {
      puVar4[uVar7] = uVar3;
      puVar4[uVar7 + 1] = uVar3;
      uVar7 = uVar7 + 2;
    } while (uVar8 != uVar7);
  }
  return;
}


